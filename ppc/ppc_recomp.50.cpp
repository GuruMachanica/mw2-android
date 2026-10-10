#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82219EC8) {
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
	// bl 0x823de000
	ctx.lr = 0x82219EDC;
	__savefpr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219EE4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82219f04
	if (ctx.cr6.eq) goto loc_82219F04;
	// bl 0x822acb68
	ctx.lr = 0x82219EF0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// beq cr6,0x82219f04
	if (ctx.cr6.eq) goto loc_82219F04;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// bl 0x822ad350
	ctx.lr = 0x82219F04;
	sub_822AD350(ctx, base);
loc_82219F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82219F0C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = ctx.f1.f64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82219f2c
	if (!ctx.cr6.lt) goto loc_82219F2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30664
	ctx.r3.s64 = ctx.r11.s64 + -30664;
	// bl 0x822ad350
	ctx.lr = 0x82219F2C;
	sub_822AD350(ctx, base);
loc_82219F2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82219F34;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x82219f4c
	if (ctx.cr6.gt) goto loc_82219F4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30712
	ctx.r3.s64 = ctx.r11.s64 + -30712;
	// bl 0x822ad350
	ctx.lr = 0x82219F4C;
	sub_822AD350(ctx, base);
loc_82219F4C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f0,-30716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30716);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f19,f0,f30
	ctx.f19.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// bl 0x822b1fb0
	ctx.lr = 0x82219F60;
	sub_822B1FB0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82219F6C;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82219F78;
	sub_822B1FB0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82219F84;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f25,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f25.f64 = double(temp.f32);
	// blt cr6,0x82219fa0
	if (ctx.cr6.lt) goto loc_82219FA0;
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// ble cr6,0x82219fac
	if (!ctx.cr6.gt) goto loc_82219FAC;
loc_82219FA0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// bl 0x822ad350
	ctx.lr = 0x82219FAC;
	sub_822AD350(ctx, base);
