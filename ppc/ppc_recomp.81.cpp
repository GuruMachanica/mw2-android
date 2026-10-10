#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8230DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DAD4) {
	__imp__sub_8230DAD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DAD8) {
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
	// bl 0x82370058
	ctx.lr = 0x8230DAE8;
	sub_82370058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230db24
	if (ctx.cr6.eq) goto loc_8230DB24;
loc_8230DAF0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230db24
	if (ctx.cr6.eq) goto loc_8230DB24;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8230db20
	if (ctx.cr6.eq) goto loc_8230DB20;
	// addic. r3,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r3.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230daf0
	if (!ctx.cr0.eq) goto loc_8230DAF0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8230DB20:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8230DB24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DAD8) {
	__imp__sub_8230DAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DB34) {
	__imp__sub_8230DB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DB38) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1144
	ctx.lr = 0x8230DB5C;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8230db90
	if (ctx.cr6.eq) goto loc_8230DB90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8230DB78;
	sub_823DE090(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8230dfd8
	ctx.lr = 0x8230DB84;
	sub_8230DFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x8230DB90;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_8230DB90:
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

PPC_WEAK_FUNC(sub_8230DB38) {
	__imp__sub_8230DB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DBA4) {
	__imp__sub_8230DBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DBA8) {
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
	// bl 0x8230db38
	ctx.lr = 0x8230DBC0;
	sub_8230DB38(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r11,8960
	ctx.r31.s64 = ctx.r11.s64 + 8960;
	// lbz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230dbe8
	if (!ctx.cr6.eq) goto loc_8230DBE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stb r11,10548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10548, ctx.r11.u8);
	// stw r10,14724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14724, ctx.r10.u32);
	// bl 0x822e4ec0
	ctx.lr = 0x8230DBE8;
	sub_822E4EC0(ctx, base);
loc_8230DBE8:
	// bl 0x8230dad8
	ctx.lr = 0x8230DBEC;
	sub_8230DAD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822ec498
	ctx.lr = 0x8230DBF4;
	sub_822EC498(ctx, base);
	// bl 0x8228b1b8
	ctx.lr = 0x8230DBF8;
	sub_8228B1B8(ctx, base);
	// bl 0x822e5da8
	ctx.lr = 0x8230DBFC;
	sub_822E5DA8(ctx, base);
	// bl 0x822e29b8
	ctx.lr = 0x8230DC00;
	sub_822E29B8(ctx, base);
	// bl 0x822ec420
	ctx.lr = 0x8230DC04;
	sub_822EC420(ctx, base);
	// addi r3,r31,1352
	ctx.r3.s64 = ctx.r31.s64 + 1352;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8230DC14;
	sub_822E7E98(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230DC18;
	sub_82310110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dff10
	ctx.lr = 0x8230DC20;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230dc44
	if (ctx.cr6.eq) goto loc_8230DC44;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230DC44:
	// addi r3,r31,1352
	ctx.r3.s64 = ctx.r31.s64 + 1352;
	// bl 0x82284538
	ctx.lr = 0x8230DC4C;
	sub_82284538(ctx, base);
loc_8230DC4C:
	// bl 0x82284598
	ctx.lr = 0x8230DC50;
	sub_82284598(ctx, base);
	// b 0x8230dc4c
	goto loc_8230DC4C;
}

PPC_WEAK_FUNC(sub_8230DBA8) {
	__imp__sub_8230DBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DC54) {
	__imp__sub_8230DC54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DC58) {
	__imp__sub_8230DC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DC7C) {
	__imp__sub_8230DC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370068
	ctx.lr = 0x8230DC94;
	sub_82370068(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,24284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230dcac
	if (!ctx.cr6.lt) goto loc_8230DCAC;
	// stw r9,24284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24284, ctx.r9.u32);
loc_8230DCAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DC80) {
	__imp__sub_8230DC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DCBC) {
	__imp__sub_8230DCBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DCC0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370068
	ctx.lr = 0x8230DCDC;
	sub_82370068(ctx, base);
	// lis r31,-32191
	ctx.r31.s64 = -2109669376;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,24284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24284);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230dcf4
	if (!ctx.cr6.lt) goto loc_8230DCF4;
	// stw r10,24284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24284, ctx.r10.u32);
loc_8230DCF4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370068
	ctx.lr = 0x8230DCFC;
	sub_82370068(ctx, base);
	// bl 0x822e5740
	ctx.lr = 0x8230DD00;
	sub_822E5740(ctx, base);
	// bl 0x822e5678
	ctx.lr = 0x8230DD04;
	sub_822E5678(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lwz r11,23684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23684);
	// addi r4,r7,9820
	ctx.r4.s64 = ctx.r7.s64 + 9820;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfs f31,-2680(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2680);
	ctx.f31.f64 = double(temp.f32);
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r3,16
	ctx.r3.s64 = 16;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x8230DD58;
	sub_82280900(ctx, base);
	// bl 0x822e5678
	ctx.lr = 0x8230DD5C;
	sub_822E5678(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r4,r8,-2648
	ctx.r4.s64 = ctx.r8.s64 + -2648;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// li r3,16
	ctx.r3.s64 = 16;
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x8230DD8C;
	sub_82280900(ctx, base);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,16
	ctx.r3.s64 = 16;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r4,r7,9792
	ctx.r4.s64 = ctx.r7.s64 + 9792;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x8230DDC0;
	sub_82280900(ctx, base);
	// lwz r11,24284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24284);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r3,16
	ctx.r3.s64 = 16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r4,r4,9764
	ctx.r4.s64 = ctx.r4.s64 + 9764;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x8230DDF4;
	sub_82280900(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_8230DCC0) {
	__imp__sub_8230DCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DE0C) {
	__imp__sub_8230DE0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DE10) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r6,r3,7
	ctx.r6.s64 = ctx.r3.s64 + 7;
	// addi r10,r11,19584
	ctx.r10.s64 = ctx.r11.s64 + 19584;
	// rlwinm r11,r6,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r5,r10,-9280
	ctx.r5.s64 = ctx.r10.s64 + -9280;
loc_8230DE30:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8230de30
	if (!ctx.cr0.eq) goto loc_8230DE30;
	// mr r9,r9
	ctx.r9.u64 = ctx.r9.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// ble cr6,0x8230de68
	if (!ctx.cr6.gt) goto loc_8230DE68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,9848
	ctx.r3.s64 = ctx.r11.s64 + 9848;
	// bl 0x8230d720
	ctx.lr = 0x8230DE68;
	sub_8230D720(ctx, base);
loc_8230DE68:
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DE10) {
	__imp__sub_8230DE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DE7C) {
	__imp__sub_8230DE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DE80) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,19504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230deac
	if (ctx.cr6.eq) goto loc_8230DEAC;
	// bl 0x8228bcc0
	ctx.lr = 0x8230DEA0;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230deb8
	if (!ctx.cr6.eq) goto loc_8230DEB8;
loc_8230DEAC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,9872
	ctx.r3.s64 = ctx.r11.s64 + 9872;
	// bl 0x8230d720
	ctx.lr = 0x8230DEB8;
	sub_8230D720(ctx, base);
loc_8230DEB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DE80) {
	__imp__sub_8230DE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DEC8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,9912
	ctx.r4.s64 = ctx.r11.s64 + 9912;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230DEEC;
	sub_82280900(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r10,9896
	ctx.r3.s64 = ctx.r10.s64 + 9896;
	// bl 0x8230d720
	ctx.lr = 0x8230DEF8;
	sub_8230D720(ctx, base);
}

PPC_WEAK_FUNC(sub_8230DEC8) {
	__imp__sub_8230DEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DEF8) {
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
	// bl 0x82308a58
	ctx.lr = 0x8230DF08;
	sub_82308A58(ctx, base);
	// bl 0x8212f9a8
	ctx.lr = 0x8230DF0C;
	sub_8212F9A8(ctx, base);
	// bl 0x822d28e8
	ctx.lr = 0x8230DF10;
	sub_822D28E8(ctx, base);
	// bl 0x822e0760
	ctx.lr = 0x8230DF14;
	sub_822E0760(ctx, base);
	// bl 0x8227db10
	ctx.lr = 0x8230DF18;
	sub_8227DB10(ctx, base);
	// bl 0x82121ce0
	ctx.lr = 0x8230DF1C;
	sub_82121CE0(ctx, base);
	// bl 0x822814e0
	ctx.lr = 0x8230DF20;
	sub_822814E0(ctx, base);
	// bl 0x8230d910
	ctx.lr = 0x8230DF24;
	sub_8230D910(ctx, base);
	// bl 0x822a1620
	ctx.lr = 0x8230DF28;
	sub_822A1620(ctx, base);
	// bl 0x82139158
	ctx.lr = 0x8230DF2C;
	sub_82139158(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r9,8960
	ctx.r3.s64 = ctx.r9.s64 + 8960;
	// stw r11,19504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19504, ctx.r11.u32);
	// bl 0x823e08c0
	ctx.lr = 0x8230DF48;
	sub_823E08C0(ctx, base);
}

PPC_WEAK_FUNC(sub_8230DEF8) {
	__imp__sub_8230DEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,23712
	ctx.r10.s64 = ctx.r11.s64 + 23712;
	// stb r3,1412(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1412, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DF48) {
	__imp__sub_8230DF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,23712
	ctx.r10.s64 = ctx.r11.s64 + 23712;
	// lbz r3,1412(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1412);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DF58) {
	__imp__sub_8230DF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,23712
	ctx.r10.s64 = ctx.r11.s64 + 23712;
	// lbz r9,1412(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1412);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230df80
	if (ctx.cr6.eq) goto loc_8230DF80;
	// b 0x822d3608
	sub_822D3608(ctx, base);
	return;
loc_8230DF80:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8236bd68
	sub_8236BD68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230DF68) {
	__imp__sub_8230DF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DF88) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r5,3208
	ctx.r5.s64 = 3208;
	// addi r31,r11,23712
	ctx.r31.s64 = ctx.r11.s64 + 23712;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x8230DFB0;
	sub_823DE090(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,10064
	ctx.r4.s64 = ctx.r10.s64 + 10064;
	// bl 0x822801e0
	ctx.lr = 0x8230DFC0;
	sub_822801E0(ctx, base);
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

PPC_WEAK_FUNC(sub_8230DF88) {
	__imp__sub_8230DF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DFD4) {
	__imp__sub_8230DFD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// addi r7,r9,26920
	ctx.r7.s64 = ctx.r9.s64 + 26920;
	// addi r10,r8,11336
	ctx.r10.s64 = ctx.r8.s64 + 11336;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26920, ctx.r11.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r11,984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 984, ctx.r11.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r11,988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 988, ctx.r11.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// stw r11,992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 992, ctx.r11.u32);
	// stw r11,996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 996, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DFD8) {
	__imp__sub_8230DFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E010) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// addi r10,r3,984
	ctx.r10.s64 = ctx.r3.s64 + 984;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// b 0x823f1114
	__imp__XamLoaderSetLaunchData(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230E010) {
	__imp__sub_8230E010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E038) {
	__imp__sub_8230E038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E03C) {
	__imp__sub_8230E03C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// addi r9,r11,984
	ctx.r9.s64 = ctx.r11.s64 + 984;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E040) {
	__imp__sub_8230E040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26920
	ctx.r9.s64 = ctx.r11.s64 + 26920;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E058) {
	__imp__sub_8230E058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E06C) {
	__imp__sub_8230E06C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26920
	ctx.r9.s64 = ctx.r11.s64 + 26920;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E070) {
	__imp__sub_8230E070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// addi r9,r11,984
	ctx.r9.s64 = ctx.r11.s64 + 984;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E088) {
	__imp__sub_8230E088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26920
	ctx.r9.s64 = ctx.r11.s64 + 26920;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E0A8) {
	__imp__sub_8230E0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E0C4) {
	__imp__sub_8230E0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230E0D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,984
	ctx.r30.s64 = ctx.r11.s64 + 984;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230e120
	if (!ctx.cr6.eq) goto loc_8230E120;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,26920
	ctx.r10.s64 = ctx.r11.s64 + 26920;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230e114
	if (ctx.cr6.eq) goto loc_8230E114;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
loc_8230E114:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230E120:
	// bl 0x82393cc8
	ctx.lr = 0x8230E124;
	sub_82393CC8(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8230e174
	if (ctx.cr6.eq) goto loc_8230E174;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82370188
	ctx.lr = 0x8230E138;
	sub_82370188(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230e180
	if (!ctx.cr6.eq) goto loc_8230E180;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r3,r29
	ctx.r3.s64 = ctx.r29.s32;
	// bl 0x82370190
	ctx.lr = 0x8230E150;
	sub_82370190(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x8230e180
	if (!ctx.cr6.gt) goto loc_8230E180;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// bl 0x82393d48
	ctx.lr = 0x8230E168;
	sub_82393D48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230E174:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82370180
	ctx.lr = 0x8230E17C;
	sub_82370180(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8230E180:
	// bl 0x82393d48
	ctx.lr = 0x8230E184;
	sub_82393D48(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230E0C8) {
	__imp__sub_8230E0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E194) {
	__imp__sub_8230E194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E198) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822805e8
	ctx.lr = 0x8230E1C0;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230E1C4;
	sub_822807B0(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,11336
	ctx.r11.s64 = ctx.r10.s64 + 11336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r11,984
	ctx.r8.s64 = ctx.r11.s64 + 984;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82370180
	ctx.lr = 0x8230E1E0;
	sub_82370180(ctx, base);
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

PPC_WEAK_FUNC(sub_8230E198) {
	__imp__sub_8230E198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E1F4) {
	__imp__sub_8230E1F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230E200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,11336
	ctx.r29.s64 = ctx.r11.s64 + 11336;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r29,984
	ctx.r31.s64 = ctx.r29.s64 + 984;
	// addi r28,r11,23712
	ctx.r28.s64 = ctx.r11.s64 + 23712;
loc_8230E21C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213af90
	ctx.lr = 0x8230E224;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e25c
	if (ctx.cr6.eq) goto loc_8230E25C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e25c
	if (ctx.cr6.eq) goto loc_8230E25C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x8230E24C;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230E250;
	sub_822807B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x8230E25C;
	sub_82370180(ctx, base);
loc_8230E25C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,1000
	ctx.r11.s64 = ctx.r29.s64 + 1000;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230e21c
	if (ctx.cr6.lt) goto loc_8230E21C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230E1F8) {
	__imp__sub_8230E1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E278) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E278) {
	__imp__sub_8230E278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E294) {
	__imp__sub_8230E294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E298) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E298) {
	__imp__sub_8230E298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E2B4) {
	__imp__sub_8230E2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E2B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addic r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822d3c78
	ctx.lr = 0x8230E2E0;
	sub_822D3C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x8230e324
	if (!ctx.cr6.lt) goto loc_8230E324;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230e33c
	if (ctx.cr6.eq) goto loc_8230E33C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r11,24288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24288);
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
loc_8230E324:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230e33c
	if (ctx.cr6.eq) goto loc_8230E33C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8230E33C:
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

PPC_WEAK_FUNC(sub_8230E2B8) {
	__imp__sub_8230E2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8230E358;
	__savegprlr_20(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x82310110
	ctx.lr = 0x8230E378;
	sub_82310110(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec4e8
	ctx.lr = 0x8230E384;
	sub_822EC4E8(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r27,r11,23712
	ctx.r27.s64 = ctx.r11.s64 + 23712;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r27,1416
	ctx.r10.s64 = ctx.r27.s64 + 1416;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230E3A0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230e3e4
	if (ctx.cr6.eq) goto loc_8230E3E4;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// bne cr6,0x8230e3a0
	if (!ctx.cr6.eq) goto loc_8230E3A0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230E3C8;
	sub_822EC500(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,10240
	ctx.r4.s64 = ctx.r11.s64 + 10240;
	// bl 0x82280900
	ctx.lr = 0x8230E3D8;
	sub_82280900(ctx, base);
loc_8230E3D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8230E3E4:
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823de090
	ctx.lr = 0x8230E3F4;
	sub_823DE090(ctx, base);
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// blt cr6,0x8230e4d4
	if (ctx.cr6.lt) goto loc_8230E4D4;
	// beq cr6,0x8230e474
	if (ctx.cr6.eq) goto loc_8230E474;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x8230e468
	if (ctx.cr6.lt) goto loc_8230E468;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,10220
	ctx.r4.s64 = ctx.r11.s64 + 10220;
	// li r31,130
	ctx.r31.s64 = 130;
	// lis r30,16384
	ctx.r30.s64 = 1073741824;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,128
	ctx.r28.s64 = 128;
	// bl 0x822b7268
	ctx.lr = 0x8230E42C;
	sub_822B7268(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8230E434:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230e434
	if (!ctx.cr6.eq) goto loc_8230E434;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236b9d8
	ctx.lr = 0x8230E464;
	sub_8236B9D8(ctx, base);
	// b 0x8230e4e4
	goto loc_8230E4E4;
loc_8230E468:
	// li r31,131
	ctx.r31.s64 = 131;
	// lis r28,24576
	ctx.r28.s64 = 1610612736;
	// b 0x8230e4dc
	goto loc_8230E4DC;
loc_8230E474:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,10196
	ctx.r4.s64 = ctx.r11.s64 + 10196;
	// li r31,18
	ctx.r31.s64 = 18;
	// lis r30,16384
	ctx.r30.s64 = 1073741824;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,128
	ctx.r28.s64 = 128;
	// bl 0x822b7268
	ctx.lr = 0x8230E498;
	sub_822B7268(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8230E4A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230e4a0
	if (!ctx.cr6.eq) goto loc_8230E4A0;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236b9d8
	ctx.lr = 0x8230E4D0;
	sub_8236B9D8(ctx, base);
	// b 0x8230e4e4
	goto loc_8230E4E4;
loc_8230E4D4:
	// li r31,19
	ctx.r31.s64 = 19;
	// li r28,128
	ctx.r28.s64 = 128;
loc_8230E4DC:
	// li r29,3
	ctx.r29.s64 = 3;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
loc_8230E4E4:
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x822e7e98
	ctx.lr = 0x8230E4F4;
	sub_822E7E98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r10,10188
	ctx.r5.s64 = ctx.r10.s64 + 10188;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8230E518;
	sub_822E8368(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82370210
	ctx.lr = 0x8230E538;
	sub_82370210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230e5c4
	if (ctx.cr6.eq) goto loc_8230E5C4;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230E54C;
	sub_822EC500(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230E550;
	sub_82310110(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// subf r7,r20,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r20.s64;
	// addi r4,r11,10124
	ctx.r4.s64 = ctx.r11.s64 + 10124;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230E56C;
	sub_82280900(ctx, base);
	// cmplwi cr6,r31,1392
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1392, ctx.xer);
	// bne cr6,0x8230e3d8
	if (!ctx.cr6.eq) goto loc_8230E3D8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8230e598
	if (!ctx.cr6.eq) goto loc_8230E598;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -344);
	// bl 0x822e1f18
	ctx.lr = 0x8230E58C;
	sub_822E1F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8230E598:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x8230e5a8
	if (ctx.cr6.eq) goto loc_8230E5A8;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x8230e5b8
	if (!ctx.cr6.eq) goto loc_8230E5B8;
loc_8230E5A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82370170
	ctx.lr = 0x8230E5B8;
	sub_82370170(ctx, base);
loc_8230E5B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8230E5C4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r5,r11,-23572
	ctx.r5.s64 = ctx.r11.s64 + -23572;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,265
	ctx.r4.s64 = 265;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x822e8368
	ctx.lr = 0x8230E5E0;
	sub_822E8368(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8236bb70
	ctx.lr = 0x8230E600;
	sub_8236BB70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230e62c
	if (!ctx.cr6.eq) goto loc_8230E62C;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230E614;
	sub_822EC500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370178
	ctx.lr = 0x8230E620;
	sub_82370178(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8230E62C:
	// mulli r11,r26,56
	ctx.r11.s64 = ctx.r26.s64 * 56;
	// addi r9,r27,1416
	ctx.r9.s64 = ctx.r27.s64 + 1416;
	// addi r8,r27,1420
	ctx.r8.s64 = ctx.r27.s64 + 1420;
	// addi r7,r27,1424
	ctx.r7.s64 = ctx.r27.s64 + 1424;
	// addi r10,r27,1428
	ctx.r10.s64 = ctx.r27.s64 + 1428;
	// li r5,42
	ctx.r5.s64 = 42;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stwx r22,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r22.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r24,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r24.u32);
	// bl 0x822e7e98
	ctx.lr = 0x8230E65C;
	sub_822E7E98(ctx, base);
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230E664;
	sub_822EC500(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230E668;
	sub_82310110(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// subf r6,r20,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r20.s64;
	// addi r4,r5,10092
	ctx.r4.s64 = ctx.r5.s64 + 10092;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230E680;
	sub_82280900(ctx, base);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230E350) {
	__imp__sub_8230E350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r3,r11,26948
	ctx.r3.s64 = ctx.r11.s64 + 26948;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230E690) {
	__imp__sub_8230E690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E69C) {
	__imp__sub_8230E69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E6A0) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r31,r11,23712
	ctx.r31.s64 = ctx.r11.s64 + 23712;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lbz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e6ec
	if (ctx.cr6.eq) goto loc_8230E6EC;
	// addi r5,r31,3236
	ctx.r5.s64 = ctx.r31.s64 + 3236;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x8230e2b8
	ctx.lr = 0x8230E6D8;
	sub_8230E2B8(ctx, base);
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
loc_8230E6EC:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// addi r8,r11,984
	ctx.r8.s64 = ctx.r11.s64 + 984;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230e73c
	if (!ctx.cr6.eq) goto loc_8230E73C;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,3236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3236, ctx.r10.u8);
	// lwz r11,24288(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24288);
	// stw r11,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r11.u32);
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
loc_8230E73C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230e350
	ctx.lr = 0x8230E750;
	sub_8230E350(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230e794
	if (ctx.cr6.eq) goto loc_8230E794;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// stb r11,3236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3236, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r11,24288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24288);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r10,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r10.u32);
	// stw r11,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r11.u32);
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
loc_8230E794:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// stw r11,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8230E6A0) {
	__imp__sub_8230E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230E7BC) {
	__imp__sub_8230E7BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E7C0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// beq cr6,0x8230e844
	if (ctx.cr6.eq) goto loc_8230E844;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822d3ab0
	ctx.lr = 0x8230E7F8;
	sub_822D3AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230e828
	if (!ctx.cr6.eq) goto loc_8230E828;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230e898
	if (ctx.cr6.eq) goto loc_8230E898;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r11,24296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24296);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8230e898
	goto loc_8230E898;
loc_8230E828:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230e898
	if (ctx.cr6.eq) goto loc_8230E898;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8230e898
	goto loc_8230E898;
loc_8230E844:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822d3ad8
	ctx.lr = 0x8230E84C;
	sub_822D3AD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230e87c
	if (ctx.cr6.eq) goto loc_8230E87C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230e894
	if (ctx.cr6.eq) goto loc_8230E894;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r11,24296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24296);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8230e894
	goto loc_8230E894;
loc_8230E87C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230e894
	if (ctx.cr6.eq) goto loc_8230E894;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8230E894:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8230E898:
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

PPC_WEAK_FUNC(sub_8230E7C0) {
	__imp__sub_8230E7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E8B0) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r11,23712
	ctx.r10.s64 = ctx.r11.s64 + 23712;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbz r9,1412(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1412);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230e8e8
	if (ctx.cr6.eq) goto loc_8230E8E8;
	// bl 0x8230e7c0
	ctx.lr = 0x8230E8E4;
	sub_8230E7C0(ctx, base);
	// b 0x8230e9b0
	goto loc_8230E9B0;
loc_8230E8E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230e908
	if (ctx.cr6.eq) goto loc_8230E908;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8236bed8
	ctx.lr = 0x8230E900;
	sub_8236BED8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8230e928
	goto loc_8230E928;
loc_8230E908:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82370250
	ctx.lr = 0x8230E918;
	sub_82370250(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8230E928:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230e95c
	if (!ctx.cr6.eq) goto loc_8230E95C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e954
	if (ctx.cr6.eq) goto loc_8230E954;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// lwz r11,24288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24288);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8230E954:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8230e9b0
	goto loc_8230E9B0;
loc_8230E95C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8230e994
	if (!ctx.cr6.eq) goto loc_8230E994;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e98c
	if (ctx.cr6.eq) goto loc_8230E98C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,24288
	ctx.r9.s64 = ctx.r11.s64 + 24288;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8230E98C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230e9b0
	goto loc_8230E9B0;
loc_8230E994:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e9ac
	if (ctx.cr6.eq) goto loc_8230E9AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8230E9AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230E9B0:
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

PPC_WEAK_FUNC(sub_8230E8B0) {
	__imp__sub_8230E8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230E9C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822d3ac8
	ctx.lr = 0x8230E9F8;
	sub_822D3AC8(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8230ea28
	if (ctx.cr6.eq) goto loc_8230EA28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230ea40
	if (ctx.cr6.eq) goto loc_8230EA40;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r11,24292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24292);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8230ea40
	goto loc_8230EA40;
loc_8230EA28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230ea40
	if (ctx.cr6.eq) goto loc_8230EA40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8230EA40:
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

PPC_WEAK_FUNC(sub_8230E9C8) {
	__imp__sub_8230E9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230EA58) {
	__imp__sub_8230EA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230EA64) {
	__imp__sub_8230EA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EA68) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,23712
	ctx.r31.s64 = ctx.r11.s64 + 23712;
	// lbz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230eaa0
	if (ctx.cr6.eq) goto loc_8230EAA0;
	// addi r6,r31,3224
	ctx.r6.s64 = ctx.r31.s64 + 3224;
	// bl 0x8230e9c8
	ctx.lr = 0x8230EA9C;
	sub_8230E9C8(ctx, base);
	// b 0x8230eb10
	goto loc_8230EB10;
loc_8230EAA0:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x823703c0
	ctx.lr = 0x8230EAAC;
	sub_823703C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230ead4
	if (!ctx.cr6.eq) goto loc_8230EAD4;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// stb r10,3224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3224, ctx.r10.u8);
	// lwz r11,24288(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24288);
	// stw r11,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r11.u32);
	// b 0x8230eb10
	goto loc_8230EB10;
loc_8230EAD4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8230eb04
	if (ctx.cr6.eq) goto loc_8230EB04;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// addi r9,r10,24288
	ctx.r9.s64 = ctx.r10.s64 + 24288;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3224, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r11.u32);
	// b 0x8230eb10
	goto loc_8230EB10;
loc_8230EB04:
	// stw r11,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r11.u32);
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// stw r11,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r11.u32);
loc_8230EB10:
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

PPC_WEAK_FUNC(sub_8230EA68) {
	__imp__sub_8230EA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EB28) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ebc4
	if (ctx.cr6.eq) goto loc_8230EBC4;
	// bl 0x8236b770
	ctx.lr = 0x8230EB48;
	sub_8236B770(ctx, base);
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec4e8
	ctx.lr = 0x8230EB50;
	sub_822EC4E8(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,23712
	ctx.r9.s64 = ctx.r11.s64 + 23712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,1416
	ctx.r11.s64 = ctx.r9.s64 + 1416;
loc_8230EB64:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8230eb88
	if (ctx.cr6.eq) goto loc_8230EB88;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmplwi cr6,r10,1792
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1792, ctx.xer);
	// blt cr6,0x8230eb64
	if (ctx.cr6.lt) goto loc_8230EB64;
	// b 0x8230ebbc
	goto loc_8230EBBC;
loc_8230EB88:
	// addi r10,r9,1416
	ctx.r10.s64 = ctx.r9.s64 + 1416;
	// mulli r11,r6,56
	ctx.r11.s64 = ctx.r6.s64 * 56;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r8,10188
	ctx.r5.s64 = ctx.r8.s64 + 10188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8230EBAC;
	sub_822E8368(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230EBB0;
	sub_82310110(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370178
	ctx.lr = 0x8230EBBC;
	sub_82370178(ctx, base);
loc_8230EBBC:
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230EBC4;
	sub_822EC500(ctx, base);
loc_8230EBC4:
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

PPC_WEAK_FUNC(sub_8230EB28) {
	__imp__sub_8230EB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230EBE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec4e8
	ctx.lr = 0x8230EBF0;
	sub_822EC4E8(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,23712
	ctx.r30.s64 = ctx.r11.s64 + 23712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,1416
	ctx.r11.s64 = ctx.r30.s64 + 1416;
loc_8230EC04:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8230ec34
	if (ctx.cr6.eq) goto loc_8230EC34;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmplwi cr6,r10,1792
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1792, ctx.xer);
	// blt cr6,0x8230ec04
	if (ctx.cr6.lt) goto loc_8230EC04;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230EC2C;
	sub_822EC500(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230EC34:
	// mulli r31,r9,56
	ctx.r31.s64 = ctx.r9.s64 * 56;
	// addi r11,r30,1420
	ctx.r11.s64 = ctx.r30.s64 + 1420;
	// addi r10,r30,1424
	ctx.r10.s64 = ctx.r30.s64 + 1424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r28,r31,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8230eb28
	ctx.lr = 0x8230EC50;
	sub_8230EB28(ctx, base);
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x8230EC60;
	sub_823DE090(ctx, base);
	// addi r11,r30,1428
	ctx.r11.s64 = ctx.r30.s64 + 1428;
	// li r5,42
	ctx.r5.s64 = 42;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8230EC74;
	sub_822E7E98(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370170
	ctx.lr = 0x8230EC90;
	sub_82370170(ctx, base);
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x822ec500
	ctx.lr = 0x8230EC98;
	sub_822EC500(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230EBD8) {
	__imp__sub_8230EBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230ECA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,239(r1)
	PPC_STORE_U8(ctx.r1.u32 + 239, ctx.r4.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230ed30
	if (!ctx.cr6.eq) goto loc_8230ED30;
	// addi r5,r1,239
	ctx.r5.s64 = ctx.r1.s64 + 239;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8230e0c8
	ctx.lr = 0x8230ECD4;
	sub_8230E0C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ed2c
	if (ctx.cr6.eq) goto loc_8230ED2C;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26920
	ctx.r9.s64 = ctx.r11.s64 + 26920;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r3,-372(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -372);
	// bl 0x822e1f18
	ctx.lr = 0x8230ED04;
	sub_822E1F18(ctx, base);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lwz r3,13960(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13960);
	// bl 0x8223cd58
	ctx.lr = 0x8230ED10;
	sub_8223CD58(ctx, base);
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-348(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x8230ED20;
	sub_822E1F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230ED2C:
	// lbz r30,239(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
loc_8230ED30:
	// bl 0x82280f20
	ctx.lr = 0x8230ED34;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230ee40
	if (!ctx.cr6.eq) goto loc_8230EE40;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b1d8
	ctx.lr = 0x8230ED50;
	sub_8236B1D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ee40
	if (!ctx.cr6.eq) goto loc_8230EE40;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8230ed78
	if (ctx.cr6.eq) goto loc_8230ED78;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r3,r31
	ctx.r3.s64 = ctx.r31.s32;
	// bl 0x82370190
	ctx.lr = 0x8230ED70;
	sub_82370190(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8230ed7c
	goto loc_8230ED7C;
loc_8230ED78:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8230ED7C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r9,512
	ctx.r9.s64 = 512;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// and r31,r6,r9
	ctx.r31.u64 = ctx.r6.u64 & ctx.r9.u64;
	// bl 0x82393cc8
	ctx.lr = 0x8230EDA8;
	sub_82393CC8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b1d8
	ctx.lr = 0x8230EDB8;
	sub_8236B1D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ee3c
	if (!ctx.cr6.eq) goto loc_8230EE3C;
loc_8230EDC0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8230EDC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8230edec
	if (ctx.cr6.eq) goto loc_8230EDEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230edc8
	if (ctx.cr6.eq) goto loc_8230EDC8;
loc_8230EDEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230ee3c
	if (!ctx.cr6.eq) goto loc_8230EE3C;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b628
	ctx.lr = 0x8230EE10;
	sub_8236B628(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x8230ee4c
	if (!ctx.cr6.eq) goto loc_8230EE4C;
	// bl 0x8238f158
	ctx.lr = 0x8230EE1C;
	sub_8238F158(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8230EE24;
	sub_8228B0D8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b1d8
	ctx.lr = 0x8230EE34;
	sub_8236B1D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230edc0
	if (ctx.cr6.eq) goto loc_8230EDC0;
loc_8230EE3C:
	// bl 0x82393d48
	ctx.lr = 0x8230EE40;
	sub_82393D48(ctx, base);
loc_8230EE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230EE4C:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8230ee3c
	if (!ctx.cr6.eq) goto loc_8230EE3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8236bad8
	ctx.lr = 0x8230EE64;
	sub_8236BAD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// bne cr6,0x8230ee98
	if (!ctx.cr6.eq) goto loc_8230EE98;
loc_8230EE70:
	// bl 0x8238f158
	ctx.lr = 0x8230EE74;
	sub_8238F158(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8230EE7C;
	sub_8228B0D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8236bad8
	ctx.lr = 0x8230EE8C;
	sub_8236BAD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x8230ee70
	if (ctx.cr6.eq) goto loc_8230EE70;
loc_8230EE98:
	// bl 0x82393d48
	ctx.lr = 0x8230EE9C;
	sub_82393D48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8230ee40
	if (!ctx.cr6.eq) goto loc_8230EE40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230ee40
	if (!ctx.cr6.eq) goto loc_8230EE40;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// addi r10,r3,984
	ctx.r10.s64 = ctx.r3.s64 + 984;
	// addi r7,r8,26920
	ctx.r7.s64 = ctx.r8.s64 + 26920;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r27,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r27.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230eee8
	if (ctx.cr6.eq) goto loc_8230EEE8;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x8230EEE8;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_8230EEE8:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -372);
	// bl 0x822e1f18
	ctx.lr = 0x8230EEF8;
	sub_822E1F18(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r3,13960(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13960);
	// bl 0x8223cd58
	ctx.lr = 0x8230EF04;
	sub_8223CD58(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-348(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x8230EF14;
	sub_822E1F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230ECA0) {
	__imp__sub_8230ECA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EF20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// addi r10,r3,984
	ctx.r10.s64 = ctx.r3.s64 + 984;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x823f1114
	__imp__XamLoaderSetLaunchData(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230EF20) {
	__imp__sub_8230EF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EF4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230EF4C) {
	__imp__sub_8230EF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,11336
	ctx.r10.s64 = ctx.r10.s64 + 11336;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r9,r10,984
	ctx.r9.s64 = ctx.r10.s64 + 984;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230ef80
	if (!ctx.cr6.eq) goto loc_8230EF80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,10280
	ctx.r4.s64 = ctx.r11.s64 + 10280;
	// b 0x82280c30
	sub_82280C30(ctx, base);
	return;
loc_8230EF80:
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// addi r8,r9,26920
	ctx.r8.s64 = ctx.r9.s64 + 26920;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230EF50) {
	__imp__sub_8230EF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230EF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230EF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r28,r11,23712
	ctx.r28.s64 = ctx.r11.s64 + 23712;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8230EFB4;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8230efd0
	if (!ctx.cr6.eq) goto loc_8230EFD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230EFD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236bad8
	ctx.lr = 0x8230EFE0;
	sub_8236BAD8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8230EFE8;
	sub_8236BAB0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1167
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1167, ctx.xer);
	// bne cr6,0x8230f080
	if (!ctx.cr6.eq) goto loc_8230F080;
	// addi r29,r28,41
	ctx.r29.s64 = ctx.r28.s64 + 41;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// lbzx r5,r30,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r10,r31,984
	ctx.r10.s64 = ctx.r31.s64 + 984;
	// rotlwi r11,r5,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230f02c
	if (!ctx.cr6.eq) goto loc_8230F02C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,10280
	ctx.r4.s64 = ctx.r11.s64 + 10280;
	// bl 0x82280c30
	ctx.lr = 0x8230F028;
	sub_82280C30(ctx, base);
	// b 0x8230f034
	goto loc_8230F034;
loc_8230F02C:
	// addi r9,r28,3208
	ctx.r9.s64 = ctx.r28.s64 + 3208;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8230F034:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r10,r31,984
	ctx.r10.s64 = ctx.r31.s64 + 984;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230f060
	if (ctx.cr6.eq) goto loc_8230F060;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x8230F060;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_8230F060:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x8230F070;
	sub_822E1F18(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-372(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	// bl 0x822e1f18
	ctx.lr = 0x8230F080;
	sub_822E1F18(ctx, base);
loc_8230F080:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82280760
	ctx.lr = 0x8230F08C;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230F090;
	sub_822805F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230EF90) {
	__imp__sub_8230EF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F09C) {
	__imp__sub_8230F09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F0A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228bcc0
	ctx.lr = 0x8230F0B0;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f100
	if (ctx.cr6.eq) goto loc_8230F100;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,23712
	ctx.r29.s64 = ctx.r11.s64 + 23712;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
loc_8230F0CC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f0ec
	if (ctx.cr6.eq) goto loc_8230F0EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8230f0ec
	if (!ctx.cr6.eq) goto loc_8230F0EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ef90
	ctx.lr = 0x8230F0EC;
	sub_8230EF90(ctx, base);
loc_8230F0EC:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r29,1444
	ctx.r11.s64 = ctx.r29.s64 + 1444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230f0cc
	if (ctx.cr6.lt) goto loc_8230F0CC;
loc_8230F100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F0A0) {
	__imp__sub_8230F0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F108) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82372ab0
	ctx.lr = 0x8230F12C;
	sub_82372AB0(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8230f17c
	if (ctx.cr6.eq) goto loc_8230F17C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230f160
	if (!ctx.cr6.eq) goto loc_8230F160;
	// bl 0x82372ad8
	ctx.lr = 0x8230F140;
	sub_82372AD8(ctx, base);
	// addi r11,r3,-10065
	ctx.r11.s64 = ctx.r3.s64 + -10065;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
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
loc_8230F160:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10376
	ctx.r4.s64 = ctx.r11.s64 + 10376;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230F178;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230F17C:
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

PPC_WEAK_FUNC(sub_8230F108) {
	__imp__sub_8230F108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24308);
	// b 0x8230f108
	sub_8230F108(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F190) {
	__imp__sub_8230F190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F1A8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1001
	ctx.r7.s64 = 1001;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lis r31,-32191
	ctx.r31.s64 = -2109669376;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,24312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24312);
	// bl 0x8230f108
	ctx.lr = 0x8230F1F8;
	sub_8230F108(ctx, base);
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

PPC_WEAK_FUNC(sub_8230F1A8) {
	__imp__sub_8230F1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F20C) {
	__imp__sub_8230F20C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230F218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230f24c
	if (!ctx.cr6.eq) goto loc_8230F24C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10504
	ctx.r4.s64 = ctx.r11.s64 + 10504;
	// bl 0x822830e8
	ctx.lr = 0x8230F24C;
	sub_822830E8(ctx, base);
loc_8230F24C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372a90
	ctx.lr = 0x8230F268;
	sub_82372A90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230f298
	if (!ctx.cr6.eq) goto loc_8230F298;
	// bl 0x82372ad8
	ctx.lr = 0x8230F274;
	sub_82372AD8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8230f294
	if (ctx.cr6.eq) goto loc_8230F294;
	// bl 0x822dc470
	ctx.lr = 0x8230F280;
	sub_822DC470(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,10464
	ctx.r4.s64 = ctx.r11.s64 + 10464;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230F294;
	sub_822830E8(ctx, base);
loc_8230F294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230F298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F210) {
	__imp__sub_8230F210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230F2A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r27,r11,24312
	ctx.r27.s64 = ctx.r11.s64 + 24312;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// bl 0x8230f210
	ctx.lr = 0x8230F2D4;
	sub_8230F210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8230f2fc
	if (!ctx.cr6.gt) goto loc_8230F2FC;
	// addi r5,r3,-2
	ctx.r5.s64 = ctx.r3.s64 + -2;
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de130
	ctx.lr = 0x8230F2F0;
	sub_823DE130(ctx, base);
	// addi r3,r30,-2
	ctx.r3.s64 = ctx.r30.s64 + -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230F2FC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8230f210
	ctx.lr = 0x8230F310;
	sub_8230F210(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F2A0) {
	__imp__sub_8230F2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F318) {
	PPC_FUNC_PROLOGUE();
	// b 0x823728a0
	sub_823728A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F318) {
	__imp__sub_8230F318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F31C) {
	__imp__sub_8230F31C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82372870
	ctx.lr = 0x8230F33C;
	sub_82372870(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// beq cr6,0x8230f390
	if (ctx.cr6.eq) goto loc_8230F390;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-11144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11144);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230f39c
	if (ctx.cr6.eq) goto loc_8230F39C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f39c
	if (ctx.cr6.eq) goto loc_8230F39C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stb r8,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r8.u8);
loc_8230F390:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8230F39C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,10552
	ctx.r4.s64 = ctx.r11.s64 + 10552;
	// bl 0x82280900
	ctx.lr = 0x8230F3AC;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F320) {
	__imp__sub_8230F320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F3B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8230f320
	sub_8230F320(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F3B8) {
	__imp__sub_8230F3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F3CC) {
	__imp__sub_8230F3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230F3D0) {
	__imp__sub_8230F3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F3DC) {
	__imp__sub_8230F3DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31835
	ctx.r30.s64 = -2086338560;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r29,r11,26960
	ctx.r29.s64 = ctx.r11.s64 + 26960;
	// lbz r11,26996(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230f43c
	if (!ctx.cr6.eq) goto loc_8230F43C;
loc_8230F404:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82372920
	ctx.lr = 0x8230F40C;
	sub_82372920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230f404
	if (ctx.cr6.eq) goto loc_8230F404;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f434
	if (ctx.cr6.eq) goto loc_8230F434;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10680
	ctx.r4.s64 = ctx.r11.s64 + 10680;
	// bl 0x822830e8
	ctx.lr = 0x8230F434;
	sub_822830E8(ctx, base);
loc_8230F434:
	// rlwinm r11,r31,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x1;
	// stb r11,26996(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26996, ctx.r11.u8);
loc_8230F43C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f454
	if (ctx.cr6.eq) goto loc_8230F454;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8230F454:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10628
	ctx.r4.s64 = ctx.r11.s64 + 10628;
	// bl 0x822830e8
	ctx.lr = 0x8230F464;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F3E0) {
	__imp__sub_8230F3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F470) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,27000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230f4a4
	if (!ctx.cr6.eq) goto loc_8230F4A4;
loc_8230F49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230f4d0
	goto loc_8230F4D0;
loc_8230F4A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8230f2a0
	ctx.lr = 0x8230F4B4;
	sub_8230F2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8230f49c
	if (!ctx.cr6.gt) goto loc_8230F49C;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dc448
	ctx.lr = 0x8230F4CC;
	sub_822DC448(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8230F4D0:
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

PPC_WEAK_FUNC(sub_8230F470) {
	__imp__sub_8230F470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230F4F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,1504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1504, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1504);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r8,1512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1512, ctx.r8.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8230f528
	if (ctx.cr6.eq) goto loc_8230F528;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10748
	ctx.r4.s64 = ctx.r11.s64 + 10748;
	// bl 0x822830e8
	ctx.lr = 0x8230F528;
	sub_822830E8(ctx, base);
loc_8230F528:
	// lbz r10,1508(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1508);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bne cr6,0x8230f568
	if (!ctx.cr6.eq) goto loc_8230F568;
	// lbz r10,1509(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1509);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230f568
	if (!ctx.cr6.eq) goto loc_8230F568;
	// lbz r10,1510(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1510);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230f568
	if (!ctx.cr6.eq) goto loc_8230F568;
	// lbz r10,1511(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1511);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8230f568
	if (!ctx.cr6.eq) goto loc_8230F568;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,10708
	ctx.r4.s64 = ctx.r11.s64 + 10708;
	// bl 0x82280c30
	ctx.lr = 0x8230F568;
	sub_82280C30(ctx, base);
loc_8230F568:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x822dc3e0
	ctx.lr = 0x8230F574;
	sub_822DC3E0(ctx, base);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x8230F584;
	sub_82287B40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ea0
	ctx.lr = 0x8230F590;
	sub_82287EA0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8230f5a8
	if (ctx.cr6.eq) goto loc_8230F5A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e40
	ctx.lr = 0x8230F5A8;
	sub_82287E40(ctx, base);
loc_8230F5A8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8230f5c0
	if (ctx.cr6.eq) goto loc_8230F5C0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e40
	ctx.lr = 0x8230F5C0;
	sub_82287E40(ctx, base);
loc_8230F5C0:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,24308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24308);
	// bl 0x8230f108
	ctx.lr = 0x8230F5D8;
	sub_8230F108(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F4E8) {
	__imp__sub_8230F4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F5E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8230f624
	if (!ctx.cr6.eq) goto loc_8230F624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230f1a8
	ctx.lr = 0x8230F618;
	sub_8230F1A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8230F624:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8230f63c
	if (ctx.cr6.eq) goto loc_8230F63C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10792
	ctx.r4.s64 = ctx.r11.s64 + 10792;
	// bl 0x822830e8
	ctx.lr = 0x8230F63C;
	sub_822830E8(ctx, base);
loc_8230F63C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f4e8
	ctx.lr = 0x8230F65C;
	sub_8230F4E8(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lwz r11,27008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f670
	if (ctx.cr6.eq) goto loc_8230F670;
	// twi 31,r0,22
loc_8230F670:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F5E0) {
	__imp__sub_8230F5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230F680) {
	__imp__sub_8230F680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F684) {
	__imp__sub_8230F684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F688) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230f6c8
	if (ctx.cr6.eq) goto loc_8230F6C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,10992
	ctx.r4.s64 = ctx.r11.s64 + 10992;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230F6C4;
	sub_82280900(ctx, base);
	// b 0x8230f6dc
	goto loc_8230F6DC;
loc_8230F6C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10956
	ctx.r4.s64 = ctx.r11.s64 + 10956;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230F6DC;
	sub_82280900(ctx, base);
loc_8230F6DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372a00
	ctx.lr = 0x8230F6EC;
	sub_82372A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230f724
	if (!ctx.cr6.eq) goto loc_8230F724;
	// bl 0x82372ad8
	ctx.lr = 0x8230F6FC;
	sub_82372AD8(ctx, base);
	// cmpwi cr6,r3,10047
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10047, ctx.xer);
	// beq cr6,0x8230f71c
	if (ctx.cr6.eq) goto loc_8230F71C;
	// bl 0x822dc470
	ctx.lr = 0x8230F708;
	sub_822DC470(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,10916
	ctx.r4.s64 = ctx.r11.s64 + 10916;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x8230F71C;
	sub_82280C30(ctx, base);
loc_8230F71C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230f7a8
	goto loc_8230F7A8;
loc_8230F724:
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372a60
	ctx.lr = 0x8230F748;
	sub_82372A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230f768
	if (ctx.cr6.eq) goto loc_8230F768;
	// bl 0x82372ad8
	ctx.lr = 0x8230F754;
	sub_82372AD8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,10880
	ctx.r4.s64 = ctx.r11.s64 + 10880;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8230F768;
	sub_822830E8(ctx, base);
loc_8230F768:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372a28
	ctx.lr = 0x8230F784;
	sub_82372A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230f7a4
	if (ctx.cr6.eq) goto loc_8230F7A4;
	// bl 0x82372ad8
	ctx.lr = 0x8230F790;
	sub_82372AD8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,10832
	ctx.r4.s64 = ctx.r11.s64 + 10832;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8230F7A4;
	sub_822830E8(ctx, base);
loc_8230F7A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230F7A8:
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

PPC_WEAK_FUNC(sub_8230F688) {
	__imp__sub_8230F688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,1005
	ctx.r10.s64 = 1005;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// bl 0x822dc3e0
	ctx.lr = 0x8230F7EC;
	sub_822DC3E0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x8230F7FC;
	sub_82287B40(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ed0
	ctx.lr = 0x8230F808;
	sub_82287ED0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288048
	ctx.lr = 0x8230F814;
	sub_82288048(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,24304(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24304);
	// bl 0x8230f108
	ctx.lr = 0x8230F82C;
	sub_8230F108(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230F7C0) {
	__imp__sub_8230F7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24304);
	// b 0x8230f210
	sub_8230F210(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F840) {
	__imp__sub_8230F840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F860;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,24304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24304);
	// bl 0x8230f210
	ctx.lr = 0x8230F884;
	sub_8230F210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8230f8a0
	if (!ctx.cr6.gt) goto loc_8230F8A0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dc448
	ctx.lr = 0x8230F8A0;
	sub_822DC448(ctx, base);
loc_8230F8A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F858) {
	__imp__sub_8230F858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F8AC) {
	__imp__sub_8230F8AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822dc3e0
	ctx.lr = 0x8230F8D4;
	sub_822DC3E0(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-29340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29340);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230f910
	if (ctx.cr6.eq) goto loc_8230F910;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r4,r11,11020
	ctx.r4.s64 = ctx.r11.s64 + 11020;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// li r3,14
	ctx.r3.s64 = 14;
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x8230F910;
	sub_82280900(ctx, base);
loc_8230F910:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24300);
	// bl 0x8230f108
	ctx.lr = 0x8230F928;
	sub_8230F108(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F8B0) {
	__imp__sub_8230F8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F930) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// lwz r3,24300(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24300);
	// bl 0x82372a78
	ctx.lr = 0x8230F974;
	sub_82372A78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230f99c
	if (!ctx.cr6.eq) goto loc_8230F99C;
	// bl 0x82372ad8
	ctx.lr = 0x8230F980;
	sub_82372AD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8230f99c
	if (ctx.cr6.eq) goto loc_8230F99C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,11068
	ctx.r4.s64 = ctx.r11.s64 + 11068;
	// bl 0x82280900
	ctx.lr = 0x8230F99C;
	sub_82280900(ctx, base);
loc_8230F99C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230F930) {
	__imp__sub_8230F930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230F9AC) {
	__imp__sub_8230F9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24300);
	// b 0x8230f210
	sub_8230F210(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F9B0) {
	__imp__sub_8230F9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230F9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230F9D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,24300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24300);
	// bl 0x8230f210
	ctx.lr = 0x8230F9F4;
	sub_8230F210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8230fa10
	if (!ctx.cr6.gt) goto loc_8230FA10;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dc448
	ctx.lr = 0x8230FA10;
	sub_822DC448(ctx, base);
loc_8230FA10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230F9C8) {
	__imp__sub_8230F9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FA1C) {
	__imp__sub_8230FA1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230FA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r11,26960
	ctx.r31.s64 = ctx.r11.s64 + 26960;
loc_8230FA34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372920
	ctx.lr = 0x8230FA3C;
	sub_82372920(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230fa34
	if (ctx.cr6.eq) goto loc_8230FA34;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230fa60
	if (ctx.cr6.eq) goto loc_8230FA60;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10680
	ctx.r4.s64 = ctx.r11.s64 + 10680;
	// bl 0x822830e8
	ctx.lr = 0x8230FA60;
	sub_822830E8(ctx, base);
loc_8230FA60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372850
	ctx.lr = 0x8230FA68;
	sub_82372850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230fa80
	if (ctx.cr6.eq) goto loc_8230FA80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11332
	ctx.r4.s64 = ctx.r11.s64 + 11332;
	// bl 0x822830e8
	ctx.lr = 0x8230FA80;
	sub_822830E8(ctx, base);
loc_8230FA80:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x823729e8
	ctx.lr = 0x8230FA8C;
	sub_823729E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230faa8
	if (ctx.cr6.eq) goto loc_8230FAA8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11300
	ctx.r4.s64 = ctx.r11.s64 + 11300;
	// bl 0x822830e8
	ctx.lr = 0x8230FAA8;
	sub_822830E8(ctx, base);
loc_8230FAA8:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,514
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 514, ctx.xer);
	// beq cr6,0x8230facc
	if (ctx.cr6.eq) goto loc_8230FACC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// addi r4,r10,11244
	ctx.r4.s64 = ctx.r10.s64 + 11244;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8230FACC;
	sub_822830E8(ctx, base);
loc_8230FACC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11224
	ctx.r6.s64 = ctx.r11.s64 + 11224;
	// addi r4,r10,-3772
	ctx.r4.s64 = ctx.r10.s64 + -3772;
	// addi r3,r9,11216
	ctx.r3.s64 = ctx.r9.s64 + 11216;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x822e17e0
	ctx.lr = 0x8230FAEC;
	sub_822E17E0(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r8,11204
	ctx.r11.s64 = ctx.r8.s64 + 11204;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r8,r7,11188
	ctx.r8.s64 = ctx.r7.s64 + 11188;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e1618
	ctx.lr = 0x8230FB1C;
	sub_822E1618(ctx, base);
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8230f688
	ctx.lr = 0x8230FB30;
	sub_8230F688(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,24300
	ctx.r31.s64 = ctx.r11.s64 + 24300;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x8230fbe4
	if (ctx.cr6.eq) goto loc_8230FBE4;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,1013
	ctx.r4.s64 = 1013;
	// bl 0x8230f688
	ctx.lr = 0x8230FB54;
	sub_8230F688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1005
	ctx.r4.s64 = 1005;
	// bl 0x8230f688
	ctx.lr = 0x8230FB6C;
	sub_8230F688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,1001
	ctx.r4.s64 = 1001;
	// bl 0x8230f688
	ctx.lr = 0x8230FB84;
	sub_8230F688(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230fbd0
	if (ctx.cr6.eq) goto loc_8230FBD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x82372a40
	ctx.lr = 0x8230FBB0;
	sub_82372A40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230fbd0
	if (ctx.cr6.eq) goto loc_8230FBD0;
	// bl 0x82372ad8
	ctx.lr = 0x8230FBBC;
	sub_82372AD8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11132
	ctx.r4.s64 = ctx.r11.s64 + 11132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8230FBD0;
	sub_822830E8(ctx, base);
loc_8230FBD0:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e1f80
	ctx.lr = 0x8230FBDC;
	sub_822E1F80(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8230FBE4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11096
	ctx.r4.s64 = ctx.r11.s64 + 11096;
	// bl 0x822830e8
	ctx.lr = 0x8230FBF4;
	sub_822830E8(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FA20) {
	__imp__sub_8230FA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FBFC) {
	__imp__sub_8230FBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230FC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r30,r11,27000
	ctx.r30.s64 = ctx.r11.s64 + 27000;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8230fcac
	if (ctx.cr6.eq) goto loc_8230FCAC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230fc34
	if (ctx.cr6.eq) goto loc_8230FC34;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8230fc3c
	goto loc_8230FC3C;
loc_8230FC34:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8230FC3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8230fc98
	if (ctx.cr6.eq) goto loc_8230FC98;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r31,r11,24312
	ctx.r31.s64 = ctx.r11.s64 + 24312;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230fc78
	if (ctx.cr6.eq) goto loc_8230FC78;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8230fc78
	if (ctx.cr6.eq) goto loc_8230FC78;
	// bl 0x82372a18
	ctx.lr = 0x8230FC68;
	sub_82372A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8230FC78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230fc98
	if (ctx.cr6.eq) goto loc_8230FC98;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8230fc98
	if (ctx.cr6.eq) goto loc_8230FC98;
	// bl 0x82372a18
	ctx.lr = 0x8230FC90;
	sub_82372A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8230FC98:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8230fcac
	if (ctx.cr6.eq) goto loc_8230FCAC;
	// bl 0x8230fa20
	ctx.lr = 0x8230FCA4;
	sub_8230FA20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8230FCAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FC00) {
	__imp__sub_8230FC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FCB4) {
	__imp__sub_8230FCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,27004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27004);
	// b 0x8230fc00
	sub_8230FC00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FCB8) {
	__imp__sub_8230FCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FCC4) {
	__imp__sub_8230FCC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8228b0d8
	sub_8228B0D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FCC8) {
	__imp__sub_8230FCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FCCC) {
	__imp__sub_8230FCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCD0) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230FCD0) {
	__imp__sub_8230FCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,26960
	ctx.r9.s64 = ctx.r11.s64 + 26960;
	// addi r4,r10,11356
	ctx.r4.s64 = ctx.r10.s64 + 11356;
	// li r3,16
	ctx.r3.s64 = 16;
	// lbz r5,26960(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26960);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FCF0) {
	__imp__sub_8230FCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FD18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8230fc00
	sub_8230FC00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FD18) {
	__imp__sub_8230FD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// b 0x8236b1d0
	sub_8236B1D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FD20) {
	__imp__sub_8230FD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FD4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230FD4C) {
	__imp__sub_8230FD4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// b 0x8236b1d0
	sub_8236B1D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FD50) {
	__imp__sub_8230FD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FD7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230FD7C) {
	__imp__sub_8230FD7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// b 0x8236b1d0
	sub_8236B1D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FD80) {
	__imp__sub_8230FD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FDAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230FDAC) {
	__imp__sub_8230FDAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FDB0) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230fe18
	if (ctx.cr6.eq) goto loc_8230FE18;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230fe18
	if (ctx.cr6.eq) goto loc_8230FE18;
	// bl 0x8236b1e0
	ctx.lr = 0x8230FDE4;
	sub_8236B1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230fe18
	if (ctx.cr6.eq) goto loc_8230FE18;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,11376
	ctx.r4.s64 = ctx.r11.s64 + 11376;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230FE00;
	sub_82280900(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b140
	ctx.lr = 0x8230FE18;
	sub_8236B140(ctx, base);
loc_8230FE18:
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

PPC_WEAK_FUNC(sub_8230FDB0) {
	__imp__sub_8230FDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FE2C) {
	__imp__sub_8230FE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FE30) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230fe98
	if (ctx.cr6.eq) goto loc_8230FE98;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230fe98
	if (ctx.cr6.eq) goto loc_8230FE98;
	// bl 0x8236b1e0
	ctx.lr = 0x8230FE64;
	sub_8236B1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230fe98
	if (ctx.cr6.eq) goto loc_8230FE98;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,11440
	ctx.r4.s64 = ctx.r11.s64 + 11440;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230FE80;
	sub_82280900(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b140
	ctx.lr = 0x8230FE98;
	sub_8236B140(ctx, base);
loc_8230FE98:
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

PPC_WEAK_FUNC(sub_8230FE30) {
	__imp__sub_8230FE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FEAC) {
	__imp__sub_8230FEAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FEB0) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ff08
	if (ctx.cr6.eq) goto loc_8230FF08;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ff08
	if (ctx.cr6.eq) goto loc_8230FF08;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,11512
	ctx.r4.s64 = ctx.r11.s64 + 11512;
	// bl 0x82280900
	ctx.lr = 0x8230FEF0;
	sub_82280900(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b140
	ctx.lr = 0x8230FF08;
	sub_8236B140(ctx, base);
loc_8230FF08:
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

PPC_WEAK_FUNC(sub_8230FEB0) {
	__imp__sub_8230FEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230FF1C) {
	__imp__sub_8230FF1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230FF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8230FF28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310044
	if (ctx.cr6.eq) goto loc_82310044;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230ff64
	if (ctx.cr6.eq) goto loc_8230FF64;
	// li r28,8
	ctx.r28.s64 = 8;
	// li r27,6
	ctx.r27.s64 = 6;
	// b 0x8230ff6c
	goto loc_8230FF6C;
loc_8230FF64:
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8230FF6C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82360218
	ctx.lr = 0x8230FF74;
	sub_82360218(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ffec
	if (ctx.cr6.eq) goto loc_8230FFEC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,32769
	ctx.r29.u64 = ctx.r11.u64 | 32769;
loc_8230FF90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x8230FF98;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ffc8
	if (ctx.cr6.eq) goto loc_8230FFC8;
	// bl 0x82141340
	ctx.lr = 0x8230FFAC;
	sub_82141340(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x8230FFB8;
	sub_8236B1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x8230FFC0;
	sub_82141340(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8230ffd0
	goto loc_8230FFD0;
loc_8230FFC8:
	// bl 0x82141340
	ctx.lr = 0x8230FFCC;
	sub_82141340(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
loc_8230FFD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x8230FFD8;
	sub_8236B1D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8230ff90
	if (ctx.cr6.lt) goto loc_8230FF90;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8230FFEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8230FFF4;
	sub_82141340(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x82310004;
	sub_8236B1D0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r29,r11,32769
	ctx.r29.u64 = ctx.r11.u64 | 32769;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x8231001C;
	sub_8236B1D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82310020:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82310038
	if (ctx.cr6.eq) goto loc_82310038;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x82310038;
	sub_8236B1D0(ctx, base);
loc_82310038:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82310020
	if (ctx.cr6.lt) goto loc_82310020;
loc_82310044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230FF20) {
	__imp__sub_8230FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231004C) {
	__imp__sub_8231004C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82310058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823100d8
	if (ctx.cr6.eq) goto loc_823100D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-8032
	ctx.r29.s64 = ctx.r11.s64 + -8032;
	// lbz r11,-8032(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823100c4
	if (ctx.cr6.eq) goto loc_823100C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82310094:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x8231009C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823100e0
	if (ctx.cr6.eq) goto loc_823100E0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310094
	if (!ctx.cr6.eq) goto loc_82310094;
loc_823100C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,11556
	ctx.r4.s64 = ctx.r11.s64 + 11556;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x823100D8;
	sub_82280900(ctx, base);
loc_823100D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823100E0:
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8230ff20
	ctx.lr = 0x823100EC;
	sub_8230FF20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82310050) {
	__imp__sub_82310050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823100F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823100F4) {
	__imp__sub_823100F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823100F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823100F8) {
	__imp__sub_823100F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823100FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823100FC) {
	__imp__sub_823100FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310100) {
	__imp__sub_82310100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310104) {
	__imp__sub_82310104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310108) {
	PPC_FUNC_PROLOGUE();
	// b 0x823704e8
	sub_823704E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82310108) {
	__imp__sub_82310108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231010C) {
	__imp__sub_8231010C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310110) {
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
	// lis r31,-31835
	ctx.r31.s64 = -2086338560;
	// lis r30,-31835
	ctx.r30.s64 = -2086338560;
	// lwz r11,27016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82310148
	if (!ctx.cr6.eq) goto loc_82310148;
	// bl 0x823704e8
	ctx.lr = 0x8231013C;
	sub_823704E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,27012(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27012, ctx.r3.u32);
	// stw r11,27016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27016, ctx.r11.u32);
loc_82310148:
	// bl 0x823704e8
	ctx.lr = 0x8231014C;
	sub_823704E8(ctx, base);
	// lwz r11,27012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27012);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
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

PPC_WEAK_FUNC(sub_82310110) {
	__imp__sub_82310110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231016C) {
	__imp__sub_8231016C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310170) {
	PPC_FUNC_PROLOGUE();
	// b 0x823704e8
	sub_823704E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82310170) {
	__imp__sub_82310170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310174) {
	__imp__sub_82310174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310178) {
	__imp__sub_82310178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310184) {
	__imp__sub_82310184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfsu f9,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfsu f4,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f4.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f3.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310188) {
	__imp__sub_82310188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310204) {
	__imp__sub_82310204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310208) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1970
	ctx.r9.s64 = 1970;
	// sth r11,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r11.u16);
	// sth r11,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r11.u16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// sth r10,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r10.u16);
	// sth r10,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// sth r9,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r9.u16);
	// bl 0x82370578
	ctx.lr = 0x82310248;
	sub_82370578(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x823704f8
	ctx.lr = 0x82310260;
	sub_823704F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370578
	ctx.lr = 0x8231026C;
	sub_82370578(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r5,152
	ctx.r5.s64 = 9961472;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ori r4,r5,38528
	ctx.r4.u64 = ctx.r5.u64 | 38528;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// divdu r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 / ctx.r4.u64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310208) {
	__imp__sub_82310208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823102AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823102AC) {
	__imp__sub_823102AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823102B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823102B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-11136
	ctx.r29.s64 = ctx.r11.s64 + -11136;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// addi r28,r11,11616
	ctx.r28.s64 = ctx.r11.s64 + 11616;
loc_823102D4:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310308
	if (ctx.cr6.eq) goto loc_82310308;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82310308
	if (!ctx.cr6.eq) goto loc_82310308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280010
	ctx.lr = 0x823102F4;
	sub_82280010(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82310308
	if (!ctx.cr6.eq) goto loc_82310308;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82310308;
	sub_82280900(ctx, base);
loc_82310308:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r29,1444
	ctx.r11.s64 = ctx.r29.s64 + 1444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823102d4
	if (ctx.cr6.lt) goto loc_823102D4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823102B0) {
	__imp__sub_823102B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310324) {
	__imp__sub_82310324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310328) {
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
	// bl 0x82310170
	ctx.lr = 0x82310338;
	sub_82310170(ctx, base);
	// bl 0x823df8d0
	ctx.lr = 0x8231033C;
	sub_823DF8D0(ctx, base);
loc_8231033C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x82310344;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x82310348;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231033c
	if (!ctx.cr6.eq) goto loc_8231033C;
loc_82310350:
	// bl 0x8228c060
	ctx.lr = 0x82310354;
	sub_8228C060(ctx, base);
	// bl 0x82302588
	ctx.lr = 0x82310358;
	sub_82302588(ctx, base);
	// b 0x82310350
	goto loc_82310350;
}

PPC_WEAK_FUNC(sub_82310328) {
	__imp__sub_82310328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231035C) {
	__imp__sub_8231035C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310360) {
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
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r3,r11,808
	ctx.r3.s64 = ctx.r11.s64 + 808;
	// bl 0x8228bf58
	ctx.lr = 0x82310378;
	sub_8228BF58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310390
	if (!ctx.cr6.eq) goto loc_82310390;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,11636
	ctx.r3.s64 = ctx.r11.s64 + 11636;
	// bl 0x8230d720
	ctx.lr = 0x82310390;
	sub_8230D720(ctx, base);
loc_82310390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310360) {
	__imp__sub_82310360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823103A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8228c0e8
	sub_8228C0E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823103A0) {
	__imp__sub_823103A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823103A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823103A4) {
	__imp__sub_823103A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823103A8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r9,12860
	ctx.r5.s64 = ctx.r9.s64 + 12860;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82312330
	ctx.lr = 0x823103FC;
	sub_82312330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82310444
	if (!ctx.cr6.eq) goto loc_82310444;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82310678
	ctx.lr = 0x82310410;
	sub_82310678(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82310438
	if (ctx.cr6.eq) goto loc_82310438;
	// bl 0x82310a60
	ctx.lr = 0x82310424;
	sub_82310A60(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// beq cr6,0x82310444
	if (ctx.cr6.eq) goto loc_82310444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82310444
	goto loc_82310444;
loc_82310438:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82310a60
	ctx.lr = 0x82310444;
	sub_82310A60(ctx, base);
loc_82310444:
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

PPC_WEAK_FUNC(sub_823103A8) {
	__imp__sub_823103A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231045C) {
	__imp__sub_8231045C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310460) {
	PPC_FUNC_PROLOGUE();
	// li r7,-1
	ctx.r7.s64 = -1;
	// b 0x823103a8
	sub_823103A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82310460) {
	__imp__sub_82310460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310468) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310564
	if (ctx.cr6.eq) goto loc_82310564;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82310564
	if (ctx.cr6.eq) goto loc_82310564;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310564
	if (ctx.cr6.eq) goto loc_82310564;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82310564
	if (!ctx.cr6.eq) goto loc_82310564;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8231055c
	if (ctx.cr6.lt) goto loc_8231055C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823104cc
	if (!ctx.cr6.gt) goto loc_823104CC;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_823104CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823de1f0
	ctx.lr = 0x823104D8;
	sub_823DE1F0(ctx, base);
	// addi r10,r30,-3
	ctx.r10.s64 = ctx.r30.s64 + -3;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// slw r4,r6,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// and r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 & ctx.r8.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_8231051C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r8,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// xor r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// sthx r9,r6,r3
	PPC_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u16);
	// bdnz 0x8231051c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231051C;
loc_8231055C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82310568
	goto loc_82310568;
loc_82310564:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82310568:
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

PPC_WEAK_FUNC(sub_82310468) {
	__imp__sub_82310468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r4,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310580) {
	__imp__sub_82310580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823105B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823105B4) {
	__imp__sub_823105B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823105B8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823105e8
	if (!ctx.cr6.gt) goto loc_823105E8;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_823105E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231065c
	if (ctx.cr6.eq) goto loc_8231065C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823de1f0
	ctx.lr = 0x82310600;
	sub_823DE1F0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231065c
	if (!ctx.cr6.eq) goto loc_8231065C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8231065C:
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

PPC_WEAK_FUNC(sub_823105B8) {
	__imp__sub_823105B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310674) {
	__imp__sub_82310674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82310680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310a54
	if (ctx.cr6.eq) goto loc_82310A54;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82310a54
	if (ctx.cr6.eq) goto loc_82310A54;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgt cr6,0x82310a54
	if (ctx.cr6.gt) goto loc_82310A54;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82310a54
	if (ctx.cr6.lt) goto loc_82310A54;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310a44
	if (ctx.cr6.eq) goto loc_82310A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823106d4
	if (!ctx.cr6.eq) goto loc_823106D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82310a44
	if (!ctx.cr6.eq) goto loc_82310A44;
loc_823106D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x823106e8
	if (!ctx.cr6.eq) goto loc_823106E8;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82310a44
	if (!ctx.cr6.eq) goto loc_82310A44;
loc_823106E8:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310710
	if (!ctx.cr6.eq) goto loc_82310710;
loc_823106F4:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82310710:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// bne cr6,0x82310830
	if (!ctx.cr6.eq) goto loc_82310830;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82310750
	if (!ctx.cr6.gt) goto loc_82310750;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82310750:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r7,r11,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82310768
	if (ctx.cr6.eq) goto loc_82310768;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82310768:
	// lis r10,2114
	ctx.r10.s64 = 138543104;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,113
	ctx.r5.s64 = 113;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r10,4229
	ctx.r4.u64 = ctx.r10.u64 | 4229;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mulhwu r10,r11,r4
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r4.u32)) >> 32;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r4,r9,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stbx r10,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82310830
	if (ctx.cr6.eq) goto loc_82310830;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r30,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r30,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
loc_82310830:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82310864
	if (ctx.cr6.eq) goto loc_82310864;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823105b8
	ctx.lr = 0x82310844;
	sub_823105B8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82310880
	if (!ctx.cr6.eq) goto loc_82310880;
loc_82310850:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82310864:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82310880
	if (!ctx.cr6.eq) goto loc_82310880;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82310880
	if (ctx.cr6.gt) goto loc_82310880;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x823106f4
	if (!ctx.cr6.eq) goto loc_823106F4;
loc_82310880:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x82310898
	if (!ctx.cr6.eq) goto loc_82310898;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823106f4
	if (!ctx.cr6.eq) goto loc_823106F4;
loc_82310898:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823108c0
	if (!ctx.cr6.eq) goto loc_823108C0;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823108c0
	if (!ctx.cr6.eq) goto loc_823108C0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8231098c
	if (ctx.cr6.eq) goto loc_8231098C;
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// beq cr6,0x8231098c
	if (ctx.cr6.eq) goto loc_8231098C;
loc_823108C0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,11728
	ctx.r9.s64 = ctx.r9.s64 + 11728;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823108F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82310900
	if (ctx.cr6.eq) goto loc_82310900;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82310908
	if (!ctx.cr6.eq) goto loc_82310908;
loc_82310900:
	// li r11,666
	ctx.r11.s64 = 666;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82310908:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82310a24
	if (ctx.cr6.eq) goto loc_82310A24;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82310a24
	if (ctx.cr6.eq) goto loc_82310A24;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8231098c
	if (!ctx.cr6.eq) goto loc_8231098C;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82310934
	if (!ctx.cr6.eq) goto loc_82310934;
	// bl 0x82316988
	ctx.lr = 0x82310930;
	sub_82316988(ctx, base);
	// b 0x82310978
	goto loc_82310978;
loc_82310934:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82316900
	ctx.lr = 0x82310944;
	sub_82316900(ctx, base);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x82310978
	if (!ctx.cr6.eq) goto loc_82310978;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r30,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r30.u16);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823de090
	ctx.lr = 0x82310978;
	sub_823DE090(ctx, base);
loc_82310978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823105b8
	ctx.lr = 0x82310980;
	sub_823105B8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310850
	if (ctx.cr6.eq) goto loc_82310850;
loc_8231098C:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82310a38
	if (!ctx.cr6.eq) goto loc_82310A38;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823109ac
	if (ctx.cr6.eq) goto loc_823109AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823109AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r30,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r30,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// bl 0x823105b8
	ctx.lr = 0x82310A08;
	sub_823105B8(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,-1
	ctx.r5.s64 = -1;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82310A24:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82310a38
	if (!ctx.cr6.eq) goto loc_82310A38;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82310A38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82310A44:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82310A54:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82310678) {
	__imp__sub_82310678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310A60) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310b58
	if (ctx.cr6.eq) goto loc_82310B58;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310b58
	if (ctx.cr6.eq) goto loc_82310B58;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,42
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 42, ctx.xer);
	// beq cr6,0x82310aa8
	if (ctx.cr6.eq) goto loc_82310AA8;
	// cmpwi cr6,r30,113
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 113, ctx.xer);
	// beq cr6,0x82310aa8
	if (ctx.cr6.eq) goto loc_82310AA8;
	// cmpwi cr6,r30,666
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 666, ctx.xer);
	// bne cr6,0x82310b58
	if (!ctx.cr6.eq) goto loc_82310B58;
loc_82310AA8:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310ac4
	if (ctx.cr6.eq) goto loc_82310AC4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82310AC4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310ae4
	if (ctx.cr6.eq) goto loc_82310AE4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82310AE4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310b04
	if (ctx.cr6.eq) goto loc_82310B04;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82310B04:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310b24
	if (ctx.cr6.eq) goto loc_82310B24;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82310B24:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r30,-113
	ctx.r10.s64 = ctx.r30.s64 + -113;
	// li r9,-3
	ctx.r9.s64 = -3;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// b 0x82310b5c
	goto loc_82310B5C;
loc_82310B58:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82310B5C:
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

PPC_WEAK_FUNC(sub_82310A60) {
	__imp__sub_82310A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310B74) {
	__imp__sub_82310B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82310B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310d40
	if (ctx.cr6.eq) goto loc_82310D40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310d40
	if (ctx.cr6.eq) goto loc_82310D40;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82310d40
	if (ctx.cr6.eq) goto loc_82310D40;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x823de1f0
	ctx.lr = 0x82310BAC;
	sub_823DE1F0(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r5,5816
	ctx.r5.s64 = 5816;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310d34
	if (ctx.cr6.eq) goto loc_82310D34;
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// li r5,5816
	ctx.r5.s64 = 5816;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82310BE0;
	sub_823DE1F0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bctrl 
	ctx.lr = 0x82310BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bctrl 
	ctx.lr = 0x82310C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bctrl 
	ctx.lr = 0x82310C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r4,5780(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// bctrl 
	ctx.lr = 0x82310C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310d2c
	if (ctx.cr6.eq) goto loc_82310D2C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310d2c
	if (ctx.cr6.eq) goto loc_82310D2C;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310d2c
	if (ctx.cr6.eq) goto loc_82310D2C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310d2c
	if (ctx.cr6.eq) goto loc_82310D2C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823de1f0
	ctx.lr = 0x82310C98;
	sub_823DE1F0(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x823de1f0
	ctx.lr = 0x82310CAC;
	sub_823DE1F0(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823de1f0
	ctx.lr = 0x82310CC0;
	sub_823DE1F0(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823de1f0
	ctx.lr = 0x82310CD0;
	sub_823DE1F0(ctx, base);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r6,r31,140
	ctx.r6.s64 = ctx.r31.s64 + 140;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,2432
	ctx.r5.s64 = ctx.r31.s64 + 2432;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r31,2676
	ctx.r4.s64 = ctx.r31.s64 + 2676;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r6.u32);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r5,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r5.u32);
	// stw r4,2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2856, ctx.r4.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,5788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5788, ctx.r9.u32);
	// stw r7,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82310D2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82310a60
	ctx.lr = 0x82310D34;
	sub_82310A60(ctx, base);
loc_82310D34:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82310D40:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82310B78) {
	__imp__sub_82310B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82310D4C) {
	__imp__sub_82310D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310D50) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82310d80
	if (!ctx.cr6.gt) goto loc_82310D80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82310D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82310d90
	if (!ctx.cr6.eq) goto loc_82310D90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82310dc0
	goto loc_82310DC0;
loc_82310D90:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82310DA4;
	sub_823DE1F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82310DC0:
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

PPC_WEAK_FUNC(sub_82310D50) {
	__imp__sub_82310D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310DD8) {
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
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// sth r31,-2(r8)
	PPC_STORE_U16(ctx.r8.u32 + -2, ctx.r31.u16);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823de090
	ctx.lr = 0x82310E2C;
	sub_823DE090(ctx, base);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r5,11728
	ctx.r11.s64 = ctx.r5.s64 + 11728;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// li r8,2
	ctx.r8.s64 = 2;
	// lhzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// stw r6,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r6.u32);
	// lhzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// stw r5,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r5.u32);
	// lhzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stw r4,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r4.u32);
	// lhzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stw r8,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r8.u32);
	// stw r8,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r8.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_82310DD8) {
	__imp__sub_82310DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82310EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,258
	ctx.r9.s64 = ctx.r11.s64 + 258;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82311010
	if (!ctx.cr6.eq) goto loc_82311010;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82311010
	if (!ctx.cr6.eq) goto loc_82311010;
	// li r12,3
	ctx.r12.s64 = 3;
	// ldux r8,r11,r12
	ea = ctx.r11.u32 + ctx.r12.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// li r12,3
	ctx.r12.s64 = 3;
	// ldux r7,r10,r12
	ea = ctx.r10.u32 + ctx.r12.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x82310f44
	if (!ctx.cr6.eq) goto loc_82310F44;
loc_82310EF4:
	// ldu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// ldu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x82310f44
	if (!ctx.cr6.eq) goto loc_82310F44;
	// ldu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// ldu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x82310f44
	if (!ctx.cr6.eq) goto loc_82310F44;
	// ldu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// ldu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x82310f44
	if (!ctx.cr6.eq) goto loc_82310F44;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82310fe4
	if (!ctx.cr6.lt) goto loc_82310FE4;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// beq cr6,0x82310ef4
	if (ctx.cr6.eq) goto loc_82310EF4;
loc_82310F44:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82310fe4
	if (!ctx.cr6.eq) goto loc_82310FE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82310FE4:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82311010
	if (ctx.cr6.lt) goto loc_82311010;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82311008
	if (!ctx.cr6.gt) goto loc_82311008;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82311008:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82311010:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82310EA8) {
	__imp__sub_82310EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82311018) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82311018) {
	__imp__sub_82311018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231102C) {
	__imp__sub_8231102C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82311030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82311038;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82311044:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r6,r11,-262
	ctx.r6.s64 = ctx.r11.s64 + -262;
	// subf r27,r8,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82311124
	if (ctx.cr6.lt) goto loc_82311124;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8231107C;
	sub_823DE1F0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r7,r28,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r5,r28,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r28.s64;
	// subf r4,r28,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r28.s64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r6,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311120
	if (ctx.cr6.eq) goto loc_82311120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
loc_823110BC:
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// subf r10,r28,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r28.s64;
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// subf r9,r28,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r28.s64;
	// subf r8,r28,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r28.s64;
	// subf r7,r28,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r28.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r3,r7,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// andc r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// andc r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// andc r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// sthu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823110bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823110BC;
loc_82311120:
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
loc_82311124:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823111f8
	if (ctx.cr6.eq) goto loc_823111F8;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8231115c
	if (!ctx.cr6.gt) goto loc_8231115C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8231115C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8231116c
	if (!ctx.cr6.eq) goto loc_8231116C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8231119c
	goto loc_8231119C;
loc_8231116C:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82311180;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
loc_8231119C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823111e0
	if (ctx.cr6.lt) goto loc_823111E0;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// slw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_823111E0:
	// cmplwi cr6,r10,262
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 262, ctx.xer);
	// bge cr6,0x823111f8
	if (!ctx.cr6.lt) goto loc_823111F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82311044
	if (!ctx.cr6.eq) goto loc_82311044;
loc_823111F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82311030) {
	__imp__sub_82311030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82311200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82311208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bge cr6,0x82311230
	if (!ctx.cr6.lt) goto loc_82311230;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82311230:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82311234:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82311254
	if (ctx.cr6.gt) goto loc_82311254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82311030
	ctx.lr = 0x82311248;
	sub_82311030(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82311340
	if (ctx.cr6.eq) goto loc_82311340;
loc_82311254:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82311280
	if (ctx.cr6.eq) goto loc_82311280;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823112d4
	if (ctx.cr6.lt) goto loc_823112D4;
loc_82311280:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// blt cr6,0x823112a0
	if (ctx.cr6.lt) goto loc_823112A0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823112a4
	goto loc_823112A4;
loc_823112A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823112A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316be8
	ctx.lr = 0x823112B4;
	sub_82316BE8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823105b8
	ctx.lr = 0x823112C4;
	sub_823105B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82311334
	if (ctx.cr6.eq) goto loc_82311334;
loc_823112D4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r10,-262
	ctx.r8.s64 = ctx.r10.s64 + -262;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82311234
	if (ctx.cr6.lt) goto loc_82311234;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82311304
	if (ctx.cr6.lt) goto loc_82311304;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82311308
	goto loc_82311308;
loc_82311304:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82311308:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316be8
	ctx.lr = 0x82311314;
	sub_82316BE8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823105b8
	ctx.lr = 0x82311324;
	sub_823105B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82311234
	if (!ctx.cr6.eq) goto loc_82311234;
loc_82311334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82311338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82311340:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82311334
	if (ctx.cr6.eq) goto loc_82311334;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82311360
	if (ctx.cr6.lt) goto loc_82311360;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82311364
	goto loc_82311364;
loc_82311360:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82311364:
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82316be8
	ctx.lr = 0x82311380;
	sub_82316BE8(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// bl 0x823105b8
	ctx.lr = 0x82311390;
	sub_823105B8(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823113bc
	if (!ctx.cr6.eq) goto loc_823113BC;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823113BC:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82311338
	if (ctx.cr6.eq) goto loc_82311338;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82311200) {
	__imp__sub_82311200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823113D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823113D4) {
	__imp__sub_823113D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823113D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823113E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,14576
	ctx.r26.s64 = ctx.r11.s64 + 14576;
	// addi r27,r10,15088
	ctx.r27.s64 = ctx.r10.s64 + 15088;
loc_8231140C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x8231143c
	if (!ctx.cr6.lt) goto loc_8231143C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82311030
	ctx.lr = 0x82311420;
	sub_82311030(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82311434
	if (!ctx.cr6.lt) goto loc_82311434;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823116a4
	if (ctx.cr6.eq) goto loc_823116A4;
loc_82311434:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823116b0
	if (ctx.cr6.eq) goto loc_823116B0;
loc_8231143C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82311484
	if (ctx.cr6.lt) goto loc_82311484;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// slw r4,r9,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r3,2(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// xor r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// and r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lhzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
loc_82311484:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823114c0
	if (ctx.cr6.eq) goto loc_823114C0;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r8,r11,-262
	ctx.r8.s64 = ctx.r11.s64 + -262;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823114c0
	if (ctx.cr6.gt) goto loc_823114C0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823114c0
	if (ctx.cr6.eq) goto loc_823114C0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82310ea8
	ctx.lr = 0x823114BC;
	sub_82310EA8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_823114C0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823115d0
	if (ctx.cr6.lt) goto loc_823115D0;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r9,r11,253
	ctx.r9.s64 = ctx.r11.s64 + 253;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// subf r3,r8,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r5,5788(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sthx r11,r6,r5
	PPC_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r8,5776(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r7.u32);
	// lbzx r11,r4,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// addi r6,r11,292
	ctx.r6.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sthx r5,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// bge cr6,0x82311540
	if (!ctx.cr6.lt) goto loc_82311540;
	// lbzx r11,r9,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// b 0x8231154c
	goto loc_8231154C;
loc_82311540:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = ctx.r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_8231154C:
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lwz r7,5784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r10,5780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// xor r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8231164c
	goto loc_8231164C;
loc_823115D0:
	// lwz r11,5784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,5788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// sthx r30,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r30.u16);
	// addi r5,r6,35
	ctx.r5.s64 = ctx.r6.s64 + 35;
	// lwz r4,5784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r3,5776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r6,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r6.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r7,5784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8231164C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231140c
	if (ctx.cr6.eq) goto loc_8231140C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231166c
	if (ctx.cr6.lt) goto loc_8231166C;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82311670
	goto loc_82311670;
loc_8231166C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82311670:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82316be8
	ctx.lr = 0x82311684;
	sub_82316BE8(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bl 0x823105b8
	ctx.lr = 0x82311694;
	sub_823105B8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8231140c
	if (!ctx.cr6.eq) goto loc_8231140C;
loc_823116A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823116A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823116B0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823116c8
	if (ctx.cr6.lt) goto loc_823116C8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823116cc
	goto loc_823116CC;
loc_823116C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823116CC:
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82316be8
	ctx.lr = 0x823116E8;
	sub_82316BE8(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// bl 0x823105b8
	ctx.lr = 0x823116F8;
	sub_823105B8(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82311724
	if (!ctx.cr6.eq) goto loc_82311724;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82311724:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x823116a8
	if (ctx.cr6.eq) goto loc_823116A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823113D8) {
	__imp__sub_823113D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231173C) {
	__imp__sub_8231173C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82311740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82311748;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r26,r11,14576
	ctx.r26.s64 = ctx.r11.s64 + 14576;
	// addi r27,r10,15088
	ctx.r27.s64 = ctx.r10.s64 + 15088;
loc_8231177C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x823117ac
	if (!ctx.cr6.lt) goto loc_823117AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82311030
	ctx.lr = 0x82311790;
	sub_82311030(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x823117a4
	if (!ctx.cr6.lt) goto loc_823117A4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82311a44
	if (ctx.cr6.eq) goto loc_82311A44;
loc_823117A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311b48
	if (ctx.cr6.eq) goto loc_82311B48;
loc_823117AC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823117f4
	if (ctx.cr6.lt) goto loc_823117F4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// slw r4,r9,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r3,2(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// xor r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// and r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lhzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
loc_823117F4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x8231188c
	if (ctx.cr6.eq) goto loc_8231188C;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8231188c
	if (!ctx.cr6.lt) goto loc_8231188C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r9,r11,-262
	ctx.r9.s64 = ctx.r11.s64 + -262;
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8231188c
	if (ctx.cr6.gt) goto loc_8231188C;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82311854
	if (ctx.cr6.eq) goto loc_82311854;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82310ea8
	ctx.lr = 0x82311850;
	sub_82310EA8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_82311854:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8231188c
	if (ctx.cr6.gt) goto loc_8231188C;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82311888
	if (ctx.cr6.eq) goto loc_82311888;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8231188c
	if (!ctx.cr6.eq) goto loc_8231188C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,4096
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4096, ctx.xer);
	// ble cr6,0x8231188c
	if (!ctx.cr6.gt) goto loc_8231188C;
loc_82311888:
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
loc_8231188C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82311a50
	if (ctx.cr6.lt) goto loc_82311A50;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82311a50
	if (ctx.cr6.gt) goto loc_82311A50;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,5788(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r6,r30
	ctx.r3.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// sthx r10,r5,r4
	PPC_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r10.u16);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r6,5784(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r5,5776(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r4.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// bge cr6,0x82311928
	if (!ctx.cr6.lt) goto loc_82311928;
	// lbzx r11,r9,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// b 0x82311934
	goto loc_82311934;
loc_82311928:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = ctx.r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82311934:
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r6,5784(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r10,5780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
loc_8231197C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823119cc
	if (ctx.cr6.gt) goto loc_823119CC;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// slw r11,r6,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// xor r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lhzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sthx r7,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
loc_823119CC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bne 0x8231197c
	if (!ctx.cr0.eq) goto loc_8231197C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x8231177c
	if (ctx.cr6.eq) goto loc_8231177C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82311a10
	if (ctx.cr6.lt) goto loc_82311A10;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82311a14
	goto loc_82311A14;
loc_82311A10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82311A14:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316be8
	ctx.lr = 0x82311A24;
	sub_82316BE8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823105b8
	ctx.lr = 0x82311A34;
	sub_823105B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_82311A40:
	// bne cr6,0x8231177c
	if (!ctx.cr6.eq) goto loc_8231177C;
loc_82311A44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82311A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82311A50:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82311b28
	if (ctx.cr6.eq) goto loc_82311B28;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,5788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// sthx r28,r7,r6
	PPC_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r28.u16);
	// addi r3,r5,35
	ctx.r3.s64 = ctx.r5.s64 + 35;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,5776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// stbx r5,r4,r10
	PPC_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r9.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// lwz r6,5784(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82311b00
	if (!ctx.cr6.eq) goto loc_82311B00;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82311ad8
	if (ctx.cr6.lt) goto loc_82311AD8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82311adc
	goto loc_82311ADC;
loc_82311AD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82311ADC:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82316be8
	ctx.lr = 0x82311AF0;
	sub_82316BE8(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bl 0x823105b8
	ctx.lr = 0x82311B00;
	sub_823105B8(ctx, base);
loc_82311B00:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// b 0x82311a40
	goto loc_82311A40;
loc_82311B28:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r24,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r24.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// b 0x8231177c
	goto loc_8231177C;
loc_82311B48:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82311ba8
	if (ctx.cr6.eq) goto loc_82311BA8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,5788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// sthx r28,r7,r6
	PPC_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r28.u16);
	// addi r3,r5,35
	ctx.r3.s64 = ctx.r5.s64 + 35;
	// lwz r4,5784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r10,5776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r5,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r9.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_82311BA8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82311bc0
	if (ctx.cr6.lt) goto loc_82311BC0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82311bc4
	goto loc_82311BC4;
loc_82311BC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82311BC4:
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82316be8
	ctx.lr = 0x82311BE0;
	sub_82316BE8(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// bl 0x823105b8
	ctx.lr = 0x82311BF0;
	sub_823105B8(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82311c18
	if (!ctx.cr6.eq) goto loc_82311C18;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r25
	ctx.r3.u64 = ctx.r8.u64 & ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82311C18:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82311a48
	if (ctx.cr6.eq) goto loc_82311A48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82311740) {
	__imp__sub_82311740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82311C30) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311ce8
	if (ctx.cr6.eq) goto loc_82311CE8;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82311ce8
	if (ctx.cr6.eq) goto loc_82311CE8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311ce8
	if (ctx.cr6.eq) goto loc_82311CE8;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311ce8
	if (ctx.cr6.eq) goto loc_82311CE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// bge cr6,0x82311ca0
	if (!ctx.cr6.lt) goto loc_82311CA0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82311CA0:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,25
	ctx.r11.u64 = ctx.r8.u32 & 0x7F;
	// rlwinm r11,r11,0,29,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// addi r7,r11,42
	ctx.r7.s64 = ctx.r11.s64 + 42;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x82316470
	ctx.lr = 0x82311CC8;
	sub_82316470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82310dd8
	ctx.lr = 0x82311CD0;
	sub_82310DD8(ctx, base);
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
loc_82311CE8:
	// li r3,-2
	ctx.r3.s64 = -2;
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

PPC_WEAK_FUNC(sub_82311C30) {
	__imp__sub_82311C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82311D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82311D08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x823120bc
	if (ctx.cr6.eq) goto loc_823120BC;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823120bc
	if (ctx.cr6.eq) goto loc_823120BC;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82311d44
	if (!ctx.cr6.eq) goto loc_82311D44;
	// li r26,6
	ctx.r26.s64 = 6;
	// b 0x82311d54
	goto loc_82311D54;
loc_82311D44:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x823120bc
	if (ctx.cr6.lt) goto loc_823120BC;
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// bgt cr6,0x823120bc
	if (ctx.cr6.gt) goto loc_823120BC;
loc_82311D54:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x823120bc
	if (ctx.cr6.lt) goto loc_823120BC;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bgt cr6,0x823120bc
	if (ctx.cr6.gt) goto loc_823120BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r11,11728
	ctx.r28.s64 = ctx.r11.s64 + 11728;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r28,8
	ctx.r7.s64 = ctx.r28.s64 + 8;
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r27,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82312074
	if (ctx.cr6.eq) goto loc_82312074;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312074
	if (ctx.cr6.eq) goto loc_82312074;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312060
	if (ctx.cr6.eq) goto loc_82312060;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82311dd0
	if (!ctx.cr6.eq) goto loc_82311DD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312060
	if (!ctx.cr6.eq) goto loc_82312060;
loc_82311DD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// beq cr6,0x82312060
	if (ctx.cr6.eq) goto loc_82312060;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82311dfc
	if (!ctx.cr6.eq) goto loc_82311DFC;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x82312070
	goto loc_82312070;
loc_82311DFC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x82311f1c
	if (!ctx.cr6.eq) goto loc_82311F1C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82311e3c
	if (!ctx.cr6.gt) goto loc_82311E3C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82311E3C:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r7,r11,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82311e54
	if (ctx.cr6.eq) goto loc_82311E54;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82311E54:
	// lis r10,2114
	ctx.r10.s64 = 138543104;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,113
	ctx.r5.s64 = 113;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r10,4229
	ctx.r4.u64 = ctx.r10.u64 | 4229;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mulhwu r10,r11,r4
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r4.u32)) >> 32;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r4,r9,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stbx r10,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82311f1c
	if (ctx.cr6.eq) goto loc_82311F1C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r29,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r29,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r29.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r29,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
loc_82311F1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82311f4c
	if (ctx.cr6.eq) goto loc_82311F4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823105b8
	ctx.lr = 0x82311F30;
	sub_823105B8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82311f74
	if (!ctx.cr6.eq) goto loc_82311F74;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82312074
	goto loc_82312074;
loc_82311F4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82311f74
	if (!ctx.cr6.eq) goto loc_82311F74;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x82311f74
	if (ctx.cr6.lt) goto loc_82311F74;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x82312070
	goto loc_82312070;
loc_82311F74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x82311fa0
	if (!ctx.cr6.eq) goto loc_82311FA0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82311fa0
	if (ctx.cr6.eq) goto loc_82311FA0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x82312070
	goto loc_82312070;
loc_82311FA0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82311fc0
	if (!ctx.cr6.eq) goto loc_82311FC0;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82311fc0
	if (!ctx.cr6.eq) goto loc_82311FC0;
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// beq cr6,0x82312058
	if (ctx.cr6.eq) goto loc_82312058;
loc_82311FC0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82311FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82311ff8
	if (ctx.cr6.eq) goto loc_82311FF8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82312000
	if (!ctx.cr6.eq) goto loc_82312000;
loc_82311FF8:
	// li r11,666
	ctx.r11.s64 = 666;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82312000:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82312044
	if (ctx.cr6.eq) goto loc_82312044;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82312044
	if (ctx.cr6.eq) goto loc_82312044;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82312058
	if (!ctx.cr6.eq) goto loc_82312058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316988
	ctx.lr = 0x82312020;
	sub_82316988(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823105b8
	ctx.lr = 0x82312028;
	sub_823105B8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312058
	if (!ctx.cr6.eq) goto loc_82312058;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82312074
	goto loc_82312074;
loc_82312044:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312058
	if (!ctx.cr6.eq) goto loc_82312058;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82312058:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82312074
	goto loc_82312074;
loc_82312060:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82312070:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82312074:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x823120b0
	if (ctx.cr6.eq) goto loc_823120B0;
	// stw r26,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r26.u32);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// addi r9,r28,6
	ctx.r9.s64 = ctx.r28.s64 + 6;
	// lhzx r8,r27,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// lhzx r7,r27,r28
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lhzx r6,r27,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r10.u32);
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// lhzx r5,r27,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r9.u32);
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
loc_823120B0:
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823120BC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82311D00) {
	__imp__sub_82311D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823120C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823120D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82312320
	if (ctx.cr6.eq) goto loc_82312320;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82312320
	if (!ctx.cr6.eq) goto loc_82312320;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82312320
	if (!ctx.cr6.eq) goto loc_82312320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312124
	if (!ctx.cr6.eq) goto loc_82312124;
loc_82312118:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82312124:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312144
	if (!ctx.cr6.eq) goto loc_82312144;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
	// addi r10,r11,28616
	ctx.r10.s64 = ctx.r11.s64 + 28616;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_82312144:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231215c
	if (!ctx.cr6.eq) goto loc_8231215C;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r10,r11,28688
	ctx.r10.s64 = ctx.r11.s64 + 28688;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
loc_8231215C:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82312170
	if (!ctx.cr6.lt) goto loc_82312170;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
loc_82312170:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x82312118
	if (ctx.cr6.lt) goto loc_82312118;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// bgt cr6,0x82312118
	if (ctx.cr6.gt) goto loc_82312118;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x82312118
	if (!ctx.cr6.eq) goto loc_82312118;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// blt cr6,0x82312118
	if (ctx.cr6.lt) goto loc_82312118;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// bgt cr6,0x82312118
	if (ctx.cr6.gt) goto loc_82312118;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82312118
	if (ctx.cr6.lt) goto loc_82312118;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bgt cr6,0x82312118
	if (ctx.cr6.gt) goto loc_82312118;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,5816
	ctx.r5.s64 = 5816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823121C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312314
	if (ctx.cr6.eq) goto loc_82312314;
	// slw r4,r29,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r28.u8 & 0x3F));
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// slw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r26.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// divwu r3,r8,r9
	ctx.r3.u32 = ctx.r8.u32 / ctx.r9.u32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bctrl 
	ctx.lr = 0x82312244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bctrl 
	ctx.lr = 0x82312260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r8,r27,6
	ctx.r8.s64 = ctx.r27.s64 + 6;
	// li r5,4
	ctx.r5.s64 = 4;
	// slw r4,r29,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// stw r4,5780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5780, ctx.r4.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82312284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// beq cr6,0x823122fc
	if (ctx.cr6.eq) goto loc_823122FC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823122fc
	if (ctx.cr6.eq) goto loc_823122FC;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823122fc
	if (ctx.cr6.eq) goto loc_823122FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823122fc
	if (ctx.cr6.eq) goto loc_823122FC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,5788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5788, ctx.r10.u32);
	// stw r9,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r8,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r8.u8);
	// bl 0x82311c30
	ctx.lr = 0x823122F4;
	sub_82311C30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823122FC:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,29840
	ctx.r10.s64 = ctx.r11.s64 + 29840;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82310a60
	ctx.lr = 0x82312314;
	sub_82310A60(ctx, base);
loc_82312314:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82312320:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823120C8) {
	__imp__sub_823120C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231232C) {
	__imp__sub_8231232C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312330) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x823120c8
	sub_823120C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82312330) {
	__imp__sub_82312330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231234C) {
	__imp__sub_8231234C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82312358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82312374
	if (ctx.cr6.eq) goto loc_82312374;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
loc_82312374:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82312388
	if (ctx.cr6.eq) goto loc_82312388;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8231239c
	if (!ctx.cr6.eq) goto loc_8231239C;
loc_82312388:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231239C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231239C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823123b4
	if (!ctx.cr6.eq) goto loc_823123B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82313740
	ctx.lr = 0x823123B4;
	sub_82313740(ctx, base);
loc_823123B4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82312350) {
	__imp__sub_82312350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823123D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823123D4) {
	__imp__sub_823123D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823123D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823123E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312448
	if (ctx.cr6.eq) goto loc_82312448;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bne cr6,0x82312454
	if (!ctx.cr6.eq) goto loc_82312454;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82312448:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82312454:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823124a8
	if (!ctx.cr6.eq) goto loc_823124A8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231249C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823124A8:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82312350
	ctx.lr = 0x823124C8;
	sub_82312350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823123D8) {
	__imp__sub_823123D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823124D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823124D4) {
	__imp__sub_823124D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823124D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823124E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,52(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r25,4(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bge cr6,0x8231251c
	if (!ctx.cr6.lt) goto loc_8231251C;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x82312524
	goto loc_82312524;
loc_8231251C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r24,r22,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r22.s64;
loc_82312524:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bgt cr6,0x82312c80
	if (ctx.cr6.gt) goto loc_82312C80;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r17,6
	ctx.r17.s64 = 6;
	// li r15,3
	ctx.r15.s64 = 3;
	// addi r20,r11,29712
	ctx.r20.s64 = ctx.r11.s64 + 29712;
	// li r16,7
	ctx.r16.s64 = 7;
	// li r14,4
	ctx.r14.s64 = 4;
	// addi r19,r10,11848
	ctx.r19.s64 = ctx.r10.s64 + 11848;
	// li r18,9
	ctx.r18.s64 = 9;
loc_82312558:
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9584
	ctx.r12.s64 = ctx.r12.s64 + 9584;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82312598;
	case 1:
		goto loc_82312670;
	case 2:
		goto loc_823126F4;
	case 3:
		goto loc_8231281C;
	case 4:
		goto loc_823128A8;
	case 5:
		goto loc_823129AC;
	case 6:
		goto loc_82312BDC;
	case 7:
		goto loc_82312E80;
	case 8:
		goto loc_82312EB4;
	case 9:
		goto loc_82312EBC;
	default:
		return;
	}
	// lwz r17,9624(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9624);
	// lwz r17,9840(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9840);
	// lwz r17,9972(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9972);
	// lwz r17,10268(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10268);
	// lwz r17,10408(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10408);
	// lwz r17,10668(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10668);
	// lwz r17,11228(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11228);
	// lwz r17,11904(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11904);
	// lwz r17,11956(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11956);
	// lwz r17,11964(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11964);
loc_82312598:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x823125cc
	if (!ctx.cr6.lt) goto loc_823125CC;
loc_823125A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312cc0
	if (ctx.cr6.eq) goto loc_82312CC0;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// slw r10,r11,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x823125a0
	if (ctx.cr6.lt) goto loc_823125A0;
loc_823125CC:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r11,r28,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x3;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82312c74
	if (ctx.cr6.gt) goto loc_82312C74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82312614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82312614;
	// bdzf 4*cr6+eq,0x82312660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82312660;
	// bne cr6,0x82312ce8
	if (!ctx.cr6.eq) goto loc_82312CE8;
	// addi r11,r30,-3
	ctx.r11.s64 = ctx.r30.s64 + -3;
	// rlwinm r10,r28,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// srw r28,r10,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x82312c74
	goto loc_82312C74;
loc_82312614:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82314e08
	ctx.lr = 0x8231262C;
	sub_82314E08(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82313000
	ctx.lr = 0x82312644;
	sub_82313000(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312ce0
	if (ctx.cr6.eq) goto loc_82312CE0;
	// rlwinm r28,r28,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82312c74
	goto loc_82312C74;
loc_82312660:
	// rlwinm r28,r28,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r15,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r15.u32);
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82312c74
	goto loc_82312C74;
loc_82312670:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x823126a4
	if (!ctx.cr6.lt) goto loc_823126A4;
loc_82312678:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312d28
	if (ctx.cr6.eq) goto loc_82312D28;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// slw r10,r11,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x82312678
	if (ctx.cr6.lt) goto loc_82312678;
loc_823126A4:
	// not r10,r28
	ctx.r10.u64 = ~ctx.r28.u64;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82312d3c
	if (!ctx.cr6.eq) goto loc_82312D3C;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823126dc
	if (ctx.cr6.eq) goto loc_823126DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82312c74
	goto loc_82312C74;
loc_823126DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r16
	ctx.r11.u64 = ctx.r8.u64 & ctx.r16.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82312c74
	goto loc_82312C74;
loc_823126F4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312d28
	if (ctx.cr6.eq) goto loc_82312D28;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x823127b4
	if (!ctx.cr6.eq) goto loc_823127B4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82312740
	if (!ctx.cr6.eq) goto loc_82312740;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82312740
	if (ctx.cr6.eq) goto loc_82312740;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bge cr6,0x82312734
	if (!ctx.cr6.lt) goto loc_82312734;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x82312738
	goto loc_82312738;
loc_82312734:
	// subf r24,r22,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r22.s64;
loc_82312738:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x823127b4
	if (!ctx.cr6.eq) goto loc_823127B4;
loc_82312740:
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x82312754;
	sub_82314E38(ctx, base);
	// lwz r22,52(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82312774
	if (!ctx.cr6.lt) goto loc_82312774;
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// b 0x8231277c
	goto loc_8231277C;
loc_82312774:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r24,r22,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r22.s64;
loc_8231277C:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823127ac
	if (!ctx.cr6.eq) goto loc_823127AC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823127ac
	if (ctx.cr6.eq) goto loc_823127AC;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bge cr6,0x823127a8
	if (!ctx.cr6.lt) goto loc_823127A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x823127ac
	goto loc_823127AC;
loc_823127A8:
	// subf r24,r22,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r22.s64;
loc_823127AC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82312d74
	if (ctx.cr6.eq) goto loc_82312D74;
loc_823127B4:
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823127c8
	if (!ctx.cr6.gt) goto loc_823127C8;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_823127C8:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x823127d4
	if (!ctx.cr6.gt) goto loc_823127D4;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_823127D4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823127E4;
	sub_823DE1F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// subf. r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r25,r26,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r26.s64;
	// add r22,r26,r22
	ctx.r22.u64 = ctx.r26.u64 + ctx.r22.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// subf r24,r26,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r26.s64;
	// bne 0x82312c74
	if (!ctx.cr0.eq) goto loc_82312C74;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r16
	ctx.r7.u64 = ctx.r8.u64 & ctx.r16.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x82312c74
	goto loc_82312C74;
loc_8231281C:
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// bge cr6,0x82312850
	if (!ctx.cr6.lt) goto loc_82312850;
loc_82312824:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312d28
	if (ctx.cr6.eq) goto loc_82312D28;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// slw r10,r11,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// blt cr6,0x82312824
	if (ctx.cr6.lt) goto loc_82312824;
loc_82312850:
	// clrlwi r10,r28,18
	ctx.r10.u64 = ctx.r28.u32 & 0x3FFF;
	// clrlwi r11,r28,27
	ctx.r11.u64 = ctx.r28.u32 & 0x1F;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x82312d90
	if (ctx.cr6.gt) goto loc_82312D90;
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bgt cr6,0x82312d90
	if (ctx.cr6.gt) goto loc_82312D90;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r11,258
	ctx.r4.s64 = ctx.r11.s64 + 258;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8231288C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312ce0
	if (ctx.cr6.eq) goto loc_82312CE0;
	// rlwinm r28,r28,18,14,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0x3FFFF;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// addi r30,r30,-14
	ctx.r30.s64 = ctx.r30.s64 + -14;
	// stw r14,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
loc_823128A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8231293c
	if (!ctx.cr6.lt) goto loc_8231293C;
loc_823128C0:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x823128f4
	if (!ctx.cr6.lt) goto loc_823128F4;
loc_823128C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312d28
	if (ctx.cr6.eq) goto loc_82312D28;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// slw r10,r11,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x823128c8
	if (ctx.cr6.lt) goto loc_823128C8;
loc_823128F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r28,29
	ctx.r10.u64 = ctx.r28.u32 & 0x7;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r28,r28,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// lwzx r7,r8,r19
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r3,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823128c0
	if (ctx.cr6.lt) goto loc_823128C0;
loc_8231293C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bge cr6,0x82312978
	if (!ctx.cr6.lt) goto loc_82312978;
loc_82312948:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r19
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// blt cr6,0x82312948
	if (ctx.cr6.lt) goto loc_82312948;
loc_82312978:
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82314b48
	ctx.lr = 0x82312994;
	sub_82314B48(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312dc8
	if (!ctx.cr6.eq) goto loc_82312DC8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823129AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,258
	ctx.r8.s64 = ctx.r11.s64 + 258;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82312b54
	if (!ctx.cr6.lt) goto loc_82312B54;
loc_823129CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82312a04
	if (!ctx.cr6.lt) goto loc_82312A04;
loc_823129D8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312d28
	if (ctx.cr6.eq) goto loc_82312D28;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// slw r9,r10,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823129d8
	if (ctx.cr6.lt) goto loc_823129D8;
loc_82312A04:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r10,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x82312a54
	if (!ctx.cr6.lt) goto loc_82312A54;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srw r28,r28,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r9,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r9.s64;
	// stwx r5,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// b 0x82312b34
	goto loc_82312B34;
loc_82312A54:
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x82312a68
	if (!ctx.cr6.eq) goto loc_82312A68;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x82312a70
	goto loc_82312A70;
loc_82312A68:
	// addi r11,r5,-14
	ctx.r11.s64 = ctx.r5.s64 + -14;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_82312A70:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82312aa8
	if (!ctx.cr6.lt) goto loc_82312AA8;
loc_82312A7C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82312d28
	if (ctx.cr6.eq) goto loc_82312D28;
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// slw r7,r8,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82312a7c
	if (ctx.cr6.lt) goto loc_82312A7C;
loc_82312AA8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srw r4,r28,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r3,r10,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// rlwinm r7,r8,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srw r28,r4,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,258
	ctx.r6.s64 = ctx.r8.s64 + 258;
	// subf r30,r9,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82312e08
	if (ctx.cr6.gt) goto loc_82312E08;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bne cr6,0x82312b10
	if (!ctx.cr6.eq) goto loc_82312B10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82312e08
	if (ctx.cr6.lt) goto loc_82312E08;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// b 0x82312b14
	goto loc_82312B14;
loc_82312B10:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82312B14:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82312B18:
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82312b18
	if (!ctx.cr0.eq) goto loc_82312B18;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82312B34:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,258
	ctx.r8.s64 = ctx.r11.s64 + 258;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823129cc
	if (ctx.cr6.lt) goto loc_823129CC;
loc_82312B54:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r4,r6,27,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1F;
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r3,r11,257
	ctx.r3.s64 = ctx.r11.s64 + 257;
	// bl 0x82314c30
	ctx.lr = 0x82312B94;
	sub_82314C30(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312e54
	if (!ctx.cr6.eq) goto loc_82312E54;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82313000
	ctx.lr = 0x82312BCC;
	sub_82313000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312ce0
	if (ctx.cr6.eq) goto loc_82312CE0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
loc_82312BDC:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// bl 0x82313060
	ctx.lr = 0x82312C14;
	sub_82313060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82312cb0
	if (!ctx.cr6.eq) goto loc_82312CB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// bl 0x82313740
	ctx.lr = 0x82312C30;
	sub_82313740(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r22,52(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r25,4(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bge cr6,0x82312c5c
	if (!ctx.cr6.lt) goto loc_82312C5C;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x82312c64
	goto loc_82312C64;
loc_82312C5C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r24,r22,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r22.s64;
loc_82312C64:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312e7c
	if (!ctx.cr6.eq) goto loc_82312E7C;
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_82312C74:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x82312558
	if (!ctx.cr6.gt) goto loc_82312558;
loc_82312C80:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_82312C84:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_82312C90:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82312C9C:
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_82312CA4:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
loc_82312CB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x82312CB8;
	sub_82314E38(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_82312CC0:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r21,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82312c9c
	goto loc_82312C9C;
loc_82312CE0:
	// li r5,-4
	ctx.r5.s64 = -4;
	// b 0x82312c84
	goto loc_82312C84;
loc_82312CE8:
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r28,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r11,12020
	ctx.r9.s64 = ctx.r11.s64 + 12020;
	// addi r8,r30,-3
	ctx.r8.s64 = ctx.r30.s64 + -3;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82312ca4
	goto loc_82312CA4;
loc_82312D28:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r21,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r21.u32);
	// b 0x82312c90
	goto loc_82312C90;
loc_82312D3C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r10,r11,11988
	ctx.r10.s64 = ctx.r11.s64 + 11988;
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// b 0x82312ca4
	goto loc_82312CA4;
loc_82312D74:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82312c9c
	goto loc_82312C9C;
loc_82312D90:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r10,r11,11952
	ctx.r10.s64 = ctx.r11.s64 + 11952;
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// b 0x82312ca4
	goto loc_82312CA4;
loc_82312DC8:
	// cmpwi cr6,r26,-3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -3, ctx.xer);
	// bne cr6,0x82312de8
	if (!ctx.cr6.eq) goto loc_82312DE8;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
loc_82312DE8:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82312c9c
	goto loc_82312C9C;
loc_82312E08:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r9,r10,11924
	ctx.r9.s64 = ctx.r10.s64 + 11924;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// b 0x82312ca4
	goto loc_82312CA4;
loc_82312E54:
	// cmpwi cr6,r26,-3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -3, ctx.xer);
	// bne cr6,0x82312e74
	if (!ctx.cr6.eq) goto loc_82312E74;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
loc_82312E74:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x82312c84
	goto loc_82312C84;
loc_82312E7C:
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
loc_82312E80:
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x82312E94;
	sub_82314E38(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82312c84
	if (!ctx.cr6.eq) goto loc_82312C84;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82312EB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82312c84
	goto loc_82312C84;
loc_82312EBC:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x82312c84
	goto loc_82312C84;
}

PPC_WEAK_FUNC(sub_823124D8) {
	__imp__sub_823124D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82312EC4) {
	__imp__sub_82312EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312EC8) {
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
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82312ef8
	if (ctx.cr6.eq) goto loc_82312EF8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82312f0c
	if (!ctx.cr6.eq) goto loc_82312F0C;
loc_82312EF8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82312F0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82312f24
	if (!ctx.cr6.eq) goto loc_82312F24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82313740
	ctx.lr = 0x82312F24;
	sub_82313740(ctx, base);
loc_82312F24:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82312F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82312F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_82312EC8) {
	__imp__sub_82312EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82312F94) {
	__imp__sub_82312F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312F98) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82312FBC;
	sub_823DE1F0(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82312F98) {
	__imp__sub_82312F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82312FE4) {
	__imp__sub_82312FE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82312FE8) {
	__imp__sub_82312FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82312FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82312FFC) {
	__imp__sub_82312FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82313008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313054
	if (ctx.cr6.eq) goto loc_82313054;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r31.u8);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
loc_82313054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82313000) {
	__imp__sub_82313000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231305C) {
	__imp__sub_8231305C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82313068;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r24,4(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bge cr6,0x823130a4
	if (!ctx.cr6.lt) goto loc_823130A4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x823130ac
	goto loc_823130AC;
loc_823130A4:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823130AC:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bgt cr6,0x82313630
	if (ctx.cr6.gt) goto loc_82313630;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r15,7
	ctx.r15.s64 = 7;
	// li r19,9
	ctx.r19.s64 = 9;
	// li r14,1
	ctx.r14.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r16,6
	ctx.r16.s64 = 6;
	// li r17,2
	ctx.r17.s64 = 2;
	// addi r22,r10,29712
	ctx.r22.s64 = ctx.r10.s64 + 29712;
	// li r20,3
	ctx.r20.s64 = 3;
	// li r18,4
	ctx.r18.s64 = 4;
	// li r21,5
	ctx.r21.s64 = 5;
loc_823130E4:
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12540
	ctx.r12.s64 = ctx.r12.s64 + 12540;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82313124;
	case 1:
		goto loc_823131E4;
	case 2:
		goto loc_823132B8;
	case 3:
		goto loc_82313324;
	case 4:
		goto loc_823133CC;
	case 5:
		goto loc_82313428;
	case 6:
		goto loc_82313558;
	case 7:
		goto loc_823136F0;
	case 8:
		goto loc_82313730;
	case 9:
		goto loc_82313738;
	default:
		return;
	}
	// lwz r17,12580(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12580);
	// lwz r17,12772(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12772);
	// lwz r17,12984(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12984);
	// lwz r17,13092(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13092);
	// lwz r17,13260(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13260);
	// lwz r17,13352(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13352);
	// lwz r17,13656(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13656);
	// lwz r17,14064(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14064);
	// lwz r17,14128(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14128);
	// lwz r17,14136(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14136);
loc_82313124:
	// cmplwi cr6,r7,258
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 258, ctx.xer);
	// blt cr6,0x823131d0
	if (ctx.cr6.lt) goto loc_823131D0;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 10, ctx.xer);
	// blt cr6,0x823131d0
	if (ctx.cr6.lt) goto loc_823131D0;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lbz r4,17(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// lbz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// bl 0x82313758
	ctx.lr = 0x82313178;
	sub_82313758(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r24,4(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bge cr6,0x823131a8
	if (!ctx.cr6.lt) goto loc_823131A8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x823131b0
	goto loc_823131B0;
loc_823131A8:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823131B0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823131d0
	if (ctx.cr6.eq) goto loc_823131D0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// beq cr6,0x823131c8
	if (ctx.cr6.eq) goto loc_823131C8;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_823131C8:
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82313624
	goto loc_82313624;
loc_823131D0:
	// lbz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r14,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r14.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
loc_823131E4:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8231321c
	if (!ctx.cr6.lt) goto loc_8231321C;
loc_823131F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82313670
	if (ctx.cr6.eq) goto loc_82313670;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823131f0
	if (ctx.cr6.lt) goto loc_823131F0;
loc_8231321C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwzx r8,r9,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// and r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 & ctx.r28.u64;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srw r28,r28,r4
	ctx.r28.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r4.u8 & 0x3F));
	// subf r29,r4,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r4.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8231325c
	if (!ctx.cr6.eq) goto loc_8231325C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r16,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r16.u32);
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// b 0x82313624
	goto loc_82313624;
loc_8231325C:
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82313280
	if (ctx.cr6.eq) goto loc_82313280;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r8.u32);
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
	// b 0x82313624
	goto loc_82313624;
loc_82313280:
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823132a4
	if (!ctx.cr6.eq) goto loc_823132A4;
	// stw r9,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// b 0x82313624
	goto loc_82313624;
loc_823132A4:
	// rlwinm r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313680
	if (ctx.cr6.eq) goto loc_82313680;
	// stw r15,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r15.u32);
	// b 0x82313624
	goto loc_82313624;
loc_823132B8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823132f0
	if (!ctx.cr6.lt) goto loc_823132F0;
loc_823132C4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82313670
	if (ctx.cr6.eq) goto loc_82313670;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823132c4
	if (ctx.cr6.lt) goto loc_823132C4;
loc_823132F0:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lbz r6,17(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwzx r3,r8,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// stw r6,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r6.u32);
	// and r8,r3,r28
	ctx.r8.u64 = ctx.r3.u64 & ctx.r28.u64;
	// stw r4,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r4.u32);
	// srw r28,r28,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r20,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r20.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_82313324:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8231335c
	if (!ctx.cr6.lt) goto loc_8231335C;
loc_82313330:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82313670
	if (ctx.cr6.eq) goto loc_82313670;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82313330
	if (ctx.cr6.lt) goto loc_82313330;
loc_8231335C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwzx r8,r9,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// and r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 & ctx.r28.u64;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r3,r9,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// srw r28,r28,r4
	ctx.r28.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r4.u8 & 0x3F));
	// subf r29,r4,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r4.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823133a8
	if (ctx.cr6.eq) goto loc_823133A8;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r18,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r18.u32);
	// stw r8,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r8.u32);
	// b 0x82313624
	goto loc_82313624;
loc_823133A8:
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823136b8
	if (!ctx.cr6.eq) goto loc_823136B8;
	// stw r9,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// b 0x82313624
	goto loc_82313624;
loc_823133CC:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82313404
	if (!ctx.cr6.lt) goto loc_82313404;
loc_823133D8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82313670
	if (ctx.cr6.eq) goto loc_82313670;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823133d8
	if (ctx.cr6.lt) goto loc_823133D8;
loc_82313404:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lwzx r6,r9,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// stw r21,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r21.u32);
	// and r9,r6,r28
	ctx.r9.u64 = ctx.r6.u64 & ctx.r28.u64;
	// srw r28,r28,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r4.u32);
loc_82313428:
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r25,r9,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82313454
	if (!ctx.cr6.lt) goto loc_82313454;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_82313448:
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82313448
	if (ctx.cr6.lt) goto loc_82313448;
loc_82313454:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313620
	if (ctx.cr6.eq) goto loc_82313620;
loc_82313460:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82313514
	if (!ctx.cr6.eq) goto loc_82313514;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823134a4
	if (!ctx.cr6.eq) goto loc_823134A4;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823134a4
	if (ctx.cr6.eq) goto loc_823134A4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82313498
	if (!ctx.cr6.lt) goto loc_82313498;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8231349c
	goto loc_8231349C;
loc_82313498:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_8231349C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82313514
	if (!ctx.cr6.eq) goto loc_82313514;
loc_823134A4:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x823134B4;
	sub_82314E38(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823134d4
	if (!ctx.cr6.lt) goto loc_823134D4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x823134dc
	goto loc_823134DC;
loc_823134D4:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_823134DC:
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8231350c
	if (!ctx.cr6.eq) goto loc_8231350C;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231350c
	if (ctx.cr6.eq) goto loc_8231350C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82313508
	if (!ctx.cr6.lt) goto loc_82313508;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x8231350c
	goto loc_8231350C;
loc_82313508:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_8231350C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82313634
	if (ctx.cr6.eq) goto loc_82313634;
loc_82313514:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8231353c
	if (!ctx.cr6.eq) goto loc_8231353C;
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_8231353C:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82313460
	if (!ctx.cr6.eq) goto loc_82313460;
	// b 0x82313620
	goto loc_82313620;
loc_82313558:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8231360c
	if (!ctx.cr6.eq) goto loc_8231360C;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8231359c
	if (!ctx.cr6.eq) goto loc_8231359C;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231359c
	if (ctx.cr6.eq) goto loc_8231359C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82313590
	if (!ctx.cr6.lt) goto loc_82313590;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82313594
	goto loc_82313594;
loc_82313590:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82313594:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8231360c
	if (!ctx.cr6.eq) goto loc_8231360C;
loc_8231359C:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x823135AC;
	sub_82314E38(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823135cc
	if (!ctx.cr6.lt) goto loc_823135CC;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x823135d4
	goto loc_823135D4;
loc_823135CC:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_823135D4:
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82313604
	if (!ctx.cr6.eq) goto loc_82313604;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82313604
	if (ctx.cr6.eq) goto loc_82313604;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82313600
	if (!ctx.cr6.lt) goto loc_82313600;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82313604
	goto loc_82313604;
loc_82313600:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82313604:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82313634
	if (ctx.cr6.eq) goto loc_82313634;
loc_8231360C:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82313620:
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
loc_82313624:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x823130e4
	if (!ctx.cr6.gt) goto loc_823130E4;
loc_82313630:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_82313634:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_82313640:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_82313654:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x82313668;
	sub_82314E38(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_82313670:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// b 0x82313640
	goto loc_82313640;
loc_82313680:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r19,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r19.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r9,r10,12064
	ctx.r9.s64 = ctx.r10.s64 + 12064;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r8,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r8.s64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// b 0x82313654
	goto loc_82313654;
loc_823136B8:
	// stw r19,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r19.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r9,r10,12040
	ctx.r9.s64 = ctx.r10.s64 + 12040;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r8,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r8.s64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// b 0x82313654
	goto loc_82313654;
loc_823136F0:
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// ble cr6,0x82313704
	if (!ctx.cr6.gt) goto loc_82313704;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82313704:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314e38
	ctx.lr = 0x82313714;
	sub_82314E38(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82313634
	if (!ctx.cr6.eq) goto loc_82313634;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82313730:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82313634
	goto loc_82313634;
loc_82313738:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x82313634
	goto loc_82313634;
}

PPC_WEAK_FUNC(sub_82313060) {
	__imp__sub_82313060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313740) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82313740) {
	__imp__sub_82313740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82313760;
	__savegprlr_22(ctx, base);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,4(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r29,32(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r30,28(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// bge cr6,0x8231378c
	if (!ctx.cr6.lt) goto loc_8231378C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x82313794
	goto loc_82313794;
loc_8231378C:
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subf r24,r9,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82313794:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,29712
	ctx.r27.s64 = ctx.r11.s64 + 29712;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r27
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r23,r4,r27
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
loc_823137AC:
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// bge cr6,0x823137e0
	if (!ctx.cr6.lt) goto loc_823137E0;
	// subfic r11,r30,19
	ctx.xer.ca = ctx.r30.u32 <= 19;
	ctx.r11.s64 = 19 - ctx.r30.s64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823137C4:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r10,r11,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bdnz 0x823137c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823137C4;
loc_823137E0:
	// and r11,r22,r29
	ctx.r11.u64 = ctx.r22.u64 & ctx.r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82313810
	if (!ctx.cr6.eq) goto loc_82313810;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r29,r29,r4
	ctx.r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r4.u8 & 0x3F));
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// subf r30,r4,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r4.s64;
	// b 0x82313a68
	goto loc_82313A68;
loc_82313810:
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r31,r10,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// srw r4,r29,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r3.u8 & 0x3F));
	// subf r3,r3,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82313870
	if (!ctx.cr6.eq) goto loc_82313870;
loc_82313828:
	// rlwinm r31,r10,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82313b3c
	if (!ctx.cr6.eq) goto loc_82313B3C;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r31,r31,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// and r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 & ctx.r4.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r10,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313a54
	if (ctx.cr6.eq) goto loc_82313A54;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r30,r10,0,27,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// srw r4,r4,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r31.u8 & 0x3F));
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82313828
	if (ctx.cr6.eq) goto loc_82313828;
loc_82313870:
	// clrlwi r30,r10,28
	ctx.r30.u64 = ctx.r10.u32 & 0xF;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// srw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r30.u8 & 0x3F));
	// lwzx r3,r29,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// and r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 & ctx.r4.u64;
	// add r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bge cr6,0x823138c4
	if (!ctx.cr6.lt) goto loc_823138C4;
	// subfic r4,r10,14
	ctx.xer.ca = ctx.r10.u32 <= 14;
	ctx.r4.s64 = 14 - ctx.r10.s64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823138A8:
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r3,r4,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823138a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823138A8;
loc_823138C4:
	// and r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 & ctx.r11.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r31,1(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm r30,r3,0,27,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8231392c
	if (!ctx.cr6.eq) goto loc_8231392C;
loc_823138EC:
	// rlwinm r31,r3,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82313ad8
	if (!ctx.cr6.eq) goto loc_82313AD8;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// and r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ctx.r11.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rlwinm r31,r3,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lbz r31,1(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// beq cr6,0x823138ec
	if (ctx.cr6.eq) goto loc_823138EC;
loc_8231392C:
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82313968
	if (!ctx.cr6.lt) goto loc_82313968;
	// subf r31,r10,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// rlwinm r31,r31,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8231394C:
	// lbz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r31,r31,r10
	ctx.r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8231394c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231394C;
loc_82313968:
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// srw r29,r11,r3
	ctx.r29.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r31,r31,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// subf r30,r3,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// subf r24,r28,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r28.s64;
	// and r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ctx.r11.u64;
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82313a24
	if (!ctx.cr6.lt) goto loc_82313A24;
	// lwz r3,44(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subf r4,r10,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r10.s64;
loc_823139A0:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823139a0
	if (ctx.cr6.lt) goto loc_823139A0;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823139f4
	if (!ctx.cr6.gt) goto loc_823139F4;
	// subf r4,r10,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823139C0:
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x823139c0
	if (!ctx.cr0.eq) goto loc_823139C0;
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823139DC:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x823139dc
	if (!ctx.cr0.eq) goto loc_823139DC;
	// b 0x82313a70
	goto loc_82313A70;
loc_823139F4:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r3,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82313A0C:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82313a0c
	if (!ctx.cr0.eq) goto loc_82313A0C;
	// b 0x82313a70
	goto loc_82313A70;
loc_82313A24:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r3,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82313A3C:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82313a3c
	if (!ctx.cr0.eq) goto loc_82313A3C;
	// b 0x82313a70
	goto loc_82313A70;
loc_82313A54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r29,r4,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// subf r30,r11,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82313A68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_82313A70:
	// cmplwi cr6,r24,258
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 258, ctx.xer);
	// blt cr6,0x82313a80
	if (ctx.cr6.lt) goto loc_82313A80;
	// cmplwi cr6,r25,10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 10, ctx.xer);
	// bge cr6,0x823137ac
	if (!ctx.cr6.lt) goto loc_823137AC;
loc_82313A80:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82313a98
	if (!ctx.cr6.lt) goto loc_82313A98;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82313A98:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r29.u32);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r5,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r9,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82313AD8:
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r3,r4,12040
	ctx.r3.s64 = ctx.r4.s64 + 12040;
	// subf r6,r25,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r25.s64;
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82313afc
	if (!ctx.cr6.lt) goto loc_82313AFC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82313AFC:
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// subf r11,r6,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r6.s64;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// stw r4,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r4.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82313B3C:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// rlwinm r10,r3,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// beq cr6,0x82313ba0
	if (ctx.cr6.eq) goto loc_82313BA0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82313b60
	if (!ctx.cr6.lt) goto loc_82313B60;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82313B60:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r4.u32);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r5,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r9,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82313BA0:
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// addi r5,r6,12064
	ctx.r5.s64 = ctx.r6.s64 + 12064;
	// stw r5,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r5.u32);
	// bge cr6,0x82313bb8
	if (!ctx.cr6.lt) goto loc_82313BB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82313BB8:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r4.u32);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r5,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r9,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82313758) {
	__imp__sub_82313758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313BF8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313c68
	if (ctx.cr6.eq) goto loc_82313C68;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313c68
	if (ctx.cr6.eq) goto loc_82313C68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x82312350
	ctx.lr = 0x82313C54;
	sub_82312350(ctx, base);
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
loc_82313C68:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82313BF8) {
	__imp__sub_82313BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82313C7C) {
	__imp__sub_82313C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313C80) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313cfc
	if (ctx.cr6.eq) goto loc_82313CFC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313cfc
	if (ctx.cr6.eq) goto loc_82313CFC;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313cfc
	if (ctx.cr6.eq) goto loc_82313CFC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313cc8
	if (ctx.cr6.eq) goto loc_82313CC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82312ec8
	ctx.lr = 0x82313CC8;
	sub_82312EC8(ctx, base);
loc_82313CC8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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
loc_82313CFC:
	// li r3,-2
	ctx.r3.s64 = -2;
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

PPC_WEAK_FUNC(sub_82313C80) {
	__imp__sub_82313C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82313D14) {
	__imp__sub_82313D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82313D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82313e4c
	if (ctx.cr6.eq) goto loc_82313E4C;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x82313e4c
	if (!ctx.cr6.eq) goto loc_82313E4C;
	// cmplwi cr6,r6,48
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 48, ctx.xer);
	// bne cr6,0x82313e4c
	if (!ctx.cr6.eq) goto loc_82313E4C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313e40
	if (ctx.cr6.eq) goto loc_82313E40;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82313d74
	if (!ctx.cr6.eq) goto loc_82313D74;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// addi r10,r11,28616
	ctx.r10.s64 = ctx.r11.s64 + 28616;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
loc_82313D74:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82313d8c
	if (!ctx.cr6.eq) goto loc_82313D8C;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r10,r11,28688
	ctx.r10.s64 = ctx.r11.s64 + 28688;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_82313D8C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82313e1c
	if (ctx.cr6.eq) goto loc_82313E1C;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// bge cr6,0x82313dd4
	if (!ctx.cr6.lt) goto loc_82313DD4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82313DD4:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82313e38
	if (ctx.cr6.lt) goto loc_82313E38;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x82313e38
	if (ctx.cr6.gt) goto loc_82313E38;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r5,r11,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823123d8
	ctx.lr = 0x82313DFC;
	sub_823123D8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82313e28
	if (!ctx.cr6.eq) goto loc_82313E28;
	// bl 0x82313c80
	ctx.lr = 0x82313E1C;
	sub_82313C80(ctx, base);
loc_82313E1C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82313E28:
	// bl 0x82313bf8
	ctx.lr = 0x82313E2C;
	sub_82313BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82313E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313c80
	ctx.lr = 0x82313E40;
	sub_82313C80(ctx, base);
loc_82313E40:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82313E4C:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82313D18) {
	__imp__sub_82313D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313E58) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82313d18
	sub_82313D18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82313E58) {
	__imp__sub_82313E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82313E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82313E70;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823140fc
	if (ctx.cr6.eq) goto loc_823140FC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823140fc
	if (ctx.cr6.eq) goto loc_823140FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823140fc
	if (ctx.cr6.eq) goto loc_823140FC;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,-5
	ctx.r30.s64 = -5;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r6,r30
	ctx.r29.u64 = ctx.r6.u64 & ctx.r30.u64;
	// bgt cr6,0x823140fc
	if (ctx.cr6.gt) goto loc_823140FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r7,2114
	ctx.r7.s64 = 138543104;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r27,13
	ctx.r27.s64 = 13;
	// li r26,5
	ctx.r26.s64 = 5;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r28,r7,4229
	ctx.r28.u64 = ctx.r7.u64 | 4229;
	// li r21,7
	ctx.r21.s64 = 7;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r19,12
	ctx.r19.s64 = 12;
	// addi r25,r11,12160
	ctx.r25.s64 = ctx.r11.s64 + 12160;
	// addi r24,r10,12140
	ctx.r24.s64 = ctx.r10.s64 + 12140;
	// addi r23,r9,12112
	ctx.r23.s64 = ctx.r9.s64 + 12112;
loc_82313EF0:
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16136
	ctx.r12.s64 = ctx.r12.s64 + 16136;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_82313F40;
	case 1:
		goto loc_82313FE0;
	case 2:
		goto loc_8231411C;
	case 3:
		goto loc_82314174;
	case 4:
		goto loc_823141D4;
	case 5:
		goto loc_82314230;
	case 6:
		goto loc_82314294;
	case 7:
		goto loc_82314078;
	case 8:
		goto loc_823142C4;
	case 9:
		goto loc_8231431C;
	case 10:
		goto loc_8231437C;
	case 11:
		goto loc_823143DC;
	case 12:
		goto loc_82314430;
	case 13:
		goto loc_8231443C;
	default:
		return;
	}
	// lwz r17,16192(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16192);
	// lwz r17,16352(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16352);
	// lwz r17,16668(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16668);
	// lwz r17,16756(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16756);
	// lwz r17,16852(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16852);
	// lwz r17,16944(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16944);
	// lwz r17,17044(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17044);
	// lwz r17,16504(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16504);
	// lwz r17,17092(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17092);
	// lwz r17,17180(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17180);
	// lwz r17,17276(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17276);
	// lwz r17,17372(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17372);
	// lwz r17,17456(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17456);
	// lwz r17,17468(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17468);
loc_82313F40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r9,-128
	ctx.r9.s64 = -128;
	// dcbf r9,r10
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq cr6,0x82313fb0
	if (ctx.cr6.eq) goto loc_82313FB0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x823140ec
	goto loc_823140EC;
loc_82313FB0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82313fdc
	if (!ctx.cr6.gt) goto loc_82313FDC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x823140ec
	goto loc_823140EC;
loc_82313FDC:
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_82313FE0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r9,-128
	ctx.r9.s64 = -128;
	// dcbf r9,r11
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulhwu r10,r11,r28
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r4,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r3,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82314064
	if (ctx.cr0.eq) goto loc_82314064;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x823140ec
	goto loc_823140EC;
loc_82314064:
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314114
	if (!ctx.cr6.eq) goto loc_82314114;
	// stw r21,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// b 0x823140ec
	goto loc_823140EC;
loc_82314078:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823124d8
	ctx.lr = 0x8231408C;
	sub_823124D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x823140ac
	if (!ctx.cr6.eq) goto loc_823140AC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r22,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r22.u32);
	// b 0x823140ec
	goto loc_823140EC;
loc_823140AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823140b8
	if (!ctx.cr6.eq) goto loc_823140B8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823140B8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82314108
	if (!ctx.cr6.eq) goto loc_82314108;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82312350
	ctx.lr = 0x823140D8;
	sub_82312350(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823142bc
	if (ctx.cr6.eq) goto loc_823142BC;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
loc_823140EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// ble cr6,0x82313ef0
	if (!ctx.cr6.gt) goto loc_82313EF0;
loc_823140FC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82314108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82314114:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8231411C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r9,-128
	ctx.r9.s64 = -128;
	// dcbf r9,r10
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r3,r4,24
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 24);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82314174:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r8,-128
	ctx.r8.s64 = -128;
	// dcbf r8,r9
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_823141D4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r8,-128
	ctx.r8.s64 = -128;
	// dcbf r8,r9
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
loc_82314230:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,-128
	ctx.r7.s64 = -128;
	// dcbf r7,r8
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82314294:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r9,r10,12096
	ctx.r9.s64 = ctx.r10.s64 + 12096;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r22,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_823142BC:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823142C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r9,-128
	ctx.r9.s64 = -128;
	// dcbf r9,r10
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r3,r4,24
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 24);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8231431C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r8,-128
	ctx.r8.s64 = -128;
	// dcbf r8,r9
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8231437C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r7,-128
	ctx.r7.s64 = -128;
	// dcbf r7,r8
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lbz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_823143DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314108
	if (ctx.cr6.eq) goto loc_82314108;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,-128
	ctx.r8.s64 = -128;
	// dcbf r8,r9
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r19,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r19.u32);
loc_82314430:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_8231443C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82313E68) {
	__imp__sub_82313E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314448) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823144cc
	if (ctx.cr6.eq) goto loc_823144CC;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823144cc
	if (ctx.cr6.eq) goto loc_823144CC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x823144cc
	if (!ctx.cr6.eq) goto loc_823144CC;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823144a0
	if (ctx.cr6.lt) goto loc_823144A0;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823144A0:
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x82312f98
	ctx.lr = 0x823144A8;
	sub_82312F98(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
loc_823144CC:
	// li r3,-2
	ctx.r3.s64 = -2;
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

PPC_WEAK_FUNC(sub_82314448) {
	__imp__sub_82314448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823144E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823144E4) {
	__imp__sub_823144E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823144E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823144F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823145fc
	if (ctx.cr6.eq) goto loc_823145FC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823145fc
	if (ctx.cr6.eq) goto loc_823145FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8231452c
	if (ctx.cr6.eq) goto loc_8231452C;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_8231452C:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82314544
	if (!ctx.cr6.eq) goto loc_82314544;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82314544:
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r9,12092
	ctx.r7.s64 = ctx.r9.s64 + 12092;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_8231455C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8231459c
	if (!ctx.cr6.lt) goto loc_8231459C;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8231457c
	if (!ctx.cr6.eq) goto loc_8231457C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82314590
	goto loc_82314590;
loc_8231457C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8231458c
	if (ctx.cr6.eq) goto loc_8231458C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82314590
	goto loc_82314590;
loc_8231458C:
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
loc_82314590:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8231455c
	if (!ctx.cr0.eq) goto loc_8231455C;
loc_8231459C:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823145cc
	if (ctx.cr6.eq) goto loc_823145CC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823145CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82313bf8
	ctx.lr = 0x823145DC;
	sub_82313BF8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823145FC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823144E8) {
	__imp__sub_823144E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314608) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231462c
	if (ctx.cr6.eq) goto loc_8231462C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231462c
	if (ctx.cr6.eq) goto loc_8231462C;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231462c
	if (ctx.cr6.eq) goto loc_8231462C;
	// b 0x82312fe8
	sub_82312FE8(ctx, base);
	return;
loc_8231462C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82314608) {
	__imp__sub_82314608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82314634) {
	__imp__sub_82314634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82314640;
	__savegprlr_14(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// stw r10,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r15,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r15.u32);
	// stw r15,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, ctx.r15.u32);
	// stw r15,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r15.u32);
	// stw r15,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, ctx.r15.u32);
	// stw r15,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r15.u32);
	// stw r15,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, ctx.r15.u32);
	// stw r15,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, ctx.r15.u32);
	// stw r15,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// stw r15,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, ctx.r15.u32);
	// stw r15,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r15.u32);
	// stw r15,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r15.u32);
	// stw r15,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r15.u32);
	// stw r15,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r15.u32);
	// stw r15,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r15.u32);
	// stw r15,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r15.u32);
	// stw r15,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r15.u32);
	// stw r15,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r15.u32);
loc_823146AC:
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r31,r1,-368
	ctx.r31.s64 = ctx.r1.s64 + -368;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r30,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// bne 0x823146ac
	if (!ctx.cr0.eq) goto loc_823146AC;
	// lwz r11,-368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823146e8
	if (!ctx.cr6.eq) goto loc_823146E8;
	// stw r15,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r15.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r15,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r15.u32);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_823146E8:
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r1,-360
	ctx.r31.s64 = ctx.r1.s64 + -360;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823146F8:
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82314764
	if (!ctx.cr6.eq) goto loc_82314764;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82314748
	if (!ctx.cr6.eq) goto loc_82314748;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82314750
	if (!ctx.cr6.eq) goto loc_82314750;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82314758
	if (!ctx.cr6.eq) goto loc_82314758;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82314760
	if (!ctx.cr6.eq) goto loc_82314760;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x823146f8
	if (!ctx.cr6.gt) goto loc_823146F8;
	// b 0x82314764
	goto loc_82314764;
loc_82314748:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82314764
	goto loc_82314764;
loc_82314750:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82314764
	goto loc_82314764;
loc_82314758:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82314764
	goto loc_82314764;
loc_82314760:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82314764:
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82314774
	if (!ctx.cr6.lt) goto loc_82314774;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82314774:
	// li r31,15
	ctx.r31.s64 = 15;
	// addi r30,r1,-308
	ctx.r30.s64 = ctx.r1.s64 + -308;
loc_8231477C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82314794
	if (!ctx.cr6.eq) goto loc_82314794;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bne 0x8231477c
	if (!ctx.cr0.eq) goto loc_8231477C;
loc_82314794:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x823147a4
	if (!ctx.cr6.gt) goto loc_823147A4;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_823147A4:
	// stw r23,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// slw r30,r21,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x823147e0
	if (!ctx.cr6.lt) goto loc_823147E0;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
loc_823147C0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf. r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x823149d0
	if (ctx.cr0.lt) goto loc_823149D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x823147c0
	if (ctx.cr6.lt) goto loc_823147C0;
loc_823147E0:
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// subf. r22,r11,r30
	ctx.r22.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r22.u32);
	// blt 0x823149d0
	if (ctx.cr0.lt) goto loc_823149D0;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r15,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r15.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r11,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// beq 0x82314834
	if (ctx.cr0.eq) goto loc_82314834;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r30,r1,-364
	ctx.r30.s64 = ctx.r1.s64 + -364;
	// addi r29,r1,-280
	ctx.r29.s64 = ctx.r1.s64 + -280;
loc_82314820:
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82314820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82314820;
loc_82314834:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82314840:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314868
	if (ctx.cr6.eq) goto loc_82314868;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// stwx r31,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u32);
loc_82314868:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82314840
	if (ctx.cr6.lt) goto loc_82314840;
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// stw r15,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r15.u32);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// neg r30,r23
	ctx.r30.s64 = -ctx.r23.s64;
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// stw r15,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r15.u32);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r8.s32, ctx.xer);
	// stw r9,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// bgt cr6,0x82314b2c
	if (ctx.cr6.gt) goto loc_82314B2C;
	// rlwinm r9,r18,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// addi r14,r18,-1
	ctx.r14.s64 = ctx.r18.s64 + -1;
	// add r16,r9,r11
	ctx.r16.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823148BC:
	// lwz r20,0(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82314b18
	if (ctx.cr6.eq) goto loc_82314B18;
loc_823148C8:
	// add r11,r30,r23
	ctx.r11.u64 = ctx.r30.u64 + ctx.r23.u64;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823149f0
	if (!ctx.cr6.gt) goto loc_823149F0;
	// addi r22,r20,1
	ctx.r22.s64 = ctx.r20.s64 + 1;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// subf r28,r23,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r23.s64;
loc_823148E4:
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// subf r3,r30,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r30.s64;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x82314904
	if (!ctx.cr6.gt) goto loc_82314904;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82314904:
	// subf r11,r30,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r30.s64;
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82314954
	if (!ctx.cr6.gt) goto loc_82314954;
	// subf r9,r20,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r20.s64;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82314954
	if (!ctx.cr6.lt) goto loc_82314954;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82314954
	if (!ctx.cr6.lt) goto loc_82314954;
loc_82314934:
	// lwzu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82314954
	if (!ctx.cr6.gt) goto loc_82314954;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82314934
	if (ctx.cr6.lt) goto loc_82314934;
loc_82314954:
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// slw r26,r21,r11
	ctx.r26.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r4,r26
	ctx.r3.u64 = ctx.r4.u64 + ctx.r26.u64;
	// cmplwi cr6,r3,1440
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1440, ctx.xer);
	// bgt cr6,0x823149d0
	if (ctx.cr6.gt) goto loc_823149D0;
	// stw r3,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,76(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 76);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r29,r3,r6
	ctx.r29.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stwx r29,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r29.u32);
	// beq cr6,0x823149d8
	if (ctx.cr6.eq) goto loc_823149D8;
	// lwz r6,-4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// srw r5,r24,r28
	ctx.r5.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r28.u8 & 0x3F));
	// subf r4,r6,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r6.s64;
	// stb r11,-384(r1)
	PPC_STORE_U8(ctx.r1.u32 + -384, ctx.r11.u8);
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r23,-383(r1)
	PPC_STORE_U8(ctx.r1.u32 + -383, ctx.r23.u8);
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// lwz r7,60(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
	// addi r3,r1,-288
	ctx.r3.s64 = ctx.r1.s64 + -288;
	// std r10,-304(r1)
	PPC_STORE_U64(ctx.r1.u32 + -304, ctx.r10.u64);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r5,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r5.u32);
	// ld r4,-384(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// stwx r24,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r24.u32);
	// stdx r4,r31,r6
	PPC_STORE_U64(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u64);
	// b 0x823149dc
	goto loc_823149DC;
loc_823149D0:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_823149D8:
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
loc_823149DC:
	// cmpw cr6,r18,r25
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x823148e4
	if (ctx.cr6.gt) goto loc_823148E4;
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r25,52(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
loc_823149F0:
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// subf r9,r30,r18
	ctx.r9.s64 = ctx.r18.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r9,-383(r1)
	PPC_STORE_U8(ctx.r1.u32 + -383, ctx.r9.u8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r17,r3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82314a18
	if (ctx.cr6.lt) goto loc_82314A18;
	// li r11,192
	ctx.r11.s64 = 192;
	// stb r11,-384(r1)
	PPC_STORE_U8(ctx.r1.u32 + -384, ctx.r11.u8);
	// b 0x82314a68
	goto loc_82314A68;
loc_82314A18:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82314a4c
	if (!ctx.cr6.lt) goto loc_82314A4C;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// subfc r3,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// and r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stb r4,-384(r1)
	PPC_STORE_U8(ctx.r1.u32 + -384, ctx.r4.u8);
	// b 0x82314a68
	goto loc_82314A68;
loc_82314A4C:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stb r3,-384(r1)
	PPC_STORE_U8(ctx.r1.u32 + -384, ctx.r3.u8);
	// stw r4,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r4.u32);
loc_82314A68:
	// subf r9,r30,r18
	ctx.r9.s64 = ctx.r18.s64 - ctx.r30.s64;
	// srw r11,r24,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r30.u8 & 0x3F));
	// slw r4,r21,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82314aa0
	if (!ctx.cr6.lt) goto loc_82314AA0;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r31,-384(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_82314A90:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stdux r31,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r31.u64);
	ctx.r9.u32 = ea;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82314a90
	if (ctx.cr6.lt) goto loc_82314A90;
loc_82314AA0:
	// slw r9,r21,r14
	ctx.r9.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r14.u8 & 0x3F));
	// and r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 & ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314ac4
	if (ctx.cr6.eq) goto loc_82314AC4;
loc_82314AB0:
	// xor r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 ^ ctx.r24.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 & ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314ab0
	if (!ctx.cr6.eq) goto loc_82314AB0;
loc_82314AC4:
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 ^ ctx.r24.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// slw r4,r21,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r30.u8 & 0x3F));
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r3,r9,r24
	ctx.r3.u64 = ctx.r9.u64 & ctx.r24.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82314b0c
	if (ctx.cr6.eq) goto loc_82314B0C;
loc_82314AEC:
	// subf r30,r23,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r23.s64;
	// lwzu r9,-4(r11)
	ea = -4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// slw r4,r21,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r30.u8 & 0x3F));
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// and r3,r4,r24
	ctx.r3.u64 = ctx.r4.u64 & ctx.r24.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82314aec
	if (!ctx.cr6.eq) goto loc_82314AEC;
loc_82314B0C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x823148c8
	if (!ctx.cr6.eq) goto loc_823148C8;
	// lwz r22,-376(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -376);
loc_82314B18:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823148bc
	if (!ctx.cr6.gt) goto loc_823148BC;
loc_82314B2C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82314b40
	if (ctx.cr6.eq) goto loc_82314B40;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// bne cr6,0x82314b44
	if (!ctx.cr6.eq) goto loc_82314B44;
loc_82314B40:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82314B44:
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82314638) {
	__imp__sub_82314638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82314B50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82314B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314ba0
	if (!ctx.cr6.eq) goto loc_82314BA0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82314BA0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82314638
	ctx.lr = 0x82314BD0;
	sub_82314638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x82314be8
	if (!ctx.cr6.eq) goto loc_82314BE8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,12764
	ctx.r10.s64 = ctx.r11.s64 + 12764;
	// b 0x82314c08
	goto loc_82314C08;
loc_82314BE8:
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -5, ctx.xer);
	// beq cr6,0x82314bfc
	if (ctx.cr6.eq) goto loc_82314BFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314c0c
	if (!ctx.cr6.eq) goto loc_82314C0C;
loc_82314BFC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,-3
	ctx.r30.s64 = -3;
	// addi r10,r11,12728
	ctx.r10.s64 = ctx.r11.s64 + 12728;
loc_82314C08:
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82314C0C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82314B48) {
	__imp__sub_82314B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82314C2C) {
	__imp__sub_82314C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82314C38;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,292(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// li r4,288
	ctx.r4.s64 = 288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82314C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314c98
	if (!ctx.cr6.eq) goto loc_82314C98;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82314C98:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12488
	ctx.r31.s64 = ctx.r11.s64 + 12488;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r7,r31,-128
	ctx.r7.s64 = ctx.r31.s64 + -128;
	// addi r6,r31,-256
	ctx.r6.s64 = ctx.r31.s64 + -256;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r5,257
	ctx.r5.s64 = 257;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82314638
	ctx.lr = 0x82314CD0;
	sub_82314638(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82314dbc
	if (!ctx.cr6.eq) goto loc_82314DBC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314dd8
	if (ctx.cr6.eq) goto loc_82314DD8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82314638
	ctx.lr = 0x82314D1C;
	sub_82314638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82314d5c
	if (!ctx.cr6.eq) goto loc_82314D5C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314d3c
	if (!ctx.cr6.eq) goto loc_82314D3C;
	// cmplwi cr6,r29,257
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 257, ctx.xer);
	// bgt cr6,0x82314d8c
	if (ctx.cr6.gt) goto loc_82314D8C;
loc_82314D3C:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82314D5C:
	// cmpwi cr6,r31,-3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -3, ctx.xer);
	// bne cr6,0x82314d70
	if (!ctx.cr6.eq) goto loc_82314D70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,12936
	ctx.r10.s64 = ctx.r11.s64 + 12936;
	// b 0x82314d98
	goto loc_82314D98;
loc_82314D70:
	// cmpwi cr6,r31,-5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -5, ctx.xer);
	// bne cr6,0x82314d84
	if (!ctx.cr6.eq) goto loc_82314D84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,12908
	ctx.r10.s64 = ctx.r11.s64 + 12908;
	// b 0x82314d94
	goto loc_82314D94;
loc_82314D84:
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -4, ctx.xer);
	// beq cr6,0x82314d9c
	if (ctx.cr6.eq) goto loc_82314D9C;
loc_82314D8C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
loc_82314D94:
	// li r31,-3
	ctx.r31.s64 = -3;
loc_82314D98:
	// stw r10,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r10.u32);
loc_82314D9C:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82314DBC:
	// cmpwi cr6,r26,-3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -3, ctx.xer);
	// bne cr6,0x82314dd0
	if (!ctx.cr6.eq) goto loc_82314DD0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,12836
	ctx.r10.s64 = ctx.r11.s64 + 12836;
	// b 0x82314de4
	goto loc_82314DE4;
loc_82314DD0:
	// cmpwi cr6,r26,-4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -4, ctx.xer);
	// beq cr6,0x82314de8
	if (ctx.cr6.eq) goto loc_82314DE8;
loc_82314DD8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r26,-3
	ctx.r26.s64 = -3;
	// addi r10,r11,12804
	ctx.r10.s64 = ctx.r11.s64 + 12804;
loc_82314DE4:
	// stw r10,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r10.u32);
loc_82314DE8:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82314C30) {
	__imp__sub_82314C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314E08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r11,r10,25352
	ctx.r11.s64 = ctx.r10.s64 + 25352;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r10,25352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25352);
	// addi r8,r11,4104
	ctx.r8.s64 = ctx.r11.s64 + 4104;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82314E08) {
	__imp__sub_82314E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82314E40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r27,12(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82314e68
	if (!ctx.cr6.gt) goto loc_82314E68;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_82314E68:
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82314e7c
	if (!ctx.cr6.gt) goto loc_82314E7C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82314E7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82314e94
	if (ctx.cr6.eq) goto loc_82314E94;
	// addi r10,r26,5
	ctx.r10.s64 = ctx.r26.s64 + 5;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 & ctx.r26.u64;
loc_82314E94:
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// beq cr6,0x82314ec4
	if (ctx.cr6.eq) goto loc_82314EC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82314EC0;
	sub_823DE1F0(ctx, base);
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
loc_82314EC4:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82314f4c
	if (!ctx.cr6.eq) goto loc_82314F4C;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r29,40(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82314ee8
	if (!ctx.cr6.eq) goto loc_82314EE8;
	// stw r29,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r29.u32);
loc_82314EE8:
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r31,r29,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82314f00
	if (!ctx.cr6.gt) goto loc_82314F00;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82314F00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82314f18
	if (ctx.cr6.eq) goto loc_82314F18;
	// addi r10,r26,5
	ctx.r10.s64 = ctx.r26.s64 + 5;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 & ctx.r26.u64;
loc_82314F18:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82314f48
	if (ctx.cr6.eq) goto loc_82314F48;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82314F44;
	sub_823DE1F0(ctx, base);
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
loc_82314F48:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_82314F4C:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82314E38) {
	__imp__sub_82314E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82314F60) {
	__imp__sub_82314F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82314F64) {
	__imp__sub_82314F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,286
	ctx.r11.s64 = 286;
	// addi r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82314F78:
	// sthu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82314f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82314F78;
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r10,r3,2428
	ctx.r10.s64 = ctx.r3.s64 + 2428;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82314F8C:
	// sthu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82314f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82314F8C;
	// li r9,19
	ctx.r9.s64 = 19;
	// addi r10,r3,2672
	ctx.r10.s64 = ctx.r3.s64 + 2672;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82314FA0:
	// sthu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82314fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82314FA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, ctx.r11.u32);
	// stw r11,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r11.u32);
	// sth r10,1164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1164, ctx.r10.u16);
	// stw r11,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r11.u32);
	// stw r11,5784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5784, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82314F68) {
	__imp__sub_82314F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82314FC4) {
	__imp__sub_82314FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82314FC8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,725
	ctx.r11.s64 = ctx.r5.s64 + 725;
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bgt cr6,0x823150a0
	if (ctx.cr6.gt) goto loc_823150A0;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_82314FF0:
	// bge cr6,0x82315044
	if (!ctx.cr6.lt) goto loc_82315044;
	// addi r10,r11,726
	ctx.r10.s64 = ctx.r11.s64 + 726;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82315040
	if (ctx.cr6.lt) goto loc_82315040;
	// bne cr6,0x82315044
	if (!ctx.cr6.eq) goto loc_82315044;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r8,5200(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5200);
	// lbz r7,5200(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5200);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82315044
	if (ctx.cr6.gt) goto loc_82315044;
loc_82315040:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82315044:
	// addi r10,r11,725
	ctx.r10.s64 = ctx.r11.s64 + 725;
	// lhzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823150a0
	if (ctx.cr6.lt) goto loc_823150A0;
	// bne cr6,0x82315080
	if (!ctx.cr6.eq) goto loc_82315080;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r7,5200(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5200);
	// lbz r9,5200(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5200);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x823150a0
	if (!ctx.cr6.gt) goto loc_823150A0;
loc_82315080:
	// addi r9,r5,725
	ctx.r9.s64 = ctx.r5.s64 + 725;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82314ff0
	if (!ctx.cr6.gt) goto loc_82314FF0;
loc_823150A0:
	// addi r11,r5,725
	ctx.r11.s64 = ctx.r5.s64 + 725;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82314FC8) {
	__imp__sub_82314FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823150B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823150B4) {
	__imp__sub_823150B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823150B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823150C0;
	__savegprlr_24(ctx, base);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r3,2868
	ctx.r10.s64 = ctx.r3.s64 + 2868;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r24,4(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r27,4(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r28,16(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
loc_823150F4:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823150f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823150F4;
	// lwz r11,5196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// sth r10,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lwz r11,5196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,573
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 573, ctx.xer);
	// bge cr6,0x823152f8
	if (!ctx.cr6.lt) goto loc_823152F8;
	// subfic r10,r11,573
	ctx.xer.ca = ctx.r11.u32 <= 573;
	ctx.r10.s64 = 573 - ctx.r11.s64;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82315144:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r26
	ctx.r6.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82315174
	if (!ctx.cr6.gt) goto loc_82315174;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82315174:
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// bgt cr6,0x823151ec
	if (ctx.cr6.gt) goto loc_823151EC;
	// addi r8,r11,1434
	ctx.r8.s64 = ctx.r11.s64 + 1434;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// lhzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u16);
	// blt cr6,0x823151ac
	if (ctx.cr6.lt) goto loc_823151AC;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
loc_823151AC:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,5792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r6.u32);
	// beq cr6,0x823151ec
	if (ctx.cr6.eq) goto loc_823151EC;
	// add r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, ctx.r6.u32);
loc_823151EC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x82315144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82315144;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823152f8
	if (ctx.cr6.eq) goto loc_823152F8;
	// addi r11,r28,1434
	ctx.r11.s64 = ctx.r28.s64 + 1434;
	// addi r6,r28,-1
	ctx.r6.s64 = ctx.r28.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_82315214:
	// addi r10,r6,1434
	ctx.r10.s64 = ctx.r6.s64 + 1434;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82315240
	if (!ctx.cr6.eq) goto loc_82315240;
loc_82315230:
	// lhzu r8,-2(r10)
	ea = -2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82315230
	if (ctx.cr6.eq) goto loc_82315230;
loc_82315240:
	// addi r10,r11,1434
	ctx.r10.s64 = ctx.r11.s64 + 1434;
	// addi r8,r11,1435
	ctx.r8.s64 = ctx.r11.s64 + 1435;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r29,r29,-2
	ctx.xer.ca = ctx.r29.u32 > 1;
	ctx.r29.s64 = ctx.r29.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// lhzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthx r4,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u16);
	// sthx r8,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// bgt 0x82315214
	if (ctx.cr0.gt) goto loc_82315214;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823152f8
	if (ctx.cr6.eq) goto loc_823152F8;
loc_82315288:
	// lhz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823152ec
	if (ctx.cr6.eq) goto loc_823152EC;
	// addi r11,r25,725
	ctx.r11.s64 = ctx.r25.s64 + 725;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823152A0:
	// lwzu r11,-4(r6)
	ea = -4 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x823152e4
	if (ctx.cr6.gt) goto loc_823152E4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823152e0
	if (ctx.cr6.eq) goto loc_823152E0;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,5792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r8.u32);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
loc_823152E0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_823152E4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823152a0
	if (!ctx.cr6.eq) goto loc_823152A0;
loc_823152EC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bne 0x82315288
	if (!ctx.cr0.eq) goto loc_82315288;
loc_823152F8:
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823150B8) {
	__imp__sub_823150B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823152FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823152FC) {
	__imp__sub_823152FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82315300) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82315328
	if (!ctx.cr6.eq) goto loc_82315328;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82315328:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r31,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r31.u16);
	// blt cr6,0x82315424
	if (ctx.cr6.lt) goto loc_82315424;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r5,r4,6
	ctx.r5.s64 = ctx.r4.s64 + 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8231534C:
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231536c
	if (!ctx.cr6.lt) goto loc_8231536C;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8231541c
	if (ctx.cr6.eq) goto loc_8231541C;
loc_8231536C:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231538c
	if (!ctx.cr6.lt) goto loc_8231538C;
	// addi r11,r10,669
	ctx.r11.s64 = ctx.r10.s64 + 669;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
	// b 0x823153e4
	goto loc_823153E4;
loc_8231538C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823153c0
	if (ctx.cr6.eq) goto loc_823153C0;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823153b0
	if (ctx.cr6.eq) goto loc_823153B0;
	// addi r11,r10,669
	ctx.r11.s64 = ctx.r10.s64 + 669;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
loc_823153B0:
	// lhz r11,2740(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2740);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2740(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2740, ctx.r11.u16);
	// b 0x823153e4
	goto loc_823153E4;
loc_823153C0:
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x823153d8
	if (ctx.cr6.gt) goto loc_823153D8;
	// lhz r11,2744(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2744);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2744(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2744, ctx.r11.u16);
	// b 0x823153e4
	goto loc_823153E4;
loc_823153D8:
	// lhz r11,2748(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2748(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2748, ctx.r11.u16);
loc_823153E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82315400
	if (!ctx.cr6.eq) goto loc_82315400;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8231541c
	goto loc_8231541C;
loc_82315400:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82315414
	if (!ctx.cr6.eq) goto loc_82315414;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8231541c
	goto loc_8231541C;
loc_82315414:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8231541C:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x8231534c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231534C;
loc_82315424:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82315300) {
	__imp__sub_82315300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231542C) {
	__imp__sub_8231542C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82315430) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82315438;
	__savegprlr_26(ctx, base);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8231545c
	if (!ctx.cr6.eq) goto loc_8231545C;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8231545C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x823159c0
	if (ctx.cr6.lt) goto loc_823159C0;
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r30,r4,6
	ctx.r30.s64 = ctx.r4.s64 + 6;
	// ori r29,r7,65525
	ctx.r29.u64 = ctx.r7.u64 | 65525;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r4,r9,65533
	ctx.r4.u64 = ctx.r9.u64 | 65533;
loc_82315480:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823154a0
	if (!ctx.cr6.lt) goto loc_823154A0;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823159b8
	if (ctx.cr6.eq) goto loc_823159B8;
loc_823154A0:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8231555c
	if (!ctx.cr6.lt) goto loc_8231555C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,669
	ctx.r10.s64 = ctx.r5.s64 + 669;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823154B8:
	// lhz r10,2678(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2678);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r28,5808(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x8231553c
	if (!ctx.cr6.gt) goto loc_8231553C;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stbx r9,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r28,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r28.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x82315550
	goto loc_82315550;
loc_8231553C:
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | ctx.r28.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_82315550:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x823154b8
	if (!ctx.cr0.eq) goto loc_823154B8;
	// b 0x82315980
	goto loc_82315980;
loc_8231555C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8231573c
	if (ctx.cr6.eq) goto loc_8231573C;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82315620
	if (ctx.cr6.eq) goto loc_82315620;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,2678(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2678);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// addi r9,r5,669
	ctx.r9.s64 = ctx.r5.s64 + 669;
	// ble cr6,0x82315600
	if (!ctx.cr6.gt) goto loc_82315600;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r28,r7
	PPC_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// srw r8,r27,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// b 0x8231561c
	goto loc_8231561C;
loc_82315600:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_8231561C:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_82315620:
	// lhz r10,2742(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2742);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2740(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2740);
	// ble cr6,0x823156a4
	if (!ctx.cr6.gt) goto loc_823156A4;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r28,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// b 0x823156bc
	goto loc_823156BC;
loc_823156A4:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_823156BC:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// ble cr6,0x82315730
	if (!ctx.cr6.gt) goto loc_82315730;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r8,r11,-14
	ctx.r8.s64 = ctx.r11.s64 + -14;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x8231597c
	goto loc_8231597C;
loc_82315730:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// b 0x82315970
	goto loc_82315970;
loc_8231573C:
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bgt cr6,0x82315860
	if (ctx.cr6.gt) goto loc_82315860;
	// lhz r10,2746(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2746);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2744(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2744);
	// ble cr6,0x823157c8
	if (!ctx.cr6.gt) goto loc_823157C8;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r28,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x823157e0
	goto loc_823157E0;
loc_823157C8:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_823157E0:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x82315854
	if (!ctx.cr6.gt) goto loc_82315854;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r11,-13
	ctx.r8.s64 = ctx.r11.s64 + -13;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x8231597c
	goto loc_8231597C;
loc_82315854:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// b 0x82315970
	goto loc_82315970;
loc_82315860:
	// lhz r10,2750(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2750);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2748(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x823158dc
	if (!ctx.cr6.gt) goto loc_823158DC;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srw r9,r28,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x823158f0
	goto loc_823158F0;
loc_823158DC:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_823158F0:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x82315968
	if (!ctx.cr6.gt) goto loc_82315968;
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x8231597c
	goto loc_8231597C;
loc_82315968:
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + ctx.r29.u64;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
loc_82315970:
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r6,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r6.u16);
loc_8231597C:
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
loc_82315980:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8231599c
	if (!ctx.cr6.eq) goto loc_8231599C;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823159b8
	goto loc_823159B8;
loc_8231599C:
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823159b0
	if (!ctx.cr6.eq) goto loc_823159B0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823159b8
	goto loc_823159B8;
loc_823159B0:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823159B8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bdnz 0x82315480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82315480;
loc_823159C0:
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82315430) {
	__imp__sub_82315430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823159C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823159C4) {
	__imp__sub_823159C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823159C8) {
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
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x82315a54
	if (!ctx.cr6.gt) goto loc_82315A54;
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x82315a6c
	goto loc_82315A6C;
loc_82315A54:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r5.u16);
loc_82315A6C:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x82315ae4
	if (!ctx.cr6.gt) goto loc_82315AE4;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x82315afc
	goto loc_82315AFC;
loc_82315AE4:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r5.u16);
loc_82315AFC:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x82315b78
	if (!ctx.cr6.gt) goto loc_82315B78;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r5.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82315b94
	goto loc_82315B94;
loc_82315B78:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r5.u16);
loc_82315B94:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82315c58
	if (!ctx.cr6.gt) goto loc_82315C58;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r11,13084
	ctx.r8.s64 = ctx.r11.s64 + 13084;
loc_82315BAC:
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lbzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// ble cr6,0x82315c30
	if (!ctx.cr6.gt) goto loc_82315C30;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,2678(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2678);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r5
	PPC_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r7,r11,-13
	ctx.r7.s64 = ctx.r11.s64 + -13;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r11.s64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// srw r5,r30,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r6.u8 & 0x3F));
	// sth r5,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r5.u16);
	// b 0x82315c50
	goto loc_82315C50;
loc_82315C30:
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lhz r10,2678(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2678);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r6,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r6.u16);
loc_82315C50:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82315bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82315BAC;
loc_82315C58:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// bl 0x82315430
	ctx.lr = 0x82315C64;
	sub_82315430(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// bl 0x82315430
	ctx.lr = 0x82315C70;
	sub_82315430(ctx, base);
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

PPC_WEAK_FUNC(sub_823159C8) {
	__imp__sub_823159C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82315C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r9,5788(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5788);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u16);
	// lwz r6,5784(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// lwz r11,5776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5776);
	// stbx r5,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwz r11,5784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,5784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5784, ctx.r10.u32);
	// bne cr6,0x82315cc0
	if (!ctx.cr6.eq) goto loc_82315CC0;
	// addi r11,r5,35
	ctx.r11.s64 = ctx.r5.s64 + 35;
	// b 0x82315d18
	goto loc_82315D18;
loc_82315CC0:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,5800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r8,r9,15088
	ctx.r8.s64 = ctx.r9.s64 + 15088;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// stw r7,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r7.u32);
	// lbzx r11,r8,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// addi r6,r11,292
	ctx.r6.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// sthx r5,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u16);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// bge cr6,0x82315d04
	if (!ctx.cr6.lt) goto loc_82315D04;
	// addi r9,r11,14576
	ctx.r9.s64 = ctx.r11.s64 + 14576;
	// b 0x82315d10
	goto loc_82315D10;
loc_82315D04:
	// addi r11,r11,14576
	ctx.r11.s64 = ctx.r11.s64 + 14576;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
loc_82315D10:
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
loc_82315D18:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// lwz r11,5780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5780);
	// lwz r10,5784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82315C88) {
	__imp__sub_82315C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82315D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82315D44) {
	__imp__sub_82315D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82315D48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82315D50;
	__savegprlr_24(ctx, base);
	// lwz r11,5784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823160f0
	if (ctx.cr6.eq) goto loc_823160F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,14576
	ctx.r27.s64 = ctx.r11.s64 + 14576;
	// addi r31,r10,12968
	ctx.r31.s64 = ctx.r10.s64 + 12968;
	// addi r29,r9,15088
	ctx.r29.s64 = ctx.r9.s64 + 15088;
loc_82315D7C:
	// lwz r11,5788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5788);
	// lwz r10,5776(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5776);
	// lhzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// lbzx r7,r30,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82315e34
	if (!ctx.cr6.eq) goto loc_82315E34;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r8,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82315e28
	if (!ctx.cr6.gt) goto loc_82315E28;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// b 0x823160e4
	goto loc_823160E4;
loc_82315E28:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// b 0x823160dc
	goto loc_823160DC;
loc_82315E34:
	// lbzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// lhz r26,5808(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82315ec8
	if (!ctx.cr6.gt) goto loc_82315EC8;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r25,20(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r24,r25
	PPC_STORE_U8(ctx.r24.u32 + ctx.r25.u32, ctx.r10.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r25,8(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r25,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r25.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r25,16
	ctx.r9.u64 = ctx.r25.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x82315edc
	goto loc_82315EDC;
loc_82315EC8:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 | ctx.r26.u64;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_82315EDC:
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82315f7c
	if (ctx.cr6.eq) goto loc_82315F7C;
	// addi r10,r31,2376
	ctx.r10.s64 = ctx.r31.s64 + 2376;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82315f6c
	if (!ctx.cr6.gt) goto loc_82315F6C;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// b 0x82315f78
	goto loc_82315F78;
loc_82315F6C:
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82315F78:
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82315F7C:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82315f90
	if (!ctx.cr6.lt) goto loc_82315F90;
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// b 0x82315f9c
	goto loc_82315F9C;
loc_82315F90:
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82315F9C:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lhz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82316028
	if (!ctx.cr6.gt) goto loc_82316028;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r25,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x8231603c
	goto loc_8231603C;
loc_82316028:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_8231603C:
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823160e4
	if (ctx.cr6.eq) goto loc_823160E4;
	// addi r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 + 2496;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x823160d4
	if (!ctx.cr6.gt) goto loc_823160D4;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r6.u16);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// b 0x823160e4
	goto loc_823160E4;
loc_823160D4:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
loc_823160DC:
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r6,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r6.u16);
loc_823160E4:
	// lwz r11,5784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82315d7c
	if (ctx.cr6.lt) goto loc_82315D7C;
loc_823160F0:
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,1024(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x82316178
	if (!ctx.cr6.gt) goto loc_82316178;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r11,r9,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r10,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r10.u32);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82316178:
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// sth r5,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r5.u16);
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r10,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r10.u32);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82315D48) {
	__imp__sub_82315D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231619C) {
	__imp__sub_8231619C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823161A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// li r8,60
	ctx.r8.s64 = 60;
	// lhz r7,164(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r6,156(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r31,152(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 152);
	// lhz r5,148(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 148);
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lhz r6,144(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 144);
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lhz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 140);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_823161EC:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x823161ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823161EC;
	// li r8,64
	ctx.r8.s64 = 64;
	// lhz r7,648(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 648);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,648
	ctx.r11.s64 = ctx.r3.s64 + 648;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82316220:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x82316220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316220;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r8,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r8,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r8.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823161A0) {
	__imp__sub_823161A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316258) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231625C:
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt 0x8231625c
	if (ctx.cr0.gt) goto loc_8231625C;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316258) {
	__imp__sub_82316258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231627C) {
	__imp__sub_8231627C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x823162d0
	if (!ctx.cr6.eq) goto loc_823162D0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
loc_823162D0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lhz r11,5808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r6,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316280) {
	__imp__sub_82316280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231630C) {
	__imp__sub_8231630C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82316360
	if (!ctx.cr6.gt) goto loc_82316360;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// blr 
	return;
loc_82316360:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82316384
	if (!ctx.cr6.gt) goto loc_82316384;
	// lhz r11,5808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
loc_82316384:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316310) {
	__imp__sub_82316310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82316394) {
	__imp__sub_82316394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316398) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82316310
	ctx.lr = 0x823163B4;
	sub_82316310(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r11.u32);
	// beq cr6,0x82316428
	if (ctx.cr6.eq) goto loc_82316428;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// not r6,r8
	ctx.r6.u64 = ~ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r6,r6,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r5,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
loc_82316428:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82316458
	if (ctx.cr6.eq) goto loc_82316458;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_82316438:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// bdnz 0x82316438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316438;
loc_82316458:
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

PPC_WEAK_FUNC(sub_82316398) {
	__imp__sub_82316398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231646C) {
	__imp__sub_8231646C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r8,286
	ctx.r8.s64 = 286;
	// addi r11,r11,29780
	ctx.r11.s64 = ctx.r11.s64 + 29780;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// stw r11,2840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2840, ctx.r11.u32);
	// addi r9,r3,140
	ctx.r9.s64 = ctx.r3.s64 + 140;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r6,2852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2852, ctx.r6.u32);
	// addi r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 + 40;
	// addi r7,r3,2432
	ctx.r7.s64 = ctx.r3.s64 + 2432;
	// stw r9,2832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2832, ctx.r9.u32);
	// addi r6,r3,2676
	ctx.r6.s64 = ctx.r3.s64 + 2676;
	// stw r5,2864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2864, ctx.r5.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r7,2844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2844, ctx.r7.u32);
	// stw r6,2856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2856, ctx.r6.u32);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r4,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r4.u32);
loc_823164C4:
	// sthu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823164c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823164C4;
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823164D8:
	// sthu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823164d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823164D8;
	// li r9,19
	ctx.r9.s64 = 19;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823164EC:
	// sthu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823164ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823164EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, ctx.r10.u32);
	// stw r10,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r10.u32);
	// sth r11,1164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1164, ctx.r11.u16);
	// stw r10,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r10.u32);
	// stw r10,5784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5784, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316470) {
	__imp__sub_82316470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316510) {
	PPC_FUNC_PROLOGUE();
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r8,r1,-30
	ctx.r8.s64 = ctx.r1.s64 + -30;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,-30
	ctx.r11.s64 = ctx.r1.s64 + -30;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82316528:
	// lhzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82316528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316528;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
loc_82316550:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82316594
	if (ctx.cr6.eq) goto loc_82316594;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
loc_82316578:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x82316578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316578;
	// rlwinm r11,r8,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_82316594:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82316550
	if (!ctx.cr0.eq) goto loc_82316550;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316510) {
	__imp__sub_82316510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823165A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823165A4) {
	__imp__sub_823165A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823165A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823165B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,573
	ctx.r9.s64 = 573;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r8.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r9,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r9.u32);
	// ble cr6,0x82316634
	if (!ctx.cr6.gt) goto loc_82316634;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_823165F0:
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82316624
	if (ctx.cr6.eq) goto loc_82316624;
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,725
	ctx.r6.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// stb r8,5200(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5200, ctx.r8.u8);
	// b 0x82316628
	goto loc_82316628;
loc_82316624:
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
loc_82316628:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823165f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823165F0;
loc_82316634:
	// lwz r11,5192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823166b8
	if (!ctx.cr6.lt) goto loc_823166B8;
	// addi r7,r3,5200
	ctx.r7.s64 = ctx.r3.s64 + 5200;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82316648:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bge cr6,0x8231665c
	if (!ctx.cr6.lt) goto loc_8231665C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82316660
	goto loc_82316660;
loc_8231665C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82316660:
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r10,725
	ctx.r4.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// sthx r6,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u16);
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,5792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r4.u32);
	// beq cr6,0x823166ac
	if (ctx.cr6.eq) goto loc_823166AC;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r4,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, ctx.r4.u32);
loc_823166AC:
	// lwz r11,5192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82316648
	if (ctx.cr6.lt) goto loc_82316648;
loc_823166B8:
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// lwz r11,5192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x823166e8
	if (ctx.cr6.lt) goto loc_823166E8;
loc_823166D0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82314fc8
	ctx.lr = 0x823166DC;
	sub_82314FC8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x823166d0
	if (!ctx.cr6.lt) goto loc_823166D0;
loc_823166E8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,5200
	ctx.r30.s64 = ctx.r3.s64 + 5200;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823166F4:
	// lwz r11,5192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r25,2904(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,725
	ctx.r10.s64 = ctx.r11.s64 + 725;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r9,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r9.u32);
	// stw r7,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r7.u32);
	// bl 0x82314fc8
	ctx.lr = 0x82316720;
	sub_82314FC8(ctx, base);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,2904(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r11,5196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r11,725
	ctx.r5.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r25.u32);
	// lwz r11,5196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r5,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r5.u16);
	// lbzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r8,r30,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82316788
	if (ctx.cr6.lt) goto loc_82316788;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82316788:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r7,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r28.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82314fc8
	ctx.lr = 0x823167B4;
	sub_82314FC8(ctx, base);
	// lwz r6,5192(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x823166f4
	if (!ctx.cr6.lt) goto loc_823166F4;
	// lwz r11,5196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,2904(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x823150b8
	ctx.lr = 0x823167E4;
	sub_823150B8(ctx, base);
	// addi r5,r3,2868
	ctx.r5.s64 = ctx.r3.s64 + 2868;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316510
	ctx.lr = 0x823167F4;
	sub_82316510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823165A8) {
	__imp__sub_823165A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823167FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823167FC) {
	__imp__sub_823167FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316800) {
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
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// lwz r5,2836(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82315300
	ctx.lr = 0x82316820;
	sub_82315300(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// lwz r5,2848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
	// bl 0x82315300
	ctx.lr = 0x8231682C;
	sub_82315300(ctx, base);
	// addi r4,r3,2856
	ctx.r4.s64 = ctx.r3.s64 + 2856;
	// bl 0x823165a8
	ctx.lr = 0x82316834;
	sub_823165A8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r11,r11,13084
	ctx.r11.s64 = ctx.r11.s64 + 13084;
loc_82316840:
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r8,2678(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2678);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823168d0
	if (!ctx.cr6.eq) goto loc_823168D0;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2678(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2678);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823168bc
	if (!ctx.cr6.eq) goto loc_823168BC;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2678(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2678);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823168c4
	if (!ctx.cr6.eq) goto loc_823168C4;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2678(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2678);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823168cc
	if (!ctx.cr6.eq) goto loc_823168CC;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x82316840
	if (!ctx.cr6.lt) goto loc_82316840;
	// b 0x823168d0
	goto loc_823168D0;
loc_823168BC:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x823168d0
	goto loc_823168D0;
loc_823168C4:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// b 0x823168d0
	goto loc_823168D0;
loc_823168CC:
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
loc_823168D0:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// stw r11,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82316800) {
	__imp__sub_82316800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823168FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823168FC) {
	__imp__sub_823168FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x82316974
	if (!ctx.cr6.gt) goto loc_82316974;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stbx r8,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,-13
	ctx.r8.s64 = ctx.r11.s64 + -13;
	// srw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x82316980
	goto loc_82316980;
loc_82316974:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
loc_82316980:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82316398
	sub_82316398(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82316900) {
	__imp__sub_82316900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316988) {
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
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// li r30,2
	ctx.r30.s64 = 2;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82316a14
	if (!ctx.cr6.gt) goto loc_82316A14;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r4,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r4.u16);
	// stbx r4,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r4,r11,-13
	ctx.r4.s64 = ctx.r11.s64 + -13;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r4,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r4.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// b 0x82316a24
	goto loc_82316A24;
loc_82316A14:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
loc_82316A24:
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82316a9c
	if (!ctx.cr6.gt) goto loc_82316A9C;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r4,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r4.u16);
	// stbx r4,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r6,r11,-9
	ctx.r6.s64 = ctx.r11.s64 + -9;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r6.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// b 0x82316aac
	goto loc_82316AAC;
loc_82316A9C:
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
loc_82316AAC:
	// bl 0x82316280
	ctx.lr = 0x82316AB0;
	sub_82316280(ctx, base);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,5804(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5804);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bge cr6,0x82316bc8
	if (!ctx.cr6.lt) goto loc_82316BC8;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x82316b38
	if (!ctx.cr6.gt) goto loc_82316B38;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// sth r4,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r4.u16);
	// stbx r4,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r6,r11,-13
	ctx.r6.s64 = ctx.r11.s64 + -13;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r6.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// b 0x82316b44
	goto loc_82316B44;
loc_82316B38:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
loc_82316B44:
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x82316bb8
	if (!ctx.cr6.gt) goto loc_82316BB8;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r4,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r4.u16);
	// stbx r4,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r6,r11,-9
	ctx.r6.s64 = ctx.r11.s64 + -9;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r6.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// b 0x82316bc4
	goto loc_82316BC4;
loc_82316BB8:
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
loc_82316BC4:
	// bl 0x82316280
	ctx.lr = 0x82316BC8;
	sub_82316280(ctx, base);
loc_82316BC8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82316988) {
	__imp__sub_82316988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82316BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82316c70
	if (!ctx.cr6.gt) goto loc_82316C70;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82316c2c
	if (!ctx.cr6.eq) goto loc_82316C2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823161a0
	ctx.lr = 0x82316C2C;
	sub_823161A0(ctx, base);
loc_82316C2C:
	// addi r4,r31,2832
	ctx.r4.s64 = ctx.r31.s64 + 2832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823165a8
	ctx.lr = 0x82316C38;
	sub_823165A8(ctx, base);
	// addi r4,r31,2844
	ctx.r4.s64 = ctx.r31.s64 + 2844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823165a8
	ctx.lr = 0x82316C44;
	sub_823165A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316800
	ctx.lr = 0x82316C4C;
	sub_82316800(ctx, base);
	// lwz r11,5792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r10,5796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82316c78
	if (ctx.cr6.gt) goto loc_82316C78;
	// b 0x82316c74
	goto loc_82316C74;
loc_82316C70:
	// addi r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 5;
loc_82316C74:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82316C78:
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82316ca4
	if (ctx.cr6.gt) goto loc_82316CA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82316ca4
	if (ctx.cr6.eq) goto loc_82316CA4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316900
	ctx.lr = 0x82316CA0;
	sub_82316900(ctx, base);
	// b 0x82316dfc
	goto loc_82316DFC;
loc_82316CA4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r10,5812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5812);
	// lhz r9,5808(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5808);
	// bne cr6,0x82316d50
	if (!ctx.cr6.eq) goto loc_82316D50;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x82316d30
	if (!ctx.cr6.gt) goto loc_82316D30;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r3,5808(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5808, ctx.r3.u16);
	// stbx r3,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r3.u8);
	// lbz r10,5808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5808);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,5812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r5,r11,-13
	ctx.r5.s64 = ctx.r11.s64 + -13;
	// srw r4,r4,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// sth r4,5808(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5808, ctx.r4.u16);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r5,5812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5812, ctx.r5.u32);
	// addi r4,r11,13304
	ctx.r4.s64 = ctx.r11.s64 + 13304;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// addi r5,r4,1152
	ctx.r5.s64 = ctx.r4.s64 + 1152;
	// b 0x82316df4
	goto loc_82316DF4;
loc_82316D30:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r4,r11,13304
	ctx.r4.s64 = ctx.r11.s64 + 13304;
	// stw r8,5812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5812, ctx.r8.u32);
	// sth r6,5808(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5808, ctx.r6.u16);
	// addi r5,r4,1152
	ctx.r5.s64 = ctx.r4.s64 + 1152;
	// b 0x82316df4
	goto loc_82316DF4;
loc_82316D50:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x82316dc0
	if (!ctx.cr6.gt) goto loc_82316DC0;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,5808(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r9,5808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5808);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,5812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r11,5812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5812, ctx.r11.u32);
	// sth r10,5808(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5808, ctx.r10.u16);
	// b 0x82316dd0
	goto loc_82316DD0;
loc_82316DC0:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r8,5812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5812, ctx.r8.u32);
	// sth r6,5808(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5808, ctx.r6.u16);
loc_82316DD0:
	// lwz r10,2848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2848);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lwz r11,2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823159c8
	ctx.lr = 0x82316DEC;
	sub_823159C8(ctx, base);
	// addi r5,r31,2432
	ctx.r5.s64 = ctx.r31.s64 + 2432;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
loc_82316DF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315d48
	ctx.lr = 0x82316DFC;
	sub_82315D48(ctx, base);
loc_82316DFC:
	// li r10,286
	ctx.r10.s64 = 286;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82316E08:
	// sthu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82316e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316E08;
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r11,r31,2428
	ctx.r11.s64 = ctx.r31.s64 + 2428;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82316E1C:
	// sthu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82316e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316E1C;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r31,2672
	ctx.r11.s64 = ctx.r31.s64 + 2672;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82316E30:
	// sthu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82316e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316E30;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,5796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5796, ctx.r27.u32);
	// stw r27,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r27.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// sth r11,1164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1164, ctx.r11.u16);
	// stw r27,5800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5800, ctx.r27.u32);
	// stw r27,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r27.u32);
	// beq cr6,0x82316e60
	if (ctx.cr6.eq) goto loc_82316E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316310
	ctx.lr = 0x82316E60;
	sub_82316310(ctx, base);
loc_82316E60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82316BE8) {
	__imp__sub_82316BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316E68) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r9,12860
	ctx.r4.s64 = ctx.r9.s64 + 12860;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82313e58
	ctx.lr = 0x82316EB4;
	sub_82313E58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82316efc
	if (!ctx.cr6.eq) goto loc_82316EFC;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82313e68
	ctx.lr = 0x82316EC8;
	sub_82313E68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82316ef0
	if (ctx.cr6.eq) goto loc_82316EF0;
	// bl 0x82313c80
	ctx.lr = 0x82316EDC;
	sub_82313C80(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// beq cr6,0x82316efc
	if (ctx.cr6.eq) goto loc_82316EFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82316efc
	goto loc_82316EFC;
loc_82316EF0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82313c80
	ctx.lr = 0x82316EFC;
	sub_82313C80(ctx, base);
loc_82316EFC:
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

PPC_WEAK_FUNC(sub_82316E68) {
	__imp__sub_82316E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82316F14) {
	__imp__sub_82316F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,12860
	ctx.r3.s64 = ctx.r11.s64 + 12860;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316F18) {
	__imp__sub_82316F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82316F24) {
	__imp__sub_82316F24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29840
	ctx.r11.s64 = ctx.r11.s64 + 29840;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316F28) {
	__imp__sub_82316F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82316F44) {
	__imp__sub_82316F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r4,-524
	ctx.r9.s64 = ctx.r4.s64 + -524;
	// addi r8,r3,524
	ctx.r8.s64 = ctx.r3.s64 + 524;
	// stw r9,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// stw r8,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r8.u32);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316F48) {
	__imp__sub_82316F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316F68) {
	__imp__sub_82316F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82316F7C) {
	__imp__sub_82316F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r9,520(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316F80) {
	__imp__sub_82316F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82316FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316FB8) {
	__imp__sub_82316FB8(ctx, base);
}

