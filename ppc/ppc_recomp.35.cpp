#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8218CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218CCFC) {
	__imp__sub_8218CCFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CD00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,17240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,17240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17240, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218CD00) {
	__imp__sub_8218CD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218CD24) {
	__imp__sub_8218CD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,17240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17240);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8218cd3c
	if (!ctx.cr6.eq) goto loc_8218CD3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218CD3C:
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r8,22216
	ctx.r10.s64 = ctx.r8.s64 + 22216;
	// slw r6,r7,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// subfic r4,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r10.s64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// lhzx r7,r8,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// rotlwi r5,r7,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.s64 = ctx.r11.s64 - ctx.r6.s64;
	// eqv r3,r6,r11
	ctx.r3.u64 = ~(ctx.r6.u64 ^ ctx.r11.u64);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218CD28) {
	__imp__sub_8218CD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r8,22216
	ctx.r6.s64 = ctx.r8.s64 + 22216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,20620(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20620);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// lfs f13,20616(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20616);
	ctx.f13.f64 = double(temp.f32);
	// subfic r4,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r10.s64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// lfsx f12,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218CD98) {
	__imp__sub_8218CD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r8,22216
	ctx.r4.s64 = ctx.r8.s64 + 22216;
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// subfic r3,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r10.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// lfsx f10,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f8,f9,f13,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fnmsubs f7,f8,f8,f0
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f8.f64 - ctx.f0.f64)));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmuls f5,f6,f3
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmsubs f2,f12,f8,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 - ctx.f4.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f1,f11,f8,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f1,4(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218CDE0) {
	__imp__sub_8218CDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218CE54) {
	__imp__sub_8218CE54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fsubs f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// addi r5,r8,22216
	ctx.r5.s64 = ctx.r8.s64 + 22216;
	// lfs f13,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// lfs f12,2424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2424);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// subfic r3,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r10.s64;
	// lfsx f8,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// lfsx f6,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f5,f7,f0,f12
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f3,f4,f11,f2
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fnmsubs f2,f3,f3,f0
	ctx.f2.f64 = double(float(-(ctx.f3.f64 * ctx.f3.f64 - ctx.f0.f64)));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f11,f10,f3,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 - ctx.f13.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f10,f9,f3,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218CE58) {
	__imp__sub_8218CE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218CF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// lfs f3,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f9,f3
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmr f6,f1
	ctx.f6.f64 = ctx.f1.f64;
	// fsubs f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmsubs f5,f4,f6,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 - ctx.f2.f64));
	// fmsubs f1,f4,f11,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f3.f64));
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fcmpu cr6,f4,f10
	ctx.cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// bge cr6,0x8218cfb8
	if (!ctx.cr6.lt) goto loc_8218CFB8;
	// lbz r11,1(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// fsubs f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// lfs f3,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f1,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmsubs f1,f5,f12,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f1.f64));
	// fmsubs f5,f3,f4,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f2.f64));
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fcmpu cr6,f4,f10
	ctx.cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// bge cr6,0x8218cfb8
	if (!ctx.cr6.lt) goto loc_8218CFB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8218CFB8:
	// lfs f5,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmsubs f1,f3,f6,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f4.f64));
	// fmsubs f7,f3,f11,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmuls f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fcmpu cr6,f6,f10
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// bge cr6,0x8218d024
	if (!ctx.cr6.lt) goto loc_8218D024;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// lfs f6,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f4,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmuls f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmsubs f0,f8,f12,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmsubs f13,f3,f7,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8218D024:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218CF00) {
	__imp__sub_8218CF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218D02C) {
	__imp__sub_8218D02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218d0f0
	if (ctx.cr6.eq) goto loc_8218D0F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x8218d0f0
	if (!ctx.cr6.gt) goto loc_8218D0F0;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218d068
	if (!ctx.cr6.eq) goto loc_8218D068;
loc_8218D060:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218D068:
	// lfs f10,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f2,f10
	ctx.cr6.compare(ctx.f2.f64, ctx.f10.f64);
	// ble cr6,0x8218d0f0
	if (!ctx.cr6.gt) goto loc_8218D0F0;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f0,f8,f12,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8218d060
	if (!ctx.cr6.gt) goto loc_8218D060;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f10,f10,f0,f1
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// lfs f11,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x8218d060
	if (ctx.cr6.gt) goto loc_8218D060;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f12,f9,f12,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f10.f64));
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// blt cr6,0x8218d060
	if (ctx.cr6.lt) goto loc_8218D060;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8218D0F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218D030) {
	__imp__sub_8218D030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D0F8) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8218d030
	ctx.lr = 0x8218D120;
	sub_8218D030(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218d140
	if (!ctx.cr6.eq) goto loc_8218D140;
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
loc_8218D140:
	// lwz r7,52(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8218d184
	if (ctx.cr6.eq) goto loc_8218D184;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,56(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r11,1020
	ctx.r5.s64 = ctx.r11.s64 + 1020;
	// addi r4,r9,1020
	ctx.r4.s64 = ctx.r9.s64 + 1020;
	// bl 0x8218cf00
	ctx.lr = 0x8218D174;
	sub_8218CF00(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218d188
	if (!ctx.cr6.eq) goto loc_8218D188;
loc_8218D184:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8218D188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218D0F8) {
	__imp__sub_8218D0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8218D1A0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de018
	ctx.lr = 0x8218D1A8;
	__savefpr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmuls f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f25,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// fmsubs f26,f13,f10,f12
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f12.f64));
	// fcmpu cr6,f26,f25
	ctx.cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// ble cr6,0x8218d2b4
	if (!ctx.cr6.gt) goto loc_8218D2B4;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// rotlwi r11,r10,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,1020
	ctx.r9.s64 = ctx.r11.s64 + 1020;
	// lfs f12,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f11,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmsubs f24,f0,f11,f8
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// fcmpu cr6,f24,f25
	ctx.cr6.compare(ctx.f24.f64, ctx.f25.f64);
	// ble cr6,0x8218d2b4
	if (!ctx.cr6.gt) goto loc_8218D2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f7,f0,f26,f24
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f24.f64)));
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f26,f0
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bgt cr6,0x8218d2b4
	if (ctx.cr6.gt) goto loc_8218D2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f0,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f26,f0
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmsubs f0,f10,f11,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f13.f64));
	// fneg f12,f30
	ctx.f12.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8218d2b4
	if (ctx.cr6.lt) goto loc_8218D2B4;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8218d2b4
	if (ctx.cr6.gt) goto loc_8218D2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fsubs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f12,f28
	ctx.f12.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// fsubs f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8218d2c4
	if (ctx.cr6.lt) goto loc_8218D2C4;
	// li r27,0
	ctx.r27.s64 = 0;
	// fdivs f0,f24,f26
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f26.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stw r27,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r27.u32);
loc_8218D2A4:
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_8218D2AC:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r24,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r24.u32);
loc_8218D2B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de064
	ctx.lr = 0x8218D2C0;
	__restfpr_24(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8218D2C4:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// li r25,1
	ctx.r25.s64 = 1;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8218d3d4
	if (!ctx.cr6.gt) goto loc_8218D3D4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218d304
	if (!ctx.cr6.eq) goto loc_8218D304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8218d304
	if (ctx.cr6.lt) goto loc_8218D304;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
loc_8218D304:
	// fcmpu cr6,f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// ble cr6,0x8218d310
	if (!ctx.cr6.gt) goto loc_8218D310;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
loc_8218D310:
	// rlwinm r11,r10,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// lfs f0,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x8218D340;
	sub_822D4AC8(ctx, base);
	// lfs f10,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// ble cr6,0x8218d358
	if (!ctx.cr6.gt) goto loc_8218D358;
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// ble cr6,0x8218d2b4
	if (!ctx.cr6.gt) goto loc_8218D2B4;
loc_8218D358:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218d0f8
	ctx.lr = 0x8218D378;
	sub_8218D0F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218d2b4
	if (ctx.cr6.eq) goto loc_8218D2B4;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f13,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bge cr6,0x8218d3f8
	if (!ctx.cr6.lt) goto loc_8218D3F8;
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// ble cr6,0x8218d2b4
	if (!ctx.cr6.gt) goto loc_8218D2B4;
	// fmuls f0,f30,f27
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8218d3c4
	if (ctx.cr6.lt) goto loc_8218D3C4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8218D3C4:
	// fdivs f0,f24,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f26.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x8218d2a4
	goto loc_8218D2A4;
loc_8218D3D4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218d4b0
	if (ctx.cr6.eq) goto loc_8218D4B0;
	// fcmpu cr6,f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// ble cr6,0x8218d408
	if (!ctx.cr6.gt) goto loc_8218D408;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x8218d40c
	goto loc_8218D40C;
loc_8218D3F8:
	// stfs f29,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x8218d4b0
	goto loc_8218D4B0;
loc_8218D408:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
loc_8218D40C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218d2b4
	if (ctx.cr6.eq) goto loc_8218D2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,13216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x8218d4b0
	if (!ctx.cr6.gt) goto loc_8218D4B0;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// ble cr6,0x8218d438
	if (!ctx.cr6.gt) goto loc_8218D438;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x8218d43c
	goto loc_8218D43C;
loc_8218D438:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8218D43C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f3,f10,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmsubs f10,f3,f12,f7
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f9,f1,f12,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - ctx.f4.f64));
	// fmadds f8,f6,f1,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f6,f10,f0,f13
	ctx.f6.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f5,f9,f0,f13
	ctx.f5.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fcmpu cr6,f3,f2
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// bgt cr6,0x8218d2b4
	if (ctx.cr6.gt) goto loc_8218D2B4;
loc_8218D4B0:
	// fdivs f0,f24,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f26.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// ble cr6,0x8218d2ac
	if (!ctx.cr6.gt) goto loc_8218D2AC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de064
	ctx.lr = 0x8218D4E4;
	__restfpr_24(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218D198) {
	__imp__sub_8218D198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8218D4F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r28,r11,1020
	ctx.r28.s64 = ctx.r11.s64 + 1020;
loc_8218D514:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218d54c
	if (ctx.cr6.eq) goto loc_8218D54C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218d54c
	if (ctx.cr6.eq) goto loc_8218D54C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218d198
	ctx.lr = 0x8218D54C;
	sub_8218D198(ctx, base);
loc_8218D54C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8218d514
	if (!ctx.cr6.eq) goto loc_8218D514;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218D4E8) {
	__imp__sub_8218D4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218D55C) {
	__imp__sub_8218D55C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8218D568;
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r25.u32);
	// add r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f30.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lfs f31,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
loc_8218D5B0:
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,15364(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15364);
	// bl 0x8218d4e8
	ctx.lr = 0x8218D5C4;
	sub_8218D4E8(ctx, base);
	// lwz r11,15360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15360);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8218d65c
	if (!ctx.cr6.gt) goto loc_8218D65C;
	// lfs f13,1020(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,1024(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1024);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f8,f10,f0,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d7898
	ctx.lr = 0x8218D614;
	sub_822D7898(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r30,15388
	ctx.r29.s64 = ctx.r30.s64 + 15388;
loc_8218D61C:
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d7938
	ctx.lr = 0x8218D630;
	sub_822D7938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218d648
	if (ctx.cr6.eq) goto loc_8218D648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218d4e8
	ctx.lr = 0x8218D648;
	sub_8218D4E8(ctx, base);
loc_8218D648:
	// lwz r11,15360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15360);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218d61c
	if (ctx.cr6.lt) goto loc_8218D61C;
loc_8218D65C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218d6ac
	if (ctx.cr6.eq) goto loc_8218D6AC;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3060);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8218d5b0
	if (!ctx.cr6.gt) goto loc_8218D5B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8218D69C:
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
loc_8218D6AC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218d69c
	if (!ctx.cr6.eq) goto loc_8218D69C;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218D560) {
	__imp__sub_8218D560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218D6D4) {
	__imp__sub_8218D6D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D6D8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,12(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// bl 0x8218a680
	ctx.lr = 0x8218D724;
	sub_8218A680(ctx, base);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218d744
	if (ctx.cr6.eq) goto loc_8218D744;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8218d78c
	if (ctx.cr6.eq) goto loc_8218D78C;
loc_8218D744:
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8218d778
	if (ctx.cr6.eq) goto loc_8218D778;
loc_8218D754:
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218d754
	if (!ctx.cr6.eq) goto loc_8218D754;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8218D778:
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8218D78C:
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218D6D8) {
	__imp__sub_8218D6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15364);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218d7cc
	if (ctx.cr6.eq) goto loc_8218D7CC;
loc_8218D7BC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218d7bc
	if (!ctx.cr6.eq) goto loc_8218D7BC;
loc_8218D7CC:
	// lwz r5,15360(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15360);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x8218d840
	if (!ctx.cr6.gt) goto loc_8218D840;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r8,r3,15384
	ctx.r8.s64 = ctx.r3.s64 + 15384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218D7F0:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8218D7FC:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8218d830
	if (ctx.cr6.eq) goto loc_8218D830;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8218d820
	if (!ctx.cr6.eq) goto loc_8218D820;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8218D820:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218d7fc
	if (!ctx.cr6.eq) goto loc_8218D7FC;
	// b 0x8218d834
	goto loc_8218D834;
loc_8218D830:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8218D834:
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218d7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218D7F0;
loc_8218D840:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82193028
	ctx.lr = 0x8218D848;
	sub_82193028(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218D7A0) {
	__imp__sub_8218D7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D858) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
loc_8218D87C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218d89c
	if (ctx.cr6.eq) goto loc_8218D89C;
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8218d8a0
	if (ctx.cr6.eq) goto loc_8218D8A0;
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
loc_8218D89C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8218D8A0:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218d87c
	if (!ctx.cr6.eq) goto loc_8218D87C;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x8218d94c
	if (!ctx.cr6.gt) goto loc_8218D94C;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218D8C8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
loc_8218D8D8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218d8ec
	if (!ctx.cr6.eq) goto loc_8218D8EC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8218d920
	goto loc_8218D920;
loc_8218D8EC:
	// lbz r30,2(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8218d908
	if (ctx.cr6.eq) goto loc_8218D908;
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// b 0x8218d920
	goto loc_8218D920;
loc_8218D908:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8218d920
	if (!ctx.cr6.eq) goto loc_8218D920;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8218D920:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218d8d8
	if (!ctx.cr6.eq) goto loc_8218D8D8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218d940
	if (ctx.cr6.eq) goto loc_8218D940;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// b 0x8218d944
	goto loc_8218D944;
loc_8218D940:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
loc_8218D944:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8218d8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218D8C8;
loc_8218D94C:
	// bl 0x82193028
	ctx.lr = 0x8218D950;
	sub_82193028(ctx, base);
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

PPC_WEAK_FUNC(sub_8218D858) {
	__imp__sub_8218D858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218D968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
loc_8218D984:
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r7,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x8218d9e4
	if (ctx.cr6.gt) goto loc_8218D9E4;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8218da1c
	if (!ctx.cr6.gt) goto loc_8218DA1C;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// ble cr6,0x8218da1c
	if (!ctx.cr6.gt) goto loc_8218DA1C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x8218da1c
	goto loc_8218DA1C;
loc_8218D9E4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8218da1c
	if (ctx.cr6.gt) goto loc_8218DA1C;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bge cr6,0x8218da1c
	if (!ctx.cr6.lt) goto loc_8218DA1C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8218DA1C:
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8218d984
	if (!ctx.cr6.eq) goto loc_8218D984;
	// neg r11,r8
	ctx.r11.s64 = -ctx.r8.s64;
	// andc r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218D968) {
	__imp__sub_8218D968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218da54
	if (ctx.cr6.eq) goto loc_8218DA54;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8218da58
	if (ctx.cr6.eq) goto loc_8218DA58;
loc_8218DA54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8218DA58:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218DA38) {
	__imp__sub_8218DA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DA60) {
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
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8218db74
	if (ctx.cr6.lt) goto loc_8218DB74;
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8218db74
	if (ctx.cr6.gt) goto loc_8218DB74;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8218db74
	if (ctx.cr6.lt) goto loc_8218DB74;
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8218db74
	if (ctx.cr6.gt) goto loc_8218DB74;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r8,2(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
loc_8218DAC0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218dadc
	if (ctx.cr6.eq) goto loc_8218DADC;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8218dae0
	if (ctx.cr6.eq) goto loc_8218DAE0;
loc_8218DADC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8218DAE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218db0c
	if (ctx.cr6.eq) goto loc_8218DB0C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218dac0
	if (!ctx.cr6.eq) goto loc_8218DAC0;
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
loc_8218DB0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,2416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,1020
	ctx.r9.s64 = ctx.r11.s64 + 1020;
	// addi r9,r10,1020
	ctx.r9.s64 = ctx.r10.s64 + 1020;
	// lfs f13,1020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8218d968
	ctx.lr = 0x8218DB64;
	sub_8218D968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8218DB74:
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

PPC_WEAK_FUNC(sub_8218DA60) {
	__imp__sub_8218DA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8218DB90;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,15360(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15360);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r11,15364
	ctx.r25.s64 = ctx.r11.s64 + 15364;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,15364
	ctx.r28.s64 = ctx.r11.s64 + 15364;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,15364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15364);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8218da60
	ctx.lr = 0x8218DBE4;
	sub_8218DA60(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8218dbf4
	if (ctx.cr6.eq) goto loc_8218DBF4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8218DBF4:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8218dd08
	if (!ctx.cr6.gt) goto loc_8218DD08;
	// addi r23,r31,15384
	ctx.r23.s64 = ctx.r31.s64 + 15384;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_8218DC0C:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8218dca0
	if (ctx.cr6.eq) goto loc_8218DCA0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218da60
	ctx.lr = 0x8218DC24;
	sub_8218DA60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218dca0
	if (ctx.cr6.eq) goto loc_8218DCA0;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218dc58
	if (ctx.cr6.eq) goto loc_8218DC58;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218da60
	ctx.lr = 0x8218DC4C;
	sub_8218DA60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218dca0
	if (!ctx.cr6.eq) goto loc_8218DCA0;
loc_8218DC58:
	// lwz r11,15360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15360, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
loc_8218DC90:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8218dc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DC90;
	// b 0x8218dca8
	goto loc_8218DCA8;
loc_8218DCA0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 + 20;
loc_8218DCA8:
	// lwz r5,15360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8218dc0c
	if (ctx.cr6.lt) goto loc_8218DC0C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8218dd08
	if (ctx.cr6.eq) goto loc_8218DD08;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8218dd08
	if (!ctx.cr6.gt) goto loc_8218DD08;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_8218DCD0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8218dcf8
	if (ctx.cr6.eq) goto loc_8218DCF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
loc_8218DCE8:
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218dce8
	if (!ctx.cr6.eq) goto loc_8218DCE8;
loc_8218DCF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8218dcd0
	if (ctx.cr6.lt) goto loc_8218DCD0;
loc_8218DD08:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d858
	ctx.lr = 0x8218DD18;
	sub_8218D858(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218dd54
	if (ctx.cr6.eq) goto loc_8218DD54;
	// lwz r10,15356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15356);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8218DD2C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8218DD30:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8218dd30
	if (!ctx.cr6.eq) goto loc_8218DD30;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8218dd2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DD2C;
	// stw r10,15356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15356, ctx.r10.u32);
loc_8218DD54:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218DB88) {
	__imp__sub_8218DB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218DD5C) {
	__imp__sub_8218DD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8218DD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r11,15364
	ctx.r4.s64 = ctx.r11.s64 + 15364;
	// stw r9,15364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15364, ctx.r9.u32);
	// bl 0x8218bbd8
	ctx.lr = 0x8218DD9C;
	sub_8218BBD8(ctx, base);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r4,r10,15364
	ctx.r4.s64 = ctx.r10.s64 + 15364;
	// stw r29,15364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15364, ctx.r29.u32);
loc_8218DDBC:
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8218ddbc
	if (!ctx.cr6.eq) goto loc_8218DDBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218bbd8
	ctx.lr = 0x8218DDD4;
	sub_8218BBD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218DD60) {
	__imp__sub_8218DD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218DDDC) {
	__imp__sub_8218DDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f7,f8,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f13,f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fsubs f12,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fabs f4,f12
	ctx.f4.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f10,f5,f4
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x8218de4c
	if (!ctx.cr6.gt) goto loc_8218DE4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f9,f0,f0,f13
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8218DE4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,7540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsel f9,f12,f10,f11
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// lfs f12,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f8,f0,f12,f9
	ctx.f8.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f9.f64)));
	// fmadds f7,f8,f9,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218DDE0) {
	__imp__sub_8218DDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f5,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,7540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7540);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f5
	ctx.f6.f64 = ctx.f5.f64;
	// lfs f2,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f7,f5
	ctx.f7.f64 = ctx.f5.f64;
	// lfs f4,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f3.f64 = double(temp.f32);
loc_8218DEB8:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r8,r9,1020
	ctx.r8.s64 = ctx.r9.s64 + 1020;
	// lfs f12,1020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1020);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,1024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f31,f12,f12
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f9,f11,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f10,f11,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fsubs f9,f0,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fabs f31,f9
	ctx.f31.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fcmpu cr6,f8,f5
	ctx.cr6.compare(ctx.f8.f64, ctx.f5.f64);
	// ble cr6,0x8218df30
	if (!ctx.cr6.gt) goto loc_8218DF30;
	// fnmsubs f7,f0,f0,f10
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fcmpu cr6,f7,f2
	ctx.cr6.compare(ctx.f7.f64, ctx.f2.f64);
	// blt cr6,0x8218df48
	if (ctx.cr6.lt) goto loc_8218DF48;
loc_8218DF30:
	// fcmpu cr6,f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// bge cr6,0x8218df48
	if (!ctx.cr6.lt) goto loc_8218DF48;
	// fsel f13,f9,f13,f5
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fnmsubs f0,f0,f3,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f3.f64 - ctx.f13.f64)));
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fmadds f7,f0,f13,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
loc_8218DF48:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x8218df80
	if (!ctx.cr6.gt) goto loc_8218DF80;
	// fneg f0,f6
	ctx.f0.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fmadds f12,f13,f0,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stfs f6,12(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
loc_8218DF80:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8218deb8
	if (!ctx.cr6.eq) goto loc_8218DEB8;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218DE80) {
	__imp__sub_8218DE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,22216
	ctx.r6.s64 = ctx.r8.s64 + 22216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,5880(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// lfs f13,20624(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7540(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7540);
	ctx.f12.f64 = double(temp.f32);
	// subfic r3,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r10.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// lfsx f11,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218DF90) {
	__imp__sub_8218DF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218DFE4) {
	__imp__sub_8218DFE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218DFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218DFE8) {
	__imp__sub_8218DFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E000) {
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
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmsubs f1,f10,f0,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fneg f2,f8
	ctx.f2.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// bl 0x823de9c8
	ctx.lr = 0x8218E034;
	sub_823DE9C8(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-22124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22124);
	ctx.f13.f64 = double(temp.f32);
	// fsel f6,f7,f0,f13
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fadds f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218E000) {
	__imp__sub_8218E000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r7,22216
	ctx.r6.s64 = ctx.r7.s64 + 22216;
	// lwz r11,15000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15000);
	// lbz r4,22(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r7,14(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15000, ctx.r11.u32);
	// lfsx f11,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r4,2(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r6.u16);
	// sth r4,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r4.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218E060) {
	__imp__sub_8218E060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E0F0) {
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
	ctx.lr = 0x8218E108;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f0,f8
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f28,f13,f7
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f27,f11,f6
	ctx.f27.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f31,6044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6044);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmadds f4,f10,f28,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f3,f9,f27,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f27.f64 + ctx.f4.f64));
	// fmadds f1,f3,f31,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8218E178;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f1.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmadds f10,f0,f28,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f9,f13,f27,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f10.f64));
	// fmadds f1,f9,f31,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8218E1A4;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// li r7,4
	ctx.r7.s64 = 4;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.f7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x8218E1C0;
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