loc_82219FAC:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822b1fb0
	ctx.lr = 0x82219FB4;
	sub_822B1FB0(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f1.f64;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// lwz r3,5552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5552);
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x822e1fb0
	ctx.lr = 0x82219FD4;
	sub_822E1FB0(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// lwz r3,-19064(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19064);
	// bl 0x822e1f88
	ctx.lr = 0x82219FE4;
	sub_822E1F88(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// lwz r3,13404(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13404);
	// bl 0x822e1f88
	ctx.lr = 0x82219FF4;
	sub_822E1F88(ctx, base);
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,11212(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11212);
	// bl 0x822e1f88
	ctx.lr = 0x8221A004;
	sub_822E1F88(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x8221A008;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bne cr6,0x8221a0e0
	if (!ctx.cr6.eq) goto loc_8221A0E0;
	// li r3,7
	ctx.r3.s64 = 7;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A01C;
	sub_822B1FB0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A028;
	sub_822B1FB0(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A034;
	sub_822B1FB0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,10
	ctx.r3.s64 = 10;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x822b2498
	ctx.lr = 0x8221A044;
	sub_822B2498(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A04C;
	sub_822B1FB0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A058;
	sub_822B1FB0(ctx, base);
	// li r3,13
	ctx.r3.s64 = 13;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A064;
	sub_822B1FB0(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lwz r3,-18992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18992);
	// bl 0x822e1f18
	ctx.lr = 0x8221A078;
	sub_822E1F18(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,13348(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13348);
	// bl 0x822e1fb0
	ctx.lr = 0x8221A094;
	sub_822E1FB0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lfs f3,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-6192(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6192);
	// bl 0x822e1f98
	ctx.lr = 0x8221A0AC;
	sub_822E1F98(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r3,-6140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6140);
	// bl 0x822e1f88
	ctx.lr = 0x8221A0BC;
	sub_822E1F88(ctx, base);
	// lis r7,-32021
	ctx.r7.s64 = -2098528256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,-14928(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14928);
	// bl 0x822e1f88
	ctx.lr = 0x8221A0CC;
	sub_822E1F88(ctx, base);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// lwz r3,-14888(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14888);
	// bl 0x822e1f88
	ctx.lr = 0x8221A0DC;
	sub_822E1F88(ctx, base);
	// b 0x8221a114
	goto loc_8221A114;
loc_8221A0E0:
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f30,f24
	ctx.f30.f64 = ctx.f24.f64;
	// fmr f29,f23
	ctx.f29.f64 = ctx.f23.f64;
	// lwz r3,-18992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18992);
	// fmr f28,f22
	ctx.f28.f64 = ctx.f22.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
	// bl 0x822e1f18
	ctx.lr = 0x8221A114;
	sub_822E1F18(ctx, base);
loc_8221A114:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f26.f64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// addi r3,r11,-30776
	ctx.r3.s64 = ctx.r11.s64 + -30776;
	// fmr f11,f27
	ctx.f11.f64 = ctx.f27.f64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fmr f10,f28
	ctx.f10.f64 = ctx.f28.f64;
	// fmr f9,f29
	ctx.f9.f64 = ctx.f29.f64;
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f7,f20
	ctx.f7.f64 = ctx.f20.f64;
	// fmr f6,f21
	ctx.f6.f64 = ctx.f21.f64;
	// fmr f5,f22
	ctx.f5.f64 = ctx.f22.f64;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f19
	ctx.f2.f64 = ctx.f19.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x82219bf0
	ctx.lr = 0x8221A160;
	sub_82219BF0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de04c
	ctx.lr = 0x8221A16C;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82219EC8) {
	__imp__sub_82219EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221A17C) {
	__imp__sub_8221A17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A180) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221A190;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221a1a4
	if (ctx.cr6.eq) goto loc_8221A1A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30372
	ctx.r3.s64 = ctx.r11.s64 + -30372;
	// bl 0x822ad350
	ctx.lr = 0x8221A1A4;
	sub_822AD350(ctx, base);
loc_8221A1A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A1AC;
	sub_822B2288(ctx, base);
	// bl 0x8233cf00
	ctx.lr = 0x8221A1B0;
	sub_8233CF00(ctx, base);
	// bl 0x82300b38
	ctx.lr = 0x8221A1B4;
	sub_82300B38(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x8221A1B8;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221A180) {
	__imp__sub_8221A180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A1C8) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221A1E0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8221a1f4
	if (ctx.cr6.eq) goto loc_8221A1F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30300
	ctx.r3.s64 = ctx.r11.s64 + -30300;
	// bl 0x822ad350
	ctx.lr = 0x8221A1F4;
	sub_822AD350(ctx, base);
loc_8221A1F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A1FC;
	sub_822B2288(ctx, base);
	// bl 0x8233cf00
	ctx.lr = 0x8221A200;
	sub_8233CF00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221A20C;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300b38
	ctx.lr = 0x8221A218;
	sub_82300B38(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221a23c
	if (ctx.cr6.lt) goto loc_8221A23C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r3,r11,-30328
	ctx.r3.s64 = ctx.r11.s64 + -30328;
	// bl 0x822e84f0
	ctx.lr = 0x8221A230;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A23C;
	sub_822AD4E0(ctx, base);
loc_8221A23C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ff518
	ctx.lr = 0x8221A244;
	sub_822FF518(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r3,r11
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221a264
	if (!ctx.cr6.eq) goto loc_8221A264;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30340
	ctx.r4.s64 = ctx.r11.s64 + -30340;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A264;
	sub_822AD4E0(ctx, base);
loc_8221A264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acff0
	ctx.lr = 0x8221A26C;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_8221A1C8) {
	__imp__sub_8221A1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221A284) {
	__imp__sub_8221A284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221A290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822de110
	ctx.lr = 0x8221A2AC;
	sub_822DE110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82172b20
	ctx.lr = 0x8221A2B8;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221a2d4
	if (ctx.cr6.eq) goto loc_8221A2D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30264
	ctx.r3.s64 = ctx.r11.s64 + -30264;
	// bl 0x822e84f0
	ctx.lr = 0x8221A2D0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221A2D4;
	sub_822AD350(ctx, base);
loc_8221A2D4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ddf98
	ctx.lr = 0x8221A2E8;
	sub_822DDF98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A288) {
	__imp__sub_8221A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221A2F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221A300;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8221a314
	if (!ctx.cr6.lt) goto loc_8221A314;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// bl 0x822ad350
	ctx.lr = 0x8221A314;
	sub_822AD350(ctx, base);
loc_8221A314:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A31C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221A328;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x8221A334;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1c50
	ctx.lr = 0x8221A340;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822de110
	ctx.lr = 0x8221A350;
	sub_822DE110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82172b20
	ctx.lr = 0x8221A35C;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221a378
	if (ctx.cr6.eq) goto loc_8221A378;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30264
	ctx.r3.s64 = ctx.r11.s64 + -30264;
	// bl 0x822e84f0
	ctx.lr = 0x8221A374;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221A378;
	sub_822AD350(ctx, base);
loc_8221A378:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ddf98
	ctx.lr = 0x8221A38C;
	sub_822DDF98(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x8221A390;
	sub_822ACED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A2F0) {
	__imp__sub_8221A2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221A3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221A3A8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8221a3bc
	if (!ctx.cr6.lt) goto loc_8221A3BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// bl 0x822ad350
	ctx.lr = 0x8221A3BC;
	sub_822AD350(ctx, base);
loc_8221A3BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A3C4;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221A3D0;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x8221A3DC;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1c50
	ctx.lr = 0x8221A3E8;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822de110
	ctx.lr = 0x8221A3F8;
	sub_822DE110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82172b20
	ctx.lr = 0x8221A404;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221a420
	if (ctx.cr6.eq) goto loc_8221A420;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30264
	ctx.r3.s64 = ctx.r11.s64 + -30264;
	// bl 0x822e84f0
	ctx.lr = 0x8221A41C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221A420;
	sub_822AD350(ctx, base);
loc_8221A420:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ddf98
	ctx.lr = 0x8221A434;
	sub_822DDF98(ctx, base);
	// bl 0x822acf60
	ctx.lr = 0x8221A438;
	sub_822ACF60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A398) {
	__imp__sub_8221A398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221A448;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221A450;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8221a464
	if (!ctx.cr6.lt) goto loc_8221A464;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30120
	ctx.r3.s64 = ctx.r11.s64 + -30120;
	// bl 0x822ad350
	ctx.lr = 0x8221A464;
	sub_822AD350(ctx, base);
loc_8221A464:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A46C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221A478;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x8221A484;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de110
	ctx.lr = 0x8221A494;
	sub_822DE110(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ddd98
	ctx.lr = 0x8221A4A4;
	sub_822DDD98(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x8221A4A8;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A440) {
	__imp__sub_8221A440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A4B0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822de110
	ctx.lr = 0x8221A4D4;
	sub_822DE110(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822dde80
	ctx.lr = 0x8221A4E4;
	sub_822DDE80(ctx, base);
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

PPC_WEAK_FUNC(sub_8221A4B0) {
	__imp__sub_8221A4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221A4FC) {
	__imp__sub_8221A4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221A508;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221A510;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8221a524
	if (!ctx.cr6.lt) goto loc_8221A524;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30048
	ctx.r3.s64 = ctx.r11.s64 + -30048;
	// bl 0x822ad350
	ctx.lr = 0x8221A524;
	sub_822AD350(ctx, base);
loc_8221A524:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A52C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221A538;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x8221A544;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de110
	ctx.lr = 0x8221A554;
	sub_822DE110(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822dde80
	ctx.lr = 0x8221A564;
	sub_822DDE80(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x8221A568;
	sub_822ACED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A500) {
	__imp__sub_8221A500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221A578;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221A580;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8221a594
	if (!ctx.cr6.lt) goto loc_8221A594;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-30048
	ctx.r3.s64 = ctx.r11.s64 + -30048;
	// bl 0x822ad350
	ctx.lr = 0x8221A594;
	sub_822AD350(ctx, base);
loc_8221A594:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221A59C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221A5A8;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x8221A5B4;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de110
	ctx.lr = 0x8221A5C4;
	sub_822DE110(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822dde80
	ctx.lr = 0x8221A5D4;
	sub_822DDE80(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x8221A5D8;
	sub_822ACED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A570) {
	__imp__sub_8221A570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8221A5E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,126(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8221a630
	if (!ctx.cr6.eq) goto loc_8221A630;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221a630
	if (!ctx.cr6.eq) goto loc_8221A630;
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221a734
	if (ctx.cr6.eq) goto loc_8221A734;
loc_8221A630:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d878
	ctx.lr = 0x8221A638;
	sub_8233D878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221a670
	if (!ctx.cr6.eq) goto loc_8221A670;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8221a664
	if (ctx.cr6.eq) goto loc_8221A664;
	// lhz r3,292(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221A650;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29896
	ctx.r3.s64 = ctx.r11.s64 + -29896;
	// bl 0x822e84f0
	ctx.lr = 0x8221A660;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221A664;
	sub_822AD548(ctx, base);
loc_8221A664:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8221A670:
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222efb8
	ctx.lr = 0x8221A680;
	sub_8222EFB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221a718
	if (!ctx.cr6.eq) goto loc_8221A718;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8221a70c
	if (ctx.cr6.eq) goto loc_8221A70C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// bl 0x8233cf18
	ctx.lr = 0x8221A6A0;
	sub_8233CF18(ctx, base);
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x8221A6A8;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8221A6AC;
	sub_822A13A0(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a6e0
	if (ctx.cr6.eq) goto loc_8221A6E0;
	// lhz r3,214(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 214);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a6e0
	if (ctx.cr6.eq) goto loc_8221A6E0;
	// bl 0x822a13a0
	ctx.lr = 0x8221A6CC;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29908
	ctx.r3.s64 = ctx.r11.s64 + -29908;
	// bl 0x822e84f0
	ctx.lr = 0x8221A6DC;
	sub_822E84F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8221A6E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221A6E8;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29976
	ctx.r3.s64 = ctx.r11.s64 + -29976;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221A700;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A70C;
	sub_822AD4E0(ctx, base);
loc_8221A70C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8221A718:
	// lhz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a24e0
	ctx.lr = 0x8221A734;
	sub_822A24E0(ctx, base);
loc_8221A734:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221A5E0) {
	__imp__sub_8221A5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A740) {
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
	// bne cr6,0x8221a77c
	if (!ctx.cr6.eq) goto loc_8221A77C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221a78c
	goto loc_8221A78C;
loc_8221A77C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221A788;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221A78C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x8221A794;
	sub_822B2168(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,2932
	ctx.r5.s64 = ctx.r30.s64 + 2932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221a5e0
	ctx.lr = 0x8221A7B0;
	sub_8221A5E0(ctx, base);
	// addi r3,r30,2980
	ctx.r3.s64 = ctx.r30.s64 + 2980;
	// bl 0x822ad078
	ctx.lr = 0x8221A7B8;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_8221A740) {
	__imp__sub_8221A740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A7D0) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221a80c
	if (!ctx.cr6.eq) goto loc_8221A80C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221a81c
	goto loc_8221A81C;
loc_8221A80C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221A818;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221A81C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x8221A824;
	sub_822B2168(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,2932
	ctx.r5.s64 = ctx.r30.s64 + 2932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221a5e0
	ctx.lr = 0x8221A840;
	sub_8221A5E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2944
	ctx.r3.s64 = ctx.r30.s64 + 2944;
	// bl 0x822d7c78
	ctx.lr = 0x8221A84C;
	sub_822D7C78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8221A854;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_8221A7D0) {
	__imp__sub_8221A7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221A86C) {
	__imp__sub_8221A86C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221A870) {
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
	// bl 0x823de01c
	ctx.lr = 0x8221A884;
	__savefpr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x8221A88C;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8221A894;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x8221a8a8
	if (ctx.cr6.eq) goto loc_8221A8A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13212
	ctx.r3.s64 = ctx.r11.s64 + -13212;
	// bl 0x822ad350
	ctx.lr = 0x8221A8A8;
	sub_822AD350(ctx, base);
loc_8221A8A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A8B0;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A8BC;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A8C8;
	sub_822B1FB0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A8D4;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A8E0;
	sub_822B1FB0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221A8EC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bge cr6,0x8221a910
	if (!ctx.cr6.lt) goto loc_8221A910;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29560
	ctx.r4.s64 = ctx.r11.s64 + -29560;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A910;
	sub_822AD4E0(ctx, base);
loc_8221A910:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x8221a928
	if (!ctx.cr6.lt) goto loc_8221A928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-29584
	ctx.r4.s64 = ctx.r11.s64 + -29584;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A928;
	sub_822AD4E0(ctx, base);
loc_8221A928:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x8221a940
	if (!ctx.cr6.lt) goto loc_8221A940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-29608
	ctx.r4.s64 = ctx.r11.s64 + -29608;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A940;
	sub_822AD4E0(ctx, base);
loc_8221A940:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// bge cr6,0x8221a958
	if (!ctx.cr6.lt) goto loc_8221A958;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-29632
	ctx.r4.s64 = ctx.r11.s64 + -29632;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A958;
	sub_822AD4E0(ctx, base);
loc_8221A958:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// blt cr6,0x8221a978
	if (ctx.cr6.lt) goto loc_8221A978;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// ble cr6,0x8221a9b0
	if (!ctx.cr6.gt) goto loc_8221A9B0;
loc_8221A978:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-29688
	ctx.r3.s64 = ctx.r9.s64 + -29688;
	// lfd f2,-29640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29640);
	// lfd f1,-29648(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29648);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8221A9A4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A9B0;
	sub_822AD4E0(ctx, base);
loc_8221A9B0:
	// fcmpu cr6,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// blt cr6,0x8221a9c0
	if (ctx.cr6.lt) goto loc_8221A9C0;
	// fcmpu cr6,f25,f26
	ctx.cr6.compare(ctx.f25.f64, ctx.f26.f64);
	// ble cr6,0x8221a9e8
	if (!ctx.cr6.gt) goto loc_8221A9E8;
loc_8221A9C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-29732
	ctx.r3.s64 = ctx.r10.s64 + -29732;
	// lfd f1,20768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20768);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8221A9DC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822ad4e0
	ctx.lr = 0x8221A9E8;
	sub_822AD4E0(ctx, base);
loc_8221A9E8:
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// blt cr6,0x8221a9f8
	if (ctx.cr6.lt) goto loc_8221A9F8;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_8221A9F8:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bge cr6,0x8221aa24
	if (!ctx.cr6.lt) goto loc_8221AA24;
	// fcmpu cr6,f25,f31
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// beq cr6,0x8221aa24
	if (ctx.cr6.eq) goto loc_8221AA24;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x8221aa2c
	if (!ctx.cr6.lt) goto loc_8221AA2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-29848
	ctx.r4.s64 = ctx.r11.s64 + -29848;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AA20;
	sub_822AD4E0(ctx, base);
	// b 0x8221aa2c
	goto loc_8221AA2C;
loc_8221AA24:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
loc_8221AA2C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f28,1144(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1144, temp.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f29,1148(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1148, temp.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f30,1152(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1152, temp.u32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f27,1156(r8)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1156, temp.u32);
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f26,1160(r7)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1160, temp.u32);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f25,1164(r6)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1164, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de068
	ctx.lr = 0x8221AA68;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221A870) {
	__imp__sub_8221A870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AA78) {
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
	// bl 0x8220ed70
	ctx.lr = 0x8221AA98;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221AAA4;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221AAB0;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bge cr6,0x8221aad4
	if (!ctx.cr6.lt) goto loc_8221AAD4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29516
	ctx.r4.s64 = ctx.r11.s64 + -29516;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AAD4;
	sub_822AD4E0(ctx, base);
loc_8221AAD4:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8221aaec
	if (!ctx.cr6.lt) goto loc_8221AAEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-29536
	ctx.r4.s64 = ctx.r11.s64 + -29536;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AAEC;
	sub_822AD4E0(ctx, base);
loc_8221AAEC:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// blt cr6,0x8221aafc
	if (ctx.cr6.lt) goto loc_8221AAFC;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_8221AAFC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f29,1168(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1168, temp.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f31,1172(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1172, temp.u32);
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

PPC_WEAK_FUNC(sub_8221AA78) {
	__imp__sub_8221AA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AB2C) {
	__imp__sub_8221AB2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AB30) {
	__imp__sub_8221AB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AB34) {
	__imp__sub_8221AB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AB38) {
	__imp__sub_8221AB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AB3C) {
	__imp__sub_8221AB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AB40) {
	__imp__sub_8221AB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AB44) {
	__imp__sub_8221AB44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AB48) {
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
	// bl 0x8220ed70
	ctx.lr = 0x8221AB5C;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8221AB64;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8221ab78
	if (ctx.cr6.eq) goto loc_8221AB78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29468
	ctx.r3.s64 = ctx.r11.s64 + -29468;
	// bl 0x822ad350
	ctx.lr = 0x8221AB78;
	sub_822AD350(ctx, base);
loc_8221AB78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221AB80;
	sub_822B1C50(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// ori r11,r9,44412
	ctx.r11.u64 = ctx.r9.u64 | 44412;
	// li r7,100
	ctx.r7.s64 = 100;
	// addi r6,r10,50
	ctx.r6.s64 = ctx.r10.s64 + 50;
	// divw r5,r6,r7
	ctx.r5.s32 = ctx.r6.s32 / ctx.r7.s32;
	// stwx r5,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8221abd4
	if (!ctx.cr6.lt) goto loc_8221ABD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221ABBC;
	sub_822B1FB0(ctx, base);
	// stfd f1,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// bl 0x822e84f0
	ctx.lr = 0x8221ABD0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221ABD4;
	sub_822AD350(ctx, base);
loc_8221ABD4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8221ABE0;
	sub_822B2498(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-21116
	ctx.r10.s64 = ctx.r10.s64 + -21116;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_8221AB48) {
	__imp__sub_8221AB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC30) {
	__imp__sub_8221AC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC34) {
	__imp__sub_8221AC34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC38) {
	__imp__sub_8221AC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC3C) {
	__imp__sub_8221AC3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC40) {
	__imp__sub_8221AC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC44) {
	__imp__sub_8221AC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC48) {
	__imp__sub_8221AC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC4C) {
	__imp__sub_8221AC4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC50) {
	__imp__sub_8221AC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC54) {
	__imp__sub_8221AC54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC58) {
	__imp__sub_8221AC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC5C) {
	__imp__sub_8221AC5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AC60) {
	__imp__sub_8221AC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AC64) {
	__imp__sub_8221AC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AC68) {
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
	ctx.lr = 0x8221AC80;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221AC88;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x8221ac9c
	if (ctx.cr6.eq) goto loc_8221AC9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29264
	ctx.r3.s64 = ctx.r11.s64 + -29264;
	// bl 0x822ad350
	ctx.lr = 0x8221AC9C;
	sub_822AD350(ctx, base);
loc_8221AC9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221ACA4;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8221ACB0;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221ACBC;
	sub_822B1FB0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221ACC8;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221ACD4;
	sub_822B1FB0(ctx, base);
	// fsubs f12,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// fsubs f10,f1,f30
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16344);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmsubs f0,f13,f12,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f0,16332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16332, temp.u32);
	// fnmsubs f12,f13,f10,f7
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f7.f64)));
	// stfs f12,16336(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16336, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8221ad24
	if (ctx.cr6.lt) goto loc_8221AD24;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8221ad30
	if (!ctx.cr6.lt) goto loc_8221AD30;
loc_8221AD24:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29384
	ctx.r3.s64 = ctx.r11.s64 + -29384;
	// bl 0x822ad350
	ctx.lr = 0x8221AD30;
	sub_822AD350(ctx, base);
loc_8221AD30:
	// stfd f28,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f28.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f29,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f31,16324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16324, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f30,16328(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16328, temp.u32);
	// addi r3,r11,-29408
	ctx.r3.s64 = ctx.r11.s64 + -29408;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e84f0
	ctx.lr = 0x8221AD78;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1202
	ctx.r3.s64 = 1202;
	// bl 0x8233e7d8
	ctx.lr = 0x8221AD84;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x8221AD90;
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

PPC_WEAK_FUNC(sub_8221AC68) {
	__imp__sub_8221AC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221ADA4) {
	__imp__sub_8221ADA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221ADA8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221ADBC;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1203
	ctx.r3.s64 = 1203;
	// bl 0x8233e7d8
	ctx.lr = 0x8221ADC8;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221ADA8) {
	__imp__sub_8221ADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221ADD8) {
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
	// bl 0x822b29b0
	ctx.lr = 0x8221ADF0;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x8221ae1c
	if (ctx.cr6.eq) goto loc_8221AE1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2938
	ctx.lr = 0x8221AE00;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// bl 0x822e84f0
	ctx.lr = 0x8221AE10;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AE1C;
	sub_822AD4E0(ctx, base);
loc_8221AE1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2788
	ctx.lr = 0x8221AE24;
	sub_822B2788(ctx, base);
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

PPC_WEAK_FUNC(sub_8221ADD8) {
	__imp__sub_8221ADD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AE38) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221AE4C;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x8221ae78
	if (ctx.cr6.eq) goto loc_8221AE78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2938
	ctx.lr = 0x8221AE5C;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// bl 0x822e84f0
	ctx.lr = 0x8221AE6C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AE78;
	sub_822AD4E0(ctx, base);
loc_8221AE78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2788
	ctx.lr = 0x8221AE80;
	sub_822B2788(ctx, base);
	// bl 0x822a8c10
	ctx.lr = 0x8221AE84;
	sub_822A8C10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AE38) {
	__imp__sub_8221AE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AE94) {
	__imp__sub_8221AE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AE98) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221AEAC;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x8221aed8
	if (ctx.cr6.eq) goto loc_8221AED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2938
	ctx.lr = 0x8221AEBC;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// bl 0x822e84f0
	ctx.lr = 0x8221AECC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AED8;
	sub_822AD4E0(ctx, base);
loc_8221AED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2788
	ctx.lr = 0x8221AEE0;
	sub_822B2788(ctx, base);
	// bl 0x822a4340
	ctx.lr = 0x8221AEE4;
	sub_822A4340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AE98) {
	__imp__sub_8221AE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AEF4) {
	__imp__sub_8221AEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AEF8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221AF10;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x8221af3c
	if (ctx.cr6.eq) goto loc_8221AF3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2938
	ctx.lr = 0x8221AF20;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// bl 0x822e84f0
	ctx.lr = 0x8221AF30;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221AF3C;
	sub_822AD4E0(ctx, base);
loc_8221AF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2788
	ctx.lr = 0x8221AF44;
	sub_822B2788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2868
	ctx.lr = 0x8221AF50;
	sub_822B2868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a43b8
	ctx.lr = 0x8221AF5C;
	sub_822A43B8(ctx, base);
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

PPC_WEAK_FUNC(sub_8221AEF8) {
	__imp__sub_8221AEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,15492
	ctx.r10.s64 = ctx.r11.s64 + 15492;
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,15492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15492);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f1,f13,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f0,f4,f4
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f11,f5,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f12,f7,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f9,f1,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f10,f2,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x8221afdc
	if (ctx.cr6.lt) goto loc_8221AFDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221AFDC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221AF70) {
	__imp__sub_8221AF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221AFE4) {
	__imp__sub_8221AFE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221AFE8) {
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
	// bne cr6,0x8221b020
	if (!ctx.cr6.eq) goto loc_8221B020;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221b030
	goto loc_8221B030;
loc_8221B020:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221B02C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221B030:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8221b058
	if (ctx.cr6.eq) goto loc_8221B058;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221B044;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// bl 0x822e84f0
	ctx.lr = 0x8221B054;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221B058;
	sub_822AD350(ctx, base);
loc_8221B058:
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

PPC_WEAK_FUNC(sub_8221AFE8) {
	__imp__sub_8221AFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B070) {
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
	// bl 0x8221afe8
	ctx.lr = 0x8221B080;
	sub_8221AFE8(ctx, base);
	// lfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x8221B088;
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

PPC_WEAK_FUNC(sub_8221B070) {
	__imp__sub_8221B070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B098) {
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
	// bl 0x8221afe8
	ctx.lr = 0x8221B0B0;
	sub_8221AFE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221B0BC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,-30864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8221b0ec
	if (!ctx.cr6.lt) goto loc_8221B0EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29132
	ctx.r4.s64 = ctx.r11.s64 + -29132;
	// bl 0x822ad4e0
	ctx.lr = 0x8221B0E0;
	sub_822AD4E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221b0f4
	goto loc_8221B0F4;
loc_8221B0EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_8221B0F4:
	// fsel f0,f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
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

PPC_WEAK_FUNC(sub_8221B098) {
	__imp__sub_8221B098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221B114) {
	__imp__sub_8221B114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B118) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221b14c
	if (!ctx.cr6.eq) goto loc_8221B14C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221b15c
	goto loc_8221B15C;
loc_8221B14C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221B158;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B15C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8221b174
	if (ctx.cr6.lt) goto loc_8221B174;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8221b178
	if (!ctx.cr6.gt) goto loc_8221B178;
loc_8221B174:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B178:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822acbf8
	ctx.lr = 0x8221B180;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221B118) {
	__imp__sub_8221B118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221B198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822ad190
	ctx.lr = 0x8221B1A0;
	sub_822AD190(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r29,32
	ctx.r29.s64 = 32;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// addi r31,r11,2660
	ctx.r31.s64 = ctx.r11.s64 + 2660;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
loc_8221B1B8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b1d8
	if (ctx.cr6.eq) goto loc_8221B1D8;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82229b60
	ctx.lr = 0x8221B1D4;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221B1D8;
	sub_822AD208(ctx, base);
loc_8221B1D8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8221b1b8
	if (!ctx.cr0.eq) goto loc_8221B1B8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B190) {
	__imp__sub_8221B190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221B1EC) {
	__imp__sub_8221B1EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B1F0) {
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
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b21c
	if (ctx.cr6.eq) goto loc_8221B21C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// bl 0x822ad350
	ctx.lr = 0x8221B21C;
	sub_822AD350(ctx, base);
loc_8221B21C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8221B228;
	sub_822B2498(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221b274
	if (ctx.cr6.eq) goto loc_8221B274;
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221b274
	if (ctx.cr6.eq) goto loc_8221B274;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8221b280
	if (!ctx.cr6.eq) goto loc_8221B280;
loc_8221B274:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29108
	ctx.r3.s64 = ctx.r11.s64 + -29108;
	// bl 0x822ad350
	ctx.lr = 0x8221B280;
	sub_822AD350(ctx, base);
loc_8221B280:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x8221B28C;
	sub_8222FB90(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b29c
	if (ctx.cr6.eq) goto loc_8221B29C;
	// bl 0x8223fcb0
	ctx.lr = 0x8221B29C;
	sub_8223FCB0(ctx, base);
loc_8221B29C:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b2b0
	if (ctx.cr6.eq) goto loc_8221B2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x8221B2B0;
	sub_82340D30(ctx, base);
loc_8221B2B0:
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

PPC_WEAK_FUNC(sub_8221B1F0) {
	__imp__sub_8221B1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221B2C4) {
	__imp__sub_8221B2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B2C8) {
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
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b2f4
	if (ctx.cr6.eq) goto loc_8221B2F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29000
	ctx.r3.s64 = ctx.r11.s64 + -29000;
	// bl 0x822ad350
	ctx.lr = 0x8221B2F4;
	sub_822AD350(ctx, base);
loc_8221B2F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8221B300;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x8221B30C;
	sub_8222FBE8(ctx, base);
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

PPC_WEAK_FUNC(sub_8221B2C8) {
	__imp__sub_8221B2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B320) {
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
	// bl 0x8220ed70
	ctx.lr = 0x8221B334;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221B340;
	sub_82229BF0(ctx, base);
	// lwz r31,264(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lhz r8,126(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// bl 0x822b2288
	ctx.lr = 0x8221B364;
	sub_822B2288(ctx, base);
	// bl 0x8222e5a0
	ctx.lr = 0x8221B368;
	sub_8222E5A0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8221B320) {
	__imp__sub_8221B320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B380) {
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
	// bl 0x8220ed70
	ctx.lr = 0x8221B390;
	sub_8220ED70(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221B380) {
	__imp__sub_8221B380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// b 0x822ad350
	sub_822AD350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B3B0) {
	__imp__sub_8221B3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221B3BC) {
	__imp__sub_8221B3BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// b 0x822ad350
	sub_822AD350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B3C0) {
	__imp__sub_8221B3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221B3CC) {
	__imp__sub_8221B3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B3D0) {
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
	// bne cr6,0x8221b408
	if (!ctx.cr6.eq) goto loc_8221B408;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221b418
	goto loc_8221B418;
loc_8221B408:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221B414;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B418:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8221b430
	if (ctx.cr6.eq) goto loc_8221B430;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28904
	ctx.r3.s64 = ctx.r11.s64 + -28904;
	// bl 0x822ad350
	ctx.lr = 0x8221B430;
	sub_822AD350(ctx, base);
loc_8221B430:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221B438;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8221B440;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8221b46c
	if (!ctx.cr6.eq) goto loc_8221B46C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8221B450;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8221b470
	goto loc_8221B470;
loc_8221B46C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8221B470:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28924
	ctx.r3.s64 = ctx.r11.s64 + -28924;
	// bl 0x822e84f0
	ctx.lr = 0x8221B480;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x8221B48C;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_8221B3D0) {
	__imp__sub_8221B3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221B4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x8221B4B0;
	sub_8220ED70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,264(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x82229bf0
	ctx.lr = 0x8221B4C0;
	sub_82229BF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221b4e0
	if (ctx.cr6.eq) goto loc_8221B4E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// bl 0x822ad350
	ctx.lr = 0x8221B4E0;
	sub_822AD350(ctx, base);
loc_8221B4E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,452
	ctx.r3.s64 = ctx.r30.s64 + 452;
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lhz r9,126(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// bl 0x821e2e18
	ctx.lr = 0x8221B500;
	sub_821E2E18(ctx, base);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8221b518
	if (!ctx.cr6.eq) goto loc_8221B518;
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r10.u32);
loc_8221B518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B4A0) {
	__imp__sub_8221B4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B520) {
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
	// bl 0x8220ed70
	ctx.lr = 0x8221B538;
	sub_8220ED70(ctx, base);
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221b560
	if (!ctx.cr6.eq) goto loc_8221B560;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-28808
	ctx.r4.s64 = ctx.r11.s64 + -28808;
	// bl 0x82280c30
	ctx.lr = 0x8221B55C;
	sub_82280C30(ctx, base);
	// b 0x8221b5b8
	goto loc_8221B5B8;
loc_8221B560:
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221b5a4
	if (ctx.cr6.eq) goto loc_8221B5A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x821e2e18
	ctx.lr = 0x8221B58C;
	sub_821E2E18(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8221b5a4
	if (!ctx.cr6.eq) goto loc_8221B5A4;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
loc_8221B5A4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// rlwinm r9,r11,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
loc_8221B5B8:
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

PPC_WEAK_FUNC(sub_8221B520) {
	__imp__sub_8221B520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B5D0) {
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
	// bl 0x8220ed70
	ctx.lr = 0x8221B5E8;
	sub_8220ED70(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b604
	if (!ctx.cr6.eq) goto loc_8221B604;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// bl 0x822ad350
	ctx.lr = 0x8221B604;
	sub_822AD350(ctx, base);
loc_8221B604:
	// bl 0x822acb68
	ctx.lr = 0x8221B608;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x8221b61c
	if (!ctx.cr6.lt) goto loc_8221B61C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28696
	ctx.r3.s64 = ctx.r11.s64 + -28696;
	// bl 0x822ad350
	ctx.lr = 0x8221B61C;
	sub_822AD350(ctx, base);
loc_8221B61C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221B624;
	sub_822B2288(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,4856
	ctx.r4.s64 = ctx.r11.s64 + 4856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8221B638:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b638
	if (!ctx.cr6.eq) goto loc_8221B638;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e7ee0
	ctx.lr = 0x8221B65C;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221b6a4
	if (!ctx.cr6.eq) goto loc_8221B6A4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// ori r7,r9,45016
	ctx.r7.u64 = ctx.r9.u64 | 45016;
	// addi r6,r8,-1612
	ctx.r6.s64 = ctx.r8.s64 + -1612;
	// lwz r11,9624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9624);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r5,13712
	ctx.r3.s64 = ctx.r5.s64 + 13712;
	// divw r11,r4,r7
	ctx.r11.s32 = ctx.r4.s32 / ctx.r7.s32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x822e84f0
	ctx.lr = 0x8221B6A0;
	sub_822E84F0(ctx, base);
	// b 0x8221b6ac
	goto loc_8221B6AC;
loc_8221B6A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213c190
	ctx.lr = 0x8221B6AC;
	sub_8213C190(ctx, base);
loc_8221B6AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b6bc
	if (ctx.cr6.eq) goto loc_8221B6BC;
	// bl 0x822aced0
	ctx.lr = 0x8221B6B8;
	sub_822ACED0(ctx, base);
	// b 0x8221b6dc
	goto loc_8221B6DC;
loc_8221B6BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28728
	ctx.r3.s64 = ctx.r11.s64 + -28728;
	// bl 0x822e84f0
	ctx.lr = 0x8221B6CC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221B6D8;
	sub_822AD4E0(ctx, base);
	// bl 0x822acd78
	ctx.lr = 0x8221B6DC;
	sub_822ACD78(ctx, base);
loc_8221B6DC:
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

PPC_WEAK_FUNC(sub_8221B5D0) {
	__imp__sub_8221B5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221B6F4) {
	__imp__sub_8221B6F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221B700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x8221B708;
	sub_8220ED70(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b724
	if (!ctx.cr6.eq) goto loc_8221B724;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28560
	ctx.r3.s64 = ctx.r11.s64 + -28560;
	// bl 0x822ad350
	ctx.lr = 0x8221B724;
	sub_822AD350(ctx, base);
loc_8221B724:
	// lis r31,-32166
	ctx.r31.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// lhz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lbz r10,29088(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221b760
	if (!ctx.cr6.eq) goto loc_8221B760;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8221b778
	goto loc_8221B778;
loc_8221B760:
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8221B778:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b790
	if (!ctx.cr6.eq) goto loc_8221B790;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28588
	ctx.r3.s64 = ctx.r11.s64 + -28588;
	// bl 0x822ad350
	ctx.lr = 0x8221B790;
	sub_822AD350(ctx, base);
loc_8221B790:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221B798;
	sub_822B1C50(ctx, base);
	// lbz r11,29088(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29088);
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b7b8
	if (ctx.cr6.eq) goto loc_8221B7B8;
	// mulli r11,r10,9780
	ctx.r11.s64 = ctx.r10.s64 * 9780;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_8221B7B8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82141340
	ctx.lr = 0x8221B7C0;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8213c1f8
	ctx.lr = 0x8221B7C8;
	sub_8213C1F8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x8221B7D0;
	sub_822ACB78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B6F8) {
	__imp__sub_8221B6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221B7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x8221B7E8;
	sub_8220ED70(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b804
	if (!ctx.cr6.eq) goto loc_8221B804;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28560
	ctx.r3.s64 = ctx.r11.s64 + -28560;
	// bl 0x822ad350
	ctx.lr = 0x8221B804;
	sub_822AD350(ctx, base);
loc_8221B804:
	// lis r31,-32166
	ctx.r31.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// lhz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lbz r10,29088(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221b840
	if (!ctx.cr6.eq) goto loc_8221B840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8221b858
	goto loc_8221B858;
loc_8221B840:
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8221B858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b870
	if (!ctx.cr6.eq) goto loc_8221B870;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28588
	ctx.r3.s64 = ctx.r11.s64 + -28588;
	// bl 0x822ad350
	ctx.lr = 0x8221B870;
	sub_822AD350(ctx, base);
loc_8221B870:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221B878;
	sub_822B1C50(ctx, base);
	// lbz r11,29088(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29088);
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b898
	if (ctx.cr6.eq) goto loc_8221B898;
	// mulli r11,r10,9780
	ctx.r11.s64 = ctx.r10.s64 * 9780;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_8221B898:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82141340
	ctx.lr = 0x8221B8A0;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8213c268
	ctx.lr = 0x8221B8A8;
	sub_8213C268(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B7D8) {
	__imp__sub_8221B7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221B8B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x8221B8C0;
	sub_8220ED70(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b8dc
	if (!ctx.cr6.eq) goto loc_8221B8DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28404
	ctx.r3.s64 = ctx.r11.s64 + -28404;
	// bl 0x822ad350
	ctx.lr = 0x8221B8DC;
	sub_822AD350(ctx, base);
loc_8221B8DC:
	// lis r30,-32166
	ctx.r30.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// lhz r11,126(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// lbz r10,29088(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221b918
	if (!ctx.cr6.eq) goto loc_8221B918;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
	// b 0x8221b930
	goto loc_8221B930;
loc_8221B918:
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8221B930:
	// bl 0x822acb68
	ctx.lr = 0x8221B934;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8221b948
	if (!ctx.cr6.lt) goto loc_8221B948;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28468
	ctx.r3.s64 = ctx.r11.s64 + -28468;
	// bl 0x822ad350
	ctx.lr = 0x8221B948;
	sub_822AD350(ctx, base);
loc_8221B948:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221B950;
	sub_822B2288(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b990
	if (ctx.cr6.eq) goto loc_8221B990;
	// lbz r10,29088(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29088);
	// lhz r11,126(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221b97c
	if (ctx.cr6.eq) goto loc_8221B97C;
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_8221B97C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82141340
	ctx.lr = 0x8221B984;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8213d660
	ctx.lr = 0x8221B98C;
	sub_8213D660(ctx, base);
	// b 0x8221b998
	goto loc_8221B998;
loc_8221B990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d678
	ctx.lr = 0x8221B998;
	sub_8213D678(ctx, base);
loc_8221B998:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8221ba44
	if (ctx.cr6.gt) goto loc_8221BA44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221ba30
	if (ctx.cr6.eq) goto loc_8221BA30;
	// bdz 0x8221b9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B9CC;
	// bdz 0x8221b9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B9DC;
	// bdz 0x8221b9ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B9EC;
	// bdz 0x8221ba00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221BA00;
	// bdz 0x8221ba10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221BA10;
	// b 0x8221ba20
	goto loc_8221BA20;
loc_8221B9CC:
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x822acbf8
	ctx.lr = 0x8221B9D4;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221B9DC:
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x822acb78
	ctx.lr = 0x8221B9E4;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221B9EC:
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822acbf8
	ctx.lr = 0x8221B9F8;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221BA00:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822acbf8
	ctx.lr = 0x8221BA08;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221BA10:
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x8221BA18;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221BA20:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822aced0
	ctx.lr = 0x8221BA28;
	sub_822ACED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221BA30:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28524
	ctx.r3.s64 = ctx.r11.s64 + -28524;
	// bl 0x822e84f0
	ctx.lr = 0x8221BA40;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221BA44;
	sub_822AD350(ctx, base);
loc_8221BA44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221B8B0) {
	__imp__sub_8221B8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221BA4C) {
	__imp__sub_8221BA4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221BA58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x8221BA60;
	sub_8220ED70(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ba7c
	if (!ctx.cr6.eq) goto loc_8221BA7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28216
	ctx.r3.s64 = ctx.r11.s64 + -28216;
	// bl 0x822ad350
	ctx.lr = 0x8221BA7C;
	sub_822AD350(ctx, base);
loc_8221BA7C:
	// lis r29,-32166
	ctx.r29.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r27,r11,9240
	ctx.r27.s64 = ctx.r11.s64 + 9240;
	// lhz r11,126(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// lbz r10,29088(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221bab8
	if (!ctx.cr6.eq) goto loc_8221BAB8;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x8221bad0
	goto loc_8221BAD0;
loc_8221BAB8:
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r8,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8221BAD0:
	// bl 0x822acb68
	ctx.lr = 0x8221BAD4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8221bae8
	if (!ctx.cr6.lt) goto loc_8221BAE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28288
	ctx.r3.s64 = ctx.r11.s64 + -28288;
	// bl 0x822ad350
	ctx.lr = 0x8221BAE8;
	sub_822AD350(ctx, base);
loc_8221BAE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221BAF0;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213d490
	ctx.lr = 0x8221BAF8;
	sub_8213D490(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8221bb18
	if (!ctx.cr6.lt) goto loc_8221BB18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28340
	ctx.r3.s64 = ctx.r11.s64 + -28340;
	// bl 0x822e84f0
	ctx.lr = 0x8221BB14;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221BB18;
	sub_822AD350(ctx, base);
loc_8221BB18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213d468
	ctx.lr = 0x8221BB20;
	sub_8213D468(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8221bbac
	if (ctx.cr6.gt) goto loc_8221BBAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221bb5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221BB5C;
	// bdzf 4*cr6+eq,0x8221bb74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221BB74;
	// bdzf 4*cr6+eq,0x8221bb84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221BB84;
	// bdzf 4*cr6+eq,0x8221bb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221BB90;
	// bne cr6,0x8221bba0
	if (!ctx.cr6.eq) goto loc_8221BBA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221BB54;
	sub_822B1C50(ctx, base);
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// b 0x8221bbac
	goto loc_8221BBAC;
loc_8221BB5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221BB64;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// b 0x8221bbac
	goto loc_8221BBAC;
loc_8221BB74:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221BB7C;
	sub_822B1C50(ctx, base);
	// sth r3,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r3.u16);
	// b 0x8221bbac
	goto loc_8221BBAC;
loc_8221BB84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8221BB8C;
	sub_822B1C50(ctx, base);
	// b 0x8221bba8
	goto loc_8221BBA8;
loc_8221BB90:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8221BB98;
	sub_822B1FB0(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8221bbac
	goto loc_8221BBAC;
loc_8221BBA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8221BBA8;
	sub_822B2288(ctx, base);
loc_8221BBA8:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_8221BBAC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bbf0
	if (ctx.cr6.eq) goto loc_8221BBF0;
	// lbz r10,29088(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29088);
	// lhz r11,126(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221bbd4
	if (ctx.cr6.eq) goto loc_8221BBD4;
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_8221BBD4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82141340
	ctx.lr = 0x8221BBDC;
	sub_82141340(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8213d7a8
	ctx.lr = 0x8221BBE8;
	sub_8213D7A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8221BBF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8213d7c0
	ctx.lr = 0x8221BBFC;
	sub_8213D7C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221BA50) {
	__imp__sub_8221BA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221BC04) {
	__imp__sub_8221BC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221BC10;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221BC24;
	sub_822ACB68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x8221bc3c
	if (!ctx.cr6.lt) goto loc_8221BC3C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27928
	ctx.r3.s64 = ctx.r11.s64 + -27928;
	// bl 0x822ad350
	ctx.lr = 0x8221BC3C;
	sub_822AD350(ctx, base);
loc_8221BC3C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8221bc6c
	if (ctx.cr6.lt) goto loc_8221BC6C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x8221BC50;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bc6c
	if (!ctx.cr6.eq) goto loc_8221BC6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27956
	ctx.r3.s64 = ctx.r11.s64 + -27956;
	// bl 0x822ad350
	ctx.lr = 0x8221BC6C;
	sub_822AD350(ctx, base);
loc_8221BC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221BC74;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x8221BC7C;
	sub_82232100(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221bc9c
	if (!ctx.cr6.eq) goto loc_8221BC9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28004
	ctx.r3.s64 = ctx.r11.s64 + -28004;
	// bl 0x822e84f0
	ctx.lr = 0x8221BC98;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221BC9C;
	sub_822AD350(ctx, base);
loc_8221BC9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8221BCA8;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822b2498
	ctx.lr = 0x8221BCCC;
	sub_822B2498(ctx, base);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82332af8
	ctx.lr = 0x8221BCE4;
	sub_82332AF8(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332b10
	ctx.lr = 0x8221BCF0;
	sub_82332B10(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f3,f4,f0,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8221bd94
	if (!ctx.cr6.eq) goto loc_8221BD94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28060
	ctx.r3.s64 = ctx.r11.s64 + -28060;
	// bl 0x822ad350
	ctx.lr = 0x8221BD90;
	sub_822AD350(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_8221BD94:
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221bec8
	if (ctx.cr6.eq) goto loc_8221BEC8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8221be00
	if (ctx.cr6.eq) goto loc_8221BE00;
	// bl 0x823324e0
	ctx.lr = 0x8221BDAC;
	sub_823324E0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-28104
	ctx.r3.s64 = ctx.r11.s64 + -28104;
	// bl 0x822e84f0
	ctx.lr = 0x8221BDBC;
	sub_822E84F0(ctx, base);
loc_8221BDBC:
	// bl 0x822ad350
	ctx.lr = 0x8221BDC0;
	sub_822AD350(ctx, base);
loc_8221BDC0:
	// bl 0x822acd78
	ctx.lr = 0x8221BDC4;
	sub_822ACD78(ctx, base);
loc_8221BDC4:
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822304f8
	ctx.lr = 0x8221BDD0;
	sub_822304F8(ctx, base);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r29,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r29.u16);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r11,38
	ctx.r8.s64 = ctx.r11.s64 + 38;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_8221BE00:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8221be70
	if (!ctx.cr6.eq) goto loc_8221BE70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221be1c
	if (ctx.cr6.eq) goto loc_8221BE1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8221be2c
	goto loc_8221BE2C;
loc_8221BE1C:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// addis r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 1245184;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
loc_8221BE2C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82231680
	ctx.lr = 0x8221BE3C;
	sub_82231680(ctx, base);
loc_8221BE3C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221bdc0
	if (ctx.cr6.eq) goto loc_8221BDC0;
	// bl 0x82229b60
	ctx.lr = 0x8221BE4C;
	sub_82229B60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221bdc4
	if (ctx.cr6.eq) goto loc_8221BDC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x821e2e18
	ctx.lr = 0x8221BE60;
	sub_821E2E18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x821e2e18
	ctx.lr = 0x8221BE6C;
	sub_821E2E18(ctx, base);
	// b 0x8221bdc4
	goto loc_8221BDC4;
loc_8221BE70:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8221bebc
	if (!ctx.cr6.eq) goto loc_8221BEBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221be88
	if (ctx.cr6.eq) goto loc_8221BE88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8221be98
	goto loc_8221BE98;
loc_8221BE88:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// addis r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 1245184;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
loc_8221BE98:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r11,-5928
	ctx.r7.s64 = ctx.r11.s64 + -5928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82231a78
	ctx.lr = 0x8221BEB8;
	sub_82231A78(ctx, base);
	// b 0x8221be3c
	goto loc_8221BE3C;
loc_8221BEBC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28152
	ctx.r3.s64 = ctx.r11.s64 + -28152;
	// b 0x8221bdbc
	goto loc_8221BDBC;
loc_8221BEC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221bed8
	if (ctx.cr6.eq) goto loc_8221BED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8221bee8
	goto loc_8221BEE8;
loc_8221BED8:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// addis r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 1245184;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
loc_8221BEE8:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x821e2978
	ctx.lr = 0x8221BF04;
	sub_821E2978(ctx, base);
	// b 0x8221bdc0
	goto loc_8221BDC0;
}

PPC_WEAK_FUNC(sub_8221BC08) {
	__imp__sub_8221BC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BF08) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221BF24;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x8221BF2C;
	sub_82232100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221bf4c
	if (!ctx.cr6.eq) goto loc_8221BF4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-27896
	ctx.r3.s64 = ctx.r11.s64 + -27896;
	// bl 0x822e84f0
	ctx.lr = 0x8221BF48;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221BF4C;
	sub_822AD350(ctx, base);
loc_8221BF4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334448
	ctx.lr = 0x8221BF54;
	sub_82334448(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x822acff0
	ctx.lr = 0x8221BF5C;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_8221BF08) {
	__imp__sub_8221BF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221BF74) {
	__imp__sub_8221BF74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BF78) {
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
	// bne cr6,0x8221bfb0
	if (!ctx.cr6.eq) goto loc_8221BFB0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221bfc0
	goto loc_8221BFC0;
loc_8221BFB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221BFBC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221BFC0:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bfd8
	if (!ctx.cr6.eq) goto loc_8221BFD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// bl 0x822ad548
	ctx.lr = 0x8221BFD8;
	sub_822AD548(ctx, base);
loc_8221BFD8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8221BF78) {
	__imp__sub_8221BF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221BFFC) {
	__imp__sub_8221BFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C000) {
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
	// bne cr6,0x8221c038
	if (!ctx.cr6.eq) goto loc_8221C038;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221c048
	goto loc_8221C048;
loc_8221C038:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C044;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C048:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c060
	if (!ctx.cr6.eq) goto loc_8221C060;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// bl 0x822ad548
	ctx.lr = 0x8221C060;
	sub_822AD548(ctx, base);
loc_8221C060:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8221C000) {
	__imp__sub_8221C000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C084) {
	__imp__sub_8221C084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C088) {
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
	// bne cr6,0x8221c0dc
	if (!ctx.cr6.eq) goto loc_8221C0DC;
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
	// bne cr6,0x8221c0ec
	if (!ctx.cr6.eq) goto loc_8221C0EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221C0D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221C0D8;
	sub_822AD548(ctx, base);
	// b 0x8221c0ec
	goto loc_8221C0EC;
loc_8221C0DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C0E8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C0EC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8221C088) {
	__imp__sub_8221C088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C110) {
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
	// bne cr6,0x8221c164
	if (!ctx.cr6.eq) goto loc_8221C164;
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
	// bne cr6,0x8221c174
	if (!ctx.cr6.eq) goto loc_8221C174;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221C15C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221C160;
	sub_822AD548(ctx, base);
	// b 0x8221c174
	goto loc_8221C174;
loc_8221C164:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C170;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C174:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8221C110) {
	__imp__sub_8221C110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C198) {
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
	// bne cr6,0x8221c1d0
	if (!ctx.cr6.eq) goto loc_8221C1D0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221c1e0
	goto loc_8221C1E0;
loc_8221C1D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C1DC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C1E0:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c1f8
	if (ctx.cr6.eq) goto loc_8221C1F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27816
	ctx.r3.s64 = ctx.r11.s64 + -27816;
	// bl 0x822ad350
	ctx.lr = 0x8221C1F8;
	sub_822AD350(ctx, base);
loc_8221C1F8:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c210
	if (ctx.cr6.eq) goto loc_8221C210;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27868
	ctx.r3.s64 = ctx.r11.s64 + -27868;
	// bl 0x822ad350
	ctx.lr = 0x8221C210;
	sub_822AD350(ctx, base);
loc_8221C210:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221C218;
	sub_822B1C50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// bne cr6,0x8221c22c
	if (!ctx.cr6.eq) goto loc_8221C22C;
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_8221C22C:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8221C198) {
	__imp__sub_8221C198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C244) {
	__imp__sub_8221C244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C248) {
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
	// bne cr6,0x8221c280
	if (!ctx.cr6.eq) goto loc_8221C280;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221c290
	goto loc_8221C290;
loc_8221C280:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C28C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C290:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c2a8
	if (ctx.cr6.eq) goto loc_8221C2A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27712
	ctx.r3.s64 = ctx.r11.s64 + -27712;
	// bl 0x822ad350
	ctx.lr = 0x8221C2A8;
	sub_822AD350(ctx, base);
loc_8221C2A8:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c2c0
	if (ctx.cr6.eq) goto loc_8221C2C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27764
	ctx.r3.s64 = ctx.r11.s64 + -27764;
	// bl 0x822ad350
	ctx.lr = 0x8221C2C0;
	sub_822AD350(ctx, base);
loc_8221C2C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// bl 0x822acb78
	ctx.lr = 0x8221C2CC;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_8221C248) {
	__imp__sub_8221C248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221C2E8;
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
	// bne cr6,0x8221c330
	if (!ctx.cr6.eq) goto loc_8221C330;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221c340
	if (!ctx.cr6.eq) goto loc_8221C340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221C328;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221C32C;
	sub_822AD548(ctx, base);
	// b 0x8221c340
	goto loc_8221C340;
loc_8221C330:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C33C;
	sub_822AD548(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_8221C340:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221C348;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x8221C354;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,9468
	ctx.r11.s64 = ctx.r11.s64 + 9468;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C364:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221c384
	if (ctx.cr6.eq) goto loc_8221C384;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x8221c364
	if (ctx.cr6.lt) goto loc_8221C364;
loc_8221C384:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x8221c3b0
	if (!ctx.cr6.eq) goto loc_8221C3B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221C394;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-27660
	ctx.r3.s64 = ctx.r11.s64 + -27660;
	// bl 0x822e84f0
	ctx.lr = 0x8221C3A4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221C3B0;
	sub_822AD4E0(ctx, base);
loc_8221C3B0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r9,122(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221c3cc
	if (!ctx.cr6.eq) goto loc_8221C3CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221c3d8
	goto loc_8221C3D8;
loc_8221C3CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221C3D4;
	sub_822A13A0(ctx, base);
	// bl 0x8222e138
	ctx.lr = 0x8221C3D8;
	sub_8222E138(ctx, base);
loc_8221C3D8:
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// lwz r10,264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221C2E0) {
	__imp__sub_8221C2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C3F0) {
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
	// bne cr6,0x8221c448
	if (!ctx.cr6.eq) goto loc_8221C448;
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
	// bne cr6,0x8221c458
	if (!ctx.cr6.eq) goto loc_8221C458;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221C440;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221C444;
	sub_822AD548(ctx, base);
	// b 0x8221c458
	goto loc_8221C458;
loc_8221C448:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C454;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221C458:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221C460;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,9468
	ctx.r11.s64 = ctx.r11.s64 + 9468;
loc_8221C46C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221c48c
	if (ctx.cr6.eq) goto loc_8221C48C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x8221c46c
	if (ctx.cr6.lt) goto loc_8221C46C;
loc_8221C48C:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x8221c4b4
	if (!ctx.cr6.eq) goto loc_8221C4B4;
	// bl 0x822a13a0
	ctx.lr = 0x8221C498;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-27660
	ctx.r3.s64 = ctx.r11.s64 + -27660;
	// bl 0x822e84f0
	ctx.lr = 0x8221C4A8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221C4B4;
	sub_822AD4E0(ctx, base);
loc_8221C4B4:
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221c4dc
	if (!ctx.cr6.eq) goto loc_8221C4DC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,122(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// b 0x8221c4e4
	goto loc_8221C4E4;
loc_8221C4DC:
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// bl 0x8233dd98
	ctx.lr = 0x8221C4E4;
	sub_8233DD98(ctx, base);
loc_8221C4E4:
	// bl 0x822acff0
	ctx.lr = 0x8221C4E8;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_8221C3F0) {
	__imp__sub_8221C3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C500) {
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
	// bne cr6,0x8221c538
	if (!ctx.cr6.eq) goto loc_8221C538;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221c548
	goto loc_8221C548;
loc_8221C538:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C544;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C548:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c560
	if (!ctx.cr6.eq) goto loc_8221C560;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27604
	ctx.r3.s64 = ctx.r11.s64 + -27604;
	// bl 0x822ad350
	ctx.lr = 0x8221C560;
	sub_822AD350(ctx, base);
loc_8221C560:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221C568;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// beq cr6,0x8221c580
	if (ctx.cr6.eq) goto loc_8221C580;
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
loc_8221C580:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8221C500) {
	__imp__sub_8221C500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C598) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// lhz r10,326(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 326);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221c5f4
	if (!ctx.cr6.eq) goto loc_8221C5F4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,324(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 324);
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
	// bne cr6,0x8221c604
	if (!ctx.cr6.eq) goto loc_8221C604;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221C5EC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221C5F0;
	sub_822AD548(ctx, base);
	// b 0x8221c604
	goto loc_8221C604;
loc_8221C5F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C600;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C604:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8221C610;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8221C618;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221C624;
	sub_822B1FB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821e6bc0
	ctx.lr = 0x8221C634;
	sub_821E6BC0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// bl 0x822da650
	ctx.lr = 0x8221C644;
	sub_822DA650(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// bl 0x822da650
	ctx.lr = 0x8221C654;
	sub_822DA650(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d5c30
	ctx.lr = 0x8221C664;
	sub_822D5C30(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822321f0
	ctx.lr = 0x8221C67C;
	sub_822321F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8221c6c0
	if (ctx.cr6.eq) goto loc_8221C6C0;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x8221c6c4
	if (ctx.cr6.lt) goto loc_8221C6C4;
loc_8221C6C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C6C4:
	// bl 0x822acb78
	ctx.lr = 0x8221C6C8;
	sub_822ACB78(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

PPC_WEAK_FUNC(sub_8221C598) {
	__imp__sub_8221C598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C6E4) {
	__imp__sub_8221C6E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C6E8) {
	PPC_FUNC_PROLOGUE();
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221c728
	if (!ctx.cr6.eq) goto loc_8221C728;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221c738
	goto loc_8221C738;
loc_8221C728:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C734;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C738:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221C740;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221C74C;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221C758;
	sub_822B1FB0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8222e4a0
	ctx.lr = 0x8221C770;
	sub_8222E4A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8221C778;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_8221C6E8) {
	__imp__sub_8221C6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C794) {
	__imp__sub_8221C794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C798) {
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
	// bne cr6,0x8221c7d4
	if (!ctx.cr6.eq) goto loc_8221C7D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221c7e4
	goto loc_8221C7E4;
loc_8221C7D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221C7E0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221C7E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221C7EC;
	sub_82229BF0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8221c814
	if (ctx.cr6.eq) goto loc_8221C814;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// bl 0x822ad350
	ctx.lr = 0x8221C808;
	sub_822AD350(ctx, base);
	// lhz r10,126(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// b 0x8221c81c
	goto loc_8221C81C;
loc_8221C814:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
loc_8221C81C:
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

PPC_WEAK_FUNC(sub_8221C798) {
	__imp__sub_8221C798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C834) {
	__imp__sub_8221C834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8221C840;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822b29b0
	ctx.lr = 0x8221C854;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x8221c880
	if (ctx.cr6.eq) goto loc_8221C880;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2938
	ctx.lr = 0x8221C864;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// bl 0x822e84f0
	ctx.lr = 0x8221C874;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221C880;
	sub_822AD4E0(ctx, base);
loc_8221C880:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2788
	ctx.lr = 0x8221C888;
	sub_822B2788(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a3a58
	ctx.lr = 0x8221C890;
	sub_822A3A58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221c8a8
	if (!ctx.cr6.eq) goto loc_8221C8A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27448
	ctx.r3.s64 = ctx.r11.s64 + -27448;
	// bl 0x822ad350
	ctx.lr = 0x8221C8A8;
	sub_822AD350(ctx, base);
loc_8221C8A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x8221c960
	if (ctx.cr6.eq) goto loc_8221C960;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r26,r8,1
	ctx.r26.s64 = ctx.r8.s64 + 65536;
	// addi r25,r11,-27484
	ctx.r25.s64 = ctx.r11.s64 + -27484;
	// addi r26,r26,-28670
	ctx.r26.s64 = ctx.r26.s64 + -28670;
loc_8221C8E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a6670
	ctx.lr = 0x8221C8F4;
	sub_822A6670(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a3df8
	ctx.lr = 0x8221C904;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8221c914
	if (ctx.cr6.eq) goto loc_8221C914;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822ad350
	ctx.lr = 0x8221C914;
	sub_822AD350(ctx, base);
loc_8221C914:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a38e0
	ctx.lr = 0x8221C920;
	sub_822A38E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// blt cr6,0x8221c8e8
	if (ctx.cr6.lt) goto loc_8221C8E8;
loc_8221C960:
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221C838) {
	__imp__sub_8221C838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C96C) {
	__imp__sub_8221C96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C970) {
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
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221c838
	ctx.lr = 0x8221C988;
	sub_8221C838(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x8221C9D4;
	sub_822AD078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221C970) {
	__imp__sub_8221C970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221C9E4) {
	__imp__sub_8221C9E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221C9E8) {
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
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221c838
	ctx.lr = 0x8221CA00;
	sub_8221C838(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f11,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fdivs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x8221CA50;
	sub_822AD078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221C9E8) {
	__imp__sub_8221C9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CA60) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221CA78;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221ca8c
	if (ctx.cr6.eq) goto loc_8221CA8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// bl 0x822ad350
	ctx.lr = 0x8221CA8C;
	sub_822AD350(ctx, base);
loc_8221CA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221CA94;
	sub_822B20B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3870
	ctx.lr = 0x8221CAA0;
	sub_821F3870(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cadc
	if (ctx.cr6.eq) goto loc_8221CADC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8221cad4
	if (!ctx.cr6.gt) goto loc_8221CAD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221CAC0;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-27416
	ctx.r3.s64 = ctx.r11.s64 + -27416;
	// bl 0x822e84f0
	ctx.lr = 0x8221CAD0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221CAD4;
	sub_822AD350(ctx, base);
loc_8221CAD4:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x822acbf8
	ctx.lr = 0x8221CADC;
	sub_822ACBF8(ctx, base);
loc_8221CADC:
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

PPC_WEAK_FUNC(sub_8221CA60) {
	__imp__sub_8221CA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221CAF4) {
	__imp__sub_8221CAF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CAF8) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221CB10;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221cb24
	if (ctx.cr6.eq) goto loc_8221CB24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// bl 0x822ad350
	ctx.lr = 0x8221CB24;
	sub_822AD350(ctx, base);
loc_8221CB24:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221CB2C;
	sub_822B20B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3870
	ctx.lr = 0x8221CB34;
	sub_821F3870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x8221CB3C;
	sub_822AD190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cb6c
	if (ctx.cr6.eq) goto loc_8221CB6C;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
loc_8221CB50:
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x822acbf8
	ctx.lr = 0x8221CB58;
	sub_822ACBF8(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221CB5C;
	sub_822AD208(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221cb50
	if (ctx.cr6.lt) goto loc_8221CB50;
loc_8221CB6C:
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

PPC_WEAK_FUNC(sub_8221CAF8) {
	__imp__sub_8221CAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221CB84) {
	__imp__sub_8221CB84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CB88) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221CB9C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221cbb0
	if (ctx.cr6.eq) goto loc_8221CBB0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27208
	ctx.r3.s64 = ctx.r11.s64 + -27208;
	// bl 0x822ad350
	ctx.lr = 0x8221CBB0;
	sub_822AD350(ctx, base);
loc_8221CBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221CBB8;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f38e8
	ctx.lr = 0x8221CBC0;
	sub_821F38E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cbe8
	if (!ctx.cr6.eq) goto loc_8221CBE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-27228
	ctx.r3.s64 = ctx.r11.s64 + -27228;
	// bl 0x822e84f0
	ctx.lr = 0x8221CBDC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221CBE8;
	sub_822AD4E0(ctx, base);
loc_8221CBE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3908
	ctx.lr = 0x8221CBF4;
	sub_821F3908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8221CBFC;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_8221CB88) {
	__imp__sub_8221CB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CC10) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221CC24;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221cc38
	if (ctx.cr6.eq) goto loc_8221CC38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// bl 0x822ad350
	ctx.lr = 0x8221CC38;
	sub_822AD350(ctx, base);
loc_8221CC38:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221CC40;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f38e8
	ctx.lr = 0x8221CC48;
	sub_821F38E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cc70
	if (!ctx.cr6.eq) goto loc_8221CC70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-27228
	ctx.r3.s64 = ctx.r11.s64 + -27228;
	// bl 0x822e84f0
	ctx.lr = 0x8221CC64;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221CC70;
	sub_822AD4E0(ctx, base);
loc_8221CC70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3930
	ctx.lr = 0x8221CC78;
	sub_821F3930(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subfc r9,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r3,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822acb78
	ctx.lr = 0x8221CC90;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_8221CC10) {
	__imp__sub_8221CC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221CCA4) {
	__imp__sub_8221CCA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CCA8) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221CCBC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8221ccdc
	if (!ctx.cr6.lt) goto loc_8221CCDC;
	// bl 0x822acb68
	ctx.lr = 0x8221CCC8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x8221ccdc
	if (!ctx.cr6.gt) goto loc_8221CCDC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27088
	ctx.r3.s64 = ctx.r11.s64 + -27088;
	// bl 0x822ad350
	ctx.lr = 0x8221CCDC;
	sub_822AD350(ctx, base);
loc_8221CCDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221CCE4;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f38e8
	ctx.lr = 0x8221CCEC;
	sub_821F38E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cd14
	if (!ctx.cr6.eq) goto loc_8221CD14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-27228
	ctx.r3.s64 = ctx.r11.s64 + -27228;
	// bl 0x822e84f0
	ctx.lr = 0x8221CD08;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221CD14;
	sub_822AD4E0(ctx, base);
loc_8221CD14:
	// bl 0x822acb68
	ctx.lr = 0x8221CD18;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8221cd30
	if (ctx.cr6.lt) goto loc_8221CD30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8221CD2C;
	sub_822B2498(ctx, base);
	// b 0x8221cd44
	goto loc_8221CD44;
loc_8221CD30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
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
loc_8221CD44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3908
	ctx.lr = 0x8221CD50;
	sub_821F3908(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3dc0
	ctx.lr = 0x8221CD60;
	sub_821F3DC0(ctx, base);
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

PPC_WEAK_FUNC(sub_8221CCA8) {
	__imp__sub_8221CCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221CD74) {
	__imp__sub_8221CD74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CD78) {
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
	ctx.lr = 0x8221CD8C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221cda0
	if (ctx.cr6.eq) goto loc_8221CDA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27020
	ctx.r3.s64 = ctx.r11.s64 + -27020;
	// bl 0x822ad350
	ctx.lr = 0x8221CDA0;
	sub_822AD350(ctx, base);
loc_8221CDA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221CDA8;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f38e8
	ctx.lr = 0x8221CDB0;
	sub_821F38E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cdd8
	if (!ctx.cr6.eq) goto loc_8221CDD8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-27228
	ctx.r3.s64 = ctx.r11.s64 + -27228;
	// bl 0x822e84f0
	ctx.lr = 0x8221CDCC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221CDD8;
	sub_822AD4E0(ctx, base);
loc_8221CDD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3e30
	ctx.lr = 0x8221CDE0;
	sub_821F3E30(ctx, base);
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

PPC_WEAK_FUNC(sub_8221CD78) {
	__imp__sub_8221CD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221CDF4) {
	__imp__sub_8221CDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lhz r10,2940(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2940);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2940
	ctx.r3.s64 = ctx.r11.s64 + 2940;
	// b 0x822a24e0
	sub_822A24E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221CDF8) {
	__imp__sub_8221CDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221CE18) {
	__imp__sub_8221CE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221CE1C) {
	__imp__sub_8221CE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CE20) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221CE3C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8221ce50
	if (!ctx.cr6.lt) goto loc_8221CE50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-26964
	ctx.r3.s64 = ctx.r11.s64 + -26964;
	// bl 0x822ad350
	ctx.lr = 0x8221CE50;
	sub_822AD350(ctx, base);
loc_8221CE50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,1000
	ctx.r31.s64 = 1000;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822b1fb0
	ctx.lr = 0x8221CE64;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822acb68
	ctx.lr = 0x8221CE6C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8221ce80
	if (ctx.cr6.lt) goto loc_8221CE80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8221CE7C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8221CE80:
	// bl 0x822acb68
	ctx.lr = 0x8221CE84;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8221ceac
	if (ctx.cr6.lt) goto loc_8221CEAC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8221CE94;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8221CEAC:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r6,r7,-4904
	ctx.r6.s64 = ctx.r7.s64 + -4904;
	// lwz r11,-9400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9400);
	// li r10,0
	ctx.r10.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stfs f30,8(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f31,12(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lwz r10,-4812(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4812);
	// fdivs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// stb r8,-4904(r7)
	PPC_STORE_U8(ctx.r7.u32 + -4904, ctx.r8.u8);
	// fmuls f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fdivs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221CE20) {
	__imp__sub_8221CE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221CF58) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// bne cr6,0x8221cfb4
	if (!ctx.cr6.eq) goto loc_8221CFB4;
	// addi r11,r11,9496
	ctx.r11.s64 = ctx.r11.s64 + 9496;
	// li r30,173
	ctx.r30.s64 = 173;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_8221CF84:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x8221CF90;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8221cf84
	if (!ctx.cr0.eq) goto loc_8221CF84;
loc_8221CF98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CF9C:
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
loc_8221CFB4:
	// addi r5,r11,9496
	ctx.r5.s64 = ctx.r11.s64 + 9496;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8221CFC8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221CFD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// beq cr6,0x8221cff4
	if (ctx.cr6.eq) goto loc_8221CFF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221cfd0
	if (ctx.cr6.eq) goto loc_8221CFD0;
loc_8221CFF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221d014
	if (ctx.cr6.eq) goto loc_8221D014;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,2076
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2076, ctx.xer);
	// blt cr6,0x8221cfc8
	if (ctx.cr6.lt) goto loc_8221CFC8;
	// b 0x8221cf98
	goto loc_8221CF98;
loc_8221D014:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x8221cf9c
	goto loc_8221CF9C;
}

PPC_WEAK_FUNC(sub_8221CF58) {
	__imp__sub_8221CF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D040) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// bne cr6,0x8221d09c
	if (!ctx.cr6.eq) goto loc_8221D09C;
	// addi r11,r11,24272
	ctx.r11.s64 = ctx.r11.s64 + 24272;
	// li r30,152
	ctx.r30.s64 = 152;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_8221D06C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x8221D078;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8221d06c
	if (!ctx.cr0.eq) goto loc_8221D06C;
loc_8221D080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D084:
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
loc_8221D09C:
	// addi r4,r11,24272
	ctx.r4.s64 = ctx.r11.s64 + 24272;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_8221D0B0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221D0B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x8221d0dc
	if (ctx.cr6.eq) goto loc_8221D0DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221d0b8
	if (ctx.cr6.eq) goto loc_8221D0B8;
loc_8221D0DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221d0fc
	if (ctx.cr6.eq) goto loc_8221D0FC;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,1824
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1824, ctx.xer);
	// blt cr6,0x8221d0b0
	if (ctx.cr6.lt) goto loc_8221D0B0;
	// b 0x8221d080
	goto loc_8221D080;
loc_8221D0FC:
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
	// b 0x8221d084
	goto loc_8221D084;
}

PPC_WEAK_FUNC(sub_8221D040) {
	__imp__sub_8221D040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D11C) {
	__imp__sub_8221D11C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221D130;
	sub_822ACB68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,-29624
	ctx.r5.s64 = ctx.r11.s64 + -29624;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x8221D14C;
	sub_8221EE40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214a20
	ctx.lr = 0x8221D158;
	sub_82214A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d174
	if (!ctx.cr6.eq) goto loc_8221D174;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// bl 0x822e84f0
	ctx.lr = 0x8221D170;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221D174;
	sub_822AD350(ctx, base);
loc_8221D174:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221D120) {
	__imp__sub_8221D120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D188) {
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
	// bne cr6,0x8221d1c0
	if (!ctx.cr6.eq) goto loc_8221D1C0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221d1d0
	goto loc_8221D1D0;
loc_8221D1C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221D1CC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221D1D0:
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lhz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
	// lhz r9,268(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d220
	if (ctx.cr6.eq) goto loc_8221D220;
	// lhz r10,270(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 270);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221d220
	if (ctx.cr6.eq) goto loc_8221D220;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8221d220
	if (ctx.cr6.eq) goto loc_8221D220;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8221d220
	if (ctx.cr6.eq) goto loc_8221D220;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d220
	if (!ctx.cr6.eq) goto loc_8221D220;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-26832
	ctx.r3.s64 = ctx.r11.s64 + -26832;
	// bl 0x822ad350
	ctx.lr = 0x8221D220;
	sub_822AD350(ctx, base);
loc_8221D220:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221D228;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221d290
	if (!ctx.cr6.eq) goto loc_8221D290;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221D238;
	sub_822B2288(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x822e8058
	ctx.lr = 0x8221D244;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d290
	if (!ctx.cr6.eq) goto loc_8221D290;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d274
	if (!ctx.cr6.eq) goto loc_8221D274;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
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
loc_8221D274:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,5032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5032, ctx.r10.u32);
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
loc_8221D290:
	// bl 0x822acb68
	ctx.lr = 0x8221D294;
	sub_822ACB68(ctx, base);
	// bl 0x8221d120
	ctx.lr = 0x8221D298;
	sub_8221D120(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d2bc
	if (!ctx.cr6.eq) goto loc_8221D2BC;
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
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
loc_8221D2BC:
	// stw r3,5032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5032, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8221D188) {
	__imp__sub_8221D188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D2D4) {
	__imp__sub_8221D2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// bne cr6,0x8221d32c
	if (!ctx.cr6.eq) goto loc_8221D32C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,1156(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1156);
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
	// bne cr6,0x8221d33c
	if (!ctx.cr6.eq) goto loc_8221D33C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221D324;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8221D328;
	sub_822AD548(ctx, base);
	// b 0x8221d33c
	goto loc_8221D33C;
loc_8221D32C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221D338;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221D33C:
	// bl 0x822acb68
	ctx.lr = 0x8221D340;
	sub_822ACB68(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x8221D344;
	sub_822ACB68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,-29624
	ctx.r5.s64 = ctx.r11.s64 + -29624;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x8221D360;
	sub_8221EE40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214a20
	ctx.lr = 0x8221D36C;
	sub_82214A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d388
	if (!ctx.cr6.eq) goto loc_8221D388;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// bl 0x822e84f0
	ctx.lr = 0x8221D384;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221D388;
	sub_822AD350(ctx, base);
loc_8221D388:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r7,r11,45004
	ctx.r7.u64 = ctx.r11.u64 | 45004;
	// ori r6,r9,45008
	ctx.r6.u64 = ctx.r9.u64 | 45008;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stwx r8,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221D2D8) {
	__imp__sub_8221D2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D3C4) {
	__imp__sub_8221D3C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8221D3D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221D3D8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8221d3ec
	if (!ctx.cr6.lt) goto loc_8221D3EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x8221D3EC;
	sub_822AD350(ctx, base);
loc_8221D3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8221D3F4;
	sub_822B1C50(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x8221D400;
	sub_82229BF0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2168
	ctx.lr = 0x8221D40C;
	sub_822B2168(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221D414;
	sub_822A13A0(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x823dfb30
	ctx.lr = 0x8221D41C;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d434
	if (ctx.cr6.eq) goto loc_8221D434;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-31428
	ctx.r4.s64 = ctx.r11.s64 + -31428;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D434;
	sub_822AD4E0(ctx, base);
loc_8221D434:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b29b0
	ctx.lr = 0x8221D43C;
	sub_822B29B0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x8221d574
	if (!ctx.cr6.eq) goto loc_8221D574;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8221add8
	ctx.lr = 0x8221D450;
	sub_8221ADD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3a58
	ctx.lr = 0x8221D458;
	sub_822A3A58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x8221d484
	if (!ctx.cr6.gt) goto loc_8221D484;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x822e84f0
	ctx.lr = 0x8221D478;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D484;
	sub_822AD4E0(ctx, base);
loc_8221D484:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aca58
	ctx.lr = 0x8221D4A0;
	sub_822ACA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d4d0
	if (!ctx.cr6.eq) goto loc_8221D4D0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822acb50
	ctx.lr = 0x8221D4B0;
	sub_822ACB50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-26624
	ctx.r3.s64 = ctx.r11.s64 + -26624;
	// bl 0x822e84f0
	ctx.lr = 0x8221D4C4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D4D0;
	sub_822AD4E0(ctx, base);
loc_8221D4D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d5e0
	if (ctx.cr6.eq) goto loc_8221D5E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r26,r11,-17496
	ctx.r26.s64 = ctx.r11.s64 + -17496;
	// addi r25,r10,26552
	ctx.r25.s64 = ctx.r10.s64 + 26552;
	// addi r24,r9,-26660
	ctx.r24.s64 = ctx.r9.s64 + -26660;
loc_8221D500:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822a4460
	ctx.lr = 0x8221D508;
	sub_822A4460(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221d528
	if (!ctx.cr6.eq) goto loc_8221D528;
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x8221d534
	goto loc_8221D534;
loc_8221D528:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ad548
	ctx.lr = 0x8221D530;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221D534:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d550
	if (!ctx.cr6.eq) goto loc_8221D550;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x8221D54C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221D550;
	sub_822AD350(ctx, base);
loc_8221D550:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// or r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 | ctx.r28.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221d500
	if (ctx.cr6.lt) goto loc_8221D500;
	// b 0x8221d5e0
	goto loc_8221D5E0;
loc_8221D574:
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x8221d5c0
	if (!ctx.cr6.eq) goto loc_8221D5C0;
	// bl 0x82229bf0
	ctx.lr = 0x8221D584;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d5b0
	if (!ctx.cr6.eq) goto loc_8221D5B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r3,r11,-26660
	ctx.r3.s64 = ctx.r11.s64 + -26660;
	// bl 0x822e84f0
	ctx.lr = 0x8221D5A4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D5B0;
	sub_822AD4E0(ctx, base);
loc_8221D5B0:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8221d5e0
	goto loc_8221D5E0;
loc_8221D5C0:
	// bl 0x822b2938
	ctx.lr = 0x8221D5C4;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26720
	ctx.r3.s64 = ctx.r11.s64 + -26720;
	// bl 0x822e84f0
	ctx.lr = 0x8221D5D4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D5E0;
	sub_822AD4E0(ctx, base);
loc_8221D5E0:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82219478
	ctx.lr = 0x8221D5F4;
	sub_82219478(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221D3C8) {
	__imp__sub_8221D3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D5FC) {
	__imp__sub_8221D5FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221D608;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db808
	ctx.lr = 0x8221D618;
	sub_822DB808(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db8f0
	ctx.lr = 0x8221D620;
	sub_822DB8F0(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db808
	ctx.lr = 0x8221D634;
	sub_822DB808(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8f0
	ctx.lr = 0x8221D63C;
	sub_822DB8F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221D648;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x8221d674
	if (ctx.cr6.eq) goto loc_8221D674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2938
	ctx.lr = 0x8221D658;
	sub_822B2938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// bl 0x822e84f0
	ctx.lr = 0x8221D668;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D674;
	sub_822AD4E0(ctx, base);
loc_8221D674:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2788
	ctx.lr = 0x8221D67C;
	sub_822B2788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3a58
	ctx.lr = 0x8221D684;
	sub_822A3A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// ble cr6,0x8221d6b0
	if (!ctx.cr6.gt) goto loc_8221D6B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221D6A4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D6B0;
	sub_822AD4E0(ctx, base);
loc_8221D6B0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ac8f0
	ctx.lr = 0x8221D6C8;
	sub_822AC8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d6f8
	if (!ctx.cr6.eq) goto loc_8221D6F8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822acb50
	ctx.lr = 0x8221D6D8;
	sub_822ACB50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-26480
	ctx.r3.s64 = ctx.r11.s64 + -26480;
	// bl 0x822e84f0
	ctx.lr = 0x8221D6EC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D6F8;
	sub_822AD4E0(ctx, base);
loc_8221D6F8:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,15492
	ctx.r4.s64 = ctx.r11.s64 + 15492;
	// bl 0x822b2498
	ctx.lr = 0x8221D708;
	sub_822B2498(ctx, base);
	// bl 0x822aabe8
	ctx.lr = 0x8221D70C;
	sub_822AABE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221d76c
	if (ctx.cr6.eq) goto loc_8221D76C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// addi r26,r11,-26544
	ctx.r26.s64 = ctx.r11.s64 + -26544;
loc_8221D728:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822ac9b8
	ctx.lr = 0x8221D734;
	sub_822AC9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d754
	if (!ctx.cr6.eq) goto loc_8221D754;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221D748;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221D754;
	sub_822AD4E0(ctx, base);
loc_8221D754:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// blt cr6,0x8221d728
	if (ctx.cr6.lt) goto loc_8221D728;
loc_8221D76C:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r6,r10,-20624
	ctx.r6.s64 = ctx.r10.s64 + -20624;
	// subf r9,r27,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r27.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// bl 0x8221e2f8
	ctx.lr = 0x8221D78C;
	sub_8221E2F8(ctx, base);
	// bl 0x822ad190
	ctx.lr = 0x8221D790;
	sub_822AD190(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221d7b4
	if (ctx.cr6.eq) goto loc_8221D7B4;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8221D7A0:
	// lwzu r3,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822acde8
	ctx.lr = 0x8221D7A8;
	sub_822ACDE8(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221D7AC;
	sub_822AD208(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8221d7a0
	if (!ctx.cr0.eq) goto loc_8221D7A0;
loc_8221D7B4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8d8
	ctx.lr = 0x8221D7BC;
	sub_822DB8D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db8d8
	ctx.lr = 0x8221D7C4;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221D600) {
	__imp__sub_8221D600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D7CC) {
	__imp__sub_8221D7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D7D0) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221D7D0) {
	__imp__sub_8221D7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D844) {
	__imp__sub_8221D844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221D850;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x8221d8e4
	if (!ctx.cr6.lt) goto loc_8221D8E4;
loc_8221D880:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221D898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d8e4
	if (ctx.cr6.eq) goto loc_8221D8E4;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// blt cr6,0x8221d880
	if (ctx.cr6.lt) goto loc_8221D880;
loc_8221D8E4:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221D848) {
	__imp__sub_8221D848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221D920;
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
	ctx.lr = 0x8221D944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d95c
	if (ctx.cr6.eq) goto loc_8221D95C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221d7d0
	ctx.lr = 0x8221D95C;
	sub_8221D7D0(ctx, base);
loc_8221D95C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8221D96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d984
	if (ctx.cr6.eq) goto loc_8221D984;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221d7d0
	ctx.lr = 0x8221D984;
	sub_8221D7D0(ctx, base);
loc_8221D984:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221D994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d9ac
	if (ctx.cr6.eq) goto loc_8221D9AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221d7d0
	ctx.lr = 0x8221D9AC;
	sub_8221D7D0(ctx, base);
loc_8221D9AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221D918) {
	__imp__sub_8221D918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221D9B4) {
	__imp__sub_8221D9B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221D9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8221D9C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8221da5c
	if (!ctx.cr6.lt) goto loc_8221DA5C;
loc_8221D9F0:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// bctrl 
	ctx.lr = 0x8221DA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221da14
	if (ctx.cr6.eq) goto loc_8221DA14;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8221DA14:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// stwx r6,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// blt cr6,0x8221d9f0
	if (ctx.cr6.lt) goto loc_8221D9F0;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_8221DA5C:
	// bne cr6,0x8221da98
	if (!ctx.cr6.eq) goto loc_8221DA98;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lwz r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stwx r7,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r7.u32);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
loc_8221DA98:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221d848
	ctx.lr = 0x8221DAB4;
	sub_8221D848(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221D9B8) {
	__imp__sub_8221D9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221DABC) {
	__imp__sub_8221DABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221DAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221DAC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8221db54
	if (!ctx.cr6.gt) goto loc_8221DB54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r11,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8221d918
	ctx.lr = 0x8221DB0C;
	sub_8221D918(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x8221d918
	ctx.lr = 0x8221DB20;
	sub_8221D918(ctx, base);
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
	// bl 0x8221d918
	ctx.lr = 0x8221DB38;
	sub_8221D918(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221d918
	ctx.lr = 0x8221DB4C;
	sub_8221D918(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8221DB54:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221d918
	ctx.lr = 0x8221DB60;
	sub_8221D918(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221DAC0) {
	__imp__sub_8221DAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221DB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8221DB70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r28,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 4;
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
	// ble 0x8221dbc0
	if (!ctx.cr0.gt) goto loc_8221DBC0;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8221DB98:
	// ldu r6,-16(r30)
	ea = -16 + ctx.r30.u32;
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
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x8221d9b8
	ctx.lr = 0x8221DBB8;
	sub_8221D9B8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8221db98
	if (ctx.cr6.gt) goto loc_8221DB98;
loc_8221DBC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221DB68) {
	__imp__sub_8221DB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221DBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8221DBD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
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
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221dac0
	ctx.lr = 0x8221DC0C;
	sub_8221DAC0(ctx, base);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8221dc60
	if (!ctx.cr6.lt) goto loc_8221DC60;
loc_8221DC18:
	// addi r30,r31,-16
	ctx.r30.s64 = ctx.r31.s64 + -16;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8221DC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dc60
	if (!ctx.cr6.eq) goto loc_8221DC60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221DC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dc60
	if (!ctx.cr6.eq) goto loc_8221DC60;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8221dc18
	if (ctx.cr6.lt) goto loc_8221DC18;
loc_8221DC60:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8221dcac
	if (!ctx.cr6.lt) goto loc_8221DCAC;
loc_8221DC68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8221DC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dcac
	if (!ctx.cr6.eq) goto loc_8221DCAC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221DC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dcac
	if (!ctx.cr6.eq) goto loc_8221DCAC;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8221dc68
	if (ctx.cr6.lt) goto loc_8221DC68;
loc_8221DCAC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8221DCB4:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8221dd78
	if (!ctx.cr6.lt) goto loc_8221DD78;
loc_8221DCBC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221DCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dd6c
	if (!ctx.cr6.eq) goto loc_8221DD6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8221DCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dd78
	if (!ctx.cr6.eq) goto loc_8221DD78;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8221dd6c
	if (ctx.cr6.eq) goto loc_8221DD6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
loc_8221DD6C:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8221dcbc
	if (ctx.cr6.lt) goto loc_8221DCBC;
loc_8221DD78:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8221de44
	if (!ctx.cr6.gt) goto loc_8221DE44;
	// addi r30,r27,-16
	ctx.r30.s64 = ctx.r27.s64 + -16;
loc_8221DD84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8221DD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221de30
	if (!ctx.cr6.eq) goto loc_8221DE30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221DDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221de40
	if (!ctx.cr6.eq) goto loc_8221DE40;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8221de30
	if (ctx.cr6.eq) goto loc_8221DE30;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_8221DE30:
	// addi r27,r27,-16
	ctx.r27.s64 = ctx.r27.s64 + -16;
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8221dd84
	if (ctx.cr6.lt) goto loc_8221DD84;
loc_8221DE40:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_8221DE44:
	// bne cr6,0x8221df50
	if (!ctx.cr6.eq) goto loc_8221DF50;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8221e0c0
	if (ctx.cr6.eq) goto loc_8221E0C0;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8221dec8
	if (ctx.cr6.eq) goto loc_8221DEC8;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8221dec8
	if (ctx.cr6.eq) goto loc_8221DEC8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
loc_8221DEC8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221dcb4
	if (ctx.cr6.eq) goto loc_8221DCB4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// b 0x8221dcb4
	goto loc_8221DCB4;
loc_8221DF50:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-16
	ctx.r27.s64 = ctx.r27.s64 + -16;
	// bne cr6,0x8221e048
	if (!ctx.cr6.eq) goto loc_8221E048;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8221dfd0
	if (ctx.cr6.eq) goto loc_8221DFD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_8221DFD0:
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8221dcb4
	if (ctx.cr6.eq) goto loc_8221DCB4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// b 0x8221dcb4
	goto loc_8221DCB4;
loc_8221E048:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8221e0b8
	if (ctx.cr6.eq) goto loc_8221E0B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r7,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r9,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r9.u32);
loc_8221E0B8:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// b 0x8221dcb4
	goto loc_8221DCB4;
loc_8221E0C0:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_8221DBC8) {
	__imp__sub_8221DBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221E0D4) {
	__imp__sub_8221E0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8221E0E0;
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
	// beq cr6,0x8221e244
	if (ctx.cr6.eq) goto loc_8221E244;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8221e244
	if (ctx.cr6.eq) goto loc_8221E244;
	// addi r26,r29,-16
	ctx.r26.s64 = ctx.r29.s64 + -16;
loc_8221E108:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x8221E140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221e1ac
	if (ctx.cr6.eq) goto loc_8221E1AC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8221e184
	if (ctx.cr6.eq) goto loc_8221E184;
loc_8221E158:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// bne cr6,0x8221e158
	if (!ctx.cr6.eq) goto loc_8221E158;
loc_8221E184:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// stw r7,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r7.u32);
	// b 0x8221e234
	goto loc_8221E234;
loc_8221E1AC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8221E1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e210
	if (ctx.cr6.eq) goto loc_8221E210;
loc_8221E1CC:
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
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8221E204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8221e1cc
	if (!ctx.cr6.eq) goto loc_8221E1CC;
loc_8221E210:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
loc_8221E234:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8221e108
	if (!ctx.cr6.eq) goto loc_8221E108;
loc_8221E244:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E0D8) {
	__imp__sub_8221E0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221E24C) {
	__imp__sub_8221E24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221E258;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8221e2f0
	if (!ctx.cr6.gt) goto loc_8221E2F0;
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
loc_8221E278:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stwx r7,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r27.u32);
	// stw r26,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r26.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x8221d9b8
	ctx.lr = 0x8221E2E0;
	sub_8221D9B8(ctx, base);
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8221e278
	if (ctx.cr6.gt) goto loc_8221E278;
loc_8221E2F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E250) {
	__imp__sub_8221E250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221E300;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8221e3b0
	if (!ctx.cr6.gt) goto loc_8221E3B0;
loc_8221E324:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8221e3d4
	if (!ctx.cr6.gt) goto loc_8221E3D4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221dbc8
	ctx.lr = 0x8221E340;
	sub_8221DBC8(ctx, base);
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
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r6,r8,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x8221e390
	if (!ctx.cr6.lt) goto loc_8221E390;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e2f8
	ctx.lr = 0x8221E388;
	sub_8221E2F8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8221e3a0
	goto loc_8221E3A0;
loc_8221E390:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221e2f8
	ctx.lr = 0x8221E39C;
	sub_8221E2F8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8221E3A0:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8221e324
	if (ctx.cr6.gt) goto loc_8221E324;
loc_8221E3B0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8221e3cc
	if (!ctx.cr6.gt) goto loc_8221E3CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e0d8
	ctx.lr = 0x8221E3CC;
	sub_8221E0D8(ctx, base);
loc_8221E3CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8221E3D4:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8221e3b0
	if (!ctx.cr6.gt) goto loc_8221E3B0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8221e3fc
	if (!ctx.cr6.gt) goto loc_8221E3FC;
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
	// bl 0x8221db68
	ctx.lr = 0x8221E3FC;
	sub_8221DB68(ctx, base);
loc_8221E3FC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e250
	ctx.lr = 0x8221E40C;
	sub_8221E250(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E2F8) {
	__imp__sub_8221E2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221E414) {
	__imp__sub_8221E414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8221E420;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x821fc6d8
	ctx.lr = 0x8221E438;
	sub_821FC6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e450
	if (!ctx.cr6.eq) goto loc_8221E450;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8221E450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221e470
	if (ctx.cr6.lt) goto loc_8221E470;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21744
	ctx.r4.s64 = ctx.r11.s64 + -21744;
	// bl 0x822830e8
	ctx.lr = 0x8221E470;
	sub_822830E8(ctx, base);
loc_8221E470:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8221e4b0
	if (!ctx.cr6.eq) goto loc_8221E4B0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8221e4b0
	if (ctx.cr6.eq) goto loc_8221E4B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-21788
	ctx.r4.s64 = ctx.r11.s64 + -21788;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8221E4B0;
	sub_822830E8(ctx, base);
loc_8221E4B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E418) {
	__imp__sub_8221E418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221E4BC) {
	__imp__sub_8221E4BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E4C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,-21676
	ctx.r4.s64 = ctx.r10.s64 + -21676;
	// lwz r11,-380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -380);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x8221E4F8;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e558
	if (ctx.cr6.eq) goto loc_8221E558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-21680
	ctx.r4.s64 = ctx.r11.s64 + -21680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x8221E514;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e558
	if (ctx.cr6.eq) goto loc_8221E558;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,18556
	ctx.r5.s64 = ctx.r11.s64 + 18556;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8221E534;
	sub_822E8368(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,17888
	ctx.r5.s64 = ctx.r10.s64 + 17888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e418
	ctx.lr = 0x8221E54C;
	sub_8221E418(ctx, base);
	// lis r9,-32018
	ctx.r9.s64 = -2098331648;
	// stw r3,6688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6688, ctx.r3.u32);
	// b 0x8221e564
	goto loc_8221E564;
loc_8221E558:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6688, ctx.r11.u32);
loc_8221E564:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_8221E4C0) {
	__imp__sub_8221E4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221E57C) {
	__imp__sub_8221E57C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E580) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc2a0
	sub_822DC2A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E580) {
	__imp__sub_8221E580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221E584) {
	__imp__sub_8221E584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221E590;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221e6d8
	if (ctx.cr6.eq) goto loc_8221E6D8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8221e6d8
	if (!ctx.cr6.eq) goto loc_8221E6D8;
	// lhz r3,14(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221e60c
	if (!ctx.cr6.eq) goto loc_8221E60C;
	// lfs f3,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r11,13600
	ctx.r9.s64 = ctx.r11.s64 + 13600;
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
	// addi r4,r10,-21608
	ctx.r4.s64 = ctx.r10.s64 + -21608;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,64(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// bl 0x82280b08
	ctx.lr = 0x8221E5FC;
	sub_82280B08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8221E60C:
	// bl 0x822a13a0
	ctx.lr = 0x8221E610;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822daed8
	ctx.lr = 0x8221E620;
	sub_822DAED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne cr6,0x8221e678
	if (!ctx.cr6.eq) goto loc_8221E678;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,18564
	ctx.r5.s64 = ctx.r11.s64 + 18564;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8221E644;
	sub_822E8368(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,17888
	ctx.r5.s64 = ctx.r10.s64 + 17888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e418
	ctx.lr = 0x8221E65C;
	sub_8221E418(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r9,-6784
	ctx.r6.s64 = ctx.r9.s64 + -6784;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822daf60
	ctx.lr = 0x8221E678;
	sub_822DAF60(ctx, base);
loc_8221E678:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221e6d8
	if (!ctx.cr6.eq) goto loc_8221E6D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lfs f2,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r10,13600
	ctx.r6.s64 = ctx.r10.s64 + 13600;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// addi r4,r5,-21672
	ctx.r4.s64 = ctx.r5.s64 + -21672;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280b08
	ctx.lr = 0x8221E6D0;
	sub_82280B08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_8221E6D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E588) {
	__imp__sub_8221E588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x82234590
	sub_82234590(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E6E0) {
	__imp__sub_8221E6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221E6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8221e72c
	if (ctx.cr6.eq) goto loc_8221E72C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r5,r11,17912
	ctx.r5.s64 = ctx.r11.s64 + 17912;
	// bl 0x822e8368
	ctx.lr = 0x8221E728;
	sub_822E8368(ctx, base);
	// b 0x8221e73c
	goto loc_8221E73C;
loc_8221E72C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,17896
	ctx.r5.s64 = ctx.r11.s64 + 17896;
	// bl 0x822e8368
	ctx.lr = 0x8221E73C;
	sub_822E8368(ctx, base);
loc_8221E73C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,17888
	ctx.r5.s64 = ctx.r11.s64 + 17888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e418
	ctx.lr = 0x8221E754;
	sub_8221E418(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x821fc6d8
	ctx.lr = 0x8221E75C;
	sub_821FC6D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e770
	if (!ctx.cr6.eq) goto loc_8221E770;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221e7a8
	goto loc_8221E7A8;
loc_8221E770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221e790
	if (ctx.cr6.lt) goto loc_8221E790;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21744
	ctx.r4.s64 = ctx.r11.s64 + -21744;
	// bl 0x822830e8
	ctx.lr = 0x8221E790;
	sub_822830E8(ctx, base);
loc_8221E790:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8221E7A8:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220ec38
	ctx.lr = 0x8221E7B4;
	sub_8220EC38(ctx, base);
	// sth r3,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r3.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E6F0) {
	__imp__sub_8221E6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221E7C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,6688
	ctx.r31.s64 = ctx.r11.s64 + 6688;
	// addi r5,r10,24424
	ctx.r5.s64 = ctx.r10.s64 + 24424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E7EC;
	sub_8221E6F0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,26056
	ctx.r5.s64 = ctx.r9.s64 + 26056;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E804;
	sub_8221E6F0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,18084
	ctx.r5.s64 = ctx.r8.s64 + 18084;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E81C;
	sub_8221E6F0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,18072
	ctx.r5.s64 = ctx.r7.s64 + 18072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E834;
	sub_8221E6F0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,18060
	ctx.r5.s64 = ctx.r6.s64 + 18060;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E84C;
	sub_8221E6F0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,18048
	ctx.r5.s64 = ctx.r5.s64 + 18048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E864;
	sub_8221E6F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r4,18036
	ctx.r5.s64 = ctx.r4.s64 + 18036;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E87C;
	sub_8221E6F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,26108
	ctx.r5.s64 = ctx.r11.s64 + 26108;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E894;
	sub_8221E6F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,18012
	ctx.r5.s64 = ctx.r10.s64 + 18012;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E8AC;
	sub_8221E6F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r9,18004
	ctx.r29.s64 = ctx.r9.s64 + 18004;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E8C8;
	sub_8221E6F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r8,26348
	ctx.r5.s64 = ctx.r8.s64 + 26348;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E8E0;
	sub_8221E6F0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,17996
	ctx.r5.s64 = ctx.r7.s64 + 17996;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E8F8;
	sub_8221E6F0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,17984
	ctx.r5.s64 = ctx.r6.s64 + 17984;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E910;
	sub_8221E6F0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,17976
	ctx.r5.s64 = ctx.r5.s64 + 17976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E928;
	sub_8221E6F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r4,-31104
	ctx.r5.s64 = ctx.r4.s64 + -31104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E940;
	sub_8221E6F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,17968
	ctx.r5.s64 = ctx.r11.s64 + 17968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E958;
	sub_8221E6F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,17956
	ctx.r5.s64 = ctx.r10.s64 + 17956;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E970;
	sub_8221E6F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,17932
	ctx.r4.s64 = ctx.r9.s64 + 17932;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e418
	ctx.lr = 0x8221E988;
	sub_8221E418(ctx, base);
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r7,r8,-500
	ctx.r7.s64 = ctx.r8.s64 + -500;
	// addi r10,r31,2616
	ctx.r10.s64 = ctx.r31.s64 + 2616;
	// addi r9,r31,5220
	ctx.r9.s64 = ctx.r31.s64 + 5220;
	// stw r11,-500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -500, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// bl 0x821b8e58
	ctx.lr = 0x8221E9B0;
	sub_821B8E58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E7C0) {
	__imp__sub_8221E7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221E9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221E9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,6688
	ctx.r31.s64 = ctx.r11.s64 + 6688;
	// addi r29,r10,18216
	ctx.r29.s64 = ctx.r10.s64 + 18216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r9,18204
	ctx.r5.s64 = ctx.r9.s64 + 18204;
	// addi r4,r31,2616
	ctx.r4.s64 = ctx.r31.s64 + 2616;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221e6f0
	ctx.lr = 0x8221E9EC;
	sub_8221E6F0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,18192
	ctx.r5.s64 = ctx.r8.s64 + 18192;
	// addi r4,r31,2700
	ctx.r4.s64 = ctx.r31.s64 + 2700;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA04;
	sub_8221E6F0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,18180
	ctx.r5.s64 = ctx.r7.s64 + 18180;
	// addi r4,r31,2724
	ctx.r4.s64 = ctx.r31.s64 + 2724;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA1C;
	sub_8221E6F0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,18168
	ctx.r5.s64 = ctx.r5.s64 + 18168;
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA34;
	sub_8221E6F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r4,18156
	ctx.r5.s64 = ctx.r4.s64 + 18156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2748
	ctx.r4.s64 = ctx.r31.s64 + 2748;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA4C;
	sub_8221E6F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,18140
	ctx.r5.s64 = ctx.r11.s64 + 18140;
	// addi r4,r31,2760
	ctx.r4.s64 = ctx.r31.s64 + 2760;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA64;
	sub_8221E6F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,18128
	ctx.r5.s64 = ctx.r10.s64 + 18128;
	// addi r4,r31,2772
	ctx.r4.s64 = ctx.r31.s64 + 2772;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA7C;
	sub_8221E6F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,18116
	ctx.r5.s64 = ctx.r9.s64 + 18116;
	// addi r4,r31,2796
	ctx.r4.s64 = ctx.r31.s64 + 2796;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EA94;
	sub_8221E6F0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r8,18100
	ctx.r5.s64 = ctx.r8.s64 + 18100;
	// addi r4,r31,2808
	ctx.r4.s64 = ctx.r31.s64 + 2808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EAAC;
	sub_8221E6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221E9B8) {
	__imp__sub_8221E9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221EAB4) {
	__imp__sub_8221EAB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221EAC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,6688
	ctx.r31.s64 = ctx.r11.s64 + 6688;
	// addi r29,r10,18544
	ctx.r29.s64 = ctx.r10.s64 + 18544;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r9,18528
	ctx.r5.s64 = ctx.r9.s64 + 18528;
	// addi r4,r31,5220
	ctx.r4.s64 = ctx.r31.s64 + 5220;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EAEC;
	sub_8221E6F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,26056
	ctx.r5.s64 = ctx.r8.s64 + 26056;
	// addi r4,r31,5232
	ctx.r4.s64 = ctx.r31.s64 + 5232;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB04;
	sub_8221E6F0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,18480
	ctx.r5.s64 = ctx.r7.s64 + 18480;
	// addi r4,r31,5244
	ctx.r4.s64 = ctx.r31.s64 + 5244;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB1C;
	sub_8221E6F0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,18456
	ctx.r5.s64 = ctx.r5.s64 + 18456;
	// addi r4,r31,5268
	ctx.r4.s64 = ctx.r31.s64 + 5268;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB34;
	sub_8221E6F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r4,18432
	ctx.r5.s64 = ctx.r4.s64 + 18432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,5292
	ctx.r4.s64 = ctx.r31.s64 + 5292;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB4C;
	sub_8221E6F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,18412
	ctx.r5.s64 = ctx.r11.s64 + 18412;
	// addi r4,r31,5256
	ctx.r4.s64 = ctx.r31.s64 + 5256;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB64;
	sub_8221E6F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,18388
	ctx.r5.s64 = ctx.r10.s64 + 18388;
	// addi r4,r31,5280
	ctx.r4.s64 = ctx.r31.s64 + 5280;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB7C;
	sub_8221E6F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,18372
	ctx.r5.s64 = ctx.r9.s64 + 18372;
	// addi r4,r31,5304
	ctx.r4.s64 = ctx.r31.s64 + 5304;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EB94;
	sub_8221E6F0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,18344
	ctx.r5.s64 = ctx.r8.s64 + 18344;
	// addi r4,r31,5388
	ctx.r4.s64 = ctx.r31.s64 + 5388;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EBAC;
	sub_8221E6F0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,18328
	ctx.r5.s64 = ctx.r7.s64 + 18328;
	// addi r4,r31,5328
	ctx.r4.s64 = ctx.r31.s64 + 5328;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EBC4;
	sub_8221E6F0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,18312
	ctx.r5.s64 = ctx.r5.s64 + 18312;
	// addi r4,r31,5340
	ctx.r4.s64 = ctx.r31.s64 + 5340;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EBDC;
	sub_8221E6F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r4,18296
	ctx.r5.s64 = ctx.r4.s64 + 18296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,5352
	ctx.r4.s64 = ctx.r31.s64 + 5352;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EBF4;
	sub_8221E6F0(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r3,18276
	ctx.r5.s64 = ctx.r3.s64 + 18276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,5364
	ctx.r4.s64 = ctx.r31.s64 + 5364;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EC0C;
	sub_8221E6F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,18260
	ctx.r5.s64 = ctx.r11.s64 + 18260;
	// addi r4,r31,5376
	ctx.r4.s64 = ctx.r31.s64 + 5376;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EC24;
	sub_8221E6F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,18240
	ctx.r5.s64 = ctx.r10.s64 + 18240;
	// addi r4,r31,5400
	ctx.r4.s64 = ctx.r31.s64 + 5400;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EC3C;
	sub_8221E6F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r9,18220
	ctx.r5.s64 = ctx.r9.s64 + 18220;
	// addi r4,r31,5412
	ctx.r4.s64 = ctx.r31.s64 + 5412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e6f0
	ctx.lr = 0x8221EC54;
	sub_8221E6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221EAB8) {
	__imp__sub_8221EAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221EC5C) {
	__imp__sub_8221EC5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221EC68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8221ece4
	if (!ctx.cr6.gt) goto loc_8221ECE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-21344
	ctx.r27.s64 = ctx.r11.s64 + -21344;
loc_8221EC90:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// beq cr6,0x8221ecb0
	if (ctx.cr6.eq) goto loc_8221ECB0;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x8221ecb0
	if (ctx.cr6.eq) goto loc_8221ECB0;
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// bne cr6,0x8221ecc4
	if (!ctx.cr6.eq) goto loc_8221ECC4;
loc_8221ECB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221ECB8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x8221ECC4;
	sub_822AD4E0(ctx, base);
loc_8221ECC4:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df980
	ctx.lr = 0x8221ECD0;
	sub_823DF980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221ecf0
	if (!ctx.cr6.eq) goto loc_8221ECF0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8221ec90
	if (ctx.cr6.lt) goto loc_8221EC90;
loc_8221ECE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8221ECF0:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ed5c
	if (ctx.cr6.eq) goto loc_8221ED5C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ed44
	if (ctx.cr6.eq) goto loc_8221ED44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-21416
	ctx.r3.s64 = ctx.r11.s64 + -21416;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221ED2C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220f0e0
	ctx.lr = 0x8221ED38;
	sub_8220F0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8221ED44:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-21544
	ctx.r4.s64 = ctx.r11.s64 + -21544;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280c30
	ctx.lr = 0x8221ED5C;
	sub_82280C30(ctx, base);
loc_8221ED5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221EC60) {
	__imp__sub_8221EC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221ED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221ED70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221eda8
	if (!ctx.cr6.eq) goto loc_8221EDA8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8221EDA8:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8221edd4
	if (ctx.cr6.lt) goto loc_8221EDD4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r11,-21284
	ctx.r3.s64 = ctx.r11.s64 + -21284;
	// bl 0x822e84f0
	ctx.lr = 0x8221EDC8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x8221EDD4;
	sub_822AD4E0(ctx, base);
loc_8221EDD4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r4,r11,-21300
	ctx.r4.s64 = ctx.r11.s64 + -21300;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x823de1f0
	ctx.lr = 0x8221EDE8;
	sub_823DE1F0(ctx, base);
	// addi r3,r31,13
	ctx.r3.s64 = ctx.r31.s64 + 13;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221ED68) {
	__imp__sub_8221ED68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221EDF4) {
	__imp__sub_8221EDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EDF8) {
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
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x8221ee24
	if (!ctx.cr6.lt) goto loc_8221EE24;
	// bl 0x8212ea30
	ctx.lr = 0x8221EE14;
	sub_8212EA30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8221ee28
	if (ctx.cr6.eq) goto loc_8221EE28;
loc_8221EE24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221EE28:
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
}

PPC_WEAK_FUNC(sub_8221EDF8) {
	__imp__sub_8221EDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221EE3C) {
	__imp__sub_8221EE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221EE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x8221EE48;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stb r21,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r21.u8);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x8221f030
	if (ctx.cr6.gt) goto loc_8221F030;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r18,20
	ctx.r18.s64 = 20;
	// li r19,21
	ctx.r19.s64 = 21;
	// li r22,46
	ctx.r22.s64 = 46;
	// addi r23,r11,-21284
	ctx.r23.s64 = ctx.r11.s64 + -21284;
loc_8221EE88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b28d0
	ctx.lr = 0x8221EE90;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x8221ef14
	if (!ctx.cr6.eq) goto loc_8221EF14;
	// bl 0x822b2470
	ctx.lr = 0x8221EEA0;
	sub_822B2470(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221EEA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221eea8
	if (!ctx.cr6.eq) goto loc_8221EEA8;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8220f0e8
	ctx.lr = 0x8221EED4;
	sub_8220F0E8(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8221ef00
	if (ctx.cr6.lt) goto loc_8221EF00;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221EEF4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x8221EF00;
	sub_822AD4E0(ctx, base);
loc_8221EF00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221efc4
	if (ctx.cr6.eq) goto loc_8221EFC4;
	// stbx r18,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r18.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8221efc4
	goto loc_8221EFC4;
loc_8221EF14:
	// bl 0x822b2288
	ctx.lr = 0x8221EF18;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221EF20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ef20
	if (!ctx.cr6.eq) goto loc_8221EF20;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8221ec60
	ctx.lr = 0x8221EF50;
	sub_8221EC60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8221ef88
	if (ctx.cr6.lt) goto loc_8221EF88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221EF7C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x8221EF88;
	sub_822AD4E0(ctx, base);
loc_8221EF88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221ef98
	if (ctx.cr6.eq) goto loc_8221EF98;
	// stbx r19,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r19.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8221EF98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221efc4
	if (ctx.cr6.eq) goto loc_8221EFC4;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221ed68
	ctx.lr = 0x8221EFC0;
	sub_8221ED68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8221EFC4:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221f024
	if (ctx.cr6.eq) goto loc_8221F024;
loc_8221EFD0:
	// lbzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x8221eff4
	if (!ctx.cr6.lt) goto loc_8221EFF4;
	// bl 0x8212ea30
	ctx.lr = 0x8221EFE4;
	sub_8212EA30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x8221eff8
	if (ctx.cr6.eq) goto loc_8221EFF8;
loc_8221EFF4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221EFF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f00c
	if (!ctx.cr6.eq) goto loc_8221F00C;
	// stbx r22,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r22.u8);
	// b 0x8221f014
	goto loc_8221F014;
loc_8221F00C:
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// stbx r11,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
loc_8221F014:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8221efd0
	if (ctx.cr6.lt) goto loc_8221EFD0;
loc_8221F024:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x8221ee88
	if (!ctx.cr6.gt) goto loc_8221EE88;
loc_8221F030:
	// stbx r21,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r21.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221EE40) {
	__imp__sub_8221EE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F03C) {
	__imp__sub_8221F03C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F040) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221F058;
	sub_822ACB68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,-21240
	ctx.r5.s64 = ctx.r11.s64 + -21240;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x8221F074;
	sub_8221EE40(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-21248
	ctx.r3.s64 = ctx.r10.s64 + -21248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221F088;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x8221F094;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_8221F040) {
	__imp__sub_8221F040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221F0B8;
	sub_822ACB68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,-21240
	ctx.r5.s64 = ctx.r11.s64 + -21240;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x8221F0D4;
	sub_8221EE40(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r10,-25560
	ctx.r4.s64 = ctx.r10.s64 + -25560;
	// addi r3,r9,-21248
	ctx.r3.s64 = ctx.r9.s64 + -21248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822e84f0
	ctx.lr = 0x8221F0EC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x8221F0F8;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F0A8) {
	__imp__sub_8221F0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221F118;
	sub_822ACB68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,-21240
	ctx.r5.s64 = ctx.r11.s64 + -21240;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x8221F134;
	sub_8221EE40(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r10,-25564
	ctx.r4.s64 = ctx.r10.s64 + -25564;
	// addi r3,r9,-21248
	ctx.r3.s64 = ctx.r9.s64 + -21248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822e84f0
	ctx.lr = 0x8221F14C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x8221F158;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F108) {
	__imp__sub_8221F108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F168) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F17C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8221f198
	if (!ctx.cr6.eq) goto loc_8221F198;
	// bl 0x822b29b0
	ctx.lr = 0x8221F18C;
	sub_822B29B0(ctx, base);
	// addi r11,r3,-23
	ctx.r11.s64 = ctx.r3.s64 + -23;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8221F198:
	// bl 0x822acbf8
	ctx.lr = 0x8221F19C;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F168) {
	__imp__sub_8221F168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F1AC) {
	__imp__sub_8221F1AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F1B0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F1C4;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221f224
	if (!ctx.cr6.eq) goto loc_8221F224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221F1D4;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221f224
	if (!ctx.cr6.eq) goto loc_8221F224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221F1E4;
	sub_82229BF0(ctx, base);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f214
	if (ctx.cr6.eq) goto loc_8221F214;
	// lwz r11,3480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221f214
	if (ctx.cr6.eq) goto loc_8221F214;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acbf8
	ctx.lr = 0x8221F204;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F214:
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221f228
	if (ctx.cr6.gt) goto loc_8221F228;
loc_8221F224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F228:
	// bl 0x822acbf8
	ctx.lr = 0x8221F22C;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F1B0) {
	__imp__sub_8221F1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F23C) {
	__imp__sub_8221F23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F240) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F254;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221f2a0
	if (!ctx.cr6.eq) goto loc_8221F2A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221F264;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221f2a0
	if (!ctx.cr6.eq) goto loc_8221F2A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221F274;
	sub_82229BF0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8221f288
	if (ctx.cr6.eq) goto loc_8221F288;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x8221f2a0
	if (!ctx.cr6.eq) goto loc_8221F2A0;
loc_8221F288:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acbf8
	ctx.lr = 0x8221F290;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x8221F2A8;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F240) {
	__imp__sub_8221F240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F2B8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F2CC;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221f2fc
	if (!ctx.cr6.eq) goto loc_8221F2FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221F2DC;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221f2fc
	if (!ctx.cr6.eq) goto loc_8221F2FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221F2EC;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f300
	if (!ctx.cr6.eq) goto loc_8221F300;
loc_8221F2FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F300:
	// bl 0x822acbf8
	ctx.lr = 0x8221F304;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F2B8) {
	__imp__sub_8221F2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F314) {
	__imp__sub_8221F314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F318) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F32C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221f35c
	if (!ctx.cr6.eq) goto loc_8221F35C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221F33C;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221f35c
	if (!ctx.cr6.eq) goto loc_8221F35C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221F34C;
	sub_82229BF0(ctx, base);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f360
	if (!ctx.cr6.eq) goto loc_8221F360;
loc_8221F35C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F360:
	// bl 0x822acbf8
	ctx.lr = 0x8221F364;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F318) {
	__imp__sub_8221F318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F374) {
	__imp__sub_8221F374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F378) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F38C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221f3bc
	if (!ctx.cr6.eq) goto loc_8221F3BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221F39C;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221f3bc
	if (!ctx.cr6.eq) goto loc_8221F3BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221F3AC;
	sub_82229BF0(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f3c0
	if (!ctx.cr6.eq) goto loc_8221F3C0;
loc_8221F3BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F3C0:
	// bl 0x822acbf8
	ctx.lr = 0x8221F3C4;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F378) {
	__imp__sub_8221F378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F3D4) {
	__imp__sub_8221F3D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F3D8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221F3EC;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221f420
	if (!ctx.cr6.eq) goto loc_8221F420;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8221F3FC;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221f420
	if (!ctx.cr6.eq) goto loc_8221F420;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8221F40C;
	sub_82229BF0(ctx, base);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221f424
	if (!ctx.cr6.eq) goto loc_8221F424;
loc_8221F420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F424:
	// bl 0x822acbf8
	ctx.lr = 0x8221F428;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F3D8) {
	__imp__sub_8221F3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F438) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221F44C;
	sub_822B2288(ctx, base);
	// bl 0x822e0220
	ctx.lr = 0x8221F450;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f470
	if (ctx.cr6.eq) goto loc_8221F470;
	// bl 0x822df088
	ctx.lr = 0x8221F45C;
	sub_822DF088(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x8221F460;
	sub_822ACED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F470:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x822aced0
	ctx.lr = 0x8221F47C;
	sub_822ACED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F438) {
	__imp__sub_8221F438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F48C) {
	__imp__sub_8221F48C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F490) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221F4A4;
	sub_822B2288(ctx, base);
	// bl 0x822e0578
	ctx.lr = 0x8221F4A8;
	sub_822E0578(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x8221F4AC;
	sub_823DEAF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x8221F4B0;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F490) {
	__imp__sub_8221F490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F4C0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221F4D4;
	sub_822B2288(ctx, base);
	// bl 0x822e0578
	ctx.lr = 0x8221F4D8;
	sub_822E0578(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x8221F4DC;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x8221F4E4;
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

PPC_WEAK_FUNC(sub_8221F4C0) {
	__imp__sub_8221F4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F4F4) {
	__imp__sub_8221F4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F4F8) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221F514;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x8221F520;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8221f550
	if (!ctx.cr6.eq) goto loc_8221F550;
	// bl 0x822acb68
	ctx.lr = 0x8221F52C;
	sub_822ACB68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,26984
	ctx.r5.s64 = ctx.r11.s64 + 26984;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x8221F548;
	sub_8221EE40(ctx, base);
	// addi r31,r1,1104
	ctx.r31.s64 = ctx.r1.s64 + 1104;
	// b 0x8221f55c
	goto loc_8221F55C;
loc_8221F550:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8221F558;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8221F55C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x8221F56C;
	sub_823DE090(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r7,39
	ctx.r7.s64 = 39;
loc_8221F57C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221f5b0
	if (ctx.cr6.eq) goto loc_8221F5B0;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r6,34
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 34, ctx.xer);
	// bne cr6,0x8221f5a4
	if (!ctx.cr6.eq) goto loc_8221F5A4;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_8221F5A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,8192
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8192, ctx.xer);
	// blt cr6,0x8221f57c
	if (ctx.cr6.lt) goto loc_8221F57C;
loc_8221F5B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de3b0
	ctx.lr = 0x8221F5B8;
	sub_822DE3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f5d8
	if (!ctx.cr6.eq) goto loc_8221F5D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x822e84f0
	ctx.lr = 0x8221F5D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221F5D8;
	sub_822AD350(ctx, base);
loc_8221F5D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0220
	ctx.lr = 0x8221F5E0;
	sub_822E0220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221f600
	if (!ctx.cr6.eq) goto loc_8221F600;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-21084
	ctx.r3.s64 = ctx.r11.s64 + -21084;
	// bl 0x822e84f0
	ctx.lr = 0x8221F5FC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221F600;
	sub_822AD350(ctx, base);
loc_8221F600:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221f61c
	if (!ctx.cr6.eq) goto loc_8221F61C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// bl 0x822ad350
	ctx.lr = 0x8221F61C;
	sub_822AD350(ctx, base);
loc_8221F61C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,849
	ctx.r5.s64 = 849;
	// addi r4,r11,-21224
	ctx.r4.s64 = ctx.r11.s64 + -21224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823384d0
	ctx.lr = 0x8221F630;
	sub_823384D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e2688
	ctx.lr = 0x8221F640;
	sub_822E2688(ctx, base);
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

PPC_WEAK_FUNC(sub_8221F4F8) {
	__imp__sub_8221F4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F658) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221f68c
	if (!ctx.cr6.eq) goto loc_8221F68C;
	// li r3,30
	ctx.r3.s64 = 30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F68C:
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221f6ac
	if (!ctx.cr6.eq) goto loc_8221F6AC;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F6AC:
	// bl 0x8222fca8
	ctx.lr = 0x8221F6B0;
	sub_8222FCA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r3,r11,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F658) {
	__imp__sub_8221F658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221F6D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x8221F6E0;
	sub_822ACB68(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8221f738
	if (!ctx.cr6.lt) goto loc_8221F738;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
loc_8221F6F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b20b8
	ctx.lr = 0x8221F6FC;
	sub_822B20B8(ctx, base);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221f744
	if (ctx.cr6.eq) goto loc_8221F744;
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221f71c
	if (!ctx.cr6.eq) goto loc_8221F71C;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
	// b 0x8221f728
	goto loc_8221F728;
loc_8221F71C:
	// bl 0x8222fca8
	ctx.lr = 0x8221F720;
	sub_8222FCA8(ctx, base);
	// slw r11,r28,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r3.u8 & 0x3F));
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_8221F728:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x822acb68
	ctx.lr = 0x8221F730;
	sub_822ACB68(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221f6f4
	if (ctx.cr6.lt) goto loc_8221F6F4;
loc_8221F738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221F744:
	// ori r3,r30,30
	ctx.r3.u64 = ctx.r30.u64 | 30;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221F6C8) {
	__imp__sub_8221F6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F750) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221f7c0
	if (ctx.cr6.eq) goto loc_8221F7C0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,7188
	ctx.r9.s64 = ctx.r11.s64 + 7188;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8221F784:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8221f7d4
	if (ctx.cr6.eq) goto loc_8221F7D4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8221f784
	if (ctx.cr6.lt) goto loc_8221F784;
	// bl 0x822b2288
	ctx.lr = 0x8221F7AC;
	sub_822B2288(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-21036
	ctx.r3.s64 = ctx.r11.s64 + -21036;
	// bl 0x822e84f0
	ctx.lr = 0x8221F7BC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221F7C0;
	sub_822AD350(ctx, base);
loc_8221F7C0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F7D4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221F750) {
	__imp__sub_8221F750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// subfic r3,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r11.s64;
	// b 0x822acbf8
	sub_822ACBF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221F7E8) {
	__imp__sub_8221F7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F7FC) {
	__imp__sub_8221F7FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221F808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x8221F814;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f830
	if (ctx.cr6.eq) goto loc_8221F830;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221F824;
	sub_822B20B8(ctx, base);
	// bl 0x8221f658
	ctx.lr = 0x8221F828;
	sub_8221F658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8221f834
	goto loc_8221F834;
loc_8221F830:
	// li r30,30
	ctx.r30.s64 = 30;
loc_8221F834:
	// bl 0x822acb68
	ctx.lr = 0x8221F838;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8221f858
	if (!ctx.cr6.gt) goto loc_8221F858;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x8221F848;
	sub_822B20B8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x8221f750
	ctx.lr = 0x8221F850;
	sub_8221F750(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8221f85c
	goto loc_8221F85C;
loc_8221F858:
	// li r31,3
	ctx.r31.s64 = 3;
loc_8221F85C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9b38
	ctx.lr = 0x8221F864;
	sub_821A9B38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f8ac
	if (ctx.cr6.eq) goto loc_8221F8AC;
loc_8221F86C:
	// lwz r11,3480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221f89c
	if (ctx.cr6.eq) goto loc_8221F89C;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f89c
	if (!ctx.cr6.eq) goto loc_8221F89C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221f898
	if (ctx.cr6.eq) goto loc_8221F898;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8221f89c
	if (!ctx.cr6.eq) goto loc_8221F89C;
loc_8221F898:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8221F89C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9b98
	ctx.lr = 0x8221F8A4;
	sub_821A9B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221f86c
	if (!ctx.cr6.eq) goto loc_8221F86C;
loc_8221F8AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822acbf8
	ctx.lr = 0x8221F8B4;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221F800) {
	__imp__sub_8221F800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F8BC) {
	__imp__sub_8221F8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F8C0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8221f6c8
	ctx.lr = 0x8221F8DC;
	sub_8221F6C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221f8ec
	if (!ctx.cr6.eq) goto loc_8221F8EC;
	// li r30,30
	ctx.r30.s64 = 30;
loc_8221F8EC:
	// bl 0x822ad190
	ctx.lr = 0x8221F8F0;
	sub_822AD190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9b38
	ctx.lr = 0x8221F8F8;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f94c
	if (ctx.cr6.eq) goto loc_8221F94C;
loc_8221F904:
	// lwz r11,3480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221f934
	if (ctx.cr6.eq) goto loc_8221F934;
	// lbz r11,350(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 350);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f934
	if (!ctx.cr6.eq) goto loc_8221F934;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221f934
	if (ctx.cr6.eq) goto loc_8221F934;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229b60
	ctx.lr = 0x8221F930;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221F934;
	sub_822AD208(ctx, base);
loc_8221F934:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x8221F940;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221f904
	if (!ctx.cr6.eq) goto loc_8221F904;
loc_8221F94C:
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

PPC_WEAK_FUNC(sub_8221F8C0) {
	__imp__sub_8221F8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221F964) {
	__imp__sub_8221F964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221F968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8221F970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221F978;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f994
	if (ctx.cr6.eq) goto loc_8221F994;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221F988;
	sub_822B20B8(ctx, base);
	// bl 0x8221f658
	ctx.lr = 0x8221F98C;
	sub_8221F658(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8221f998
	goto loc_8221F998;
loc_8221F994:
	// li r29,30
	ctx.r29.s64 = 30;
loc_8221F998:
	// bl 0x822acb68
	ctx.lr = 0x8221F99C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8221f9bc
	if (!ctx.cr6.gt) goto loc_8221F9BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x8221F9AC;
	sub_822B20B8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x8221f750
	ctx.lr = 0x8221F9B4;
	sub_8221F750(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8221f9c0
	goto loc_8221F9C0;
loc_8221F9BC:
	// li r30,3
	ctx.r30.s64 = 3;
loc_8221F9C0:
	// bl 0x822ad190
	ctx.lr = 0x8221F9C4;
	sub_822AD190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a9b38
	ctx.lr = 0x8221F9CC;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fa28
	if (ctx.cr6.eq) goto loc_8221FA28;
loc_8221F9D8:
	// lwz r11,3480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221fa10
	if (ctx.cr6.eq) goto loc_8221FA10;
	// lbz r11,350(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 350);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221fa10
	if (!ctx.cr6.eq) goto loc_8221FA10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221fa04
	if (ctx.cr6.eq) goto loc_8221FA04;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8221fa10
	if (!ctx.cr6.eq) goto loc_8221FA10;
loc_8221FA04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229b60
	ctx.lr = 0x8221FA0C;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221FA10;
	sub_822AD208(ctx, base);
loc_8221FA10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x8221FA1C;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221f9d8
	if (!ctx.cr6.eq) goto loc_8221F9D8;
loc_8221FA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221F968) {
	__imp__sub_8221F968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221FA38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822ad190
	ctx.lr = 0x8221FA40;
	sub_822AD190(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8221fa9c
	if (!ctx.cr6.gt) goto loc_8221FA9C;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// addi r31,r11,7968
	ctx.r31.s64 = ctx.r11.s64 + 7968;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
loc_8221FA6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221fa8c
	if (!ctx.cr6.gt) goto loc_8221FA8C;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82229b60
	ctx.lr = 0x8221FA84;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221FA88;
	sub_822AD208(ctx, base);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
loc_8221FA8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221fa6c
	if (ctx.cr6.lt) goto loc_8221FA6C;
loc_8221FA9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221FA30) {
	__imp__sub_8221FA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FAA4) {
	__imp__sub_8221FAA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8221FAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8221FAB8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221facc
	if (ctx.cr6.eq) goto loc_8221FACC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// bl 0x822ad350
	ctx.lr = 0x8221FACC;
	sub_822AD350(ctx, base);
loc_8221FACC:
	// bl 0x822ad190
	ctx.lr = 0x8221FAD0;
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
	// ble cr6,0x8221fb30
	if (!ctx.cr6.gt) goto loc_8221FB30;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,11296
	ctx.r28.s64 = ctx.r11.s64 + 11296;
loc_8221FAF4:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fb20
	if (ctx.cr6.eq) goto loc_8221FB20;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x8221fb20
	if (!ctx.cr6.eq) goto loc_8221FB20;
	// bl 0x82229b60
	ctx.lr = 0x8221FB18;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221FB1C;
	sub_822AD208(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8221FB20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221faf4
	if (ctx.cr6.lt) goto loc_8221FAF4;
loc_8221FB30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221FAA8) {
	__imp__sub_8221FAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8221FB40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8221f6c8
	ctx.lr = 0x8221FB4C;
	sub_8221F6C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221fb64
	if (!ctx.cr6.eq) goto loc_8221FB64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20940
	ctx.r3.s64 = ctx.r11.s64 + -20940;
	// bl 0x822ad350
	ctx.lr = 0x8221FB64;
	sub_822AD350(ctx, base);
loc_8221FB64:
	// bl 0x822ad190
	ctx.lr = 0x8221FB68;
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
	// ble cr6,0x8221fbe0
	if (!ctx.cr6.gt) goto loc_8221FBE0;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r27,r11,11296
	ctx.r27.s64 = ctx.r11.s64 + 11296;
loc_8221FB90:
	// lbzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fbd0
	if (ctx.cr6.eq) goto loc_8221FBD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x8221fbd0
	if (!ctx.cr6.eq) goto loc_8221FBD0;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 & ctx.r26.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221fbd0
	if (ctx.cr6.eq) goto loc_8221FBD0;
	// bl 0x82229b60
	ctx.lr = 0x8221FBC8;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8221FBCC;
	sub_822AD208(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8221FBD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221fb90
	if (ctx.cr6.lt) goto loc_8221FB90;
loc_8221FBE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221FB38) {
	__imp__sub_8221FB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FBE8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221FC04;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x8221FC0C;
	sub_82232100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221fc7c
	if (!ctx.cr6.eq) goto loc_8221FC7C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fc58
	if (ctx.cr6.eq) goto loc_8221FC58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x8221FC34;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221fc58
	if (ctx.cr6.eq) goto loc_8221FC58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// bl 0x822e84f0
	ctx.lr = 0x8221FC4C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8221FC58;
	sub_82280900(ctx, base);
loc_8221FC58:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8221FC60:
	// bl 0x822aced0
	ctx.lr = 0x8221FC64;
	sub_822ACED0(ctx, base);
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
loc_8221FC7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8221FC84;
	sub_82332AF8(ctx, base);
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fc58
	if (ctx.cr6.eq) goto loc_8221FC58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8221FC98;
	sub_82332AF8(ctx, base);
	// lwz r3,476(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// bl 0x82300a60
	ctx.lr = 0x8221FCA0;
	sub_82300A60(ctx, base);
	// b 0x8221fc60
	goto loc_8221FC60;
}

PPC_WEAK_FUNC(sub_8221FBE8) {
	__imp__sub_8221FBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FCA4) {
	__imp__sub_8221FCA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20844
	ctx.r3.s64 = ctx.r11.s64 + -20844;
	// b 0x822ad350
	sub_822AD350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221FCA8) {
	__imp__sub_8221FCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FCB4) {
	__imp__sub_8221FCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FCB8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221FCD4;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212f8c8
	ctx.lr = 0x8221FCE4;
	sub_8212F8C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x8221FCEC;
	sub_822AD190(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822acf60
	ctx.lr = 0x8221FCF4;
	sub_822ACF60(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// lhz r3,106(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 106);
	// bl 0x822ad280
	ctx.lr = 0x8221FD04;
	sub_822AD280(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822acf60
	ctx.lr = 0x8221FD0C;
	sub_822ACF60(ctx, base);
	// lhz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 108);
	// bl 0x822ad280
	ctx.lr = 0x8221FD14;
	sub_822AD280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acbf8
	ctx.lr = 0x8221FD1C;
	sub_822ACBF8(ctx, base);
	// lhz r3,496(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 496);
	// bl 0x822ad280
	ctx.lr = 0x8221FD24;
	sub_822AD280(ctx, base);
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

PPC_WEAK_FUNC(sub_8221FCB8) {
	__imp__sub_8221FCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FD3C) {
	__imp__sub_8221FD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FD40) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221FD54;
	sub_822B2288(ctx, base);
	// bl 0x8212f950
	ctx.lr = 0x8221FD58;
	sub_8212F950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221fd68
	if (!ctx.cr6.eq) goto loc_8221FD68;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8221FD68:
	// bl 0x822aced0
	ctx.lr = 0x8221FD6C;
	sub_822ACED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FD40) {
	__imp__sub_8221FD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FD7C) {
	__imp__sub_8221FD7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FD80) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221FD94;
	sub_822B2288(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-16768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// bl 0x82360768
	ctx.lr = 0x8221FDA4;
	sub_82360768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FD80) {
	__imp__sub_8221FD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FDB4) {
	__imp__sub_8221FDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FDB8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221FDCC;
	sub_822B2288(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-16768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// bl 0x82360768
	ctx.lr = 0x8221FDDC;
	sub_82360768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FDB8) {
	__imp__sub_8221FDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FDEC) {
	__imp__sub_8221FDEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FDF0) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FE00;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FDF0) {
	__imp__sub_8221FDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FE1C) {
	__imp__sub_8221FE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FE20) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FE30;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FE20) {
	__imp__sub_8221FE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FE4C) {
	__imp__sub_8221FE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FE50) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FE60;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FE50) {
	__imp__sub_8221FE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FE7C) {
	__imp__sub_8221FE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FE80) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FE90;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FE80) {
	__imp__sub_8221FE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FEAC) {
	__imp__sub_8221FEAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FEB0) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FEC0;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FEB0) {
	__imp__sub_8221FEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FEDC) {
	__imp__sub_8221FEDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FEE0) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FEF0;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FEE0) {
	__imp__sub_8221FEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FF0C) {
	__imp__sub_8221FF0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF10) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FF20;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FF10) {
	__imp__sub_8221FF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FF3C) {
	__imp__sub_8221FF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF40) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8221FF50;
	sub_8220ED10(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FF40) {
	__imp__sub_8221FF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221FF6C) {
	__imp__sub_8221FF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9400);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822acc78
	sub_822ACC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8221FF70) {
	__imp__sub_8221FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FF80) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221FF94;
	sub_822B1FB0(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r3,-9400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9400);
	// bl 0x822e1f88
	ctx.lr = 0x8221FFA0;
	sub_822E1F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FF80) {
	__imp__sub_8221FF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221FFB0) {
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
	// bl 0x822acb68
	ctx.lr = 0x8221FFCC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8221ffe0
	if (!ctx.cr6.lt) goto loc_8221FFE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20812
	ctx.r3.s64 = ctx.r11.s64 + -20812;
	// bl 0x822ad350
	ctx.lr = 0x8221FFE0;
	sub_822AD350(ctx, base);
loc_8221FFE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221FFF4;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822acb68
	ctx.lr = 0x8221FFFC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82220010
	if (ctx.cr6.lt) goto loc_82220010;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8222000C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82220010:
	// bl 0x822acb68
	ctx.lr = 0x82220014;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82220028
	if (ctx.cr6.lt) goto loc_82220028;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82220024;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_82220028:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// fsubs f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-4904
	ctx.r8.s64 = ctx.r11.s64 + -4904;
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lwz r11,-4812(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4812);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stb r10,28(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28, ctx.r10.u8);
	// stfs f30,36(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f31,40(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fdivs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// fdivs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8221FFB0) {
	__imp__sub_8221FFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822200C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822200C4) {
	__imp__sub_822200C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822200C8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822200E0;
	sub_822B2498(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-20760
	ctx.r3.s64 = ctx.r10.s64 + -20760;
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f11,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fdivs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8222014C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x82220158;
	sub_8233CAE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82258370
	ctx.lr = 0x82220160;
	sub_82258370(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822200C8) {
	__imp__sub_822200C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220170) {
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
	// bl 0x8220ed10
	ctx.lr = 0x82220184;
	sub_8220ED10(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822201a0
	if (!ctx.cr6.eq) goto loc_822201A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// bl 0x822ad548
	ctx.lr = 0x822201A0;
	sub_822AD548(ctx, base);
loc_822201A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x822201A8;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822201b8
	if (!ctx.cr6.eq) goto loc_822201B8;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// b 0x822201f4
	goto loc_822201F4;
loc_822201B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x822201C0;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822201d8
	if (!ctx.cr6.eq) goto loc_822201D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x822201D0;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x822201e8
	if (ctx.cr6.eq) goto loc_822201E8;
loc_822201D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-17496
	ctx.r4.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad4e0
	ctx.lr = 0x822201E8;
	sub_822AD4E0(ctx, base);
loc_822201E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x822201F0;
	sub_82229BF0(ctx, base);
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_822201F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r8,r11,44640
	ctx.r8.u64 = ctx.r11.u64 | 44640;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// ori r8,r11,44639
	ctx.r8.u64 = ctx.r11.u64 | 44639;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_82220170) {
	__imp__sub_82220170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222022C) {
	__imp__sub_8222022C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220230) {
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
	// bl 0x8220ed10
	ctx.lr = 0x82220240;
	sub_8220ED10(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220268
	if (ctx.cr6.eq) goto loc_82220268;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// xori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 ^ 2;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82220268:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 ^ 2;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82220230) {
	__imp__sub_82220230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82220284) {
	__imp__sub_82220284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82220290;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x822202A4;
	sub_8220ED10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-24004
	ctx.r30.s64 = ctx.r11.s64 + -24004;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82220328
	if (ctx.cr6.eq) goto loc_82220328;
	// lhz r3,302(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822202d4
	if (ctx.cr6.eq) goto loc_822202D4;
	// bl 0x822a13a0
	ctx.lr = 0x822202CC;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822202d8
	goto loc_822202D8;
loc_822202D4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822202D8:
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
	ctx.lr = 0x822202EC;
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-20608
	ctx.r3.s64 = ctx.r11.s64 + -20608;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82220324;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82220328;
	sub_822AD350(ctx, base);
loc_82220328:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822203b8
	if (ctx.cr6.lt) goto loc_822203B8;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220354
	if (ctx.cr6.eq) goto loc_82220354;
	// bl 0x822a13a0
	ctx.lr = 0x82220350;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82220354:
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
	ctx.lr = 0x82220368;
	sub_822A13A0(ctx, base);
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r4,r11,-20736
	ctx.r4.s64 = ctx.r11.s64 + -20736;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280c30
	ctx.lr = 0x822203A4;
	sub_82280C30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_822203B8:
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x822203C0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x822203d4
	if (ctx.cr6.lt) goto loc_822203D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822203D0;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822203D4:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x822203DC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x822203f0
	if (ctx.cr6.lt) goto loc_822203F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x822203EC;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822203F0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9ae8
	ctx.lr = 0x82220404;
	sub_821D9AE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220418
	if (ctx.cr6.eq) goto loc_82220418;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// bl 0x82229b60
	ctx.lr = 0x82220418;
	sub_82229B60(ctx, base);
loc_82220418:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82220288) {
	__imp__sub_82220288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222042C) {
	__imp__sub_8222042C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82220438;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x8222044C;
	sub_8220ED10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x822204cc
	if (ctx.cr6.eq) goto loc_822204CC;
	// lhz r3,302(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220474
	if (ctx.cr6.eq) goto loc_82220474;
	// bl 0x822a13a0
	ctx.lr = 0x8222046C;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8222047c
	goto loc_8222047C;
loc_82220474:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-24004
	ctx.r30.s64 = ctx.r11.s64 + -24004;
loc_8222047C:
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
	ctx.lr = 0x82220490;
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-20608
	ctx.r3.s64 = ctx.r11.s64 + -20608;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822204C8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822204CC;
	sub_822AD350(ctx, base);
loc_822204CC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82220544
	if (!ctx.cr6.lt) goto loc_82220544;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x822204EC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82220500
	if (ctx.cr6.lt) goto loc_82220500;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822204FC;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82220500:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x82220508;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8222051c
	if (ctx.cr6.lt) goto loc_8222051C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x82220518;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8222051C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9ae8
	ctx.lr = 0x82220530;
	sub_821D9AE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220544
	if (ctx.cr6.eq) goto loc_82220544;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// bl 0x82229b60
	ctx.lr = 0x82220544;
	sub_82229B60(ctx, base);
loc_82220544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82220430) {
	__imp__sub_82220430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220558) {
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
	// bl 0x8220ed10
	ctx.lr = 0x82220568;
	sub_8220ED10(ctx, base);
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220590
	if (!ctx.cr6.eq) goto loc_82220590;
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82220598
	goto loc_82220598;
loc_82220590:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e490
	ctx.lr = 0x82220598;
	sub_8222E490(ctx, base);
loc_82220598:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x822205A0;
	sub_822AD078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82220558) {
	__imp__sub_82220558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822205B0) {
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
	// bl 0x8220ed10
	ctx.lr = 0x822205C0;
	sub_8220ED10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e490
	ctx.lr = 0x822205C8;
	sub_8222E490(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x822205D0;
	sub_822AD078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822205B0) {
	__imp__sub_822205B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822205E0) {
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
	// bl 0x8220ed10
	ctx.lr = 0x822205F8;
	sub_8220ED10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220614
	if (ctx.cr6.eq) goto loc_82220614;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8223fae0
	ctx.lr = 0x82220610;
	sub_8223FAE0(ctx, base);
	// b 0x82220668
	goto loc_82220668;
loc_82220614:
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,2992
	ctx.r5.s64 = ctx.r31.s64 + 2992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,196(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 196);
	// bl 0x8221a5e0
	ctx.lr = 0x82220638;
	sub_8221A5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222065c
	if (ctx.cr6.eq) goto loc_8222065C;
	// lfs f0,3040(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3044(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3044);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3048);
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
	// b 0x82220668
	goto loc_82220668;
loc_8222065C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e490
	ctx.lr = 0x82220668;
	sub_8222E490(ctx, base);
loc_82220668:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x82220670;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_822205E0) {
	__imp__sub_822205E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82220690;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x821c2098
	ctx.lr = 0x822206BC;
	sub_821C2098(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c2500
	ctx.lr = 0x822206D0;
	sub_821C2500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220750
	if (!ctx.cr6.eq) goto loc_82220750;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c2360
	ctx.lr = 0x822206F0;
	sub_821C2360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220750
	if (!ctx.cr6.eq) goto loc_82220750;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c2360
	ctx.lr = 0x82220710;
	sub_821C2360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220750
	if (!ctx.cr6.eq) goto loc_82220750;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c25c8
	ctx.lr = 0x8222072C;
	sub_821C25C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220750
	if (!ctx.cr6.eq) goto loc_82220750;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-20472
	ctx.r4.s64 = ctx.r11.s64 + -20472;
	// bl 0x82280a68
	ctx.lr = 0x82220744;
	sub_82280A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82220750:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822067b8
	ctx.lr = 0x82220770;
	sub_822067B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82220688) {
	__imp__sub_82220688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82220780;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x82220788;
	sub_8220ED10(ctx, base);
	// lwz r31,268(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822207a4
	if (!ctx.cr6.eq) goto loc_822207A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20316
	ctx.r3.s64 = ctx.r11.s64 + -20316;
	// bl 0x822ad350
	ctx.lr = 0x822207A4;
	sub_822AD350(ctx, base);
loc_822207A4:
	// bl 0x822acb68
	ctx.lr = 0x822207A8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x822207c8
	if (ctx.cr6.eq) goto loc_822207C8;
	// bl 0x822acb68
	ctx.lr = 0x822207B4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x822207c8
	if (ctx.cr6.eq) goto loc_822207C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20392
	ctx.r3.s64 = ctx.r11.s64 + -20392;
	// bl 0x822ad350
	ctx.lr = 0x822207C8;
	sub_822AD350(ctx, base);
loc_822207C8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822207D4;
	sub_822B2498(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822207E0;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x822207E4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82220810
	if (!ctx.cr6.eq) goto loc_82220810;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x822207F4;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82220814
	goto loc_82220814;
loc_82220810:
	// li r29,5000
	ctx.r29.s64 = 5000;
loc_82220814:
	// lwz r11,3292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222083c
	if (!ctx.cr6.eq) goto loc_8222083C;
	// lhz r3,292(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82220828;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26100
	ctx.r3.s64 = ctx.r11.s64 + -26100;
	// bl 0x822e84f0
	ctx.lr = 0x82220838;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222083C;
	sub_822AD350(ctx, base);
loc_8222083C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,3292(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82220688
	ctx.lr = 0x82220858;
	sub_82220688(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222086c
	if (ctx.cr6.eq) goto loc_8222086C;
	// bl 0x82229b60
	ctx.lr = 0x82220864;
	sub_82229B60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8222086C:
	// bl 0x822acd78
	ctx.lr = 0x82220870;
	sub_822ACD78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82220778) {
	__imp__sub_82220778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220878) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82220890;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x822208b0
	if (ctx.cr6.eq) goto loc_822208B0;
	// bl 0x822acb68
	ctx.lr = 0x8222089C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x822208b0
	if (ctx.cr6.eq) goto loc_822208B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20232
	ctx.r3.s64 = ctx.r11.s64 + -20232;
	// bl 0x822ad350
	ctx.lr = 0x822208B0;
	sub_822AD350(ctx, base);
loc_822208B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822208B8;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x822208C0;
	sub_82232100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822208e8
	if (!ctx.cr6.eq) goto loc_822208E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// bl 0x822e84f0
	ctx.lr = 0x822208DC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822208E8;
	sub_822AD4E0(ctx, base);
loc_822208E8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822208F4;
	sub_822B2498(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82220900;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82220904;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82220930
	if (!ctx.cr6.eq) goto loc_82220930;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82220914;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82220934
	goto loc_82220934;
loc_82220930:
	// li r8,5000
	ctx.r8.s64 = 5000;
loc_82220934:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82220688
	ctx.lr = 0x8222094C;
	sub_82220688(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222095c
	if (ctx.cr6.eq) goto loc_8222095C;
	// bl 0x82229b60
	ctx.lr = 0x82220958;
	sub_82229B60(ctx, base);
	// b 0x82220960
	goto loc_82220960;
loc_8222095C:
	// bl 0x822acd78
	ctx.lr = 0x82220960;
	sub_822ACD78(ctx, base);
loc_82220960:
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

PPC_WEAK_FUNC(sub_82220878) {
	__imp__sub_82220878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82220980;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x82220988;
	sub_8220ED10(ctx, base);
	// lwz r30,268(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822209a4
	if (!ctx.cr6.eq) goto loc_822209A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20068
	ctx.r3.s64 = ctx.r11.s64 + -20068;
	// bl 0x822ad350
	ctx.lr = 0x822209A4;
	sub_822AD350(ctx, base);
loc_822209A4:
	// bl 0x822acb68
	ctx.lr = 0x822209A8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x822209c8
	if (ctx.cr6.eq) goto loc_822209C8;
	// bl 0x822acb68
	ctx.lr = 0x822209B4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x822209c8
	if (ctx.cr6.eq) goto loc_822209C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// bl 0x822ad350
	ctx.lr = 0x822209C8;
	sub_822AD350(ctx, base);
loc_822209C8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822209D4;
	sub_822B2498(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822209E0;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x822209E4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82220a10
	if (!ctx.cr6.eq) goto loc_82220A10;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x822209F4;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82220a14
	goto loc_82220A14;
loc_82220A10:
	// li r29,5000
	ctx.r29.s64 = 5000;
loc_82220A14:
	// lwz r11,3292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82220a3c
	if (!ctx.cr6.eq) goto loc_82220A3C;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82220A28;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26100
	ctx.r3.s64 = ctx.r11.s64 + -26100;
	// bl 0x822e84f0
	ctx.lr = 0x82220A38;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82220A3C;
	sub_822AD350(ctx, base);
loc_82220A3C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,3292(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822067b8
	ctx.lr = 0x82220A5C;
	sub_822067B8(ctx, base);
	// bl 0x82229b60
	ctx.lr = 0x82220A60;
	sub_82229B60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82220978) {
	__imp__sub_82220978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220A68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82220A80;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82220aa0
	if (ctx.cr6.eq) goto loc_82220AA0;
	// bl 0x822acb68
	ctx.lr = 0x82220A8C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82220aa0
	if (ctx.cr6.eq) goto loc_82220AA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// bl 0x822ad350
	ctx.lr = 0x82220AA0;
	sub_822AD350(ctx, base);
loc_82220AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82220AA8;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82220AB0;
	sub_82232100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220ad8
	if (!ctx.cr6.eq) goto loc_82220AD8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// bl 0x822e84f0
	ctx.lr = 0x82220ACC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82220AD8;
	sub_822AD4E0(ctx, base);
loc_82220AD8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82220AE4;
	sub_822B2498(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82220AF0;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82220AF4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82220b20
	if (!ctx.cr6.eq) goto loc_82220B20;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82220B04;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82220b24
	goto loc_82220B24;
loc_82220B20:
	// li r9,5000
	ctx.r9.s64 = 5000;
loc_82220B24:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822067b8
	ctx.lr = 0x82220B40;
	sub_822067B8(ctx, base);
	// bl 0x82229b60
	ctx.lr = 0x82220B44;
	sub_82229B60(ctx, base);
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

PPC_WEAK_FUNC(sub_82220A68) {
	__imp__sub_82220A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82220B5C) {
	__imp__sub_82220B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220B60) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82220B7C;
	sub_822B2498(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82220B88;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82220B90;
	sub_822B1FB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x82332af8
	ctx.lr = 0x82220BA4;
	sub_82332AF8(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82332b10
	ctx.lr = 0x82220BB0;
	sub_82332B10(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f1,f2,f0,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822da250
	ctx.lr = 0x82220C3C;
	sub_822DA250(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,9624
	ctx.r8.s64 = ctx.r9.s64 + 9624;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82329b68
	ctx.lr = 0x82220C54;
	sub_82329B68(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,-21924(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -21924);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e08b0
	ctx.lr = 0x82220C74;
	sub_821E08B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ad078
	ctx.lr = 0x82220C7C;
	sub_822AD078(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

PPC_WEAK_FUNC(sub_82220B60) {
	__imp__sub_82220B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220C90) {
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82220CAC;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82220CB8;
	sub_822B2498(ctx, base);
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822304f8
	ctx.lr = 0x82220CC4;
	sub_822304F8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x82220CE4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82220d04
	if (!ctx.cr6.eq) goto loc_82220D04;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82220CF4;
	sub_822B1C50(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82220d0c
	goto loc_82220D0C;
loc_82220D04:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82220D0C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-5120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5120);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_82220C90) {
	__imp__sub_82220C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82220D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82220D2C) {
	__imp__sub_82220D2C(ctx, base);
}

