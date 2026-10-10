#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822CC0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,-10740
	ctx.r4.s64 = ctx.r11.s64 + -10740;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC0D8) {
	__imp__sub_822CC0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC0E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bne cr6,0x822cc14c
	if (!ctx.cr6.eq) goto loc_822CC14C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,14000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822cc154
	goto loc_822CC154;
loc_822CC14C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,11388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11388);
	ctx.f30.f64 = double(temp.f32);
loc_822CC154:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82141160
	ctx.lr = 0x822CC15C;
	sub_82141160(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r9,r11,14296
	ctx.r9.s64 = ctx.r11.s64 + 14296;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f3,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f3.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,52(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x822c1ce8
	ctx.lr = 0x822CC1A0;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_822CC0E8) {
	__imp__sub_822CC0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC1BC) {
	__imp__sub_822CC1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC1C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82365270
	sub_82365270(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC1C0) {
	__imp__sub_822CC1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC1C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823652d8
	sub_823652D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC1C8) {
	__imp__sub_822CC1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC1D0) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cc200
	if (ctx.cr6.eq) goto loc_822CC200;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822CC200:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cc238
	if (ctx.cr6.eq) goto loc_822CC238;
	// bl 0x821411b8
	ctx.lr = 0x822CC218;
	sub_821411B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc238
	if (ctx.cr6.eq) goto loc_822CC238;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822CC238:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc284
	if (ctx.cr6.eq) goto loc_822CC284;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc284
	if (ctx.cr6.eq) goto loc_822CC284;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4876
	ctx.r3.s64 = ctx.r11.s64 + -4876;
	// bl 0x822e0338
	ctx.lr = 0x822CC260;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822CC284:
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

PPC_WEAK_FUNC(sub_822CC1D0) {
	__imp__sub_822CC1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC298) {
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
	// bl 0x822cc1d0
	ctx.lr = 0x822CC2B0;
	sub_822CC1D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822cc2f4
	if (!ctx.cr6.lt) goto loc_822CC2F4;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cc2f0
	if (ctx.cr6.eq) goto loc_822CC2F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
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
loc_822CC2F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CC2F4:
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

PPC_WEAK_FUNC(sub_822CC298) {
	__imp__sub_822CC298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC308) {
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
	// bl 0x822cc1d0
	ctx.lr = 0x822CC318;
	sub_822CC1D0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CC308) {
	__imp__sub_822CC308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC334) {
	__imp__sub_822CC334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// stw r3,15496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15496, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CC338) {
	__imp__sub_822CC338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC344) {
	__imp__sub_822CC344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC348) {
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
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x822ec4e8
	ctx.lr = 0x822CC35C;
	sub_822EC4E8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,11488
	ctx.r3.s64 = ctx.r10.s64 + 11488;
	// bl 0x822e2520
	ctx.lr = 0x822CC370;
	sub_822E2520(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x822ec500
	ctx.lr = 0x822CC378;
	sub_822EC500(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,-10724
	ctx.r3.s64 = ctx.r9.s64 + -10724;
	// bl 0x822e20d0
	ctx.lr = 0x822CC388;
	sub_822E20D0(ctx, base);
	// lis r8,-31857
	ctx.r8.s64 = -2087780352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15496, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CC348) {
	__imp__sub_822CC348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC3A4) {
	__imp__sub_822CC3A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC3A8) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d1e20
	ctx.lr = 0x822CC3D0;
	sub_822D1E20(ctx, base);
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cc3e8
	if (ctx.cr6.eq) goto loc_822CC3E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CC3E8;
	sub_822C7B88(ctx, base);
loc_822CC3E8:
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

PPC_WEAK_FUNC(sub_822CC3A8) {
	__imp__sub_822CC3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC400) {
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
	// bne cr6,0x822cc428
	if (!ctx.cr6.eq) goto loc_822CC428;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cc4c0
	goto loc_822CC4C0;
loc_822CC428:
	// lwz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822cc4bc
	if (!ctx.cr6.gt) goto loc_822CC4BC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,296(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822CC450:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r11,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cc46c
	if (!ctx.cr6.eq) goto loc_822CC46C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cc470
	goto loc_822CC470;
loc_822CC46C:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CC470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc490
	if (!ctx.cr6.eq) goto loc_822CC490;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822cc450
	if (ctx.cr6.lt) goto loc_822CC450;
	// b 0x822cc4bc
	goto loc_822CC4BC;
loc_822CC490:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r31,r11,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1e20
	ctx.lr = 0x822CC4A4;
	sub_822D1E20(ctx, base);
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cc4bc
	if (ctx.cr6.eq) goto loc_822CC4BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CC4BC;
	sub_822C7B88(ctx, base);
loc_822CC4BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822CC4C0:
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

PPC_WEAK_FUNC(sub_822CC400) {
	__imp__sub_822CC400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822CC4E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x822c6140
	ctx.lr = 0x822CC500;
	sub_822C6140(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822cc5cc
	if (!ctx.cr6.gt) goto loc_822CC5CC;
loc_822CC510:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c6270
	ctx.lr = 0x822CC524;
	sub_822C6270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc5c0
	if (ctx.cr6.eq) goto loc_822CC5C0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822cc54c
	if (ctx.cr6.eq) goto loc_822CC54C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d1e08
	ctx.lr = 0x822CC548;
	sub_822D1E08(ctx, base);
	// b 0x822cc5c0
	goto loc_822CC5C0;
loc_822CC54C:
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cc56c
	if (!ctx.cr6.eq) goto loc_822CC56C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cc570
	goto loc_822CC570;
loc_822CC56C:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CC570:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc5b0
	if (ctx.cr6.eq) goto loc_822CC5B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822CC584;
	sub_822C10D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822d1e20
	ctx.lr = 0x822CC598;
	sub_822D1E20(ctx, base);
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cc5b0
	if (ctx.cr6.eq) goto loc_822CC5B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CC5B0;
	sub_822C7B88(ctx, base);
loc_822CC5B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d1e20
	ctx.lr = 0x822CC5C0;
	sub_822D1E20(ctx, base);
loc_822CC5C0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822cc510
	if (ctx.cr6.lt) goto loc_822CC510;
loc_822CC5CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC4D8) {
	__imp__sub_822CC4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC5D4) {
	__imp__sub_822CC5D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC5D8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cc618
	if (!ctx.cr6.eq) goto loc_822CC618;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cc61c
	goto loc_822CC61C;
loc_822CC618:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CC61C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc6c0
	if (ctx.cr6.eq) goto loc_822CC6C0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1e20
	ctx.lr = 0x822CC634;
	sub_822D1E20(ctx, base);
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822cc6c0
	if (!ctx.cr6.gt) goto loc_822CC6C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,296(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822CC658:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r11,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cc674
	if (!ctx.cr6.eq) goto loc_822CC674;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cc678
	goto loc_822CC678;
loc_822CC674:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CC678:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc698
	if (!ctx.cr6.eq) goto loc_822CC698;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822cc658
	if (ctx.cr6.lt) goto loc_822CC658;
	// b 0x822cc6c0
	goto loc_822CC6C0;
loc_822CC698:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822cc6c0
	if (ctx.cr6.eq) goto loc_822CC6C0;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,340(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// bl 0x822c7b88
	ctx.lr = 0x822CC6C0;
	sub_822C7B88(ctx, base);
loc_822CC6C0:
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

PPC_WEAK_FUNC(sub_822CC5D8) {
	__imp__sub_822CC5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,184(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,296(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822CC6FC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r11,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cc718
	if (!ctx.cr6.eq) goto loc_822CC718;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cc71c
	goto loc_822CC71C;
loc_822CC718:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CC71C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc73c
	if (!ctx.cr6.eq) goto loc_822CC73C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822cc6fc
	if (ctx.cr6.lt) goto loc_822CC6FC;
	// blr 
	return;
loc_822CC73C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,296(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,336(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// b 0x822c7b88
	sub_822C7B88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC6D8) {
	__imp__sub_822CC6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CC768;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822d1e08
	ctx.lr = 0x822CC784;
	sub_822D1E08(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822cc798
	if (ctx.cr6.eq) goto loc_822CC798;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822CC798;
	sub_822C6B30(ctx, base);
loc_822CC798:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc6d8
	ctx.lr = 0x822CC7A4;
	sub_822CC6D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC760) {
	__imp__sub_822CC760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC7AC) {
	__imp__sub_822CC7AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CC7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cc810
	if (ctx.cr6.eq) goto loc_822CC810;
	// lwz r30,236(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cc810
	if (ctx.cr6.eq) goto loc_822CC810;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822CC7FC;
	sub_823DE090(ctx, base);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CC810;
	sub_822C7B88(ctx, base);
loc_822CC810:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC7B0) {
	__imp__sub_822CC7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822CC820;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,632(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822cc994
	if (ctx.cr0.lt) goto loc_822CC994;
	// addi r10,r11,142
	ctx.r10.s64 = ctx.r11.s64 + 142;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_822CC844:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822cc860
	if (ctx.cr6.eq) goto loc_822CC860;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x822cc844
	if (!ctx.cr0.lt) goto loc_822CC844;
	// b 0x822cc994
	goto loc_822CC994;
loc_822CC860:
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x8228bcc0
	ctx.lr = 0x822CC868;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc87c
	if (ctx.cr6.eq) goto loc_822CC87C;
	// bl 0x82393ee8
	ctx.lr = 0x822CC878;
	sub_82393EE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_822CC87C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cc7b0
	ctx.lr = 0x822CC888;
	sub_822CC7B0(ctx, base);
	// lwz r4,292(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 292);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cc8ac
	if (ctx.cr6.eq) goto loc_822CC8AC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822bf690
	ctx.lr = 0x822CC89C;
	sub_822BF690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823652d8
	ctx.lr = 0x822CC8AC;
	sub_823652D8(ctx, base);
loc_822CC8AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822cc8d0
	if (ctx.cr6.eq) goto loc_822CC8D0;
	// rlwinm r31,r11,31,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CC8D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822d1e20
	ctx.lr = 0x822CC8DC;
	sub_822D1E20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c6800
	ctx.lr = 0x822CC8E8;
	sub_822C6800(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc97c
	if (ctx.cr6.eq) goto loc_822CC97C;
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x822cc97c
	if (ctx.cr0.lt) goto loc_822CC97C;
	// addi r11,r29,142
	ctx.r11.s64 = ctx.r29.s64 + 142;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_822CC90C:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1e70
	ctx.lr = 0x822CC918;
	sub_822D1E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cc93c
	if (ctx.cr6.eq) goto loc_822CC93C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822cc94c
	if (!ctx.cr6.eq) goto loc_822CC94C;
loc_822CC93C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x822cc90c
	if (!ctx.cr0.lt) goto loc_822CC90C;
	// b 0x822cc97c
	goto loc_822CC97C;
loc_822CC94C:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r29,180(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1e08
	ctx.lr = 0x822CC95C;
	sub_822D1E08(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822cc970
	if (ctx.cr6.eq) goto loc_822CC970;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822CC970;
	sub_822C6B30(ctx, base);
loc_822CC970:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cc6d8
	ctx.lr = 0x822CC97C;
	sub_822CC6D8(ctx, base);
loc_822CC97C:
	// bl 0x8228bcc0
	ctx.lr = 0x822CC980;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc994
	if (ctx.cr6.eq) goto loc_822CC994;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82393e28
	ctx.lr = 0x822CC994;
	sub_82393E28(ctx, base);
loc_822CC994:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822d1e20
	ctx.lr = 0x822CC9A4;
	sub_822D1E20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC818) {
	__imp__sub_822CC818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC9AC) {
	__imp__sub_822CC9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CC9B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cca74
	if (ctx.cr6.eq) goto loc_822CCA74;
	// lwz r11,232(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cca74
	if (ctx.cr6.eq) goto loc_822CCA74;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8228bcc0
	ctx.lr = 0x822CC9F4;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cca08
	if (ctx.cr6.eq) goto loc_822CCA08;
	// bl 0x82393ee8
	ctx.lr = 0x822CCA04;
	sub_82393EE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822CCA08:
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822CCA18;
	sub_823DE090(ctx, base);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d1b08
	ctx.lr = 0x822CCA28;
	sub_822D1B08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x822c7b88
	ctx.lr = 0x822CCA38;
	sub_822C7B88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d1b38
	ctx.lr = 0x822CCA44;
	sub_822D1B38(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d1e20
	ctx.lr = 0x822CCA54;
	sub_822D1E20(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x822CCA58;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cca80
	if (ctx.cr6.eq) goto loc_822CCA80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393e28
	ctx.lr = 0x822CCA6C;
	sub_82393E28(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822CCA74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cc818
	ctx.lr = 0x822CCA80;
	sub_822CC818(ctx, base);
loc_822CCA80:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC9B0) {
	__imp__sub_822CC9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCA88) {
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
	// bl 0x822c6928
	ctx.lr = 0x822CCAA0;
	sub_822C6928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccab4
	if (ctx.cr6.eq) goto loc_822CCAB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc9b0
	ctx.lr = 0x822CCAB4;
	sub_822CC9B0(ctx, base);
loc_822CCAB4:
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

PPC_WEAK_FUNC(sub_822CCA88) {
	__imp__sub_822CCA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CCAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822c6928
	ctx.lr = 0x822CCADC;
	sub_822C6928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccb34
	if (ctx.cr6.eq) goto loc_822CCB34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ccb34
	if (ctx.cr6.eq) goto loc_822CCB34;
	// lwz r29,240(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ccb34
	if (ctx.cr6.eq) goto loc_822CCB34;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822CCB20;
	sub_823DE090(ctx, base);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CCB34;
	sub_822C7B88(ctx, base);
loc_822CCB34:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCAC8) {
	__imp__sub_822CCAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCB3C) {
	__imp__sub_822CCB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CCB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ccb80
	if (!ctx.cr6.gt) goto loc_822CCB80;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
loc_822CCB64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x822cc9b0
	ctx.lr = 0x822CCB70;
	sub_822CC9B0(ctx, base);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ccb64
	if (ctx.cr6.lt) goto loc_822CCB64;
loc_822CCB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCB40) {
	__imp__sub_822CCB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCB88) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,17888
	ctx.r4.s64 = ctx.r11.s64 + 17888;
	// bl 0x822c6928
	ctx.lr = 0x822CCBAC;
	sub_822C6928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccc14
	if (ctx.cr6.eq) goto loc_822CCC14;
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822ccc14
	if (ctx.cr0.lt) goto loc_822CCC14;
	// addi r10,r11,142
	ctx.r10.s64 = ctx.r11.s64 + 142;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_822CCBD0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ccbec
	if (ctx.cr6.eq) goto loc_822CCBEC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x822ccbd0
	if (!ctx.cr0.lt) goto loc_822CCBD0;
	// b 0x822ccc14
	goto loc_822CCC14;
loc_822CCBEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ccc14
	if (ctx.cr6.eq) goto loc_822CCC14;
loc_822CCBF4:
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ccc14
	if (ctx.cr6.eq) goto loc_822CCC14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc818
	ctx.lr = 0x822CCC08;
	sub_822CC818(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ccbf4
	if (!ctx.cr6.eq) goto loc_822CCBF4;
loc_822CCC14:
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

PPC_WEAK_FUNC(sub_822CCB88) {
	__imp__sub_822CCB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCC2C) {
	__imp__sub_822CCC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CCC38;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CCC54;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cccb8
	if (ctx.cr6.eq) goto loc_822CCCB8;
	// lwz r30,308(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c6140
	ctx.lr = 0x822CCC70;
	sub_822C6140(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822cccb8
	if (!ctx.cr6.gt) goto loc_822CCCB8;
loc_822CCC80:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c6270
	ctx.lr = 0x822CCC94;
	sub_822C6270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cccac
	if (ctx.cr6.eq) goto loc_822CCCAC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d1e08
	ctx.lr = 0x822CCCAC;
	sub_822D1E08(ctx, base);
loc_822CCCAC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822ccc80
	if (ctx.cr6.lt) goto loc_822CCC80;
loc_822CCCB8:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCC30) {
	__imp__sub_822CCC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCCC0) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CCCEC;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccd08
	if (ctx.cr6.eq) goto loc_822CCD08;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CCD08;
	sub_822CC4D8(ctx, base);
loc_822CCD08:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_822CCCC0) {
	__imp__sub_822CCCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCD20) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CCD4C;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccdb4
	if (ctx.cr6.eq) goto loc_822CCDB4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-11712
	ctx.r10.s64 = ctx.r10.s64 + -11712;
loc_822CCD60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822ccd84
	if (ctx.cr6.eq) goto loc_822CCD84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ccd60
	if (ctx.cr6.eq) goto loc_822CCD60;
loc_822CCD84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822ccd98
	if (!ctx.cr6.eq) goto loc_822CCD98;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// b 0x822ccdb0
	goto loc_822CCDB0;
loc_822CCD98:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c6928
	ctx.lr = 0x822CCDA0;
	sub_822C6928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccdb4
	if (ctx.cr6.eq) goto loc_822CCDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822CCDB0:
	// bl 0x822cc9b0
	ctx.lr = 0x822CCDB4;
	sub_822CC9B0(ctx, base);
loc_822CCDB4:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_822CCD20) {
	__imp__sub_822CCD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCDCC) {
	__imp__sub_822CCDCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCDD0) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CCDF4;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cce34
	if (ctx.cr6.eq) goto loc_822CCE34;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822CCE00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822CCE08;
	sub_822C10D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822c6928
	ctx.lr = 0x822CCE14;
	sub_822C6928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cce28
	if (ctx.cr6.eq) goto loc_822CCE28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc9b0
	ctx.lr = 0x822CCE28;
	sub_822CC9B0(ctx, base);
loc_822CCE28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x822cce00
	if (ctx.cr6.lt) goto loc_822CCE00;
loc_822CCE34:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_822CCDD0) {
	__imp__sub_822CCDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCE4C) {
	__imp__sub_822CCE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CCE74;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cceb0
	if (ctx.cr6.eq) goto loc_822CCEB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e03a0
	ctx.lr = 0x822CCE88;
	sub_822E03A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cceb0
	if (ctx.cr6.eq) goto loc_822CCEB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c6928
	ctx.lr = 0x822CCE9C;
	sub_822C6928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cceb0
	if (ctx.cr6.eq) goto loc_822CCEB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc9b0
	ctx.lr = 0x822CCEB0;
	sub_822CC9B0(ctx, base);
loc_822CCEB0:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CCE50) {
	__imp__sub_822CCE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCEC4) {
	__imp__sub_822CCEC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CCEEC;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccf04
	if (ctx.cr6.eq) goto loc_822CCF04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823652d8
	ctx.lr = 0x822CCF04;
	sub_823652D8(ctx, base);
loc_822CCF04:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CCEC8) {
	__imp__sub_822CCEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CCF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822CCF40;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccf5c
	if (ctx.cr6.eq) goto loc_822CCF5C;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CCF5C;
	sub_822CC4D8(ctx, base);
loc_822CCF5C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCF18) {
	__imp__sub_822CCF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCF64) {
	__imp__sub_822CCF64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CCF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,13960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13960);
	// bl 0x8223cd58
	ctx.lr = 0x822CCF90;
	sub_8223CD58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r7,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x822c5a88
	ctx.lr = 0x822CCFB4;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccfd0
	if (ctx.cr6.eq) goto loc_822CCFD0;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CCFD0;
	sub_822CC4D8(ctx, base);
loc_822CCFD0:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCF68) {
	__imp__sub_822CCF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CCFE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,13960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13960);
	// bl 0x8223cd58
	ctx.lr = 0x822CCFFC;
	sub_8223CD58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x822c5a88
	ctx.lr = 0x822CD018;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd034
	if (ctx.cr6.eq) goto loc_822CD034;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CD034;
	sub_822CC4D8(ctx, base);
loc_822CD034:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCFD8) {
	__imp__sub_822CCFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CD03C) {
	__imp__sub_822CD03C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CD048;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,13960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13960);
	// bl 0x8223cd58
	ctx.lr = 0x822CD064;
	sub_8223CD58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x822c5a88
	ctx.lr = 0x822CD084;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd0a0
	if (ctx.cr6.eq) goto loc_822CD0A0;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CD0A0;
	sub_822CC4D8(ctx, base);
loc_822CD0A0:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD040) {
	__imp__sub_822CD040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CD0B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82141340
	ctx.lr = 0x822CD0C8;
	sub_82141340(ctx, base);
	// bl 0x8213af90
	ctx.lr = 0x822CD0CC;
	sub_8213AF90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822CD0E0;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd0fc
	if (ctx.cr6.eq) goto loc_822CD0FC;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CD0FC;
	sub_822CC4D8(ctx, base);
loc_822CD0FC:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD0A8) {
	__imp__sub_822CD0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CD104) {
	__imp__sub_822CD104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CD110;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82141340
	ctx.lr = 0x822CD128;
	sub_82141340(ctx, base);
	// bl 0x8213af90
	ctx.lr = 0x822CD12C;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822c5a88
	ctx.lr = 0x822CD148;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd164
	if (ctx.cr6.eq) goto loc_822CD164;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc4d8
	ctx.lr = 0x822CD164;
	sub_822CC4D8(ctx, base);
loc_822CD164:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD108) {
	__imp__sub_822CD108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CD16C) {
	__imp__sub_822CD16C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CD178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d25d8
	ctx.lr = 0x822CD18C;
	sub_822D25D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cd19c
	if (!ctx.cr6.eq) goto loc_822CD19C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822CD19C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cd1c0
	if (!ctx.cr6.eq) goto loc_822CD1C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cd1c4
	goto loc_822CD1C4;
loc_822CD1C0:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CD1C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd204
	if (ctx.cr6.eq) goto loc_822CD204;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d2500
	ctx.lr = 0x822CD1D8;
	sub_822D2500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd204
	if (ctx.cr6.eq) goto loc_822CD204;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cd2ac
	if (ctx.cr6.eq) goto loc_822CD2AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CD1F8;
	sub_822C7B88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822CD204:
	// lwz r29,308(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822cc400
	ctx.lr = 0x822CD214;
	sub_822CC400(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x822cd234
	if (!ctx.cr6.eq) goto loc_822CD234;
	// bl 0x822d1e08
	ctx.lr = 0x822CD230;
	sub_822D1E08(ctx, base);
	// b 0x822cd250
	goto loc_822CD250;
loc_822CD234:
	// bl 0x822d1e08
	ctx.lr = 0x822CD238;
	sub_822D1E08(ctx, base);
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cd250
	if (ctx.cr6.eq) goto loc_822CD250;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CD250;
	sub_822C7B88(ctx, base);
loc_822CD250:
	// lwz r9,184(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822cd2ac
	if (!ctx.cr6.gt) goto loc_822CD2AC;
	// lwz r10,296(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
loc_822CD264:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822cd284
	if (!ctx.cr6.eq) goto loc_822CD284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c8a28
	ctx.lr = 0x822CD278;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd2a0
	if (ctx.cr6.eq) goto loc_822CD2A0;
loc_822CD284:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822cd264
	if (ctx.cr6.lt) goto loc_822CD264;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822CD2A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d1e60
	ctx.lr = 0x822CD2AC;
	sub_822D1E60(ctx, base);
loc_822CD2AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD170) {
	__imp__sub_822CD170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD2B8) {
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
	// lfs f1,368(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822c36b0
	ctx.lr = 0x822CD2D8;
	sub_822C36B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7e88
	ctx.lr = 0x822CD2E4;
	sub_822C7E88(ctx, base);
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_822CD2B8) {
	__imp__sub_822CD2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CD320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d22b0
	ctx.lr = 0x822CD334;
	sub_822D22B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cd350
	if (!ctx.cr6.eq) goto loc_822CD350;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CD350:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c36b0
	ctx.lr = 0x822CD35C;
	sub_822C36B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7e88
	ctx.lr = 0x822CD368;
	sub_822C7E88(ctx, base);
	// subf r10,r3,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r3.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,0,10,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	// subfe r4,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// and r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 & ctx.r10.u64;
	// beq cr6,0x822cd404
	if (ctx.cr6.eq) goto loc_822CD404;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cd3e0
	if (!ctx.cr6.gt) goto loc_822CD3E0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,6044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6044);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6056);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fdivs f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// b 0x822cd3e8
	goto loc_822CD3E8;
loc_822CD3E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_822CD3E8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822cd470
	goto loc_822CD470;
loc_822CD404:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cd450
	if (!ctx.cr6.gt) goto loc_822CD450;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,6044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6044);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6056);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// b 0x822cd458
	goto loc_822CD458;
loc_822CD450:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_822CD458:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_822CD470:
	// fcfid f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,-10708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10708);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f0,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD318) {
	__imp__sub_822CD318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD490) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822cd318
	sub_822CD318(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD490) {
	__imp__sub_822CD490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822CD4A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r4
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x822cd4cc
	if (!ctx.cr6.eq) goto loc_822CD4CC;
	// lwz r31,184(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// b 0x822cd4d0
	goto loc_822CD4D0;
loc_822CD4CC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822CD4D0:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// ble cr6,0x822cd52c
	if (!ctx.cr6.gt) goto loc_822CD52C;
loc_822CD4D8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822cd4f0
	if (!ctx.cr0.lt) goto loc_822CD4F0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x822cd52c
	if (ctx.cr6.lt) goto loc_822CD52C;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_822CD4F0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d1e60
	ctx.lr = 0x822CD500;
	sub_822D1E60(ctx, base);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x822cd548
	if (ctx.cr6.eq) goto loc_822CD548;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822cd170
	ctx.lr = 0x822CD51C;
	sub_822CD170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cd558
	if (!ctx.cr6.eq) goto loc_822CD558;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bgt cr6,0x822cd4d8
	if (ctx.cr6.gt) goto loc_822CD4D8;
loc_822CD52C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d1e60
	ctx.lr = 0x822CD53C;
	sub_822D1E60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822CD548:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822CD558:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD498) {
	__imp__sub_822CD498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822CD570;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r9,r4
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822cd5f4
	if (!ctx.cr6.lt) goto loc_822CD5F4;
loc_822CD59C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cd5b4
	if (ctx.cr6.lt) goto loc_822CD5B4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x822cd5f4
	if (ctx.cr6.lt) goto loc_822CD5F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CD5B4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d1e60
	ctx.lr = 0x822CD5C4;
	sub_822D1E60(ctx, base);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x822cd610
	if (ctx.cr6.eq) goto loc_822CD610;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822cd170
	ctx.lr = 0x822CD5E0;
	sub_822CD170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cd620
	if (!ctx.cr6.eq) goto loc_822CD620;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cd59c
	if (ctx.cr6.lt) goto loc_822CD59C;
loc_822CD5F4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d1e60
	ctx.lr = 0x822CD604;
	sub_822D1E60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822CD610:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822CD620:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD568) {
	__imp__sub_822CD568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CD638;
	__savegprlr_29(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d1b08
	ctx.lr = 0x822CD64C;
	sub_822D1B08(ctx, base);
	// lwz r29,228(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cd67c
	if (ctx.cr6.eq) goto loc_822CD67C;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822CD668;
	sub_823DE090(ctx, base);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CD67C;
	sub_822C7B88(ctx, base);
loc_822CD67C:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cd6a0
	if (ctx.cr6.eq) goto loc_822CD6A0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822bf690
	ctx.lr = 0x822CD690;
	sub_822BF690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823652d8
	ctx.lr = 0x822CD6A0;
	sub_823652D8(ctx, base);
loc_822CD6A0:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD630) {
	__imp__sub_822CD630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822CD6B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bl 0x8228bcc0
	ctx.lr = 0x822CD6C8;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd6dc
	if (ctx.cr6.eq) goto loc_822CD6DC;
	// bl 0x82393ee8
	ctx.lr = 0x822CD6D8;
	sub_82393EE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_822CD6DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1e70
	ctx.lr = 0x822CD6E4;
	sub_822D1E70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd724
	if (ctx.cr6.eq) goto loc_822CD724;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x822cd71c
	if (ctx.cr0.lt) goto loc_822CD71C;
	// addi r11,r29,143
	ctx.r11.s64 = ctx.r29.s64 + 143;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822CD708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,-4(r28)
	ea = -4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x822cc5d8
	ctx.lr = 0x822CD714;
	sub_822CC5D8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x822cd708
	if (!ctx.cr0.lt) goto loc_822CD708;
loc_822CD71C:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x822cd728
	goto loc_822CD728;
loc_822CD724:
	// li r5,4
	ctx.r5.s64 = 4;
loc_822CD728:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d1e08
	ctx.lr = 0x822CD734;
	sub_822D1E08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c6800
	ctx.lr = 0x822CD740;
	sub_822C6800(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x822cd75c
	if (!ctx.cr6.eq) goto loc_822CD75C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11668
	ctx.r4.s64 = ctx.r11.s64 + -11668;
	// bl 0x822830e8
	ctx.lr = 0x822CD75C;
	sub_822830E8(ctx, base);
loc_822CD75C:
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r11,142
	ctx.r11.s64 = ctx.r11.s64 + 142;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r9.u32);
	// beq cr6,0x822cd78c
	if (ctx.cr6.eq) goto loc_822CD78C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc6d8
	ctx.lr = 0x822CD78C;
	sub_822CC6D8(ctx, base);
loc_822CD78C:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cd7c0
	if (!ctx.cr6.gt) goto loc_822CD7C0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822CD7A0:
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r26,440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 440, ctx.r26.u32);
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822cd7a0
	if (ctx.cr6.lt) goto loc_822CD7A0;
loc_822CD7C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x822cd7e4
	if (!ctx.cr6.eq) goto loc_822CD7E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd568
	ctx.lr = 0x822CD7E4;
	sub_822CD568(ctx, base);
loc_822CD7E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822CD7F0;
	sub_822C6B30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d1b08
	ctx.lr = 0x822CD7FC;
	sub_822D1B08(ctx, base);
	// lwz r29,228(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cd82c
	if (ctx.cr6.eq) goto loc_822CD82C;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822CD818;
	sub_823DE090(ctx, base);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822CD82C;
	sub_822C7B88(ctx, base);
loc_822CD82C:
	// lwz r4,288(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cd850
	if (ctx.cr6.eq) goto loc_822CD850;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822bf690
	ctx.lr = 0x822CD840;
	sub_822BF690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823652d8
	ctx.lr = 0x822CD850;
	sub_823652D8(ctx, base);
loc_822CD850:
	// lwz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cd868
	if (ctx.cr6.eq) goto loc_822CD868;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823652d8
	ctx.lr = 0x822CD868;
	sub_823652D8(ctx, base);
loc_822CD868:
	// bl 0x8228bcc0
	ctx.lr = 0x822CD86C;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd880
	if (ctx.cr6.eq) goto loc_822CD880;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82393e28
	ctx.lr = 0x822CD880;
	sub_82393E28(ctx, base);
loc_822CD880:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD6A8) {
	__imp__sub_822CD6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD888) {
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
	// bl 0x822c6928
	ctx.lr = 0x822CD8A8;
	sub_822C6928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd8c4
	if (ctx.cr6.eq) goto loc_822CD8C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd6a8
	ctx.lr = 0x822CD8BC;
	sub_822CD6A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822cd8dc
	goto loc_822CD8DC;
loc_822CD8C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-10704
	ctx.r4.s64 = ctx.r11.s64 + -10704;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280c30
	ctx.lr = 0x822CD8D8;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CD8DC:
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

PPC_WEAK_FUNC(sub_822CD888) {
	__imp__sub_822CD888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CD8F4) {
	__imp__sub_822CD8F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CD900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822cbc28
	ctx.lr = 0x822CD90C;
	sub_822CBC28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd988
	if (ctx.cr6.eq) goto loc_822CD988;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cd988
	if (!ctx.cr6.gt) goto loc_822CD988;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CD92C:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r3,18
	ctx.r10.s64 = ctx.r3.s64 + 18;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822cd958
	if (!ctx.cr6.eq) goto loc_822CD958;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cd95c
	goto loc_822CD95C;
loc_822CD958:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CD95C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd974
	if (ctx.cr6.eq) goto loc_822CD974;
	// bl 0x822d2500
	ctx.lr = 0x822CD96C;
	sub_822D2500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cd994
	if (!ctx.cr6.eq) goto loc_822CD994;
loc_822CD974:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cd92c
	if (ctx.cr6.lt) goto loc_822CD92C;
loc_822CD988:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CD994:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD8F8) {
	__imp__sub_822CD8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CD9B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822cacc8
	ctx.lr = 0x822CD9CC;
	sub_822CACC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd9e8
	if (ctx.cr6.eq) goto loc_822CD9E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c41c0
	ctx.lr = 0x822CD9E0;
	sub_822C41C0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CD9E8:
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ca928
	ctx.lr = 0x822CDA00;
	sub_822CA928(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10660
	ctx.r4.s64 = ctx.r11.s64 + -10660;
	// bl 0x822e8058
	ctx.lr = 0x822CDA10;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cda34
	if (!ctx.cr6.eq) goto loc_822CDA34;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ca6c0
	ctx.lr = 0x822CDA2C;
	sub_822CA6C0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CDA34:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10676
	ctx.r4.s64 = ctx.r11.s64 + -10676;
	// bl 0x822e8058
	ctx.lr = 0x822CDA44;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cda68
	if (!ctx.cr6.eq) goto loc_822CDA68;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ca798
	ctx.lr = 0x822CDA60;
	sub_822CA798(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CDA68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// bl 0x822c4080
	ctx.lr = 0x822CDA74;
	sub_822C4080(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-29844
	ctx.r5.s64 = ctx.r10.s64 + -29844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822CDA8C;
	sub_822E8368(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD9A8) {
	__imp__sub_822CD9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CDA94) {
	__imp__sub_822CDA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x822CDAA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r24,r5,r6
	ctx.r24.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cdbd4
	if (ctx.cr6.eq) goto loc_822CDBD4;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r21,r24,-1
	ctx.r21.s64 = ctx.r24.s64 + -1;
	// addi r22,r9,-10588
	ctx.r22.s64 = ctx.r9.s64 + -10588;
loc_822CDAE8:
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x822cdbd4
	if (!ctx.cr6.lt) goto loc_822CDBD4;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x822cdb24
	if (!ctx.cr6.eq) goto loc_822CDB24;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r9,123
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 123, ctx.xer);
	// bne cr6,0x822cdb24
	if (!ctx.cr6.eq) goto loc_822CDB24;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822CDB20;
	sub_823DE090(ctx, base);
	// b 0x822cdbc4
	goto loc_822CDBC4;
loc_822CDB24:
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x822cdba4
	if (!ctx.cr6.eq) goto loc_822CDBA4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x822cdba4
	if (!ctx.cr6.eq) goto loc_822CDBA4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cdb60
	if (!ctx.cr6.eq) goto loc_822CDB60;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822CDB5C;
	sub_82280B08(ctx, base);
	// b 0x822cdbc4
	goto loc_822CDBC4;
loc_822CDB60:
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822cd9a8
	ctx.lr = 0x822CDB74;
	sub_822CD9A8(ctx, base);
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822CDB88;
	sub_822E7E98(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cdbc4
	if (ctx.cr6.eq) goto loc_822CDBC4;
loc_822CDB94:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cdb94
	if (!ctx.cr6.eq) goto loc_822CDB94;
	// b 0x822cdbc4
	goto loc_822CDBC4;
loc_822CDBA4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cdbbc
	if (ctx.cr6.eq) goto loc_822CDBBC;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x822cdbc4
	goto loc_822CDBC4;
loc_822CDBBC:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822CDBC4:
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cdae8
	if (!ctx.cr6.eq) goto loc_822CDAE8;
loc_822CDBD4:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x822cdbe0
	if (!ctx.cr6.lt) goto loc_822CDBE0;
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
loc_822CDBE0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cdc00
	if (ctx.cr6.eq) goto loc_822CDC00;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-10640
	ctx.r4.s64 = ctx.r11.s64 + -10640;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822CDC00;
	sub_82280B08(ctx, base);
loc_822CDC00:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CDA98) {
	__imp__sub_822CDA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822CDC10;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-2384(r1)
	ea = -2384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822cdc40
	if (ctx.cr6.eq) goto loc_822CDC40;
	// bl 0x822c3790
	ctx.lr = 0x822CDC3C;
	sub_822C3790(ctx, base);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
loc_822CDC40:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r27,r11,31,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822cdc94
	if (ctx.cr6.eq) goto loc_822CDC94;
	// lwz r11,3708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3708);
	// addi r30,r28,3708
	ctx.r30.s64 = ctx.r28.s64 + 3708;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cdc70
	if (!ctx.cr6.eq) goto loc_822CDC70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// bl 0x822de110
	ctx.lr = 0x822CDC70;
	sub_822DE110(ctx, base);
loc_822CDC70:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cdc94
	if (ctx.cr6.eq) goto loc_822CDC94;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x822ca4c8
	ctx.lr = 0x822CDC8C;
	sub_822CA4C8(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_822CDC94:
	// lwz r30,300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cdd14
	if (ctx.cr6.eq) goto loc_822CDD14;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x822cddf8
	if (ctx.cr6.eq) goto loc_822CDDF8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822CDCB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cdcb0
	if (!ctx.cr6.eq) goto loc_822CDCB0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822caa40
	ctx.lr = 0x822CDCD4;
	sub_822CAA40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cddf8
	if (!ctx.cr6.eq) goto loc_822CDDF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-25308
	ctx.r3.s64 = ctx.r11.s64 + -25308;
	// bl 0x822e0338
	ctx.lr = 0x822CDCEC;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cddf8
	if (ctx.cr6.eq) goto loc_822CDDF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-13092
	ctx.r5.s64 = ctx.r11.s64 + -13092;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e8368
	ctx.lr = 0x822CDD10;
	sub_822E8368(ctx, base);
	// b 0x822cddf4
	goto loc_822CDDF4;
loc_822CDD14:
	// lwz r4,412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cddd4
	if (ctx.cr6.eq) goto loc_822CDDD4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822bf690
	ctx.lr = 0x822CDD28;
	sub_822BF690(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-25308
	ctx.r29.s64 = ctx.r11.s64 + -25308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e0338
	ctx.lr = 0x822CDD3C;
	sub_822E0338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cddf8
	if (ctx.cr6.eq) goto loc_822CDDF8;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822caae0
	ctx.lr = 0x822CDD58;
	sub_822CAAE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cddf4
	if (!ctx.cr6.eq) goto loc_822CDDF4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x822cddf8
	if (ctx.cr6.eq) goto loc_822CDDF8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822CDD74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cdd74
	if (!ctx.cr6.eq) goto loc_822CDD74;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822caa40
	ctx.lr = 0x822CDD98;
	sub_822CAA40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cddf8
	if (!ctx.cr6.eq) goto loc_822CDDF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e0338
	ctx.lr = 0x822CDDAC;
	sub_822E0338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cddf8
	if (ctx.cr6.eq) goto loc_822CDDF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-13092
	ctx.r5.s64 = ctx.r11.s64 + -13092;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e8368
	ctx.lr = 0x822CDDD0;
	sub_822E8368(ctx, base);
	// b 0x822cddf4
	goto loc_822CDDF4;
loc_822CDDD4:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce0f0
	if (ctx.cr6.eq) goto loc_822CE0F0;
	// bl 0x822e0578
	ctx.lr = 0x822CDDE4;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822CDDF4;
	sub_822E7E98(ctx, base);
loc_822CDDF4:
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
loc_822CDDF8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x822cde10
	if (!ctx.cr6.eq) goto loc_822CDE10;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x822c4080
	ctx.lr = 0x822CDE0C;
	sub_822C4080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822CDE10:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ce0f0
	if (ctx.cr6.eq) goto loc_822CE0F0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822cda98
	ctx.lr = 0x822CDE30;
	sub_822CDA98(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c9498
	ctx.lr = 0x822CDE40;
	sub_822C9498(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lfs f31,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d1808
	ctx.lr = 0x822CDE50;
	sub_822D1808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cde78
	if (ctx.cr6.eq) goto loc_822CDE78;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r11,300
	ctx.r5.s64 = ctx.r11.s64 + 300;
	// bl 0x822d1720
	ctx.lr = 0x822CDE74;
	sub_822D1720(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_822CDE78:
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c9180
	ctx.lr = 0x822CDE88;
	sub_822C9180(ctx, base);
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cdedc
	if (ctx.cr6.eq) goto loc_822CDEDC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x820f7c00
	ctx.lr = 0x822CDE9C;
	sub_820F7C00(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cdeb0
	if (ctx.cr6.eq) goto loc_822CDEB0;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822cdeb4
	if (!ctx.cr6.gt) goto loc_822CDEB4;
loc_822CDEB0:
	// stw r3,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r3.u32);
loc_822CDEB4:
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x822b7e60
	ctx.lr = 0x822CDEBC;
	sub_822B7E60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r9,r31,456
	ctx.r9.s64 = ctx.r31.s64 + 456;
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r7,444(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r6,440(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82125e88
	ctx.lr = 0x822CDEDC;
	sub_82125E88(ctx, base);
loc_822CDEDC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822cdf24
	if (ctx.cr6.eq) goto loc_822CDF24;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r11,17232
	ctx.r8.s64 = ctx.r11.s64 + 17232;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ca150
	ctx.lr = 0x822CDF10;
	sub_822CA150(ctx, base);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
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
loc_822CDF24:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f30,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f30.f64 = double(temp.f32);
	// lwz r29,268(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82141160
	ctx.lr = 0x822CDF44;
	sub_82141160(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822c2068
	ctx.lr = 0x822CDF50;
	sub_822C2068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f30,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f29,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822cdff4
	if (ctx.cr6.eq) goto loc_822CDFF4;
	// lwz r26,288(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lbz r25,21(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// bl 0x82141160
	ctx.lr = 0x822CDF78;
	sub_82141160(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r8,r10,17232
	ctx.r8.s64 = ctx.r10.s64 + 17232;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r27,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r27.u8);
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stb r7,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r7.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x822c1db0
	ctx.lr = 0x822CDFE0;
	sub_822C1DB0(ctx, base);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
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
loc_822CDFF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822ce0ac
	if (ctx.cr6.eq) goto loc_822CE0AC;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r26,452(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r25,448(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r21,r31,420
	ctx.r21.s64 = ctx.r31.s64 + 420;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r24,444(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r23,440(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r22,288(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lbz r20,21(r31)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r19,20(r31)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r31,44(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r30,40(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x82141160
	ctx.lr = 0x822CE03C;
	sub_82141160(ctx, base);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stb r8,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r8.u8);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r27,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r27.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// bl 0x822c1db0
	ctx.lr = 0x822CE098;
	sub_822C1DB0(ctx, base);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
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
loc_822CE0AC:
	// lwz r27,288(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lbz r26,21(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// bl 0x82141160
	ctx.lr = 0x822CE0BC;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x822CE0F0;
	sub_822C1CE8(ctx, base);
loc_822CE0F0:
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
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

PPC_WEAK_FUNC(sub_822CDC08) {
	__imp__sub_822CDC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE104) {
	__imp__sub_822CE104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822CE110;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d2300
	ctx.lr = 0x822CE130;
	sub_822D2300(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce4d0
	if (ctx.cr6.eq) goto loc_822CE4D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CE148;
	sub_822CDC08(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// beq cr6,0x822ce200
	if (ctx.cr6.eq) goto loc_822CE200;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x822ce198
	if (!ctx.cr6.eq) goto loc_822CE198;
	// bl 0x822e0220
	ctx.lr = 0x822CE16C;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce200
	if (ctx.cr6.eq) goto loc_822CE200;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822ce200
	if (!ctx.cr6.eq) goto loc_822CE200;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82282f20
	ctx.lr = 0x822CE194;
	sub_82282F20(ctx, base);
	// b 0x822ce200
	goto loc_822CE200;
loc_822CE198:
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x822ce1ec
	if (!ctx.cr6.eq) goto loc_822CE1EC;
	// bl 0x822e0578
	ctx.lr = 0x822CE1A4;
	sub_822E0578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822CE1A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ce1a8
	if (!ctx.cr6.eq) goto loc_822CE1A8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,1022
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1022, ctx.xer);
	// ble cr6,0x822ce1d0
	if (!ctx.cr6.gt) goto loc_822CE1D0;
	// li r30,1022
	ctx.r30.s64 = 1022;
loc_822CE1D0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823de090
	ctx.lr = 0x822CE1E0;
	sub_823DE090(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stbx r28,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u8);
	// b 0x822ce200
	goto loc_822CE200;
loc_822CE1EC:
	// bl 0x822e0578
	ctx.lr = 0x822CE1F0;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822CE200;
	sub_822E7E98(ctx, base);
loc_822CE200:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c9180
	ctx.lr = 0x822CE210;
	sub_822C9180(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ce238
	if (!ctx.cr6.eq) goto loc_822CE238;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x822ce23c
	goto loc_822CE23C;
loc_822CE238:
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_822CE23C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ce2d8
	if (ctx.cr6.eq) goto loc_822CE2D8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,75
	ctx.r9.s64 = 75;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// divw r7,r10,r9
	ctx.r7.s32 = ctx.r10.s32 / ctx.r9.s32;
	// lfs f12,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r11,264
	ctx.r30.s64 = ctx.r11.s64 + 264;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f10,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f0,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// bl 0x823de720
	ctx.lr = 0x822CE2A8;
	sub_823DE720(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// bl 0x822c59c8
	ctx.lr = 0x822CE2D4;
	sub_822C59C8(ctx, base);
	// b 0x822ce300
	goto loc_822CE300;
loc_822CE2D8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r8,r31,92
	ctx.r8.s64 = ctx.r31.s64 + 92;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
loc_822CE300:
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lfs f31,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822d1808
	ctx.lr = 0x822CE310;
	sub_822D1808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ce338
	if (ctx.cr6.eq) goto loc_822CE338;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r11,300
	ctx.r5.s64 = ctx.r11.s64 + 300;
	// bl 0x822d1720
	ctx.lr = 0x822CE334;
	sub_822D1720(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_822CE338:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ce354
	if (ctx.cr6.eq) goto loc_822CE354;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x822ce358
	if (!ctx.cr6.eq) goto loc_822CE358;
loc_822CE354:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822CE358:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,28(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f11,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f9,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// fadds f30,f10,f9
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// beq cr6,0x822ce3b0
	if (ctx.cr6.eq) goto loc_822CE3B0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x822ce3b8
	goto loc_822CE3B8;
loc_822CE3B0:
	// lis r26,32767
	ctx.r26.s64 = 2147418112;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
loc_822CE3B8:
	// lfs f29,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f29.f64 = double(temp.f32);
	// lwz r27,268(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x82141160
	ctx.lr = 0x822CE3C4;
	sub_82141160(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822c2068
	ctx.lr = 0x822CE3D0;
	sub_822C2068(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,15492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15492);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ce488
	if (!ctx.cr6.eq) goto loc_822CE488;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,15484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ce488
	if (ctx.cr6.eq) goto loc_822CE488;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8212e878
	ctx.lr = 0x822CE3FC;
	sub_8212E878(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lwz r29,28(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lfs f29,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r11,93
	ctx.r9.s64 = ctx.r11.s64 + 93;
	// lwz r25,288(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r24,21(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r23,20(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r10,r8,0,30,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r30,r10,124
	ctx.r30.s64 = ctx.r10.s64 + 124;
	// lwzx r31,r7,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x82141160
	ctx.lr = 0x822CE438;
	sub_82141160(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r30,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r30.u8);
	// bl 0x822c1f90
	ctx.lr = 0x822CE474;
	sub_822C1F90(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822CE488:
	// lfs f29,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// lbz r25,193(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 193);
	// lwz r31,288(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lbz r30,192(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82141160
	ctx.lr = 0x822CE4A0;
	sub_82141160(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x822CE4D0;
	sub_822C1CE8(ctx, base);
loc_822CE4D0:
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE108) {
	__imp__sub_822CE108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE4E4) {
	__imp__sub_822CE4E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE4E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,344(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce538
	if (ctx.cr6.eq) goto loc_822CE538;
	// bl 0x822e0578
	ctx.lr = 0x822CE514;
	sub_822E0578(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x822CE518;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822ce538
	if (ctx.cr6.eq) goto loc_822CE538;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-10548
	ctx.r3.s64 = ctx.r11.s64 + -10548;
	// b 0x822ce540
	goto loc_822CE540;
loc_822CE538:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
loc_822CE540:
	// bl 0x822c4080
	ctx.lr = 0x822CE544;
	sub_822C4080(ctx, base);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CE554;
	sub_822CDC08(ctx, base);
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

PPC_WEAK_FUNC(sub_822CE4E8) {
	__imp__sub_822CE4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE56C) {
	__imp__sub_822CE56C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE570) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822c8528
	ctx.lr = 0x822CE594;
	sub_822C8528(ctx, base);
	// stw r3,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CE5A4;
	sub_822CDC08(ctx, base);
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

PPC_WEAK_FUNC(sub_822CE570) {
	__imp__sub_822CE570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE5BC) {
	__imp__sub_822CE5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE5C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822c86d0
	ctx.lr = 0x822CE5E4;
	sub_822C86D0(ctx, base);
	// stw r3,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CE5F4;
	sub_822CDC08(ctx, base);
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

PPC_WEAK_FUNC(sub_822CE5C0) {
	__imp__sub_822CE5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE60C) {
	__imp__sub_822CE60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE610) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,15480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ce65c
	if (ctx.cr6.eq) goto loc_822CE65C;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,15488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15488);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822ce65c
	if (!ctx.cr6.eq) goto loc_822CE65C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-10540
	ctx.r10.s64 = ctx.r11.s64 + -10540;
	// stw r10,300(r4)
	PPC_STORE_U32(ctx.r4.u32 + 300, ctx.r10.u32);
	// b 0x822ce67c
	goto loc_822CE67C;
loc_822CE65C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822cacc8
	ctx.lr = 0x822CE674;
	sub_822CACC8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_822CE67C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CE688;
	sub_822CDC08(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822CE610) {
	__imp__sub_822CE610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE6AC) {
	__imp__sub_822CE6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822CE6B8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de024
	ctx.lr = 0x822CE6C0;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x822d22b0
	ctx.lr = 0x822CE6D4;
	sub_822D22B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ced6c
	if (ctx.cr6.eq) goto loc_822CED6C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// bl 0x82141160
	ctx.lr = 0x822CE6EC;
	sub_82141160(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,368(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c36b0
	ctx.lr = 0x822CE6FC;
	sub_822C36B0(ctx, base);
	// lwz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ce984
	if (ctx.cr6.eq) goto loc_822CE984;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,14296
	ctx.r29.s64 = ctx.r11.s64 + 14296;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lfs f31,6056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6056);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f30,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fadds f28,f11,f30
	ctx.f28.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fsubs f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fsubs f29,f10,f30
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822b7f70
	ctx.lr = 0x822CE770;
	sub_822B7F70(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f9,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f0,7932(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f13,6044(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6044);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// fsubs f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fadds f3,f27,f30
	ctx.f3.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x822b7f70
	ctx.lr = 0x822CE7B8;
	sub_822B7F70(ctx, base);
	// fsubs f8,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fadds f28,f8,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822b7f70
	ctx.lr = 0x822CE7EC;
	sub_822B7F70(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822cd318
	ctx.lr = 0x822CE7F8;
	sub_822CD318(ctx, base);
	// fsubs f7,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f0,f7,f30
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822ce80c
	if (!ctx.cr6.gt) goto loc_822CE80C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_822CE80C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b7f70
	ctx.lr = 0x822CE834;
	sub_822B7F70(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lfs f28,5488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r6.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fsubs f27,f0,f28
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x822ced6c
	if (!ctx.cr6.eq) goto loc_822CED6C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f29,f13,f30
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lwzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x822ced6c
	if (!ctx.cr6.lt) goto loc_822CED6C;
loc_822CE88C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f1,368(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c3718
	ctx.lr = 0x822CE898;
	sub_822C3718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce8d4
	if (ctx.cr6.eq) goto loc_822CE8D4;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// fsubs f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fsubs f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fadds f2,f29,f30
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x822b7f70
	ctx.lr = 0x822CE8D4;
	sub_822B7F70(ctx, base);
loc_822CE8D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822ce920
	if (!ctx.cr6.eq) goto loc_822CE920;
	// addi r11,r26,124
	ctx.r11.s64 = ctx.r26.s64 + 124;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lfs f5,64(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fsubs f4,f0,f30
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fsubs f3,f13,f30
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c1980
	ctx.lr = 0x822CE920;
	sub_822C1980(ctx, base);
loc_822CE920:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x822ce968
	if (ctx.cr6.lt) goto loc_822CE968;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// blt cr6,0x822ce88c
	if (ctx.cr6.lt) goto loc_822CE88C;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CE964;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CE968:
	// li r11,32
	ctx.r11.s64 = 32;
	// fctiwz f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CE980;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CE984:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822c3650
	ctx.lr = 0x822CE990;
	sub_822C3650(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x822cead8
	if (!ctx.cr6.eq) goto loc_822CEAD8;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f28,f11,f31
	ctx.f28.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// addi r29,r11,14296
	ctx.r29.s64 = ctx.r11.s64 + 14296;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f30,6056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6056);
	ctx.f30.f64 = double(temp.f32);
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lwz r11,14296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14296);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fsubs f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fsubs f29,f10,f31
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822b7f70
	ctx.lr = 0x822CE9F8;
	sub_822B7F70(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lfs f0,7932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,6044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6044);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// fsubs f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fadds f4,f27,f31
	ctx.f4.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b7f70
	ctx.lr = 0x822CEA58;
	sub_822B7F70(ctx, base);
	// fsubs f8,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fadds f28,f8,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x822b7f70
	ctx.lr = 0x822CEA8C;
	sub_822B7F70(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822cd318
	ctx.lr = 0x822CEA98;
	sub_822CD318(ctx, base);
	// fsubs f7,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fsubs f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822ceab0
	if (!ctx.cr6.gt) goto loc_822CEAB0;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_822CEAB0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b7f70
	ctx.lr = 0x822CEAD8;
	sub_822B7F70(ctx, base);
loc_822CEAD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fsubs f27,f0,f28
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x822cec0c
	if (!ctx.cr6.eq) goto loc_822CEC0C;
	// lwzx r29,r5,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// fadds f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f30,f13,f31
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x822ced6c
	if (!ctx.cr6.lt) goto loc_822CED6C;
loc_822CEB30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f1,368(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c3718
	ctx.lr = 0x822CEB3C;
	sub_822C3718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ceb78
	if (ctx.cr6.eq) goto loc_822CEB78;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fsubs f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// fadds f2,f30,f31
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fadds f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// bl 0x822b7f70
	ctx.lr = 0x822CEB78;
	sub_822B7F70(ctx, base);
loc_822CEB78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822cebc4
	if (!ctx.cr6.eq) goto loc_822CEBC4;
	// addi r11,r26,124
	ctx.r11.s64 = ctx.r26.s64 + 124;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f5,64(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fsubs f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fsubs f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822c1980
	ctx.lr = 0x822CEBC4;
	sub_822C1980(ctx, base);
loc_822CEBC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x822ced5c
	if (ctx.cr6.lt) goto loc_822CED5C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822ceb30
	if (ctx.cr6.lt) goto loc_822CEB30;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CEC08;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CEC0C:
	// lwzx r27,r5,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// fadds f30,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x822ced6c
	if (!ctx.cr6.lt) goto loc_822CED6C;
loc_822CEC20:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822cb4a8
	ctx.lr = 0x822CEC38;
	sub_822CB4A8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r3,93
	ctx.r11.s64 = ctx.r3.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822cec60
	if (!ctx.cr6.eq) goto loc_822CEC60;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822cb560
	ctx.lr = 0x822CEC60;
	sub_822CB560(ctx, base);
loc_822CEC60:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cece0
	if (!ctx.cr6.gt) goto loc_822CECE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
loc_822CEC74:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwzu r11,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// bl 0x822cb198
	ctx.lr = 0x822CECCC;
	sub_822CB198(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822cec74
	if (ctx.cr6.lt) goto loc_822CEC74;
	// b 0x822ced10
	goto loc_822CED10;
loc_822CECE0:
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lfs f4,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822cb198
	ctx.lr = 0x822CED10;
	sub_822CB198(ctx, base);
loc_822CED10:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x822ced5c
	if (ctx.cr6.lt) goto loc_822CED5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// blt cr6,0x822cec20
	if (ctx.cr6.lt) goto loc_822CEC20;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CED58;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CED5C:
	// fsubs f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// li r11,32
	ctx.r11.s64 = 32;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
loc_822CED6C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CED78;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE6B0) {
	__imp__sub_822CE6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CED7C) {
	__imp__sub_822CED7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CED88;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r28,308(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,220(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,212(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r5,r8,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r7,r5,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822cee34
	if (ctx.cr6.eq) goto loc_822CEE34;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822cee34
	if (!ctx.cr6.gt) goto loc_822CEE34;
	// lwz r10,208(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// rlwinm r9,r5,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r8.u32);
	// beq cr6,0x822cee18
	if (ctx.cr6.eq) goto loc_822CEE18;
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,104(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x822cee34
	if (ctx.cr6.gt) goto loc_822CEE34;
	// rlwinm r5,r5,0,30,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r5,r5,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// b 0x822cee34
	goto loc_822CEE34;
loc_822CEE18:
	// lfs f12,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,104(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x822cee34
	if (ctx.cr6.lt) goto loc_822CEE34;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// rlwinm r5,r5,0,27,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_822CEE34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822d1df8
	ctx.lr = 0x822CEE40;
	sub_822D1DF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cee8c
	if (!ctx.cr6.eq) goto loc_822CEE8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cee90
	goto loc_822CEE90;
loc_822CEE8C:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CEE90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ceecc
	if (ctx.cr6.eq) goto loc_822CEECC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,75
	ctx.r10.s64 = 75;
	// lfs f13,264(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r28,264
	ctx.r30.s64 = ctx.r28.s64 + 264;
	// divw r8,r11,r10
	ctx.r8.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lfs f12,268(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,272(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f10,276(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f9,208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// b 0x822cef14
	goto loc_822CEF14;
loc_822CEECC:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822cef74
	if (!ctx.cr6.eq) goto loc_822CEF74;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822cef74
	if (!ctx.cr6.eq) goto loc_822CEF74;
	// li r10,75
	ctx.r10.s64 = 75;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// divw r8,r11,r10
	ctx.r8.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f9,208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
loc_822CEF14:
	// fcfid f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f4,220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// bl 0x823de720
	ctx.lr = 0x822CEF48;
	sub_823DE720(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// bl 0x822c59c8
	ctx.lr = 0x822CEF74;
	sub_822C59C8(ctx, base);
loc_822CEF74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822c7df8
	ctx.lr = 0x822CEF80;
	sub_822C7DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cefb4
	if (ctx.cr6.eq) goto loc_822CEFB4;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r8,r31,156
	ctx.r8.s64 = ctx.r31.s64 + 156;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
loc_822CEFB4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f30,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,268(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x82141160
	ctx.lr = 0x822CEFC4;
	sub_82141160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822c2068
	ctx.lr = 0x822CEFD0;
	sub_822C2068(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf148
	if (ctx.cr6.eq) goto loc_822CF148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CEFEC;
	sub_822CDC08(ctx, base);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r5,20
	ctx.r5.s64 = 20;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x822cf0bc
	if (ctx.cr6.eq) goto loc_822CF0BC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// bl 0x823de1f0
	ctx.lr = 0x822CF034;
	sub_823DE1F0(ctx, base);
	// lfs f0,184(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r7,288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f8,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f7,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f7.f64 = double(temp.f32);
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lfs f6,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f0,6016(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x822c5710
	ctx.lr = 0x822CF0AC;
	sub_822C5710(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CF0BC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// bl 0x823de1f0
	ctx.lr = 0x822CF0CC;
	sub_823DE1F0(ctx, base);
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,184(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f13,176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lfs f8,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f7.f64 = double(temp.f32);
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lfs f6,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822c5710
	ctx.lr = 0x822CF138;
	sub_822C5710(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CF148:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// bl 0x823de1f0
	ctx.lr = 0x822CF16C;
	sub_823DE1F0(ctx, base);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f8,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f7,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfs f6,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f5,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x822c5710
	ctx.lr = 0x822CF1D0;
	sub_822C5710(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CED80) {
	__imp__sub_822CED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822CF1E8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de024
	ctx.lr = 0x822CF1F0;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwz r26,308(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 308);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cf234
	if (ctx.cr6.eq) goto loc_822CF234;
	// bl 0x822c2ba0
	ctx.lr = 0x822CF214;
	sub_822C2BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x822cf230
	if (!ctx.cr6.eq) goto loc_822CF230;
	// bl 0x822d1e20
	ctx.lr = 0x822CF22C;
	sub_822D1E20(ctx, base);
	// b 0x822cf234
	goto loc_822CF234;
loc_822CF230:
	// bl 0x822d1e08
	ctx.lr = 0x822CF234;
	sub_822D1E08(ctx, base);
loc_822CF234:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822d2500
	ctx.lr = 0x822CF240;
	sub_822D2500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf2a4
	if (!ctx.cr6.eq) goto loc_822CF2A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cf26c
	if (!ctx.cr6.eq) goto loc_822CF26C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822cf270
	goto loc_822CF270;
loc_822CF26C:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_822CF270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf728
	if (ctx.cr6.eq) goto loc_822CF728;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cc400
	ctx.lr = 0x822CF288;
	sub_822CC400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cd568
	ctx.lr = 0x822CF294;
	sub_822CD568(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF2A0;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF2A4:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf3fc
	if (ctx.cr6.eq) goto loc_822CF3FC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822CF2B8:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822bf870
	ctx.lr = 0x822CF2D0;
	sub_822BF870(ctx, base);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// bgt cr6,0x822cf3e8
	if (ctx.cr6.gt) goto loc_822CF3E8;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3344
	ctx.r12.s64 = ctx.r12.s64 + -3344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_822CF33C;
	case 1:
		goto loc_822CF350;
	case 2:
		goto loc_822CF364;
	case 3:
		goto loc_822CF36C;
	case 4:
		goto loc_822CF374;
	case 5:
		goto loc_822CF37C;
	case 6:
		goto loc_822CF38C;
	case 7:
		goto loc_822CF384;
	case 8:
		goto loc_822CF394;
	case 9:
		goto loc_822CF39C;
	case 10:
		goto loc_822CF3A4;
	case 11:
		goto loc_822CF3B4;
	case 12:
		goto loc_822CF3AC;
	case 13:
		goto loc_822CF3BC;
	case 14:
		goto loc_822CF3C4;
	case 15:
		goto loc_822CF3CC;
	case 16:
		goto loc_822CF3DC;
	case 17:
		goto loc_822CF3D4;
	case 18:
		goto loc_822CF3E4;
	default:
		return;
	}
	// lwz r17,-3268(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3268);
	// lwz r17,-3248(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3248);
	// lwz r17,-3228(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3228);
	// lwz r17,-3220(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3220);
	// lwz r17,-3212(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3212);
	// lwz r17,-3204(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3204);
	// lwz r17,-3188(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3188);
	// lwz r17,-3196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3196);
	// lwz r17,-3180(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3180);
	// lwz r17,-3172(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3172);
	// lwz r17,-3164(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3164);
	// lwz r17,-3148(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3148);
	// lwz r17,-3156(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3156);
	// lwz r17,-3140(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3140);
	// lwz r17,-3132(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3132);
	// lwz r17,-3124(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3124);
	// lwz r17,-3108(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3108);
	// lwz r17,-3116(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3116);
	// lwz r17,-3100(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -3100);
loc_822CF33C:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF350:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF364:
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF36C:
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF374:
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF37C:
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF384:
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f1,96(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
loc_822CF38C:
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF394:
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF39C:
	// stfs f1,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3A4:
	// stfs f1,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3AC:
	// stfs f1,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f1,424(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
loc_822CF3B4:
	// stfs f1,428(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3BC:
	// stfs f1,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3C4:
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3CC:
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3D4:
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f1,112(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_822CF3DC:
	// stfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// b 0x822cf3e8
	goto loc_822CF3E8;
loc_822CF3E4:
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
loc_822CF3E8:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822cf2b8
	if (!ctx.cr6.eq) goto loc_822CF2B8;
loc_822CF3FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// bl 0x822d1808
	ctx.lr = 0x822CF414;
	sub_822D1808(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cf43c
	if (ctx.cr6.eq) goto loc_822CF43C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r11,300
	ctx.r5.s64 = ctx.r11.s64 + 300;
	// bl 0x822d1720
	ctx.lr = 0x822CF438;
	sub_822D1720(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_822CF43C:
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822d1820
	ctx.lr = 0x822CF44C;
	sub_822D1820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf474
	if (ctx.cr6.eq) goto loc_822CF474;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r11,412
	ctx.r5.s64 = ctx.r11.s64 + 412;
	// bl 0x822d1720
	ctx.lr = 0x822CF470;
	sub_822D1720(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_822CF474:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822cf48c
	if (!ctx.cr6.eq) goto loc_822CF48C;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x822e04f8
	ctx.lr = 0x822CF488;
	sub_822E04F8(ctx, base);
	// b 0x822cf4a0
	goto loc_822CF4A0;
loc_822CF48C:
	// lwz r4,416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf4c8
	if (ctx.cr6.eq) goto loc_822CF4C8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822bf690
	ctx.lr = 0x822CF4A0;
	sub_822BF690(ctx, base);
loc_822CF4A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e7e98
	ctx.lr = 0x822CF4B0;
	sub_822E7E98(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8188
	ctx.lr = 0x822CF4B8;
	sub_822E8188(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x8238bd98
	ctx.lr = 0x822CF4C4;
	sub_8238BD98(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
loc_822CF4C8:
	// lwz r11,208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f5,212(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfs f4,220(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,216(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822c5c18
	ctx.lr = 0x822CF504;
	sub_822C5C18(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// lwz r11,3932(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3932);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cf574
	if (ctx.cr6.eq) goto loc_822CF574;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822c8ed0
	ctx.lr = 0x822CF524;
	sub_822C8ED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r30,17(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lbz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x822CF548;
	sub_82141160(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r7,r10,-2264
	ctx.r7.s64 = ctx.r10.s64 + -2264;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x822c1980
	ctx.lr = 0x822CF574;
	sub_822C1980(ctx, base);
loc_822CF574:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822cf728
	if (ctx.cr6.eq) goto loc_822CF728;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x822cf728
	if (ctx.cr6.gt) goto loc_822CF728;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2652
	ctx.r12.s64 = ctx.r12.s64 + -2652;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822CF71C;
	case 1:
		goto loc_822CF71C;
	case 2:
		goto loc_822CF728;
	case 3:
		goto loc_822CF728;
	case 4:
		goto loc_822CF620;
	case 5:
		goto loc_822CF728;
	case 6:
		goto loc_822CF63C;
	case 7:
		goto loc_822CF728;
	case 8:
		goto loc_822CF604;
	case 9:
		goto loc_822CF620;
	case 10:
		goto loc_822CF6C8;
	case 11:
		goto loc_822CF658;
	case 12:
		goto loc_822CF674;
	case 13:
		goto loc_822CF690;
	case 14:
		goto loc_822CF6AC;
	case 15:
		goto loc_822CF728;
	case 16:
		goto loc_822CF620;
	case 17:
		goto loc_822CF620;
	case 18:
		goto loc_822CF620;
	case 19:
		goto loc_822CF6E4;
	case 20:
		goto loc_822CF700;
	case 21:
		goto loc_822CF71C;
	case 22:
		goto loc_822CF620;
	case 23:
		goto loc_822CF620;
	default:
		return;
	}
	// lwz r17,-2276(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2276);
	// lwz r17,-2276(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2276);
	// lwz r17,-2264(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2264);
	// lwz r17,-2264(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2264);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
	// lwz r17,-2264(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2264);
	// lwz r17,-2500(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2500);
	// lwz r17,-2264(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2264);
	// lwz r17,-2556(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2556);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
	// lwz r17,-2360(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2360);
	// lwz r17,-2472(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2472);
	// lwz r17,-2444(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2444);
	// lwz r17,-2416(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2416);
	// lwz r17,-2388(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2388);
	// lwz r17,-2264(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2264);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
	// lwz r17,-2332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2332);
	// lwz r17,-2304(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2304);
	// lwz r17,-2276(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2276);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
	// lwz r17,-2528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + -2528);
loc_822CF604:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ced80
	ctx.lr = 0x822CF610;
	sub_822CED80(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF61C;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF620:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce108
	ctx.lr = 0x822CF62C;
	sub_822CE108(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF638;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF63C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce6b0
	ctx.lr = 0x822CF648;
	sub_822CE6B0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF654;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF658:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce4e8
	ctx.lr = 0x822CF664;
	sub_822CE4E8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF670;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF674:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce570
	ctx.lr = 0x822CF680;
	sub_822CE570(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF68C;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF690:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce5c0
	ctx.lr = 0x822CF69C;
	sub_822CE5C0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF6A8;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF6AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce610
	ctx.lr = 0x822CF6B8;
	sub_822CE610(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF6C4;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF6C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cade0
	ctx.lr = 0x822CF6D4;
	sub_822CADE0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF6E0;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF6E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cb6f0
	ctx.lr = 0x822CF6F0;
	sub_822CB6F0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF6FC;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF700:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cb918
	ctx.lr = 0x822CF70C;
	sub_822CB918(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF718;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822CF71C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cdc08
	ctx.lr = 0x822CF728;
	sub_822CDC08(ctx, base);
loc_822CF728:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x822CF734;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CF1E0) {
	__imp__sub_822CF1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822CF740;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x822cbea8
	ctx.lr = 0x822CF760;
	sub_822CBEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cf784
	if (!ctx.cr6.eq) goto loc_822CF784;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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
loc_822CF784:
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf79c
	if (ctx.cr6.eq) goto loc_822CF79C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823652d8
	ctx.lr = 0x822CF79C;
	sub_823652D8(ctx, base);
loc_822CF79C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822cf7b4
	if (ctx.cr6.eq) goto loc_822CF7B4;
	// bl 0x82140de8
	ctx.lr = 0x822CF7B0;
	sub_82140DE8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_822CF7B4:
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf7cc
	if (ctx.cr6.eq) goto loc_822CF7CC;
	// bl 0x822bf870
	ctx.lr = 0x822CF7C8;
	sub_822BF870(ctx, base);
	// b 0x822cf7f8
	goto loc_822CF7F8;
loc_822CF7CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1838
	ctx.lr = 0x822CF7D4;
	sub_822D1838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf7fc
	if (ctx.cr6.eq) goto loc_822CF7FC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,524
	ctx.r5.s64 = ctx.r11.s64 + 524;
	// bl 0x822d1720
	ctx.lr = 0x822CF7F8;
	sub_822D1720(ctx, base);
loc_822CF7F8:
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_822CF7FC:
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf814
	if (ctx.cr6.eq) goto loc_822CF814;
	// bl 0x822bf870
	ctx.lr = 0x822CF810;
	sub_822BF870(ctx, base);
	// b 0x822cf840
	goto loc_822CF840;
loc_822CF814:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1850
	ctx.lr = 0x822CF81C;
	sub_822D1850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf844
	if (ctx.cr6.eq) goto loc_822CF844;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,636
	ctx.r5.s64 = ctx.r11.s64 + 636;
	// bl 0x822d1720
	ctx.lr = 0x822CF840;
	sub_822D1720(ctx, base);
loc_822CF840:
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_822CF844:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822d2198
	ctx.lr = 0x822CF850;
	sub_822D2198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// bl 0x822d1808
	ctx.lr = 0x822CF868;
	sub_822D1808(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cf890
	if (ctx.cr6.eq) goto loc_822CF890;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,300
	ctx.r5.s64 = ctx.r11.s64 + 300;
	// bl 0x822d1720
	ctx.lr = 0x822CF88C;
	sub_822D1720(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_822CF890:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x822d1820
	ctx.lr = 0x822CF8A0;
	sub_822D1820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf8c8
	if (ctx.cr6.eq) goto loc_822CF8C8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,412
	ctx.r5.s64 = ctx.r11.s64 + 412;
	// bl 0x822d1720
	ctx.lr = 0x822CF8C4;
	sub_822D1720(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_822CF8C8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82141160
	ctx.lr = 0x822CF8D0;
	sub_82141160(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf91c
	if (ctx.cr6.eq) goto loc_822CF91C;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf91c
	if (ctx.cr6.eq) goto loc_822CF91C;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,4376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4376);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,4452(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4452);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822b7f70
	ctx.lr = 0x822CF91C;
	sub_822B7F70(ctx, base);
loc_822CF91C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f5,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfs f4,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f3,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822c5c18
	ctx.lr = 0x822CF958;
	sub_822C5C18(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf9d0
	if (ctx.cr6.eq) goto loc_822CF9D0;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// dcbt r0,r9
	// addic. r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x822cf9b8
	if (!ctx.cr0.gt) goto loc_822CF9B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822CF980:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// dcbt r0,r10
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822cf1e0
	ctx.lr = 0x822CF9A0;
	sub_822CF1E0(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822cf980
	if (ctx.cr6.lt) goto loc_822CF980;
loc_822CF9B8:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822cf1e0
	ctx.lr = 0x822CF9D0;
	sub_822CF1E0(ctx, base);
loc_822CF9D0:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cfa14
	if (ctx.cr6.eq) goto loc_822CFA14;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r11,-2152
	ctx.r10.s64 = ctx.r11.s64 + -2152;
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c1980
	ctx.lr = 0x822CFA14;
	sub_822C1980(ctx, base);
loc_822CFA14:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfa24
	if (ctx.cr6.eq) goto loc_822CFA24;
	// bl 0x82140e48
	ctx.lr = 0x822CFA24;
	sub_82140E48(ctx, base);
loc_822CFA24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_822CF738) {
	__imp__sub_822CF738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFA3C) {
	__imp__sub_822CFA3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CFA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x822cfa74
	if (ctx.cr6.lt) goto loc_822CFA74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-10516
	ctx.r4.s64 = ctx.r11.s64 + -10516;
	// bl 0x822830e8
	ctx.lr = 0x822CFA74;
	sub_822830E8(ctx, base);
loc_822CFA74:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x822CFA80;
	sub_82177148(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// beq cr6,0x822cfab0
	if (ctx.cr6.eq) goto loc_822CFAB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc9b0
	ctx.lr = 0x822CFAB0;
	sub_822CC9B0(ctx, base);
loc_822CFAB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFA40) {
	__imp__sub_822CFA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822CFAC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cfb64
	if (ctx.cr6.eq) goto loc_822CFB64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cfb64
	if (!ctx.cr6.gt) goto loc_822CFB64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r11,-10516
	ctx.r25.s64 = ctx.r11.s64 + -10516;
loc_822CFAF4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// blt cr6,0x822cfb14
	if (ctx.cr6.lt) goto loc_822CFB14;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822CFB14;
	sub_822830E8(ctx, base);
loc_822CFB14:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x822CFB20;
	sub_82177148(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// beq cr6,0x822cfb50
	if (ctx.cr6.eq) goto loc_822CFB50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc9b0
	ctx.lr = 0x822CFB50;
	sub_822CC9B0(ctx, base);
loc_822CFB50:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cfaf4
	if (ctx.cr6.lt) goto loc_822CFAF4;
loc_822CFB64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFAB8) {
	__imp__sub_822CFAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFB6C) {
	__imp__sub_822CFB6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CFB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822c6928
	ctx.lr = 0x822CFB8C;
	sub_822C6928(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cfbb0
	if (!ctx.cr6.eq) goto loc_822CFBB0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-10420
	ctx.r4.s64 = ctx.r11.s64 + -10420;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822CFBA8;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822CFBB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c6508
	ctx.lr = 0x822CFBB8;
	sub_822C6508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cfbe4
	if (!ctx.cr6.eq) goto loc_822CFBE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-10484
	ctx.r4.s64 = ctx.r11.s64 + -10484;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822CFBDC;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822CFBE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cd170
	ctx.lr = 0x822CFBEC;
	sub_822CD170(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFB70) {
	__imp__sub_822CFB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFBF4) {
	__imp__sub_822CFBF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CFC1C;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfc30
	if (ctx.cr6.eq) goto loc_822CFC30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd888
	ctx.lr = 0x822CFC30;
	sub_822CD888(ctx, base);
loc_822CFC30:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CFBF8) {
	__imp__sub_822CFBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFC44) {
	__imp__sub_822CFC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CFC6C;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfc94
	if (ctx.cr6.eq) goto loc_822CFC94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e03a0
	ctx.lr = 0x822CFC80;
	sub_822E03A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfc94
	if (ctx.cr6.eq) goto loc_822CFC94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd888
	ctx.lr = 0x822CFC94;
	sub_822CD888(ctx, base);
loc_822CFC94:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CFC48) {
	__imp__sub_822CFC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822CFCB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822cc400
	ctx.lr = 0x822CFCC0;
	sub_822CC400(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822d1e60
	ctx.lr = 0x822CFCD4;
	sub_822D1E60(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cfd20
	if (!ctx.cr6.gt) goto loc_822CFD20;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822CFCE4:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x822cd170
	ctx.lr = 0x822CFCF4;
	sub_822CD170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfd3c
	if (!ctx.cr6.eq) goto loc_822CFD3C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bl 0x822d1e60
	ctx.lr = 0x822CFD14;
	sub_822D1E60(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cfce4
	if (ctx.cr6.lt) goto loc_822CFCE4;
loc_822CFD20:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1e60
	ctx.lr = 0x822CFD30;
	sub_822D1E60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822CFD3C:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFCA8) {
	__imp__sub_822CFCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFD50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,308(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822cfca8
	ctx.lr = 0x822CFD74;
	sub_822CFCA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cfdd0
	if (!ctx.cr6.eq) goto loc_822CFDD0;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cfda8
	if (ctx.cr6.eq) goto loc_822CFDA8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r11,-10348
	ctx.r4.s64 = ctx.r11.s64 + -10348;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822CFDA4;
	sub_82280900(ctx, base);
	// b 0x822cfdec
	goto loc_822CFDEC;
loc_822CFDA8:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cfdbc
	if (!ctx.cr6.eq) goto loc_822CFDBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-10372
	ctx.r5.s64 = ctx.r11.s64 + -10372;
loc_822CFDBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-10348
	ctx.r4.s64 = ctx.r11.s64 + -10348;
	// bl 0x82280900
	ctx.lr = 0x822CFDCC;
	sub_82280900(ctx, base);
	// b 0x822cfdec
	goto loc_822CFDEC;
loc_822CFDD0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822c8a28
	ctx.lr = 0x822CFDD8;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfdec
	if (ctx.cr6.eq) goto loc_822CFDEC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ab0
	ctx.lr = 0x822CFDEC;
	sub_822C8AB0(ctx, base);
loc_822CFDEC:
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

PPC_WEAK_FUNC(sub_822CFD50) {
	__imp__sub_822CFD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFE04) {
	__imp__sub_822CFE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFE08) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CFE34;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfea0
	if (ctx.cr6.eq) goto loc_822CFEA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x822c6508
	ctx.lr = 0x822CFE48;
	sub_822C6508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cfe6c
	if (!ctx.cr6.eq) goto loc_822CFE6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10300
	ctx.r4.s64 = ctx.r11.s64 + -10300;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822CFE68;
	sub_82280900(ctx, base);
	// b 0x822cfea0
	goto loc_822CFEA0;
loc_822CFE6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd170
	ctx.lr = 0x822CFE78;
	sub_822CD170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfea0
	if (ctx.cr6.eq) goto loc_822CFEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c8a28
	ctx.lr = 0x822CFE88;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfea0
	if (ctx.cr6.eq) goto loc_822CFEA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ab0
	ctx.lr = 0x822CFEA0;
	sub_822C8AB0(ctx, base);
loc_822CFEA0:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_822CFE08) {
	__imp__sub_822CFE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822CFEC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822CFEDC;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cff84
	if (ctx.cr6.eq) goto loc_822CFF84;
	// lwz r29,308(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cff84
	if (!ctx.cr6.gt) goto loc_822CFF84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-10256
	ctx.r27.s64 = ctx.r11.s64 + -10256;
loc_822CFF04:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cff70
	if (ctx.cr6.eq) goto loc_822CFF70;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cff34
	if (!ctx.cr6.eq) goto loc_822CFF34;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822CFF34;
	sub_822830E8(ctx, base);
loc_822CFF34:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x822e8058
	ctx.lr = 0x822CFF40;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cff70
	if (!ctx.cr6.eq) goto loc_822CFF70;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1e98
	ctx.lr = 0x822CFF54;
	sub_822D1E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cff70
	if (ctx.cr6.eq) goto loc_822CFF70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822cd170
	ctx.lr = 0x822CFF68;
	sub_822CD170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cff84
	if (!ctx.cr6.eq) goto loc_822CFF84;
loc_822CFF70:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cff04
	if (ctx.cr6.lt) goto loc_822CFF04;
loc_822CFF84:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFEB8) {
	__imp__sub_822CFEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFF8C) {
	__imp__sub_822CFF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822CFF98;
	__savegprlr_29(ctx, base);
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
	// bl 0x822d22b0
	ctx.lr = 0x822CFFAC;
	sub_822D22B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0028
	if (ctx.cr6.eq) goto loc_822D0028;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d0010
	if (!ctx.cr6.eq) goto loc_822D0010;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7e88
	ctx.lr = 0x822CFFCC;
	sub_822C7E88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f1,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c36b0
	ctx.lr = 0x822CFFDC;
	sub_822C36B0(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x822c8040
	ctx.lr = 0x822D0008;
	sub_822C8040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D0010:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822cd2b8
	ctx.lr = 0x822D001C;
	sub_822CD2B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r3.u32);
loc_822D0028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFF90) {
	__imp__sub_822CFF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822D0038;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822d22b0
	ctx.lr = 0x822D0054;
	sub_822D22B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d006c
	if (!ctx.cr6.eq) goto loc_822D006C;
loc_822D0060:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D006C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c36b0
	ctx.lr = 0x822D0078;
	sub_822C36B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,18
	ctx.r8.s64 = ctx.r10.s64 + 18;
	// subfc r7,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// and r26,r3,r9
	ctx.r26.u64 = ctx.r3.u64 & ctx.r9.u64;
	// lwzx r25,r4,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// bne cr6,0x822d00b8
	if (!ctx.cr6.eq) goto loc_822D00B8;
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0060
	if (ctx.cr6.eq) goto loc_822D0060;
loc_822D00B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x822c3650
	ctx.lr = 0x822D00C4;
	sub_822C3650(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cd2b8
	ctx.lr = 0x822D00D0;
	sub_822CD2B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7e88
	ctx.lr = 0x822D00DC;
	sub_822C7E88(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d025c
	if (ctx.cr6.eq) goto loc_822D025C;
	// cmpwi cr6,r27,30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 30, ctx.xer);
	// beq cr6,0x822d01c0
	if (ctx.cr6.eq) goto loc_822D01C0;
	// cmpwi cr6,r27,22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 22, ctx.xer);
	// beq cr6,0x822d01c0
	if (ctx.cr6.eq) goto loc_822D01C0;
	// cmpwi cr6,r27,156
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 156, ctx.xer);
	// beq cr6,0x822d01c0
	if (ctx.cr6.eq) goto loc_822D01C0;
	// cmpwi cr6,r27,185
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 185, ctx.xer);
	// beq cr6,0x822d01c0
	if (ctx.cr6.eq) goto loc_822D01C0;
	// cmpwi cr6,r27,31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 31, ctx.xer);
	// beq cr6,0x822d0130
	if (ctx.cr6.eq) goto loc_822D0130;
	// cmpwi cr6,r27,23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 23, ctx.xer);
	// beq cr6,0x822d0130
	if (ctx.cr6.eq) goto loc_822D0130;
	// cmpwi cr6,r27,157
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 157, ctx.xer);
	// beq cr6,0x822d0130
	if (ctx.cr6.eq) goto loc_822D0130;
	// cmpwi cr6,r27,187
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 187, ctx.xer);
	// bne cr6,0x822d032c
	if (!ctx.cr6.eq) goto loc_822D032C;
loc_822D0130:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0148
	if (ctx.cr6.eq) goto loc_822D0148;
	// cmpwi cr6,r27,23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 23, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// beq cr6,0x822d014c
	if (ctx.cr6.eq) goto loc_822D014C;
loc_822D0148:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D014C:
	// lwz r10,312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d0194
	if (!ctx.cr6.eq) goto loc_822D0194;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,93
	ctx.r10.s64 = ctx.r3.s64 + 93;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822d0178
	if (ctx.cr6.lt) goto loc_822D0178;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822D0178:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822c8040
	ctx.lr = 0x822D0188;
	sub_822C8040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0194:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822d01b0
	if (ctx.cr6.lt) goto loc_822D01B0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822D01B0:
	// stwx r11,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D01C0:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d01d8
	if (ctx.cr6.eq) goto loc_822D01D8;
	// cmpwi cr6,r27,22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 22, ctx.xer);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// beq cr6,0x822d01dc
	if (ctx.cr6.eq) goto loc_822D01DC;
loc_822D01D8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822D01DC:
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bne cr6,0x822d022c
	if (!ctx.cr6.eq) goto loc_822D022C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r3,93
	ctx.r10.s64 = ctx.r3.s64 + 93;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r8,r7
	temp.u8 = (~ctx.r8.u32 + ctx.r7.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x822c8040
	ctx.lr = 0x822D0220;
	sub_822C8040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D022C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfc r5,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfe r3,r8,r4
	temp.u8 = (~ctx.r8.u32 + ctx.r4.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D025C:
	// cmpwi cr6,r27,154
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 154, ctx.xer);
	// bgt cr6,0x822d0314
	if (ctx.cr6.gt) goto loc_822D0314;
	// beq cr6,0x822d0564
	if (ctx.cr6.eq) goto loc_822D0564;
	// addi r11,r27,-20
	ctx.r11.s64 = ctx.r27.s64 + -20;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822d032c
	if (ctx.cr6.gt) goto loc_822D032C;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,652
	ctx.r12.s64 = ctx.r12.s64 + 652;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822D02B4;
	case 1:
		goto loc_822D02E4;
	case 2:
		goto loc_822D032C;
	case 3:
		goto loc_822D032C;
	case 4:
		goto loc_822D032C;
	case 5:
		goto loc_822D032C;
	case 6:
		goto loc_822D032C;
	case 7:
		goto loc_822D032C;
	case 8:
		goto loc_822D0564;
	case 9:
		goto loc_822D056C;
	default:
		return;
	}
	// lwz r17,692(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// lwz r17,740(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 740);
	// lwz r17,812(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 812);
	// lwz r17,812(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 812);
	// lwz r17,812(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 812);
	// lwz r17,812(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 812);
	// lwz r17,812(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 812);
	// lwz r17,812(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 812);
	// lwz r17,1380(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 1380);
	// lwz r17,1388(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 1388);
loc_822D02B4:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0564
	if (ctx.cr6.eq) goto loc_822D0564;
loc_822D02C0:
	// neg r8,r7
	ctx.r8.s64 = -ctx.r7.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822c80b8
	ctx.lr = 0x822D02D8;
	sub_822C80B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D02E4:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d056c
	if (ctx.cr6.eq) goto loc_822D056C;
loc_822D02F0:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822c80b8
	ctx.lr = 0x822D0308;
	sub_822C80B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0314:
	// cmpwi cr6,r27,155
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 155, ctx.xer);
	// beq cr6,0x822d056c
	if (ctx.cr6.eq) goto loc_822D056C;
	// cmpwi cr6,r27,183
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 183, ctx.xer);
	// beq cr6,0x822d0564
	if (ctx.cr6.eq) goto loc_822D0564;
	// cmpwi cr6,r27,189
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 189, ctx.xer);
	// beq cr6,0x822d056c
	if (ctx.cr6.eq) goto loc_822D056C;
loc_822D032C:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d04a0
	if (ctx.cr6.eq) goto loc_822D04A0;
	// rlwinm r11,r25,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0384
	if (ctx.cr6.eq) goto loc_822D0384;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stwx r4,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0384:
	// rlwinm r11,r25,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d03bc
	if (ctx.cr6.eq) goto loc_822D03BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822d0428
	if (ctx.cr6.lt) goto loc_822D0428;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stwx r29,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D03BC:
	// rlwinm r11,r25,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0400
	if (ctx.cr6.eq) goto loc_822D0400;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfc r6,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subfe r4,r9,r5
	temp.u8 = (~ctx.r9.u32 + ctx.r5.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stwx r3,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0400:
	// rlwinm r11,r25,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0438
	if (ctx.cr6.eq) goto loc_822D0438;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822d0428
	if (ctx.cr6.lt) goto loc_822D0428;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822D0428:
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0438:
	// rlwinm r11,r25,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d0584
	if (!ctx.cr6.eq) goto loc_822D0584;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r3,93
	ctx.r11.s64 = ctx.r3.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x822c3710
	ctx.lr = 0x822D045C;
	sub_822C3710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0584
	if (ctx.cr6.eq) goto loc_822D0584;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r3,93
	ctx.r11.s64 = ctx.r3.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x822c3708
	ctx.lr = 0x822D047C;
	sub_822C3708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d0584
	if (!ctx.cr6.eq) goto loc_822D0584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,308(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822D0494;
	sub_822C7B88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D04A0:
	// cmpwi cr6,r27,165
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 165, ctx.xer);
	// beq cr6,0x822d0548
	if (ctx.cr6.eq) goto loc_822D0548;
	// cmpwi cr6,r27,182
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 182, ctx.xer);
	// beq cr6,0x822d0548
	if (ctx.cr6.eq) goto loc_822D0548;
	// cmpwi cr6,r27,166
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 166, ctx.xer);
	// beq cr6,0x822d052c
	if (ctx.cr6.eq) goto loc_822D052C;
	// cmpwi cr6,r27,188
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 188, ctx.xer);
	// beq cr6,0x822d052c
	if (ctx.cr6.eq) goto loc_822D052C;
	// cmpwi cr6,r27,164
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 164, ctx.xer);
	// beq cr6,0x822d02c0
	if (ctx.cr6.eq) goto loc_822D02C0;
	// cmpwi cr6,r27,184
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 184, ctx.xer);
	// beq cr6,0x822d02c0
	if (ctx.cr6.eq) goto loc_822D02C0;
	// cmpwi cr6,r27,163
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 163, ctx.xer);
	// beq cr6,0x822d02f0
	if (ctx.cr6.eq) goto loc_822D02F0;
	// cmpwi cr6,r27,190
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 190, ctx.xer);
	// beq cr6,0x822d02f0
	if (ctx.cr6.eq) goto loc_822D02F0;
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0060
	if (ctx.cr6.eq) goto loc_822D0060;
loc_822D04EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x822d0510
	if (ctx.cr6.eq) goto loc_822D0510;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d04ec
	if (!ctx.cr6.eq) goto loc_822D04EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0510:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822D0520;
	sub_822C7B88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D052C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cff90
	ctx.lr = 0x822D053C;
	sub_822CFF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0548:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c76d8
	ctx.lr = 0x822D0558;
	sub_822C76D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0564:
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x822d0570
	goto loc_822D0570;
loc_822D056C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_822D0570:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822c8170
	ctx.lr = 0x822D0584;
	sub_822C8170(ctx, base);
loc_822D0584:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0030) {
	__imp__sub_822D0030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822D0598;
	__savegprlr_25(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822d2300
	ctx.lr = 0x822D05B0;
	sub_822D2300(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0aa4
	if (ctx.cr6.eq) goto loc_822D0AA4;
	// lwz r29,344(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d0aa4
	if (ctx.cr6.eq) goto loc_822D0AA4;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x822D05D8;
	sub_823DE090(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e0578
	ctx.lr = 0x822D05E0;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822D05F0;
	sub_822E7E98(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D05F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d05f8
	if (!ctx.cr6.eq) goto loc_822D05F8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0658
	if (ctx.cr6.eq) goto loc_822D0658;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822d0658
	if (!ctx.cr6.gt) goto loc_822D0658;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r8,r10,93
	ctx.r8.s64 = ctx.r10.s64 + 93;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822d0658
	if (!ctx.cr6.gt) goto loc_822D0658;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_822D0658:
	// rlwinm r11,r27,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x400;
	// lis r25,-31857
	ctx.r25.s64 = -2087780352;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0984
	if (ctx.cr6.eq) goto loc_822D0984;
	// rlwinm r27,r27,0,22,20
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// bne cr6,0x822d0708
	if (!ctx.cr6.eq) goto loc_822D0708;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d06a4
	if (!ctx.cr6.gt) goto loc_822D06A4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// bl 0x823de130
	ctx.lr = 0x822D06A4;
	sub_823DE130(ctx, base);
loc_822D06A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x822e2708
	ctx.lr = 0x822D06B0;
	sub_822E2708(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x822e0578
	ctx.lr = 0x822D06B8;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822D06C8;
	sub_822E7E98(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1fc0
	ctx.lr = 0x822D06DC;
	sub_822D1FC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ba0
	ctx.lr = 0x822D06FC;
	sub_822C8BA0(ctx, base);
loc_822D06FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0708:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x822d0728
	if (!ctx.cr6.eq) goto loc_822D0728;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7e08
	ctx.lr = 0x822D071C;
	sub_822E7E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d06fc
	if (ctx.cr6.eq) goto loc_822D06FC;
loc_822D0728:
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x822d06fc
	if (ctx.cr6.lt) goto loc_822D06FC;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d06fc
	if (ctx.cr6.eq) goto loc_822D06FC;
	// cmpwi cr6,r27,64
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 64, ctx.xer);
	// bne cr6,0x822d0750
	if (!ctx.cr6.eq) goto loc_822D0750;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x822d06fc
	if (!ctx.cr6.eq) goto loc_822D06FC;
loc_822D0750:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822d0770
	if (!ctx.cr6.eq) goto loc_822D0770;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7d78
	ctx.lr = 0x822D0764;
	sub_822E7D78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0aa4
	if (ctx.cr6.eq) goto loc_822D0AA4;
loc_822D0770:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x822d07c8
	if (!ctx.cr6.eq) goto loc_822D07C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7d78
	ctx.lr = 0x822D0784;
	sub_822E7D78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d07a4
	if (!ctx.cr6.eq) goto loc_822D07A4;
	// bl 0x82282ed0
	ctx.lr = 0x822D0794;
	sub_82282ED0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x822d07a8
	if (!ctx.cr6.eq) goto loc_822D07A8;
loc_822D07A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D07A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0aa4
	if (ctx.cr6.eq) goto loc_822D0AA4;
	// bl 0x82282ed0
	ctx.lr = 0x822D07B8;
	sub_82282ED0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822d07c8
	if (!ctx.cr6.eq) goto loc_822D07C8;
	// li r27,46
	ctx.r27.s64 = 46;
loc_822D07C8:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x822d07e0
	if (!ctx.cr6.eq) goto loc_822D07E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823dfb10
	ctx.lr = 0x822D07DC;
	sub_823DFB10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_822D07E0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8212e878
	ctx.lr = 0x822D07E8;
	sub_8212E878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d0918
	if (!ctx.cr6.eq) goto loc_822D0918;
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// beq cr6,0x822d06fc
	if (ctx.cr6.eq) goto loc_822D06FC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d080c
	if (ctx.cr6.eq) goto loc_822D080C;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822d06fc
	if (!ctx.cr6.lt) goto loc_822D06FC;
loc_822D080C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de130
	ctx.lr = 0x822D0838;
	sub_823DE130(ctx, base);
loc_822D0838:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r8,r11,93
	ctx.r8.s64 = ctx.r11.s64 + 93;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stbx r27,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r27.u8);
	// bl 0x822e2708
	ctx.lr = 0x822D085C;
	sub_822E2708(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x822e0578
	ctx.lr = 0x822D0864;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822D0874;
	sub_822E7E98(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1fc0
	ctx.lr = 0x822D0888;
	sub_822D1FC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ba0
	ctx.lr = 0x822D08A8;
	sub_822C8BA0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d09e4
	if (ctx.cr6.eq) goto loc_822D09E4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,93
	ctx.r10.s64 = ctx.r10.s64 + 93;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d09e4
	if (ctx.cr6.lt) goto loc_822D09E4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d09e4
	if (ctx.cr6.eq) goto loc_822D09E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x822cd568
	ctx.lr = 0x822D08E4;
	sub_822CD568(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r26.u32);
	// beq cr6,0x822d09e4
	if (ctx.cr6.eq) goto loc_822D09E4;
	// bl 0x822c8a28
	ctx.lr = 0x822D0904;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d09e4
	if (ctx.cr6.eq) goto loc_822D09E4;
	// stw r10,15492(r25)
	PPC_STORE_U32(ctx.r25.u32 + 15492, ctx.r10.u32);
	// b 0x822d09e4
	goto loc_822D09E4;
loc_822D0918:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0838
	if (ctx.cr6.eq) goto loc_822D0838;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,93
	ctx.r10.s64 = ctx.r10.s64 + 93;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0838
	if (ctx.cr6.lt) goto loc_822D0838;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0978
	if (ctx.cr6.eq) goto loc_822D0978;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x822cd568
	ctx.lr = 0x822D0954;
	sub_822CD568(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0978
	if (ctx.cr6.eq) goto loc_822D0978;
	// bl 0x822c8a28
	ctx.lr = 0x822D0964;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0978
	if (ctx.cr6.eq) goto loc_822D0978;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// stw r10,15492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15492, ctx.r10.u32);
loc_822D0978:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0984:
	// cmpwi cr6,r27,162
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 162, ctx.xer);
	// beq cr6,0x822d0ba0
	if (ctx.cr6.eq) goto loc_822D0BA0;
	// cmpwi cr6,r27,193
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 193, ctx.xer);
	// beq cr6,0x822d0ba0
	if (ctx.cr6.eq) goto loc_822D0BA0;
	// cmpwi cr6,r27,157
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 157, ctx.xer);
	// beq cr6,0x822d0b60
	if (ctx.cr6.eq) goto loc_822D0B60;
	// cmpwi cr6,r27,187
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 187, ctx.xer);
	// beq cr6,0x822d0b60
	if (ctx.cr6.eq) goto loc_822D0B60;
	// cmpwi cr6,r27,156
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 156, ctx.xer);
	// beq cr6,0x822d0b20
	if (ctx.cr6.eq) goto loc_822D0B20;
	// cmpwi cr6,r27,185
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 185, ctx.xer);
	// beq cr6,0x822d0b20
	if (ctx.cr6.eq) goto loc_822D0B20;
	// cmpwi cr6,r27,165
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 165, ctx.xer);
	// beq cr6,0x822d0b00
	if (ctx.cr6.eq) goto loc_822D0B00;
	// cmpwi cr6,r27,182
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 182, ctx.xer);
	// beq cr6,0x822d0b00
	if (ctx.cr6.eq) goto loc_822D0B00;
	// cmpwi cr6,r27,166
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 166, ctx.xer);
	// beq cr6,0x822d0ad4
	if (ctx.cr6.eq) goto loc_822D0AD4;
	// cmpwi cr6,r27,188
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 188, ctx.xer);
	// beq cr6,0x822d0ad4
	if (ctx.cr6.eq) goto loc_822D0AD4;
	// cmpwi cr6,r27,161
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 161, ctx.xer);
	// beq cr6,0x822d0ab0
	if (ctx.cr6.eq) goto loc_822D0AB0;
	// cmpwi cr6,r27,192
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 192, ctx.xer);
	// beq cr6,0x822d0ab0
	if (ctx.cr6.eq) goto loc_822D0AB0;
loc_822D09E4:
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// beq cr6,0x822d09fc
	if (ctx.cr6.eq) goto loc_822D09FC;
	// cmpwi cr6,r27,155
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 155, ctx.xer);
	// beq cr6,0x822d09fc
	if (ctx.cr6.eq) goto loc_822D09FC;
	// cmpwi cr6,r27,189
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 189, ctx.xer);
	// bne cr6,0x822d0a28
	if (!ctx.cr6.eq) goto loc_822D0A28;
loc_822D09FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x822cd568
	ctx.lr = 0x822D0A08;
	sub_822CD568(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0a28
	if (ctx.cr6.eq) goto loc_822D0A28;
	// bl 0x822c8a28
	ctx.lr = 0x822D0A18;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0a28
	if (ctx.cr6.eq) goto loc_822D0A28;
	// stw r10,15492(r25)
	PPC_STORE_U32(ctx.r25.u32 + 15492, ctx.r10.u32);
loc_822D0A28:
	// cmpwi cr6,r27,154
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 154, ctx.xer);
	// beq cr6,0x822d0a38
	if (ctx.cr6.eq) goto loc_822D0A38;
	// cmpwi cr6,r27,183
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 183, ctx.xer);
	// bne cr6,0x822d0a64
	if (!ctx.cr6.eq) goto loc_822D0A64;
loc_822D0A38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x822cd498
	ctx.lr = 0x822D0A44;
	sub_822CD498(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0a64
	if (ctx.cr6.eq) goto loc_822D0A64;
	// bl 0x822c8a28
	ctx.lr = 0x822D0A54;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0a64
	if (ctx.cr6.eq) goto loc_822D0A64;
	// stw r10,15492(r25)
	PPC_STORE_U32(ctx.r25.u32 + 15492, ctx.r10.u32);
loc_822D0A64:
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// beq cr6,0x822d0a74
	if (ctx.cr6.eq) goto loc_822D0A74;
	// cmpwi cr6,r27,191
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 191, ctx.xer);
	// bne cr6,0x822d0a8c
	if (!ctx.cr6.eq) goto loc_822D0A8C;
loc_822D0A74:
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d0a8c
	if (ctx.cr6.eq) goto loc_822D0A8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822D0A8C;
	sub_822C7B88(ctx, base);
loc_822D0A8C:
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// beq cr6,0x822d0aa4
	if (ctx.cr6.eq) goto loc_822D0AA4;
	// cmpwi cr6,r27,191
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 191, ctx.xer);
	// beq cr6,0x822d0aa4
	if (ctx.cr6.eq) goto loc_822D0AA4;
	// cmpwi cr6,r27,27
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 27, ctx.xer);
	// bne cr6,0x822d0bdc
	if (!ctx.cr6.eq) goto loc_822D0BDC;
loc_822D0AA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0AB0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8212e878
	ctx.lr = 0x822D0AB8;
	sub_8212E878(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8212e890
	ctx.lr = 0x822D0AC8;
	sub_8212E890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0AD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ba0
	ctx.lr = 0x822D0AF4;
	sub_822C8BA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0B00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r26,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r26.u32);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0B20:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1fc0
	ctx.lr = 0x822D0B34;
	sub_822D1FC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ba0
	ctx.lr = 0x822D0B54;
	sub_822C8BA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0B60:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d1fc0
	ctx.lr = 0x822D0B74;
	sub_822D1FC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c8ba0
	ctx.lr = 0x822D0B94;
	sub_822C8BA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822D0BA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822d0bdc
	if (!ctx.cr6.lt) goto loc_822D0BDC;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de130
	ctx.lr = 0x822D0BD0;
	sub_823DE130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x822e2708
	ctx.lr = 0x822D0BDC;
	sub_822E2708(ctx, base);
loc_822D0BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0590) {
	__imp__sub_822D0590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822d0cc0
	if (ctx.cr6.eq) goto loc_822D0CC0;
	// lwz r10,256(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bgt cr6,0x822d0cc0
	if (ctx.cr6.gt) goto loc_822D0CC0;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3100
	ctx.r12.s64 = ctx.r12.s64 + 3100;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_822D0CC0;
	case 1:
		goto loc_822D0CC0;
	case 2:
		goto loc_822D0CC0;
	case 3:
		goto loc_822D0CC0;
	case 4:
		goto loc_822D0CC0;
	case 5:
		goto loc_822D0C78;
	case 6:
		goto loc_822D0CC0;
	case 7:
		goto loc_822D0C9C;
	case 8:
		goto loc_822D0CC0;
	case 9:
		goto loc_822D0CB8;
	case 10:
		goto loc_822D0C84;
	case 11:
		goto loc_822D0C8C;
	case 12:
		goto loc_822D0C94;
	case 13:
		goto loc_822D0CB0;
	case 14:
		goto loc_822D0CC0;
	case 15:
		goto loc_822D0CC0;
	case 16:
		goto loc_822D0CC0;
	case 17:
		goto loc_822D0CC0;
	case 18:
		goto loc_822D0CC0;
	case 19:
		goto loc_822D0CC0;
	case 20:
		goto loc_822D0CC0;
	case 21:
		goto loc_822D0CC0;
	case 22:
		goto loc_822D0CC0;
	default:
		return;
	}
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3192(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3192);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3228(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3228);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3256(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3256);
	// lwz r17,3204(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3204);
	// lwz r17,3212(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3212);
	// lwz r17,3220(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3220);
	// lwz r17,3248(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3248);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
	// lwz r17,3264(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 3264);
loc_822D0C78:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822d0030
	sub_822D0030(ctx, base);
	return;
loc_822D0C84:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822c82b8
	sub_822C82B8(ctx, base);
	return;
loc_822D0C8C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822c8848
	sub_822C8848(ctx, base);
	return;
loc_822D0C94:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822c8960
	sub_822C8960(ctx, base);
	return;
loc_822D0C9C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r5,r11,368
	ctx.r5.s64 = ctx.r11.s64 + 368;
	// b 0x822c2ba8
	sub_822C2BA8(ctx, base);
	return;
loc_822D0CB0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822cb030
	sub_822CB030(ctx, base);
	return;
loc_822D0CB8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822c8c90
	sub_822C8C90(ctx, base);
	return;
loc_822D0CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D0BE8) {
	__imp__sub_822D0BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822D0CD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x822d0d04
	if (!ctx.cr6.eq) goto loc_822D0D04;
	// bl 0x822cd568
	ctx.lr = 0x822D0D04;
	sub_822CD568(ctx, base);
loc_822D0D04:
	// lis r23,-31857
	ctx.r23.s64 = -2087780352;
	// lwz r11,15480(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0d3c
	if (ctx.cr6.eq) goto loc_822D0D3C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822d0d3c
	if (ctx.cr6.eq) goto loc_822D0D3C;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,15488(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15488);
	// bl 0x822cb030
	ctx.lr = 0x822D0D34;
	sub_822CB030(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D0D3C:
	// lis r24,-31857
	ctx.r24.s64 = -2087780352;
	// lwz r11,15484(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0d88
	if (ctx.cr6.eq) goto loc_822D0D88;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822d0d88
	if (ctx.cr6.eq) goto loc_822D0D88;
	// lis r31,-31857
	ctx.r31.s64 = -2087780352;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,15492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15492);
	// bl 0x822d0590
	ctx.lr = 0x822D0D68;
	sub_822D0590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1270
	if (!ctx.cr6.eq) goto loc_822D1270;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15484(r24)
	PPC_STORE_U32(ctx.r24.u32 + 15484, ctx.r11.u32);
	// stw r10,15492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15492, ctx.r10.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D0D88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822d0df8
	if (ctx.cr6.eq) goto loc_822D0DF8;
	// rlwinm r11,r27,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d0df8
	if (!ctx.cr6.eq) goto loc_822D0DF8;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0df8
	if (ctx.cr6.eq) goto loc_822D0DF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8212ec70
	ctx.lr = 0x822D0DBC;
	sub_8212EC70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0df8
	if (ctx.cr6.eq) goto loc_822D0DF8;
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x822e8058
	ctx.lr = 0x822D0DD0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d0df8
	if (!ctx.cr6.eq) goto loc_822D0DF8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82141340
	ctx.lr = 0x822D0DE0;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8227ede8
	ctx.lr = 0x822D0DF0;
	sub_8227EDE8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D0DF8:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d0e80
	if (!ctx.cr6.gt) goto loc_822D0E80;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822D0E0C:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x822d2500
	ctx.lr = 0x822D0E1C;
	sub_822D2500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0e64
	if (ctx.cr6.eq) goto loc_822D0E64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822d0e50
	if (!ctx.cr6.eq) goto loc_822D0E50;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822d0e54
	goto loc_822D0E54;
loc_822D0E50:
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_822D0E54:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0e64
	if (ctx.cr6.eq) goto loc_822D0E64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_822D0E64:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0e0c
	if (ctx.cr6.lt) goto loc_822D0E0C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822d0f14
	if (!ctx.cr6.eq) goto loc_822D0F14;
loc_822D0E80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd568
	ctx.lr = 0x822D0E8C;
	sub_822CD568(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d0f3c
	if (!ctx.cr6.gt) goto loc_822D0F3C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822D0EA0:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x822d2500
	ctx.lr = 0x822D0EB0;
	sub_822D2500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0ef8
	if (ctx.cr6.eq) goto loc_822D0EF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822d0ee4
	if (!ctx.cr6.eq) goto loc_822D0EE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822d0ee8
	goto loc_822D0EE8;
loc_822D0EE4:
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_822D0EE8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0ef8
	if (ctx.cr6.eq) goto loc_822D0EF8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_822D0EF8:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0ea0
	if (ctx.cr6.lt) goto loc_822D0EA0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822d0f3c
	if (ctx.cr6.eq) goto loc_822D0F3C;
loc_822D0F14:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0be8
	ctx.lr = 0x822D0F28;
	sub_822D0BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0f3c
	if (ctx.cr6.eq) goto loc_822D0F3C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// b 0x822d1260
	goto loc_822D1260;
loc_822D0F3C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822d0f6c
	if (!ctx.cr6.gt) goto loc_822D0F6C;
	// cmpwi cr6,r27,255
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 255, ctx.xer);
	// bgt cr6,0x822d0f6c
	if (ctx.cr6.gt) goto loc_822D0F6C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c8f58
	ctx.lr = 0x822D0F64;
	sub_822C8F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1270
	if (!ctx.cr6.eq) goto loc_822D1270;
loc_822D0F6C:
	// cmpwi cr6,r27,30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 30, ctx.xer);
	// bgt cr6,0x822d10c4
	if (ctx.cr6.gt) goto loc_822D10C4;
	// beq cr6,0x822d1098
	if (ctx.cr6.eq) goto loc_822D1098;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x822d1270
	if (ctx.cr6.gt) goto loc_822D1270;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3996
	ctx.r12.s64 = ctx.r12.s64 + 3996;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822D11F4;
	case 1:
		goto loc_822D103C;
	case 2:
		goto loc_822D1270;
	case 3:
		goto loc_822D1270;
	case 4:
		goto loc_822D1270;
	case 5:
		goto loc_822D1270;
	case 6:
		goto loc_822D1270;
	case 7:
		goto loc_822D1270;
	case 8:
		goto loc_822D1084;
	case 9:
		goto loc_822D1270;
	case 10:
		goto loc_822D1270;
	case 11:
		goto loc_822D1270;
	case 12:
		goto loc_822D11F4;
	case 13:
		goto loc_822D11F4;
	case 14:
		goto loc_822D1270;
	case 15:
		goto loc_822D1270;
	case 16:
		goto loc_822D1270;
	case 17:
		goto loc_822D1270;
	case 18:
		goto loc_822D1270;
	case 19:
		goto loc_822D1010;
	case 20:
		goto loc_822D106C;
	case 21:
		goto loc_822D1098;
	case 22:
		goto loc_822D10F4;
	case 23:
		goto loc_822D1270;
	case 24:
		goto loc_822D1270;
	case 25:
		goto loc_822D1270;
	case 26:
		goto loc_822D103C;
	case 27:
		goto loc_822D1010;
	case 28:
		goto loc_822D106C;
	default:
		return;
	}
	// lwz r17,4596(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4596);
	// lwz r17,4156(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4156);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4228(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4228);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4596(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4596);
	// lwz r17,4596(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4596);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4112(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4112);
	// lwz r17,4204(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4204);
	// lwz r17,4248(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4248);
	// lwz r17,4340(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4340);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4156(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4156);
	// lwz r17,4112(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4112);
	// lwz r17,4204(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4204);
loc_822D1010:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d2718
	ctx.lr = 0x822D101C;
	sub_822D2718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1270
	if (!ctx.cr6.eq) goto loc_822D1270;
loc_822D1028:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd498
	ctx.lr = 0x822D1034;
	sub_822CD498(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D103C:
	// lwz r11,15480(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d1270
	if (!ctx.cr6.eq) goto loc_822D1270;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822D1064;
	sub_822C7B88(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D106C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d27f8
	ctx.lr = 0x822D1078;
	sub_822D27F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1270
	if (!ctx.cr6.eq) goto loc_822D1270;
loc_822D1084:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd568
	ctx.lr = 0x822D1090;
	sub_822CD568(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D1098:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d2718
	ctx.lr = 0x822D10A4;
	sub_822D2718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd498
	ctx.lr = 0x822D10BC;
	sub_822CD498(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D10C4:
	// cmpwi cr6,r27,177
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 177, ctx.xer);
	// bgt cr6,0x822d116c
	if (ctx.cr6.gt) goto loc_822D116C;
	// beq cr6,0x822d1138
	if (ctx.cr6.eq) goto loc_822D1138;
	// cmpwi cr6,r27,155
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 155, ctx.xer);
	// bgt cr6,0x822d1120
	if (ctx.cr6.gt) goto loc_822D1120;
	// beq cr6,0x822d1084
	if (ctx.cr6.eq) goto loc_822D1084;
	// cmpwi cr6,r27,31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 31, ctx.xer);
	// beq cr6,0x822d10f4
	if (ctx.cr6.eq) goto loc_822D10F4;
	// cmpwi cr6,r27,154
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 154, ctx.xer);
	// beq cr6,0x822d1028
	if (ctx.cr6.eq) goto loc_822D1028;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D10F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d27f8
	ctx.lr = 0x822D1100;
	sub_822D27F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd568
	ctx.lr = 0x822D1118;
	sub_822CD568(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D1120:
	// cmpwi cr6,r27,156
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 156, ctx.xer);
	// beq cr6,0x822d1028
	if (ctx.cr6.eq) goto loc_822D1028;
	// cmpwi cr6,r27,157
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 157, ctx.xer);
	// beq cr6,0x822d1084
	if (ctx.cr6.eq) goto loc_822D1084;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D1138:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22340
	ctx.r3.s64 = ctx.r11.s64 + 22340;
	// bl 0x822e03a0
	ctx.lr = 0x822D1144;
	sub_822E03A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r3,3932(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3932);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x822e1f18
	ctx.lr = 0x822D1164;
	sub_822E1F18(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D116C:
	// addi r11,r27,-178
	ctx.r11.s64 = ctx.r27.s64 + -178;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x822d1270
	if (ctx.cr6.gt) goto loc_822D1270;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4496
	ctx.r12.s64 = ctx.r12.s64 + 4496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822D11C8;
	case 1:
		goto loc_822D1270;
	case 2:
		goto loc_822D1270;
	case 3:
		goto loc_822D1270;
	case 4:
		goto loc_822D1270;
	case 5:
		goto loc_822D1028;
	case 6:
		goto loc_822D1270;
	case 7:
		goto loc_822D1270;
	case 8:
		goto loc_822D1270;
	case 9:
		goto loc_822D1270;
	case 10:
		goto loc_822D1270;
	case 11:
		goto loc_822D1084;
	case 12:
		goto loc_822D1270;
	case 13:
		goto loc_822D11F4;
	default:
		return;
	}
	// lwz r17,4552(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4552);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4136(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4136);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4228(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4228);
	// lwz r17,4720(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4720);
	// lwz r17,4596(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 4596);
loc_822D11C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22340
	ctx.r3.s64 = ctx.r11.s64 + 22340;
	// bl 0x822e03a0
	ctx.lr = 0x822D11D4;
	sub_822E03A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-10200
	ctx.r4.s64 = ctx.r11.s64 + -10200;
	// bl 0x8227cf18
	ctx.lr = 0x822D11EC;
	sub_8227CF18(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D11F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822d1270
	if (ctx.cr6.eq) goto loc_822D1270;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c8a28
	ctx.lr = 0x822D1204;
	sub_822C8A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1248
	if (ctx.cr6.eq) goto loc_822D1248;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,93
	ctx.r8.s64 = ctx.r11.s64 + 93;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r9,r7,r26
	PPC_STORE_U32(ctx.r7.u32 + ctx.r26.u32, ctx.r9.u32);
	// stw r11,15484(r24)
	PPC_STORE_U32(ctx.r24.u32 + 15484, ctx.r11.u32);
	// stw r26,15492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15492, ctx.r26.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8212e890
	ctx.lr = 0x822D1240;
	sub_8212E890(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D1248:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822c7df8
	ctx.lr = 0x822D1254;
	sub_822C7DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1270
	if (!ctx.cr6.eq) goto loc_822D1270;
loc_822D1260:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,328(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 328);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7b88
	ctx.lr = 0x822D1270;
	sub_822C7B88(ctx, base);
loc_822D1270:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0CC8) {
	__imp__sub_822D0CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D1280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D1290:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d1290
	if (!ctx.cr6.eq) goto loc_822D1290;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822e8280
	ctx.lr = 0x822D12BC;
	sub_822E8280(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822d12e4
	if (ctx.cr6.eq) goto loc_822D12E4;
loc_822D12C8:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x822d12e4
	if (ctx.cr6.eq) goto loc_822D12E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822d12c8
	if (!ctx.cr6.eq) goto loc_822D12C8;
loc_822D12E4:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// ble cr6,0x822d1310
	if (!ctx.cr6.gt) goto loc_822D1310;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-10188
	ctx.r5.s64 = ctx.r11.s64 + -10188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8280
	ctx.lr = 0x822D1308;
	sub_822E8280(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1310:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-27432
	ctx.r5.s64 = ctx.r11.s64 + -27432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8280
	ctx.lr = 0x822D1324;
	sub_822E8280(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1278) {
	__imp__sub_822D1278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D132C) {
	__imp__sub_822D132C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822D1338;
	__savegprlr_24(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31858
	ctx.r24.s64 = -2087845888;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,3536(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3536);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d136c
	if (ctx.cr6.eq) goto loc_822D136C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10740
	ctx.r4.s64 = ctx.r11.s64 + -10740;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x823de1f0
	ctx.lr = 0x822D136C;
	sub_823DE1F0(ctx, base);
loc_822D136C:
	// bl 0x822b8130
	ctx.lr = 0x822D1370;
	sub_822B8130(ctx, base);
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822d13dc
	if (ctx.cr0.lt) goto loc_822D13DC;
	// addi r11,r30,142
	ctx.r11.s64 = ctx.r30.s64 + 142;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_822D1390:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x822d13c4
	if (!ctx.cr6.eq) goto loc_822D13C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d1d20
	ctx.lr = 0x822D13B0;
	sub_822D1D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d13c4
	if (!ctx.cr6.eq) goto loc_822D13C4;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d13d4
	if (!ctx.cr6.eq) goto loc_822D13D4;
loc_822D13C4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x822d1390
	if (!ctx.cr0.lt) goto loc_822D1390;
	// b 0x822d13dc
	goto loc_822D13DC;
loc_822D13D4:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_822D13DC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d148c
	if (!ctx.cr6.eq) goto loc_822D148C;
	// lwz r11,564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 564);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d148c
	if (!ctx.cr6.gt) goto loc_822D148C;
	// addi r30,r28,52
	ctx.r30.s64 = ctx.r28.s64 + 52;
loc_822D13FC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x822d1478
	if (!ctx.cr6.eq) goto loc_822D1478;
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822d1440
	if (ctx.cr0.lt) goto loc_822D1440;
	// addi r10,r11,142
	ctx.r10.s64 = ctx.r11.s64 + 142;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_822D1428:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822d1478
	if (ctx.cr6.eq) goto loc_822D1478;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x822d1428
	if (!ctx.cr0.lt) goto loc_822D1428;
loc_822D1440:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cf738
	ctx.lr = 0x822D144C;
	sub_822CF738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1478
	if (ctx.cr6.eq) goto loc_822D1478;
	// lwz r11,3536(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1478
	if (ctx.cr6.eq) goto loc_822D1478;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1278
	ctx.lr = 0x822D1478;
	sub_822D1278(ctx, base);
loc_822D1478:
	// lwz r11,564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 564);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d13fc
	if (ctx.cr6.lt) goto loc_822D13FC;
loc_822D148C:
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822d1508
	if (!ctx.cr6.lt) goto loc_822D1508;
	// addi r11,r26,142
	ctx.r11.s64 = ctx.r26.s64 + 142;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_822D14A8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x822d14f4
	if (!ctx.cr6.eq) goto loc_822D14F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cf738
	ctx.lr = 0x822D14C8;
	sub_822CF738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d14f4
	if (ctx.cr6.eq) goto loc_822D14F4;
	// lwz r11,3536(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d14f4
	if (ctx.cr6.eq) goto loc_822D14F4;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1278
	ctx.lr = 0x822D14F4;
	sub_822D1278(ctx, base);
loc_822D14F4:
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d14a8
	if (ctx.cr6.lt) goto loc_822D14A8;
loc_822D1508:
	// lwz r11,3536(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1524
	if (ctx.cr6.eq) goto loc_822D1524;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822cc0e8
	ctx.lr = 0x822D1524;
	sub_822CC0E8(ctx, base);
loc_822D1524:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1330) {
	__imp__sub_822D1330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D152C) {
	__imp__sub_822D152C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D1538;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822cc048
	ctx.lr = 0x822D1548;
	sub_822CC048(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1330
	ctx.lr = 0x822D1554;
	sub_822D1330(ctx, base);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1604
	if (ctx.cr6.eq) goto loc_822D1604;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82141160
	ctx.lr = 0x822D1570;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x822D1588;
	sub_822C2068(ctx, base);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// addi r9,r10,-10180
	ctx.r9.s64 = ctx.r10.s64 + -10180;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822D15A8;
	sub_822E84F0(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r6,r8,-2072
	ctx.r6.s64 = ctx.r8.s64 + -2072;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f2,13220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lfs f1,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x822c1ce8
	ctx.lr = 0x822D15F0;
	sub_822C1CE8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1604:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1530) {
	__imp__sub_822D1530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x822d1330
	sub_822D1330(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1618) {
	__imp__sub_822D1618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1634) {
	__imp__sub_822D1634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1638) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1638) {
	__imp__sub_822D1638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1644) {
	__imp__sub_822D1644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1648) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1648) {
	__imp__sub_822D1648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1654) {
	__imp__sub_822D1654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1658) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1658) {
	__imp__sub_822D1658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1664) {
	__imp__sub_822D1664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1668) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1668) {
	__imp__sub_822D1668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1674) {
	__imp__sub_822D1674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1678) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822cc818
	sub_822CC818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1678) {
	__imp__sub_822D1678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1684) {
	__imp__sub_822D1684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D1690;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d16b8
	if (!ctx.cr6.eq) goto loc_822D16B8;
loc_822D16AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D16B8:
	// bl 0x82310110
	ctx.lr = 0x822D16BC;
	sub_82310110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x822d16ac
	if (!ctx.cr6.gt) goto loc_822D16AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d1708
	if (!ctx.cr6.eq) goto loc_822D1708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cc818
	ctx.lr = 0x822D1708;
	sub_822CC818(ctx, base);
loc_822D1708:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1688) {
	__imp__sub_822D1688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1720) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d175c
	if (!ctx.cr6.eq) goto loc_822D175C;
loc_822D1740:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
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
loc_822D175C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d1740
	if (!ctx.cr6.eq) goto loc_822D1740;
	// bl 0x82310110
	ctx.lr = 0x822D1768;
	sub_82310110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822d17b8
	if (ctx.cr6.gt) goto loc_822D17B8;
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
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
loc_822D17B8:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822d17dc
	if (!ctx.cr6.gt) goto loc_822D17DC;
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
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
loc_822D17DC:
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fmadds f1,f9,f0,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
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

PPC_WEAK_FUNC(sub_822D1720) {
	__imp__sub_822D1720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1804) {
	__imp__sub_822D1804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
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

PPC_WEAK_FUNC(sub_822D1808) {
	__imp__sub_822D1808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
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

PPC_WEAK_FUNC(sub_822D1820) {
	__imp__sub_822D1820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
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

PPC_WEAK_FUNC(sub_822D1838) {
	__imp__sub_822D1838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,636(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
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

PPC_WEAK_FUNC(sub_822D1850) {
	__imp__sub_822D1850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822D1870;
	__savegprlr_22(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-2240
	ctx.r27.s64 = ctx.r11.s64 + -2240;
	// addi r26,r10,-10132
	ctx.r26.s64 = ctx.r10.s64 + -10132;
	// addi r25,r9,-10140
	ctx.r25.s64 = ctx.r9.s64 + -10140;
loc_822D18A8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d18cc
	if (ctx.cr6.eq) goto loc_822D18CC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d18cc
	if (ctx.cr6.eq) goto loc_822D18CC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1974
	if (!ctx.cr6.eq) goto loc_822D1974;
loc_822D18CC:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822D18DC;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1980
	if (ctx.cr6.eq) goto loc_822D1980;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x822D18F0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1914
	if (!ctx.cr6.eq) goto loc_822D1914;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d23d8
	ctx.lr = 0x822D1904;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1980
	if (ctx.cr6.eq) goto loc_822D1980;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x822d18a8
	goto loc_822D18A8;
loc_822D1914:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x822D1920;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1944
	if (!ctx.cr6.eq) goto loc_822D1944;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d23d8
	ctx.lr = 0x822D1934;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1980
	if (ctx.cr6.eq) goto loc_822D1980;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x822d18a8
	goto loc_822D18A8;
loc_822D1944:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x822D1950;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d18a8
	if (!ctx.cr6.eq) goto loc_822D18A8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d23d8
	ctx.lr = 0x822D1964;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1980
	if (ctx.cr6.eq) goto loc_822D1980;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822d18a8
	goto loc_822D18A8;
loc_822D1974:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822D1980:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-10172
	ctx.r4.s64 = ctx.r11.s64 + -10172;
	// bl 0x82280b08
	ctx.lr = 0x822D1990;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1868) {
	__imp__sub_822D1868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D199C) {
	__imp__sub_822D199C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D19A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,-31048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D19A0) {
	__imp__sub_822D19A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D19C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82310110
	ctx.lr = 0x822D19E8;
	sub_82310110(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r8,300
	ctx.r10.s64 = ctx.r8.s64 + 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// lfs f0,-31048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822d1a3c
	if (ctx.cr6.eq) goto loc_822D1A3C;
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822d1a3c
	if (!ctx.cr6.gt) goto loc_822D1A3C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822D1A3C:
	// lwz r9,412(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 412);
	// addi r10,r8,412
	ctx.r10.s64 = ctx.r8.s64 + 412;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d1a78
	if (ctx.cr6.eq) goto loc_822D1A78;
	// lfs f13,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822d1a78
	if (!ctx.cr6.gt) goto loc_822D1A78;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822D1A78:
	// lwz r9,524(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 524);
	// addi r10,r8,524
	ctx.r10.s64 = ctx.r8.s64 + 524;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d1ab4
	if (ctx.cr6.eq) goto loc_822D1AB4;
	// lfs f13,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822d1ab4
	if (!ctx.cr6.gt) goto loc_822D1AB4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822D1AB4:
	// lwz r9,636(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 636);
	// addi r10,r8,636
	ctx.r10.s64 = ctx.r8.s64 + 636;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d1aec
	if (ctx.cr6.eq) goto loc_822D1AEC;
	// lfs f13,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822d1aec
	if (!ctx.cr6.gt) goto loc_822D1AEC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822D1AEC:
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

PPC_WEAK_FUNC(sub_822D19C8) {
	__imp__sub_822D19C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1B04) {
	__imp__sub_822D1B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1B08) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// stw r10,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
	// stw r10,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r10.u32);
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// stw r10,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r10.u32);
	// stw r10,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r10.u32);
	// stw r10,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1B08) {
	__imp__sub_822D1B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1B38) {
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
	// bl 0x822d19c8
	ctx.lr = 0x822D1B58;
	sub_822D19C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1b74
	if (!ctx.cr6.eq) goto loc_822D1B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822D1B68;
	sub_822C10D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822cc818
	ctx.lr = 0x822D1B70;
	sub_822CC818(ctx, base);
	// b 0x822d1b7c
	goto loc_822D1B7C;
loc_822D1B74:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_822D1B7C:
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

PPC_WEAK_FUNC(sub_822D1B38) {
	__imp__sub_822D1B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1B94) {
	__imp__sub_822D1B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D1BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c5a88
	ctx.lr = 0x822D1BC0;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1d08
	if (ctx.cr6.eq) goto loc_822D1D08;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x822e8058
	ctx.lr = 0x822D1BD8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1c18
	if (!ctx.cr6.eq) goto loc_822D1C18;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,300
	ctx.r31.s64 = ctx.r11.s64 + 300;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// bl 0x82310110
	ctx.lr = 0x822D1BF8;
	sub_82310110(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1868
	ctx.lr = 0x822D1C10;
	sub_822D1868(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1C18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9828
	ctx.r4.s64 = ctx.r11.s64 + -9828;
	// bl 0x822e8058
	ctx.lr = 0x822D1C28;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1c68
	if (!ctx.cr6.eq) goto loc_822D1C68;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,412
	ctx.r31.s64 = ctx.r11.s64 + 412;
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
	// bl 0x82310110
	ctx.lr = 0x822D1C48;
	sub_82310110(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1868
	ctx.lr = 0x822D1C60;
	sub_822D1868(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1C68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9752
	ctx.r4.s64 = ctx.r11.s64 + -9752;
	// bl 0x822e8058
	ctx.lr = 0x822D1C78;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1cb8
	if (!ctx.cr6.eq) goto loc_822D1CB8;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,524
	ctx.r31.s64 = ctx.r11.s64 + 524;
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// bl 0x82310110
	ctx.lr = 0x822D1C98;
	sub_82310110(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1868
	ctx.lr = 0x822D1CB0;
	sub_822D1868(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1CB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9756
	ctx.r4.s64 = ctx.r11.s64 + -9756;
	// bl 0x822e8058
	ctx.lr = 0x822D1CC8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1d08
	if (!ctx.cr6.eq) goto loc_822D1D08;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,636
	ctx.r31.s64 = ctx.r11.s64 + 636;
	// stw r10,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r10.u32);
	// bl 0x82310110
	ctx.lr = 0x822D1CE8;
	sub_82310110(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1868
	ctx.lr = 0x822D1D00;
	sub_822D1868(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1D08:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-10128
	ctx.r4.s64 = ctx.r11.s64 + -10128;
	// bl 0x82280b08
	ctx.lr = 0x822D1D18;
	sub_82280B08(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1B98) {
	__imp__sub_822D1B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D1D28;
	__savegprlr_29(ctx, base);
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
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r11,300
	ctx.r5.s64 = ctx.r11.s64 + 300;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d1d5c
	if (ctx.cr6.eq) goto loc_822D1D5C;
	// bl 0x822d1688
	ctx.lr = 0x822D1D58;
	sub_822D1688(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822D1D5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,412
	ctx.r5.s64 = ctx.r11.s64 + 412;
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d1d88
	if (ctx.cr6.eq) goto loc_822D1D88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1688
	ctx.lr = 0x822D1D84;
	sub_822D1688(ctx, base);
	// or r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 | ctx.r29.u64;
loc_822D1D88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,524
	ctx.r5.s64 = ctx.r11.s64 + 524;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d1db4
	if (ctx.cr6.eq) goto loc_822D1DB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1688
	ctx.lr = 0x822D1DB0;
	sub_822D1688(ctx, base);
	// or r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 | ctx.r29.u64;
loc_822D1DB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,636
	ctx.r5.s64 = ctx.r11.s64 + 636;
	// lwz r10,636(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d1de8
	if (ctx.cr6.eq) goto loc_822D1DE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1688
	ctx.lr = 0x822D1DDC;
	sub_822D1688(ctx, base);
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1DE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1D20) {
	__imp__sub_822D1D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1DF4) {
	__imp__sub_822D1DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1DF8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1DF8) {
	__imp__sub_822D1DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E08) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1E08) {
	__imp__sub_822D1E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r5,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// beq cr6,0x822d1e48
	if (ctx.cr6.eq) goto loc_822D1E48;
	// ori r9,r5,2
	ctx.r9.u64 = ctx.r5.u64 | 2;
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stwx r8,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// blr 
	return;
loc_822D1E48:
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1E20) {
	__imp__sub_822D1E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1E54) {
	__imp__sub_822D1E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1E58) {
	__imp__sub_822D1E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E60) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1E60) {
	__imp__sub_822D1E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1e8c
	if (ctx.cr6.eq) goto loc_822D1E8C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822D1E8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1E70) {
	__imp__sub_822D1E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1E94) {
	__imp__sub_822D1E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D1EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1f78
	if (ctx.cr6.eq) goto loc_822D1F78;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1f78
	if (ctx.cr6.eq) goto loc_822D1F78;
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1f78
	if (ctx.cr6.eq) goto loc_822D1F78;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1f78
	if (ctx.cr6.eq) goto loc_822D1F78;
	// bl 0x822e0578
	ctx.lr = 0x822D1EE0;
	sub_822E0578(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822c5a88
	ctx.lr = 0x822D1EFC;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1f48
	if (ctx.cr6.eq) goto loc_822D1F48;
loc_822D1F04:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x822d1f1c
	if (!ctx.cr6.eq) goto loc_822D1F1C;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1f30
	if (ctx.cr6.eq) goto loc_822D1F30;
loc_822D1F1C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x822D1F28;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1f60
	if (ctx.cr6.eq) goto loc_822D1F60;
loc_822D1F30:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5a88
	ctx.lr = 0x822D1F40;
	sub_822C5A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1f04
	if (!ctx.cr6.eq) goto loc_822D1F04;
loc_822D1F48:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1F60:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D1F78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1E98) {
	__imp__sub_822D1E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1F84) {
	__imp__sub_822D1F84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,176
	ctx.r11.s64 = ctx.r10.s64 + 176;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822D1FAC:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d1fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D1FAC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1F88) {
	__imp__sub_822D1F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1FBC) {
	__imp__sub_822D1FBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,93
	ctx.r11.s64 = ctx.r3.s64 + 93;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// bgt cr6,0x822d205c
	if (ctx.cr6.gt) goto loc_822D205C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
loc_822D1FE4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822d2044
	if (ctx.cr6.lt) goto loc_822D2044;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d2044
	if (ctx.cr6.eq) goto loc_822D2044;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,94
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 94, ctx.xer);
	// bne cr6,0x822d2044
	if (!ctx.cr6.eq) goto loc_822D2044;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d2044
	if (ctx.cr6.eq) goto loc_822D2044;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x822d2044
	if (ctx.cr6.eq) goto loc_822D2044;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822d2044
	if (ctx.cr6.lt) goto loc_822D2044;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822d2044
	if (ctx.cr6.gt) goto loc_822D2044;
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// b 0x822d2050
	goto loc_822D2050;
loc_822D2044:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_822D2050:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1fe4
	if (!ctx.cr6.eq) goto loc_822D1FE4;
	// blr 
	return;
loc_822D205C:
	// add. r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d20ac
	if (ctx.cr0.eq) goto loc_822D20AC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D2068:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x822d20ac
	if (!ctx.cr6.eq) goto loc_822D20AC;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d20ac
	if (ctx.cr6.eq) goto loc_822D20AC;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x822d20ac
	if (ctx.cr6.eq) goto loc_822D20AC;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822d20ac
	if (ctx.cr6.lt) goto loc_822D20AC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822d20ac
	if (ctx.cr6.gt) goto loc_822D20AC;
	// addic. r10,r10,2
	ctx.xer.ca = ctx.r10.u32 > 4294967293;
	ctx.r10.s64 = ctx.r10.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// bne 0x822d2068
	if (!ctx.cr0.eq) goto loc_822D2068;
loc_822D20AC:
	// lbzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// b 0x822d205c
	goto loc_822D205C;
}

PPC_WEAK_FUNC(sub_822D1FC0) {
	__imp__sub_822D1FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D20CC) {
	__imp__sub_822D20CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D20D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D20EC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822d20ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D20EC;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2130
	if (!ctx.cr6.eq) goto loc_822D2130;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2130
	if (!ctx.cr6.eq) goto loc_822D2130;
	// stb r7,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r7.u8);
	// stb r8,21(r4)
	PPC_STORE_U8(ctx.r4.u32 + 21, ctx.r8.u8);
loc_822D2130:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r1,-36
	ctx.r9.s64 = ctx.r1.s64 + -36;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,176
	ctx.r11.s64 = ctx.r10.s64 + 176;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_822D2154:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822d2154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2154;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
loc_822D2184:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822d2184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2184;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D20D0) {
	__imp__sub_822D20D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D2194) {
	__imp__sub_822D2194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D21A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d2210
	if (ctx.cr6.eq) goto loc_822D2210;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r4,4
	ctx.r29.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d21d4
	if (ctx.cr6.eq) goto loc_822D21D4;
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
loc_822D21D4:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d2210
	if (!ctx.cr6.gt) goto loc_822D2210;
	// li r5,0
	ctx.r5.s64 = 0;
loc_822D21E8:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lbz r8,17(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x822d20d0
	ctx.lr = 0x822D21FC;
	sub_822D20D0(ctx, base);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822d21e8
	if (ctx.cr6.lt) goto loc_822D21E8;
loc_822D2210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2198) {
	__imp__sub_822D2198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x822d22a4
	if (ctx.cr6.gt) goto loc_822D22A4;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8764
	ctx.r12.s64 = ctx.r12.s64 + 8764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822D229C;
	case 1:
		goto loc_822D22A4;
	case 2:
		goto loc_822D22A4;
	case 3:
		goto loc_822D22A4;
	case 4:
		goto loc_822D229C;
	case 5:
		goto loc_822D22A4;
	case 6:
		goto loc_822D22A4;
	case 7:
		goto loc_822D22A4;
	case 8:
		goto loc_822D22A4;
	case 9:
		goto loc_822D229C;
	case 10:
		goto loc_822D229C;
	case 11:
		goto loc_822D229C;
	case 12:
		goto loc_822D22A4;
	case 13:
		goto loc_822D22A4;
	case 14:
		goto loc_822D229C;
	case 15:
		goto loc_822D22A4;
	case 16:
		goto loc_822D229C;
	case 17:
		goto loc_822D229C;
	case 18:
		goto loc_822D229C;
	case 19:
		goto loc_822D22A4;
	case 20:
		goto loc_822D22A4;
	case 21:
		goto loc_822D22A4;
	case 22:
		goto loc_822D229C;
	case 23:
		goto loc_822D229C;
	default:
		return;
	}
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8868);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
	// lwz r17,8860(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 8860);
loc_822D229C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822D22A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D2218) {
	__imp__sub_822D2218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D22AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D22AC) {
	__imp__sub_822D22AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D22B0) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822d22dc
	if (!ctx.cr6.eq) goto loc_822D22DC;
	// lwz r3,388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822D22DC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-10084
	ctx.r4.s64 = ctx.r11.s64 + -10084;
	// bl 0x82280b08
	ctx.lr = 0x822D22EC;
	sub_82280B08(ctx, base);
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

PPC_WEAK_FUNC(sub_822D22B0) {
	__imp__sub_822D22B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2300) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x822d2218
	ctx.lr = 0x822D2314;
	sub_822D2218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2330
	if (ctx.cr6.eq) goto loc_822D2330;
	// lwz r3,388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822D2330:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-10032
	ctx.r4.s64 = ctx.r11.s64 + -10032;
	// bl 0x82280b08
	ctx.lr = 0x822D2340;
	sub_82280B08(ctx, base);
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

PPC_WEAK_FUNC(sub_822D2300) {
	__imp__sub_822D2300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D2354) {
	__imp__sub_822D2354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2358) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D2358) {
	__imp__sub_822D2358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D2360) {
	__imp__sub_822D2360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D2368) {
	__imp__sub_822D2368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2370) {
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
	// bl 0x822e6d78
	ctx.lr = 0x822D2388;
	sub_822E6D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d23bc
	if (ctx.cr6.eq) goto loc_822D23BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d23bc
	if (ctx.cr6.eq) goto loc_822D23BC;
	// bl 0x823deaf8
	ctx.lr = 0x822D23A0;
	sub_823DEAF8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_822D23BC:
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

PPC_WEAK_FUNC(sub_822D2370) {
	__imp__sub_822D2370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D23D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D23D4) {
	__imp__sub_822D23D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D23D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D23E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822e6d78
	ctx.lr = 0x822D23F0;
	sub_822E6D78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-8684
	ctx.r4.s64 = ctx.r11.s64 + -8684;
	// bl 0x822e8068
	ctx.lr = 0x822D2400;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d241c
	if (!ctx.cr6.eq) goto loc_822D241C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e6d78
	ctx.lr = 0x822D2410;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822d2420
	goto loc_822D2420;
loc_822D241C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822D2420:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d246c
	if (ctx.cr6.eq) goto loc_822D246C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d246c
	if (ctx.cr6.eq) goto loc_822D246C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dec00
	ctx.lr = 0x822D243C;
	sub_823DEC00(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2460
	if (ctx.cr6.eq) goto loc_822D2460;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_822D2460:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D246C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D23D8) {
	__imp__sub_822D23D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2478) {
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
	// bl 0x822d23d8
	ctx.lr = 0x822D2498;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d24e0
	if (ctx.cr6.eq) goto loc_822D24E0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d23d8
	ctx.lr = 0x822D24AC;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d24e0
	if (ctx.cr6.eq) goto loc_822D24E0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d23d8
	ctx.lr = 0x822D24C0;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d24e0
	if (ctx.cr6.eq) goto loc_822D24E0;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d23d8
	ctx.lr = 0x822D24D4;
	sub_822D23D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x822d24e4
	if (!ctx.cr6.eq) goto loc_822D24E4;
loc_822D24E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D24E4:
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

PPC_WEAK_FUNC(sub_822D2478) {
	__imp__sub_822D2478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D24FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D24FC) {
	__imp__sub_822D24FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2500) {
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
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822d25b4
	if (ctx.cr6.eq) goto loc_822D25B4;
	// lwz r11,360(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d2558
	if (ctx.cr6.eq) goto loc_822D2558;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1e98
	ctx.lr = 0x822D2550;
	sub_822D1E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d25b4
	if (ctx.cr6.eq) goto loc_822D25B4;
loc_822D2558:
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d25bc
	if (ctx.cr6.eq) goto loc_822D25BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bf788
	ctx.lr = 0x822D256C;
	sub_822BF788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d25bc
	if (!ctx.cr6.eq) goto loc_822D25BC;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d25b4
	if (ctx.cr6.eq) goto loc_822D25B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d25a0
	if (!ctx.cr6.eq) goto loc_822D25A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-10748
	ctx.r11.s64 = ctx.r11.s64 + -10748;
loc_822D25A0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,-9768
	ctx.r4.s64 = ctx.r10.s64 + -9768;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822D25B4;
	sub_82280900(ctx, base);
loc_822D25B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d25c0
	goto loc_822D25C0;
loc_822D25BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D25C0:
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

PPC_WEAK_FUNC(sub_822D2500) {
	__imp__sub_822D2500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D25D8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d2660
	if (ctx.cr6.eq) goto loc_822D2660;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2660
	if (!ctx.cr6.eq) goto loc_822D2660;
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822d2660
	if (ctx.cr6.eq) goto loc_822D2660;
	// lwz r11,360(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d2648
	if (ctx.cr6.eq) goto loc_822D2648;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1e98
	ctx.lr = 0x822D2640;
	sub_822D1E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2660
	if (ctx.cr6.eq) goto loc_822D2660;
loc_822D2648:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d2500
	ctx.lr = 0x822D2654;
	sub_822D2500(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x822d2664
	goto loc_822D2664;
loc_822D2660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D2664:
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

PPC_WEAK_FUNC(sub_822D25D8) {
	__imp__sub_822D25D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D267C) {
	__imp__sub_822D267C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2680) {
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
	// lwz r11,260(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822d26b0
	if (!ctx.cr6.eq) goto loc_822D26B0;
	// lwz r10,388(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// b 0x822d26c4
	goto loc_822D26C4;
loc_822D26B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-10084
	ctx.r4.s64 = ctx.r11.s64 + -10084;
	// bl 0x82280b08
	ctx.lr = 0x822D26C0;
	sub_82280B08(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_822D26C4:
	// addi r11,r31,93
	ctx.r11.s64 = ctx.r31.s64 + 93;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822d26f8
	if (ctx.cr6.lt) goto loc_822D26F8;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822d26fc
	if (ctx.cr6.lt) goto loc_822D26FC;
loc_822D26F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D26FC:
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

PPC_WEAK_FUNC(sub_822D2680) {
	__imp__sub_822D2680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822D2720;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822d27e8
	if (ctx.cr6.lt) goto loc_822D27E8;
	// lwz r10,184(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822d27e8
	if (!ctx.cr6.lt) goto loc_822D27E8;
	// lwz r10,296(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// blt 0x822d27e8
	if (ctx.cr0.lt) goto loc_822D27E8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_822D277C:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x822d25d8
	ctx.lr = 0x822D278C;
	sub_822D25D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d27ac
	if (!ctx.cr6.eq) goto loc_822D27AC;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x822d277c
	if (!ctx.cr0.lt) goto loc_822D277C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822D27AC:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822d27e8
	if (!ctx.cr6.gt) goto loc_822D27E8;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x822d27e8
	if (!ctx.cr6.lt) goto loc_822D27E8;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822d27ec
	if (ctx.cr6.lt) goto loc_822D27EC;
loc_822D27E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D27EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2718) {
	__imp__sub_822D2718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D27F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822D2800;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822d28d4
	if (ctx.cr6.lt) goto loc_822D28D4;
	// lwz r10,184(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822d28d4
	if (!ctx.cr6.lt) goto loc_822D28D4;
	// lwz r9,296(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// lwzx r28,r8,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lfs f0,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bge cr6,0x822d28d4
	if (!ctx.cr6.lt) goto loc_822D28D4;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_822D2860:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822d25d8
	ctx.lr = 0x822D2870;
	sub_822D25D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d2898
	if (!ctx.cr6.eq) goto loc_822D2898;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d2860
	if (ctx.cr6.lt) goto loc_822D2860;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822D2898:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822d28d4
	if (!ctx.cr6.gt) goto loc_822D28D4;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x822d28d4
	if (!ctx.cr6.lt) goto loc_822D28D4;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822d28d8
	if (ctx.cr6.gt) goto loc_822D28D8;
loc_822D28D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D28D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D27F8) {
	__imp__sub_822D27F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D28E4) {
	__imp__sub_822D28E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D28E8) {
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
	// bl 0x822de330
	ctx.lr = 0x822D28F8;
	sub_822DE330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2940
	if (ctx.cr6.eq) goto loc_822D2940;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-9684
	ctx.r3.s64 = ctx.r11.s64 + -9684;
	// bl 0x822e0338
	ctx.lr = 0x822D2910;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2934
	if (!ctx.cr6.eq) goto loc_822D2934;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-9700
	ctx.r3.s64 = ctx.r11.s64 + -9700;
	// bl 0x822e03a0
	ctx.lr = 0x822D2928;
	sub_822E03A0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822d2938
	if (!ctx.cr6.eq) goto loc_822D2938;
loc_822D2934:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D2938:
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// stb r11,15532(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15532, ctx.r11.u8);
loc_822D2940:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D28E8) {
	__imp__sub_822D28E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2950) {
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
	// bl 0x822de330
	ctx.lr = 0x822D2960;
	sub_822DE330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d29bc
	if (ctx.cr6.eq) goto loc_822D29BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-9684
	ctx.r3.s64 = ctx.r11.s64 + -9684;
	// bl 0x822e0338
	ctx.lr = 0x822D2978;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d299c
	if (!ctx.cr6.eq) goto loc_822D299C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-9700
	ctx.r3.s64 = ctx.r11.s64 + -9700;
	// bl 0x822e03a0
	ctx.lr = 0x822D2990;
	sub_822E03A0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822d29a0
	if (!ctx.cr6.eq) goto loc_822D29A0;
loc_822D299C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D29A0:
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stb r3,15532(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822D29BC:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lbz r3,15532(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15532);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D2950) {
	__imp__sub_822D2950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D29D4) {
	__imp__sub_822D29D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D29D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D29D8) {
	__imp__sub_822D29D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D29F4) {
	__imp__sub_822D29F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D29F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822D2A00;
	__savegprlr_23(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x822d2be4
	if (!ctx.cr6.gt) goto loc_822D2BE4;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822d2b68
	if (ctx.cr6.lt) goto loc_822D2B68;
	// addi r11,r5,-5
	ctx.r11.s64 = ctx.r5.s64 + -5;
	// subfic r27,r3,-4
	ctx.xer.ca = ctx.r3.u32 <= 4294967292;
	ctx.r27.s64 = -4 - ctx.r3.s64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	ctx.r26.s64 = 4 - ctx.r3.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r25,r3,12
	ctx.xer.ca = ctx.r3.u32 <= 12;
	ctx.r25.s64 = 12 - ctx.r3.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// subfic r24,r3,-12
	ctx.xer.ca = ctx.r3.u32 <= 4294967284;
	ctx.r24.s64 = -12 - ctx.r3.s64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_822D2A5C:
	// stw r8,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r8.u32);
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822d2a7c
	if (ctx.cr6.gt) goto loc_822D2A7C;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// b 0x822d2a94
	goto loc_822D2A94;
loc_822D2A7C:
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d2a94
	if (!ctx.cr6.gt) goto loc_822D2A94;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// add r30,r24,r11
	ctx.r30.u64 = ctx.r24.u64 + ctx.r11.u64;
loc_822D2A94:
	// add r23,r10,r3
	ctx.r23.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// stw r9,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r9.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822d2abc
	if (ctx.cr6.gt) goto loc_822D2ABC;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// b 0x822d2ad4
	goto loc_822D2AD4;
loc_822D2ABC:
	// add r23,r30,r3
	ctx.r23.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lfs f13,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d2ad4
	if (!ctx.cr6.gt) goto loc_822D2AD4;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
loc_822D2AD4:
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822d2af8
	if (ctx.cr6.gt) goto loc_822D2AF8;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// b 0x822d2b10
	goto loc_822D2B10;
loc_822D2AF8:
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d2b10
	if (!ctx.cr6.gt) goto loc_822D2B10;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_822D2B10:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r23,r10,r3
	ctx.r23.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822d2b38
	if (ctx.cr6.gt) goto loc_822D2B38;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// b 0x822d2b50
	goto loc_822D2B50;
loc_822D2B38:
	// add r23,r30,r3
	ctx.r23.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lfs f13,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d2b50
	if (!ctx.cr6.gt) goto loc_822D2B50;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// add r30,r25,r11
	ctx.r30.u64 = ctx.r25.u64 + ctx.r11.u64;
loc_822D2B50:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x822d2a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2A5C;
loc_822D2B68:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822d2be4
	if (!ctx.cr6.lt) goto loc_822D2BE4;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r8,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r29,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r28,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_822D2B94:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// add r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822d2bb8
	if (ctx.cr6.gt) goto loc_822D2BB8;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x822d2bd0
	goto loc_822D2BD0;
loc_822D2BB8:
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d2bd0
	if (!ctx.cr6.gt) goto loc_822D2BD0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_822D2BD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x822d2b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2B94;
loc_822D2BE4:
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r28,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r28.u32);
	// ble cr6,0x822d2c30
	if (!ctx.cr6.gt) goto loc_822D2C30;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r5,-2
	ctx.r8.s64 = ctx.r5.s64 + -2;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r6,r10,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stwx r6,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// stwx r7,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwzx r5,r9,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r3,r8,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stwx r3,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
	// stwx r5,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r5.u32);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D2C30:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stwx r6,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r6.u32);
	// stwx r7,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwzx r5,r11,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stwx r5,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u32);
	// stwx r3,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D29F8) {
	__imp__sub_822D29F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D2C6C) {
	__imp__sub_822D2C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D2C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823de130
	ctx.lr = 0x822D2CA0;
	sub_823DE130(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2C70) {
	__imp__sub_822D2C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822D2CB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r9,r28,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x822D2D20;
	sub_822D4AC8(ctx, base);
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f9,5804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5804);
	ctx.f9.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f6,f12,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// blt 0x822d2e88
	if (ctx.cr0.lt) goto loc_822D2E88;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
loc_822D2D68:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822d2de0
	if (!ctx.cr6.gt) goto loc_822D2DE0;
loc_822D2D98:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x822d2da8
	if (!ctx.cr6.lt) goto loc_822D2DA8;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822D2DA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822d2e80
	if (ctx.cr6.gt) goto loc_822D2E80;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x822d2d98
	if (ctx.cr6.gt) goto loc_822D2D98;
loc_822D2DE0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x822d2e48
	if (ctx.cr6.gt) goto loc_822D2E48;
loc_822D2E10:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822d2e80
	if (ctx.cr6.gt) goto loc_822D2E80;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822d2e10
	if (!ctx.cr6.gt) goto loc_822D2E10;
loc_822D2E48:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x822d2e58
	if (!ctx.cr6.lt) goto loc_822D2E58;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822D2E58:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stwx r7,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r7.u32);
	// stwx r6,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
	// ble cr6,0x822d2d68
	if (!ctx.cr6.gt) goto loc_822D2D68;
loc_822D2E80:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x822d2e94
	if (!ctx.cr6.lt) goto loc_822D2E94;
loc_822D2E88:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822D2E94:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r25,1
	ctx.r28.s64 = ctx.r25.s64 + 1;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// subf r7,r28,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r28.s64;
	// lwzx r22,r11,r29
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r27,r9,r26
	ctx.r27.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stwx r22,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r22.u32);
	// bl 0x823de130
	ctx.lr = 0x822D2ECC;
	sub_823DE130(ctx, base);
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822d2ee8
	if (!ctx.cr6.eq) goto loc_822D2EE8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822D2EE8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822d2ef4
	if (ctx.cr6.eq) goto loc_822D2EF4;
	// addi r23,r25,2
	ctx.r23.s64 = ctx.r25.s64 + 2;
loc_822D2EF4:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d2cb0
	ctx.lr = 0x822D2F10;
	sub_822D2CB0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d2cb0
	ctx.lr = 0x822D2F30;
	sub_822D2CB0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2CB0) {
	__imp__sub_822D2CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822D2F40;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r6,4
	ctx.r24.s64 = ctx.r6.s64 + 4;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x822D2F98;
	sub_822D4AC8(ctx, base);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r31,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r31.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f8,-30864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30864);
	ctx.f8.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f9,5804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5804);
	ctx.f9.f64 = double(temp.f32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f5,f12,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// blt 0x822d3140
	if (ctx.cr0.lt) goto loc_822D3140;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
loc_822D2FEC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f12,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x822d3064
	if (ctx.cr6.lt) goto loc_822D3064;
loc_822D301C:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x822d302c
	if (!ctx.cr6.lt) goto loc_822D302C;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_822D302C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822d3130
	if (ctx.cr6.gt) goto loc_822D3130;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f12,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822d301c
	if (!ctx.cr6.lt) goto loc_822D301C;
loc_822D3064:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x822d3074
	if (!ctx.cr6.gt) goto loc_822D3074;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_822D3074:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f12,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x822d30ec
	if (ctx.cr6.gt) goto loc_822D30EC;
loc_822D30A4:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x822d30b4
	if (!ctx.cr6.gt) goto loc_822D30B4;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_822D30B4:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822d3130
	if (ctx.cr6.gt) goto loc_822D3130;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f12,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822d30a4
	if (!ctx.cr6.gt) goto loc_822D30A4;
loc_822D30EC:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x822d30fc
	if (!ctx.cr6.lt) goto loc_822D30FC;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_822D30FC:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stwx r7,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r7.u32);
	// bne cr6,0x822d3120
	if (!ctx.cr6.eq) goto loc_822D3120;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_822D3120:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x822d2fec
	if (!ctx.cr6.gt) goto loc_822D2FEC;
loc_822D3130:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x822d314c
	if (!ctx.cr6.lt) goto loc_822D314C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x822d314c
	if (!ctx.cr6.lt) goto loc_822D314C;
loc_822D3140:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822D314C:
	// li r28,2
	ctx.r28.s64 = 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822d31d4
	if (ctx.cr6.lt) goto loc_822D31D4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r28,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r28.u32);
	// bl 0x823de130
	ctx.lr = 0x822D3180;
	sub_823DE130(ctx, base);
	// stw r28,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r28.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822d31d4
	if (!ctx.cr6.gt) goto loc_822D31D4;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d2cb0
	ctx.lr = 0x822D31B0;
	sub_822D2CB0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d2cb0
	ctx.lr = 0x822D31D0;
	sub_822D2CB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822D31D4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x822d3268
	if (ctx.cr6.lt) goto loc_822D3268;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// lwzx r25,r11,r29
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stwx r25,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u32);
	// bl 0x823de130
	ctx.lr = 0x822D320C;
	sub_823DE130(ctx, base);
	// subf r7,r30,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r30.s64;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r30,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r30.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822d3268
	if (ctx.cr0.eq) goto loc_822D3268;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d2cb0
	ctx.lr = 0x822D3244;
	sub_822D2CB0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d2cb0
	ctx.lr = 0x822D3264;
	sub_822D2CB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822D3268:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2F38) {
	__imp__sub_822D2F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3274) {
	__imp__sub_822D3274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x822d3320
	if (ctx.cr6.lt) goto loc_822D3320;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D329C:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfsu f5,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d329c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D329C;
loc_822D3320:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D333C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfsu f9,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d333c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D333C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3278) {
	__imp__sub_822D3278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3364) {
	__imp__sub_822D3364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D3370;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f30,f13
	ctx.f30.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822d3278
	ctx.lr = 0x822D33A8;
	sub_822D3278(ctx, base);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x822d29f8
	ctx.lr = 0x822D33B8;
	sub_822D29F8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2f38
	ctx.lr = 0x822D33CC;
	sub_822D2F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x822d348c
	if (ctx.cr6.lt) goto loc_822D348C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D33F8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + ctx.r31.u64;
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f10,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfsx f6,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// fsubs f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// stfs f3,24(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfsx f2,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// stfs f1,28(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d33f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D33F8;
loc_822D348C:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822d34e0
	if (!ctx.cr6.lt) goto loc_822D34E0;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822D34B8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfsu f11,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d34b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D34B8;
loc_822D34E0:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3368) {
	__imp__sub_822D3368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D34F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822D34F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823df940
	ctx.lr = 0x822D3514;
	sub_823DF940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823df940
	ctx.lr = 0x822D3528;
	sub_823DF940(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d3278
	ctx.lr = 0x822D3544;
	sub_822D3278(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d29f8
	ctx.lr = 0x822D3554;
	sub_822D29F8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,-2
	ctx.r5.s64 = ctx.r31.s64 + -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d2f38
	ctx.lr = 0x822D3564;
	sub_822D2F38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D34F0) {
	__imp__sub_822D34F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D356C) {
	__imp__sub_822D356C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3570) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dacd8
	sub_822DACD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3570) {
	__imp__sub_822D3570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3574) {
	__imp__sub_822D3574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3578) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dabb0
	sub_822DABB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3578) {
	__imp__sub_822D3578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D357C) {
	__imp__sub_822D357C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3580) {
	__imp__sub_822D3580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3584) {
	__imp__sub_822D3584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822D3590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d35e8
	if (ctx.cr6.eq) goto loc_822D35E8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r29,r3,119
	ctx.xer.ca = ctx.r3.u32 <= 119;
	ctx.r29.s64 = 119 - ctx.r3.s64;
loc_822D35B0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822D35BC;
	sub_823DFA20(ctx, base);
	// cmpwi cr6,r3,46
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 46, ctx.xer);
	// beq cr6,0x822d35e8
	if (ctx.cr6.eq) goto loc_822D35E8;
	// cmpwi cr6,r3,92
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 92, ctx.xer);
	// bne cr6,0x822d35d0
	if (!ctx.cr6.eq) goto loc_822D35D0;
	// li r3,47
	ctx.r3.s64 = 47;
loc_822D35D0:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d35b0
	if (!ctx.cr6.eq) goto loc_822D35B0;
loc_822D35E8:
	// srawi r11,r30,10
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 10;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// xor r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// srawi r8,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 10;
	// xor r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3588) {
	__imp__sub_822D3588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3608) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227fe28
	sub_8227FE28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3608) {
	__imp__sub_822D3608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D360C) {
	__imp__sub_822D360C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d3678
	if (ctx.cr6.eq) goto loc_822D3678;
	// li r6,92
	ctx.r6.s64 = 92;
loc_822D3630:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 47, ctx.xer);
	// beq cr6,0x822d3654
	if (ctx.cr6.eq) goto loc_822D3654;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// beq cr6,0x822d3654
	if (ctx.cr6.eq) goto loc_822D3654;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x822d3668
	goto loc_822D3668;
loc_822D3654:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d366c
	if (!ctx.cr6.eq) goto loc_822D366C;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// li r8,1
	ctx.r8.s64 = 1;
loc_822D3668:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822D366C:
	// lbzu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d3630
	if (!ctx.cr6.eq) goto loc_822D3630;
loc_822D3678:
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3610) {
	__imp__sub_822D3610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822D3688;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D36A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d36a0
	if (!ctx.cr6.eq) goto loc_822D36A0;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822D36C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d36c0
	if (!ctx.cr6.eq) goto loc_822D36C0;
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822D36E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d36e0
	if (!ctx.cr6.eq) goto loc_822D36E0;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x822d3720
	if (ctx.cr6.lt) goto loc_822D3720;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-9644
	ctx.r4.s64 = ctx.r11.s64 + -9644;
	// bl 0x822830e8
	ctx.lr = 0x822D3720;
	sub_822830E8(ctx, base);
loc_822D3720:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822D3730;
	sub_823DE1F0(ctx, base);
	// li r27,47
	ctx.r27.s64 = 47;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stbx r27,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x823de1f0
	ctx.lr = 0x822D374C;
	sub_823DE1F0(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// stb r27,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r27.u8);
	// bl 0x823de1f0
	ctx.lr = 0x822D3768;
	sub_823DE1F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d3610
	ctx.lr = 0x822D3770;
	sub_822D3610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3680) {
	__imp__sub_822D3680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3778) {
	PPC_FUNC_PROLOGUE();
	// b 0x822d3680
	sub_822D3680(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3778) {
	__imp__sub_822D3778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D377C) {
	__imp__sub_822D377C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3780) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3780) {
	__imp__sub_822D3780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3788) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8227fdd8
	sub_8227FDD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3788) {
	__imp__sub_822D3788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3794) {
	__imp__sub_822D3794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D37B0;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D37C4;
	sub_822D3680(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3798) {
	__imp__sub_822D3798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D37DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D37DC) {
	__imp__sub_822D37DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D37E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D37F8;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D380C;
	sub_822D3680(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D37E0) {
	__imp__sub_822D37E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3824) {
	__imp__sub_822D3824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D3840;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3854;
	sub_822D3680(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3828) {
	__imp__sub_822D3828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D386C) {
	__imp__sub_822D386C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3870) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D3890;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D38A4;
	sub_822D3680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fd20
	ctx.lr = 0x822D38AC;
	sub_8227FD20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d38c0
	if (!ctx.cr6.eq) goto loc_822D38C0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d38c4
	goto loc_822D38C4;
loc_822D38C0:
	// bl 0x8227fe28
	ctx.lr = 0x822D38C4;
	sub_8227FE28(ctx, base);
loc_822D38C4:
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

PPC_WEAK_FUNC(sub_822D3870) {
	__imp__sub_822D3870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D38DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D38DC) {
	__imp__sub_822D38DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D38E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D3900;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3914;
	sub_822D3680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fd20
	ctx.lr = 0x822D391C;
	sub_8227FD20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3930
	if (!ctx.cr6.eq) goto loc_822D3930;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d3934
	goto loc_822D3934;
loc_822D3930:
	// bl 0x8227fe28
	ctx.lr = 0x822D3934;
	sub_8227FE28(ctx, base);
loc_822D3934:
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

PPC_WEAK_FUNC(sub_822D38E0) {
	__imp__sub_822D38E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D394C) {
	__imp__sub_822D394C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3950) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D3970;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3984;
	sub_822D3680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fd20
	ctx.lr = 0x822D398C;
	sub_8227FD20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d39a0
	if (!ctx.cr6.eq) goto loc_822D39A0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d39a4
	goto loc_822D39A4;
loc_822D39A0:
	// bl 0x8227fe28
	ctx.lr = 0x822D39A4;
	sub_8227FE28(ctx, base);
loc_822D39A4:
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

PPC_WEAK_FUNC(sub_822D3950) {
	__imp__sub_822D3950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D39BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D39BC) {
	__imp__sub_822D39BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D39C0) {
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
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,15540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15540, ctx.r11.u32);
	// bl 0x822ec488
	ctx.lr = 0x822D39EC;
	sub_822EC488(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-28736
	ctx.r4.s64 = ctx.r9.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3A00;
	sub_822D3680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fd20
	ctx.lr = 0x822D3A08;
	sub_8227FD20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3a1c
	if (!ctx.cr6.eq) goto loc_822D3A1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d3a20
	goto loc_822D3A20;
loc_822D3A1C:
	// bl 0x8227fe28
	ctx.lr = 0x822D3A20;
	sub_8227FE28(ctx, base);
loc_822D3A20:
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

PPC_WEAK_FUNC(sub_822D39C0) {
	__imp__sub_822D39C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3A38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D3A58;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3A6C;
	sub_822D3680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fd20
	ctx.lr = 0x822D3A74;
	sub_8227FD20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3a88
	if (!ctx.cr6.eq) goto loc_822D3A88;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d3a8c
	goto loc_822D3A8C;
loc_822D3A88:
	// bl 0x8227fe28
	ctx.lr = 0x822D3A8C;
	sub_8227FE28(ctx, base);
loc_822D3A8C:
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

PPC_WEAK_FUNC(sub_822D3A38) {
	__imp__sub_822D3A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3AA4) {
	__imp__sub_822D3AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3AA8) {
	__imp__sub_822D3AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d3ac0
	if (!ctx.cr6.eq) goto loc_822D3AC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822D3AC0:
	// b 0x8227fc38
	sub_8227FC38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3AB0) {
	__imp__sub_822D3AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3AC4) {
	__imp__sub_822D3AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3AC8) {
	__imp__sub_822D3AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3AD0) {
	__imp__sub_822D3AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3AD4) {
	__imp__sub_822D3AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227fde0
	sub_8227FDE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3AD8) {
	__imp__sub_822D3AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3ADC) {
	__imp__sub_822D3ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822D3AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d3b08
	if (ctx.cr6.eq) goto loc_822D3B08;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d3b18
	if (!ctx.cr6.eq) goto loc_822D3B18;
loc_822D3B08:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-9600
	ctx.r4.s64 = ctx.r11.s64 + -9600;
	// bl 0x822830e8
	ctx.lr = 0x822D3B18;
	sub_822830E8(ctx, base);
loc_822D3B18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c0
	ctx.lr = 0x822D3B24;
	sub_822D39C0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822d3b50
	if (!ctx.cr6.eq) goto loc_822D3B50;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d3b44
	if (ctx.cr6.eq) goto loc_822D3B44;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_822D3B44:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822D3B50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d3b7c
	if (ctx.cr6.eq) goto loc_822D3B7C;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x822dacd8
	ctx.lr = 0x822D3B60;
	sub_822DACD8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8227fc38
	ctx.lr = 0x822D3B74;
	sub_8227FC38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
loc_822D3B7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227fdd8
	ctx.lr = 0x822D3B84;
	sub_8227FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3AE0) {
	__imp__sub_822D3AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dabb0
	sub_822DABB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3B90) {
	__imp__sub_822D3B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3B94) {
	__imp__sub_822D3B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ec488
	ctx.lr = 0x822D3BB0;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x822d3680
	ctx.lr = 0x822D3BC4;
	sub_822D3680(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-9568
	ctx.r4.s64 = ctx.r10.s64 + -9568;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x822D3BD8;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3B98) {
	__imp__sub_822D3B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3BF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// b 0x822dbcf8
	sub_822DBCF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3BF0) {
	__imp__sub_822D3BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3C00) {
	__imp__sub_822D3C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3C04) {
	__imp__sub_822D3C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,47
	ctx.r10.s64 = 47;
loc_822D3C18:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x822d3c30
	if (ctx.cr6.eq) goto loc_822D3C30;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x822d3c34
	if (!ctx.cr6.eq) goto loc_822D3C34;
loc_822D3C30:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_822D3C34:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d3c18
	if (!ctx.cr6.eq) goto loc_822D3C18;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3C08) {
	__imp__sub_822D3C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3C44) {
	__imp__sub_822D3C44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C48) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-25120
	ctx.r3.s64 = ctx.r11.s64 + -25120;
	// bl 0x822812b8
	ctx.lr = 0x822D3C60;
	sub_822812B8(ctx, base);
	// bl 0x822b6d78
	ctx.lr = 0x822D3C64;
	sub_822B6D78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3C48) {
	__imp__sub_822D3C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3C74) {
	__imp__sub_822D3C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D3C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,6969
	ctx.r29.s64 = 6969;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x822d3d18
	if (ctx.cr6.gt) goto loc_822D3D18;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822d3cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822D3CC0;
	// bdzf 4*cr6+eq,0x822d3cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822D3CEC;
	// bne cr6,0x822d3cec
	if (!ctx.cr6.eq) goto loc_822D3CEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c0
	ctx.lr = 0x822D3CB8;
	sub_822D39C0(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D3CC0:
	// bl 0x822ec488
	ctx.lr = 0x822D3CC4;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3CD8;
	sub_822D3680(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D3CEC:
	// bl 0x822ec488
	ctx.lr = 0x822D3CF0;
	sub_822EC488(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d3680
	ctx.lr = 0x822D3D04;
	sub_822D3680(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822D3D18:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-9548
	ctx.r4.s64 = ctx.r11.s64 + -9548;
	// bl 0x822830e8
	ctx.lr = 0x822D3D28;
	sub_822830E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3C78) {
	__imp__sub_822D3C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3D34) {
	__imp__sub_822D3D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3D38) {
	__imp__sub_822D3D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3D3C) {
	__imp__sub_822D3D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3D40) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,17248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17248);
	// bl 0x822e7ee0
	ctx.lr = 0x822D3D64;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d3d84
	if (!ctx.cr6.eq) goto loc_822D3D84;
	// li r4,95
	ctx.r4.s64 = 95;
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// bl 0x823dfb30
	ctx.lr = 0x822D3D78;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d3d88
	if (!ctx.cr6.eq) goto loc_822D3D88;
loc_822D3D84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D3D88:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_822D3D40) {
	__imp__sub_822D3D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3DA0) {
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
	// li r4,95
	ctx.r4.s64 = 95;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// bl 0x823dfb30
	ctx.lr = 0x822D3DC4;
	sub_823DFB30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d3dd8
	if (ctx.cr6.eq) goto loc_822D3DD8;
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3dec
	if (!ctx.cr0.eq) goto loc_822D3DEC;
loc_822D3DD8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-9520
	ctx.r4.s64 = ctx.r11.s64 + -9520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x822D3DEC;
	sub_822830E8(ctx, base);
loc_822D3DEC:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
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

PPC_WEAK_FUNC(sub_822D3DA0) {
	__imp__sub_822D3DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822D3E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,17248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17248);
	// bl 0x822e7ee0
	ctx.lr = 0x822D3E34;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d3e54
	if (!ctx.cr6.eq) goto loc_822D3E54;
	// li r4,95
	ctx.r4.s64 = 95;
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// bl 0x823dfb30
	ctx.lr = 0x822D3E48;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822d3e58
	if (!ctx.cr6.eq) goto loc_822D3E58;
loc_822D3E54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D3E58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3e70
	if (ctx.cr6.eq) goto loc_822D3E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3da0
	ctx.lr = 0x822D3E6C;
	sub_822D3DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822D3E70:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-9488
	ctx.r5.s64 = ctx.r11.s64 + -9488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x822D3E88;
	sub_822E8368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3E08) {
	__imp__sub_822D3E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3E90) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3E90) {
	__imp__sub_822D3E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3E98) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3E98) {
	__imp__sub_822D3E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3EA0) {
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
	ctx.lr = 0x822D3EB0;
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
	// lfs f0,24340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24340);
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

PPC_WEAK_FUNC(sub_822D3EA0) {
	__imp__sub_822D3EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3EE0) {
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
	ctx.lr = 0x822D3EF0;
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
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,24340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24340);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmsubs f1,f10,f13,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f12.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3EE0) {
	__imp__sub_822D3EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3F34) {
	__imp__sub_822D3F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3F38) {
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
	ctx.lr = 0x822D3F50;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f29,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,24340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24340);
	ctx.f27.f64 = double(temp.f32);
loc_822D3F74:
	// bl 0x823df900
	ctx.lr = 0x822D3F78;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmsubs f31,f11,f26,f29
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 - ctx.f29.f64));
	// bl 0x823df900
	ctx.lr = 0x822D3F98;
	sub_823DF900(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fmuls f10,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f27
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fmsubs f30,f6,f26,f29
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 - ctx.f29.f64));
	// fmadds f28,f30,f30,f10
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bgt cr6,0x822d3f74
	if (ctx.cr6.gt) goto loc_822D3F74;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823e0420
	ctx.lr = 0x822D3FCC;
	sub_823E0420(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f28.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x822D4000;
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

PPC_WEAK_FUNC(sub_822D3F38) {
	__imp__sub_822D3F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D4014) {
	__imp__sub_822D4014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r11,20077
	ctx.r9.u64 = ctx.r11.u64 | 20077;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,17
	ctx.r3.u64 = ctx.r7.u32 & 0x7FFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D4018) {
	__imp__sub_822D4018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4040) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsqrts f31,f1
	ctx.f31.f64 = double(float(sqrt(ctx.f1.f64)));
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,-22124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f2,f0
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x822D4078;
	sub_823DE720(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x822D4084;
	sub_823DE800(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_822D4040) {
	__imp__sub_822D4040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D40B8) {
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
	ctx.lr = 0x822D40CC;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f13,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f31,f1,f13,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,-22124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f2,f12
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fnmsubs f0,f31,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x823de720
	ctx.lr = 0x822D4104;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x822D4110;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f12,f28,f29
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x822D4134;
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

PPC_WEAK_FUNC(sub_822D40B8) {
	__imp__sub_822D40B8(ctx, base);
}