PPC_WEAK_FUNC(sub_8218E0F0) {
	__imp__sub_8218E0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218E1D4) {
	__imp__sub_8218E1D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E1D8) {
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
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f0,13772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13772);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f7,f13,f9,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f0,f11,f9,f6
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f13,f4,f9,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f12,f5,f2,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f7.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f11,f1,f5,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f10,f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82188c88
	ctx.lr = 0x8218E27C;
	sub_82188C88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218E1D8) {
	__imp__sub_8218E1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218E28C) {
	__imp__sub_8218E28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x8218E298;
	__savegprlr_15(ctx, base);
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f10,f11,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x8218e300
	if (!ctx.cr6.gt) goto loc_8218E300;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x8218e32c
	goto loc_8218E32C;
loc_8218E300:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8218E32C:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r16,r9,r11
	ctx.r16.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,10236(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8218e3b0
	if (!ctx.cr6.lt) goto loc_8218E3B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8218e3a0
	if (!ctx.cr6.lt) goto loc_8218E3A0;
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,22216
	ctx.r7.s64 = ctx.r8.s64 + 22216;
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// lfsx f13,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x8218e644
	if (ctx.cr6.gt) goto loc_8218E644;
loc_8218E3A0:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r3,16104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16104);
	// b 0x8218e630
	goto loc_8218E630;
loc_8218E3B0:
	// lhz r10,14(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 14);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r9,22(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 22);
	// add r19,r10,r11
	ctx.r19.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r7,2(r19)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r19.u32 + 2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// ble cr6,0x8218e438
	if (!ctx.cr6.gt) goto loc_8218E438;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r19,4
	ctx.r7.s64 = ctx.r19.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218E3F0:
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8218e404
	if (!ctx.cr6.lt) goto loc_8218E404;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
loc_8218E404:
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8218e418
	if (!ctx.cr6.lt) goto loc_8218E418;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
loc_8218E418:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8218e424
	if (!ctx.cr6.gt) goto loc_8218E424;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8218E424:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8218e430
	if (!ctx.cr6.gt) goto loc_8218E430;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8218E430:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8218e3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E3F0;
loc_8218E438:
	// subf r27,r17,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r17.s64;
	// subf r21,r20,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r20.s64;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// extsw r10,r21
	ctx.r10.s64 = ctx.r21.s32;
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
	// lfs f0,20628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20628);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x8218e49c
	if (!ctx.cr6.lt) goto loc_8218E49C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8218E49C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x8218e4a8
	if (!ctx.cr6.lt) goto loc_8218E4A8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8218E4A8:
	// mullw r28,r30,r31
	ctx.r28.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x8218e564
	if (!ctx.cr6.gt) goto loc_8218E564;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dde20
	ctx.lr = 0x8218E4D4;
	sub_823DDE20(ctx, base);
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r8,22216
	ctx.r7.s64 = ctx.r8.s64 + 22216;
	// lwz r11,15000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stw r11,15000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15000, ctx.r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x823dde20
	ctx.lr = 0x8218E51C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fcmpu cr6,f30,f11
	ctx.cr6.compare(ctx.f30.f64, ctx.f11.f64);
	// bge cr6,0x8218e530
	if (!ctx.cr6.lt) goto loc_8218E530;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8218E530:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x8218e644
	if (ctx.cr6.lt) goto loc_8218E644;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8218e564
	if (!ctx.cr6.gt) goto loc_8218E564;
loc_8218E540:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x8218e54c
	if (!ctx.cr6.gt) goto loc_8218E54C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8218E54C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x8218e558
	if (!ctx.cr6.gt) goto loc_8218E558;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8218E558:
	// mullw r11,r30,r31
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8218e540
	if (ctx.cr6.gt) goto loc_8218E540;
loc_8218E564:
	// rlwinm r24,r30,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// addi r25,r11,-22896
	ctx.r25.s64 = ctx.r11.s64 + -22896;
	// ble cr6,0x8218e61c
	if (!ctx.cr6.gt) goto loc_8218E61C;
	// addi r11,r24,-2
	ctx.r11.s64 = ctx.r24.s64 + -2;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r22,r27,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_8218E590:
	// divw r11,r27,r24
	ctx.r11.s32 = ctx.r27.s32 / ctx.r24.s32;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x8218e608
	if (!ctx.cr6.gt) goto loc_8218E608;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r28,r21,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_8218E5B8:
	// divw r11,r31,r30
	ctx.r11.s32 = ctx.r31.s32 / ctx.r30.s32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821962b0
	ctx.lr = 0x8218E5D4;
	sub_821962B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e5fc
	if (ctx.cr6.eq) goto loc_8218E5FC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,16100(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16100);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r16,16
	ctx.r4.s64 = ctx.r16.s64 + 16;
	// bl 0x8218e1d8
	ctx.lr = 0x8218E5F8;
	sub_8218E1D8(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_8218E5FC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bne 0x8218e5b8
	if (!ctx.cr0.eq) goto loc_8218E5B8;
loc_8218E608:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r27,r22,r27
	ctx.r27.u64 = ctx.r22.u64 + ctx.r27.u64;
	// bne 0x8218e590
	if (!ctx.cr0.eq) goto loc_8218E590;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8218e644
	if (!ctx.cr6.eq) goto loc_8218E644;
loc_8218E61C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16100(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16100);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8218E630:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r16,16
	ctx.r4.s64 = ctx.r16.s64 + 16;
	// bl 0x8218e1d8
	ctx.lr = 0x8218E644;
	sub_8218E1D8(ctx, base);
loc_8218E644:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218E290) {
	__imp__sub_8218E290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218E654) {
	__imp__sub_8218E654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lwz r11,14996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14996);
	// lwz r8,16020(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,28(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8218e698
	if (ctx.cr6.gt) goto loc_8218E698;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8218E698:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218E658) {
	__imp__sub_8218E658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,16020(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16020);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f13,17244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 17244);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r8,60(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8218e6ec
	if (ctx.cr6.gt) goto loc_8218E6EC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e714
	if (ctx.cr6.eq) goto loc_8218E714;
	// lfs f13,17248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 17248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8218e714
	if (!ctx.cr6.gt) goto loc_8218E714;
loc_8218E6EC:
	// lwz r10,17316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17316);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x8218e714
	if (!ctx.cr6.lt) goto loc_8218E714;
	// addi r10,r10,8626
	ctx.r10.s64 = ctx.r10.s64 + 8626;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r4.u16);
	// lwz r10,17316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17316);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,17316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17316, ctx.r10.u32);
loc_8218E714:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,17384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17384);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,8660
	ctx.r11.s64 = ctx.r11.s64 + 8660;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u16);
	// lfs f13,17388(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 17388);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,17384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17384);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stfs f12,17388(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 17388, temp.u32);
	// stw r8,17384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17384, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8218E6A0) {
	__imp__sub_8218E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218E774) {
	__imp__sub_8218E774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218E778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8218E780;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,672(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 672);
	// lwz r9,676(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// lwz r28,16004(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16004);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,16020(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16020);
	// lwz r8,680(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x82188fb0
	ctx.lr = 0x8218E7B8;
	sub_82188FB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x8218ea0c
	if (ctx.cr6.eq) goto loc_8218EA0C;
	// lwz r4,16068(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16068);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16020);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r28,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r5,r29,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f1,f5,f0,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fadds f11,f1,f4
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f6,f10,f0,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfsx f4,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f4,r7,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lhz r11,26(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 26);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// beq cr6,0x8218e8f0
	if (ctx.cr6.eq) goto loc_8218E8F0;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r11,14900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14900);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lhz r5,18(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,13772(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13772);
	ctx.f0.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fdivs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmadds f4,f6,f0,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,14900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14900);
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f2.f64));
	// fmadds f0,f1,f0,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// b 0x8218e954
	goto loc_8218E954;
loc_8218E8F0:
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// lwz r6,16016(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16016);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmadds f4,f7,f9,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f2,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmadds f12,f2,f9,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
loc_8218E954:
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,684(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,688
	ctx.r4.s64 = ctx.r31.s64 + 688;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lhz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// sth r11,12(r9)
	PPC_STORE_U16(ctx.r9.u32 + 12, ctx.r11.u16);
	// lbz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// stb r7,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r7.u8);
	// lhz r11,26(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 26);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r8,0,31,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// sth r7,26(r9)
	PPC_STORE_U16(ctx.r9.u32 + 26, ctx.r7.u16);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lhz r10,14(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8218E9BC;
	sub_823DE1F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ca60
	ctx.lr = 0x8218E9D4;
	sub_8218CA60(ctx, base);
	// lwz r5,16020(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16020);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// rlwinm r8,r29,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r9,17280
	ctx.r7.s64 = ctx.r9.s64 + 17280;
	// rlwinm r6,r29,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7C;
	// lwz r3,68(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218ea0c
	if (ctx.cr6.eq) goto loc_8218EA0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e6a0
	ctx.lr = 0x8218EA0C;
	sub_8218E6A0(ctx, base);
loc_8218EA0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218E778) {
	__imp__sub_8218E778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218EA14) {
	__imp__sub_8218EA14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218EA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8218EA20;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de010
	ctx.lr = 0x8218EA28;
	__savefpr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r25,r4,12
	ctx.r25.s64 = ctx.r4.s64 + 12;
	// stw r22,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r22.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r22.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// stw r22,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r22.u32);
	// stw r22,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r22.u32);
	// bl 0x8218d560
	ctx.lr = 0x8218EA60;
	sub_8218D560(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218f000
	if (!ctx.cr6.eq) goto loc_8218F000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f26,2424(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f26.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f24,20640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20640);
	ctx.f24.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f31,20636(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20636);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,20632(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20632);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,20616(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20616);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,20620(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20620);
	ctx.f29.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f22,13772(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13772);
	ctx.f22.f64 = double(temp.f32);
	// lis r24,-32075
	ctx.r24.s64 = -2102067200;
	// lfs f25,2416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	ctx.f25.f64 = double(temp.f32);
	// addi r27,r11,22216
	ctx.r27.s64 = ctx.r11.s64 + 22216;
	// lfs f23,6044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6044);
	ctx.f23.f64 = double(temp.f32);
loc_8218EACC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218eaf4
	if (ctx.cr6.eq) goto loc_8218EAF4;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218eaf4
	if (!ctx.cr6.eq) goto loc_8218EAF4;
	// lwz r10,15360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15360);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x8218f000
	if (!ctx.cr6.lt) goto loc_8218F000;
loc_8218EAF4:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218eb08
	if (ctx.cr6.eq) goto loc_8218EB08;
	// lbz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8218ebe8
	goto loc_8218EBE8;
loc_8218EB08:
	// lwz r11,3060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3060);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,3060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3060, ctx.r10.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,1020
	ctx.r9.s64 = ctx.r10.s64 + 1020;
	// add r28,r8,r30
	ctx.r28.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfs f12,1020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,1020(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1020, temp.u32);
	// addi r9,r29,1020
	ctx.r9.s64 = ctx.r29.s64 + 1020;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lfs f9,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,1024(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1024, temp.u32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmadds f1,f11,f23,f25
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f23.f64 + ctx.f25.f64));
	// bl 0x823dde20
	ctx.lr = 0x8218EB6C;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r7,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r7.u16);
	// lfs f4,1024(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1024);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f4,f23,f25
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f23.f64 + ctx.f25.f64));
	// bl 0x823dde20
	ctx.lr = 0x8218EB8C;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r5,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r5.u16);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f1,88(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f22
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// stfs f9,1020(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1020, temp.u32);
	// fmuls f8,f10,f22
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
	// stfs f8,1024(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1024, temp.u32);
loc_8218EBE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r10,1020
	ctx.r3.s64 = ctx.r10.s64 + 1020;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,15376
	ctx.r5.s64 = ctx.r11.s64 + 15376;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// bl 0x822d7898
	ctx.lr = 0x8218EC14;
	sub_822D7898(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,15356(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15356);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218ec34
	if (ctx.cr6.eq) goto loc_8218EC34;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,15356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15356, ctx.r10.u32);
	// b 0x8218ec54
	goto loc_8218EC54;
loc_8218EC34:
	// lwz r10,15352(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15352);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,15352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15352, ctx.r7.u32);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r29,r10,3064
	ctx.r29.s64 = ctx.r10.s64 + 3064;
loc_8218EC54:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r9,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r9.u8);
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// stb r21,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r21.u8);
	// rlwinm r10,r26,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0x7F8;
	// stw r22,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r22.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r8,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stb r26,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r26.u8);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// addi r9,r11,1020
	ctx.r9.s64 = ctx.r11.s64 + 1020;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,1020
	ctx.r9.s64 = ctx.r10.s64 + 1020;
	// lfs f13,1020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f10,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,12(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x8218ECB0;
	sub_822D4AC8(ctx, base);
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r11,15356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218eccc
	if (ctx.cr6.eq) goto loc_8218ECCC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,15356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15356, ctx.r10.u32);
	// b 0x8218ecec
	goto loc_8218ECEC;
loc_8218ECCC:
	// lwz r11,15352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15352);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,15352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15352, ctx.r9.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,3064
	ctx.r11.s64 = ctx.r11.s64 + 3064;
loc_8218ECEC:
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8218ed54
	if (ctx.cr6.eq) goto loc_8218ED54;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r29,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r29.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x8218ed5c
	goto loc_8218ED5C;
loc_8218ED54:
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8218ED5C:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218f014
	if (!ctx.cr6.eq) goto loc_8218F014;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,15000(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15000);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r9,17240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17240);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x8218ed9c
	if (!ctx.cr6.eq) goto loc_8218ED9C;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x8218eddc
	goto loc_8218EDDC;
loc_8218ED9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r27,2
	ctx.r8.s64 = ctx.r27.s64 + 2;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// slw r7,r21,r23
	ctx.r7.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r23.u8 & 0x3F));
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// rotlwi r8,r10,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// subfc r6,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// eqv r5,r7,r10
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r10.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
loc_8218EDDC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// beq cr6,0x8218ef34
	if (ctx.cr6.eq) goto loc_8218EF34;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r10,-479
	ctx.r8.s64 = ctx.r10.s64 + -479;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,16088
	ctx.r9.s64 = ctx.r11.s64 + 16088;
	// lfsx f10,r3,r27
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	ctx.f10.f64 = double(temp.f32);
	// subfic r9,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// fmadds f9,f10,f29,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,-479
	ctx.r9.s64 = ctx.r10.s64 + -479;
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfsx f8,r6,r27
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,17240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17240, ctx.r4.u32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stw r29,16088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16088, ctx.r29.u32);
	// lbz r5,1(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// subfic r4,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r9.s64;
	// stw r5,16092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16092, ctx.r5.u32);
	// fnmsubs f5,f7,f27,f31
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * ctx.f27.f64 - ctx.f31.f64)));
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,-479
	ctx.r9.s64 = ctx.r10.s64 + -479;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// fnmsubs f4,f5,f5,f30
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f5.f64 - ctx.f30.f64)));
	// fmuls f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,15000(r24)
	PPC_STORE_U32(ctx.r24.u32 + 15000, ctx.r10.u32);
	// fsqrts f2,f4
	ctx.f2.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f1,f2,f26
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f12,f11,f1,f3
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f12,16100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16100, temp.u32);
	// fmsubs f11,f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 - ctx.f13.f64));
	// stfs f11,16096(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16096, temp.u32);
	// stfs f6,16104(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16104, temp.u32);
	// stfs f11,16108(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16108, temp.u32);
	// stfs f12,16112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16112, temp.u32);
	// stfs f0,16120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16120, temp.u32);
	// stfs f31,16116(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16116, temp.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r27
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f29,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f28.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfsx f6,r4,r27
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f3,f5,f27,f31
	ctx.f3.f64 = double(float(-(ctx.f5.f64 * ctx.f27.f64 - ctx.f31.f64)));
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f1,f3,f3,f30
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f3.f64 - ctx.f30.f64)));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmsubs f11,f3,f2,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f13.f64));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f10,f3,f4,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// b 0x8218efe8
	goto loc_8218EFE8;
loc_8218EF34:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// stfs f24,28(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r24)
	PPC_STORE_U32(ctx.r24.u32 + 15000, ctx.r11.u32);
	// lfsx f11,r7,r27
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f29,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f28.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfsx f6,r3,r27
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f8,r6,r27
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fnmsubs f5,f7,f27,f31
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * ctx.f27.f64 - ctx.f31.f64)));
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f6,f25
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f25.f64));
	// fnmsubs f2,f5,f5,f30
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f5.f64 - ctx.f30.f64)));
	// fsel f13,f0,f30,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f26.f64;
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmsubs f9,f5,f4,f11
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f11.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f8,f5,f3,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8218EFE8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218d560
	ctx.lr = 0x8218EFF4;
	sub_8218D560(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218eacc
	if (ctx.cr6.eq) goto loc_8218EACC;
loc_8218F000:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de05c
	ctx.lr = 0x8218F010;
	__restfpr_22(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8218F014:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218f03c
	if (ctx.cr6.eq) goto loc_8218F03C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de05c
	ctx.lr = 0x8218F038;
	__restfpr_22(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8218F03C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8218a600
	ctx.lr = 0x8218F054;
	sub_8218A600(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r8,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r8.u32);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stb r26,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r26.u8);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82190328
	ctx.lr = 0x8218F084;
	sub_82190328(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218f0a0
	if (ctx.cr6.eq) goto loc_8218F0A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8218d6d8
	ctx.lr = 0x8218F0A0;
	sub_8218D6D8(ctx, base);
loc_8218F0A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de05c
	ctx.lr = 0x8218F0B0;
	__restfpr_22(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218EA18) {
	__imp__sub_8218EA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218F0B4) {
	__imp__sub_8218F0B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8218F0C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16028(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16028);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x8218f144
	if (!ctx.cr6.eq) goto loc_8218F144;
	// lwz r24,16024(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16024);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8218f148
	if (!ctx.cr6.eq) goto loc_8218F148;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,15360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15360);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r8,r10,1020
	ctx.r8.s64 = ctx.r10.s64 + 1020;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,1020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,15368(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15368, temp.u32);
	// lfs f13,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,15372(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15372, temp.u32);
	// lwz r10,16028(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16028);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r8,r10,1020
	ctx.r8.s64 = ctx.r10.s64 + 1020;
	// lfs f12,1020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,15376(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15376, temp.u32);
	// lfs f11,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,15380(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15380, temp.u32);
	// b 0x8218f150
	goto loc_8218F150;
loc_8218F144:
	// lwz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8218F148:
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8218F150:
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// lfs f11,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f9,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f8,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r7,22216
	ctx.r6.s64 = ctx.r7.s64 + 22216;
	// lfs f7,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,15000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15000);
	// lfs f6,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,16032(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// subfic r5,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r10.s64;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15000, ctx.r11.u32);
	// lfsx f4,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f12,f4,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8218ea18
	ctx.lr = 0x8218F1D8;
	sub_8218EA18(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8218f45c
	if (ctx.cr6.eq) goto loc_8218F45C;
	// lwz r23,168(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8218f380
	if (ctx.cr6.eq) goto loc_8218F380;
	// lwz r27,164(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r25,156(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bge cr6,0x8218f248
	if (!ctx.cr6.lt) goto loc_8218F248;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,15364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8218F234:
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218f234
	if (!ctx.cr6.eq) goto loc_8218F234;
	// b 0x8218f2a4
	goto loc_8218F2A4;
loc_8218F248:
	// stw r25,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r25.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_8218F260:
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8218f260
	if (!ctx.cr6.eq) goto loc_8218F260;
	// lwz r11,15360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8218f2a4
	if (!ctx.cr6.lt) goto loc_8218F2A4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,15364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8218F294:
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218f294
	if (!ctx.cr6.eq) goto loc_8218F294;
loc_8218F2A4:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r30,r11,15364
	ctx.r30.s64 = ctx.r11.s64 + 15364;
	// addi r11,r10,15364
	ctx.r11.s64 = ctx.r10.s64 + 15364;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822d79e8
	ctx.lr = 0x8218F2E0;
	sub_822D79E8(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8218f364
	if (ctx.cr6.eq) goto loc_8218F364;
	// lwz r11,15360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,15360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15360, ctx.r11.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218f344
	if (ctx.cr6.eq) goto loc_8218F344;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,5
	ctx.r10.s64 = 5;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
loc_8218F31C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8218f31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F31C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8218F334:
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218f334
	if (!ctx.cr6.eq) goto loc_8218F334;
loc_8218F344:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r28.u32);
	// stw r25,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r25.u32);
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8218F364:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stw r25,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r25.u32);
	// stw r27,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r27.u32);
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8218F380:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// lwz r6,20(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// stw r9,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r9.u32);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// bne cr6,0x8218f3c0
	if (!ctx.cr6.eq) goto loc_8218F3C0;
	// lwz r6,15360(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x8218f440
	goto loc_8218F440;
loc_8218F3C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82190c80
	ctx.lr = 0x8218F3C8;
	sub_82190C80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218f3e4
	if (ctx.cr6.eq) goto loc_8218F3E4;
	// lwz r6,15360(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x8218f440
	goto loc_8218F440;
loc_8218F3E4:
	// lwz r10,15360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// addi r8,r31,15364
	ctx.r8.s64 = ctx.r31.s64 + 15364;
	// lwz r9,15364(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15364);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8218F3F8:
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218f3f8
	if (!ctx.cr6.eq) goto loc_8218F3F8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,15360
	ctx.r11.s64 = ctx.r10.s64 + 15360;
loc_8218F428:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8218f428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F428;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8218F440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218dd60
	ctx.lr = 0x8218F448;
	sub_8218DD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,2(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// bl 0x8218db88
	ctx.lr = 0x8218F454;
	sub_8218DB88(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8218F45C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218f4cc
	if (ctx.cr6.eq) goto loc_8218F4CC;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8218f4b4
	if (!ctx.cr6.eq) goto loc_8218F4B4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,15360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15360);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r6,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r4,15360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15360, ctx.r4.u32);
	// stw r11,15364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15364, ctx.r11.u32);
	// stw r9,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8218F4B4:
	// lwz r10,20(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_8218F4CC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218F0B8) {
	__imp__sub_8218F0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218F4D4) {
	__imp__sub_8218F4D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8218F4E0;
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
	// lwz r30,20(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f13,f1,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x8218f560
	if (!ctx.cr6.lt) goto loc_8218F560;
	// fsel f31,f13,f0,f30
	ctx.f31.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f1,f31
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fmadds f7,f11,f8,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f8,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f5,4(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
loc_8218F560:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// bl 0x8218a390
	ctx.lr = 0x8218F588;
	sub_8218A390(ctx, base);
	// lwz r11,16028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16028);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82190440
	ctx.lr = 0x8218F59C;
	sub_82190440(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x8218f5c4
	if (!ctx.cr6.eq) goto loc_8218F5C4;
	// lwz r11,3060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3060);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8218F5C4:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8218f5f0
	if (!ctx.cr6.eq) goto loc_8218F5F0;
	// lwz r11,3060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3060);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8218F5F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lwz r5,16028(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16028);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x8218a600
	ctx.lr = 0x8218F608;
	sub_8218A600(ctx, base);
	// lwz r11,16028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16028);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// bl 0x82190328
	ctx.lr = 0x8218F628;
	sub_82190328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82190328
	ctx.lr = 0x8218F634;
	sub_82190328(ctx, base);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218f650
	if (ctx.cr6.eq) goto loc_8218F650;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d6d8
	ctx.lr = 0x8218F650;
	sub_8218D6D8(ctx, base);
loc_8218F650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218F4D8) {
	__imp__sub_8218F4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218F664) {
	__imp__sub_8218F664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8218F670;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3060);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r8,15360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15360);
	// lfs f13,6912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r11,1012
	ctx.r5.s64 = ctx.r11.s64 + 1012;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ble cr6,0x8218f6f4
	if (!ctx.cr6.gt) goto loc_8218F6F4;
	// addi r29,r3,15344
	ctx.r29.s64 = ctx.r3.s64 + 15344;
loc_8218F6C4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzu r4,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x8218de80
	ctx.lr = 0x8218F6D0;
	sub_8218DE80(ctx, base);
	// lwz r11,15360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15360);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218f6c4
	if (ctx.cr6.lt) goto loc_8218F6C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8218f728
	if (!ctx.cr6.gt) goto loc_8218F728;
loc_8218F6F4:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8218F728:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8218f4d8
	ctx.lr = 0x8218F73C;
	sub_8218F4D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218F668) {
	__imp__sub_8218F668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218F744) {
	__imp__sub_8218F744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218F748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8218F750;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x8218F758;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218f668
	ctx.lr = 0x8218F768;
	sub_8218F668(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8218f898
	if (ctx.cr6.eq) goto loc_8218F898;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// stw r11,16028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16028, ctx.r11.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f8,f0,f12,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmsubs f1,f12,f13,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fneg f2,f8
	ctx.f2.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// bl 0x823de9c8
	ctx.lr = 0x8218F7BC;
	sub_823DE9C8(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r26,r11,15000
	ctx.r26.s64 = ctx.r11.s64 + 15000;
	// addi r30,r10,22216
	ctx.r30.s64 = ctx.r10.s64 + 22216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,15000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15000);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// lfs f0,-22124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fsel f6,f7,f29,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f29.f64 : ctx.f0.f64;
	// lfs f13,7544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7544);
	ctx.f13.f64 = double(temp.f32);
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// lfs f12,20648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20648);
	ctx.f12.f64 = double(temp.f32);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// fadds f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfsx f5,r3,r30
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8218f84c
	if (!ctx.cr6.eq) goto loc_8218F84C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20644);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8218f884
	if (!ctx.cr6.gt) goto loc_8218F884;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8218F84C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// b 0x8218f908
	goto loc_8218F908;
loc_8218F884:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8218F894;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8218F898:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r26,r11,15000
	ctx.r26.s64 = ctx.r11.s64 + 15000;
	// addi r30,r10,22216
	ctx.r30.s64 = ctx.r10.s64 + 22216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,15000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15000);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// lfs f0,14272(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-22124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22124);
	ctx.f13.f64 = double(temp.f32);
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lfsx f12,r4,r30
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfic r29,r3,3
	ctx.xer.ca = ctx.r3.u32 <= 3;
	ctx.r29.s64 = 3 - ctx.r3.s64;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fdivs f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
loc_8218F908:
	// stw r27,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r27.u32);
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f0.f64;
	// lwz r28,17240(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17240);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x823de720
	ctx.lr = 0x8218F91C;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823de800
	ctx.lr = 0x8218F928;
	sub_823DE800(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,17240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17240);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f9,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,17240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17240, ctx.r8.u32);
	// lfs f13,8336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8336);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f9,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f13.f64));
	// beq cr6,0x8218fa84
	if (ctx.cr6.eq) goto loc_8218FA84;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// fadds f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f10,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f7,7540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7540);
	ctx.f7.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,16084
	ctx.r11.s64 = ctx.r11.s64 + 16084;
	// lfs f6,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f5,f13,f10,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f31.f64));
	// lfs f8,20624(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20624);
	ctx.f8.f64 = double(temp.f32);
loc_8218F99C:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r9,r10,-479
	ctx.r9.s64 = ctx.r10.s64 + -479;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f2,f12,f0,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f4.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f1,f12,f30,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f3.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r4,16028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16028);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r9,r10,-479
	ctx.r9.s64 = ctx.r10.s64 + -479;
	// subfic r3,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r9.s64;
	// lfsx f13,r5,r30
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f9,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,-479
	ctx.r9.s64 = ctx.r10.s64 + -479;
	// lfsx f3,r6,r30
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	ctx.f3.f64 = double(temp.f32);
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f4,f1,f5,f31
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f31.f64));
	// fsubs f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fnmsubs f2,f4,f4,f31
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f4.f64 - ctx.f31.f64)));
	// fsel f1,f3,f31,f6
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
	// fsqrts f3,f2
	ctx.f3.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmsubs f2,f4,f12,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f1.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f1,f4,f13,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f3.f64));
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfsu f29,36(r11)
	ea = 36 + ctx.r11.u32;
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8218f99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F99C;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_8218FA84:
	// lwz r11,17240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17240);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8218fac4
	if (!ctx.cr6.gt) goto loc_8218FAC4;
