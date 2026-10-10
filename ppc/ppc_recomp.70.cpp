#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822BFC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822bfc7c
	if (ctx.cr6.gt) goto loc_822BFC7C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFC7C:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFC60) {
	__imp__sub_822BFC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFC84) {
	__imp__sub_822BFC84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r7,r9,r10
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFC88) {
	__imp__sub_822BFC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFCB4) {
	__imp__sub_822BFCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822bfce8
	if (!ctx.cr6.lt) goto loc_822BFCE8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFCE8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFCB8) {
	__imp__sub_822BFCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x822bfd20
	if (!ctx.cr6.gt) goto loc_822BFD20;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFD20:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFCF0) {
	__imp__sub_822BFCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822bfd44
	if (!ctx.cr6.gt) goto loc_822BFD44;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFD44:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFD28) {
	__imp__sub_822BFD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFD4C) {
	__imp__sub_822BFD4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// adde r11,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFD50) {
	__imp__sub_822BFD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x822bfda8
	if (ctx.cr6.lt) goto loc_822BFDA8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFDA8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFD78) {
	__imp__sub_822BFD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822bfdcc
	if (ctx.cr6.lt) goto loc_822BFDCC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFDCC:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFDB0) {
	__imp__sub_822BFDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFDD4) {
	__imp__sub_822BFDD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFDD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFDD8) {
	__imp__sub_822BFDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFDF4) {
	__imp__sub_822BFDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFDF8) {
	__imp__sub_822BFDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFE28) {
	__imp__sub_822BFE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFE58) {
	__imp__sub_822BFE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFE74) {
	__imp__sub_822BFE74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFE78) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x822BFEB0;
	sub_822E7E98(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x822BFEC0;
	sub_822E7E98(ctx, base);
	// bl 0x822b8148
	ctx.lr = 0x822BFEC4;
	sub_822B8148(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-5312
	ctx.r5.s64 = ctx.r9.s64 + -5312;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e8368
	ctx.lr = 0x822BFEE0;
	sub_822E8368(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
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

PPC_WEAK_FUNC(sub_822BFE78) {
	__imp__sub_822BFE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFEFC) {
	__imp__sub_822BFEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BFF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x822BFF30;
	sub_822E7E98(ctx, base);
	// bl 0x822b8148
	ctx.lr = 0x822BFF34;
	sub_822B8148(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r9,-4860
	ctx.r5.s64 = ctx.r9.s64 + -4860;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822e8368
	ctx.lr = 0x822BFF50;
	sub_822E8368(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BFF00) {
	__imp__sub_822BFF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFF5C) {
	__imp__sub_822BFF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BFF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x822BFF8C;
	sub_822E7E98(ctx, base);
	// bl 0x822b8148
	ctx.lr = 0x822BFF90;
	sub_822B8148(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r10,-19208
	ctx.r5.s64 = ctx.r10.s64 + -19208;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822e8368
	ctx.lr = 0x822BFFAC;
	sub_822E8368(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BFF60) {
	__imp__sub_822BFF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFFB8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x822BFFEC;
	sub_822E7E98(ctx, base);
	// bl 0x822b8148
	ctx.lr = 0x822BFFF0;
	sub_822B8148(ctx, base);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-19200
	ctx.r5.s64 = ctx.r10.s64 + -19200;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e8368
	ctx.lr = 0x822C0014;
	sub_822E8368(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

PPC_WEAK_FUNC(sub_822BFFB8) {
	__imp__sub_822BFFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0030) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x822C0068;
	sub_822E7E98(ctx, base);
	// bl 0x822b8148
	ctx.lr = 0x822C006C;
	sub_822B8148(ctx, base);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-19192
	ctx.r5.s64 = ctx.r9.s64 + -19192;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e8368
	ctx.lr = 0x822C0090;
	sub_822E8368(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

PPC_WEAK_FUNC(sub_822C0030) {
	__imp__sub_822C0030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C00AC) {
	__imp__sub_822C00AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C00B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C00B0) {
	__imp__sub_822C00B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C00CC) {
	__imp__sub_822C00CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C00D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C00D0) {
	__imp__sub_822C00D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0100) {
	__imp__sub_822C0100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0130) {
	__imp__sub_822C0130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C014C) {
	__imp__sub_822C014C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0150) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0150) {
	__imp__sub_822C0150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C016C) {
	__imp__sub_822C016C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0170) {
	__imp__sub_822C0170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C01A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C01A0) {
	__imp__sub_822C01A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C01D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C01D0) {
	__imp__sub_822C01D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C01EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C01EC) {
	__imp__sub_822C01EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C01F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c023c
	if (ctx.cr6.eq) goto loc_822C023C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_822C023C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C01F0) {
	__imp__sub_822C01F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C024C) {
	__imp__sub_822C024C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822c0290
	if (ctx.cr6.eq) goto loc_822C0290;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_822C0290:
	// stfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0250) {
	__imp__sub_822C0250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c02d0
	if (ctx.cr6.eq) goto loc_822C02D0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_822C02D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0298) {
	__imp__sub_822C0298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C02E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822c030c
	if (ctx.cr6.eq) goto loc_822C030C;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_822C030C:
	// stfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C02E0) {
	__imp__sub_822C02E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0314) {
	__imp__sub_822C0314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0318) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0344
	if (ctx.cr6.eq) goto loc_822C0344;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_822C0344:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0318) {
	__imp__sub_822C0318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0350) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c03bc
	if (ctx.cr6.eq) goto loc_822C03BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C0394;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x822c03c4
	goto loc_822C03C4;
loc_822C03BC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822C03C4:
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

PPC_WEAK_FUNC(sub_822C0350) {
	__imp__sub_822C0350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C03DC) {
	__imp__sub_822C03DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C03E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C0418;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0448
	if (ctx.cr6.eq) goto loc_822C0448;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x822c0450
	goto loc_822C0450;
loc_822C0448:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822C0450:
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

PPC_WEAK_FUNC(sub_822C03E0) {
	__imp__sub_822C03E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C0470;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C049C;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822c04ec
	if (ctx.cr6.eq) goto loc_822C04EC;
	// bl 0x823dde20
	ctx.lr = 0x822C04C0;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r10,r11,r31
	ctx.r10.s32 = ctx.r11.s32 / ctx.r31.s32;
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822C04EC:
	// bl 0x823dde20
	ctx.lr = 0x822C04F0;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r11,4
	ctx.r11.s64 = 4;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f12.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0468) {
	__imp__sub_822C0468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C050C) {
	__imp__sub_822C050C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0510) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c0534
	if (ctx.cr6.eq) goto loc_822C0534;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c0534
	if (ctx.cr6.eq) goto loc_822C0534;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0534:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0510) {
	__imp__sub_822C0510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C053C) {
	__imp__sub_822C053C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c056c
	if (ctx.cr6.eq) goto loc_822C056C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c056c
	if (ctx.cr6.eq) goto loc_822C056C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C056C:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0540) {
	__imp__sub_822C0540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0574) {
	__imp__sub_822C0574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c05a4
	if (ctx.cr6.eq) goto loc_822C05A4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c05a4
	if (ctx.cr6.eq) goto loc_822C05A4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C05A4:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0578) {
	__imp__sub_822C0578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C05AC) {
	__imp__sub_822C05AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C05B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c05d8
	if (ctx.cr6.eq) goto loc_822C05D8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c05d8
	if (ctx.cr6.eq) goto loc_822C05D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C05D8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C05B0) {
	__imp__sub_822C05B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C05E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c0608
	if (ctx.cr6.eq) goto loc_822C0608;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c0608
	if (ctx.cr6.eq) goto loc_822C0608;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0608:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C05E0) {
	__imp__sub_822C05E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c0640
	if (ctx.cr6.eq) goto loc_822C0640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c0640
	if (ctx.cr6.eq) goto loc_822C0640;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0640:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0610) {
	__imp__sub_822C0610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c0678
	if (ctx.cr6.eq) goto loc_822C0678;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c0678
	if (ctx.cr6.eq) goto loc_822C0678;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0678:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0648) {
	__imp__sub_822C0648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c06ac
	if (ctx.cr6.eq) goto loc_822C06AC;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c06ac
	if (ctx.cr6.eq) goto loc_822C06AC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C06AC:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0680) {
	__imp__sub_822C0680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C06B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C06B4) {
	__imp__sub_822C06B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C06B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c06d8
	if (!ctx.cr6.eq) goto loc_822C06D8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c06dc
	if (ctx.cr6.eq) goto loc_822C06DC;
loc_822C06D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C06DC:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C06B8) {
	__imp__sub_822C06B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C06E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C06E4) {
	__imp__sub_822C06E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C06E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822c0710
	if (!ctx.cr6.eq) goto loc_822C0710;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c0714
	if (ctx.cr6.eq) goto loc_822C0714;
loc_822C0710:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0714:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C06E8) {
	__imp__sub_822C06E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C071C) {
	__imp__sub_822C071C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822c0748
	if (!ctx.cr6.eq) goto loc_822C0748;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c074c
	if (ctx.cr6.eq) goto loc_822C074C;
loc_822C0748:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C074C:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0720) {
	__imp__sub_822C0720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0754) {
	__imp__sub_822C0754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0758) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c077c
	if (!ctx.cr6.eq) goto loc_822C077C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c0780
	if (ctx.cr6.eq) goto loc_822C0780;
loc_822C077C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0780:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0758) {
	__imp__sub_822C0758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0788) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c07ac
	if (!ctx.cr6.eq) goto loc_822C07AC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c07b0
	if (ctx.cr6.eq) goto loc_822C07B0;
loc_822C07AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C07B0:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0788) {
	__imp__sub_822C0788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C07B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c07e4
	if (!ctx.cr6.eq) goto loc_822C07E4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c07e8
	if (ctx.cr6.eq) goto loc_822C07E8;
loc_822C07E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C07E8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C07B8) {
	__imp__sub_822C07B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C07F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c081c
	if (!ctx.cr6.eq) goto loc_822C081C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c0820
	if (ctx.cr6.eq) goto loc_822C0820;
loc_822C081C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0820:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C07F0) {
	__imp__sub_822C07F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822c0850
	if (!ctx.cr6.eq) goto loc_822C0850;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822c0854
	if (ctx.cr6.eq) goto loc_822C0854;
loc_822C0850:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C0854:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0828) {
	__imp__sub_822C0828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C085C) {
	__imp__sub_822C085C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C0868;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822b8370
	ctx.lr = 0x822C0880;
	sub_822B8370(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8370
	ctx.lr = 0x822C088C;
	sub_822B8370(ctx, base);
	// and r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 & ctx.r3.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0860) {
	__imp__sub_822C0860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C089C) {
	__imp__sub_822C089C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C08A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C08A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822b8370
	ctx.lr = 0x822C08C0;
	sub_822B8370(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8370
	ctx.lr = 0x822C08CC;
	sub_822B8370(ctx, base);
	// or r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 | ctx.r3.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C08A0) {
	__imp__sub_822C08A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C08DC) {
	__imp__sub_822C08DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C08E0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,15144
	ctx.r4.s64 = ctx.r11.s64 + 15144;
	// lwz r11,15144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0950
	if (ctx.cr6.eq) goto loc_822C0950;
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r9,-3128
	ctx.r3.s64 = ctx.r9.s64 + -3128;
loc_822C0908:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r31.u32);
	// bne cr6,0x822c0908
	if (!ctx.cr6.eq) goto loc_822C0908;
loc_822C0950:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C08E0) {
	__imp__sub_822C08E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x822dad58
	sub_822DAD58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0958) {
	__imp__sub_822C0958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C096C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C096C) {
	__imp__sub_822C096C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0970) {
	__imp__sub_822C0970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0974) {
	__imp__sub_822C0974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C0980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r30,256
	ctx.r30.s64 = 256;
loc_822C0990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c09b8
	if (ctx.cr6.eq) goto loc_822C09B8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c09b0
	if (!ctx.cr6.eq) goto loc_822C09B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822dad58
	ctx.lr = 0x822C09B0;
	sub_822DAD58(ctx, base);
loc_822C09B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822dad58
	ctx.lr = 0x822C09B8;
	sub_822DAD58(ctx, base);
loc_822C09B8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x822c0990
	if (!ctx.cr0.eq) goto loc_822C0990;
	// li r5,3072
	ctx.r5.s64 = 3072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de090
	ctx.lr = 0x822C09D4;
	sub_823DE090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0978) {
	__imp__sub_822C0978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C09DC) {
	__imp__sub_822C09DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C09E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c0a18
	if (ctx.cr6.eq) goto loc_822C0A18;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subfic r7,r4,119
	ctx.xer.ca = ctx.r4.u32 <= 119;
	ctx.r7.s64 = 119 - ctx.r4.s64;
loc_822C09FC:
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c09fc
	if (!ctx.cr6.eq) goto loc_822C09FC;
loc_822C0A18:
	// rlwinm r11,r9,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_822C0A28:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c0a84
	if (ctx.cr6.eq) goto loc_822C0A84;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_822C0A48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822c0a6c
	if (ctx.cr6.eq) goto loc_822C0A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c0a48
	if (ctx.cr6.eq) goto loc_822C0A48;
loc_822C0A6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c0a90
	if (ctx.cr6.eq) goto loc_822C0A90;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822c0a28
	if (!ctx.cr6.eq) goto loc_822C0A28;
loc_822C0A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_822C0A90:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C09E0) {
	__imp__sub_822C09E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0A9C) {
	__imp__sub_822C0A9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0AA0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822c09e0
	ctx.lr = 0x822C0ABC;
	sub_822C09E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c0af0
	if (ctx.cr6.eq) goto loc_822C0AF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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
loc_822C0AF0:
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

PPC_WEAK_FUNC(sub_822C0AA0) {
	__imp__sub_822C0AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0B08) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822c09e0
	ctx.lr = 0x822C0B24;
	sub_822C09E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x822c0b58
	if (ctx.cr6.eq) goto loc_822C0B58;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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
loc_822C0B58:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822dad28
	ctx.lr = 0x822C0B64;
	sub_822DAD28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822C0B08) {
	__imp__sub_822C0B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0B8C) {
	__imp__sub_822C0B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0B90) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822c0bfc
	if (ctx.cr6.lt) goto loc_822C0BFC;
	// beq cr6,0x822c0bcc
	if (ctx.cr6.eq) goto loc_822C0BCC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x823deaf8
	ctx.lr = 0x822C0BB4;
	sub_823DEAF8(ctx, base);
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
loc_822C0BCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822c0be8
	if (!ctx.cr6.eq) goto loc_822C0BE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C0BE8:
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
loc_822C0BFC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0B90) {
	__imp__sub_822C0B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0C18) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822c0c6c
	if (ctx.cr6.lt) goto loc_822C0C6C;
	// beq cr6,0x822c0c4c
	if (ctx.cr6.eq) goto loc_822C0C4C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x823deaf8
	ctx.lr = 0x822C0C3C;
	sub_823DEAF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C0C4C:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C0C6C:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0C18) {
	__imp__sub_822C0C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0C80) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822c0ccc
	if (ctx.cr6.lt) goto loc_822C0CCC;
	// beq cr6,0x822c0cb8
	if (ctx.cr6.eq) goto loc_822C0CB8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x823dec00
	ctx.lr = 0x822C0CA4;
	sub_823DEC00(ctx, base);
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
loc_822C0CB8:
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C0CCC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C0C80) {
	__imp__sub_822C0C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0CF4) {
	__imp__sub_822C0CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0CF8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822c0d58
	if (ctx.cr6.lt) goto loc_822C0D58;
	// beq cr6,0x822c0d38
	if (ctx.cr6.eq) goto loc_822C0D38;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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
loc_822C0D38:
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,17796
	ctx.r5.s64 = ctx.r11.s64 + 17796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822C0D54;
	sub_822E8368(ctx, base);
	// b 0x822c0d6c
	goto loc_822C0D6C;
loc_822C0D58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13712
	ctx.r5.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e8368
	ctx.lr = 0x822C0D6C;
	sub_822E8368(ctx, base);
loc_822C0D6C:
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

PPC_WEAK_FUNC(sub_822C0CF8) {
	__imp__sub_822C0CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0D84) {
	__imp__sub_822C0D84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0D88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c0db8
	if (!ctx.cr6.eq) goto loc_822C0DB8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822dad58
	ctx.lr = 0x822C0DB8;
	sub_822DAD58(ctx, base);
loc_822C0DB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x822b8130
	ctx.lr = 0x822C0DCC;
	sub_822B8130(ctx, base);
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

PPC_WEAK_FUNC(sub_822C0D88) {
	__imp__sub_822C0D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0DE4) {
	__imp__sub_822C0DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0DE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c0e18
	if (!ctx.cr6.eq) goto loc_822C0E18;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822dad58
	ctx.lr = 0x822C0E18;
	sub_822DAD58(ctx, base);
loc_822C0E18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822b8130
	ctx.lr = 0x822C0E28;
	sub_822B8130(ctx, base);
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

PPC_WEAK_FUNC(sub_822C0DE8) {
	__imp__sub_822C0DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0E40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c0e70
	if (!ctx.cr6.eq) goto loc_822C0E70;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822dad58
	ctx.lr = 0x822C0E70;
	sub_822DAD58(ctx, base);
loc_822C0E70:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822b8130
	ctx.lr = 0x822C0E80;
	sub_822B8130(ctx, base);
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

PPC_WEAK_FUNC(sub_822C0E40) {
	__imp__sub_822C0E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0E98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c0ec8
	if (!ctx.cr6.eq) goto loc_822C0EC8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822dad58
	ctx.lr = 0x822C0EC8;
	sub_822DAD58(ctx, base);
loc_822C0EC8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822dad28
	ctx.lr = 0x822C0ED8;
	sub_822DAD28(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x822b8130
	ctx.lr = 0x822C0EE0;
	sub_822B8130(ctx, base);
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

PPC_WEAK_FUNC(sub_822C0E98) {
	__imp__sub_822C0E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822C0F00;
	__savegprlr_22(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822c0f6c
	if (!ctx.cr6.eq) goto loc_822C0F6C;
	// addi r7,r11,100
	ctx.r7.s64 = ctx.r11.s64 + 100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-32124
	ctx.r10.s64 = ctx.r11.s64 + -32124;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_822C0F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822c0f60
	if (ctx.cr6.eq) goto loc_822C0F60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c0f3c
	if (ctx.cr6.eq) goto loc_822C0F3C;
loc_822C0F60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c0f6c
	if (!ctx.cr6.eq) goto loc_822C0F6C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822C0F6C:
	// clrlwi r23,r8,24
	ctx.r23.u64 = ctx.r8.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,17796
	ctx.r27.s64 = ctx.r11.s64 + 17796;
	// addi r26,r10,13712
	ctx.r26.s64 = ctx.r10.s64 + 13712;
	// addi r24,r9,-16456
	ctx.r24.s64 = ctx.r9.s64 + -16456;
	// addi r25,r8,-16468
	ctx.r25.s64 = ctx.r8.s64 + -16468;
	// addi r22,r7,-16488
	ctx.r22.s64 = ctx.r7.s64 + -16488;
loc_822C0F9C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822c0fb8
	if (ctx.cr6.eq) goto loc_822C0FB8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C0FB8;
	sub_82280900(ctx, base);
loc_822C0FB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c10b0
	ctx.lr = 0x822C0FC0;
	sub_822C10B0(ctx, base);
	// li r30,256
	ctx.r30.s64 = 256;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_822C0FC8:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c1040
	if (ctx.cr6.eq) goto loc_822C1040;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822c1040
	if (ctx.cr6.eq) goto loc_822C1040;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822c1018
	if (ctx.cr6.lt) goto loc_822C1018;
	// beq cr6,0x822c0ff8
	if (ctx.cr6.eq) goto loc_822C0FF8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822c1030
	goto loc_822C1030;
loc_822C0FF8:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x822C1014;
	sub_822E8368(ctx, base);
	// b 0x822c102c
	goto loc_822C102C;
loc_822C1018:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x822C102C;
	sub_822E8368(ctx, base);
loc_822C102C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_822C1030:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C1040;
	sub_82280900(ctx, base);
loc_822C1040:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x822c0fc8
	if (!ctx.cr0.eq) goto loc_822C0FC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,256
	ctx.r7.s64 = 256;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C1064;
	sub_82280900(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x822c0f9c
	if (ctx.cr6.lt) goto loc_822C0F9C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822c1088
	if (!ctx.cr6.eq) goto loc_822C1088;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-16552
	ctx.r4.s64 = ctx.r11.s64 + -16552;
	// bl 0x82280900
	ctx.lr = 0x822C1088;
	sub_82280900(ctx, base);
loc_822C1088:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0EF8) {
	__imp__sub_822C0EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1090) {
	__imp__sub_822C1090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C10AC) {
	__imp__sub_822C10AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C10B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,3960
	ctx.r10.s64 = ctx.r11.s64 + 3960;
	// ori r8,r9,37928
	ctx.r8.u64 = ctx.r9.u64 | 37928;
	// addi r10,r10,636
	ctx.r10.s64 = ctx.r10.s64 + 636;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C10B0) {
	__imp__sub_822C10B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C10D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C10D0) {
	__imp__sub_822C10D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C10EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C10EC) {
	__imp__sub_822C10EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C10F0) {
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
	// bl 0x823de024
	ctx.lr = 0x822C1104;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,24528
	ctx.r3.s64 = ctx.r11.s64 + 24528;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x822C1120;
	sub_822E15D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,20048
	ctx.r3.s64 = ctx.r10.s64 + 20048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x822C1138;
	sub_822E15D0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-2764
	ctx.r3.s64 = ctx.r9.s64 + -2764;
	// bl 0x822e0408
	ctx.lr = 0x822C1144;
	sub_822E0408(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x822c115c
	if (ctx.cr6.lt) goto loc_822C115C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C115C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r10,-15012
	ctx.r6.s64 = ctx.r10.s64 + -15012;
	// addi r3,r9,-15028
	ctx.r3.s64 = ctx.r9.s64 + -15028;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822e15d0
	ctx.lr = 0x822C1178;
	sub_822E15D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,-15048
	ctx.r8.s64 = ctx.r5.s64 + -15048;
	// lfs f30,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r4,-15064
	ctx.r3.s64 = ctx.r4.s64 + -15064;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5880(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x822C11A8;
	sub_822E1660(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r3,14288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14288, ctx.r3.u32);
	// addi r3,r7,-15076
	ctx.r3.s64 = ctx.r7.s64 + -15076;
	// addi r8,r9,-15092
	ctx.r8.s64 = ctx.r9.s64 + -15092;
	// lfs f1,4292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x822C11D8;
	sub_822E1660(ctx, base);
	// lis r6,-31858
	ctx.r6.s64 = -2087845888;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r4,-15116
	ctx.r8.s64 = ctx.r4.s64 + -15116;
	// stw r3,3908(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3908, ctx.r3.u32);
	// addi r3,r11,-15132
	ctx.r3.s64 = ctx.r11.s64 + -15132;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-5716(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -5716);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x822C1208;
	sub_822E1660(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r9,-15152
	ctx.r6.s64 = ctx.r9.s64 + -15152;
	// stw r3,3920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3920, ctx.r3.u32);
	// addi r4,r8,2128
	ctx.r4.s64 = ctx.r8.s64 + 2128;
	// addi r3,r7,2164
	ctx.r3.s64 = ctx.r7.s64 + 2164;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e17e0
	ctx.lr = 0x822C1230;
	sub_822E17E0(ctx, base);
	// lis r6,-31857
	ctx.r6.s64 = -2087780352;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,-15168
	ctx.r8.s64 = ctx.r5.s64 + -15168;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r3,14408(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14408, ctx.r3.u32);
	// addi r3,r4,-15184
	ctx.r3.s64 = ctx.r4.s64 + -15184;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822C125C;
	sub_822E1618(ctx, base);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r31,r10,-28736
	ctx.r31.s64 = ctx.r10.s64 + -28736;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r3,3936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3936, ctx.r3.u32);
	// addi r6,r9,-15200
	ctx.r6.s64 = ctx.r9.s64 + -15200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r8,-15212
	ctx.r3.s64 = ctx.r8.s64 + -15212;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x822C1288;
	sub_822E17E0(ctx, base);
	// lis r7,-31857
	ctx.r7.s64 = -2087780352;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r6,r6,-15268
	ctx.r6.s64 = ctx.r6.s64 + -15268;
	// stw r3,14396(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14396, ctx.r3.u32);
	// addi r3,r5,-15284
	ctx.r3.s64 = ctx.r5.s64 + -15284;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822C12AC;
	sub_822E15D0(ctx, base);
	// lis r4,-31858
	ctx.r4.s64 = -2087845888;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-15324
	ctx.r6.s64 = ctx.r11.s64 + -15324;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,3948(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3948, ctx.r3.u32);
	// addi r3,r10,-15336
	ctx.r3.s64 = ctx.r10.s64 + -15336;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822C12D0;
	sub_822E15D0(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,-15384
	ctx.r6.s64 = ctx.r8.s64 + -15384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,3536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3536, ctx.r3.u32);
	// addi r3,r7,-15400
	ctx.r3.s64 = ctx.r7.s64 + -15400;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x822C12F4;
	sub_822E17E0(ctx, base);
	// lis r5,-31858
	ctx.r5.s64 = -2087845888;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,-15496
	ctx.r6.s64 = ctx.r4.s64 + -15496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,3904(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3904, ctx.r3.u32);
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x822C1318;
	sub_822E15D0(ctx, base);
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r6,r9,-15552
	ctx.r6.s64 = ctx.r9.s64 + -15552;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r3,14292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14292, ctx.r3.u32);
	// addi r3,r8,-15564
	ctx.r3.s64 = ctx.r8.s64 + -15564;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822C133C;
	sub_822E15D0(ctx, base);
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,-15628
	ctx.r8.s64 = ctx.r5.s64 + -15628;
	// stw r3,3540(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3540, ctx.r3.u32);
	// addi r3,r4,-15652
	ctx.r3.s64 = ctx.r4.s64 + -15652;
	// lfs f28,7544(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7544);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x822C1370;
	sub_822E1660(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,3900(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3900, ctx.r3.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f2,6028(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6028);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r7,-15684
	ctx.r9.s64 = ctx.r7.s64 + -15684;
	// lfs f4,20560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20560);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r6,-15704
	ctx.r3.s64 = ctx.r6.s64 + -15704;
	// lfs f3,-22488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22488);
	ctx.f3.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,8996(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16a8
	ctx.lr = 0x822C13B0;
	sub_822E16A8(ctx, base);
	// lis r4,-31857
	ctx.r4.s64 = -2087780352;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r10,-15744
	ctx.r8.s64 = ctx.r10.s64 + -15744;
	// stw r3,14284(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14284, ctx.r3.u32);
	// addi r3,r9,-15760
	ctx.r3.s64 = ctx.r9.s64 + -15760;
	// lfs f27,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x822C13E4;
	sub_822E1660(ctx, base);
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r3,3924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3924, ctx.r3.u32);
	// addi r8,r6,-15832
	ctx.r8.s64 = ctx.r6.s64 + -15832;
	// lfs f1,2832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2832);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-15860
	ctx.r3.s64 = ctx.r5.s64 + -15860;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x822C1414;
	sub_822E1660(ctx, base);
	// lis r4,-31857
	ctx.r4.s64 = -2087780352;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-15912
	ctx.r6.s64 = ctx.r11.s64 + -15912;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,14404(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14404, ctx.r3.u32);
	// addi r3,r10,-15936
	ctx.r3.s64 = ctx.r10.s64 + -15936;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822C1438;
	sub_822E15D0(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,-15976
	ctx.r6.s64 = ctx.r8.s64 + -15976;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,3912(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3912, ctx.r3.u32);
	// addi r3,r7,-15992
	ctx.r3.s64 = ctx.r7.s64 + -15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822C145C;
	sub_822E15D0(ctx, base);
	// lis r6,-31858
	ctx.r6.s64 = -2087845888;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r3,3932(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3932, ctx.r3.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f29,6912(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6912);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r10,-16032
	ctx.r8.s64 = ctx.r10.s64 + -16032;
	// addi r3,r9,-16052
	ctx.r3.s64 = ctx.r9.s64 + -16052;
	// lfs f2,17672(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17672);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x822C1498;
	sub_822E1660(ctx, base);
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,-16112
	ctx.r8.s64 = ctx.r6.s64 + -16112;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,3544(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3544, ctx.r3.u32);
	// addi r3,r5,-16136
	ctx.r3.s64 = ctx.r5.s64 + -16136;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x822C14C4;
	sub_822E1660(ctx, base);
	// lis r4,-31858
	ctx.r4.s64 = -2087845888;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,-16208
	ctx.r8.s64 = ctx.r11.s64 + -16208;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,3928(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3928, ctx.r3.u32);
	// addi r3,r10,-16236
	ctx.r3.s64 = ctx.r10.s64 + -16236;
	// bl 0x822e1660
	ctx.lr = 0x822C14F0;
	sub_822E1660(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r3,3940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3940, ctx.r3.u32);
	// addi r3,r7,-16260
	ctx.r3.s64 = ctx.r7.s64 + -16260;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x822C151C;
	sub_822E1660(ctx, base);
	// lis r6,-31857
	ctx.r6.s64 = -2087780352;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,14392(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14392, ctx.r3.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,3844(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3844);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r4,-16392
	ctx.r8.s64 = ctx.r4.s64 + -16392;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x822C154C;
	sub_822E1660(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,3952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3952, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x822C1560;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C10F0) {
	__imp__sub_822C10F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1570) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// bl 0x8238bd98
	ctx.lr = 0x822C1594;
	sub_8238BD98(ctx, base);
	// lis r31,-31857
	ctx.r31.s64 = -2087780352;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,14296
	ctx.r30.s64 = ctx.r31.s64 + 14296;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r10,-14648
	ctx.r3.s64 = ctx.r10.s64 + -14648;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bl 0x8238bd98
	ctx.lr = 0x822C15B4;
	sub_8238BD98(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r9,-14676
	ctx.r3.s64 = ctx.r9.s64 + -14676;
	// bl 0x8238bd98
	ctx.lr = 0x822C15C8;
	sub_8238BD98(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r8,-14700
	ctx.r3.s64 = ctx.r8.s64 + -14700;
	// bl 0x8238bd98
	ctx.lr = 0x822C15DC;
	sub_8238BD98(ctx, base);
	// stw r3,14296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14296, ctx.r3.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r7,-14724
	ctx.r3.s64 = ctx.r7.s64 + -14724;
	// bl 0x8238bd98
	ctx.lr = 0x822C15F0;
	sub_8238BD98(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r6,-14752
	ctx.r3.s64 = ctx.r6.s64 + -14752;
	// bl 0x8238bd98
	ctx.lr = 0x822C1604;
	sub_8238BD98(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r5,-14772
	ctx.r3.s64 = ctx.r5.s64 + -14772;
	// bl 0x8238bd98
	ctx.lr = 0x822C1618;
	sub_8238BD98(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// bl 0x8238bd98
	ctx.lr = 0x822C162C;
	sub_8238BD98(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r10,-14800
	ctx.r3.s64 = ctx.r10.s64 + -14800;
	// bl 0x8238bd98
	ctx.lr = 0x822C1640;
	sub_8238BD98(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r9,-14820
	ctx.r3.s64 = ctx.r9.s64 + -14820;
	// bl 0x8238bd98
	ctx.lr = 0x822C1654;
	sub_8238BD98(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r8,-14844
	ctx.r3.s64 = ctx.r8.s64 + -14844;
	// bl 0x8238bd98
	ctx.lr = 0x822C1668;
	sub_8238BD98(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,-14860
	ctx.r3.s64 = ctx.r7.s64 + -14860;
	// bl 0x82133898
	ctx.lr = 0x822C167C;
	sub_82133898(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r6,-14876
	ctx.r3.s64 = ctx.r6.s64 + -14876;
	// bl 0x82133898
	ctx.lr = 0x822C1690;
	sub_82133898(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r5,13564
	ctx.r3.s64 = ctx.r5.s64 + 13564;
	// bl 0x82133898
	ctx.lr = 0x822C16A4;
	sub_82133898(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-14892
	ctx.r3.s64 = ctx.r11.s64 + -14892;
	// bl 0x82133898
	ctx.lr = 0x822C16B8;
	sub_82133898(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-14912
	ctx.r3.s64 = ctx.r10.s64 + -14912;
	// bl 0x82133898
	ctx.lr = 0x822C16CC;
	sub_82133898(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,-14932
	ctx.r3.s64 = ctx.r9.s64 + -14932;
	// bl 0x82133898
	ctx.lr = 0x822C16E0;
	sub_82133898(ctx, base);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r8,-14952
	ctx.r3.s64 = ctx.r8.s64 + -14952;
	// bl 0x82133898
	ctx.lr = 0x822C16F4;
	sub_82133898(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,-14972
	ctx.r3.s64 = ctx.r7.s64 + -14972;
	// bl 0x82133898
	ctx.lr = 0x822C1708;
	sub_82133898(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r6,-14992
	ctx.r3.s64 = ctx.r6.s64 + -14992;
	// bl 0x82133898
	ctx.lr = 0x822C171C;
	sub_82133898(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822C1570) {
	__imp__sub_822C1570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1738) {
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
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1770;
	sub_82140BC8(ctx, base);
	// lfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctiwz f2,f6
	ctx.f2.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f1,f5
	ctx.f1.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fctiwz f0,f4
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82392dd8
	ctx.lr = 0x822C17E4;
	sub_82392DD8(ctx, base);
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

PPC_WEAK_FUNC(sub_822C1738) {
	__imp__sub_822C1738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C17F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392e68
	sub_82392E68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C17F8) {
	__imp__sub_822C17F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C17FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C17FC) {
	__imp__sub_822C17FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C1808;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x822C1810;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f3
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f3.f64;
	// addi r27,r11,14296
	ctx.r27.s64 = ctx.r11.s64 + 14296;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82120408
	ctx.lr = 0x822C186C;
	sub_82120408(ctx, base);
	// fadds f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fsubs f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x82120408
	ctx.lr = 0x822C18AC;
	sub_82120408(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x822C18B8;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1800) {
	__imp__sub_822C1800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C18BC) {
	__imp__sub_822C18BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C18C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C18C8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x822C18D0;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f27,f4
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f4.f64;
	// addi r27,r11,14296
	ctx.r27.s64 = ctx.r11.s64 + 14296;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82120408
	ctx.lr = 0x822C192C;
	sub_82120408(ctx, base);
	// fadds f0,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fsubs f2,f0,f26
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x82120408
	ctx.lr = 0x822C196C;
	sub_82120408(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x822C1978;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C18C0) {
	__imp__sub_822C18C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C197C) {
	__imp__sub_822C197C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822C1988;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x822C1990;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822c18c0
	ctx.lr = 0x822C19C0;
	sub_822C18C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fadds f2,f30,f27
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fnmsubs f4,f27,f0,f28
	ctx.f4.f64 = double(float(-(ctx.f27.f64 * ctx.f0.f64 - ctx.f28.f64)));
	// bl 0x822c1800
	ctx.lr = 0x822C19F0;
	sub_822C1800(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x822C19FC;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1980) {
	__imp__sub_822C1980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C1A08;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// stfs f2,212(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// stfs f3,220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// stfs f4,228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1A44;
	sub_82140BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1A7C;
	sub_82140BC8(ctx, base);
	// lfs f13,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lfs f10,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r10,14296
	ctx.r30.s64 = ctx.r10.s64 + 14296;
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x822C1ADC;
	sub_82392A10(ctx, base);
	// lfs f13,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// lfs f0,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x822C1B30;
	sub_82392A10(ctx, base);
	// lwz r31,268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f12,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x822C1B90;
	sub_82392A10(ctx, base);
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// fadds f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x822C1BEC;
	sub_82392A10(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1A00) {
	__imp__sub_822C1A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C1C00;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8238b548
	ctx.lr = 0x822C1C1C;
	sub_8238B548(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x822C1C30;
	sub_8238B5A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
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
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f12,f31,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C1C54;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1BF8) {
	__imp__sub_822C1BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1C70) {
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
	// bl 0x8238b548
	ctx.lr = 0x822C1C8C;
	sub_8238B548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8238b698
	ctx.lr = 0x822C1C98;
	sub_8238B698(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
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
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f12,f31,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C1CBC;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

PPC_WEAK_FUNC(sub_822C1C70) {
	__imp__sub_822C1C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1CE4) {
	__imp__sub_822C1CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822C1CF0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f2,236(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8238b548
	ctx.lr = 0x822C1D24;
	sub_8238B548(ctx, base);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1D4C;
	sub_82140BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C1D60;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f12,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C1D74;
	sub_823DDE20(ctx, base);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stfs f2,236(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82133600
	ctx.lr = 0x822C1DA4;
	sub_82133600(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1CE8) {
	__imp__sub_822C1CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822C1DB8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,276(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stfs f2,284(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8238b548
	ctx.lr = 0x822C1DEC;
	sub_8238B548(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1E14;
	sub_82140BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C1E28;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lfs f12,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C1E3C;
	sub_823DDE20(ctx, base);
	// lbz r9,343(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 343);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f4,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f1,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f2,284(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822c1ea0
	if (ctx.cr6.eq) goto loc_822C1EA0;
	// lbz r10,351(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lfs f5,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82392000
	ctx.lr = 0x822C1E94;
	sub_82392000(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822C1EA0:
	// lwz r29,324(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r6,364(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r30,332(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82133638
	ctx.lr = 0x822C1EE8;
	sub_82133638(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1DB0) {
	__imp__sub_822C1DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1EF4) {
	__imp__sub_822C1EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822C1F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f2,220(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8238b548
	ctx.lr = 0x822C1F30;
	sub_8238B548(ctx, base);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1F58;
	sub_82140BC8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82133600
	ctx.lr = 0x822C1F84;
	sub_82133600(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1EF8) {
	__imp__sub_822C1EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1F8C) {
	__imp__sub_822C1F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822C1F98;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,244(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f2,252(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8238b548
	ctx.lr = 0x822C1FCC;
	sub_8238B548(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140bc8
	ctx.lr = 0x822C1FF4;
	sub_82140BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C2008;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f12,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822C201C;
	sub_823DDE20(ctx, base);
	// lbz r9,311(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 311);
	// lwz r8,300(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// lfs f1,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stfs f2,252(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x821337b8
	ctx.lr = 0x822C205C;
	sub_821337B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1F90) {
	__imp__sub_822C1F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2068) {
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
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x822c20a0
	if (!ctx.cr6.eq) goto loc_822C20A0;
loc_822C2080:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
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
loc_822C20A0:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822c20c8
	if (!ctx.cr6.eq) goto loc_822C20C8;
loc_822C20A8:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
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
loc_822C20C8:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x822c20f0
	if (!ctx.cr6.eq) goto loc_822C20F0;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
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
loc_822C20F0:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x822c2118
	if (!ctx.cr6.eq) goto loc_822C2118;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
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
loc_822C2118:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x822c2140
	if (!ctx.cr6.eq) goto loc_822C2140;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
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
loc_822C2140:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x822c2220
	if (ctx.cr6.eq) goto loc_822C2220;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x822c2170
	if (!ctx.cr6.eq) goto loc_822C2170;
loc_822C2150:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,68(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
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
loc_822C2170:
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bne cr6,0x822c2198
	if (!ctx.cr6.eq) goto loc_822C2198;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
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
loc_822C2198:
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x822c21c0
	if (!ctx.cr6.eq) goto loc_822C21C0;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
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
loc_822C21C0:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x8238dee8
	ctx.lr = 0x822C21D0;
	sub_8238DEE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c21e4
	if (ctx.cr6.eq) goto loc_822C21E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_822C21E4:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,14288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14288);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822c20a8
	if (!ctx.cr6.gt) goto loc_822C20A8;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3920);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x822c2150
	if (!ctx.cr6.lt) goto loc_822C2150;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3908);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x822c2080
	if (!ctx.cr6.lt) goto loc_822C2080;
loc_822C2220:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
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

PPC_WEAK_FUNC(sub_822C2068) {
	__imp__sub_822C2068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2240) {
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
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// addi r31,r11,3624
	ctx.r31.s64 = ctx.r11.s64 + 3624;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2288
	if (!ctx.cr6.eq) goto loc_822C2288;
	// bl 0x82310110
	ctx.lr = 0x822C226C;
	sub_82310110(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-14572
	ctx.r4.s64 = ctx.r11.s64 + -14572;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C2280;
	sub_82280900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_822C2288:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c22ac
	if (ctx.cr6.eq) goto loc_822C22AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14596
	ctx.r4.s64 = ctx.r11.s64 + -14596;
	// bl 0x8227cf18
	ctx.lr = 0x822C22A4;
	sub_8227CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_822C22AC:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,3900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3900);
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
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x822c2344
	if (ctx.cr6.eq) goto loc_822C2344;
	// bl 0x82310110
	ctx.lr = 0x822C22E0;
	sub_82310110(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822c2344
	if (!ctx.cr6.gt) goto loc_822C2344;
	// bl 0x8223c970
	ctx.lr = 0x822C22F4;
	sub_8223C970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2344
	if (!ctx.cr6.eq) goto loc_822C2344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3540);
	// bl 0x822e1f18
	ctx.lr = 0x822C231C;
	sub_822E1F18(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r10,3960
	ctx.r3.s64 = ctx.r10.s64 + 3960;
	// bl 0x822cca88
	ctx.lr = 0x822C232C;
	sub_822CCA88(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x822C2330;
	sub_82310110(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,-14632
	ctx.r4.s64 = ctx.r9.s64 + -14632;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C2344;
	sub_82280900(ctx, base);
loc_822C2344:
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

PPC_WEAK_FUNC(sub_822C2240) {
	__imp__sub_822C2240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C235C) {
	__imp__sub_822C235C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,-28020
	ctx.r8.s64 = ctx.r8.s64 + -28020;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// subf r5,r7,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// srawi r4,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// addi r7,r10,9380
	ctx.r7.s64 = ctx.r10.s64 + 9380;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,37532
	ctx.r8.u64 = ctx.r10.u64 | 37532;
	// ori r7,r9,37528
	ctx.r7.u64 = ctx.r9.u64 | 37528;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r6,37524
	ctx.r4.u64 = ctx.r6.u64 | 37524;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r3,r5,37520
	ctx.r3.u64 = ctx.r5.u64 | 37520;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c240c
	if (!ctx.cr0.eq) goto loc_822C240C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C240C:
	// li r9,4000
	ctx.r9.s64 = 4000;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C2360) {
	__imp__sub_822C2360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2430) {
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
loc_822C244C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307fa8
	ctx.lr = 0x822C2454;
	sub_82307FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c24a0
	if (!ctx.cr6.eq) goto loc_822C24A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141458
	ctx.lr = 0x822C2468;
	sub_82141458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c24a0
	if (ctx.cr6.eq) goto loc_822C24A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141210
	ctx.lr = 0x822C2480;
	sub_82141210(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c24a0
	if (ctx.cr6.eq) goto loc_822C24A0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821413c8
	ctx.lr = 0x822C2494;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c24c8
	if (!ctx.cr6.eq) goto loc_822C24C8;
loc_822C24A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x822c244c
	if (ctx.cr6.lt) goto loc_822C244C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C24B0:
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
loc_822C24C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x822c24b0
	goto loc_822C24B0;
}

PPC_WEAK_FUNC(sub_822C2430) {
	__imp__sub_822C2430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C24D8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x822C24F0;
	sub_822C4C00(ctx, base);
	// bl 0x8238d4b8
	ctx.lr = 0x822C24F4;
	sub_8238D4B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2504
	if (!ctx.cr6.eq) goto loc_822C2504;
	// bl 0x8238d5d0
	ctx.lr = 0x822C2504;
	sub_8238D5D0(ctx, base);
loc_822C2504:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2430
	ctx.lr = 0x822C250C;
	sub_822C2430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2524
	if (ctx.cr6.eq) goto loc_822C2524;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822c4c00
	ctx.lr = 0x822C2524;
	sub_822C4C00(ctx, base);
loc_822C2524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C24D8) {
	__imp__sub_822C24D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2534) {
	__imp__sub_822C2534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C2540;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31858
	ctx.r29.s64 = -2087845888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,3924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3924);
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x822C2564;
	sub_82141160(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8238dee8
	ctx.lr = 0x822C2574;
	sub_8238DEE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c2588
	if (ctx.cr6.eq) goto loc_822C2588;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_822C2588:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,14288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14288);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x822c25ac
	if (ctx.cr6.gt) goto loc_822C25AC;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r31,52(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x822c25f8
	goto loc_822C25F8;
loc_822C25AC:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3920);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x822c25d0
	if (ctx.cr6.lt) goto loc_822C25D0;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r31,68(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// b 0x822c25f8
	goto loc_822C25F8;
loc_822C25D0:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3908);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// blt cr6,0x822c25f4
	if (ctx.cr6.lt) goto loc_822C25F4;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x822c25f8
	goto loc_822C25F8;
loc_822C25F4:
	// lwz r31,64(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
loc_822C25F8:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r10,3924(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3924);
	// lwz r11,14284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14284);
	// lfs f31,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82272ba0
	ctx.lr = 0x822C2614;
	sub_82272BA0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-14536
	ctx.r8.s64 = ctx.r10.s64 + -14536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,-10524
	ctx.r4.s64 = ctx.r9.s64 + -10524;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822C2630;
	sub_822E84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141160
	ctx.lr = 0x822C263C;
	sub_82141160(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r7,-2056
	ctx.r5.s64 = ctx.r7.s64 + -2056;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x822c1ce8
	ctx.lr = 0x822C2674;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_822C2538) {
	__imp__sub_822C2538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822d1618
	sub_822D1618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2688) {
	__imp__sub_822C2688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C26A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C26A4) {
	__imp__sub_822C26A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C26A8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C26D8;
	sub_822CCB40(ctx, base);
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// bl 0x822c0978
	ctx.lr = 0x822C26E0;
	sub_822C0978(ctx, base);
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

PPC_WEAK_FUNC(sub_822C26A8) {
	__imp__sub_822C26A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C26F4) {
	__imp__sub_822C26F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C26F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C2700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// addi r29,r11,3960
	ctx.r29.s64 = ctx.r11.s64 + 3960;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// ori r30,r11,37928
	ctx.r30.u64 = ctx.r11.u64 | 37928;
loc_822C2718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C2720;
	sub_822CCB40(ctx, base);
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// bl 0x822c0978
	ctx.lr = 0x822C2728;
	sub_822C0978(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r11,r11,10320
	ctx.r11.s64 = ctx.r11.s64 + 10320;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c2718
	if (ctx.cr6.lt) goto loc_822C2718;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-26012
	ctx.r3.s64 = ctx.r11.s64 + -26012;
	// bl 0x8227da80
	ctx.lr = 0x822C2748;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-26024
	ctx.r3.s64 = ctx.r10.s64 + -26024;
	// bl 0x8227da80
	ctx.lr = 0x822C2754;
	sub_8227DA80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C26F8) {
	__imp__sub_822C26F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C275C) {
	__imp__sub_822C275C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2760) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14520
	ctx.r4.s64 = ctx.r11.s64 + -14520;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x823de1f0
	ctx.lr = 0x822C2790;
	sub_823DE1F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x822C27A0;
	sub_822E8280(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,-14528
	ctx.r5.s64 = ctx.r10.s64 + -14528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x822C27B4;
	sub_822E8280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1648
	ctx.lr = 0x822C27C0;
	sub_822D1648(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

PPC_WEAK_FUNC(sub_822C2760) {
	__imp__sub_822C2760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C27D8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822c2760
	ctx.lr = 0x822C27F8;
	sub_822C2760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c2818
	if (!ctx.cr6.eq) goto loc_822C2818;
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
loc_822C2818:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822cfab8
	ctx.lr = 0x822C2838;
	sub_822CFAB8(ctx, base);
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

PPC_WEAK_FUNC(sub_822C27D8) {
	__imp__sub_822C27D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822C2858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,3960
	ctx.r31.s64 = ctx.r11.s64 + 3960;
	// ori r9,r10,36480
	ctx.r9.u64 = ctx.r10.u64 | 36480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c28c4
	if (!ctx.cr6.gt) goto loc_822C28C4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r30,r11,-29044
	ctx.r30.s64 = ctx.r11.s64 + -29044;
loc_822C2888:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r31,3712
	ctx.r10.s64 = ctx.r31.s64 + 3712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x822e8058
	ctx.lr = 0x822C28A0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c28d0
	if (ctx.cr6.eq) goto loc_822C28D0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,36480
	ctx.r10.u64 = ctx.r11.u64 | 36480;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c2888
	if (ctx.cr6.lt) goto loc_822C2888;
loc_822C28C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C28D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2850) {
	__imp__sub_822C2850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C28DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C28DC) {
	__imp__sub_822C28DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C28E0) {
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
	// bl 0x822c2850
	ctx.lr = 0x822C28F0;
	sub_822C2850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c2920
	if (ctx.cr6.lt) goto loc_822C2920;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3960
	ctx.r9.s64 = ctx.r11.s64 + 3960;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-29044
	ctx.r8.s64 = ctx.r11.s64 + -29044;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C2920:
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
}

PPC_WEAK_FUNC(sub_822C28E0) {
	__imp__sub_822C28E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2934) {
	__imp__sub_822C2934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822C2940;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,3960
	ctx.r31.s64 = ctx.r11.s64 + 3960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r3,r11,-27999
	ctx.r3.s64 = ctx.r11.s64 + -27999;
	// bl 0x822c2850
	ctx.lr = 0x822C2964;
	sub_822C2850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c2984
	if (ctx.cr6.lt) goto loc_822C2984;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-29044
	ctx.r9.s64 = ctx.r11.s64 + -29044;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822c299c
	if (!ctx.cr6.lt) goto loc_822C299C;
loc_822C2984:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// bl 0x8238bd98
	ctx.lr = 0x822C2994;
	sub_8238BD98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822c2a68
	goto loc_822C2A68;
loc_822C299C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37860
	ctx.r10.u64 = ctx.r11.u64 | 37860;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c29ec
	if (ctx.cr6.eq) goto loc_822C29EC;
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r31,3720
	ctx.r10.s64 = ctx.r31.s64 + 3720;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c29ec
	if (ctx.cr6.eq) goto loc_822C29EC;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,-27672
	ctx.r4.s64 = ctx.r10.s64 + -27672;
	// bl 0x822e7ee0
	ctx.lr = 0x822C29D8;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c2a5c
	if (ctx.cr6.eq) goto loc_822C2A5C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37860
	ctx.r10.u64 = ctx.r11.u64 | 37860;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_822C29EC:
	// rlwinm r30,r30,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r29,r31,3720
	ctx.r29.s64 = ctx.r31.s64 + 3720;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2a18
	if (ctx.cr6.eq) goto loc_822C2A18;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8238bdc0
	ctx.lr = 0x822C2A0C;
	sub_8238BDC0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37860
	ctx.r10.u64 = ctx.r11.u64 | 37860;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
loc_822C2A18:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2a2c
	if (ctx.cr6.eq) goto loc_822C2A2C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c2a48
	if (!ctx.cr6.eq) goto loc_822C2A48;
loc_822C2A2C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// bl 0x8238bd98
	ctx.lr = 0x822C2A3C;
	sub_8238BD98(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37860
	ctx.r9.u64 = ctx.r10.u64 | 37860;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
loc_822C2A48:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lwzx r4,r30,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,-27672
	ctx.r3.s64 = ctx.r11.s64 + -27672;
	// bl 0x822e7e98
	ctx.lr = 0x822C2A5C;
	sub_822E7E98(ctx, base);
loc_822C2A5C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37860
	ctx.r10.u64 = ctx.r11.u64 | 37860;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_822C2A68:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lbz r9,17(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// lfs f4,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f3,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b7f70
	ctx.lr = 0x822C2A90;
	sub_822B7F70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2938) {
	__imp__sub_822C2938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2A98) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238d9c8
	sub_8238D9C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2A98) {
	__imp__sub_822C2A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822C2AA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32190
	ctx.r23.s64 = -2109603840;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,-32312(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -32312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c2b7c
	if (!ctx.cr6.gt) goto loc_822C2B7C;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// addi r24,r10,24
	ctx.r24.s64 = ctx.r10.s64 + 24;
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r30,r7,37928
	ctx.r30.u64 = ctx.r7.u64 | 37928;
	// lis r22,-32166
	ctx.r22.s64 = -2108030976;
	// addi r29,r10,14280
	ctx.r29.s64 = ctx.r10.s64 + 14280;
	// addi r28,r9,3960
	ctx.r28.s64 = ctx.r9.s64 + 3960;
	// addi r27,r8,-14492
	ctx.r27.s64 = ctx.r8.s64 + -14492;
loc_822C2AF4:
	// lbz r9,29088(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c2b18
	if (!ctx.cr6.eq) goto loc_822C2B18;
	// subfc r10,r11,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// eqv r8,r11,r26
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r26.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// b 0x822c2b28
	goto loc_822C2B28;
loc_822C2B18:
	// lwz r10,-8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_822C2B28:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c2b6c
	if (ctx.cr6.eq) goto loc_822C2B6C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// beq cr6,0x822c2b44
	if (ctx.cr6.eq) goto loc_822C2B44;
	// lhz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
loc_822C2B44:
	// stbx r25,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r25.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822d1668
	ctx.lr = 0x822C2B54;
	sub_822D1668(ctx, base);
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822cfab8
	ctx.lr = 0x822C2B68;
	sub_822CFAB8(ctx, base);
	// lwz r11,-32312(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -32312);
loc_822C2B6C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,9780
	ctx.r24.s64 = ctx.r24.s64 + 9780;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c2af4
	if (ctx.cr6.lt) goto loc_822C2AF4;
loc_822C2B7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2AA0) {
	__imp__sub_822C2AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2B84) {
	__imp__sub_822C2B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,3552
	ctx.r3.s64 = ctx.r11.s64 + 3552;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2B88) {
	__imp__sub_822C2B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2B9C) {
	__imp__sub_822C2B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C2BA0) {
	__imp__sub_822C2BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2BA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C2BA8) {
	__imp__sub_822C2BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf. r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// subf. r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf. r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf. r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C2BB0) {
	__imp__sub_822C2BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2C04) {
	__imp__sub_822C2C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2C08) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822c2c40
	if (!ctx.cr6.eq) goto loc_822C2C40;
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
loc_822C2C40:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,3960
	ctx.r31.s64 = ctx.r11.s64 + 3960;
	// ori r6,r8,36484
	ctx.r6.u64 = ctx.r8.u64 | 36484;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r31,3712
	ctx.r7.s64 = ctx.r31.s64 + 3712;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r31,3712
	ctx.r9.s64 = ctx.r31.s64 + 3712;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c2c84
	if (!ctx.cr6.eq) goto loc_822C2C84;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x822e8058
	ctx.lr = 0x822C2C80;
	sub_822E8058(ctx, base);
	// b 0x822c2ca0
	goto loc_822C2CA0;
loc_822C2C84:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c2c9c
	if (!ctx.cr6.eq) goto loc_822C2C9C;
	// addi r4,r10,28
	ctx.r4.s64 = ctx.r10.s64 + 28;
	// addi r3,r8,28
	ctx.r3.s64 = ctx.r8.s64 + 28;
	// bl 0x822c2bb0
	ctx.lr = 0x822C2C98;
	sub_822C2BB0(ctx, base);
	// b 0x822c2ca0
	goto loc_822C2CA0;
loc_822C2C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C2CA0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,36488
	ctx.r10.u64 = ctx.r11.u64 | 36488;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c2cb8
	if (!ctx.cr6.eq) goto loc_822C2CB8;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_822C2CB8:
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

PPC_WEAK_FUNC(sub_822C2C08) {
	__imp__sub_822C2C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2CCC) {
	__imp__sub_822C2CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2CD0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-14452
	ctx.r4.s64 = ctx.r11.s64 + -14452;
	// bl 0x822e8058
	ctx.lr = 0x822C2CF0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2d28
	if (!ctx.cr6.eq) goto loc_822C2D28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-14460
	ctx.r3.s64 = ctx.r11.s64 + -14460;
	// bl 0x822e04f8
	ctx.lr = 0x822C2D04;
	sub_822E04F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,17332
	ctx.r3.s64 = ctx.r10.s64 + 17332;
	// bl 0x822e2520
	ctx.lr = 0x822C2D14;
	sub_822E2520(ctx, base);
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
loc_822C2D28:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14472
	ctx.r4.s64 = ctx.r11.s64 + -14472;
	// bl 0x822e8058
	ctx.lr = 0x822C2D38;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2d70
	if (!ctx.cr6.eq) goto loc_822C2D70;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,17332
	ctx.r3.s64 = ctx.r11.s64 + 17332;
	// bl 0x822e04f8
	ctx.lr = 0x822C2D4C;
	sub_822E04F8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,-14460
	ctx.r3.s64 = ctx.r10.s64 + -14460;
	// bl 0x822e2520
	ctx.lr = 0x822C2D5C;
	sub_822E2520(ctx, base);
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
loc_822C2D70:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// bl 0x822e8058
	ctx.lr = 0x822C2D80;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2dbc
	if (!ctx.cr6.eq) goto loc_822C2DBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0338
	ctx.lr = 0x822C2D90;
	sub_822E0338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r10,-2764
	ctx.r3.s64 = ctx.r10.s64 + -2764;
	// bne cr6,0x822c2db0
	if (!ctx.cr6.eq) goto loc_822C2DB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-2740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2740);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822c2db8
	goto loc_822C2DB8;
loc_822C2DB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,-14476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14476);
	ctx.f1.f64 = double(temp.f32);
loc_822C2DB8:
	// bl 0x822e2210
	ctx.lr = 0x822C2DBC;
	sub_822E2210(ctx, base);
loc_822C2DBC:
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

PPC_WEAK_FUNC(sub_822C2CD0) {
	__imp__sub_822C2CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2DD0) {
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
	// bl 0x8223cbc8
	ctx.lr = 0x822C2DE8;
	sub_8223CBC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2e1c
	if (!ctx.cr6.eq) goto loc_822C2E1C;
	// bl 0x8230b600
	ctx.lr = 0x822C2DF8;
	sub_8230B600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2e94
	if (ctx.cr6.eq) goto loc_822C2E94;
	// bl 0x8230b5a8
	ctx.lr = 0x822C2E08;
	sub_8230B5A8(ctx, base);
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
loc_822C2E1C:
	// bl 0x8230b600
	ctx.lr = 0x822C2E20;
	sub_8230B600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2e4c
	if (ctx.cr6.eq) goto loc_822C2E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x822C2E34;
	sub_82141340(ctx, base);
	// bl 0x8230ca50
	ctx.lr = 0x822C2E38;
	sub_8230CA50(ctx, base);
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
loc_822C2E4C:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// addi r31,r11,3624
	ctx.r31.s64 = ctx.r11.s64 + 3624;
	// lbz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2e7c
	if (ctx.cr6.eq) goto loc_822C2E7C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,-27340
	ctx.r3.s64 = ctx.r11.s64 + -27340;
	// bl 0x822e84f0
	ctx.lr = 0x822C2E70;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x822C2E7C;
	sub_8227CF18(ctx, base);
loc_822C2E7C:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823de090
	ctx.lr = 0x822C2E8C;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
loc_822C2E94:
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

PPC_WEAK_FUNC(sub_822C2DD0) {
	__imp__sub_822C2DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2EA8) {
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
	// bl 0x8230b600
	ctx.lr = 0x822C2EBC;
	sub_8230B600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2ecc
	if (ctx.cr6.eq) goto loc_822C2ECC;
	// bl 0x8230b5a8
	ctx.lr = 0x822C2ECC;
	sub_8230B5A8(ctx, base);
loc_822C2ECC:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,3624
	ctx.r31.s64 = ctx.r11.s64 + 3624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823de090
	ctx.lr = 0x822C2EE4;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_822C2EA8) {
	__imp__sub_822C2EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C2F08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-25120
	ctx.r3.s64 = ctx.r11.s64 + -25120;
	// bl 0x822e03a0
	ctx.lr = 0x822C2F18;
	sub_822E03A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-14420
	ctx.r30.s64 = ctx.r11.s64 + -14420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e03a0
	ctx.lr = 0x822C2F2C;
	sub_822E03A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b6ea0
	ctx.lr = 0x822C2F34;
	sub_822B6EA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x822c2f48
	if (ctx.cr6.eq) goto loc_822C2F48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e2170
	ctx.lr = 0x822C2F48;
	sub_822E2170(ctx, base);
loc_822C2F48:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// addi r3,r11,-14440
	ctx.r3.s64 = ctx.r11.s64 + -14440;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x822c2f60
	if (!ctx.cr6.eq) goto loc_822C2F60;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822C2F60:
	// bl 0x822e20d0
	ctx.lr = 0x822C2F64;
	sub_822E20D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2F00) {
	__imp__sub_822C2F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2F6C) {
	__imp__sub_822C2F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822C2F78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822C2F98;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2fc0
	if (!ctx.cr6.eq) goto loc_822C2FC0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-14356
	ctx.r4.s64 = ctx.r11.s64 + -14356;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C2FB4;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C2FC0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822C2FD0;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2ff8
	if (!ctx.cr6.eq) goto loc_822C2FF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-14384
	ctx.r4.s64 = ctx.r11.s64 + -14384;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C2FEC;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C2FF8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822C3008;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3030
	if (!ctx.cr6.eq) goto loc_822C3030;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-14408
	ctx.r4.s64 = ctx.r11.s64 + -14408;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C3024;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3030:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2F70) {
	__imp__sub_822C2F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C303C) {
	__imp__sub_822C303C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822C3048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822e0220
	ctx.lr = 0x822C3064;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c3090
	if (!ctx.cr6.eq) goto loc_822C3090;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-14332
	ctx.r4.s64 = ctx.r11.s64 + -14332;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C3084;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0578
	ctx.lr = 0x822C3098;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x822C30A4;
	sub_822E8058(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3040) {
	__imp__sub_822C3040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C30C4) {
	__imp__sub_822C30C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C30C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C30D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-14304
	ctx.r4.s64 = ctx.r11.s64 + -14304;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x822e8058
	ctx.lr = 0x822C30F8;
	sub_822E8058(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c3040
	ctx.lr = 0x822C3110;
	sub_822C3040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c3128
	if (ctx.cr6.eq) goto loc_822C3128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd888
	ctx.lr = 0x822C3128;
	sub_822CD888(ctx, base);
loc_822C3128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C30C8) {
	__imp__sub_822C30C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C3138;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-14288
	ctx.r4.s64 = ctx.r11.s64 + -14288;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x822e8058
	ctx.lr = 0x822C3160;
	sub_822E8058(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c3040
	ctx.lr = 0x822C3178;
	sub_822C3040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c3190
	if (ctx.cr6.eq) goto loc_822C3190;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cca88
	ctx.lr = 0x822C3190;
	sub_822CCA88(ctx, base);
loc_822C3190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3130) {
	__imp__sub_822C3130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3948);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3198) {
	__imp__sub_822C3198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C31B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822C31B8;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5376(r1)
	ea = -5376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822C31DC;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3644
	if (ctx.cr6.eq) goto loc_822C3644;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// addi r4,r8,-13912
	ctx.r4.s64 = ctx.r8.s64 + -13912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822e8058
	ctx.lr = 0x822C320C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3224
	if (!ctx.cr6.eq) goto loc_822C3224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc348
	ctx.lr = 0x822C321C;
	sub_822CC348(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3224:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13924
	ctx.r4.s64 = ctx.r11.s64 + -13924;
	// bl 0x822e8058
	ctx.lr = 0x822C3234;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3248
	if (!ctx.cr6.eq) goto loc_822C3248;
	// bl 0x822c24d8
	ctx.lr = 0x822C3240;
	sub_822C24D8(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3248:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13932
	ctx.r4.s64 = ctx.r11.s64 + -13932;
	// bl 0x822e8058
	ctx.lr = 0x822C3258;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3280
	if (!ctx.cr6.eq) goto loc_822C3280;
	// bl 0x82141340
	ctx.lr = 0x822C3264;
	sub_82141340(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,13700
	ctx.r5.s64 = ctx.r11.s64 + 13700;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x822C3278;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3280:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13944
	ctx.r4.s64 = ctx.r11.s64 + -13944;
	// bl 0x822e8058
	ctx.lr = 0x822C3290;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c32d8
	if (!ctx.cr6.eq) goto loc_822C32D8;
	// bl 0x821360d8
	ctx.lr = 0x822C329C;
	sub_821360D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C32AC;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa88
	ctx.lr = 0x822C32B8;
	sub_8212FA88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C32C0;
	sub_822CCB40(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-13956
	ctx.r4.s64 = ctx.r10.s64 + -13956;
	// bl 0x822cd888
	ctx.lr = 0x822C32D0;
	sub_822CD888(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C32D8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13964
	ctx.r4.s64 = ctx.r11.s64 + -13964;
	// bl 0x822e8058
	ctx.lr = 0x822C32E8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3328
	if (!ctx.cr6.eq) goto loc_822C3328;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,8044
	ctx.r4.s64 = ctx.r11.s64 + 8044;
	// bl 0x8227cf18
	ctx.lr = 0x822C32FC;
	sub_8227CF18(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa88
	ctx.lr = 0x822C3308;
	sub_8212FA88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C3310;
	sub_822CCB40(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,17888
	ctx.r4.s64 = ctx.r10.s64 + 17888;
	// bl 0x822cd888
	ctx.lr = 0x822C3320;
	sub_822CD888(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3328:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13976
	ctx.r4.s64 = ctx.r11.s64 + -13976;
	// bl 0x822e8058
	ctx.lr = 0x822C3338;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3374
	if (!ctx.cr6.eq) goto loc_822C3374;
	// li r4,-17
	ctx.r4.s64 = -17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa50
	ctx.lr = 0x822C334C;
	sub_8212FA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f800
	ctx.lr = 0x822C3354;
	sub_8212F800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C3364;
	sub_822E2170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C336C;
	sub_822CCB40(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3374:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13984
	ctx.r4.s64 = ctx.r11.s64 + -13984;
	// bl 0x822e8058
	ctx.lr = 0x822C3384;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c33b4
	if (!ctx.cr6.eq) goto loc_822C33B4;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,4304
	ctx.r4.s64 = ctx.r1.s64 + 4304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822C339C;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3644
	if (ctx.cr6.eq) goto loc_822C3644;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x822c2cd0
	ctx.lr = 0x822C33AC;
	sub_822C2CD0(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C33B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14004
	ctx.r4.s64 = ctx.r11.s64 + -14004;
	// bl 0x822e8058
	ctx.lr = 0x822C33C4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c33e4
	if (ctx.cr6.eq) goto loc_822C33E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4132
	ctx.r4.s64 = ctx.r11.s64 + -4132;
	// bl 0x822e8058
	ctx.lr = 0x822C33DC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c33fc
	if (!ctx.cr6.eq) goto loc_822C33FC;
loc_822C33E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14024
	ctx.r4.s64 = ctx.r11.s64 + -14024;
	// bl 0x8227cf18
	ctx.lr = 0x822C33F4;
	sub_8227CF18(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C33FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14036
	ctx.r4.s64 = ctx.r11.s64 + -14036;
	// bl 0x822e8058
	ctx.lr = 0x822C340C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c343c
	if (!ctx.cr6.eq) goto loc_822C343C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-25120
	ctx.r3.s64 = ctx.r11.s64 + -25120;
	// bl 0x822e03a0
	ctx.lr = 0x822C3420;
	sub_822E03A0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,-14420
	ctx.r3.s64 = ctx.r10.s64 + -14420;
	// bl 0x822e2170
	ctx.lr = 0x822C3430;
	sub_822E2170(ctx, base);
loc_822C3430:
	// bl 0x822c2f00
	ctx.lr = 0x822C3434;
	sub_822C2F00(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C343C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14052
	ctx.r4.s64 = ctx.r11.s64 + -14052;
	// bl 0x822e8058
	ctx.lr = 0x822C344C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3430
	if (ctx.cr6.eq) goto loc_822C3430;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14068
	ctx.r4.s64 = ctx.r11.s64 + -14068;
	// bl 0x822e8058
	ctx.lr = 0x822C3464;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c347c
	if (!ctx.cr6.eq) goto loc_822C347C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c2dd0
	ctx.lr = 0x822C3474;
	sub_822C2DD0(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C347C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14080
	ctx.r4.s64 = ctx.r11.s64 + -14080;
	// bl 0x822e8058
	ctx.lr = 0x822C348C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c34a0
	if (!ctx.cr6.eq) goto loc_822C34A0;
	// bl 0x822c2ea8
	ctx.lr = 0x822C3498;
	sub_822C2EA8(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C34A0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14304
	ctx.r4.s64 = ctx.r11.s64 + -14304;
	// bl 0x822e8058
	ctx.lr = 0x822C34B0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3608
	if (ctx.cr6.eq) goto loc_822C3608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14100
	ctx.r4.s64 = ctx.r11.s64 + -14100;
	// bl 0x822e8058
	ctx.lr = 0x822C34C8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3608
	if (ctx.cr6.eq) goto loc_822C3608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14288
	ctx.r4.s64 = ctx.r11.s64 + -14288;
	// bl 0x822e8058
	ctx.lr = 0x822C34E0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c35c4
	if (ctx.cr6.eq) goto loc_822C35C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14120
	ctx.r4.s64 = ctx.r11.s64 + -14120;
	// bl 0x822e8058
	ctx.lr = 0x822C34F8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c35c4
	if (ctx.cr6.eq) goto loc_822C35C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14140
	ctx.r4.s64 = ctx.r11.s64 + -14140;
	// bl 0x822e8058
	ctx.lr = 0x822C3510;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3524
	if (!ctx.cr6.eq) goto loc_822C3524;
	// bl 0x8235a2c0
	ctx.lr = 0x822C351C;
	sub_8235A2C0(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3524:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14156
	ctx.r4.s64 = ctx.r11.s64 + -14156;
	// bl 0x822e8058
	ctx.lr = 0x822C3534;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c354c
	if (!ctx.cr6.eq) goto loc_822C354C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823098c8
	ctx.lr = 0x822C3544;
	sub_823098C8(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C354C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14172
	ctx.r4.s64 = ctx.r11.s64 + -14172;
	// bl 0x822e8058
	ctx.lr = 0x822C355C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c35a4
	if (!ctx.cr6.eq) goto loc_822C35A4;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822C3574;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c358c
	if (ctx.cr6.eq) goto loc_822C358C;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x8235a2d8
	ctx.lr = 0x822C3584;
	sub_8235A2D8(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C358C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-14236
	ctx.r4.s64 = ctx.r11.s64 + -14236;
	// bl 0x82280b08
	ctx.lr = 0x822C359C;
	sub_82280B08(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C35A4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,-14272
	ctx.r4.s64 = ctx.r11.s64 + -14272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822C35BC;
	sub_82280900(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C35C4:
	// addi r7,r1,2256
	ctx.r7.s64 = ctx.r1.s64 + 2256;
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// addi r5,r1,3280
	ctx.r5.s64 = ctx.r1.s64 + 3280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c2f70
	ctx.lr = 0x822C35DC;
	sub_822C2F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3644
	if (ctx.cr6.eq) goto loc_822C3644;
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// addi r6,r1,3280
	ctx.r6.s64 = ctx.r1.s64 + 3280;
	// addi r5,r1,2256
	ctx.r5.s64 = ctx.r1.s64 + 2256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c3130
	ctx.lr = 0x822C3600;
	sub_822C3130(ctx, base);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822C3608:
	// addi r7,r1,2256
	ctx.r7.s64 = ctx.r1.s64 + 2256;
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// addi r5,r1,3280
	ctx.r5.s64 = ctx.r1.s64 + 3280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c2f70
	ctx.lr = 0x822C3620;
	sub_822C2F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3644
	if (ctx.cr6.eq) goto loc_822C3644;
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// addi r6,r1,3280
	ctx.r6.s64 = ctx.r1.s64 + 3280;
	// addi r5,r1,2256
	ctx.r5.s64 = ctx.r1.s64 + 2256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c30c8
	ctx.lr = 0x822C3644;
	sub_822C30C8(ctx, base);
loc_822C3644:
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C31B0) {
	__imp__sub_822C31B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C364C) {
	__imp__sub_822C364C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C3658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,368(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822c36a4
	if (!ctx.cr6.eq) goto loc_822C36A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d22b0
	ctx.lr = 0x822C3680;
	sub_822D22B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7e88
	ctx.lr = 0x822C368C;
	sub_822C7E88(ctx, base);
	// addi r10,r30,93
	ctx.r10.s64 = ctx.r30.s64 + 93;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x8235a238
	ctx.lr = 0x822C36A4;
	sub_8235A238(ctx, base);
loc_822C36A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3650) {
	__imp__sub_822C3650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C36AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C36AC) {
	__imp__sub_822C36AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C36B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822c36c4
	if (!ctx.cr6.eq) goto loc_822C36C4;
	// b 0x82309838
	sub_82309838(ctx, base);
	return;
loc_822C36C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C36B0) {
	__imp__sub_822C36B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C36CC) {
	__imp__sub_822C36CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C36D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,5808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822c36f8
	if (!ctx.cr6.eq) goto loc_822C36F8;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x8235a3b0
	sub_8235A3B0(ctx, base);
	return;
loc_822C36F8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C36D0) {
	__imp__sub_822C36D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3704) {
	__imp__sub_822C3704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3708) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3708) {
	__imp__sub_822C3708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3710) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3710) {
	__imp__sub_822C3710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3718) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3718) {
	__imp__sub_822C3718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,92(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f13,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f11,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3720) {
	__imp__sub_822C3720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3744) {
	__imp__sub_822C3744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f12,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f11,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3748) {
	__imp__sub_822C3748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C376C) {
	__imp__sub_822C376C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8235a228
	sub_8235A228(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3770) {
	__imp__sub_822C3770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3788) {
	__imp__sub_822C3788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C378C) {
	__imp__sub_822C378C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,3960
	ctx.r9.s64 = ctx.r11.s64 + 3960;
	// addi r4,r10,-13900
	ctx.r4.s64 = ctx.r10.s64 + -13900;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27935
	ctx.r3.s64 = ctx.r11.s64 + -27935;
	// b 0x822b7268
	sub_822B7268(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3790) {
	__imp__sub_822C3790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C37B0) {
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
	// beq cr6,0x822c3800
	if (ctx.cr6.eq) goto loc_822C3800;
	// bl 0x821360d8
	ctx.lr = 0x822C37D0;
	sub_821360D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C37E0;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C37EC;
	sub_8212FA88(ctx, base);
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
loc_822C3800:
	// li r4,-17
	ctx.r4.s64 = -17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa50
	ctx.lr = 0x822C380C;
	sub_8212FA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f800
	ctx.lr = 0x822C3814;
	sub_8212F800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C3824;
	sub_822E2170(ctx, base);
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

PPC_WEAK_FUNC(sub_822C37B0) {
	__imp__sub_822C37B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3838) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d3c8
	ctx.lr = 0x822C3854;
	sub_8227D3C8(ctx, base);
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// ori r7,r8,37928
	ctx.r7.u64 = ctx.r8.u64 | 37928;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lis r5,-31858
	ctx.r5.s64 = -2087845888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r5,3960
	ctx.r10.s64 = ctx.r5.s64 + 3960;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822cd888
	ctx.lr = 0x822C388C;
	sub_822CD888(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3838) {
	__imp__sub_822C3838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C389C) {
	__imp__sub_822C389C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C38A0) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d3c8
	ctx.lr = 0x822C38BC;
	sub_8227D3C8(ctx, base);
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// ori r7,r8,37928
	ctx.r7.u64 = ctx.r8.u64 | 37928;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lis r5,-31858
	ctx.r5.s64 = -2087845888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r5,3960
	ctx.r10.s64 = ctx.r5.s64 + 3960;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822cca88
	ctx.lr = 0x822C38F4;
	sub_822CCA88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C38A0) {
	__imp__sub_822C38A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3904) {
	__imp__sub_822C3904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822cd888
	sub_822CD888(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3908) {
	__imp__sub_822C3908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3924) {
	__imp__sub_822C3924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822cca88
	sub_822CCA88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3928) {
	__imp__sub_822C3928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3944) {
	__imp__sub_822C3944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822C3950;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// ori r5,r10,37928
	ctx.r5.u64 = ctx.r10.u64 | 37928;
	// addi r30,r11,3960
	ctx.r30.s64 = ctx.r11.s64 + 3960;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x822C397C;
	sub_823DE090(ctx, base);
	// lis r9,-31857
	ctx.r9.s64 = -2087780352;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r11,r9,14280
	ctx.r11.s64 = ctx.r9.s64 + 14280;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,104
	ctx.r6.s64 = ctx.r11.s64 + 104;
	// ori r5,r8,37536
	ctx.r5.u64 = ctx.r8.u64 | 37536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// stbx r4,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u8);
	// bl 0x822c59a8
	ctx.lr = 0x822C39B4;
	sub_822C59A8(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// bl 0x8211f990
	ctx.lr = 0x822C39C4;
	sub_8211F990(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r3,r10,480
	ctx.r3.s64 = ctx.r10.s64 * 480;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x822c3a2c
	if (!ctx.cr6.gt) goto loc_822C3A2C;
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
	// lfs f0,32272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32272);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fnmsubs f8,f9,f0,f10
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x822c3a38
	goto loc_822C3A38;
loc_822C3A2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_822C3A38:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// bl 0x822d1668
	ctx.lr = 0x822C3A48;
	sub_822D1668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cfab8
	ctx.lr = 0x822C3A58;
	sub_822CFAB8(ctx, base);
	// bl 0x821fc6d0
	ctx.lr = 0x822C3A5C;
	sub_821FC6D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c3a94
	if (!ctx.cr6.eq) goto loc_822C3A94;
	// lbz r11,-408(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c3a94
	if (!ctx.cr6.eq) goto loc_822C3A94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// bl 0x822d1668
	ctx.lr = 0x822C3A84;
	sub_822D1668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cfab8
	ctx.lr = 0x822C3A94;
	sub_822CFAB8(ctx, base);
loc_822C3A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C3A9C;
	sub_822CCB40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3948) {
	__imp__sub_822C3948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3AA4) {
	__imp__sub_822C3AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3AA8) {
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
	// bl 0x822c08e0
	ctx.lr = 0x822C3ABC;
	sub_822C08E0(ctx, base);
	// bl 0x822c10f0
	ctx.lr = 0x822C3AC0;
	sub_822C10F0(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,14436
	ctx.r5.s64 = ctx.r11.s64 + 14436;
	// addi r3,r9,-26012
	ctx.r3.s64 = ctx.r9.s64 + -26012;
	// addi r4,r10,14392
	ctx.r4.s64 = ctx.r10.s64 + 14392;
	// bl 0x8227da10
	ctx.lr = 0x822C3ADC;
	sub_8227DA10(ctx, base);
	// lis r8,-31857
	ctx.r8.s64 = -2087780352;
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,14416
	ctx.r5.s64 = ctx.r8.s64 + 14416;
	// addi r3,r6,-26024
	ctx.r3.s64 = ctx.r6.s64 + -26024;
	// addi r4,r7,14496
	ctx.r4.s64 = ctx.r7.s64 + 14496;
	// bl 0x8227da10
	ctx.lr = 0x822C3AF8;
	sub_8227DA10(ctx, base);
	// lis r4,-31858
	ctx.r4.s64 = -2087845888;
	// li r5,276
	ctx.r5.s64 = 276;
	// addi r3,r4,3624
	ctx.r3.s64 = ctx.r4.s64 + 3624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822C3B0C;
	sub_823DE090(ctx, base);
	// lis r3,-31858
	ctx.r3.s64 = -2087845888;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3540);
	// bl 0x822e1f18
	ctx.lr = 0x822C3B1C;
	sub_822E1F18(ctx, base);
	// bl 0x822c1570
	ctx.lr = 0x822C3B20;
	sub_822C1570(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-13716
	ctx.r6.s64 = ctx.r11.s64 + -13716;
	// addi r3,r10,-13732
	ctx.r3.s64 = ctx.r10.s64 + -13732;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822C3B3C;
	sub_822E15D0(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r7,-13748
	ctx.r3.s64 = ctx.r7.s64 + -13748;
	// addi r8,r9,-13784
	ctx.r8.s64 = ctx.r9.s64 + -13784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822C3B60;
	sub_822E1618(ctx, base);
	// lis r6,-31858
	ctx.r6.s64 = -2087845888;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,-13824
	ctx.r8.s64 = ctx.r5.s64 + -13824;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,3944(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3944, ctx.r3.u32);
	// addi r3,r4,-13844
	ctx.r3.s64 = ctx.r4.s64 + -13844;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822C3B8C;
	sub_822E1618(ctx, base);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,3956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3956, ctx.r3.u32);
loc_822C3B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3948
	ctx.lr = 0x822C3BA0;
	sub_822C3948(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x822c3b98
	if (ctx.cr6.lt) goto loc_822C3B98;
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

PPC_WEAK_FUNC(sub_822C3AA8) {
	__imp__sub_822C3AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822C3BC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r30,r11,37928
	ctx.r30.u64 = ctx.r11.u64 | 37928;
	// addi r29,r10,3960
	ctx.r29.s64 = ctx.r10.s64 + 3960;
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x822cc040
	ctx.lr = 0x822C3BF8;
	sub_822CC040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3cbc
	if (ctx.cr6.eq) goto loc_822C3CBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822C3C08;
	sub_822CBC28(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c3c70
	if (ctx.cr6.eq) goto loc_822C3C70;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x822c3c4c
	if (!ctx.cr6.eq) goto loc_822C3C4C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822c3c4c
	if (ctx.cr6.eq) goto loc_822C3C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbe48
	ctx.lr = 0x822C3C2C;
	sub_822CBE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3c4c
	if (!ctx.cr6.eq) goto loc_822C3C4C;
	// lwz r11,240(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c3c4c
	if (!ctx.cr6.eq) goto loc_822C3C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C3C48;
	sub_822CCB40(ctx, base);
	// b 0x822c3c60
	goto loc_822C3C60;
loc_822C3C4C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0cc8
	ctx.lr = 0x822C3C60;
	sub_822D0CC8(ctx, base);
loc_822C3C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822C3C68;
	sub_822CBC28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c3cbc
	if (!ctx.cr6.eq) goto loc_822C3CBC;
loc_822C3C70:
	// li r4,-17
	ctx.r4.s64 = -17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212fa50
	ctx.lr = 0x822C3C7C;
	sub_8212FA50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212f808
	ctx.lr = 0x822C3C84;
	sub_8212F808(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822C3C88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822C3C90;
	sub_822CBC28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c3cbc
	if (!ctx.cr6.eq) goto loc_822C3CBC;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r11,r11,10320
	ctx.r11.s64 = ctx.r11.s64 + 10320;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c3c88
	if (ctx.cr6.lt) goto loc_822C3C88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C3CBC;
	sub_822E2170(ctx, base);
loc_822C3CBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3BC0) {
	__imp__sub_822C3BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3CC4) {
	__imp__sub_822C3CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14384
	ctx.r9.s64 = ctx.r11.s64 + 14384;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3CC8) {
	__imp__sub_822C3CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3CDC) {
	__imp__sub_822C3CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,632(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822c3d24
	if (ctx.cr0.lt) goto loc_822C3D24;
	// lwz r9,564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822c3d24
	if (!ctx.cr6.lt) goto loc_822C3D24;
	// addi r10,r10,142
	ctx.r10.s64 = ctx.r10.s64 + 142;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// blr 
	return;
loc_822C3D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3CE0) {
	__imp__sub_822C3CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3D2C) {
	__imp__sub_822C3D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D30) {
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
	// bl 0x821360d8
	ctx.lr = 0x822C3D48;
	sub_821360D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C3D58;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C3D64;
	sub_8212FA88(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// ori r8,r10,37928
	ctx.r8.u64 = ctx.r10.u64 | 37928;
	// addi r11,r9,3960
	ctx.r11.s64 = ctx.r9.s64 + 3960;
	// mullw r10,r31,r8
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r7,-13684
	ctx.r4.s64 = ctx.r7.s64 + -13684;
	// bl 0x822cd888
	ctx.lr = 0x822C3D88;
	sub_822CD888(ctx, base);
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

PPC_WEAK_FUNC(sub_822C3D30) {
	__imp__sub_822C3D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3D9C) {
	__imp__sub_822C3D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822ccac8
	sub_822CCAC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3DA0) {
	__imp__sub_822C3DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3DBC) {
	__imp__sub_822C3DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3DC0) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa08
	ctx.lr = 0x822C3DD8;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c3df0
	if (!ctx.cr6.eq) goto loc_822C3DF0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa88
	ctx.lr = 0x822C3DF0;
	sub_8212FA88(ctx, base);
loc_822C3DF0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r4,r11,-13660
	ctx.r4.s64 = ctx.r11.s64 + -13660;
	// addi r3,r10,3960
	ctx.r3.s64 = ctx.r10.s64 + 3960;
	// bl 0x822cd888
	ctx.lr = 0x822C3E04;
	sub_822CD888(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3DC0) {
	__imp__sub_822C3DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3E14) {
	__imp__sub_822C3E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r4,r11,-13660
	ctx.r4.s64 = ctx.r11.s64 + -13660;
	// addi r3,r10,3960
	ctx.r3.s64 = ctx.r10.s64 + 3960;
	// b 0x822cca88
	sub_822CCA88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3E18) {
	__imp__sub_822C3E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3E2C) {
	__imp__sub_822C3E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E30) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa08
	ctx.lr = 0x822C3E48;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c3e60
	if (!ctx.cr6.eq) goto loc_822C3E60;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa88
	ctx.lr = 0x822C3E60;
	sub_8212FA88(ctx, base);
loc_822C3E60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r4,r11,-13660
	ctx.r4.s64 = ctx.r11.s64 + -13660;
	// addi r3,r10,3960
	ctx.r3.s64 = ctx.r10.s64 + 3960;
	// bl 0x822cd888
	ctx.lr = 0x822C3E74;
	sub_822CD888(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x822C3E78;
	sub_82393CC8(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x822C3E7C;
	sub_82310110(ctx, base);
	// lis r9,-31857
	ctx.r9.s64 = -2087780352;
	// addi r11,r3,1000
	ctx.r11.s64 = ctx.r3.s64 + 1000;
	// stw r11,14412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14412, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3E30) {
	__imp__sub_822C3E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E98) {
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
	// bl 0x82310110
	ctx.lr = 0x822C3EAC;
	sub_82310110(ctx, base);
	// lis r31,-31857
	ctx.r31.s64 = -2087780352;
	// lwz r11,14412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14412);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// bgt cr6,0x822c3f04
	if (ctx.cr6.gt) goto loc_822C3F04;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c3ed0
	if (!ctx.cr6.gt) goto loc_822C3ED0;
loc_822C3ECC:
	// bl 0x8228b0d8
	ctx.lr = 0x822C3ED0;
	sub_8228B0D8(ctx, base);
loc_822C3ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14412, ctx.r11.u32);
	// bl 0x82393d48
	ctx.lr = 0x822C3EDC;
	sub_82393D48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r4,r11,-13660
	ctx.r4.s64 = ctx.r11.s64 + -13660;
	// addi r3,r10,3960
	ctx.r3.s64 = ctx.r10.s64 + 3960;
	// bl 0x822cca88
	ctx.lr = 0x822C3EF0;
	sub_822CCA88(ctx, base);
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
loc_822C3F04:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// b 0x822c3ecc
	goto loc_822C3ECC;
}

PPC_WEAK_FUNC(sub_822C3E98) {
	__imp__sub_822C3E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3F0C) {
	__imp__sub_822C3F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822ccb40
	sub_822CCB40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3F10) {
	__imp__sub_822C3F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3F2C) {
	__imp__sub_822C3F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822cbe48
	sub_822CBE48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3F30) {
	__imp__sub_822C3F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3F4C) {
	__imp__sub_822C3F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3960
	ctx.r11.s64 = ctx.r11.s64 + 3960;
	// ori r9,r10,37928
	ctx.r9.u64 = ctx.r10.u64 | 37928;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3F50) {
	__imp__sub_822C3F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F70) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822c4064
	if (!ctx.cr6.eq) goto loc_822C4064;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4038
	if (ctx.cr6.eq) goto loc_822C4038;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c3fd0
	if (ctx.cr6.eq) goto loc_822C3FD0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r11,-13596
	ctx.r4.s64 = ctx.r11.s64 + -13596;
	// bl 0x822830e8
	ctx.lr = 0x822C3FCC;
	sub_822830E8(ctx, base);
	// b 0x822c3fe0
	goto loc_822C3FE0;
loc_822C3FD0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-13640
	ctx.r4.s64 = ctx.r11.s64 + -13640;
	// bl 0x82280c30
	ctx.lr = 0x822C3FE0;
	sub_82280C30(ctx, base);
loc_822C3FE0:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r31,r11,14456
	ctx.r31.s64 = ctx.r11.s64 + 14456;
	// addi r11,r10,-25084
	ctx.r11.s64 = ctx.r10.s64 + -25084;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C4000:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822c4000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x822e8280
	ctx.lr = 0x822C401C;
	sub_822E8280(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25092
	ctx.r5.s64 = ctx.r11.s64 + -25092;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x822e8280
	ctx.lr = 0x822C4030;
	sub_822E8280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822c4068
	goto loc_822C4068;
loc_822C4038:
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r31,r10,14456
	ctx.r31.s64 = ctx.r10.s64 + 14456;
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_822C4048:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822c4048
	if (!ctx.cr6.eq) goto loc_822C4048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822c4068
	goto loc_822C4068;
loc_822C4064:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_822C4068:
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

PPC_WEAK_FUNC(sub_822C3F70) {
	__imp__sub_822C3F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4080) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x822c40ac
	if (!ctx.cr6.eq) goto loc_822C40AC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822c40b8
	goto loc_822C40B8;
loc_822C40AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b6fb0
	ctx.lr = 0x822C40B4;
	sub_822B6FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822C40B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3f70
	ctx.lr = 0x822C40C0;
	sub_822C3F70(ctx, base);
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

PPC_WEAK_FUNC(sub_822C4080) {
	__imp__sub_822C4080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C40D4) {
	__imp__sub_822C40D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C40D8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13564
	ctx.r4.s64 = ctx.r11.s64 + -13564;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b7268
	ctx.lr = 0x822C40FC;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3f70
	ctx.lr = 0x822C4108;
	sub_822C3F70(ctx, base);
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

PPC_WEAK_FUNC(sub_822C40D8) {
	__imp__sub_822C40D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C411C) {
	__imp__sub_822C411C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822cbe48
	sub_822CBE48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4120) {
	__imp__sub_822C4120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C413C) {
	__imp__sub_822C413C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4140) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8212fa08
	ctx.lr = 0x822C415C;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4180
	if (!ctx.cr6.eq) goto loc_822C4180;
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
loc_822C4180:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3960
	ctx.r11.s64 = ctx.r11.s64 + 3960;
	// ori r9,r10,37928
	ctx.r9.u64 = ctx.r10.u64 | 37928;
	// addi r8,r11,632
	ctx.r8.s64 = ctx.r11.s64 + 632;
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// neg r5,r6
	ctx.r5.s64 = -ctx.r6.s64;
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
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

PPC_WEAK_FUNC(sub_822C4140) {
	__imp__sub_822C4140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C41BC) {
	__imp__sub_822C41BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C41C0) {
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
	// bl 0x822b6d68
	ctx.lr = 0x822C41E0;
	sub_822B6D68(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x822c4268
	if (ctx.cr6.eq) goto loc_822C4268;
	// bl 0x82310110
	ctx.lr = 0x822C41EC;
	sub_82310110(ctx, base);
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// ori r10,r11,19923
	ctx.r10.u64 = ctx.r11.u64 | 19923;
	// mulhw r9,r3,r10
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,800
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 800, ctx.xer);
	// ble cr6,0x822c4268
	if (!ctx.cr6.gt) goto loc_822C4268;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4268
	if (ctx.cr6.eq) goto loc_822C4268;
	// li r8,-68
	ctx.r8.s64 = -68;
	// li r9,-67
	ctx.r9.s64 = -67;
loc_822C422C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x822c4268
	if (!ctx.cr6.lt) goto loc_822C4268;
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x822c424c
	if (!ctx.cr6.eq) goto loc_822C424C;
	// stbx r8,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// b 0x822c4258
	goto loc_822C4258;
loc_822C424C:
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x822c4258
	if (!ctx.cr6.eq) goto loc_822C4258;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
loc_822C4258:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c422c
	if (!ctx.cr6.eq) goto loc_822C422C;
loc_822C4268:
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

PPC_WEAK_FUNC(sub_822C41C0) {
	__imp__sub_822C41C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822C4288;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r22,r11,-24892
	ctx.r22.s64 = ctx.r11.s64 + -24892;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x823dfa98
	ctx.lr = 0x822C42AC;
	sub_823DFA98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c42cc
	if (!ctx.cr6.eq) goto loc_822C42CC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822C42C4;
	sub_822E7E98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822C42CC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822C42D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c42d0
	if (!ctx.cr6.eq) goto loc_822C42D0;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rotlwi r24,r11,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x823de090
	ctx.lr = 0x822C42FC;
	sub_823DE090(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822c43c0
	if (!ctx.cr6.gt) goto loc_822C43C0;
loc_822C430C:
	// add r29,r28,r25
	ctx.r29.u64 = ctx.r28.u64 + ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e01e0
	ctx.lr = 0x822C4320;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c43a8
	if (!ctx.cr6.eq) goto loc_822C43A8;
	// add r30,r28,r25
	ctx.r30.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9a0
	ctx.lr = 0x822C4338;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c43a8
	if (ctx.cr6.eq) goto loc_822C43A8;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822C435C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822c435c
	if (!ctx.cr6.eq) goto loc_822C435C;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c43a0
	if (!ctx.cr6.gt) goto loc_822C43A0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C4388:
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x822c4388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C4388;
loc_822C43A0:
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// b 0x822c43b8
	goto loc_822C43B8;
loc_822C43A8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stbx r11,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822C43B8:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822c430c
	if (ctx.cr6.lt) goto loc_822C430C;
loc_822C43C0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c41c0
	ctx.lr = 0x822C43CC;
	sub_822C41C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4280) {
	__imp__sub_822C4280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C43D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C43D4) {
	__imp__sub_822C43D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C43D8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc040
	ctx.lr = 0x822C4408;
	sub_822CC040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822c4438
	if (!ctx.cr6.gt) goto loc_822C4438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822C4418;
	sub_822CBC28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4438
	if (ctx.cr6.eq) goto loc_822C4438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbe48
	ctx.lr = 0x822C4428;
	sub_822CBE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c4438
	if (!ctx.cr6.eq) goto loc_822C4438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C4438;
	sub_822CCB40(ctx, base);
loc_822C4438:
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

PPC_WEAK_FUNC(sub_822C43D8) {
	__imp__sub_822C43D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C444C) {
	__imp__sub_822C444C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4450) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c6928
	ctx.lr = 0x822C4484;
	sub_822C6928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c4498
	if (!ctx.cr6.eq) goto loc_822C4498;
loc_822C4490:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c44c4
	goto loc_822C44C4;
loc_822C4498:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c68e8
	ctx.lr = 0x822C44A4;
	sub_822C68E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c4490
	if (ctx.cr6.eq) goto loc_822C4490;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbea8
	ctx.lr = 0x822C44B8;
	sub_822CBEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822C44C4:
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

PPC_WEAK_FUNC(sub_822C4450) {
	__imp__sub_822C4450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C44DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C44DC) {
	__imp__sub_822C44DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C44E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C44E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822C4518;
	sub_822CBC28(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r29,r11,14384
	ctx.r29.s64 = ctx.r11.s64 + 14384;
	// lwz r11,14384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14384);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822c4538
	if (!ctx.cr6.eq) goto loc_822C4538;
loc_822C452C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4538:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4564
	if (ctx.cr6.eq) goto loc_822C4564;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822c452c
	if (!ctx.cr6.eq) goto loc_822C452C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822C455C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c45c8
	if (ctx.cr6.eq) goto loc_822C45C8;
loc_822C4564:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,9
	ctx.r10.s64 = 9;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// beq cr6,0x822c4590
	if (ctx.cr6.eq) goto loc_822C4590;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,14000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822c45a0
	goto loc_822C45A0;
loc_822C4590:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-13532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-13536(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13536);
	ctx.f13.f64 = double(temp.f32);
loc_822C45A0:
	// stfs f13,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C45B4;
	sub_8212FA88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C45BC;
	sub_822CCB40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd888
	ctx.lr = 0x822C45C8;
	sub_822CD888(ctx, base);
loc_822C45C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C44E0) {
	__imp__sub_822C44E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C45D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C45D4) {
	__imp__sub_822C45D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C45D8) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14384
	ctx.r9.s64 = ctx.r11.s64 + 14384;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// ori r6,r8,37928
	ctx.r6.u64 = ctx.r8.u64 | 37928;
	// addi r11,r7,3960
	ctx.r11.s64 = ctx.r7.s64 + 3960;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x822c4630
	if (!ctx.cr6.eq) goto loc_822C4630;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,-28000
	ctx.r31.s64 = ctx.r31.s64 + -28000;
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// bl 0x822c43d8
	ctx.lr = 0x822C4628;
	sub_822C43D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_822C4630:
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

PPC_WEAK_FUNC(sub_822C45D8) {
	__imp__sub_822C45D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C4644) {
	__imp__sub_822C4644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3960
	ctx.r9.s64 = ctx.r11.s64 + 3960;
	// ori r8,r10,37928
	ctx.r8.u64 = ctx.r10.u64 | 37928;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,-28000
	ctx.r6.s64 = ctx.r11.s64 + -28000;
	// lbzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C4648) {
	__imp__sub_822C4648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C466C) {
	__imp__sub_822C466C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C4678;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,-13496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13496);
	ctx.f31.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f13,-13500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13500);
	ctx.f13.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f12,-21312(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21312);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// lfs f11,6032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6032);
	ctx.f11.f64 = double(temp.f32);
	// stb r29,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r29.u8);
	// lfs f10,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r29,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r29.u8);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x822C46F0;
	sub_82141160(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r5,-14912
	ctx.r3.s64 = ctx.r5.s64 + -14912;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8238b538
	ctx.lr = 0x822C4704;
	sub_8238B538(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// ori r10,r4,37928
	ctx.r10.u64 = ctx.r4.u64 | 37928;
	// addi r11,r11,3960
	ctx.r11.s64 = ctx.r11.s64 + 3960;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,3708
	ctx.r30.s64 = ctx.r11.s64 + 3708;
	// lwz r9,3708(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3708);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c4740
	if (!ctx.cr6.eq) goto loc_822C4740;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// bl 0x822de110
	ctx.lr = 0x822C4740;
	sub_822DE110(ctx, base);
loc_822C4740:
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ca4c8
	ctx.lr = 0x822C4754;
	sub_822CA4C8(ctx, base);
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x822c4798
	if (!ctx.cr6.eq) goto loc_822C4798;
	// lbz r11,209(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// addi r31,r1,209
	ctx.r31.s64 = ctx.r1.s64 + 209;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x822c4780
	if (!ctx.cr6.eq) goto loc_822C4780;
	// addi r31,r1,210
	ctx.r31.s64 = ctx.r1.s64 + 210;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822c478c
	goto loc_822C478C;
loc_822C4780:
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x822b6fb0
	ctx.lr = 0x822C4788;
	sub_822B6FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822C478C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3f70
	ctx.lr = 0x822C4794;
	sub_822C3F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822C4798:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c47fc
	if (ctx.cr6.eq) goto loc_822C47FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r29,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stb r5,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r5.u8);
	// lfs f3,-13524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13524);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lfs f2,-13528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13528);
	ctx.f2.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r10,r9,-2072
	ctx.r10.s64 = ctx.r9.s64 + -2072;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c9e10
	ctx.lr = 0x822C47FC;
	sub_822C9E10(ctx, base);
loc_822C47FC:
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4670) {
	__imp__sub_822C4670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4808) {
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
	// bl 0x822c2240
	ctx.lr = 0x822C4820;
	sub_822C2240(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc040
	ctx.lr = 0x822C4840;
	sub_822CC040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822c4890
	if (!ctx.cr6.gt) goto loc_822C4890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1530
	ctx.lr = 0x822C4850;
	sub_822D1530(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,14384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14384);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822c4890
	if (!ctx.cr6.eq) goto loc_822C4890;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-13492
	ctx.r4.s64 = ctx.r11.s64 + -13492;
	// bl 0x822c4450
	ctx.lr = 0x822C4870;
	sub_822C4450(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4890
	if (ctx.cr6.eq) goto loc_822C4890;
	// bl 0x8238d9d8
	ctx.lr = 0x822C4880;
	sub_8238D9D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4890
	if (ctx.cr6.eq) goto loc_822C4890;
	// bl 0x822c24d8
	ctx.lr = 0x822C4890;
	sub_822C24D8(ctx, base);
loc_822C4890:
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

PPC_WEAK_FUNC(sub_822C4808) {
	__imp__sub_822C4808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C48A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C48A4) {
	__imp__sub_822C48A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C48A8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r3,250
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 250, ctx.xer);
	// bne cr6,0x822c490c
	if (!ctx.cr6.eq) goto loc_822C490C;
	// bl 0x822cb010
	ctx.lr = 0x822C48D0;
	sub_822CB010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c48e4
	if (ctx.cr6.eq) goto loc_822C48E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-13468
	ctx.r3.s64 = ctx.r11.s64 + -13468;
	// b 0x822c48ec
	goto loc_822C48EC;
loc_822C48E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-13484
	ctx.r3.s64 = ctx.r11.s64 + -13484;
loc_822C48EC:
	// bl 0x822c4080
	ctx.lr = 0x822C48F0;
	sub_822C4080(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c490c
	if (ctx.cr6.eq) goto loc_822C490C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c1bf8
	ctx.lr = 0x822C4908;
	sub_822C1BF8(ctx, base);
	// b 0x822c4910
	goto loc_822C4910;
loc_822C490C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C4910:
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

PPC_WEAK_FUNC(sub_822C48A8) {
	__imp__sub_822C48A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822C4930;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822cb010
	ctx.lr = 0x822C4954;
	sub_822CB010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c4968
	if (ctx.cr6.eq) goto loc_822C4968;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-13468
	ctx.r3.s64 = ctx.r11.s64 + -13468;
	// b 0x822c4970
	goto loc_822C4970;
loc_822C4968:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-13484
	ctx.r3.s64 = ctx.r11.s64 + -13484;
loc_822C4970:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x822c498c
	if (!ctx.cr6.eq) goto loc_822C498C;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822c4994
	goto loc_822C4994;
loc_822C498C:
	// bl 0x822b6fb0
	ctx.lr = 0x822C4990;
	sub_822B6FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822C4994:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c3f70
	ctx.lr = 0x822C499C;
	sub_822C3F70(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x822c1ce8
	ctx.lr = 0x822C49D0;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4928) {
	__imp__sub_822C4928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C49DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C49DC) {
	__imp__sub_822C49DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C49E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822C49E8;
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c4ad0
	if (!ctx.cr6.eq) goto loc_822C4AD0;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// bl 0x8230ac10
	ctx.lr = 0x822C4A2C;
	sub_8230AC10(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c4aa0
	if (!ctx.cr6.eq) goto loc_822C4AA0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r26,17(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f30,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lbz r25,16(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822c4080
	ctx.lr = 0x822C4A58;
	sub_822C4080(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x822C4A8C;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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
loc_822C4AA0:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x822c1ce8
	ctx.lr = 0x822C4AD0;
	sub_822C1CE8(ctx, base);
loc_822C4AD0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_822C49E0) {
	__imp__sub_822C49E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C4AE4) {
	__imp__sub_822C4AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4AE8) {
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
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r31,r11,3960
	ctx.r31.s64 = ctx.r11.s64 + 3960;
	// bne cr6,0x822c4b1c
	if (!ctx.cr6.eq) goto loc_822C4B1C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,36484
	ctx.r10.u64 = ctx.r11.u64 | 36484;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822c4bec
	if (ctx.cr6.eq) goto loc_822C4BEC;
loc_822C4B1C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,36480
	ctx.r9.u64 = ctx.r11.u64 | 36480;
	// ori r8,r10,36484
	ctx.r8.u64 = ctx.r10.u64 | 36484;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822c4bb0
	if (ctx.cr6.eq) goto loc_822C4BB0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,11272
	ctx.r6.s64 = ctx.r10.s64 + 11272;
	// addi r3,r11,-29044
	ctx.r3.s64 = ctx.r11.s64 + -29044;
	// bl 0x823def18
	ctx.lr = 0x822C4B54;
	sub_823DEF18(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,37537
	ctx.r8.u64 = ctx.r9.u64 | 37537;
	// lbzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4ba8
	if (ctx.cr6.eq) goto loc_822C4BA8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-27999
	ctx.r3.s64 = ctx.r11.s64 + -27999;
	// bl 0x822c2850
	ctx.lr = 0x822C4B74;
	sub_822C2850(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c4bec
	if (ctx.cr6.lt) goto loc_822C4BEC;
loc_822C4B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cbce0
	ctx.lr = 0x822C4B94;
	sub_822CBCE0(ctx, base);
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
loc_822C4BA8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822c4b80
	goto loc_822C4B80;
loc_822C4BB0:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// lwz r3,14396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14396);
	// bl 0x822e1fa8
	ctx.lr = 0x822C4BC4;
	sub_822E1FA8(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r7,r9,37537
	ctx.r7.u64 = ctx.r9.u64 | 37537;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r3,r11,-27935
	ctx.r3.s64 = ctx.r11.s64 + -27935;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-13432
	ctx.r4.s64 = ctx.r8.s64 + -13432;
	// li r5,16
	ctx.r5.s64 = 16;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// bl 0x823de1f0
	ctx.lr = 0x822C4BEC;
	sub_823DE1F0(ctx, base);
loc_822C4BEC:
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

PPC_WEAK_FUNC(sub_822C4AE8) {
	__imp__sub_822C4AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822C4C08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// ori r9,r11,37928
	ctx.r9.u64 = ctx.r11.u64 | 37928;
	// addi r11,r10,3960
	ctx.r11.s64 = ctx.r10.s64 + 3960;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822cc040
	ctx.lr = 0x822C4C34;
	sub_822CC040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822c529c
	if (!ctx.cr6.gt) goto loc_822C529C;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// addi r28,r11,14384
	ctx.r28.s64 = ctx.r11.s64 + 14384;
	// bne cr6,0x822c4c5c
	if (!ctx.cr6.eq) goto loc_822C4C5C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x822c529c
	if (ctx.cr6.eq) goto loc_822C529C;
loc_822C4C5C:
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// stwx r29,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r29.u32);
	// bgt cr6,0x822c529c
	if (ctx.cr6.gt) goto loc_822C529C;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19592
	ctx.r12.s64 = ctx.r12.s64 + 19592;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_822C4CCC;
	case 1:
		goto loc_822C4D10;
	case 2:
		goto loc_822C4E84;
	case 3:
		goto loc_822C4F68;
	case 4:
		goto loc_822C4E54;
	case 5:
		goto loc_822C529C;
	case 6:
		goto loc_822C500C;
	case 7:
		goto loc_822C5030;
	case 8:
		goto loc_822C5070;
	case 9:
		goto loc_822C529C;
	case 10:
		goto loc_822C4F4C;
	case 11:
		goto loc_822C4EC8;
	case 12:
		goto loc_822C50C4;
	case 13:
		goto loc_822C513C;
	case 14:
		goto loc_822C5208;
	case 15:
		goto loc_822C4D90;
	case 16:
		goto loc_822C4DC8;
	default:
		return;
	}
	// lwz r17,19660(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19660);
	// lwz r17,19728(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19728);
	// lwz r17,20100(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20100);
	// lwz r17,20328(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20328);
	// lwz r17,20052(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20052);
	// lwz r17,21148(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21148);
	// lwz r17,20492(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20492);
	// lwz r17,20528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20528);
	// lwz r17,20592(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20592);
	// lwz r17,21148(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21148);
	// lwz r17,20300(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20300);
	// lwz r17,20168(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20168);
	// lwz r17,20676(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20676);
	// lwz r17,20796(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20796);
	// lwz r17,21000(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21000);
	// lwz r17,19856(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19856);
	// lwz r17,19912(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19912);
loc_822C4CCC:
	// li r4,-17
	ctx.r4.s64 = -17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa50
	ctx.lr = 0x822C4CD8;
	sub_8212FA50(ctx, base);
	// li r4,-5
	ctx.r4.s64 = -5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa50
	ctx.lr = 0x822C4CE4;
	sub_8212FA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f808
	ctx.lr = 0x822C4CEC;
	sub_8212F808(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C4CFC;
	sub_822E2170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C4D04;
	sub_822CCB40(ctx, base);
loc_822C4D04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4D10:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4D1C;
	sub_8212FA88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,17888
	ctx.r4.s64 = ctx.r11.s64 + 17888;
	// bl 0x822cd888
	ctx.lr = 0x822C4D2C;
	sub_822CD888(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,11488
	ctx.r3.s64 = ctx.r10.s64 + 11488;
	// bl 0x822e04f8
	ctx.lr = 0x822C4D38;
	sub_822E04F8(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c4d74
	if (ctx.cr6.eq) goto loc_822C4D74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13216
	ctx.r4.s64 = ctx.r11.s64 + -13216;
	// bl 0x822c4450
	ctx.lr = 0x822C4D54;
	sub_822C4450(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c4d74
	if (!ctx.cr6.eq) goto loc_822C4D74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13232
	ctx.r4.s64 = ctx.r11.s64 + -13232;
	// bl 0x822cd888
	ctx.lr = 0x822C4D70;
	sub_822CD888(ctx, base);
	// bl 0x821332f0
	ctx.lr = 0x822C4D74;
	sub_821332F0(ctx, base);
loc_822C4D74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x822C4D84;
	sub_8236A638(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4D90:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4D9C;
	sub_8212FA88(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13200
	ctx.r4.s64 = ctx.r11.s64 + 13200;
	// bl 0x822cd888
	ctx.lr = 0x822C4DAC;
	sub_822CD888(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lfs f1,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x822C4DBC;
	sub_8236A638(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4DC8:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4DD4;
	sub_8212FA88(ctx, base);
	// bl 0x821332f0
	ctx.lr = 0x822C4DD8;
	sub_821332F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141400
	ctx.lr = 0x822C4DE4;
	sub_82141400(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,13184
	ctx.r31.s64 = ctx.r11.s64 + 13184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c4450
	ctx.lr = 0x822C4DF8;
	sub_822C4450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e10
	if (!ctx.cr6.eq) goto loc_822C4E10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd888
	ctx.lr = 0x822C4E10;
	sub_822CD888(ctx, base);
loc_822C4E10:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// bl 0x822e04f8
	ctx.lr = 0x822C4E1C;
	sub_822E04F8(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4e38
	if (ctx.cr6.eq) goto loc_822C4E38;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13256
	ctx.r4.s64 = ctx.r11.s64 + -13256;
	// bl 0x822cd888
	ctx.lr = 0x822C4E38;
	sub_822CD888(ctx, base);
loc_822C4E38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x822C4E48;
	sub_8236A638(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4E54:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4E60;
	sub_8212FA88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C4E68;
	sub_822CCB40(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13268
	ctx.r4.s64 = ctx.r11.s64 + -13268;
	// bl 0x822cd888
	ctx.lr = 0x822C4E78;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4E84:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822c4d04
	if (ctx.cr6.eq) goto loc_822C4D04;
	// bl 0x821360d8
	ctx.lr = 0x822C4E90;
	sub_821360D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C4EA0;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4EAC;
	sub_8212FA88(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-13280
	ctx.r4.s64 = ctx.r10.s64 + -13280;
	// bl 0x822cd888
	ctx.lr = 0x822C4EBC;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4EC8:
	// bl 0x821360d8
	ctx.lr = 0x822C4ECC;
	sub_821360D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C4EDC;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4EE8;
	sub_8212FA88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822C4EF0;
	sub_822CBC28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4f04
	if (ctx.cr6.eq) goto loc_822C4F04;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c4f40
	if (!ctx.cr6.eq) goto loc_822C4F40;
loc_822C4F04:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4f34
	if (ctx.cr6.eq) goto loc_822C4F34;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-13304
	ctx.r4.s64 = ctx.r11.s64 + -13304;
	// bl 0x822cd888
	ctx.lr = 0x822C4F28;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4F34:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-13280
	ctx.r4.s64 = ctx.r11.s64 + -13280;
	// bl 0x822cd888
	ctx.lr = 0x822C4F40;
	sub_822CD888(ctx, base);
loc_822C4F40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4F4C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13320
	ctx.r4.s64 = ctx.r11.s64 + -13320;
	// bl 0x822cd888
	ctx.lr = 0x822C4F5C;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4F68:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3948);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c4f98
	if (ctx.cr6.eq) goto loc_822C4F98;
	// bl 0x822c24d8
	ctx.lr = 0x822C4F8C;
	sub_822C24D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4F98:
	// bl 0x821360d8
	ctx.lr = 0x822C4F9C;
	sub_821360D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C4FAC;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C4FB8;
	sub_8212FA88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C4FC0;
	sub_822CCB40(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,11488
	ctx.r3.s64 = ctx.r10.s64 + 11488;
	// bl 0x822e04f8
	ctx.lr = 0x822C4FCC;
	sub_822E04F8(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c4ff4
	if (ctx.cr6.eq) goto loc_822C4FF4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-13216
	ctx.r4.s64 = ctx.r11.s64 + -13216;
	// bl 0x822cd888
	ctx.lr = 0x822C4FE8;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C4FF4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-13492
	ctx.r4.s64 = ctx.r11.s64 + -13492;
	// bl 0x822cd888
	ctx.lr = 0x822C5000;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C500C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C5014;
	sub_822CCB40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,17880
	ctx.r4.s64 = ctx.r11.s64 + 17880;
	// bl 0x822cd888
	ctx.lr = 0x822C5024;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C5030:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-13324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13324);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x8212fa88
	ctx.lr = 0x822C5054;
	sub_8212FA88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-25700
	ctx.r4.s64 = ctx.r9.s64 + -25700;
	// bl 0x822cd888
	ctx.lr = 0x822C5064;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C5070:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,14000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-13324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13324);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x821360d8
	ctx.lr = 0x822C508C;
	sub_821360D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,22924
	ctx.r3.s64 = ctx.r9.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x822C509C;
	sub_822E2170(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C50A8;
	sub_8212FA88(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,-13340
	ctx.r4.s64 = ctx.r8.s64 + -13340;
	// bl 0x822cd888
	ctx.lr = 0x822C50B8;
	sub_822CD888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C50C4:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C50D0;
	sub_8212FA88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x822C50E0;
	sub_8236A638(ctx, base);
	// bl 0x821332f0
	ctx.lr = 0x822C50E4;
	sub_821332F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141400
	ctx.lr = 0x822C50F0;
	sub_82141400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb40
	ctx.lr = 0x822C50F8;
	sub_822CCB40(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-13352
	ctx.r4.s64 = ctx.r10.s64 + -13352;
	// bl 0x822cd888
	ctx.lr = 0x822C5108;
	sub_822CD888(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,11488
	ctx.r3.s64 = ctx.r9.s64 + 11488;
	// bl 0x822e04f8
	ctx.lr = 0x822C5114;
	sub_822E04F8(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c5130
	if (ctx.cr6.eq) goto loc_822C5130;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13372
	ctx.r4.s64 = ctx.r11.s64 + -13372;
	// bl 0x822cd888
	ctx.lr = 0x822C5130;
	sub_822CD888(ctx, base);
loc_822C5130:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C513C:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C5148;
	sub_8212FA88(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5190
	if (ctx.cr6.eq) goto loc_822C5190;
	// bl 0x823084f0
	ctx.lr = 0x822C515C;
	sub_823084F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822C5160:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141198
	ctx.lr = 0x822C5168;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5184
	if (ctx.cr6.eq) goto loc_822C5184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141280
	ctx.lr = 0x822C517C;
	sub_82141280(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82141400
	ctx.lr = 0x822C5184;
	sub_82141400(ctx, base);
loc_822C5184:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x822c5160
	if (ctx.cr6.lt) goto loc_822C5160;
loc_822C5190:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,-13396
	ctx.r31.s64 = ctx.r11.s64 + -13396;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c4450
	ctx.lr = 0x822C51A4;
	sub_822C4450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c51bc
	if (!ctx.cr6.eq) goto loc_822C51BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd888
	ctx.lr = 0x822C51BC;
	sub_822CD888(ctx, base);
loc_822C51BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// bl 0x822e04f8
	ctx.lr = 0x822C51C8;
	sub_822E04F8(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c51e4
	if (ctx.cr6.eq) goto loc_822C51E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13256
	ctx.r4.s64 = ctx.r11.s64 + -13256;
	// bl 0x822cd888
	ctx.lr = 0x822C51E4;
	sub_822CD888(ctx, base);
loc_822C51E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb88
	ctx.lr = 0x822C51EC;
	sub_822CCB88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x822C51FC;
	sub_8236A638(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C5208:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa88
	ctx.lr = 0x822C5214;
	sub_8212FA88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x822C5224;
	sub_8236A638(ctx, base);
	// bl 0x821332f0
	ctx.lr = 0x822C5228;
	sub_821332F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,-13416
	ctx.r31.s64 = ctx.r11.s64 + -13416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c4450
	ctx.lr = 0x822C523C;
	sub_822C4450(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c5254
	if (!ctx.cr6.eq) goto loc_822C5254;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd888
	ctx.lr = 0x822C5254;
	sub_822CD888(ctx, base);
loc_822C5254:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// bl 0x821416e8
	ctx.lr = 0x822C5260;
	sub_821416E8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,11488
	ctx.r3.s64 = ctx.r10.s64 + 11488;
	// bl 0x822e04f8
	ctx.lr = 0x822C526C;
	sub_822E04F8(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c5288
	if (ctx.cr6.eq) goto loc_822C5288;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13256
	ctx.r4.s64 = ctx.r11.s64 + -13256;
	// bl 0x822cd888
	ctx.lr = 0x822C5288;
	sub_822CD888(ctx, base);
loc_822C5288:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccb88
	ctx.lr = 0x822C5290;
	sub_822CCB88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822C529C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4C00) {
	__imp__sub_822C4C00(ctx, base);
}