loc_8218FA90:
	// lwz r11,17240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,17240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17240, ctx.r11.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,16088
	ctx.r4.s64 = ctx.r11.s64 + 16088;
	// bl 0x8218f0b8
	ctx.lr = 0x8218FAB8;
	sub_8218F0B8(ctx, base);
	// lwz r10,17240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17240);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8218fa90
	if (ctx.cr6.gt) goto loc_8218FA90;
loc_8218FAC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d7a0
	ctx.lr = 0x8218FACC;
	sub_8218D7A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8218FADC;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218F748) {
	__imp__sub_8218F748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8218FAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,16020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16020, ctx.r4.u32);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,16004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16004, ctx.r5.u32);
	// stw r11,3060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3060, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,15352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15352, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,15356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15356, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,17240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17240, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,16008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16008, ctx.r5.u32);
	// lfs f0,8336(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16012, ctx.r11.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lbz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stfs f0,16032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16032, temp.u32);
	// stfs f1,16036(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16036, temp.u32);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,16016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16016, ctx.r11.u32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16056(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16056, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,16060(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16060, temp.u32);
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16064(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16064, temp.u32);
	// stw r6,16068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16068, ctx.r6.u32);
	// lfs f10,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// lfs f13,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2424(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fsel f1,f2,f13,f0
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f1,16072(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16072, temp.u32);
	// bl 0x8218a9a8
	ctx.lr = 0x8218FBC0;
	sub_8218A9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218add8
	ctx.lr = 0x8218FBC8;
	sub_8218ADD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b470
	ctx.lr = 0x8218FBD0;
	sub_8218B470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218bc68
	ctx.lr = 0x8218FBD8;
	sub_8218BC68(ctx, base);
	// lhz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// lhz r9,182(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r11,3060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3060);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lfs f0,13772(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13772);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,1020
	ctx.r9.s64 = ctx.r10.s64 + 1020;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r3.u32);
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1020(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1020, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,1024(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1024, temp.u32);
	// stw r11,16028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16028, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f748
	ctx.lr = 0x8218FC4C;
	sub_8218F748(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8218fc6c
	if (ctx.cr6.eq) goto loc_8218FC6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821894d0
	ctx.lr = 0x8218FC64;
	sub_821894D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8218FC6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e6a0
	ctx.lr = 0x8218FC74;
	sub_8218E6A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218FAE0) {
	__imp__sub_8218FAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218FC7C) {
	__imp__sub_8218FC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8218FC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r29,r4,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lhz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821962b0
	ctx.lr = 0x8218FCD0;
	sub_821962B0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8218fd6c
	if (!ctx.cr6.eq) goto loc_8218FD6C;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32075
	ctx.r7.s64 = -2102067200;
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r6,22216
	ctx.r5.s64 = ctx.r6.s64 + 22216;
	// lwz r11,15000(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15000);
	// lbz r6,22(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// addi r10,r11,-479
	ctx.r10.s64 = ctx.r11.s64 + -479;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subfic r4,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r10.s64;
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,15000(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15000, ctx.r11.u32);
	// lfsx f11,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// lhz r7,2(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// sth r7,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8218FD6C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218FC80) {
	__imp__sub_8218FC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218FD84) {
	__imp__sub_8218FD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8218FD90;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17600(r1)
	ea = -17600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x822d6b00
	ctx.lr = 0x8218FDD0;
	sub_822D6B00(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,16188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16188, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,16192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16192, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stfs f12,16196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16196, temp.u32);
	// bl 0x8218e0f0
	ctx.lr = 0x8218FE00;
	sub_8218E0F0(ctx, base);
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f7,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stw r9,17460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17460, ctx.r9.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// lfs f5,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// lfs f4,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f9,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f7,16184(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16184, temp.u32);
	// stfs f6,16220(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16220, temp.u32);
	// stfs f0,17388(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17388, temp.u32);
	// stfs f5,16224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16224, temp.u32);
	// stfs f0,17392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17392, temp.u32);
	// stfs f4,16228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16228, temp.u32);
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x8218fe8c
	if (!ctx.cr6.gt) goto loc_8218FE8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218e290
	ctx.lr = 0x8218FE8C;
	sub_8218E290(ctx, base);
loc_8218FE8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218fc80
	ctx.lr = 0x8218FE9C;
	sub_8218FC80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218fec4
	if (!ctx.cr6.eq) goto loc_8218FEC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r4,r11,20652
	ctx.r4.s64 = ctx.r11.s64 + 20652;
	// bl 0x82280c30
	ctx.lr = 0x8218FEBC;
	sub_82280C30(ctx, base);
	// addi r1,r1,17600
	ctx.r1.s64 = ctx.r1.s64 + 17600;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8218FEC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,6016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218fae0
	ctx.lr = 0x8218FEE4;
	sub_8218FAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821897a8
	ctx.lr = 0x8218FEEC;
	sub_821897A8(ctx, base);
	// addi r1,r1,17600
	ctx.r1.s64 = ctx.r1.s64 + 17600;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8218FD88) {
	__imp__sub_8218FD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218FEF4) {
	__imp__sub_8218FEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218FEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8218FF00;
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
	// stwu r1,-17648(r1)
	ea = -17648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d6b00
	ctx.lr = 0x8218FF50;
	sub_822D6B00(ctx, base);
	// lhz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218ff80
	if (!ctx.cr6.eq) goto loc_8218FF80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821413c8
	ctx.lr = 0x8218FF68;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218ff80
	if (ctx.cr6.eq) goto loc_8218FF80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82198f30
	ctx.lr = 0x8218FF80;
	sub_82198F30(ctx, base);
loc_8218FF80:
	// lhz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r9,26(r30)
	PPC_STORE_U16(ctx.r30.u32 + 26, ctx.r9.u16);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stw r24,17460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17460, ctx.r24.u32);
	// stfs f31,17532(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17532, temp.u32);
	// stw r24,17528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17528, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f30,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e0f0
	ctx.lr = 0x8218FFC0;
	sub_8218E0F0(ctx, base);
	// lis r6,-32075
	ctx.r6.s64 = -2102067200;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32075
	ctx.r5.s64 = -2102067200;
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f13,16188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16188, temp.u32);
	// lis r3,-32075
	ctx.r3.s64 = -2102067200;
	// lwz r10,14964(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14964);
	// stfs f11,16192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16192, temp.u32);
	// stfs f10,16196(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16196, temp.u32);
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lwz r9,14904(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14904);
	// li r23,1
	ctx.r23.s64 = 1;
	// lfs f0,5488(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,14876(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14876);
	// lfs f12,6820(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 6820);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f11,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16220(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16220, temp.u32);
	// sth r4,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r4.u16);
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// stfs f8,16224(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16224, temp.u32);
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16228(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16228, temp.u32);
	// lfs f6,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// stw r11,17460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17460, ctx.r11.u32);
	// stfs f6,16184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16184, temp.u32);
	// sth r28,17396(r1)
	PPC_STORE_U16(ctx.r1.u32 + 17396, ctx.r28.u16);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,17388(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17388, temp.u32);
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,17392(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17392, temp.u32);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f6,f9,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f8,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmadds f4,f8,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsel f1,f2,f3,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfs f1,17388(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17388, temp.u32);
	// ble cr6,0x821900f0
	if (!ctx.cr6.gt) goto loc_821900F0;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,14968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// bl 0x8218e290
	ctx.lr = 0x821900EC;
	sub_8218E290(ctx, base);
	// lwz r11,17460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17460);
loc_821900F0:
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,14996
	ctx.r29.s64 = ctx.r10.s64 + 14996;
	// beq cr6,0x821901a4
	if (ctx.cr6.eq) goto loc_821901A4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r1,17396
	ctx.r10.s64 = ctx.r1.s64 + 17396;
	// addi r28,r9,22216
	ctx.r28.s64 = ctx.r9.s64 + 22216;
	// lfs f31,6016(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6016);
	ctx.f31.f64 = double(temp.f32);
loc_8219011C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,17460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17460, ctx.r11.u32);
	// lhzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82190160
	if (!ctx.cr6.eq) goto loc_82190160;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 10, ctx.xer);
	// ble cr6,0x82190164
	if (!ctx.cr6.gt) goto loc_82190164;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,22(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82190318
	if (ctx.cr6.gt) goto loc_82190318;
	// b 0x82190164
	goto loc_82190164;
loc_82190160:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82190164:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190280
	if (ctx.cr6.eq) goto loc_82190280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// bl 0x8218fc80
	ctx.lr = 0x82190184;
	sub_8218FC80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821902f0
	if (!ctx.cr6.eq) goto loc_821902F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20704
	ctx.r4.s64 = ctx.r11.s64 + 20704;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82280c30
	ctx.lr = 0x821901A4;
	sub_82280C30(ctx, base);
loc_821901A4:
	// lis r28,-32075
	ctx.r28.s64 = -2102067200;
	// lfs f0,17532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 17532);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,14880(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14880);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82190268
	if (!ctx.cr6.gt) goto loc_82190268;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,17528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17528);
	// addi r10,r1,17464
	ctx.r10.s64 = ctx.r1.s64 + 17464;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,17464
	ctx.r8.s64 = ctx.r1.s64 + 17464;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// subf r5,r8,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r8.s64;
	// addi r6,r7,-6568
	ctx.r6.s64 = ctx.r7.s64 + -6568;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// addi r3,r1,17464
	ctx.r3.s64 = ctx.r1.s64 + 17464;
	// bl 0x82190b60
	ctx.lr = 0x821901F4;
	sub_82190B60(ctx, base);
	// lwz r4,17528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17528);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82190268
	if (ctx.cr6.eq) goto loc_82190268;
	// lfs f0,17532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 17532);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r1,17464
	ctx.r30.s64 = ctx.r1.s64 + 17464;
loc_8219020C:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,17532(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 17532, temp.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// bl 0x8218c700
	ctx.lr = 0x8219023C;
	sub_8218C700(ctx, base);
	// lwz r11,14880(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14880);
	// lfs f0,17532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 17532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82190268
	if (!ctx.cr6.gt) goto loc_82190268;
	// lwz r11,17528(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17528);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219020c
	if (ctx.cr6.lt) goto loc_8219020C;
loc_82190268:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821897a8
	ctx.lr = 0x82190270;
	sub_821897A8(ctx, base);
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82190280:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,-479
	ctx.r9.s64 = ctx.r11.s64 + -479;
	// lbz r3,22(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// subfic r6,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// lhz r4,14(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r9,r28
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_821902F0:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8218fae0
	ctx.lr = 0x82190310;
	sub_8218FAE0(ctx, base);
	// lwz r11,17460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17460);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82190318:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r1,17396
	ctx.r10.s64 = ctx.r1.s64 + 17396;
	// bne cr6,0x8219011c
	if (!ctx.cr6.eq) goto loc_8219011C;
	// b 0x821901a4
	goto loc_821901A4;
}

PPC_WEAK_FUNC(sub_8218FEF8) {
	__imp__sub_8218FEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190328) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r9,r11,1020
	ctx.r9.s64 = ctx.r11.s64 + 1020;
	// addi r9,r10,1020
	ctx.r9.s64 = ctx.r10.s64 + 1020;
	// lfs f0,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,12(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x82190388;
	sub_822D4AC8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

PPC_WEAK_FUNC(sub_82190328) {
	__imp__sub_82190328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821903A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821903A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// sth r6,190(r1)
	PPC_STORE_U16(ctx.r1.u32 + 190, ctx.r6.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x82190430
	if (!ctx.cr6.lt) goto loc_82190430;
loc_821903D4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r4,r1,190
	ctx.r4.s64 = ctx.r1.s64 + 190;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x821903EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190420
	if (ctx.cr6.eq) goto loc_82190420;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// addze r30,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r30.s64 = temp.s64;
	// sthx r11,r10,r29
	PPC_STORE_U16(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u16);
	// blt cr6,0x821903d4
	if (ctx.cr6.lt) goto loc_821903D4;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82190420:
	// lhz r11,190(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 190);
	// sthx r11,r10,r29
	PPC_STORE_U16(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82190430:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821903A0) {
	__imp__sub_821903A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190440) {
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
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82190480;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f1,f11,f31,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821904A0;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r7,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r7.u16);
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

PPC_WEAK_FUNC(sub_82190440) {
	__imp__sub_82190440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821904D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821904D4) {
	__imp__sub_821904D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821904D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821904E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82190504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190528
	if (ctx.cr6.eq) goto loc_82190528;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82190528
	if (ctx.cr6.eq) goto loc_82190528;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_82190528:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82190538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219055c
	if (ctx.cr6.eq) goto loc_8219055C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8219055c
	if (ctx.cr6.eq) goto loc_8219055C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_8219055C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219056C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190590
	if (ctx.cr6.eq) goto loc_82190590;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82190590
	if (ctx.cr6.eq) goto loc_82190590;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_82190590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821904D8) {
	__imp__sub_821904D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821905A0;
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
	// bge cr6,0x82190614
	if (!ctx.cr6.lt) goto loc_82190614;
loc_821905CC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-2
	ctx.r4.s64 = ctx.r3.s64 + -2;
	// bctrl 
	ctx.lr = 0x821905E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821905f0
	if (ctx.cr6.eq) goto loc_821905F0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_821905F0:
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
	// blt cr6,0x821905cc
	if (ctx.cr6.lt) goto loc_821905CC;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_82190614:
	// bne cr6,0x82190630
	if (!ctx.cr6.eq) goto loc_82190630;
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
loc_82190630:
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
	// bl 0x821903a0
	ctx.lr = 0x82190648;
	sub_821903A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82190598) {
	__imp__sub_82190598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82190658;
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
	// ble cr6,0x821906e4
	if (!ctx.cr6.gt) goto loc_821906E4;
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
	// bl 0x821904d8
	ctx.lr = 0x8219069C;
	sub_821904D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x821904d8
	ctx.lr = 0x821906B0;
	sub_821904D8(ctx, base);
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
	// bl 0x821904d8
	ctx.lr = 0x821906C8;
	sub_821904D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821904d8
	ctx.lr = 0x821906DC;
	sub_821904D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821906E4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821904d8
	ctx.lr = 0x821906F0;
	sub_821904D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82190650) {
	__imp__sub_82190650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821906F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82190700;
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
	// ble 0x8219074c
	if (!ctx.cr0.gt) goto loc_8219074C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82190728:
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
	// bl 0x82190598
	ctx.lr = 0x82190744;
	sub_82190598(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82190728
	if (ctx.cr6.gt) goto loc_82190728;
loc_8219074C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821906F8) {
	__imp__sub_821906F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190754) {
	__imp__sub_82190754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82190760;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82190848
	if (ctx.cr6.eq) goto loc_82190848;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82190848
	if (ctx.cr6.eq) goto loc_82190848;
	// addi r28,r29,-2
	ctx.r28.s64 = ctx.r29.s64 + -2;
	// subfic r24,r3,2
	ctx.xer.ca = ctx.r3.u32 <= 2;
	ctx.r24.s64 = 2 - ctx.r3.s64;
loc_8219078C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bctrl 
	ctx.lr = 0x821907A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821907e4
	if (ctx.cr6.eq) goto loc_821907E4;
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821907d8
	if (!ctx.cr0.gt) goto loc_821907D8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r11,r4,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r4.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x823e0230
	ctx.lr = 0x821907D8;
	sub_823E0230(ctx, base);
loc_821907D8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// b 0x82190838
	goto loc_82190838;
loc_821907E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x821907F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190830
	if (ctx.cr6.eq) goto loc_82190830;
loc_82190804:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82190824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82190804
	if (!ctx.cr6.eq) goto loc_82190804;
loc_82190830:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_82190838:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8219078c
	if (!ctx.cr6.eq) goto loc_8219078C;
loc_82190848:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82190758) {
	__imp__sub_82190758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82190858;
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
	// bl 0x82190650
	ctx.lr = 0x82190894;
	sub_82190650(ctx, base);
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821908e8
	if (!ctx.cr6.lt) goto loc_821908E8;
loc_821908A0:
	// addi r30,r31,-2
	ctx.r30.s64 = ctx.r31.s64 + -2;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821908B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821908e8
	if (!ctx.cr6.eq) goto loc_821908E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821908D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821908e8
	if (!ctx.cr6.eq) goto loc_821908E8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821908a0
	if (ctx.cr6.lt) goto loc_821908A0;
loc_821908E8:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82190934
	if (!ctx.cr6.lt) goto loc_82190934;
loc_821908F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82190900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190934
	if (!ctx.cr6.eq) goto loc_82190934;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219091C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190934
	if (!ctx.cr6.eq) goto loc_82190934;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821908f0
	if (ctx.cr6.lt) goto loc_821908F0;
loc_82190934:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8219093C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x821909a8
	if (!ctx.cr6.lt) goto loc_821909A8;
loc_82190944:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82190954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219099c
	if (!ctx.cr6.eq) goto loc_8219099C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82190970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821909a8
	if (!ctx.cr6.eq) goto loc_821909A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219099c
	if (ctx.cr6.eq) goto loc_8219099C;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
loc_8219099C:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82190944
	if (ctx.cr6.lt) goto loc_82190944;
loc_821909A8:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82190a1c
	if (!ctx.cr6.gt) goto loc_82190A1C;
	// addi r30,r27,-2
	ctx.r30.s64 = ctx.r27.s64 + -2;
loc_821909B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821909C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190a08
	if (!ctx.cr6.eq) goto loc_82190A08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821909E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190a18
	if (!ctx.cr6.eq) goto loc_82190A18;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82190a08
	if (ctx.cr6.eq) goto loc_82190A08;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_82190A08:
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821909b4
	if (ctx.cr6.lt) goto loc_821909B4;
loc_82190A18:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_82190A1C:
	// bne cr6,0x82190a78
	if (!ctx.cr6.eq) goto loc_82190A78;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82190ae0
	if (ctx.cr6.eq) goto loc_82190AE0;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82190a48
	if (ctx.cr6.eq) goto loc_82190A48;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82190a48
	if (ctx.cr6.eq) goto loc_82190A48;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
loc_82190A48:
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
	// beq cr6,0x8219093c
	if (ctx.cr6.eq) goto loc_8219093C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x8219093c
	goto loc_8219093C;
loc_82190A78:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// bne cr6,0x82190ac0
	if (!ctx.cr6.eq) goto loc_82190AC0;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82190aa0
	if (ctx.cr6.eq) goto loc_82190AA0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_82190AA0:
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8219093c
	if (ctx.cr6.eq) goto loc_8219093C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// b 0x8219093c
	goto loc_8219093C;
loc_82190AC0:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82190ad8
	if (ctx.cr6.eq) goto loc_82190AD8;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
loc_82190AD8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x8219093c
	goto loc_8219093C;
loc_82190AE0:
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

PPC_WEAK_FUNC(sub_82190850) {
	__imp__sub_82190850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190AF4) {
	__imp__sub_82190AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82190B00;
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
	// ble cr6,0x82190b54
	if (!ctx.cr6.gt) goto loc_82190B54;
	// addi r29,r3,-2
	ctx.r29.s64 = ctx.r3.s64 + -2;
loc_82190B20:
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
	// bl 0x82190598
	ctx.lr = 0x82190B44;
	sub_82190598(ctx, base);
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82190b20
	if (ctx.cr6.gt) goto loc_82190B20;
loc_82190B54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82190AF8) {
	__imp__sub_82190AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190B5C) {
	__imp__sub_82190B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82190B68;
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
	// ble cr6,0x82190c18
	if (!ctx.cr6.gt) goto loc_82190C18;
loc_82190B8C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82190c3c
	if (!ctx.cr6.gt) goto loc_82190C3C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82190850
	ctx.lr = 0x82190BA8;
	sub_82190850(ctx, base);
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
	// bge cr6,0x82190bf8
	if (!ctx.cr6.lt) goto loc_82190BF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190b60
	ctx.lr = 0x82190BF0;
	sub_82190B60(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82190c08
	goto loc_82190C08;
loc_82190BF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82190b60
	ctx.lr = 0x82190C04;
	sub_82190B60(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82190C08:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x82190b8c
	if (ctx.cr6.gt) goto loc_82190B8C;
loc_82190C18:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82190c34
	if (!ctx.cr6.gt) goto loc_82190C34;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190758
	ctx.lr = 0x82190C34;
	sub_82190758(ctx, base);
loc_82190C34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82190C3C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82190c18
	if (!ctx.cr6.gt) goto loc_82190C18;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82190c64
	if (!ctx.cr6.gt) goto loc_82190C64;
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
	// bl 0x821906f8
	ctx.lr = 0x82190C64;
	sub_821906F8(ctx, base);
loc_82190C64:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190af8
	ctx.lr = 0x82190C74;
	sub_82190AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82190B60) {
	__imp__sub_82190B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190C7C) {
	__imp__sub_82190C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f13,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r10,r10,1020
	ctx.r10.s64 = ctx.r10.s64 + 1020;
loc_82190CA0:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rotlwi r10,r9,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1020
	ctx.r10.s64 = ctx.r10.s64 + 1020;
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f11,f8,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f9.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// bne cr6,0x82190ca0
	if (!ctx.cr6.eq) goto loc_82190CA0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82190cec
	if (ctx.cr6.lt) goto loc_82190CEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82190CEC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82190C80) {
	__imp__sub_82190C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190CF4) {
	__imp__sub_82190CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82190d34
	if (ctx.cr6.eq) goto loc_82190D34;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r3,3328
	ctx.r11.s64 = ctx.r3.s64 + 3328;
loc_82190D18:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82190d3c
	if (ctx.cr6.eq) goto loc_82190D3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82190d18
	if (ctx.cr6.lt) goto loc_82190D18;
loc_82190D34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82190D3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82190CF8) {
	__imp__sub_82190CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190D44) {
	__imp__sub_82190D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,3324(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3324);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r5,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r5.u8);
	// stb r6,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r6.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82190d8c
	if (ctx.cr6.eq) goto loc_82190D8C;
	// lhz r31,-32(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// addi r10,r4,3328
	ctx.r10.s64 = ctx.r4.s64 + 3328;
loc_82190D70:
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82190dac
	if (ctx.cr6.eq) goto loc_82190DAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82190d70
	if (ctx.cr6.lt) goto loc_82190D70;
loc_82190D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82190D90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190db4
	if (ctx.cr6.eq) goto loc_82190DB4;
loc_82190D9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82190DAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82190d90
	goto loc_82190D90;
loc_82190DB4:
	// stb r6,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r6.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r7.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82190df0
	if (ctx.cr6.eq) goto loc_82190DF0;
	// lhz r31,-32(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// addi r11,r4,3328
	ctx.r11.s64 = ctx.r4.s64 + 3328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82190DD4:
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82190ee8
	if (ctx.cr6.eq) goto loc_82190EE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82190dd4
	if (ctx.cr6.lt) goto loc_82190DD4;
loc_82190DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82190DF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190d9c
	if (!ctx.cr6.eq) goto loc_82190D9C;
	// rlwinm r11,r5,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// rlwinm r9,r7,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7F8;
	// rlwinm r7,r6,3,21,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r10,r10,1020
	ctx.r10.s64 = ctx.r10.s64 + 1020;
	// addi r9,r9,1020
	ctx.r9.s64 = ctx.r9.s64 + 1020;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r7,r11,1020
	ctx.r7.s64 = ctx.r11.s64 + 1020;
	// lfs f0,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f7,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f9,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmsubs f10,f11,f12,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82190d9c
	if (!ctx.cr6.gt) goto loc_82190D9C;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20764);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x82190d9c
	if (ctx.cr6.lt) goto loc_82190D9C;
	// rlwinm r11,r8,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7F8;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// lfs f10,1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f3,f8,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmuls f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmsubs f0,f2,f3,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82190edc
	if (!ctx.cr6.lt) goto loc_82190EDC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82190EDC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82190EE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82190df4
	goto loc_82190DF4;
}

PPC_WEAK_FUNC(sub_82190D48) {
	__imp__sub_82190D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82190EF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// ble cr6,0x82190fa0
	if (!ctx.cr6.gt) goto loc_82190FA0;
	// lwz r11,3324(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3324);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82190fa0
	if (!ctx.cr6.lt) goto loc_82190FA0;
	// lwz r11,4360(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4360);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// lwz r10,4352(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4352);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,3
	ctx.r28.s64 = 3;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r29,2(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ble cr6,0x82190f88
	if (!ctx.cr6.gt) goto loc_82190F88;
loc_82190F44:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lbzx r29,r28,r31
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82190d48
	ctx.lr = 0x82190F64;
	sub_82190D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82190f7c
	if (ctx.cr6.eq) goto loc_82190F7C;
	// stbx r30,r26,r31
	PPC_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r30.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82190F7C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82190f44
	if (ctx.cr6.lt) goto loc_82190F44;
loc_82190F88:
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 1;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stbx r10,r26,r31
	PPC_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82190FA0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82190EF0) {
	__imp__sub_82190EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190FAC) {
	__imp__sub_82190FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190FB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// subf r10,r6,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82190FB0) {
	__imp__sub_82190FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82190FEC) {
	__imp__sub_82190FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82190FF0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82190FF0) {
	__imp__sub_82190FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191020) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// mullw r6,r5,r8
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// xor r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191020) {
	__imp__sub_82191020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821910AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821910AC) {
	__imp__sub_821910AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821910B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,15004(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15004);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82191100
	if (ctx.cr6.eq) goto loc_82191100;
	// subfc r11,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// eqv r10,r8,r9
	ctx.r10.u64 = ~(ctx.r8.u64 ^ ctx.r9.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
loc_82191100:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// mulld r7,r6,r7
	ctx.r7.s64 = ctx.r6.s64 * ctx.r7.s64;
	// mulld r6,r4,r5
	ctx.r6.s64 = ctx.r4.s64 * ctx.r5.s64;
	// cmpd cr6,r7,r6
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r6.s64, ctx.xer);
	// beq cr6,0x82191144
	if (ctx.cr6.eq) goto loc_82191144;
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8219113c
	if (ctx.cr6.lt) goto loc_8219113C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8219113C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82191144:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82191164
	if (ctx.cr6.eq) goto loc_82191164;
	// subfc r10,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r9,r9,r11
	ctx.r9.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
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
loc_82191164:
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r4,r9,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfc r3,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// eqv r11,r5,r4
	ctx.r11.u64 = ~(ctx.r5.u64 ^ ctx.r4.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821910B0) {
	__imp__sub_821910B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191194) {
	__imp__sub_82191194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821911b0
	if (ctx.cr6.eq) goto loc_821911B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821911B0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r8,r6
	ctx.r3.s64 = ctx.r8.s64 * ctx.r6.s64;
	// mulld r11,r5,r4
	ctx.r11.s64 = ctx.r5.s64 * ctx.r4.s64;
	// cmpd cr6,r3,r11
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191198) {
	__imp__sub_82191198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821911EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821911EC) {
	__imp__sub_821911EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821911F0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82191260
	if (!ctx.cr6.lt) goto loc_82191260;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,255
	ctx.r8.s64 = 255;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82191210:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82191258
	if (ctx.cr6.eq) goto loc_82191258;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r7,r31
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82191258
	if (!ctx.cr0.lt) goto loc_82191258;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82191258:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82191210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191210;
loc_82191260:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821911F0) {
	__imp__sub_821911F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8219128c
	if (!ctx.cr6.gt) goto loc_8219128C;
	// lwz r11,3324(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3324);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// blr 
	return;
loc_8219128C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,3324(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3324);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821913d4
	if (ctx.cr6.lt) goto loc_821913D4;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lfs f13,3316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3320(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r4,3330
	ctx.r10.s64 = ctx.r4.s64 + 3330;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f11,3324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3324);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821912C8:
	// lbz r11,-2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,1028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82191308
	if (!ctx.cr6.lt) goto loc_82191308;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82191308:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,1028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82191348
	if (!ctx.cr6.lt) goto loc_82191348;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
loc_82191348:
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,1028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82191388
	if (!ctx.cr6.lt) goto loc_82191388;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
loc_82191388:
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,1028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x821913c8
	if (!ctx.cr6.lt) goto loc_821913C8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
loc_821913C8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x821912c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821912C8;
loc_821913D4:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82191448
	if (!ctx.cr6.lt) goto loc_82191448;
	// addi r11,r9,1664
	ctx.r11.s64 = ctx.r9.s64 + 1664;
	// lfs f12,3316(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3316);
	ctx.f12.f64 = double(temp.f32);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lfs f11,3320(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f10,3324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3324);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_821913FC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f13,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f8,1028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f6,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8219143c
	if (!ctx.cr6.lt) goto loc_8219143C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8219143C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x821913fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821913FC;
loc_82191448:
	// addi r11,r3,1664
	ctx.r11.s64 = ctx.r3.s64 + 1664;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// lfs f0,1020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3316(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 3316, temp.u32);
	// stfs f13,3320(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 3320, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191268) {
	__imp__sub_82191268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191474) {
	__imp__sub_82191474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191478) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,3324(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821914bc
	if (ctx.cr6.eq) goto loc_821914BC;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r10,r3,3328
	ctx.r10.s64 = ctx.r3.s64 + 3328;
loc_8219149C:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821914c4
	if (ctx.cr6.eq) goto loc_821914C4;
	// lwz r6,3324(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3324);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8219149c
	if (ctx.cr6.lt) goto loc_8219149C;
loc_821914BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821914C4:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,1664
	ctx.r9.s64 = ctx.r9.s64 + 1664;
	// addi r8,r10,1664
	ctx.r8.s64 = ctx.r10.s64 + 1664;
	// stw r10,3324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3324, ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// sthx r5,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191478) {
	__imp__sub_82191478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821914EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821914EC) {
	__imp__sub_821914EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821914F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// addi r11,r11,1664
	ctx.r11.s64 = ctx.r11.s64 + 1664;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r4,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u8);
	// lwz r9,3324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,3329(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3329, ctx.r5.u8);
	// lwz r11,3324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,3324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3324, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821914F0) {
	__imp__sub_821914F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191520) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x821915d8
	if (ctx.cr6.eq) goto loc_821915D8;
loc_82191548:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lbzx r9,r5,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// lwz r8,3324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r6,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r6.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r9,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r9.u8);
	// beq cr6,0x82191590
	if (ctx.cr6.eq) goto loc_82191590;
	// lhz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// addi r10,r3,3328
	ctx.r10.s64 = ctx.r3.s64 + 3328;
loc_82191570:
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821915e4
	if (ctx.cr6.eq) goto loc_821915E4;
	// lwz r30,3324(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82191570
	if (ctx.cr6.lt) goto loc_82191570;
loc_82191590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82191594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821915cc
	if (!ctx.cr6.eq) goto loc_821915CC;
	// lwz r11,3324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// addi r11,r11,1664
	ctx.r11.s64 = ctx.r11.s64 + 1664;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// lwz r8,3324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,3329(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3329, ctx.r6.u8);
	// lwz r11,3324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3324);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,3324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3324, ctx.r6.u32);
loc_821915CC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82191548
	if (ctx.cr6.lt) goto loc_82191548;
loc_821915D8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_821915E4:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,1664
	ctx.r11.s64 = ctx.r11.s64 + 1664;
	// addi r8,r10,1664
	ctx.r8.s64 = ctx.r10.s64 + 1664;
	// stw r10,3324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3324, ctx.r10.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,1
	ctx.r11.s64 = 1;
	// lhzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// sthx r8,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u16);
	// b 0x82191594
	goto loc_82191594;
}

PPC_WEAK_FUNC(sub_82191520) {
	__imp__sub_82191520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219160C) {
	__imp__sub_8219160C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r10,r5,3316
	ctx.r10.s64 = ctx.r5.s64 + 3316;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82191620:
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rotlwi r9,r6,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// addi r7,r9,1020
	ctx.r7.s64 = ctx.r9.s64 + 1020;
	// lfs f13,1020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,1024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r9,3324(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3324);
	// addi r9,r9,1664
	ctx.r9.s64 = ctx.r9.s64 + 1664;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r31,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r31.u8);
	// lwz r9,3324(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3324);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stb r6,3329(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3329, ctx.r6.u8);
	// lwz r9,3324(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3324);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r6,3324(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3324, ctx.r6.u32);
	// bne cr6,0x82191620
	if (!ctx.cr6.eq) goto loc_82191620;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191610) {
	__imp__sub_82191610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219169C) {
	__imp__sub_8219169C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821916A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821916A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,684(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// subfic r9,r11,231
	ctx.xer.ca = ctx.r11.u32 <= 231;
	ctx.r9.s64 = 231 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r5,3060
	ctx.r3.s64 = ctx.r5.s64 + 3060;
	// lwz r5,3060(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3060);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r8.u32);
	// stw r7,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r7.u32);
	// bl 0x823de090
	ctx.lr = 0x821916E8;
	sub_823DE090(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r31,3316
	ctx.r27.s64 = ctx.r31.s64 + 3316;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f0,3316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// stfs f0,3320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// stw r24,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r24.u32);
	// ble cr6,0x82191740
	if (!ctx.cr6.gt) goto loc_82191740;
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
loc_8219171C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzu r4,8(r26)
	ea = 8 + ctx.r26.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82191610
	ctx.lr = 0x8219172C;
	sub_82191610(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219171c
	if (ctx.cr6.lt) goto loc_8219171C;
loc_82191740:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f8,0(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f6,4(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stw r24,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821916A0) {
	__imp__sub_821916A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191784) {
	__imp__sub_82191784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82191790;
	__savegprlr_26(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821918fc
	if (ctx.cr6.eq) goto loc_821918FC;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// addi r28,r3,688
	ctx.r28.s64 = ctx.r3.s64 + 688;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r27,r29,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x823de1f0
	ctx.lr = 0x821917C4;
	sub_823DE1F0(ctx, base);
	// addi r11,r29,172
	ctx.r11.s64 = ctx.r29.s64 + 172;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823de130
	ctx.lr = 0x821917DC;
	sub_823DE130(ctx, base);
	// addi r10,r27,172
	ctx.r10.s64 = ctx.r27.s64 + 172;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821917F4;
	sub_823DE1F0(ctx, base);
	// subfic r9,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r31.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,668(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// addi r7,r31,172
	ctx.r7.s64 = ctx.r31.s64 + 172;
	// lwz r4,672(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srw r3,r5,r27
	ctx.r3.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r27.u8 & 0x3F));
	// slw r8,r5,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r29.u8 & 0x3F));
	// andc r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r6.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r7,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r7.u32);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x82191878
	if (ctx.cr6.eq) goto loc_82191878;
loc_82191838:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82191864
	if (!ctx.cr6.lt) goto loc_82191864;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// divwu r7,r10,r31
	ctx.r7.u32 = ctx.r10.u32 / ctx.r31.u32;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
loc_82191864:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82191838
	if (!ctx.cr6.eq) goto loc_82191838;
loc_82191878:
	// lwz r10,672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,676(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r8,r10,172
	ctx.r8.s64 = ctx.r10.s64 + 172;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x821918fc
	if (ctx.cr6.eq) goto loc_821918FC;
loc_8219189C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821918c8
	if (!ctx.cr6.lt) goto loc_821918C8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// divwu r7,r10,r31
	ctx.r7.u32 = ctx.r10.u32 / ctx.r31.u32;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
loc_821918C8:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821918e8
	if (!ctx.cr6.lt) goto loc_821918E8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// divwu r7,r10,r31
	ctx.r7.u32 = ctx.r10.u32 / ctx.r31.u32;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
loc_821918E8:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,676(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219189c
	if (!ctx.cr6.eq) goto loc_8219189C;
loc_821918FC:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82191788) {
	__imp__sub_82191788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191904) {
	__imp__sub_82191904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de020
	ctx.lr = 0x82191918;
	__savefpr_26(ctx, base);
	// stwu r1,-2128(r1)
	ea = -2128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,24
	ctx.r10.s64 = ctx.r1.s64 + 24;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
loc_8219192C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r7,r10,1020
	ctx.r7.s64 = ctx.r10.s64 + 1020;
	// lfs f0,1020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f13.f64 = double(temp.f32);
	// stfd f0,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.f0.u64);
	// stfdu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.f13.u64);
	ctx.r9.u32 = ea;
	// bne cr6,0x8219192c
	if (!ctx.cr6.eq) goto loc_8219192C;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lfd f13,24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// addi r10,r1,24
	ctx.r10.s64 = ctx.r1.s64 + 24;
	// lfd f11,32(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f10,40(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r8,r1,16
	ctx.r8.s64 = ctx.r1.s64 + 16;
	// lfd f0,16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f9,0(r5)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfd f8,8(r5)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfd f7,0(r10)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f6,0(r9)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fadd f5,f7,f13
	ctx.f5.f64 = ctx.f7.f64 + ctx.f13.f64;
	// lfd f4,-16(r10)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// fadd f3,f6,f11
	ctx.f3.f64 = ctx.f6.f64 + ctx.f11.f64;
	// lfd f2,-16(r9)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16);
	// fadd f1,f7,f4
	ctx.f1.f64 = ctx.f7.f64 + ctx.f4.f64;
	// fadd f31,f2,f6
	ctx.f31.f64 = ctx.f2.f64 + ctx.f6.f64;
	// lfd f12,20768(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20768);
	// fsub f30,f7,f10
	ctx.f30.f64 = ctx.f7.f64 - ctx.f10.f64;
	// fsub f2,f0,f2
	ctx.f2.f64 = ctx.f0.f64 - ctx.f2.f64;
	// fsub f4,f4,f13
	ctx.f4.f64 = ctx.f4.f64 - ctx.f13.f64;
	// fsub f29,f11,f6
	ctx.f29.f64 = ctx.f11.f64 - ctx.f6.f64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fadd f10,f5,f10
	ctx.f10.f64 = ctx.f5.f64 + ctx.f10.f64;
	// fadd f5,f3,f0
	ctx.f5.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fadd f3,f1,f13
	ctx.f3.f64 = ctx.f1.f64 + ctx.f13.f64;
	// fadd f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 + ctx.f0.f64;
	// fmul f31,f6,f4
	ctx.f31.f64 = ctx.f6.f64 * ctx.f4.f64;
	// fmul f10,f10,f30
	ctx.f10.f64 = ctx.f10.f64 * ctx.f30.f64;
	// fmul f5,f5,f29
	ctx.f5.f64 = ctx.f5.f64 * ctx.f29.f64;
	// fmul f3,f3,f6
	ctx.f3.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f2,f1,f2
	ctx.f2.f64 = ctx.f1.f64 * ctx.f2.f64;
	// fmadd f1,f30,f0,f31
	ctx.f1.f64 = ctx.f30.f64 * ctx.f0.f64 + ctx.f31.f64;
	// fmul f6,f3,f4
	ctx.f6.f64 = ctx.f3.f64 * ctx.f4.f64;
	// fmul f4,f2,f7
	ctx.f4.f64 = ctx.f2.f64 * ctx.f7.f64;
	// fmadd f3,f10,f0,f6
	ctx.f3.f64 = ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64;
	// fmadd f2,f5,f13,f4
	ctx.f2.f64 = ctx.f5.f64 * ctx.f13.f64 + ctx.f4.f64;
	// fadd f0,f3,f8
	ctx.f0.f64 = ctx.f3.f64 + ctx.f8.f64;
	// stfd f0,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.f0.u64);
	// fadd f13,f2,f9
	ctx.f13.f64 = ctx.f2.f64 + ctx.f9.f64;
	// stfd f13,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f13.u64);
	// ble cr6,0x82191b54
	if (!ctx.cr6.gt) goto loc_82191B54;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82191ad4
	if (ctx.cr6.lt) goto loc_82191AD4;
	// addi r9,r11,-3
	ctx.r9.s64 = ctx.r11.s64 + -3;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfd f13,8(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r10,r1,24
	ctx.r10.s64 = ctx.r1.s64 + 24;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82191A4C:
	// lfd f10,8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f9,24(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// lfd f8,32(r10)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// fadd f7,f9,f10
	ctx.f7.f64 = ctx.f9.f64 + ctx.f10.f64;
	// lfd f6,16(r10)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// fadd f5,f9,f10
	ctx.f5.f64 = ctx.f9.f64 + ctx.f10.f64;
	// fadd f4,f6,f8
	ctx.f4.f64 = ctx.f6.f64 + ctx.f8.f64;
	// lfd f2,-8(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// lfd f30,48(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// fsub f29,f9,f2
	ctx.f29.f64 = ctx.f9.f64 - ctx.f2.f64;
	// lfd f27,40(r10)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// fadd f28,f30,f6
	ctx.f28.f64 = ctx.f30.f64 + ctx.f6.f64;
	// lfd f3,0(r10)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsub f26,f27,f10
	ctx.f26.f64 = ctx.f27.f64 - ctx.f10.f64;
	// fsub f31,f3,f8
	ctx.f31.f64 = ctx.f3.f64 - ctx.f8.f64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fsub f30,f6,f30
	ctx.f30.f64 = ctx.f6.f64 - ctx.f30.f64;
	// fadd f7,f7,f2
	ctx.f7.f64 = ctx.f7.f64 + ctx.f2.f64;
	// fadd f5,f5,f27
	ctx.f5.f64 = ctx.f5.f64 + ctx.f27.f64;
	// fadd f4,f4,f3
	ctx.f4.f64 = ctx.f4.f64 + ctx.f3.f64;
	// fadd f3,f28,f8
	ctx.f3.f64 = ctx.f28.f64 + ctx.f8.f64;
	// fmadd f11,f31,f10,f11
	ctx.f11.f64 = ctx.f31.f64 * ctx.f10.f64 + ctx.f11.f64;
	// fmadd f12,f30,f9,f12
	ctx.f12.f64 = ctx.f30.f64 * ctx.f9.f64 + ctx.f12.f64;
	// fmul f2,f7,f29
	ctx.f2.f64 = ctx.f7.f64 * ctx.f29.f64;
	// fmul f7,f5,f26
	ctx.f7.f64 = ctx.f5.f64 * ctx.f26.f64;
	// fmul f5,f4,f31
	ctx.f5.f64 = ctx.f4.f64 * ctx.f31.f64;
	// fmul f4,f3,f30
	ctx.f4.f64 = ctx.f3.f64 * ctx.f30.f64;
	// fmadd f3,f2,f6,f0
	ctx.f3.f64 = ctx.f2.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmadd f2,f5,f10,f13
	ctx.f2.f64 = ctx.f5.f64 * ctx.f10.f64 + ctx.f13.f64;
	// fmadd f0,f7,f8,f3
	ctx.f0.f64 = ctx.f7.f64 * ctx.f8.f64 + ctx.f3.f64;
	// fmadd f13,f4,f9,f2
	ctx.f13.f64 = ctx.f4.f64 * ctx.f9.f64 + ctx.f2.f64;
	// bdnz 0x82191a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191A4C;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// stfd f13,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.f13.u64);
loc_82191AD4:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82191b4c
	if (!ctx.cr6.lt) goto loc_82191B4C;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,24
	ctx.r10.s64 = ctx.r1.s64 + 24;
	// lfd f13,8(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r1,40
	ctx.r8.s64 = ctx.r1.s64 + 40;
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// lfd f10,0(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f9,-16(r9)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16);
	// lfdx f8,r11,r8
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// lfdx f7,r11,r7
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fadd f6,f10,f8
	ctx.f6.f64 = ctx.f10.f64 + ctx.f8.f64;
	// fadd f5,f7,f9
	ctx.f5.f64 = ctx.f7.f64 + ctx.f9.f64;
	// lfd f3,-16(r10)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// lfd f4,0(r9)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fsub f2,f7,f9
	ctx.f2.f64 = ctx.f7.f64 - ctx.f9.f64;
	// fsub f9,f3,f8
	ctx.f9.f64 = ctx.f3.f64 - ctx.f8.f64;
	// fadd f8,f6,f3
	ctx.f8.f64 = ctx.f6.f64 + ctx.f3.f64;
	// fadd f7,f5,f4
	ctx.f7.f64 = ctx.f5.f64 + ctx.f4.f64;
	// fmadd f1,f4,f9,f1
	ctx.f1.f64 = ctx.f4.f64 * ctx.f9.f64 + ctx.f1.f64;
	// fmul f6,f8,f4
	ctx.f6.f64 = ctx.f8.f64 * ctx.f4.f64;
	// fmul f5,f7,f2
	ctx.f5.f64 = ctx.f7.f64 * ctx.f2.f64;
	// fmadd f4,f6,f9,f13
	ctx.f4.f64 = ctx.f6.f64 * ctx.f9.f64 + ctx.f13.f64;
	// stfd f4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.f4.u64);
	// fmadd f3,f5,f10,f0
	ctx.f3.f64 = ctx.f5.f64 * ctx.f10.f64 + ctx.f0.f64;
	// stfd f3,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f3.u64);
loc_82191B4C:
	// fadd f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64 + ctx.f11.f64;
	// fadd f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 + ctx.f1.f64;
loc_82191B54:
	// addi r1,r1,2128
	ctx.r1.s64 = ctx.r1.s64 + 2128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de06c
	ctx.lr = 0x82191B60;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191908) {
	__imp__sub_82191908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191B6C) {
	__imp__sub_82191B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191B70) {
	PPC_FUNC_PROLOGUE();
	// lbzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_82191B98:
	// lwz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82191bac
	if (!ctx.cr6.eq) goto loc_82191BAC;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82191BAC:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82191b98
	if (ctx.cr6.lt) goto loc_82191B98;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191B70) {
	__imp__sub_82191B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191BC4) {
	__imp__sub_82191BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_82191BF8:
	// ld r7,-8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + -8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stdu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r9.u32 = ea;
	// stdu r6,-8(r8)
	ea = -8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r8.u32 = ea;
	// blt cr6,0x82191bf8
	if (ctx.cr6.lt) goto loc_82191BF8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_82191C3C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82191c50
	if (ctx.cr6.eq) goto loc_82191C50;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82191C50:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82191c3c
	if (ctx.cr6.lt) goto loc_82191C3C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191BC8) {
	__imp__sub_82191BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191C68) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82191C68) {
	__imp__sub_82191C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82191C7C) {
	__imp__sub_82191C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82191C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82191C88;
	__savegprlr_23(ctx, base);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r5,3060(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3060);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823de090
	ctx.lr = 0x82191CA4;
	sub_823DE090(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82191CC8:
	// lbz r11,1(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// lwz r29,20(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lbzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82191d48
	if (!ctx.cr6.eq) goto loc_82191D48;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r1,336
	ctx.r24.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stbx r30,r10,r24
	PPC_STORE_U8(ctx.r10.u32 + ctx.r24.u32, ctx.r30.u8);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lbz r11,1(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82191f70
	if (ctx.cr6.eq) goto loc_82191F70;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82191d40
	if (ctx.cr6.eq) goto loc_82191D40;
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
loc_82191D40:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82191f70
	goto loc_82191F70;
loc_82191D48:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191d78
	if (ctx.cr6.eq) goto loc_82191D78;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// beq cr6,0x82191d74
	if (ctx.cr6.eq) goto loc_82191D74;
	// addi r10,r10,39
	ctx.r10.s64 = ctx.r10.s64 + 39;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
loc_82191D74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82191D78:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// bne cr6,0x82191da4
	if (!ctx.cr6.eq) goto loc_82191DA4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r24,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u8);
	// stbx r27,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r27.u8);
	// stwx r7,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u32);
	// b 0x82191f70
	goto loc_82191F70;
loc_82191DA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82191fc4
	if (ctx.cr6.eq) goto loc_82191FC4;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82191e50
	if (!ctx.cr6.lt) goto loc_82191E50;
	// subf r24,r11,r6
	ctx.r24.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_82191DD4:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r23,1(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r30,r23,r11
	PPC_STORE_U8(ctx.r23.u32 + ctx.r11.u32, ctx.r30.u8);
	// lbzx r11,r9,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191e44
	if (ctx.cr6.eq) goto loc_82191E44;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82191e44
	if (!ctx.cr6.lt) goto loc_82191E44;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_82191E18:
	// lwz r24,-6(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// lbz r24,0(r24)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82191e30
	if (!ctx.cr6.eq) goto loc_82191E30;
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r24,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r24.u16);
loc_82191E30:
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82191e18
	if (ctx.cr6.lt) goto loc_82191E18;
loc_82191E44:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// bdnz 0x82191dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191DD4;
loc_82191E50:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
	// lbzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82191ecc
	if (ctx.cr6.eq) goto loc_82191ECC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82191ecc
	if (!ctx.cr6.lt) goto loc_82191ECC;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_82191EA0:
	// lwz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82191eb8
	if (!ctx.cr6.eq) goto loc_82191EB8;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_82191EB8:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82191ea0
	if (ctx.cr6.lt) goto loc_82191EA0;
loc_82191ECC:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,1(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// addi r10,r1,596
	ctx.r10.s64 = ctx.r1.s64 + 596;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r11,r8,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r9.u32);
	// beq cr6,0x82191f38
	if (ctx.cr6.eq) goto loc_82191F38;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82191f38
	if (!ctx.cr6.lt) goto loc_82191F38;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_82191F0C:
	// lwz r7,-6(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82191f24
	if (!ctx.cr6.eq) goto loc_82191F24;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82191F24:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82191f0c
	if (ctx.cr6.lt) goto loc_82191F0C;
loc_82191F38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r28,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r28.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r25,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r25.u16);
loc_82191F70:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82191cc8
	if (!ctx.cr6.eq) goto loc_82191CC8;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82191fd0
	if (!ctx.cr6.eq) goto loc_82191FD0;
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82192128
	if (ctx.cr6.eq) goto loc_82192128;
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// bl 0x82191bc8
	ctx.lr = 0x82191FB8;
	sub_82191BC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82191FC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82191FD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82191fc4
	if (ctx.cr6.eq) goto loc_82191FC4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82192008
	if (ctx.cr6.eq) goto loc_82192008;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82192008
	if (ctx.cr6.eq) goto loc_82192008;
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
loc_82192008:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x82192090
	if (!ctx.cr6.gt) goto loc_82192090;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r8,r1,596
	ctx.r8.s64 = ctx.r1.s64 + 596;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82192020:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,-4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82192084
	if (ctx.cr6.eq) goto loc_82192084;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82192084
	if (!ctx.cr6.lt) goto loc_82192084;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_82192058:
	// lwz r7,-6(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82192070
	if (!ctx.cr6.eq) goto loc_82192070;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82192070:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82192058
	if (ctx.cr6.lt) goto loc_82192058;
loc_82192084:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bdnz 0x82192020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82192020;
loc_82192090:
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// lwz r9,592(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82192104
	if (ctx.cr6.eq) goto loc_82192104;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82192104
	if (!ctx.cr6.lt) goto loc_82192104;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
loc_821920D8:
	// lwz r7,-6(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821920f0
	if (!ctx.cr6.eq) goto loc_821920F0;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_821920F0:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821920d8
	if (ctx.cr6.lt) goto loc_821920D8;
loc_82192104:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r25,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r25.u16);
loc_82192128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191bc8
	ctx.lr = 0x82192130;
	sub_82191BC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82191C80) {
	__imp__sub_82191C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219213C) {
	__imp__sub_8219213C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82192148;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r30.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r30,152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8219219c
	if (ctx.cr6.eq) goto loc_8219219C;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82192170:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82191c80
	ctx.lr = 0x82192180;
	sub_82191C80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821921a8
	if (ctx.cr6.eq) goto loc_821921A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82192170
	if (ctx.cr6.lt) goto loc_82192170;
loc_8219219C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821921A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82192140) {
	__imp__sub_82192140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821921B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821921B4) {
	__imp__sub_821921B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821921B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821921B8) {
	__imp__sub_821921B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821921BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821921BC) {
	__imp__sub_821921BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821921C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ble cr6,0x821921f0
	if (!ctx.cr6.gt) goto loc_821921F0;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821921E4:
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// stdu r9,-8(r11)
	ea = -8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821921e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821921E4;
loc_821921F0:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r8,r3
	PPC_STORE_U64(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u64);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
loc_82192218:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82192240
	if (ctx.cr6.gt) goto loc_82192240;
	// bne cr6,0x82192230
	if (!ctx.cr6.eq) goto loc_82192230;
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// b 0x82192240
	goto loc_82192240;
loc_82192230:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82192240
	if (ctx.cr6.lt) goto loc_82192240;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_82192240:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82192218
	if (ctx.cr6.lt) goto loc_82192218;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821921C0) {
	__imp__sub_821921C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82192260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r4,30(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// rotlwi r11,r4,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82192294
	if (ctx.cr6.eq) goto loc_82192294;
	// bl 0x82192258
	ctx.lr = 0x82192290;
	sub_82192258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82192294:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821922cc
	if (ctx.cr6.eq) goto loc_821922CC;
loc_821922BC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821922bc
	if (!ctx.cr6.eq) goto loc_821922BC;
loc_821922CC:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r30.u16);
	// sth r9,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r9.u16);
	// bl 0x821921c0
	ctx.lr = 0x821922F0;
	sub_821921C0(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82192258) {
	__imp__sub_82192258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821922FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821922FC) {
	__imp__sub_821922FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192300) {
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
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82192338
	if (ctx.cr6.eq) goto loc_82192338;
	// bl 0x82192258
	ctx.lr = 0x8219232C;
	sub_82192258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82192348
	if (ctx.cr6.eq) goto loc_82192348;
loc_82192338:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821921c0
	ctx.lr = 0x82192348;
	sub_821921C0(ctx, base);
loc_82192348:
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

PPC_WEAK_FUNC(sub_82192300) {
	__imp__sub_82192300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219235C) {
	__imp__sub_8219235C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192360) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,412(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,413(r9)
	PPC_STORE_U8(ctx.r9.u32 + 413, ctx.r10.u8);
	// lbz r10,412(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// lhz r8,18(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stb r3,412(r4)
	PPC_STORE_U8(ctx.r4.u32 + 412, ctx.r3.u8);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// sth r10,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82192360) {
	__imp__sub_82192360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821923AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821923AC) {
	__imp__sub_821923AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821923B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// stw r7,668(r4)
	PPC_STORE_U32(ctx.r4.u32 + 668, ctx.r7.u32);
	// addi r6,r4,413
	ctx.r6.s64 = ctx.r4.s64 + 413;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r5,r11,17280
	ctx.r5.s64 = ctx.r11.s64 + 17280;
loc_821923D0:
	// lbz r11,3(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821923f4
	if (!ctx.cr6.eq) goto loc_821923F4;
	// lbz r11,412(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// lwz r10,668(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 668);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r9,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r10,668(r4)
	PPC_STORE_U32(ctx.r4.u32 + 668, ctx.r10.u32);
loc_821923F4:
	// lbz r9,412(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// lbz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r10,r31,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stbx r9,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r9,412(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stb r9,412(r4)
	PPC_STORE_U8(ctx.r4.u32 + 412, ctx.r9.u8);
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r31,18(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mullw r10,r9,r9
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8219246c
	if (!ctx.cr6.lt) goto loc_8219246C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8219246C:
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821923d0
	if (!ctx.cr6.eq) goto loc_821923D0;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lwz r9,16016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16016);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r10,684(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r11,412(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,20776(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20776);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r7.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821923B0) {
	__imp__sub_821923B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821924CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821924CC) {
	__imp__sub_821924CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821924D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821924D8;
	__savegprlr_27(ctx, base);
	// lwz r11,684(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r9,r11,172
	ctx.r9.s64 = ctx.r11.s64 + 172;
	// stw r31,672(r4)
	PPC_STORE_U32(ctx.r4.u32 + 672, ctx.r31.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble cr6,0x82192600
	if (!ctx.cr6.gt) goto loc_82192600;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r28,255
	ctx.r28.s64 = 255;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
loc_82192514:
	// lhz r10,6(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bne cr6,0x82192534
	if (!ctx.cr6.eq) goto loc_82192534;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// stb r28,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// b 0x82192554
	goto loc_82192554;
loc_82192534:
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lbz r9,413(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 413);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82192554:
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// lbz r9,412(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpwi cr6,r6,128
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 128, ctx.xer);
	// bgt cr6,0x82192608
	if (ctx.cr6.gt) goto loc_82192608;
	// lwz r9,684(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// addi r6,r4,413
	ctx.r6.s64 = ctx.r4.s64 + 413;
	// lwz r7,672(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 672);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r9.u32);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,672(r4)
	PPC_STORE_U32(ctx.r4.u32 + 672, ctx.r9.u32);
loc_82192598:
	// lbz r7,412(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rotlwi r9,r5,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stbx r7,r6,r5
	PPC_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r7.u8);
	// lhz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lbz r7,412(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lhz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// subf r5,r5,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r5.s64;
	// stb r7,412(r4)
	PPC_STORE_U8(ctx.r4.u32 + 412, ctx.r7.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lhz r9,18(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// sthu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82192598
	if (!ctx.cr6.eq) goto loc_82192598;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82192514
	if (ctx.cr6.lt) goto loc_82192514;
loc_82192600:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82192608:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821924D0) {
	__imp__sub_821924D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82192618;
	__savegprlr_26(ctx, base);
	// lbz r11,412(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r27.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82192834
	if (ctx.cr6.eq) goto loc_82192834;
	// lwz r11,684(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// lwz r30,152(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x82192824
	if (ctx.cr6.eq) goto loc_82192824;
	// addi r11,r30,39
	ctx.r11.s64 = ctx.r30.s64 + 39;
	// li r28,255
	ctx.r28.s64 = 255;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82192658:
	// lwzu r10,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,676(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r7,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r7.u32);
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r6,413(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// stb r28,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r28.u8);
	// sthx r27,r8,r5
	PPC_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r27.u16);
	// bne cr6,0x82192714
	if (!ctx.cr6.eq) goto loc_82192714;
	// lbz r7,412(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// cmplwi cr6,r7,127
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 127, ctx.xer);
	// blt cr6,0x821926b4
	if (ctx.cr6.lt) goto loc_821926B4;
	// lwz r11,676(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r11.u32);
	// b 0x8219281c
	goto loc_8219281C;
loc_821926B4:
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r8,676(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stb r7,413(r6)
	PPC_STORE_U8(ctx.r6.u32 + 413, ctx.r7.u8);
	// lhz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lbz r7,412(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lhz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// subf r6,r6,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r6.s64;
	// stb r7,412(r4)
	PPC_STORE_U8(ctx.r4.u32 + 412, ctx.r7.u8);
	// sth r6,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
	// lhz r7,18(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// sth r6,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r6.u16);
	// lwz r9,676(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r8.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82192714:
	// lbz r9,412(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// subfic r6,r9,128
	ctx.xer.ca = ctx.r9.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r9.s64;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x821927bc
	if (ctx.cr6.lt) goto loc_821927BC;
	// li r6,31
	ctx.r6.s64 = 31;
loc_82192728:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r8,413(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 413);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82192818
	if (!ctx.cr6.eq) goto loc_82192818;
	// lbz r7,412(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r8,676(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r7,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r7.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lhz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// subf r31,r31,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r31.s64;
	// lbz r7,412(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r7,412(r4)
	PPC_STORE_U8(ctx.r4.u32 + 412, ctx.r7.u8);
	// sth r31,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r31.u16);
	// lhz r7,18(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// sth r9,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r9.u16);
	// lwz r9,676(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r9.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// beq cr6,0x8219281c
	if (ctx.cr6.eq) goto loc_8219281C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82192728
	if (!ctx.cr6.eq) goto loc_82192728;
	// b 0x8219281c
	goto loc_8219281C;
loc_821927BC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82192728
	if (!ctx.cr6.eq) goto loc_82192728;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x821927f0
	if (!ctx.cr6.eq) goto loc_821927F0;
	// stb r28,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r28.u8);
	// lbz r10,412(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 412);
	// lwz r11,676(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stw r9,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r9.u32);
	// stb r10,412(r4)
	PPC_STORE_U8(ctx.r4.u32 + 412, ctx.r10.u8);
	// b 0x8219281c
	goto loc_8219281C;
loc_821927F0:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,413(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 413);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// bne cr6,0x8219281c
	if (!ctx.cr6.eq) goto loc_8219281C;
	// lwz r11,676(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,676(r4)
	PPC_STORE_U32(ctx.r4.u32 + 676, ctx.r11.u32);
	// b 0x8219281c
	goto loc_8219281C;
loc_82192818:
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_8219281C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82192658
	if (!ctx.cr6.eq) goto loc_82192658;
loc_82192824:
	// lwz r11,684(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// lwz r10,676(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r11.u32);
loc_82192834:
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82192610) {
	__imp__sub_82192610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82192840;
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfd f0,20768(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20768);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lfd f30,20792(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 20792);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// beq cr6,0x821928c4
	if (ctx.cr6.eq) goto loc_821928C4;
	// addi r30,r4,24
	ctx.r30.s64 = ctx.r4.s64 + 24;
loc_8219288C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82191908
	ctx.lr = 0x8219289C;
	sub_82191908(ctx, base);
	// fadd f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64 + ctx.f31.f64;
	// fcmpu cr6,f30,f1
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bge cr6,0x821928b0
	if (!ctx.cr6.lt) goto loc_821928B0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_821928B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219288c
	if (ctx.cr6.lt) goto loc_8219288C;
loc_821928C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821928e4
	if (!ctx.cr6.eq) goto loc_821928E4;
loc_821928D0:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821928E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82192928
	if (ctx.cr6.eq) goto loc_82192928;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8219291c
	if (ctx.cr6.eq) goto loc_8219291C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82192258
	ctx.lr = 0x82192910;
	sub_82192258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82192928
	if (ctx.cr6.eq) goto loc_82192928;
loc_8219291C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821921c0
	ctx.lr = 0x82192928;
	sub_821921C0(ctx, base);
loc_82192928:
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x821928d0
	if (ctx.cr6.gt) goto loc_821928D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f31
	ctx.f11.f64 = double(float(ctx.f31.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lfd f0,20784(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20784);
	// fmul f10,f31,f0
	ctx.f10.f64 = ctx.f31.f64 * ctx.f0.f64;
	// fdiv f9,f13,f10
	ctx.f9.f64 = ctx.f13.f64 / ctx.f10.f64;
	// fdiv f8,f12,f10
	ctx.f8.f64 = ctx.f12.f64 / ctx.f10.f64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82190440
	ctx.lr = 0x82192974;
	sub_82190440(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,3060(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3060);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,413
	ctx.r3.s64 = ctx.r31.s64 + 413;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lfs f0,13772(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13772);
	ctx.f0.f64 = double(temp.f32);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// frsp f13,f2
	ctx.f13.f64 = double(float(ctx.f2.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r27,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r27.u32);
	// stb r27,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r27.u8);
	// bl 0x823de090
	ctx.lr = 0x821929DC;
	sub_823DE090(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_82192838) {
	__imp__sub_82192838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821929F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x821929F8;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10512(r1)
	ea = -10512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r6,1664
	ctx.r10.s64 = ctx.r6.s64 + 1664;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r11,r4
	ctx.r15.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lbzx r10,r27,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// lbz r9,3329(r15)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r15.u32 + 3329);
	// li r17,0
	ctx.r17.s64 = 0;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r24,r3
	ctx.r24.s64 = ctx.r3.s16;
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// stb r5,3060(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3060, ctx.r5.u8);
	// extsh r23,r11
	ctx.r23.s64 = ctx.r11.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stb r5,3060(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3060, ctx.r5.u8);
	// lwz r6,3324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// subf r3,r24,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r24.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r29,r23,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r23.s64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x82192c64
	if (!ctx.cr6.gt) goto loc_82192C64;
	// addi r11,r1,2148
	ctx.r11.s64 = ctx.r1.s64 + 2148;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r22,r11,-18
	ctx.r22.s64 = ctx.r11.s64 + -18;
	// addi r18,r31,3329
	ctx.r18.s64 = ctx.r31.s64 + 3329;
loc_82192AA4:
	// lbz r11,-1(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + -1);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82192c4c
	if (ctx.cr6.eq) goto loc_82192C4C;
	// lbz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,2(r19)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r19.u32 + 2);
	// rotlwi r8,r7,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lhz r28,0(r19)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// add r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r10,r8,r20
	ctx.r10.u64 = ctx.r8.u64 + ctx.r20.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// lhz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r26,r4
	ctx.r26.s64 = ctx.r4.s16;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// subf r21,r10,r26
	ctx.r21.s64 = ctx.r26.s64 - ctx.r10.s64;
	// subf r14,r25,r9
	ctx.r14.s64 = ctx.r9.s64 - ctx.r25.s64;
	// mullw r4,r9,r21
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r21.s32);
	// stw r21,18(r22)
	PPC_STORE_U32(ctx.r22.u32 + 18, ctx.r21.u32);
	// stw r14,22(r22)
	PPC_STORE_U32(ctx.r22.u32 + 22, ctx.r14.u32);
	// mullw r7,r14,r10
	ctx.r7.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// mullw r27,r27,r14
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r14.s32);
	// mullw r28,r28,r21
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r21.s32);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r7,26(r22)
	PPC_STORE_U32(ctx.r22.u32 + 26, ctx.r7.u32);
	// subf. r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82192c4c
	if (ctx.cr0.lt) goto loc_82192C4C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82192b44
	if (!ctx.cr6.eq) goto loc_82192B44;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82192c4c
	if (!ctx.cr6.eq) goto loc_82192C4C;
loc_82192B44:
	// addi r28,r31,3060
	ctx.r28.s64 = ctx.r31.s64 + 3060;
	// clrlwi r21,r5,24
	ctx.r21.u64 = ctx.r5.u32 & 0xFF;
	// lbzx r7,r28,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82192bc8
	if (ctx.cr6.eq) goto loc_82192BC8;
	// subf r4,r23,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r23.s64;
	// stbx r5,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u8);
	// subf r27,r24,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r24.s64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// mullw r7,r29,r4
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r3,r27
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// mullw r14,r3,r4
	ctx.r14.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r29,r27
	ctx.r27.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subf r27,r14,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r14.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// srawi r14,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r27.s32 >> 31;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// xor r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 ^ ctx.r27.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// xor r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// clrlwi r14,r14,30
	ctx.r14.u64 = ctx.r14.u32 & 0x3;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
	// xor r4,r14,r7
	ctx.r4.u64 = ctx.r14.u64 ^ ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82192BC8:
	// lbzx r10,r28,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82192c40
	if (ctx.cr6.eq) goto loc_82192C40;
	// stbx r5,r28,r8
	PPC_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r5.u8);
	// subf r4,r24,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r24.s64;
	// subf r28,r23,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r23.s64;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// mullw r9,r3,r4
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r29,r28
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mullw r27,r29,r4
	ctx.r27.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// mullw r28,r3,r28
	ctx.r28.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r28,r28,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// srawi r27,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 31;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// xor r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// xor r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// clrlwi r27,r27,30
	ctx.r27.u64 = ctx.r27.u32 & 0x3;
	// add r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 + ctx.r7.u64;
	// xor r4,r27,r7
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82192C40:
	// sth r11,14(r22)
	PPC_STORE_U16(ctx.r22.u32 + 14, ctx.r11.u16);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// sthu r8,16(r22)
	ea = 16 + ctx.r22.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r22.u32 = ea;
loc_82192C4C:
	// lwz r11,3324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82192aa4
	if (ctx.cr6.lt) goto loc_82192AA4;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82192C64:
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,15004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15004, ctx.r31.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r6,r8,4272
	ctx.r6.s64 = ctx.r8.s64 + 4272;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822e36b8
	ctx.lr = 0x82192C94;
	sub_822E36B8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,15004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15004, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82192ccc
	if (ctx.cr6.eq) goto loc_82192CCC;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r8,r1,1120
	ctx.r8.s64 = ctx.r1.s64 + 1120;
loc_82192CB8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82192cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82192CB8;
loc_82192CCC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82192d78
	if (ctx.cr6.eq) goto loc_82192D78;
	// addi r4,r1,2144
	ctx.r4.s64 = ctx.r1.s64 + 2144;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// addi r9,r1,1120
	ctx.r9.s64 = ctx.r1.s64 + 1120;
loc_82192CE4:
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82192d44
	if (!ctx.cr6.gt) goto loc_82192D44;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82192d24
	if (!ctx.cr6.eq) goto loc_82192D24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82192d64
	if (!ctx.cr6.gt) goto loc_82192D64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82192d64
	goto loc_82192D64;
loc_82192D24:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821911f0
	ctx.lr = 0x82192D38;
	sub_821911F0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82192d58
	goto loc_82192D58;
loc_82192D44:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bge cr6,0x82192d54
	if (!ctx.cr6.lt) goto loc_82192D54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82192D54:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_82192D58:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821911f0
	ctx.lr = 0x82192D64;
	sub_821911F0(ctx, base);
loc_82192D64:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// addi r9,r1,1120
	ctx.r9.s64 = ctx.r1.s64 + 1120;
	// bne 0x82192ce4
	if (!ctx.cr0.eq) goto loc_82192CE4;
loc_82192D78:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// li r3,2
	ctx.r3.s64 = 2;
	// lbzx r7,r27,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// lbz r6,3329(r15)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r15.u32 + 3329);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// stb r6,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82192e5c
	if (!ctx.cr6.gt) goto loc_82192E5C;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82192DD0:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x82192e54
	if (ctx.cr6.eq) goto loc_82192E54;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82192e04
	if (ctx.cr6.eq) goto loc_82192E04;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x82192e3c
	goto loc_82192E3C;
loc_82192E04:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// mulld r7,r7,r5
	ctx.r7.s64 = ctx.r7.s64 * ctx.r5.s64;
	// mulld r5,r4,r30
	ctx.r5.s64 = ctx.r4.s64 * ctx.r30.s64;
	// cmpd cr6,r5,r7
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bne cr6,0x82192e3c
	if (!ctx.cr6.eq) goto loc_82192E3C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82192E3C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82192e54
	if (!ctx.cr6.eq) goto loc_82192E54;
	// stbx r9,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82192E54:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82192dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82192DD0;
loc_82192E5C:
	// addi r1,r1,10512
	ctx.r1.s64 = ctx.r1.s64 + 10512;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821929F0) {
	__imp__sub_821929F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82192E64) {
	__imp__sub_82192E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82192E70;
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
	// bl 0x82191268
	ctx.lr = 0x82192E84;
	sub_82191268(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821929f0
	ctx.lr = 0x82192E90;
	sub_821929F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82192E68) {
	__imp__sub_82192E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82192E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82192EA0;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4496(r1)
	ea = -4496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x821916a0
	ctx.lr = 0x82192EB8;
	sub_821916A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82191268
	ctx.lr = 0x82192ECC;
	sub_82191268(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821929f0
	ctx.lr = 0x82192EDC;
	sub_821929F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82190ef0
	ctx.lr = 0x82192EEC;
	sub_82190EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82191520
	ctx.lr = 0x82192EF8;
	sub_82191520(ctx, base);
	// lwz r11,4432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4432);
	// lwz r10,4440(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4440);
	// li r29,255
	ctx.r29.s64 = 255;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,3404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3404);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4432, ctx.r11.u32);
	// beq cr6,0x82192f8c
	if (ctx.cr6.eq) goto loc_82192F8C;
loc_82192F20:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82191268
	ctx.lr = 0x82192F3C;
	sub_82191268(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821929f0
	ctx.lr = 0x82192F4C;
	sub_821929F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82190ef0
	ctx.lr = 0x82192F5C;
	sub_82190EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82191520
	ctx.lr = 0x82192F68;
	sub_82191520(ctx, base);
	// lwz r9,4432(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4432);
	// lwz r10,4440(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4440);
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r8,3404(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3404);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4432, ctx.r11.u32);
	// bne cr6,0x82192f20
	if (!ctx.cr6.eq) goto loc_82192F20;
loc_82192F8C:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82192fbc
	if (!ctx.cr6.eq) goto loc_82192FBC;
	// stw r9,680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 680, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r4,413(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 413);
	// bl 0x82191788
	ctx.lr = 0x82192FB4;
	sub_82191788(ctx, base);
	// addi r1,r1,4496
	ctx.r1.s64 = ctx.r1.s64 + 4496;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82192FBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82192fec
	if (ctx.cr6.eq) goto loc_82192FEC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82192FC8:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// beq cr6,0x82192fe4
	if (ctx.cr6.eq) goto loc_82192FE4;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lbz r7,413(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 413);
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
loc_82192FE4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82192fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82192FC8;
loc_82192FEC:
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219300c
	if (ctx.cr6.eq) goto loc_8219300C;
loc_82192FF8:
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82192ff8
	if (!ctx.cr6.eq) goto loc_82192FF8;
loc_8219300C:
	// lwz r10,684(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 684);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 680, ctx.r11.u32);
	// stw r10,684(r28)
	PPC_STORE_U32(ctx.r28.u32 + 684, ctx.r10.u32);
	// addi r1,r1,4496
	ctx.r1.s64 = ctx.r1.s64 + 4496;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82192E98) {
	__imp__sub_82192E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1712(r1)
	ea = -1712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82192140
	ctx.lr = 0x8219304C;
	sub_82192140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821930b0
	if (ctx.cr6.eq) goto loc_821930B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82192838
	ctx.lr = 0x82193064;
	sub_82192838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821930b0
	if (ctx.cr6.eq) goto loc_821930B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821923b0
	ctx.lr = 0x8219307C;
	sub_821923B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821924d0
	ctx.lr = 0x82193084;
	sub_821924D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821930b0
	if (ctx.cr6.eq) goto loc_821930B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82192610
	ctx.lr = 0x8219309C;
	sub_82192610(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82192e98
	ctx.lr = 0x821930A4;
	sub_82192E98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e778
	ctx.lr = 0x821930B0;
	sub_8218E778(ctx, base);
loc_821930B0:
	// addi r1,r1,1712
	ctx.r1.s64 = ctx.r1.s64 + 1712;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82193028) {
	__imp__sub_82193028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821930C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821930C4) {
	__imp__sub_821930C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821930C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821930D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8219315c
	if (!ctx.cr6.gt) goto loc_8219315C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82189d00
	ctx.lr = 0x82193114;
	sub_82189D00(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82189d00
	ctx.lr = 0x82193128;
	sub_82189D00(ctx, base);
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
	// bl 0x82189d00
	ctx.lr = 0x82193140;
	sub_82189D00(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82189d00
	ctx.lr = 0x82193154;
	sub_82189D00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8219315C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82189d00
	ctx.lr = 0x82193168;
	sub_82189D00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821930C8) {
	__imp__sub_821930C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82193178;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
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
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821930c8
	ctx.lr = 0x821931B4;
	sub_821930C8(ctx, base);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82193208
	if (!ctx.cr6.lt) goto loc_82193208;
loc_821931C0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x821931D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193208
	if (!ctx.cr6.eq) goto loc_82193208;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x821931F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193208
	if (!ctx.cr6.eq) goto loc_82193208;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821931c0
	if (ctx.cr6.lt) goto loc_821931C0;
loc_82193208:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82193254
	if (!ctx.cr6.lt) goto loc_82193254;
loc_82193210:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bctrl 
	ctx.lr = 0x82193220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193254
	if (!ctx.cr6.eq) goto loc_82193254;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8219323C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193254
	if (!ctx.cr6.eq) goto loc_82193254;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82193210
	if (ctx.cr6.lt) goto loc_82193210;
loc_82193254:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8219325C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x821932c8
	if (!ctx.cr6.lt) goto loc_821932C8;
loc_82193264:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x82193274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821932bc
	if (!ctx.cr6.eq) goto loc_821932BC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bctrl 
	ctx.lr = 0x82193290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821932c8
	if (!ctx.cr6.eq) goto loc_821932C8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821932bc
	if (ctx.cr6.eq) goto loc_821932BC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_821932BC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82193264
	if (ctx.cr6.lt) goto loc_82193264;
loc_821932C8:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8219333c
	if (!ctx.cr6.gt) goto loc_8219333C;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_821932D4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x821932E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193328
	if (!ctx.cr6.eq) goto loc_82193328;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x82193300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193338
	if (!ctx.cr6.eq) goto loc_82193338;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82193328
	if (ctx.cr6.eq) goto loc_82193328;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82193328:
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821932d4
	if (ctx.cr6.lt) goto loc_821932D4;
loc_82193338:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_8219333C:
	// bne cr6,0x82193398
	if (!ctx.cr6.eq) goto loc_82193398;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82193400
	if (ctx.cr6.eq) goto loc_82193400;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82193368
	if (ctx.cr6.eq) goto loc_82193368;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82193368
	if (ctx.cr6.eq) goto loc_82193368;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82193368:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219325c
	if (ctx.cr6.eq) goto loc_8219325C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x8219325c
	goto loc_8219325C;
loc_82193398:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bne cr6,0x821933e0
	if (!ctx.cr6.eq) goto loc_821933E0;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821933c0
	if (ctx.cr6.eq) goto loc_821933C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821933C0:
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8219325c
	if (ctx.cr6.eq) goto loc_8219325C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x8219325c
	goto loc_8219325C;
loc_821933E0:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821933f8
	if (ctx.cr6.eq) goto loc_821933F8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_821933F8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8219325c
	goto loc_8219325C;
loc_82193400:
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

PPC_WEAK_FUNC(sub_82193170) {
	__imp__sub_82193170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82193414) {
	__imp__sub_82193414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f8,f9,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f13,f7,f9,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f12,f5,f6,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f11,f4,f6,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fadds f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f10,f1,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmsubs f6,f8,f2,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 - ctx.f2.f64));
	// fabs f5,f7
	ctx.f5.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fcmpu cr6,f4,f6
	ctx.cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// blt cr6,0x82193484
	if (ctx.cr6.lt) goto loc_82193484;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82193484:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82193418) {
	__imp__sub_82193418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219348C) {
	__imp__sub_8219348C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de024
	ctx.lr = 0x821934A0;
	__savefpr_27(ctx, base);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// fsubs f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,20804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20804);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f7,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 - ctx.f12.f64));
	// fmuls f3,f6,f6
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f2,f4,f4,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8219350c
	if (!ctx.cr6.lt) goto loc_8219350C;
loc_821934F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x82193500;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8219350C:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f3,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f9,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f9,f9,f31,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmsubs f8,f31,f13,f12
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fnmsubs f13,f10,f11,f3
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 - ctx.f3.f64)));
	// fmuls f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// beq cr6,0x821935dc
	if (ctx.cr6.eq) goto loc_821935DC;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
loc_8219356C:
	// lfs f31,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f30,f31,f11
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f29,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f30,f29,f12,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f31,f29,f9,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fmadds f30,f28,f13,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f31,f28,f8,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f31.f64));
	// fabs f29,f30
	ctx.f29.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fadds f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// fmuls f30,f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f31,f29,f1,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f31.f64));
	// fmsubs f30,f30,f0,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fabs f29,f31
	ctx.f29.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fmuls f31,f29,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x821935c0
	if (ctx.cr6.lt) goto loc_821935C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821935C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821934f4
	if (!ctx.cr6.eq) goto loc_821934F4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8219356c
	if (ctx.cr6.lt) goto loc_8219356C;
loc_821935DC:
	// fsubs f10,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// li r3,3
	ctx.r3.s64 = 3;
	// fcmpu cr6,f10,f3
	ctx.cr6.compare(ctx.f10.f64, ctx.f3.f64);
	// bgt cr6,0x82193600
	if (ctx.cr6.gt) goto loc_82193600;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x821935F4;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82193600:
	// fmuls f12,f12,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f11,f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f10,f13,f5,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x8219362c
	if (!ctx.cr6.lt) goto loc_8219362C;
	// li r3,2
	ctx.r3.s64 = 2;
loc_8219362C:
	// fnmsubs f13,f13,f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f13.f64 - ctx.f2.f64)));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x8219364c
	if (!ctx.cr6.lt) goto loc_8219364C;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r3,r3,0,31,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8219364C:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x82193654;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82193490) {
	__imp__sub_82193490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-640
	ctx.r10.s64 = ctx.r11.s64 + -640;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r5,r9,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193660) {
	__imp__sub_82193660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82193688;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,80(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821936e0
	if (!ctx.cr6.eq) goto loc_821936E0;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821936e0
	if (!ctx.cr6.eq) goto loc_821936E0;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821937d0
	if (ctx.cr6.eq) goto loc_821937D0;
loc_821936E0:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r7,84(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,20420(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f0,5488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f13,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f4,f10,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f9,f10,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fmadds f12,f10,f11,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fnmsubs f11,f4,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fabs f7,f11
	ctx.f7.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fabs f5,f9
	ctx.f5.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmuls f0,f7,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fadds f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fmuls f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fadds f9,f4,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fabs f1,f10
	ctx.f1.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsqrts f8,f13
	ctx.f8.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmadds f7,f8,f3,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fsqrts f5,f11
	ctx.f5.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f5,f6,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsqrts f3,f9
	ctx.f3.f64 = double(float(sqrt(ctx.f9.f64)));
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f2,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82399e80
	ctx.lr = 0x821937D0;
	sub_82399E80(ctx, base);
loc_821937D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193680) {
	__imp__sub_82193680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821937D8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,80(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfs f13,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f13,20476(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x821938a8
	if (ctx.cr6.lt) goto loc_821938A8;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,72(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,6056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82399e80
	ctx.lr = 0x821938A8;
	sub_82399E80(ctx, base);
loc_821938A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821937D8) {
	__imp__sub_821937D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821938B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,20420(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,72(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82399478
	sub_82399478(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821938B8) {
	__imp__sub_821938B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821938F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821938F4) {
	__imp__sub_821938F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821938F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82193900;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821939ac
	if (ctx.cr6.eq) goto loc_821939AC;
	// lhz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r27,56(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r28,88(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
loc_82193958:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217e4c8
	ctx.lr = 0x82193960;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821939ac
	if (ctx.cr6.eq) goto loc_821939AC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r11,r4,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82193958
	if (!ctx.cr6.eq) goto loc_82193958;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// lfsx f1,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82193490
	ctx.lr = 0x82193998;
	sub_82193490(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82193958
	if (ctx.cr6.eq) goto loc_82193958;
	// stbx r3,r4,r30
	PPC_STORE_U8(ctx.r4.u32 + ctx.r30.u32, ctx.r3.u8);
	// b 0x82193958
	goto loc_82193958;
loc_821939AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821938F8) {
	__imp__sub_821938F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821939B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821939B4) {
	__imp__sub_821939B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821939B8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821939B8) {
	__imp__sub_821939B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821939C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de018
	ctx.lr = 0x821939D0;
	__savefpr_24(ctx, base);
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// lfs f0,2096(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2096);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,2108(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2108);
	// lfs f13,2100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2100);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,384
	ctx.r6.s64 = ctx.r11.s64 + 384;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,2112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2112, ctx.r6.u32);
	// lfs f9,2072(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2072);
	ctx.f9.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f8,2060(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f7,2048(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f6,2064(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	ctx.f6.f64 = double(temp.f32);
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lfs f5,2076(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2076);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,2052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2068(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2080(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2080);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2056(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
loc_82193A48:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r6,r1,-96
	ctx.r6.s64 = ctx.r1.s64 + -96;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r3,r1,-128
	ctx.r3.s64 = ctx.r1.s64 + -128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r7,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r7.u64);
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r4.u64);
	// lfd f29,-112(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// fmuls f28,f12,f29
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// frsp f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64));
	// fmuls f27,f10,f29
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f26,f9,f29
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmadds f28,f11,f30,f28
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f27,f31,f30,f27
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f27.f64));
	// fmuls f25,f6,f30
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f24,f3,f30
	ctx.f24.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmadds f30,f8,f30,f26
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f26.f64));
	// fadds f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// stfs f28,-96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f28,f27,f13
	ctx.f28.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// stfs f28,-92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// fmadds f28,f5,f29,f25
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f25.f64));
	// vpkd3d128 v62,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// fmadds f29,f2,f29,f24
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 + ctx.f24.f64));
	// fadds f30,f30,f7
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// stfs f30,4(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// fadds f30,f28,f4
	ctx.f30.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f30,8(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f30,f29,f1
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// stfsu f30,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stvewx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,-128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82193a48
	if (!ctx.cr6.eq) goto loc_82193A48;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de064
	ctx.lr = 0x82193B04;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821939C0) {
	__imp__sub_821939C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82193B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82193B28:
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x821939c0
	ctx.lr = 0x82193B40;
	sub_821939C0(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82193b28
	if (!ctx.cr6.eq) goto loc_82193B28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193B10) {
	__imp__sub_82193B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82193B5C) {
	__imp__sub_82193B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82193B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,2136(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2136);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823b8c70
	ctx.lr = 0x82193B80;
	sub_823B8C70(ctx, base);
	// addi r28,r30,1536
	ctx.r28.s64 = ctx.r30.s64 + 1536;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82193B88:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f12,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// beq 0x82193bf8
	if (ctx.cr0.eq) goto loc_82193BF8;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bl 0x823b8c88
	ctx.lr = 0x82193BF4;
	sub_823B8C88(ctx, base);
	// b 0x82193b88
	goto loc_82193B88;
loc_82193BF8:
	// bl 0x823b8c90
	ctx.lr = 0x82193BFC;
	sub_823B8C90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193B60) {
	__imp__sub_82193B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82193C04) {
	__imp__sub_82193C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82193C10;
	__savegprlr_23(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r4,-96(r1)
	PPC_STORE_U16(ctx.r1.u32 + -96, ctx.r4.u16);
	// sth r4,-90(r1)
	PPC_STORE_U16(ctx.r1.u32 + -90, ctx.r4.u16);
	// li r26,3
	ctx.r26.s64 = 3;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82193cac
	if (!ctx.cr6.gt) goto loc_82193CAC;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// clrlwi r25,r4,16
	ctx.r25.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// addi r28,r1,-96
	ctx.r28.s64 = ctx.r1.s64 + -96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addis r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 65536;
	// addi r30,r1,-90
	ctx.r30.s64 = ctx.r1.s64 + -90;
	// addi r31,r1,-90
	ctx.r31.s64 = ctx.r1.s64 + -90;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r26,r26,3
	ctx.r26.s64 = ctx.r26.s64 + 3;
loc_82193C6C:
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r25,r9,r29
	PPC_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r25.u16);
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// sthx r23,r8,r28
	PPC_STORE_U16(ctx.r8.u32 + ctx.r28.u32, ctx.r23.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthx r23,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r23.u16);
	// sthx r24,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r24.u16);
	// lwz r23,-92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r24,-88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r25,-96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r25.u32);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stwu r24,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82193c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82193C6C;
loc_82193CAC:
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82193cf0
	if (!ctx.cr6.eq) goto loc_82193CF0;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,-96
	ctx.r3.s64 = ctx.r1.s64 + -96;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// sthx r5,r4,r3
	PPC_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u16);
	// lwz r6,-96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r5,-92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
loc_82193CF0:
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193C08) {
	__imp__sub_82193C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82193CF4) {
	__imp__sub_82193CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82193D00;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r7,2132(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2132);
	// rlwinm r10,r10,1,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bne cr6,0x82193d50
	if (!ctx.cr6.eq) goto loc_82193D50;
	// lhz r4,2136(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2136);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82193c08
	ctx.lr = 0x82193D3C;
	sub_82193C08(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,-6
	ctx.r3.s64 = ctx.r11.s64 + -6;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82193D50:
	// lhz r24,2136(r3)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2136);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// add r23,r4,r9
	ctx.r23.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82193D70:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbz r9,2(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 2);
	// clrlwi r31,r24,16
	ctx.r31.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r4,r26,2
	ctx.r4.s64 = ctx.r26.s64 + 2;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r25,r7,-4
	ctx.r25.s64 = ctx.r7.s64 + -4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82193D94:
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,-1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r11,r31
	ctx.r22.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r22,r30
	PPC_STORE_U16(ctx.r22.u32 + ctx.r30.u32, ctx.r29.u16);
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
	// sthx r31,r6,r21
	PPC_STORE_U16(ctx.r6.u32 + ctx.r21.u32, ctx.r31.u16);
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// sthx r9,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82193e08
	if (!ctx.cr6.eq) goto loc_82193E08;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// stwu r9,12(r25)
	ea = 12 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r25.u32 = ea;
loc_82193E08:
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x82193d94
	if (!ctx.cr6.eq) goto loc_82193D94;
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82193e38
	if (ctx.cr6.eq) goto loc_82193E38;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82193d70
	if (!ctx.cr6.eq) goto loc_82193D70;
loc_82193E38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82193e54
	if (ctx.cr6.eq) goto loc_82193E54;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
loc_82193E54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193CF8) {
	__imp__sub_82193CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82193E5C) {
	__imp__sub_82193E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,2092(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,2084(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,2088(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f7,f2,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fmuls f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmsubs f4,f13,f3,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 - ctx.f10.f64));
	// fmsubs f3,f0,f7,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f9.f64));
	// fmsubs f1,f12,f6,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f8.f64));
	// fmuls f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f13,f2,f3,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f1,f11,f1,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82193E60) {
	__imp__sub_82193E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82193EFC) {
	__imp__sub_82193EFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82193F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82193F08;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,2136
	ctx.r28.s64 = ctx.r3.s64 + 2136;
	// addi r19,r3,1536
	ctx.r19.s64 = ctx.r3.s64 + 1536;
	// lhz r3,2136(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2136);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x823b8c70
	ctx.lr = 0x82193F38;
	sub_823B8C70(ctx, base);
	// lwz r8,2104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2104);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// clrlwi r17,r29,24
	ctx.r17.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// lwz r25,20(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f31,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// li r18,16
	ctx.r18.s64 = 16;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// addi r23,r11,-5648
	ctx.r23.s64 = ctx.r11.s64 + -5648;
	// addi r22,r10,-5664
	ctx.r22.s64 = ctx.r10.s64 + -5664;
	// addi r21,r9,-30336
	ctx.r21.s64 = ctx.r9.s64 + -30336;
	// bne cr6,0x82194114
	if (!ctx.cr6.eq) goto loc_82194114;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,2084(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,2088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f12,2092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lvx128 v63,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v13,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v12,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// add r5,r27,r9
	ctx.r5.u64 = ctx.r27.u64 + ctx.r9.u64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// addi r30,r31,2116
	ctx.r30.s64 = ctx.r31.s64 + 2116;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r24,r31,2128
	ctx.r24.s64 = ctx.r31.s64 + 2128;
	// fmuls f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f1,f13,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f10,f12,f6,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f2.f64));
	// fmsubs f8,f0,f3,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 - ctx.f1.f64));
	// fmsubs f7,f13,f9,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f1,f2,f31,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f3.f64;
	// fdivs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvrx128 v62,r18,r8
	temp.u32 = ctx.r18.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// stvewx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,2128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// lfs f10,4(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f9,2120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	ctx.f9.f64 = double(temp.f32);
	// lwzx r30,r4,r19
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r19.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// lfsx f7,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// lfs f5,2116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f6,2124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r20,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r20.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// bl 0x823b8c88
	ctx.lr = 0x821940B4;
	sub_823B8C88(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f1,2116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// lfs f0,2120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,2128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// lfs f13,2124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r7,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r7.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r20,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r20.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// sth r8,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r8.u16);
loc_82194114:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,2084(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r16,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,2088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f12,2092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r16,r10
	ctx.r10.u64 = ctx.r16.u64 + ctx.r10.u64;
	// lvx128 v63,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v13,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v12,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f1,f13,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f10,f12,f6,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f2.f64));
	// fmsubs f8,f0,f3,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 - ctx.f1.f64));
	// fmsubs f7,f13,f9,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f1,f2,f31,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f3.f64;
	// fdivs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvrx128 v58,r18,r9
	temp.u32 = ctx.r18.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vand128 v0,v56,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
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
	// vspltw128 v55,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// bne cr6,0x821941f4
	if (!ctx.cr6.eq) goto loc_821941F4;
	// bl 0x823b8c88
	ctx.lr = 0x821941F4;
	sub_823B8C88(ctx, base);
loc_821941F4:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lfs f0,2116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	ctx.f13.f64 = double(temp.f32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,2124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r26,r10,r19
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// addi r30,r31,2116
	ctx.r30.s64 = ctx.r31.s64 + 2116;
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// bl 0x823b8c88
	ctx.lr = 0x82194260;
	sub_823B8C88(ctx, base);
	// lwz r7,2128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// lfs f5,2116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	ctx.f5.f64 = double(temp.f32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// lfs f4,2120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	ctx.f4.f64 = double(temp.f32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// lfs f3,2124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	ctx.f3.f64 = double(temp.f32);
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f5
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// bl 0x823b8c90
	ctx.lr = 0x821942AC;
	sub_823B8C90(ctx, base);
	// lhz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r8,2144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// lwz r5,2140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// ori r9,r6,65532
	ctx.r9.u64 = ctx.r6.u64 | 65532;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// lis r3,0
	ctx.r3.s64 = 0;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r6,r8,1,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFC;
	// ori r10,r3,65535
	ctx.r10.u64 = ctx.r3.u64 | 65535;
	// sth r7,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r7.u16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r5,2
	ctx.r3.s64 = ctx.r5.s64 + 2;
	// addis r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 65536;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r3,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r3.u32);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r4,r4,-3
	ctx.r4.s64 = ctx.r4.s64 + -3;
	// add r7,r5,r9
	ctx.r7.u64 = ctx.r5.u64 + ctx.r9.u64;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// addis r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 65536;
	// addi r9,r8,6
	ctx.r9.s64 = ctx.r8.s64 + 6;
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// sth r5,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r5.u16);
	// stw r9,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82193F00) {
	__imp__sub_82193F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194348) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f13,2084(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f10,2088(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lfs f12,2092(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmsubs f3,f12,f1,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 - ctx.f9.f64));
	// fmsubs f1,f13,f7,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f13,f10,f5,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f10,f2,f13,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f9,f11,f1,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82194428
	if (ctx.cr6.gt) goto loc_82194428;
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
loc_82194428:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bl 0x82193f00
	ctx.lr = 0x82194430;
	sub_82193F00(ctx, base);
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
}

PPC_WEAK_FUNC(sub_82194348) {
	__imp__sub_82194348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82194450;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r28,r6,r7
	ctx.r28.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r30,r28,-2
	ctx.r30.s64 = ctx.r28.s64 + -2;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r28,-3
	ctx.r5.s64 = ctx.r28.s64 + -3;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r10,17280
	ctx.r23.s64 = ctx.r10.s64 + 17280;
loc_82194488:
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// lwzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// and r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 & ctx.r25.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821944a4
	if (ctx.cr6.eq) goto loc_821944A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x821944c0
	goto loc_821944C0;
loc_821944A4:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82194348
	ctx.lr = 0x821944BC;
	sub_82194348(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_821944C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82194488
	if (!ctx.cr6.eq) goto loc_82194488;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82194448) {
	__imp__sub_82194448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821944E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821944E4) {
	__imp__sub_821944E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821944E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821944F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// add r30,r5,r7
	ctx.r30.u64 = ctx.r5.u64 + ctx.r7.u64;
	// beq cr6,0x8219454c
	if (ctx.cr6.eq) goto loc_8219454C;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// beq cr6,0x82194520
	if (ctx.cr6.eq) goto loc_82194520;
	// addi r5,r30,-3
	ctx.r5.s64 = ctx.r30.s64 + -3;
loc_82194520:
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// addi r27,r30,-2
	ctx.r27.s64 = ctx.r30.s64 + -2;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82194348
	ctx.lr = 0x82194544;
	sub_82194348(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8219455c
	goto loc_8219455C;
loc_8219454C:
	// addi r5,r30,-3
	ctx.r5.s64 = ctx.r30.s64 + -3;
	// addi r29,r30,-2
	ctx.r29.s64 = ctx.r30.s64 + -2;
	// addi r28,r30,-1
	ctx.r28.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219455C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82194348
	ctx.lr = 0x82194578;
	sub_82194348(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8219455c
	if (!ctx.cr6.eq) goto loc_8219455C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821944E8) {
	__imp__sub_821944E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821945A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// add r27,r10,r5
	ctx.r27.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_821945BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x821944e8
	ctx.lr = 0x821945DC;
	sub_821944E8(ctx, base);
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821945bc
	if (!ctx.cr6.eq) goto loc_821945BC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82194598) {
	__imp__sub_82194598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821945FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821945FC) {
	__imp__sub_821945FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82194608;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r20,r11,r5
	ctx.r20.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r23,r11,17280
	ctx.r23.s64 = ctx.r11.s64 + 17280;
loc_82194638:
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// lhz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82194728
	if (!ctx.cr6.eq) goto loc_82194728;
	// lbz r10,2(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// lfs f10,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lbz r5,3(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 3);
	// lfs f0,2092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lfs f9,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,2084(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lfs f13,2088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f7,f2,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fmuls f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmsubs f4,f13,f3,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 - ctx.f10.f64));
	// fmsubs f3,f0,f7,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f9.f64));
	// fmsubs f1,f12,f6,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f8.f64));
	// fmuls f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f13,f2,f3,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f12,f11,f1,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x82194710
	if (ctx.cr6.gt) goto loc_82194710;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82193f00
	ctx.lr = 0x8219470C;
	sub_82193F00(ctx, base);
	// b 0x82194930
	goto loc_82194930;
loc_82194710:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82193f00
	ctx.lr = 0x82194724;
	sub_82193F00(ctx, base);
	// b 0x82194930
	goto loc_82194930;
loc_82194728:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r30,2112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821939c0
	ctx.lr = 0x82194738;
	sub_821939C0(ctx, base);
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82194750
	if (ctx.cr6.eq) goto loc_82194750;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
loc_82194750:
	// lhz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219477c
	if (ctx.cr6.eq) goto loc_8219477C;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8219476C:
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8219476c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219476C;
loc_8219477C:
	// lbz r11,3(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 3);
	// add r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82194798
	if (ctx.cr6.eq) goto loc_82194798;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stbx r11,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82194798:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// lbzx r7,r27,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// stbx r7,r27,r9
	PPC_STORE_U8(ctx.r27.u32 + ctx.r9.u32, ctx.r7.u8);
	// ble cr6,0x821948c0
	if (!ctx.cr6.gt) goto loc_821948C0;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r31,2084
	ctx.r30.s64 = ctx.r31.s64 + 2084;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
loc_821947D4:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lfs f10,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lbz r5,-1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f7,f2,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fmuls f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmsubs f4,f13,f3,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 - ctx.f10.f64));
	// fmsubs f3,f0,f7,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f9.f64));
	// fmsubs f1,f12,f6,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f8.f64));
	// fmuls f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f13,f2,f3,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f12,f11,f1,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x82194894
	if (ctx.cr6.gt) goto loc_82194894;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// b 0x821948b0
	goto loc_821948B0;
loc_82194894:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// bl 0x82193f00
	ctx.lr = 0x821948AC;
	sub_82193F00(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
loc_821948B0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821947d4
	if (ctx.cr6.lt) goto loc_821947D4;
loc_821948C0:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82194924
	if (ctx.cr6.eq) goto loc_82194924;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_821948D4:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// subf r30,r11,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lbzx r7,r29,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwzx r10,r9,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r5,r30,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// andc r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ~ctx.r10.u64;
	// lbzx r4,r4,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// bl 0x82193f00
	ctx.lr = 0x8219491C;
	sub_82193F00(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821948d4
	if (!ctx.cr6.eq) goto loc_821948D4;
loc_82194924:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_82194930:
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82194638
	if (!ctx.cr6.eq) goto loc_82194638;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82194600) {
	__imp__sub_82194600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82194944) {
	__imp__sub_82194944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82194950;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,2048(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,2104(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2104);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,2052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lfs f9,2084(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,2056(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	ctx.f7.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lfs f5,2088(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,2092(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	ctx.f3.f64 = double(temp.f32);
	// addi r30,r3,2084
	ctx.r30.s64 = ctx.r3.s64 + 2084;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f1,f5,f8,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f12,f3,f4,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82194c0c
	if (!ctx.cr6.gt) goto loc_82194C0C;
	// lwz r11,2108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2108);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r27,r3,2108
	ctx.r27.s64 = ctx.r3.s64 + 2108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f11,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f7,f9,f8,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fsel f0,f7,f11,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// ble cr6,0x82194a94
	if (!ctx.cr6.gt) goto loc_82194A94;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x82193cf8
	ctx.lr = 0x82194A0C;
	sub_82193CF8(ctx, base);
	// lwz r10,2144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// stw r8,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r8.u32);
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// vand128 v0,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r10,r10,-5664
	ctx.r10.s64 = ctx.r10.s64 + -5664;
	// addi r11,r8,-5648
	ctx.r11.s64 = ctx.r8.s64 + -5648;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vor128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
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
	// stvewx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82194b2c
	goto loc_82194B2C;
loc_82194A94:
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82193cf8
	ctx.lr = 0x82194AA0;
	sub_82193CF8(ctx, base);
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// li r9,16
	ctx.r9.s64 = 16;
	// vspltisw128 v58,-1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r10,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r10.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// vslw128 v56,v58,v58
	ctx.v56.u32[0] = ctx.v58.u32[0] << (ctx.v58.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v58.u32[1] << (ctx.v58.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v58.u32[2] << (ctx.v58.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v58.u32[3] << (ctx.v58.u8[12] & 0x1F);
	// lvrx128 v55,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-5664
	ctx.r10.s64 = ctx.r11.s64 + -5664;
	// addi r11,r8,-5648
	ctx.r11.s64 = ctx.r8.s64 + -5648;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v57,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vand128 v53,v54,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v0,v53,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmaddfp v11,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
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
	// vspltw128 v52,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v52,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f8,8(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82194B2C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,2076(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	ctx.f0.f64 = double(temp.f32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfs f13,2064(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f12,2080(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2080);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f10,2072(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f9,2068(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f4,2060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	ctx.f4.f64 = double(temp.f32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f2,f13,f6,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f1,f9,f6,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f0,f4,f6,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f12,f1,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmadds f10,f0,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f11,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// fdivs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f2,f6
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvrx128 v51,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v49,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vand128 v0,v49,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
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
	// vspltw128 v48,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82193b60
	ctx.lr = 0x82194BF4;
	sub_82193B60(ctx, base);
	// lhz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r9,2136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2136, ctx.r9.u16);
	// stw r8,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r8.u32);
loc_82194C0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82194948) {
	__imp__sub_82194948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82194C14) {
	__imp__sub_82194C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82194c30
	if (ctx.cr6.gt) goto loc_82194C30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82194C30:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82194C18) {
	__imp__sub_82194C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82194C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82194C40;
	__savegprlr_23(ctx, base);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82194c5c
	if (!ctx.cr6.gt) goto loc_82194C5C;
loc_82194C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82194C5C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82194d28
	if (ctx.cr6.eq) goto loc_82194D28;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
loc_82194C74:
	// lhz r27,2(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhzu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r28.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// std r27,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r27.u64);
	// lfd f11,-160(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r28,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r28.u64);
	// lfd f10,-152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmadds f4,f13,f7,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmadds f12,f2,f6,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f6,f10,f6,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82194c74
	if (ctx.cr6.lt) goto loc_82194C74;
loc_82194D28:
	// lbz r10,23(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821950f0
	if (ctx.cr6.eq) goto loc_821950F0;
loc_82194D44:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lhz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82194c54
	if (ctx.cr6.gt) goto loc_82194C54;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82195014
	if (ctx.cr6.lt) goto loc_82195014;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// addi r5,r28,-2
	ctx.r5.s64 = ctx.r28.s64 + -2;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82194D88:
	// lhz r26,2(r5)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsh r24,r31
	ctx.r24.s64 = ctx.r31.s16;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// std r26,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r26.u64);
	// lfd f9,-160(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r24,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r24.u64);
	// lfd f11,-152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lhz r25,8(r5)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r23,6(r5)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// extsh r31,r25
	ctx.r31.s64 = ctx.r25.s16;
	// lhz r26,10(r5)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// std r31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r31.u64);
	// extsh r31,r23
	ctx.r31.s64 = ctx.r23.s16;
	// lfd f6,-144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r31.u64);
	// lfd f5,-136(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmadds f2,f13,f3,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fadds f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f10,f0,f3,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fcfid f9,f6
	ctx.f9.f64 = double(ctx.f6.s64);
	// fcfid f7,f5
	ctx.f7.f64 = double(ctx.f5.s64);
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f12,f5,f8,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fadds f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// fmadds f6,f10,f1,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lhz r31,12(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f12,f3,f1,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f10,f4,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lhz r25,14(r5)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// std r26,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r26.u64);
	// lfd f11,-112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// extsh r24,r31
	ctx.r24.s64 = ctx.r31.s16;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lhzu r31,16(r5)
	ea = 16 + ctx.r5.u32;
	ctx.r31.u64 = PPC_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// std r24,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r24.u64);
	// lfd f4,-128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// frsp f12,f2
	ctx.f12.f64 = double(float(ctx.f2.f64));
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// extsh r31,r25
	ctx.r31.s64 = ctx.r25.s16;
	// std r26,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r26.u64);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,-120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r31.u64);
	// lfd f7,-104(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fmadds f4,f3,f8,f9
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f9.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fadds f1,f4,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f11,f8,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f0,f1,f12,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f3
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f12,f2,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f9.f64));
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f6,f2,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmadds f9,f10,f3,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// bdnz 0x82194d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82194D88;
loc_82195014:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821950e0
	if (!ctx.cr6.lt) goto loc_821950E0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r30,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r5,r6,12
	ctx.r5.s64 = ctx.r6.s64 + 12;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82195038:
	// lhz r30,2(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsh r26,r31
	ctx.r26.s64 = ctx.r31.s16;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// std r30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r30.u64);
	// lfd f11,-96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r26,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r26.u64);
	// lfd f10,-88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmadds f4,f13,f7,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f1,f7,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fadds f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f7
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f6,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bdnz 0x82195038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82195038;
loc_821950E0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82194d44
	if (!ctx.cr6.eq) goto loc_82194D44;
loc_821950F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82194C38) {
	__imp__sub_82194C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821950F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82195100;
	__savegprlr_26(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8219511c
	if (!ctx.cr6.gt) goto loc_8219511C;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82195124
	goto loc_82195124;
loc_8219511C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82195124:
	// lbz r11,25(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821951c4
	if (!ctx.cr6.eq) goto loc_821951C4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82195150
	if (!ctx.cr6.gt) goto loc_82195150;
loc_82195148:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82195150:
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82195278
	if (!ctx.cr6.gt) goto loc_82195278;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
loc_82195174:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// sthx r29,r31,r10
	PPC_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u16);
	// sthx r28,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r28.u16);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lbz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82195174
	if (ctx.cr6.lt) goto loc_82195174;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821951C4:
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,23(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r5,22(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_821951EC:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
loc_821951F8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82195148
	if (ctx.cr6.gt) goto loc_82195148;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r27,r11,r5
	ctx.r27.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r30,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r4,-1(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r31.u16);
	// sthx r4,r26,r10
	PPC_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r4.u16);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sthx r3,r27,r10
	PPC_STORE_U16(ctx.r27.u32 + ctx.r10.u32, ctx.r3.u16);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x821951f8
	if (!ctx.cr6.eq) goto loc_821951F8;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82195278
	if (ctx.cr6.eq) goto loc_82195278;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821951ec
	if (!ctx.cr6.eq) goto loc_821951EC;
loc_82195278:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821950F8) {
	__imp__sub_821950F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195280) {
	__imp__sub_82195280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195284) {
	__imp__sub_82195284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195288) {
	__imp__sub_82195288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219528C) {
	__imp__sub_8219528C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195290) {
	__imp__sub_82195290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195294) {
	__imp__sub_82195294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195298) {
	__imp__sub_82195298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219529C) {
	__imp__sub_8219529C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952A0) {
	__imp__sub_821952A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821952A4) {
	__imp__sub_821952A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952A8) {
	__imp__sub_821952A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821952AC) {
	__imp__sub_821952AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952B0) {
	__imp__sub_821952B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821952B4) {
	__imp__sub_821952B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952B8) {
	__imp__sub_821952B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821952BC) {
	__imp__sub_821952BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952C0) {
	__imp__sub_821952C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821952D4) {
	__imp__sub_821952D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952D8) {
	__imp__sub_821952D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821952EC) {
	__imp__sub_821952EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821952F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821952F0) {
	__imp__sub_821952F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195304) {
	__imp__sub_82195304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195308) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195308) {
	__imp__sub_82195308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219531C) {
	__imp__sub_8219531C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195320) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195320) {
	__imp__sub_82195320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195334) {
	__imp__sub_82195334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195338) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// dcbt r0,r3
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195338) {
	__imp__sub_82195338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195344) {
	__imp__sub_82195344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195348) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195348) {
	__imp__sub_82195348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219535C) {
	__imp__sub_8219535C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82195368;
	__savegprlr_25(ctx, base);
	// lbz r28,22(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r27,23(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r26,24(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r28,-2
	ctx.r29.s64 = ctx.r28.s64 + -2;
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821953e0
	if (ctx.cr6.eq) goto loc_821953E0;
loc_82195390:
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r3,-255
	ctx.r3.s64 = ctx.r3.s64 + -255;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addic r31,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r31.s64 = ctx.r3.s64 + -1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfe r3,r31,r3
	temp.u8 = (~ctx.r31.u32 + ctx.r3.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r31.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// blt cr6,0x82195390
	if (ctx.cr6.lt) goto loc_82195390;
loc_821953E0:
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// rlwinm r5,r5,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r29,r3,r30
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82195480
	if (ctx.cr6.eq) goto loc_82195480;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8219546c
	if (ctx.cr6.eq) goto loc_8219546C;
	// add r30,r27,r28
	ctx.r30.u64 = ctx.r27.u64 + ctx.r28.u64;
loc_82195410:
	// add r11,r30,r9
	ctx.r11.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r5,r5,-255
	ctx.r5.s64 = ctx.r5.s64 + -255;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,-255
	ctx.r11.s64 = ctx.r31.s64 + -255;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// addic r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// subfe r11,r31,r11
	temp.u8 = (~ctx.r31.u32 + ctx.r11.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r31.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// subfe r5,r31,r5
	temp.u8 = (~ctx.r31.u32 + ctx.r5.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r31.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// blt cr6,0x82195410
	if (ctx.cr6.lt) goto loc_82195410;
loc_8219546C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82195488
	goto loc_82195488;
loc_82195480:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82195488:
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195360) {
	__imp__sub_82195360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821954A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821954A4) {
	__imp__sub_821954A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821954A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x821954B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r3,2060
	ctx.r4.s64 = ctx.r3.s64 + 2060;
	// stw r22,2140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2140, ctx.r22.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r22,2144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2144, ctx.r22.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,2048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2048, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f13,2052(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2052, temp.u32);
	// lbz r29,22(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// stfs f12,2056(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2056, temp.u32);
	// lbz r28,23(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 23);
	// stfs f11,2096(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2096, temp.u32);
	// lbz r21,24(r5)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24);
	// stfs f10,2100(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2100, temp.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// bl 0x822d6b00
	ctx.lr = 0x8219551C;
	sub_822D6B00(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,2060(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	ctx.f9.f64 = double(temp.f32);
	// lhz r9,26(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// addi r11,r31,2072
	ctx.r11.s64 = ctx.r31.s64 + 2072;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addi r20,r31,2108
	ctx.r20.s64 = ctx.r31.s64 + 2108;
	// lfs f0,13772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13772);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,2060(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2060, temp.u32);
	// lfs f7,2064(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,2064(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2064, temp.u32);
	// lfs f5,2068(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,2068(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2068, temp.u32);
	// lfs f3,2072(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,2072(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2072, temp.u32);
	// lfs f1,2076(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,2076(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2076, temp.u32);
	// lfs f12,2080(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2080);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,2080(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2080, temp.u32);
	// stw r23,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r23.u32);
	// beq cr6,0x821955b4
	if (ctx.cr6.eq) goto loc_821955B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r10.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x821955bc
	goto loc_821955BC;
loc_821955B4:
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r11,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r11.u32);
loc_821955BC:
	// stw r22,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r22.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821939c0
	ctx.lr = 0x821955D0;
	sub_821939C0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82195614
	if (ctx.cr6.eq) goto loc_82195614;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821955E8:
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// bl 0x821939c0
	ctx.lr = 0x82195600;
	sub_821939C0(ctx, base);
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x821955e8
	if (!ctx.cr6.eq) goto loc_821955E8;
loc_82195614:
	// rlwinm r11,r19,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x2;
	// lwz r27,2112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195708
	if (ctx.cr6.eq) goto loc_82195708;
	// lfs f0,2084(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,2116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// lfs f11,2088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r11,-30336
	ctx.r9.s64 = ctx.r11.s64 + -30336;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,2120(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2120, temp.u32);
	// lfs f9,2092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,2124(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2124, temp.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r10,-5664
	ctx.r7.s64 = ctx.r10.s64 + -5664;
	// addi r6,r8,-5648
	ctx.r6.s64 = ctx.r8.s64 + -5648;
	// addi r11,r31,2084
	ctx.r11.s64 = ctx.r31.s64 + 2084;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,0
	ctx.r6.s64 = 0;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lvrx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v60,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vand128 v0,v60,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor128 v59,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v59,v0,2,1,3
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
	ctx.v59.u32[3] = temp.u32;
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// stvewx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r9.u32);
	// bl 0x82194448
	ctx.lr = 0x821956C0;
	sub_82194448(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821956e4
	if (ctx.cr6.eq) goto loc_821956E4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82194598
	ctx.lr = 0x821956E4;
	sub_82194598(ctx, base);
loc_821956E4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82195708
	if (ctx.cr6.eq) goto loc_82195708;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82194600
	ctx.lr = 0x82195708;
	sub_82194600(ctx, base);
loc_82195708:
	// clrlwi r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195738
	if (ctx.cr6.eq) goto loc_82195738;
	// add r11,r21,r28
	ctx.r11.u64 = ctx.r21.u64 + ctx.r28.u64;
	// lbz r7,25(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82194948
	ctx.lr = 0x82195738;
	sub_82194948(ctx, base);
loc_82195738:
	// stw r22,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821954A8) {
	__imp__sub_821954A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195744) {
	__imp__sub_82195744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82195750;
	__savegprlr_21(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,2436(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2436);
	// stfs f0,2244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2244, temp.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x82195360
	ctx.lr = 0x82195798;
	sub_82195360(ctx, base);
	// addi r4,r1,2232
	ctx.r4.s64 = ctx.r1.s64 + 2232;
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823b8cc8
	ctx.lr = 0x821957A8;
	sub_823B8CC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821958f8
	if (ctx.cr6.eq) goto loc_821958F8;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,2228
	ctx.r4.s64 = ctx.r1.s64 + 2228;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823b8c30
	ctx.lr = 0x821957C4;
	sub_823B8C30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821958f8
	if (ctx.cr6.eq) goto loc_821958F8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821954a8
	ctx.lr = 0x821957F0;
	sub_821954A8(ctx, base);
	// lwz r8,2240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821958c8
	if (ctx.cr6.eq) goto loc_821958C8;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821958c8
	if (ctx.cr6.eq) goto loc_821958C8;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821958f8
	if (ctx.cr6.eq) goto loc_821958F8;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821958f8
	if (ctx.cr6.eq) goto loc_821958F8;
	// lhz r10,26(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82195840
	if (ctx.cr6.eq) goto loc_82195840;
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82195840
	if (!ctx.cr6.eq) goto loc_82195840;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82195840:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,2444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2444);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r7,r10,31,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// lfsx f3,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// lwz r7,2228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2228);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f0,f6,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fsubs f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fsel f9,f10,f3,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f3.f64 : ctx.f11.f64;
	// stfsx f9,r5,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lbz r5,1(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// bl 0x823b8cf8
	ctx.lr = 0x821958C4;
	sub_823B8CF8(ctx, base);
	// lwz r8,2240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
loc_821958C8:
	// lwz r11,2236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2236);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x821958e0
	if (!ctx.cr6.lt) goto loc_821958E0;
	// subf r3,r11,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r11.s64;
	// bl 0x823b8cb0
	ctx.lr = 0x821958DC;
	sub_823B8CB0(ctx, base);
	// lwz r8,2240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
loc_821958E0:
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x821958f8
	if (!ctx.cr6.lt) goto loc_821958F8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r3,r10,r21
	ctx.r3.s64 = ctx.r21.s64 - ctx.r10.s64;
	// bl 0x823b8c98
	ctx.lr = 0x821958F8;
	sub_823B8C98(ctx, base);
loc_821958F8:
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195748) {
	__imp__sub_82195748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82195908;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,18432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18432);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195a54
	if (ctx.cr6.eq) goto loc_82195A54;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r24,r11,-3456
	ctx.r24.s64 = ctx.r11.s64 + -3456;
	// ori r9,r10,33564
	ctx.r9.u64 = ctx.r10.u64 | 33564;
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r8,r24,r9
	PPC_STORE_U32(ctx.r24.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x823b8b90
	ctx.lr = 0x82195940;
	sub_823B8B90(ctx, base);
	// lwz r23,88(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// dcbt r0,r23
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,18432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18432);
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// ble cr6,0x8219595c
	if (!ctx.cr6.gt) goto loc_8219595C;
	// addi r30,r11,-768
	ctx.r30.s64 = ctx.r11.s64 + -768;
loc_8219595C:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lhz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rotlwi r8,r27,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r27.u32, 5);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// dcbt r0,r9
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// dcbt r0,r9
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r28,r10,-6
	ctx.r28.s64 = ctx.r10.s64 + -6;
loc_82195990:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzu r9,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821959d4
	if (ctx.cr6.eq) goto loc_821959D4;
	// lhz r8,6(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// dcbt r0,r11
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// dcbt r8,r10
loc_821959D4:
	// lbz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// dcbt r11,r10
	// lhz r8,14(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// dcbt r11,r10
	// lhz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mulli r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 * 52;
	// dcbt r8,r10
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addis r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 262144;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r10,-30464
	ctx.r21.s64 = ctx.r10.s64 + -30464;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhzx r8,r8,r23
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r23.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82195748
	ctx.lr = 0x82195A38;
	sub_82195748(ctx, base);
	// lwz r11,18432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18432);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82195990
	if (!ctx.cr6.eq) goto loc_82195990;
	// bl 0x823b8be8
	ctx.lr = 0x82195A48;
	sub_823B8BE8(ctx, base);
	// lwz r10,56(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,18432(r10)
	PPC_STORE_U64(ctx.r10.u32 + 18432, ctx.r11.u64);
loc_82195A54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195900) {
	__imp__sub_82195900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195A5C) {
	__imp__sub_82195A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82195A68;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// dcbt r9,r10
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6b00
	ctx.lr = 0x82195ADC;
	sub_822D6B00(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f5,f9,f12,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f0,13772(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13772);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f10,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f8,f11,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82195b7c
	if (!ctx.cr6.gt) goto loc_82195B7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82195b84
	goto loc_82195B84;
loc_82195B7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
loc_82195B84:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82194c38
	ctx.lr = 0x82195BA4;
	sub_82194C38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82195bc8
	if (!ctx.cr6.eq) goto loc_82195BC8;
loc_82195BB0:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82195BC8:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821950f8
	ctx.lr = 0x82195BE8;
	sub_821950F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195bb0
	if (ctx.cr6.eq) goto loc_82195BB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195A60) {
	__imp__sub_82195A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195C04) {
	__imp__sub_82195C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195C08) {
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
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// dcbt r11,r9
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82195a60
	ctx.lr = 0x82195C68;
	sub_82195A60(ctx, base);
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

PPC_WEAK_FUNC(sub_82195C08) {
	__imp__sub_82195C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82195C88;
	__savegprlr_25(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r11,-640
	ctx.r8.s64 = ctx.r11.s64 + -640;
	// dcbt r8,r10
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r25,20(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82195e04
	if (ctx.cr6.eq) goto loc_82195E04;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,60(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r28,r11,17280
	ctx.r28.s64 = ctx.r11.s64 + 17280;
	// lfs f9,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
loc_82195CCC:
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82195df4
	if (ctx.cr6.eq) goto loc_82195DF4;
	// rlwinm r29,r27,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
loc_82195CE0:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 | ctx.r11.u64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r7,r9,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r7.u64;
	// dcbt r11,r31
	// lhz r9,26(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 26);
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82195dec
	if (!ctx.cr6.eq) goto loc_82195DEC;
	// lwz r9,56(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r0,r11
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f13,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bgt cr6,0x82195dec
	if (ctx.cr6.gt) goto loc_82195DEC;
	// lwz r9,88(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// dcbt r0,r9
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fmadds f7,f4,f4,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f6,f4,f3,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmsubs f5,f3,f8,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 - ctx.f2.f64));
	// fnmsubs f4,f7,f11,f9
	ctx.f4.f64 = double(float(-(ctx.f7.f64 * ctx.f11.f64 - ctx.f9.f64)));
	// fmuls f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f0,f2,f0,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f13,f4,f13,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x82195dec
	if (ctx.cr6.gt) goto loc_82195DEC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82195e0c
	if (!ctx.cr6.lt) goto loc_82195E0C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r31,60(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
loc_82195DEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82195ce0
	if (!ctx.cr6.eq) goto loc_82195CE0;
loc_82195DF4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82195ccc
	if (ctx.cr6.lt) goto loc_82195CCC;
loc_82195E04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82195E0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195C80) {
	__imp__sub_82195C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195E14) {
	__imp__sub_82195E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-640
	ctx.r9.s64 = ctx.r11.s64 + -640;
	// dcbt r9,r10
	// lwz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r0,r11
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mulli r10,r8,44
	ctx.r10.s64 = ctx.r8.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r0,r11
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82195E18) {
	__imp__sub_82195E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195E54) {
	__imp__sub_82195E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195E58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r10,15008
	ctx.r9.s64 = ctx.r10.s64 + 15008;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r4,15008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15008, ctx.r4.u32);
	// b 0x82195900
	sub_82195900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195E58) {
	__imp__sub_82195E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82195E7C) {
	__imp__sub_82195E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82195E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82195E88;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,-640
	ctx.r30.s64 = ctx.r11.s64 + -640;
	// lwz r20,20(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821960ac
	if (ctx.cr6.eq) goto loc_821960AC;
	// lwz r22,72(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82195ee0
	if (!ctx.cr6.eq) goto loc_82195EE0;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82195EC8:
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x821960ac
	if (!ctx.cr6.lt) goto loc_821960AC;
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195ec8
	if (ctx.cr6.eq) goto loc_82195EC8;
loc_82195EE0:
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x821960ac
	if (!ctx.cr6.lt) goto loc_821960AC;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r8,r29,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r24,r10,17280
	ctx.r24.s64 = ctx.r10.s64 + 17280;
	// lwzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// or r27,r8,r6
	ctx.r27.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r5,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andc r28,r7,r4
	ctx.r28.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// dcbt r0,r11
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r23,18432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18432, ctx.r23.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82195F34:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82195f68
	if (!ctx.cr6.eq) goto loc_82195F68;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_82195F4C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82195f98
	if (ctx.cr6.eq) goto loc_82195F98;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82195f4c
	if (ctx.cr6.eq) goto loc_82195F4C;
loc_82195F68:
	// cntlzw r9,r28
	ctx.r9.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r7,r29,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r27,r7,r9
	ctx.r27.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r9,r27,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r5,r6,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// andc r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 & ~ctx.r5.u64;
	// dcbt r0,r11
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x82195f9c
	goto loc_82195F9C;
loc_82195F98:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82195F9C:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219607c
	if (ctx.cr6.eq) goto loc_8219607C;
	// lwz r11,18432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18432);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r8,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u16);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r6,18432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18432);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stb r4,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r4.u8);
	// lwz r3,18432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18432);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r23,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r23.u8);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,18432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18432);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// fmadds f4,f7,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,4(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r11,18432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,18432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18432, ctx.r11.u32);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// beq cr6,0x82196088
	if (ctx.cr6.eq) goto loc_82196088;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mulli r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 * 52;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r7,r11,8192
	ctx.r7.s64 = ctx.r11.s64 + 8192;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823ba270
	ctx.lr = 0x8219607C;
	sub_823BA270(ctx, base);
loc_8219607C:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195f34
	if (ctx.cr6.eq) goto loc_82195F34;
loc_82196088:
	// lwz r11,18432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18432);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,19480
	ctx.r6.s64 = ctx.r10.s64 + 19480;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r9,r31,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r31.s64;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// bl 0x821b7458
	ctx.lr = 0x821960AC;
	sub_821B7458(ctx, base);
loc_821960AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82195E80) {
	__imp__sub_82195E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821960B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821960C0;
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
	// beq cr6,0x821961b0
	if (ctx.cr6.eq) goto loc_821961B0;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821961b0
	if (ctx.cr6.eq) goto loc_821961B0;
	// addi r26,r29,-8
	ctx.r26.s64 = ctx.r29.s64 + -8;
loc_821960E8:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x82196104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82196144
	if (ctx.cr6.eq) goto loc_82196144;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82196138
	if (ctx.cr6.eq) goto loc_82196138;
loc_8219611C:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bne cr6,0x8219611c
	if (!ctx.cr6.eq) goto loc_8219611C;
loc_82196138:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// b 0x821961a0
	goto loc_821961A0;
loc_82196144:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82196158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196198
	if (ctx.cr6.eq) goto loc_82196198;
loc_82196164:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219618C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82196164
	if (!ctx.cr6.eq) goto loc_82196164;
loc_82196198:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_821961A0:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x821960e8
	if (!ctx.cr6.eq) goto loc_821960E8;
loc_821961B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821960B8) {
	__imp__sub_821960B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821961B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821961C0;
	__savegprlr_29(ctx, base);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821961D8:
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// bgt cr6,0x8219623c
	if (ctx.cr6.gt) goto loc_8219623C;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82196284
	if (!ctx.cr6.gt) goto loc_82196284;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r31,r31,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82196284
	if (!ctx.cr6.gt) goto loc_82196284;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// b 0x82196284
	goto loc_82196284;
loc_8219623C:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82196284
	if (ctx.cr6.gt) goto loc_82196284;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r31,r31,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82196284
	if (!ctx.cr6.lt) goto loc_82196284;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82196284:
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821962a0
	if (ctx.cr6.eq) goto loc_821962A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x821961d8
	goto loc_821961D8;
loc_821962A0:
	// neg r11,r6
	ctx.r11.s64 = -ctx.r6.s64;
	// andc r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821961B8) {
	__imp__sub_821961B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821962B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821962B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,22(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821961b8
	ctx.lr = 0x821962E0;
	sub_821961B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821962f8
	if (!ctx.cr6.eq) goto loc_821962F8;
loc_821962EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821962F8:
	// lbz r10,23(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821963cc
	if (ctx.cr6.eq) goto loc_821963CC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_82196320:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x82196358
	if (!ctx.cr6.eq) goto loc_82196358;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821961b8
	ctx.lr = 0x8219634C;
	sub_821961B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x821963a8
	goto loc_821963A8;
loc_82196358:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82196380
	if (ctx.cr6.eq) goto loc_82196380;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
loc_82196368:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82196380
	if (!ctx.cr6.lt) goto loc_82196380;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne 0x82196368
	if (!ctx.cr0.eq) goto loc_82196368;
loc_82196380:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x821961b8
	ctx.lr = 0x821963A0;
	sub_821961B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_821963A8:
	// beq cr6,0x821962ec
	if (ctx.cr6.eq) goto loc_821962EC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82196320
	if (!ctx.cr6.eq) goto loc_82196320;
loc_821963CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821962B0) {
	__imp__sub_821962B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821963D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821963f0
	if (ctx.cr6.lt) goto loc_821963F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821963F0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821963D8) {
	__imp__sub_821963D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821963F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82196400;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de024
	ctx.lr = 0x82196408;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r25,r5,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f8,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f4,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r28,r4,12
	ctx.r28.s64 = ctx.r4.s64 + 12;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// fmuls f12,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f10,f11,f5,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f8,f9,f3,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fsubs f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fneg f4,f8
	ctx.f4.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f2,f6,f2,f8
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f2.f64 : ctx.f8.f64;
	// fsel f1,f4,f31,f2
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f2.f64;
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmadds f11,f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f10,f9,f12,f3
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f9,f13,f12,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x82196674
	if (ctx.cr6.gt) goto loc_82196674;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822d6b00
	ctx.lr = 0x821964D4;
	sub_822D6B00(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f7,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fabs f5,f0
	ctx.f5.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// blt cr6,0x82196674
	if (ctx.cr6.lt) goto loc_82196674;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f3,f7,f12,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fdivs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82196674
	if (!ctx.cr6.gt) goto loc_82196674;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82196674
	if (!ctx.cr6.lt) goto loc_82196674;
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmsubs f29,f0,f10,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f28,f9,f0,f12
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64));
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f27,f7,f0,f11
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f11.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f4,f29,f8
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmadds f3,f6,f28,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f4.f64));
	// fmadds f2,f5,f27,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f27.f64 + ctx.f3.f64));
	// fmadds f1,f2,f31,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821965B0;
	sub_823DDE20(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f13
	ctx.f9.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fmadds f8,f11,f28,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f12.f64));
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// fmadds f7,f10,f27,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f8.f64));
	// fmadds f1,f7,f31,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821965E4;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x821962b0
	ctx.lr = 0x82196618;
	sub_821962B0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82196674
	if (ctx.cr6.eq) goto loc_82196674;
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8219666c
	if (!ctx.cr6.eq) goto loc_8219666C;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r6,r11,25560
	ctx.r6.s64 = ctx.r11.s64 + 25560;
	// divw r5,r10,r9
	ctx.r5.s32 = ctx.r10.s32 / ctx.r9.s32;
	// bl 0x821971a0
	ctx.lr = 0x8219665C;
	sub_821971A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de070
	ctx.lr = 0x82196668;
	__restfpr_27(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8219666C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82196674:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de070
	ctx.lr = 0x82196680;
	__restfpr_27(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821963F8) {
	__imp__sub_821963F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82196684) {
	__imp__sub_82196684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82196690;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,14956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14956);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821967d0
	if (ctx.cr6.eq) goto loc_821967D0;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r10,25592
	ctx.r5.s64 = ctx.r10.s64 + 25592;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82189be8
	ctx.lr = 0x8219673C;
	sub_82189BE8(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821967c8
	if (ctx.cr6.eq) goto loc_821967C8;
	// addi r30,r1,132
	ctx.r30.s64 = ctx.r1.s64 + 132;
loc_8219674C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,26(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821967b4
	if (ctx.cr6.eq) goto loc_821967B4;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f11,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f0,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f5,f7,f0,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8218fd88
	ctx.lr = 0x821967B4;
	sub_8218FD88(ctx, base);
loc_821967B4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219674c
	if (ctx.cr6.lt) goto loc_8219674C;
loc_821967C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821897a8
	ctx.lr = 0x821967D0;
	sub_821897A8(ctx, base);
loc_821967D0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82196688) {
	__imp__sub_82196688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821967D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821967E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x8219687c
	if (!ctx.cr6.lt) goto loc_8219687C;
	// lwz r26,244(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
loc_8219681C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219683C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219687c
	if (ctx.cr6.eq) goto loc_8219687C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196864;
	sub_823DE1F0(ctx, base);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x8219681c
	if (ctx.cr6.lt) goto loc_8219681C;
loc_8219687C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196898;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821967D8) {
	__imp__sub_821967D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821968A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821968f4
	if (ctx.cr6.eq) goto loc_821968F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821968D4;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821968E4;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821968F4;
	sub_823DE1F0(ctx, base);
loc_821968F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_821968A0) {
	__imp__sub_821968A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219690C) {
	__imp__sub_8219690C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82196918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219693C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196954
	if (ctx.cr6.eq) goto loc_82196954;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821968a0
	ctx.lr = 0x82196954;
	sub_821968A0(ctx, base);
loc_82196954:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82196964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219697c
	if (ctx.cr6.eq) goto loc_8219697C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821968a0
	ctx.lr = 0x8219697C;
	sub_821968A0(ctx, base);
loc_8219697C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219698C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821969a4
	if (ctx.cr6.eq) goto loc_821969A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821968a0
	ctx.lr = 0x821969A4;
	sub_821968A0(ctx, base);
loc_821969A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82196910) {
	__imp__sub_82196910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821969AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821969AC) {
	__imp__sub_821969AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821969B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821969B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82196a60
	if (!ctx.cr6.lt) goto loc_82196A60;
loc_821969F4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-48
	ctx.r4.s64 = ctx.r3.s64 + -48;
	// bctrl 
	ctx.lr = 0x82196A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82196a20
	if (ctx.cr6.eq) goto loc_82196A20;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82196A20:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x823de1f0
	ctx.lr = 0x82196A48;
	sub_823DE1F0(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821969f4
	if (ctx.cr6.lt) goto loc_821969F4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_82196A60:
	// bne cr6,0x82196a94
	if (!ctx.cr6.eq) goto loc_82196A94;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x823de1f0
	ctx.lr = 0x82196A90;
	sub_823DE1F0(ctx, base);
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_82196A94:
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821967d8
	ctx.lr = 0x82196AC4;
	sub_821967D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821969B0) {
	__imp__sub_821969B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82196ACC) {
	__imp__sub_82196ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82196AD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x82196b78
	if (!ctx.cr6.gt) goto loc_82196B78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r7,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82196910
	ctx.lr = 0x82196B30;
	sub_82196910(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82196910
	ctx.lr = 0x82196B44;
	sub_82196910(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82196910
	ctx.lr = 0x82196B5C;
	sub_82196910(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82196910
	ctx.lr = 0x82196B70;
	sub_82196910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82196B78:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82196910
	ctx.lr = 0x82196B84;
	sub_82196910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82196AD0) {
	__imp__sub_82196AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82196B8C) {
	__imp__sub_82196B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82196B98;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r30,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82196c08
	if (!ctx.cr0.gt) goto loc_82196C08;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82196BCC:
	// ldu r6,-48(r31)
	ea = -48 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x821969b0
	ctx.lr = 0x82196C00;
	sub_821969B0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82196bcc
	if (ctx.cr6.gt) goto loc_82196BCC;
loc_82196C08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82196B90) {
	__imp__sub_82196B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82196C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,48
	ctx.r10.s64 = 48;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r8,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r8.s64;
	// beq cr6,0x82196c68
	if (ctx.cr6.eq) goto loc_82196C68;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82196C4C:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196C60;
	sub_823DE1F0(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82196c4c
	if (!ctx.cr6.eq) goto loc_82196C4C;
loc_82196C68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82196C10) {
	__imp__sub_82196C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82196C74) {
	__imp__sub_82196C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82196C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82196C80;
	__savegprlr_22(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-48
	ctx.r5.s64 = ctx.r5.s64 + -48;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82196ad0
	ctx.lr = 0x82196CC8;
	sub_82196AD0(ctx, base);
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82196d1c
	if (!ctx.cr6.lt) goto loc_82196D1C;
loc_82196CD4:
	// addi r30,r31,-48
	ctx.r30.s64 = ctx.r31.s64 + -48;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82196CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196d1c
	if (!ctx.cr6.eq) goto loc_82196D1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82196D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196d1c
	if (!ctx.cr6.eq) goto loc_82196D1C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82196cd4
	if (ctx.cr6.lt) goto loc_82196CD4;
loc_82196D1C:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82196d68
	if (!ctx.cr6.lt) goto loc_82196D68;
loc_82196D24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82196D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196d68
	if (!ctx.cr6.eq) goto loc_82196D68;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82196D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196d68
	if (!ctx.cr6.eq) goto loc_82196D68;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82196d24
	if (ctx.cr6.lt) goto loc_82196D24;
loc_82196D68:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82196D70:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82196dfc
	if (!ctx.cr6.lt) goto loc_82196DFC;
loc_82196D78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82196D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196df0
	if (!ctx.cr6.eq) goto loc_82196DF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82196DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196dfc
	if (!ctx.cr6.eq) goto loc_82196DFC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82196df0
	if (ctx.cr6.eq) goto loc_82196DF0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196DD0;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196DE0;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196DF0;
	sub_823DE1F0(ctx, base);
loc_82196DF0:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82196d78
	if (ctx.cr6.lt) goto loc_82196D78;
loc_82196DFC:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82196e90
	if (!ctx.cr6.gt) goto loc_82196E90;
	// addi r30,r26,-48
	ctx.r30.s64 = ctx.r26.s64 + -48;
loc_82196E08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82196E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196e7c
	if (!ctx.cr6.eq) goto loc_82196E7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82196E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82196e8c
	if (!ctx.cr6.eq) goto loc_82196E8C;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82196e7c
	if (ctx.cr6.eq) goto loc_82196E7C;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196E5C;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196E6C;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196E7C;
	sub_823DE1F0(ctx, base);
loc_82196E7C:
	// addi r26,r26,-48
	ctx.r26.s64 = ctx.r26.s64 + -48;
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82196e08
	if (ctx.cr6.lt) goto loc_82196E08;
loc_82196E8C:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
loc_82196E90:
	// bne cr6,0x82196f2c
	if (!ctx.cr6.eq) goto loc_82196F2C;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82196ff4
	if (ctx.cr6.eq) goto loc_82196FF4;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82196edc
	if (ctx.cr6.eq) goto loc_82196EDC;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82196edc
	if (ctx.cr6.eq) goto loc_82196EDC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196EBC;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196ECC;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196EDC;
	sub_823DE1F0(ctx, base);
loc_82196EDC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82196d70
	if (ctx.cr6.eq) goto loc_82196D70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F08;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F18;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F28;
	sub_823DE1F0(ctx, base);
	// b 0x82196d70
	goto loc_82196D70;
loc_82196F2C:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// addi r26,r26,-48
	ctx.r26.s64 = ctx.r26.s64 + -48;
	// bne cr6,0x82196fb4
	if (!ctx.cr6.eq) goto loc_82196FB4;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82196f74
	if (ctx.cr6.eq) goto loc_82196F74;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F54;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F64;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F74;
	sub_823DE1F0(ctx, base);
loc_82196F74:
	// addi r27,r27,-48
	ctx.r27.s64 = ctx.r27.s64 + -48;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82196d70
	if (ctx.cr6.eq) goto loc_82196D70;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196F90;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196FA0;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196FB0;
	sub_823DE1F0(ctx, base);
	// b 0x82196d70
	goto loc_82196D70;
loc_82196FB4:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82196fec
	if (ctx.cr6.eq) goto loc_82196FEC;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196FCC;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196FDC;
	sub_823DE1F0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82196FEC;
	sub_823DE1F0(ctx, base);
loc_82196FEC:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// b 0x82196d70
	goto loc_82196D70;
loc_82196FF4:
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r27,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r27.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82196C78) {
	__imp__sub_82196C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82197010;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821970f4
	if (ctx.cr6.eq) goto loc_821970F4;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821970f4
	if (ctx.cr6.eq) goto loc_821970F4;
	// addi r28,r30,-48
	ctx.r28.s64 = ctx.r30.s64 + -48;
loc_82197038:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8219704C;
	sub_823DE1F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8219705C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197080
	if (ctx.cr6.eq) goto loc_82197080;
	// addi r5,r28,96
	ctx.r5.s64 = ctx.r28.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82196c10
	ctx.lr = 0x82197078;
	sub_82196C10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x821970d8
	goto loc_821970D8;
loc_82197080:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82197094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821970d4
	if (ctx.cr6.eq) goto loc_821970D4;
loc_821970A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821970B0;
	sub_823DE1F0(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821970C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821970a0
	if (!ctx.cr6.eq) goto loc_821970A0;
loc_821970D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821970D8:
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x821970E4;
	sub_823DE1F0(ctx, base);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82197038
	if (!ctx.cr6.eq) goto loc_82197038;
loc_821970F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82197008) {
	__imp__sub_82197008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821970FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821970FC) {
	__imp__sub_821970FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82197108;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,48
	ctx.r28.s64 = 48;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r11,r31,r28
	ctx.r11.s32 = ctx.r31.s32 / ctx.r28.s32;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82197194
	if (!ctx.cr6.gt) goto loc_82197194;
	// addi r27,r3,-48
	ctx.r27.s64 = ctx.r3.s64 + -48;
loc_8219712C:
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x823de1f0
	ctx.lr = 0x82197140;
	sub_823DE1F0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82197150;
	sub_823DE1F0(ctx, base);
	// ld r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// addi r10,r31,-48
	ctx.r10.s64 = ctx.r31.s64 + -48;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// divw r5,r10,r28
	ctx.r5.s32 = ctx.r10.s32 / ctx.r28.s32;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x821969b0
	ctx.lr = 0x82197184;
	sub_821969B0(ctx, base);
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// divw r11,r31,r28
	ctx.r11.s32 = ctx.r31.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8219712c
	if (ctx.cr6.gt) goto loc_8219712C;
loc_82197194:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82197100) {
	__imp__sub_82197100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219719C) {
	__imp__sub_8219719C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821971A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821971A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,48
	ctx.r25.s64 = 48;
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
	// ble cr6,0x8219725c
	if (!ctx.cr6.gt) goto loc_8219725C;
loc_821971D0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82197280
	if (!ctx.cr6.gt) goto loc_82197280;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82196c78
	ctx.lr = 0x821971EC;
	sub_82196C78(ctx, base);
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
	// bge cr6,0x8219723c
	if (!ctx.cr6.lt) goto loc_8219723C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821971a0
	ctx.lr = 0x82197234;
	sub_821971A0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8219724c
	goto loc_8219724C;
loc_8219723C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821971a0
	ctx.lr = 0x82197248;
	sub_821971A0(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8219724C:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x821971d0
	if (ctx.cr6.gt) goto loc_821971D0;
loc_8219725C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82197278
	if (!ctx.cr6.gt) goto loc_82197278;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82197008
	ctx.lr = 0x82197278;
	sub_82197008(ctx, base);
loc_82197278:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82197280:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8219725c
	if (!ctx.cr6.gt) goto loc_8219725C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821972a8
	if (!ctx.cr6.gt) goto loc_821972A8;
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
	// bl 0x82196b90
	ctx.lr = 0x821972A8;
	sub_82196B90(ctx, base);
loc_821972A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82197100
	ctx.lr = 0x821972B8;
	sub_82197100(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821971A0) {
	__imp__sub_821971A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821972C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821972C0) {
	__imp__sub_821972C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821972DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821972DC) {
	__imp__sub_821972DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821972E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// subf r5,r5,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r5.s64;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,14924(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14924);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f12,f6,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f6,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcfid f12,f8
	ctx.f12.f64 = double(ctx.f8.s64);
	// stfs f1,4(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fnmsubs f8,f9,f5,f13
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fmadds f7,f8,f6,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f7,8(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821972E0) {
	__imp__sub_821972E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14920);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// divw r11,r9,r10
	ctx.r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82197370) {
	__imp__sub_82197370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821973A0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de018
	ctx.lr = 0x821973A8;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfs f0,5804(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// lwzx r28,r8,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// subf r3,r28,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r28.s64;
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r3,-32075
	ctx.r3.s64 = -2102067200;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lwz r26,14924(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14924);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lis r4,-32075
	ctx.r4.s64 = -2102067200;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// rlwinm r6,r27,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r27,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f5,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// add r3,r6,r27
	ctx.r3.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lwz r8,14920(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14920);
	// add r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfs f6,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// add r25,r5,r9
	ctx.r25.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// lfs f3,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// divwu r9,r3,r7
	ctx.r9.u32 = ctx.r3.u32 / ctx.r7.u32;
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f8,f9,f5,f6
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f5.f64 - ctx.f6.f64)));
	// subf r9,r6,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r6.s64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fmadds f30,f4,f12,f13
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f29,f3,f12,f11
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f11.f64));
	// subf r6,r9,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + ctx.r28.u64;
	// fmadds f28,f8,f12,f10
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// blt cr6,0x821974bc
	if (ctx.cr6.lt) goto loc_821974BC;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_821974BC:
	// divw r6,r4,r5
	ctx.r6.s32 = ctx.r4.s32 / ctx.r5.s32;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mullw r6,r3,r5
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// divw r10,r4,r5
	ctx.r10.s32 = ctx.r4.s32 / ctx.r5.s32;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82197784
	if (!ctx.cr6.gt) goto loc_82197784;
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82197500
	if (ctx.cr6.gt) goto loc_82197500;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x8219750c
	goto loc_8219750C;
loc_82197500:
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8219750C:
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lfs f13,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// lfs f9,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// subf r3,r28,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r28.s64;
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f26,80(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f25,80(r1)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// srawi r7,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 1;
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// fcfid f25,f25
	ctx.f25.f64 = double(ctx.f25.s64);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// subf r4,r28,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r28.s64;
	// lis r7,640
	ctx.r7.s64 = 41943040;
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// fmr f27,f7
	ctx.f27.f64 = ctx.f7.f64;
	// addi r6,r9,-9672
	ctx.r6.s64 = ctx.r9.s64 + -9672;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f24,96(r1)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f24,f24
	ctx.f24.f64 = double(ctx.f24.s64);
	// ori r7,r7,57489
	ctx.r7.u64 = ctx.r7.u64 | 57489;
	// frsp f25,f25
	ctx.f25.f64 = double(float(ctx.f25.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// frsp f26,f26
	ctx.f26.f64 = double(float(ctx.f26.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// frsp f24,f24
	ctx.f24.f64 = double(float(ctx.f24.f64));
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmadds f11,f11,f25,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f25.f64 + ctx.f10.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f10,f9,f25,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 + ctx.f8.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f26,f0
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fnmsubs f8,f2,f13,f12
	ctx.f8.f64 = double(float(-(ctx.f2.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmadds f5,f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f4,f3,f9,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f3,f8,f25,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 + ctx.f7.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f2,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f1,f24,f2,f12
	ctx.f1.f64 = double(float(-(ctx.f24.f64 * ctx.f2.f64 - ctx.f12.f64)));
	// fmadds f0,f1,f9,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8211e9c0
	ctx.lr = 0x82197630;
	sub_8211E9C0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82197784
	if (!ctx.cr6.lt) goto loc_82197784;
	// lbz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197668
	if (ctx.cr6.eq) goto loc_82197668;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// cmpwi cr6,r9,200
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 200, ctx.xer);
	// ble cr6,0x82197784
	if (!ctx.cr6.gt) goto loc_82197784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82197678
	if (!ctx.cr6.eq) goto loc_82197678;
loc_82197668:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmpwi cr6,r10,200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 200, ctx.xer);
	// bgt cr6,0x82197688
	if (ctx.cr6.gt) goto loc_82197688;
loc_82197678:
	// lhz r11,26(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 26);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82197768
	if (ctx.cr6.eq) goto loc_82197768;
loc_82197688:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lfs f0,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,14872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14872);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f1,104(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x821976b8
	if (!ctx.cr6.lt) goto loc_821976B8;
	// lhz r11,26(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 26);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82197768
	if (ctx.cr6.eq) goto loc_82197768;
loc_821976B8:
	// bl 0x823dde20
	ctx.lr = 0x821976BC;
	sub_823DDE20(ctx, base);
	// lfs f12,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f3,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f1,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// lfs f1,104(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f11,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// stfs f1,104(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// fmadds f9,f2,f0,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f8,f4,f0,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f7,f3,f0,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f6,f10,f10,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fcmpu cr6,f6,f13
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// ble cr6,0x82197744
	if (!ctx.cr6.gt) goto loc_82197744;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x82197750
	goto loc_82197750;
loc_82197744:
	// stfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82197750:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,16096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16096);
	// bl 0x82188c88
	ctx.lr = 0x82197768;
	sub_82188C88(ctx, base);
loc_82197768:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821894d0
	ctx.lr = 0x82197774;
	sub_821894D0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de064
	ctx.lr = 0x82197780;
	__restfpr_24(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82197784:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stfs f29,20(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f28,24(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x8219779C;
	sub_822D4B08(ctx, base);
	// fmuls f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x821977B4;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x821977C0;
	sub_823DE800(ctx, base);
	// lfs f12,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d8f88
	ctx.lr = 0x821977FC;
	sub_820D8F88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f5,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x821937d8
	ctx.lr = 0x82197828;
	sub_821937D8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de064
	ctx.lr = 0x82197834;
	__restfpr_24(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82197398) {
	__imp__sub_82197398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82197840;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,26(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r27,r4,8
	ctx.r27.u64 = ctx.r4.u64 | 8;
	// lwz r26,4(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r6,16
	ctx.r5.s64 = ctx.r6.s64 + 16;
	// sth r27,26(r29)
	PPC_STORE_U16(ctx.r29.u32 + 26, ctx.r27.u16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82257720
	ctx.lr = 0x82197894;
	sub_82257720(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822578d0
	ctx.lr = 0x8219789C;
	sub_822578D0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821978e4
	if (ctx.cr6.eq) goto loc_821978E4;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// sth r10,26(r29)
	PPC_STORE_U16(ctx.r29.u32 + 26, ctx.r10.u16);
	// bl 0x82189070
	ctx.lr = 0x821978BC;
	sub_82189070(ctx, base);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82197924
	if (!ctx.cr6.eq) goto loc_82197924;
	// bl 0x82193680
	ctx.lr = 0x821978DC;
	sub_82193680(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821978E4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82197928
	if (ctx.cr6.eq) goto loc_82197928;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82197928
	if (ctx.cr6.eq) goto loc_82197928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188be8
	ctx.lr = 0x8219791C;
	sub_82188BE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82197924:
	// bl 0x8218cbe0
	ctx.lr = 0x82197928;
	sub_8218CBE0(ctx, base);
loc_82197928:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821937d8
	ctx.lr = 0x82197934;
	sub_821937D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82197838) {
	__imp__sub_82197838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219793C) {
	__imp__sub_8219793C(ctx, base);
}

