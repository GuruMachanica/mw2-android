#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821CEE68) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r10,266(r3)
	PPC_STORE_U8(ctx.r3.u32 + 266, ctx.r10.u8);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ceed8
	if (ctx.cr6.eq) goto loc_821CEED8;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ceed8
	if (ctx.cr6.eq) goto loc_821CEED8;
	// bl 0x82235e78
	ctx.lr = 0x821CEEAC;
	sub_82235E78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x821CEEBC;
	sub_822D77C0(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d77c0
	ctx.lr = 0x821CEEC8;
	sub_822D77C0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d77c0
	ctx.lr = 0x821CEED4;
	sub_822D77C0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_821CEED8:
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

PPC_WEAK_FUNC(sub_821CEE68) {
	__imp__sub_821CEE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CEEF0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,266(r3)
	PPC_STORE_U8(ctx.r3.u32 + 266, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ab968
	ctx.lr = 0x821CEF18;
	sub_821AB968(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821cf068
	if (ctx.cr6.eq) goto loc_821CF068;
	// lwz r11,3412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821cf068
	if (!ctx.cr6.eq) goto loc_821CF068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cec68
	ctx.lr = 0x821CEF38;
	sub_821CEC68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cef54
	if (ctx.cr6.eq) goto loc_821CEF54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cee68
	ctx.lr = 0x821CEF50;
	sub_821CEE68(ctx, base);
	// b 0x821cf068
	goto loc_821CF068;
loc_821CEF54:
	// lbz r11,3404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cefbc
	if (ctx.cr6.eq) goto loc_821CEFBC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ea328
	ctx.lr = 0x821CEF68;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821cefbc
	if (ctx.cr6.eq) goto loc_821CEFBC;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fd8
	ctx.lr = 0x821CEF78;
	sub_821C6FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821cefbc
	if (ctx.cr6.eq) goto loc_821CEFBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4664(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4664);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821cefbc
	if (!ctx.cr6.lt) goto loc_821CEFBC;
	// lfs f0,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x821cf03c
	if (ctx.cr6.lt) goto loc_821CF03C;
loc_821CEFBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac7f8
	ctx.lr = 0x821CEFC8;
	sub_821AC7F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-5936
	ctx.r11.s64 = ctx.r11.s64 + -5936;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821ceff0
	if (!ctx.cr6.eq) goto loc_821CEFF0;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821cf03c
	if (ctx.cr6.eq) goto loc_821CF03C;
loc_821CEFF0:
	// lbz r11,3404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821cf05c
	if (!ctx.cr6.eq) goto loc_821CF05C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4ac8
	ctx.lr = 0x821CF004;
	sub_822D4AC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d52c8
	ctx.lr = 0x821CF014;
	sub_822D52C8(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,19444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19444);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f9,f10,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x821cf05c
	if (ctx.cr6.lt) goto loc_821CF05C;
loc_821CF03C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r11.u8);
	// lfs f2,248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821CF058;
	sub_821CE2B8(ctx, base);
	// b 0x821cf068
	goto loc_821CF068;
loc_821CF05C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cee00
	ctx.lr = 0x821CF068;
	sub_821CEE00(ctx, base);
loc_821CF068:
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

PPC_WEAK_FUNC(sub_821CEEF0) {
	__imp__sub_821CEEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF080) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,804(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x821cf0f8
	if (ctx.cr6.lt) goto loc_821CF0F8;
	// addi r4,r3,784
	ctx.r4.s64 = ctx.r3.s64 + 784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d50f8
	ctx.lr = 0x821CF0E8;
	sub_822D50F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821CF0F8:
	// lfs f0,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 784, temp.u32);
	// lfs f13,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,788(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 788, temp.u32);
	// lfs f12,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,792(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 792, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CF080) {
	__imp__sub_821CF080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x821cf130
	if (!ctx.cr6.gt) goto loc_821CF130;
	// stw r4,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r4.u32);
loc_821CF130:
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r5,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CF120) {
	__imp__sub_821CF120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CF144) {
	__imp__sub_821CF144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821CF150;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ab968
	ctx.lr = 0x821CF15C;
	sub_821AB968(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// beq cr6,0x821cf1c4
	if (ctx.cr6.eq) goto loc_821CF1C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab970
	ctx.lr = 0x821CF178;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bne cr6,0x821cf1b8
	if (!ctx.cr6.eq) goto loc_821CF1B8;
	// lwz r8,800(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r10,r11,500
	ctx.r10.s64 = ctx.r11.s64 + 500;
	// addi r9,r11,250
	ctx.r9.s64 = ctx.r11.s64 + 250;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821cf1a4
	if (!ctx.cr6.gt) goto loc_821CF1A4;
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_821CF1A4:
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821cf1b8
	if (!ctx.cr6.gt) goto loc_821CF1B8;
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_821CF1B8:
	// li r27,250
	ctx.r27.s64 = 250;
	// li r26,500
	ctx.r26.s64 = 500;
	// b 0x821cf1d0
	goto loc_821CF1D0;
loc_821CF1C4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r27,500
	ctx.r27.s64 = 500;
	// li r26,3000
	ctx.r26.s64 = 3000;
loc_821CF1D0:
	// lwz r10,804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821cf234
	if (ctx.cr6.eq) goto loc_821CF234;
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821cf2f4
	if (ctx.cr6.gt) goto loc_821CF2F4;
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cf24c
	if (!ctx.cr6.gt) goto loc_821CF24C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821CF1FC;
	sub_8223FB90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cf24c
	if (ctx.cr6.eq) goto loc_821CF24C;
	// lwz r4,804(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// bl 0x82235ec0
	ctx.lr = 0x821CF20C;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821cf24c
	if (ctx.cr6.eq) goto loc_821CF24C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf080
	ctx.lr = 0x821CF21C;
	sub_821CF080(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF234:
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cf24c
	if (!ctx.cr6.gt) goto loc_821CF24C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF24C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// bl 0x821aa3d0
	ctx.lr = 0x821CF25C;
	sub_821AA3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cf280
	if (!ctx.cr6.eq) goto loc_821CF280;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF280:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,112
	ctx.r10.s64 = 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mulli r11,r8,44
	ctx.r11.s64 = ctx.r8.s64 * 44;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,824
	ctx.r28.s64 = ctx.r11.s64 + 824;
	// bl 0x8223fb90
	ctx.lr = 0x821CF2A4;
	sub_8223FB90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821cd9f0
	ctx.lr = 0x821CF2B0;
	sub_821CD9F0(ctx, base);
	// stw r3,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cf2d4
	if (!ctx.cr6.eq) goto loc_821CF2D4;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF2D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf080
	ctx.lr = 0x821CF2DC;
	sub_821CF080(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
loc_821CF2F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821CF148) {
	__imp__sub_821CF148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821CF308;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821cf3c4
	if (ctx.cr6.gt) goto loc_821CF3C4;
	// bl 0x821cf148
	ctx.lr = 0x821CF334;
	sub_821CF148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf374
	if (ctx.cr6.eq) goto loc_821CF374;
	// lfs f1,784(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,788(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x821CF34C;
	sub_822D77C0(ctx, base);
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d77c0
	ctx.lr = 0x821CF358;
	sub_822D77C0(ctx, base);
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d77c0
	ctx.lr = 0x821CF364;
	sub_822D77C0(ctx, base);
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821CF374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821cf3c4
	if (ctx.cr6.eq) goto loc_821CF3C4;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821cf3c4
	if (ctx.cr6.eq) goto loc_821CF3C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad88
	ctx.lr = 0x821CF3A4;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf3c4
	if (ctx.cr6.eq) goto loc_821CF3C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821CF3C4;
	sub_821CE2B8(ctx, base);
loc_821CF3C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821CF300) {
	__imp__sub_821CF300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF3D0) {
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
	// bl 0x821aa3a0
	ctx.lr = 0x821CF3E8;
	sub_821AA3A0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f10,236(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f0.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f6,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f13.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fsubs f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f1,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f5,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f0,232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// addi r10,r31,3712
	ctx.r10.s64 = ctx.r31.s64 + 3712;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f9,f8,f8
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f8,f7,f7
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f7,f3,f3,f9
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f6,f2,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f0,f11,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// blt cr6,0x821cf4ac
	if (ctx.cr6.lt) goto loc_821CF4AC;
	// lbz r9,900(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 900);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x821cf4ac
	if (ctx.cr6.lt) goto loc_821CF4AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CF4AC:
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

PPC_WEAK_FUNC(sub_821CF3D0) {
	__imp__sub_821CF3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821CF4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821CF4D4;
	sub_821AA3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8510
	ctx.lr = 0x821CF4E0;
	sub_821D8510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cf538
	if (ctx.cr6.eq) goto loc_821CF538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab958
	ctx.lr = 0x821CF4F4;
	sub_821AB958(ctx, base);
	// addic. r30,r3,-2
	ctx.xer.ca = ctx.r3.u32 > 1;
	ctx.r30.s64 = ctx.r3.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821cf538
	if (ctx.cr0.lt) goto loc_821CF538;
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,3736
	ctx.r29.s64 = ctx.r11.s64 + 3736;
loc_821CF508:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821cf52c
	if (ctx.cr6.lt) goto loc_821CF52C;
	// bl 0x82234970
	ctx.lr = 0x821CF518;
	sub_82234970(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821CF524;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821cf544
	if (!ctx.cr6.eq) goto loc_821CF544;
loc_821CF52C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-28
	ctx.r29.s64 = ctx.r29.s64 + -28;
	// bge 0x821cf508
	if (!ctx.cr0.lt) goto loc_821CF508;
loc_821CF538:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821CF544:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821CF4C0) {
	__imp__sub_821CF4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821CF558;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x821cec68
	ctx.lr = 0x821CF570;
	sub_821CEC68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf594
	if (ctx.cr6.eq) goto loc_821CF594;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821cee68
	ctx.lr = 0x821CF588;
	sub_821CEE68(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF594:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r11.u8);
	// bl 0x821aa3a0
	ctx.lr = 0x821CF5A0;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821cf5c0
	if (!ctx.cr6.eq) goto loc_821CF5C0;
loc_821CF5AC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821cf300
	ctx.lr = 0x821CF5B4;
	sub_821CF300(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF5C0:
	// bl 0x821bf158
	ctx.lr = 0x821CF5C4;
	sub_821BF158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf630
	if (ctx.cr6.eq) goto loc_821CF630;
	// lfs f0,4620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,4632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4632);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4636);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4628);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,7652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7652);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821cf630
	if (!ctx.cr6.lt) goto loc_821CF630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821CF618;
	sub_821AA3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x821d8500
	ctx.lr = 0x821CF628;
	sub_821D8500(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821cf898
	goto loc_821CF898;
loc_821CF630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821CF638;
	sub_821AA3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cf87c
	if (ctx.cr6.eq) goto loc_821CF87C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mulli r11,r8,44
	ctx.r11.s64 = ctx.r8.s64 * 44;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,824
	ctx.r29.s64 = ctx.r11.s64 + 824;
	// lbz r7,824(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 824);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821cf87c
	if (!ctx.cr6.eq) goto loc_821CF87C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x822ea328
	ctx.lr = 0x821CF67C;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821cf690
	if (!ctx.cr6.eq) goto loc_821CF690;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r29,28
	ctx.r5.s64 = ctx.r29.s64 + 28;
	// b 0x821cf89c
	goto loc_821CF89C;
loc_821CF690:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cf5ac
	if (ctx.cr6.eq) goto loc_821CF5AC;
	// bl 0x821ab968
	ctx.lr = 0x821CF6A4;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821cf6dc
	if (!ctx.cr6.eq) goto loc_821CF6DC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,10000
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10000, ctx.xer);
	// blt cr6,0x821cf8a8
	if (ctx.cr6.lt) goto loc_821CF8A8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf300
	ctx.lr = 0x821CF6D0;
	sub_821CF300(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821CF6DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,4616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,4616
	ctx.r30.s64 = ctx.r31.s64 + 4616;
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f0,25520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25520);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x821cf764
	if (!ctx.cr6.lt) goto loc_821CF764;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fd8
	ctx.lr = 0x821CF72C;
	sub_821C6FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821cf764
	if (ctx.cr6.eq) goto loc_821CF764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf158
	ctx.lr = 0x821CF73C;
	sub_821BF158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821cf764
	if (!ctx.cr6.eq) goto loc_821CF764;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x821cf8a8
	if (ctx.cr6.lt) goto loc_821CF8A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x821cf89c
	goto loc_821CF89C;
loc_821CF764:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4684(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,-23464(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23464);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x821cf87c
	if (!ctx.cr6.lt) goto loc_821CF87C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,500
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 500, ctx.xer);
	// ble cr6,0x821cf87c
	if (!ctx.cr6.gt) goto loc_821CF87C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf3d0
	ctx.lr = 0x821CF7C0;
	sub_821CF3D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf7e8
	if (ctx.cr6.eq) goto loc_821CF7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf4c0
	ctx.lr = 0x821CF7D4;
	sub_821CF4C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cf7e8
	if (ctx.cr6.eq) goto loc_821CF7E8;
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821cf89c
	goto loc_821CF89C;
loc_821CF7E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf148
	ctx.lr = 0x821CF7F0;
	sub_821CF148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf87c
	if (ctx.cr6.eq) goto loc_821CF87C;
	// lwz r10,804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821cf87c
	if (ctx.cr6.eq) goto loc_821CF87C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f0,-19192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821cf874
	if (!ctx.cr6.lt) goto loc_821CF874;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cf864
	if (!ctx.cr6.gt) goto loc_821CF864;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
loc_821CF864:
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cf874
	if (!ctx.cr6.gt) goto loc_821CF874;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
loc_821CF874:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821cf89c
	goto loc_821CF89C;
loc_821CF87C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821CF884;
	sub_821AA3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x821d8500
	ctx.lr = 0x821CF894;
	sub_821D8500(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_821CF898:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
loc_821CF89C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ce8d0
	ctx.lr = 0x821CF8A8;
	sub_821CE8D0(ctx, base);
loc_821CF8A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821CF550) {
	__imp__sub_821CF550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CF8B4) {
	__imp__sub_821CF8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CF8B8) {
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
	// bl 0x821ab968
	ctx.lr = 0x821CF8D0;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cfa14
	if (ctx.cr6.eq) goto loc_821CFA14;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cf91c
	if (!ctx.cr6.gt) goto loc_821CF91C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,3436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-5936
	ctx.r11.s64 = ctx.r11.s64 + -5936;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821cf91c
	if (!ctx.cr6.eq) goto loc_821CF91C;
	// lfs f13,3440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821cfa14
	if (ctx.cr6.eq) goto loc_821CFA14;
loc_821CF91C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821CF924;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cf944
	if (!ctx.cr6.eq) goto loc_821CF944;
loc_821CF92C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_821CF944:
	// lwz r11,3692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cf92c
	if (!ctx.cr6.eq) goto loc_821CF92C;
	// lfs f0,4616(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lfs f13,4628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4628);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 + 3712;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4636);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4632);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,7652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7652);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x821cfa14
	if (ctx.cr6.lt) goto loc_821CFA14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d95c8
	ctx.lr = 0x821CF99C;
	sub_821D95C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cf92c
	if (ctx.cr6.eq) goto loc_821CF92C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa4f0
	ctx.lr = 0x821CF9B4;
	sub_821AA4F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f5
	ctx.cr6.compare(ctx.f2.f64, ctx.f5.f64);
	// bgt cr6,0x821cf9fc
	if (ctx.cr6.gt) goto loc_821CF9FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821CF9FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_821CFA14:
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

PPC_WEAK_FUNC(sub_821CF8B8) {
	__imp__sub_821CF8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CFA2C) {
	__imp__sub_821CFA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFA30) {
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
	// bl 0x821cf8b8
	ctx.lr = 0x821CFA50;
	sub_821CF8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821cfa6c
	if (ctx.cr6.eq) goto loc_821CFA6C;
	// bl 0x821ceef0
	ctx.lr = 0x821CFA68;
	sub_821CEEF0(ctx, base);
	// b 0x821cfa70
	goto loc_821CFA70;
loc_821CFA6C:
	// bl 0x821cf550
	ctx.lr = 0x821CFA70;
	sub_821CF550(ctx, base);
loc_821CFA70:
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

PPC_WEAK_FUNC(sub_821CFA30) {
	__imp__sub_821CFA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r4,r3,324
	ctx.r4.s64 = ctx.r3.s64 + 324;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cfa9c
	if (!ctx.cr6.eq) goto loc_821CFA9C;
	// addi r4,r3,308
	ctx.r4.s64 = ctx.r3.s64 + 308;
loc_821CFA9C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821cfad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821CFAD0;
	// bdzf 4*cr6+eq,0x821cfad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821CFAD4;
	// bdzf 4*cr6+eq,0x821cfad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821CFAD8;
	// bne cr6,0x821cfadc
	if (!ctx.cr6.eq) goto loc_821CFADC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,266(r3)
	PPC_STORE_U8(ctx.r3.u32 + 266, ctx.r11.u8);
	// blr 
	return;
loc_821CFAD0:
	// b 0x821ceef0
	sub_821CEEF0(ctx, base);
	return;
loc_821CFAD4:
	// b 0x821cf550
	sub_821CF550(ctx, base);
	return;
loc_821CFAD8:
	// b 0x821cfa30
	sub_821CFA30(ctx, base);
	return;
loc_821CFADC:
	// b 0x821cee68
	sub_821CEE68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821CFA88) {
	__imp__sub_821CFA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFAE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFAE0) {
	__imp__sub_821CFAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r11,r3,324
	ctx.r11.s64 = ctx.r3.s64 + 324;
	// addi r9,r3,308
	ctx.r9.s64 = ctx.r3.s64 + 308;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821cfb20
	if (!ctx.cr6.eq) goto loc_821CFB20;
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r8,312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r7,316(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r6,320(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// b 0x821cfb40
	goto loc_821CFB40;
loc_821CFB20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// stw r8,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r8.u32);
	// stw r7,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// stw r6,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r6.u32);
loc_821CFB40:
	// lbz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFAE8) {
	__imp__sub_821CFAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CFB54) {
	__imp__sub_821CFB54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFB58) {
	__imp__sub_821CFB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFB78) {
	__imp__sub_821CFB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFB98) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// bl 0x821aba40
	ctx.lr = 0x821CFBC0;
	sub_821ABA40(ctx, base);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r9,-25976
	ctx.r8.s64 = ctx.r9.s64 + -25976;
	// lhz r4,588(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 588);
	// bl 0x82229da8
	ctx.lr = 0x821CFBD8;
	sub_82229DA8(ctx, base);
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

PPC_WEAK_FUNC(sub_821CFB98) {
	__imp__sub_821CFB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFBF0) {
	__imp__sub_821CFBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CFBF4) {
	__imp__sub_821CFBF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFBF8) {
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
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// addi r8,r9,26348
	ctx.r8.s64 = ctx.r9.s64 + 26348;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r8.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821cfc54
	if (!ctx.cr6.gt) goto loc_821CFC54;
	// bl 0x821b4de8
	ctx.lr = 0x821CFC38;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821cfc50
	if (!ctx.cr6.eq) goto loc_821CFC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821daa58
	ctx.lr = 0x821CFC48;
	sub_821DAA58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821cfcb0
	goto loc_821CFCB0;
loc_821CFC50:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_821CFC54:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821cfc88
	if (ctx.cr6.eq) goto loc_821CFC88;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,500
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 500, ctx.xer);
	// blt cr6,0x821cfc88
	if (ctx.cr6.lt) goto loc_821CFC88;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821bebf8
	ctx.lr = 0x821CFC7C;
	sub_821BEBF8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_821CFC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9ec0
	ctx.lr = 0x821CFC90;
	sub_821A9EC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821CFC9C;
	sub_821CFAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5848
	ctx.lr = 0x821CFCA4;
	sub_821B5848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821CFCAC;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CFCB0:
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

PPC_WEAK_FUNC(sub_821CFBF8) {
	__imp__sub_821CFBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFCC8) {
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
	// bl 0x821aba40
	ctx.lr = 0x821CFCD8;
	sub_821ABA40(ctx, base);
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

PPC_WEAK_FUNC(sub_821CFCC8) {
	__imp__sub_821CFCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CFCEC) {
	__imp__sub_821CFCEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFCF0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-30896
	ctx.r10.s64 = ctx.r11.s64 + -30896;
	// stw r10,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r10.u32);
	// bl 0x821b4de8
	ctx.lr = 0x821CFD14;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821cfd3c
	if (!ctx.cr6.eq) goto loc_821CFD3C;
	// bl 0x821daa58
	ctx.lr = 0x821CFD24;
	sub_821DAA58(ctx, base);
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
loc_821CFD3C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821cfae0
	ctx.lr = 0x821CFD44;
	sub_821CFAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b58a0
	ctx.lr = 0x821CFD4C;
	sub_821B58A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821CFD54;
	sub_821B2850(ctx, base);
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

PPC_WEAK_FUNC(sub_821CFCF0) {
	__imp__sub_821CFCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821CFD6C) {
	__imp__sub_821CFD6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFD70) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2046
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2046, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r10,8548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8548);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821cfdbc
	if (!ctx.cr6.gt) goto loc_821CFDBC;
	// addi r11,r10,116
	ctx.r11.s64 = ctx.r10.s64 + 116;
loc_821CFD9C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,112(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821cfd9c
	if (ctx.cr6.lt) goto loc_821CFD9C;
loc_821CFDBC:
	// addi r11,r8,29
	ctx.r11.s64 = ctx.r8.s64 + 29;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFD70) {
	__imp__sub_821CFD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cfe44
	if (ctx.cr6.eq) goto loc_821CFE44;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x821cfe44
	if (ctx.cr6.lt) goto loc_821CFE44;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fnmsubs f8,f11,f10,f9
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f9.f64)));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,4(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
loc_821CFE44:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f9,f8,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821cfe80
	if (!ctx.cr6.lt) goto loc_821CFE80;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// b 0x821cfe84
	goto loc_821CFE84;
loc_821CFE80:
	// fdivs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_821CFE84:
	// fnmsubs f13,f11,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f12,f0,f11
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f0,f9,f8
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// stfs f7,8(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821CFDD8) {
	__imp__sub_821CFDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821CFEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821CFEB8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823ddffc
	ctx.lr = 0x821CFEC0;
	__savefpr_17(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r27,r11,8552
	ctx.r27.s64 = ctx.r11.s64 + 8552;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f19,-30872(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30872);
	ctx.f19.f64 = double(temp.f32);
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lfs f22,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f21.f64 = double(temp.f32);
	// lfs f23,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f23.f64 = double(temp.f32);
	// stfs f22,120(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f21,124(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// beq cr6,0x821cff50
	if (ctx.cr6.eq) goto loc_821CFF50;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f23,f13,f0,f23
	ctx.f23.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f23.f64)));
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f23
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f23.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cff50
	if (ctx.cr6.eq) goto loc_821CFF50;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821cff50
	if (!ctx.cr6.eq) goto loc_821CFF50;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lbz r5,54(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 54);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x821cfdd8
	ctx.lr = 0x821CFF50;
	sub_821CFDD8(ctx, base);
loc_821CFF50:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f17,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cff90
	if (ctx.cr6.eq) goto loc_821CFF90;
	// lbz r11,54(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 54);
	// lfs f0,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lfs f12,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// b 0x821cff94
	goto loc_821CFF94;
loc_821CFF90:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_821CFF94:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4b08
	ctx.lr = 0x821CFFAC;
	sub_822D4B08(ctx, base);
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821cffd4
	if (ctx.cr6.gt) goto loc_821CFFD4;
	// lwz r11,268(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x821cffd8
	if (ctx.cr6.eq) goto loc_821CFFD8;
loc_821CFFD4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821CFFD8:
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stbx r7,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r25,r11,-12
	ctx.r25.s64 = ctx.r11.s64 + -12;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f18,14164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14164);
	ctx.f18.f64 = double(temp.f32);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lfs f25,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f25.f64 = double(temp.f32);
	// lfd f24,-30880(r11)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r11.u32 + -30880);
	// lfs f20,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f20.f64 = double(temp.f32);
loc_821D0030:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,76
	ctx.r6.s64 = ctx.r9.s64 + 76;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmadds f12,f0,f17,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f17.f64 + ctx.f13.f64));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f11,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f17,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f17.f64 + ctx.f10.f64));
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f8,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f17,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f17.f64 + ctx.f7.f64));
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D007C;
	sub_821FE618(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x821d0104
	if (!ctx.cr6.gt) goto loc_821D0104;
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f0,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f6,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fmadds f4,f5,f0,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fmadds f1,f2,f0,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f1,8(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x821d0110
	if (!ctx.cr6.eq) goto loc_821D0110;
loc_821D00D8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821d00ec
	if (ctx.cr6.eq) goto loc_821D00EC;
	// stfs f22,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f21,16(r9)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f23,20(r9)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
loc_821D00EC:
	// addic r11,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// subfe r3,r11,r23
	temp.u8 = (~ctx.r11.u32 + ctx.r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de048
	ctx.lr = 0x821D0100;
	__restfpr_17(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_821D0104:
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d05a8
	if (!ctx.cr6.eq) goto loc_821D05A8;
loc_821D0110:
	// stb r22,265(r9)
	PPC_STORE_U8(ctx.r9.u32 + 265, ctx.r22.u8);
	// lbz r10,186(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d017c
	if (!ctx.cr6.eq) goto loc_821D017C;
	// lwz r11,244(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x821d017c
	if (!ctx.cr6.eq) goto loc_821D017C;
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bne cr6,0x821d0144
	if (!ctx.cr6.eq) goto loc_821D0144;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// beq cr6,0x821d017c
	if (ctx.cr6.eq) goto loc_821D017C;
loc_821D0144:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821D014C;
	sub_82276090(ctx, base);
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,252(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,256(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,260(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stb r26,264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 264, ctx.r26.u8);
loc_821D017C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821D0184;
	sub_82276090(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x821cfd70
	ctx.lr = 0x821D018C;
	sub_821CFD70(ctx, base);
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// lfs f12,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f17,f12,f17,f17
	ctx.f17.f64 = double(float(-(ctx.f12.f64 * ctx.f17.f64 - ctx.f17.f64)));
	// bge cr6,0x821d0620
	if (!ctx.cr6.lt) goto loc_821D0620;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821d01e8
	if (!ctx.cr6.gt) goto loc_821D01E8;
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
loc_821D01B8:
	// lfs f10,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f18
	ctx.cr6.compare(ctx.f5.f64, ctx.f18.f64);
	// bgt cr6,0x821d01f0
	if (ctx.cr6.gt) goto loc_821D01F0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821d01b8
	if (ctx.cr6.lt) goto loc_821D01B8;
loc_821D01E8:
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// b 0x821d0294
	goto loc_821D0294;
loc_821D01F0:
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// fcmpu cr6,f12,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f20.f64);
	// bne cr6,0x821d0254
	if (!ctx.cr6.eq) goto loc_821D0254;
	// lwz r11,244(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x821d0254
	if (!ctx.cr6.eq) goto loc_821D0254;
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bne cr6,0x821d0218
	if (!ctx.cr6.eq) goto loc_821D0218;
	// fcmpu cr6,f13,f20
	ctx.cr6.compare(ctx.f13.f64, ctx.f20.f64);
	// beq cr6,0x821d0254
	if (ctx.cr6.eq) goto loc_821D0254;
loc_821D0218:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821D0220;
	sub_82276090(ctx, base);
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 244, ctx.r11.u32);
	// stfs f0,248(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 248, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,252(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 252, temp.u32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,256(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 256, temp.u32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,260(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 260, temp.u32);
	// stb r26,264(r9)
	PPC_STORE_U8(ctx.r9.u32 + 264, ctx.r26.u8);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
loc_821D0254:
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f11,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,16(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f8,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,20(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// blt cr6,0x821d0598
	if (ctx.cr6.lt) goto loc_821D0598;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
loc_821D0294:
	// lbz r11,186(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// lfs f12,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f13,8(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stfsu f12,12(r25)
	ea = 12 + ctx.r25.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r25.u32 = ea;
	// stbu r11,1(r24)
	ea = 1 + ctx.r24.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r24.u32 = ea;
	// ble 0x821d0598
	if (!ctx.cr0.gt) goto loc_821D0598;
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r9,12
	ctx.r30.s64 = ctx.r9.s64 + 12;
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// lfs f11,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
loc_821D02CC:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f12,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f8,f11,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x821d0300
	if (ctx.cr6.lt) goto loc_821D0300;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821d02cc
	if (ctx.cr6.lt) goto loc_821D02CC;
	// b 0x821d0598
	goto loc_821D0598;
loc_821D0300:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821d0314
	if (!ctx.cr6.gt) goto loc_821D0314;
	// stfs f0,56(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
loc_821D0314:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x821cfdd8
	ctx.lr = 0x821D0348;
	sub_821CFDD8(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821cfdd8
	ctx.lr = 0x821D0354;
	sub_821CFDD8(ctx, base);
	// lfs f26,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// addi r28,r1,212
	ctx.r28.s64 = ctx.r1.s64 + 212;
loc_821D0368:
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821d0518
	if (ctx.cr6.eq) goto loc_821D0518;
	// lfs f29,-4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f29.f64 = double(temp.f32);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// fmuls f0,f29,f27
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// lfs f31,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f31,f28,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f12,f30,f26,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f24
	ctx.cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// bge cr6,0x821d0518
	if (!ctx.cr6.lt) goto loc_821D0518;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bl 0x821cfdd8
	ctx.lr = 0x821D03B0;
	sub_821CFDD8(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821cfdd8
	ctx.lr = 0x821D03BC;
	sub_821CFDD8(ctx, base);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f28,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f9,f11,f26,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f20
	ctx.cr6.compare(ctx.f9.f64, ctx.f20.f64);
	// bge cr6,0x821d0518
	if (!ctx.cr6.lt) goto loc_821D0518;
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f10,f29
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// lfs f28,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f3,f9,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmsubs f12,f9,f29,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 - ctx.f12.f64));
	// fmsubs f11,f9,f29,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 - ctx.f11.f64));
	// fmsubs f9,f0,f31,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f8.f64));
	// fmsubs f8,f10,f30,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 - ctx.f6.f64));
	// fmsubs f6,f31,f0,f4
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmsubs f5,f10,f30,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 - ctx.f3.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f9,f9,f4
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f13,f6,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f10,f8,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f7,f5,f5,f13
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fsqrts f4,f10
	ctx.f4.f64 = double(float(sqrt(ctx.f10.f64)));
	// fsqrts f3,f7
	ctx.f3.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f0,f4
	ctx.f0.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fneg f13,f3
	ctx.f13.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f25,f4
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f25.f64 : ctx.f4.f64;
	// fsel f7,f13,f25,f3
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f25.f64 : ctx.f3.f64;
	// fdivs f4,f25,f10
	ctx.f4.f64 = double(float(ctx.f25.f64 / ctx.f10.f64));
	// fdivs f3,f25,f7
	ctx.f3.f64 = double(float(ctx.f25.f64 / ctx.f7.f64));
	// fmuls f0,f4,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f10,f9,f4
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f9,f6,f3
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f8,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f7,f13,f22
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmadds f6,f1,f12,f8
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f5,f11,f21,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f21.f64 + ctx.f7.f64));
	// fmadds f4,f28,f10,f6
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f3,f9,f23,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f23.f64 + ctx.f5.f64));
	// fmuls f27,f0,f4
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f28,f12,f4
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f26,f10,f4
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f1,f11,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_821D04D8:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821d0508
	if (ctx.cr6.eq) goto loc_821D0508;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821d0508
	if (ctx.cr6.eq) goto loc_821D0508;
	// lfs f0,-8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f12,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f28,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f9,f11,f26,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// blt cr6,0x821d0644
	if (ctx.cr6.lt) goto loc_821D0644;
loc_821D0508:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821d04d8
	if (ctx.cr6.lt) goto loc_821D04D8;
loc_821D0518:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821d0368
	if (ctx.cr6.lt) goto loc_821D0368;
	// lwz r11,244(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x821d0574
	if (!ctx.cr6.eq) goto loc_821D0574;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f27,f0
	ctx.f31.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fsubs f30,f28,f13
	ctx.f30.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// bl 0x82276090
	ctx.lr = 0x821D054C;
	sub_82276090(ctx, base);
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 244, ctx.r11.u32);
	// stfs f12,248(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 248, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,252(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 252, temp.u32);
	// stfs f31,256(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 256, temp.u32);
	// stfs f30,260(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 260, temp.u32);
	// stb r26,264(r9)
	PPC_STORE_U8(ctx.r9.u32 + 264, ctx.r26.u8);
loc_821D0574:
	// lfs f22,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f21.f64 = double(temp.f32);
	// lfs f23,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f23.f64 = double(temp.f32);
	// stfs f22,120(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f27,12(r9)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f21,124(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f28,16(r9)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f26,20(r9)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
loc_821D0598:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// blt cr6,0x821d0030
	if (ctx.cr6.lt) goto loc_821D0030;
	// b 0x821d00d8
	goto loc_821D00D8;
loc_821D05A8:
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stfs f20,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bne cr6,0x821d05d8
	if (!ctx.cr6.eq) goto loc_821D05D8;
	// lbz r10,53(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 53);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d05d8
	if (ctx.cr6.eq) goto loc_821D05D8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de048
	ctx.lr = 0x821D05D4;
	__restfpr_17(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_821D05D8:
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x821d060c
	if (!ctx.cr6.eq) goto loc_821D060C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821D05EC;
	sub_82276090(ctx, base);
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,252(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// stb r22,264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 264, ctx.r22.u8);
loc_821D060C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de048
	ctx.lr = 0x821D061C;
	__restfpr_17(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_821D0620:
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f20,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f20,16(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f20,20(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de048
	ctx.lr = 0x821D0640;
	__restfpr_17(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_821D0644:
	// stfs f20,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f20,4(r30)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f20,8(r30)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de048
	ctx.lr = 0x821D0660;
	__restfpr_17(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821CFEB0) {
	__imp__sub_821CFEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D0664) {
	__imp__sub_821D0664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821D0670;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x821D0678;
	__savefpr_26(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,8552
	ctx.r31.s64 = ctx.r11.s64 + 8552;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
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
	// lfs f29,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x821cfeb0
	ctx.lr = 0x821D06B8;
	sub_821CFEB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d07cc
	if (!ctx.cr6.eq) goto loc_821D07CC;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x821d06e4
	if (ctx.cr6.gt) goto loc_821D06E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d0b24
	if (!ctx.cr6.eq) goto loc_821D0B24;
loc_821D06E4:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r4,76
	ctx.r6.s64 = ctx.r4.s64 + 76;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D071C;
	sub_821FE618(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lfs f10,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x821d0770
	if (!ctx.cr6.gt) goto loc_821D0770;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f5,f6,f0,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmadds f2,f3,f0,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821D0770:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x821d0b24
	if (!ctx.cr6.gt) goto loc_821D0B24;
	// lbz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d0b24
	if (!ctx.cr6.eq) goto loc_821D0B24;
	// lbz r10,170(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d0b24
	if (!ctx.cr6.eq) goto loc_821D0B24;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82276090
	ctx.lr = 0x821D07AC;
	sub_82276090(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x821D07C8;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821D07CC:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821d08cc
	if (ctx.cr6.eq) goto loc_821D08CC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x821d0878
	if (!ctx.cr6.gt) goto loc_821D0878;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d0878
	if (!ctx.cr6.eq) goto loc_821D0878;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D083C;
	sub_821FE618(ctx, base);
	// lfs f10,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// beq cr6,0x821d0854
	if (ctx.cr6.eq) goto loc_821D0854;
	// lbz r10,170(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d0874
	if (!ctx.cr6.eq) goto loc_821D0874;
loc_821D0854:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x821D0870;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821D0874:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
loc_821D0878:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D08B0;
	sub_821FE618(ctx, base);
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d08e0
	if (ctx.cr6.eq) goto loc_821D08E0;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bne cr6,0x821d0b28
	if (!ctx.cr6.eq) goto loc_821D0B28;
loc_821D08CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x821D08DC;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821D08E0:
	// lwz r30,-4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,272
	ctx.r5.s64 = 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821D08F4;
	sub_823DE1F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x823de1f0
	ctx.lr = 0x821D0904;
	sub_823DE1F0(ctx, base);
	// li r27,2047
	ctx.r27.s64 = 2047;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r27.u32);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f31,f12,f0,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f7,f9,f0,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmadds f6,f8,f0,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f29,12(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f28,16(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f27,20(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f30
	ctx.cr6.compare(ctx.f5.f64, ctx.f30.f64);
	// bge cr6,0x821d097c
	if (!ctx.cr6.lt) goto loc_821D097C;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// fcmpu cr6,f27,f26
	ctx.cr6.compare(ctx.f27.f64, ctx.f26.f64);
	// ble cr6,0x821d097c
	if (!ctx.cr6.gt) goto loc_821D097C;
	// stfs f26,20(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_821D097C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821cfeb0
	ctx.lr = 0x821D0988;
	sub_821CFEB0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821d09c4
	if (!ctx.cr6.eq) goto loc_821D09C4;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r5,272
	ctx.r5.s64 = 272;
	// bl 0x823de1f0
	ctx.lr = 0x821D09A0;
	sub_823DE1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x823de1f0
	ctx.lr = 0x821D09B0;
	sub_823DE1F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x821D09C0;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821D09C4:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r4,76
	ctx.r6.s64 = ctx.r4.s64 + 76;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fsel f8,f9,f31,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D0A14;
	sub_821FE618(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c76d8
	ctx.lr = 0x821D0A1C;
	sub_821C76D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d0a30
	if (ctx.cr6.eq) goto loc_821D0A30;
	// stb r11,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r11.u8);
loc_821D0A30:
	// lbz r8,169(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d0a84
	if (!ctx.cr6.eq) goto loc_821D0A84;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f5,f6,f0,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmadds f2,f3,f0,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821D0A84:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821d0b24
	if (!ctx.cr6.lt) goto loc_821D0B24;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6032(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821d0ad8
	if (!ctx.cr6.lt) goto loc_821D0AD8;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,272
	ctx.r5.s64 = 272;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821D0AB4;
	sub_823DE1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x823de1f0
	ctx.lr = 0x821D0AC4;
	sub_823DE1F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x821D0AD4;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821D0AD8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// lbz r5,170(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f1,-30872(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30872);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821cfdd8
	ctx.lr = 0x821D0AF8;
	sub_821CFDD8(ctx, base);
	// lfs f13,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6020);
	ctx.f12.f64 = double(temp.f32);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x821d0b24
	if (!ctx.cr6.gt) goto loc_821D0B24;
	// stw r27,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r27.u32);
loc_821D0B24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D0B28:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x821D0B34;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D0668) {
	__imp__sub_821D0668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0B38) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d0668
	sub_821D0668(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D0B38) {
	__imp__sub_821D0B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D0B44) {
	__imp__sub_821D0B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0B48) {
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
	ctx.lr = 0x821D0B58;
	__savefpr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,8552
	ctx.r10.s64 = ctx.r11.s64 + 8552;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,8552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8552);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 + 12;
	// lfs f1,-30872(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30872);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f13,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f31,20(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lbz r5,54(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f6,f7,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmr f28,f7
	ctx.f28.f64 = ctx.f7.f64;
	// fmr f27,f9
	ctx.f27.f64 = ctx.f9.f64;
	// fsqrts f29,f6
	ctx.f29.f64 = double(float(sqrt(ctx.f6.f64)));
	// bl 0x821cfdd8
	ctx.lr = 0x821D0BD4;
	sub_821CFDD8(ctx, base);
	// lfs f5,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmadds f2,f4,f27,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f27.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// ble cr6,0x821d0c50
	if (!ctx.cr6.gt) goto loc_821D0C50;
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// fmadds f10,f5,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f30,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fdivs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f3,0(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,8(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f2,4(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f0,f3,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_821D0C50:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821d0c7c
	if (!ctx.cr6.eq) goto loc_821D0C7C;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821d0c7c
	if (!ctx.cr6.eq) goto loc_821D0C7C;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d0c7c
	if (ctx.cr6.eq) goto loc_821D0C7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d0ca0
	goto loc_821D0CA0;
loc_821D0C7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-30868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bl 0x821d0668
	ctx.lr = 0x821D0CA0;
	sub_821D0668(ctx, base);
loc_821D0CA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x821D0CAC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D0B48) {
	__imp__sub_821D0B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,8552
	ctx.r9.s64 = ctx.r11.s64 + 8552;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,8552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8552);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x821d0668
	sub_821D0668(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D0CB8) {
	__imp__sub_821D0CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D0D04) {
	__imp__sub_821D0D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r11,8548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8548);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D0D08) {
	__imp__sub_821D0D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D0D44) {
	__imp__sub_821D0D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,8552
	ctx.r9.s64 = ctx.r11.s64 + 8552;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x821cfeb0
	sub_821CFEB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D0D48) {
	__imp__sub_821D0D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D0D94) {
	__imp__sub_821D0D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D0D98) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r11,8552
	ctx.r31.s64 = ctx.r11.s64 + 8552;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lfs f30,5876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5876);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 + 72;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821D0DFC:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821d0dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D0DFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bgt cr6,0x821d0e54
	if (ctx.cr6.gt) goto loc_821D0E54;
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,2047
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2047, ctx.xer);
	// beq cr6,0x821d0e54
	if (ctx.cr6.eq) goto loc_821D0E54;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821d0e5c
	goto loc_821D0E5C;
loc_821D0E54:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
loc_821D0E5C:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fe618
	ctx.lr = 0x821D0E80;
	sub_821FE618(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c76d8
	ctx.lr = 0x821D0E88;
	sub_821C76D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d0e9c
	if (ctx.cr6.eq) goto loc_821D0E9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
loc_821D0E9C:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x821D0EAC;
	sub_823DE1F0(ctx, base);
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d0f94
	if (ctx.cr6.eq) goto loc_821D0F94;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d0f10
	if (ctx.cr6.eq) goto loc_821D0F10;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821D0ED0;
	sub_82276090(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x821cfd70
	ctx.lr = 0x821D0ED8;
	sub_821CFD70(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r11,0,7,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D0F00;
	sub_821FE618(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x821D0F10;
	sub_823DE1F0(ctx, base);
loc_821D0F10:
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d0f94
	if (ctx.cr6.eq) goto loc_821D0F94;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
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
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x821fe618
	ctx.lr = 0x821D0F54;
	sub_821FE618(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x821D0F64;
	sub_823DE1F0(ctx, base);
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d0f94
	if (ctx.cr6.eq) goto loc_821D0F94;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821D0F78;
	sub_82276090(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r3,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x821d1090
	goto loc_821D1090;
loc_821D0F94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d0fc8
	if (!ctx.cr6.eq) goto loc_821D0FC8;
loc_821D0FAC:
	// li r8,2047
	ctx.r8.s64 = 2047;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r8,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r8.u16);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x821d1090
	goto loc_821D1090;
loc_821D0FC8:
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d1030
	if (!ctx.cr6.eq) goto loc_821D1030;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821d100c
	if (!ctx.cr6.gt) goto loc_821D100C;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f30
	ctx.cr6.compare(ctx.f5.f64, ctx.f30.f64);
	// bgt cr6,0x821d0fac
	if (ctx.cr6.gt) goto loc_821D0FAC;
loc_821D100C:
	// lbz r9,186(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d1030
	if (!ctx.cr6.eq) goto loc_821D1030;
	// li r8,2047
	ctx.r8.s64 = 2047;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r8,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r8.u16);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x821d1090
	goto loc_821D1090;
loc_821D1030:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x821d1060
	if (ctx.cr6.lt) goto loc_821D1060;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x821d1060
	if (ctx.cr6.eq) goto loc_821D1060;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821d1064
	if (!ctx.cr6.eq) goto loc_821D1064;
loc_821D1060:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821D1064:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82276090
	ctx.lr = 0x821D107C;
	sub_82276090(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// bl 0x821cfd70
	ctx.lr = 0x821D1090;
	sub_821CFD70(ctx, base);
loc_821D1090:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

PPC_WEAK_FUNC(sub_821D0D98) {
	__imp__sub_821D0D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D10AC) {
	__imp__sub_821D10AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D10B0) {
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
	// lis r31,-32053
	ctx.r31.s64 = -2100625408;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8548(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8548);
	// lhz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 24);
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// cmplwi cr6,r10,2047
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2047, ctx.xer);
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// beq cr6,0x821d119c
	if (ctx.cr6.eq) goto loc_821D119C;
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821d1104
	if (ctx.cr6.eq) goto loc_821D1104;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821d1104
	if (ctx.cr6.eq) goto loc_821D1104;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x821d1104
	if (ctx.cr6.eq) goto loc_821D1104;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821d119c
	if (!ctx.cr6.eq) goto loc_821D119C;
loc_821D1104:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r10.u32);
	// cmpwi cr6,r10,500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 500, ctx.xer);
	// blt cr6,0x821d119c
	if (ctx.cr6.lt) goto loc_821D119C;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r9,60(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r10,9624
	ctx.r7.s64 = ctx.r10.s64 + 9624;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mulli r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 * 624;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x821be0d8
	ctx.lr = 0x821D1170;
	sub_821BE0D8(ctx, base);
	// lwz r11,8548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8548);
	// lis r6,4194
	ctx.r6.s64 = 274857984;
	// ori r5,r6,19923
	ctx.r5.u64 = ctx.r6.u64 | 19923;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulhw r3,r4,r5
	ctx.r3.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32)) >> 32;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r10,500
	ctx.r9.s64 = ctx.r10.s64 * 500;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
loc_821D119C:
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

PPC_WEAK_FUNC(sub_821D10B0) {
	__imp__sub_821D10B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D11B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32053
	ctx.r30.s64 = -2100625408;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r5,8548(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8548);
	// lwz r11,-16944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16944);
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821d1228
	if (!ctx.cr6.lt) goto loc_821D1228;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r9,108(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r11,-6600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6600);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821d1388
	if (!ctx.cr6.lt) goto loc_821D1388;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, ctx.r11.u32);
	// b 0x821d1388
	goto loc_821D1388;
loc_821D1228:
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,-6364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6364);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fdivs f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821d1258
	if (!ctx.cr6.gt) goto loc_821D1258;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821D1258:
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r8,108(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// lwz r11,-6576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6576);
	// lwz r10,-6668(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6668);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821d1388
	if (!ctx.cr6.lt) goto loc_821D1388;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,84(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f8,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f4,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f0,8336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,-31044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31044);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f1,92(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,60(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmadds f10,f9,f13,f7
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f9,f9,f13,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821D134C;
	sub_821FE618(ctx, base);
	// lbz r8,169(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821d1388
	if (ctx.cr6.eq) goto loc_821D1388;
	// lwz r11,8548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8548);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8222f978
	ctx.lr = 0x821D137C;
	sub_8222F978(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,8548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8548);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
loc_821D1388:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_821D11B0) {
	__imp__sub_821D11B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D13A0) {
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
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r31,r11,8548
	ctx.r31.s64 = ctx.r11.s64 + 8548;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x821c76d8
	ctx.lr = 0x821D13C4;
	sub_821C76D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x821d1430
	if (ctx.cr6.eq) goto loc_821D1430;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-30864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30864);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f10,f13,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821d1404
	if (!ctx.cr6.lt) goto loc_821D1404;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x821d1434
	goto loc_821D1434;
loc_821D1404:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821d1420
	if (ctx.cr6.gt) goto loc_821D1420;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d1430
	if (!ctx.cr6.eq) goto loc_821D1430;
loc_821D1420:
	// lbz r10,266(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 266);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// bne cr6,0x821d1434
	if (!ctx.cr6.eq) goto loc_821D1434;
loc_821D1430:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821D1434:
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821D13A0) {
	__imp__sub_821D13A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D144C) {
	__imp__sub_821D144C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D1458;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,8552
	ctx.r30.s64 = ctx.r11.s64 + 8552;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// stw r29,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r29,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r29.u8);
	// cmplwi cr6,r10,2046
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2046, ctx.xer);
	// stw r9,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r9.u32);
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
	// bne cr6,0x821d14e4
	if (!ctx.cr6.eq) goto loc_821D14E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d14e4
	if (!ctx.cr6.eq) goto loc_821D14E4;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d14e4
	if (!ctx.cr6.eq) goto loc_821D14E4;
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d14e4
	if (!ctx.cr6.eq) goto loc_821D14E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D14E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821D14F4;
	sub_823DE090(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r29,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r29.u8);
	// bne cr6,0x821d1570
	if (!ctx.cr6.eq) goto loc_821D1570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821d1590
	goto loc_821D1590;
loc_821D1570:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d1588
	if (!ctx.cr6.eq) goto loc_821D1588;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821d1590
	goto loc_821D1590;
loc_821D1588:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
loc_821D1590:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bne cr6,0x821d15ec
	if (!ctx.cr6.eq) goto loc_821D15EC;
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D15EC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821d1604
	if (!ctx.cr6.eq) goto loc_821D1604;
	// bl 0x821d0d48
	ctx.lr = 0x821D15F8;
	sub_821D0D48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D1604:
	// bl 0x821d0d98
	ctx.lr = 0x821D1608;
	sub_821D0D98(ctx, base);
	// bl 0x821d13a0
	ctx.lr = 0x821D160C;
	sub_821D13A0(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d1648
	if (ctx.cr6.eq) goto loc_821D1648;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821d1648
	if (ctx.cr6.eq) goto loc_821D1648;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d1638
	if (ctx.cr6.eq) goto loc_821D1638;
	// bl 0x821d0b48
	ctx.lr = 0x821D1634;
	sub_821D0B48(ctx, base);
	// b 0x821d164c
	goto loc_821D164C;
loc_821D1638:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d0668
	ctx.lr = 0x821D1644;
	sub_821D0668(ctx, base);
	// b 0x821d164c
	goto loc_821D164C;
loc_821D1648:
	// bl 0x821d0cb8
	ctx.lr = 0x821D164C;
	sub_821D0CB8(ctx, base);
loc_821D164C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d16d0
	if (ctx.cr6.eq) goto loc_821D16D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6032);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d167c
	if (!ctx.cr6.lt) goto loc_821D167C;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d16d0
	if (ctx.cr6.eq) goto loc_821D16D0;
loc_821D167C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// srawi r8,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 20;
	// lfs f13,7544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7544);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x821d16c4
	if (ctx.cr6.gt) goto loc_821D16C4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_821D16C4:
	// stb r10,101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 101, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D16D0:
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D1450) {
	__imp__sub_821D1450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D16DC) {
	__imp__sub_821D16DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D16E0) {
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
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,8548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8548, ctx.r3.u32);
	// beq cr6,0x821d1704
	if (ctx.cr6.eq) goto loc_821D1704;
	// bl 0x821d10b0
	ctx.lr = 0x821D1704;
	sub_821D10B0(ctx, base);
loc_821D1704:
	// bl 0x821d11b0
	ctx.lr = 0x821D1708;
	sub_821D11B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D16E0) {
	__imp__sub_821D16E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1718) {
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
	// bne cr6,0x821d1754
	if (!ctx.cr6.eq) goto loc_821D1754;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d1764
	if (!ctx.cr6.eq) goto loc_821D1764;
loc_821D1754:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1760;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1764:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D1718) {
	__imp__sub_821D1718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D1774) {
	__imp__sub_821D1774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821D1780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4976
	ctx.r3.s64 = ctx.r3.s64 + 4976;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821D179C;
	sub_821E2E18(ctx, base);
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d17dc
	if (!ctx.cr6.eq) goto loc_821D17DC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821d17dc
	if (!ctx.cr6.eq) goto loc_821D17DC;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4952);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821d17dc
	if (!ctx.cr6.eq) goto loc_821D17DC;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4956);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821d1804
	if (ctx.cr6.eq) goto loc_821D1804;
loc_821D17DC:
	// stb r28,721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 721, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9c18
	ctx.lr = 0x821D17E8;
	sub_821A9C18(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4948, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4952(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4952, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4956(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4956, temp.u32);
	// stw r29,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r29.u32);
loc_821D1804:
	// lwz r4,4972(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d1824
	if (ctx.cr6.eq) goto loc_821D1824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cd78
	ctx.lr = 0x821D1818;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d1824
	if (!ctx.cr6.eq) goto loc_821D1824;
	// stw r28,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r28.u32);
loc_821D1824:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D1778) {
	__imp__sub_821D1778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D182C) {
	__imp__sub_821D182C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1830) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d1874
	if (!ctx.cr6.eq) goto loc_821D1874;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821d1880
	if (!ctx.cr6.eq) goto loc_821D1880;
loc_821D1874:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1880;
	sub_822AD548(ctx, base);
loc_821D1880:
	// bl 0x822acb68
	ctx.lr = 0x821D1884;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// ble cr6,0x821d1898
	if (!ctx.cr6.gt) goto loc_821D1898;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x821D1898;
	sub_822AD350(ctx, base);
loc_821D1898:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d4f0
	ctx.lr = 0x821D18A4;
	sub_8220D4F0(ctx, base);
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

PPC_WEAK_FUNC(sub_821D1830) {
	__imp__sub_821D1830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D18B8) {
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bgt cr6,0x821d18f0
	if (ctx.cr6.gt) goto loc_821D18F0;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d199c
	if (!ctx.cr6.eq) goto loc_821D199C;
	// bl 0x821da9e8
	ctx.lr = 0x821D18EC;
	sub_821DA9E8(ctx, base);
	// b 0x821d18f8
	goto loc_821D18F8;
loc_821D18F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dac60
	ctx.lr = 0x821D18F8;
	sub_821DAC60(ctx, base);
loc_821D18F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D1904;
	sub_822B2498(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f12,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// ble cr6,0x821d1958
	if (!ctx.cr6.gt) goto loc_821D1958;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,15
	ctx.r10.s64 = 15;
	// lfs f12,14380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14380);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,688(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stw r10,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r10.u32);
	// b 0x821d1968
	goto loc_821D1968;
loc_821D1958:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f13,688(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
loc_821D1968:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D1970;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3436, temp.u32);
	// stfs f0,3440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3440, temp.u32);
	// stfs f0,3444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3444, temp.u32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f0,3472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f0,3476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// bl 0x821aba40
	ctx.lr = 0x821D199C;
	sub_821ABA40(ctx, base);
loc_821D199C:
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

PPC_WEAK_FUNC(sub_821D18B8) {
	__imp__sub_821D18B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D19B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D19B4) {
	__imp__sub_821D19B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D19B8) {
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
	// bne cr6,0x821d19f8
	if (!ctx.cr6.eq) goto loc_821D19F8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d1a08
	if (!ctx.cr6.eq) goto loc_821D1A08;
loc_821D19F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1A04;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D1A08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d1a54
	if (ctx.cr6.eq) goto loc_821D1A54;
	// addi r5,r31,3384
	ctx.r5.s64 = ctx.r31.s64 + 3384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8f78
	ctx.lr = 0x821D1A24;
	sub_821B8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d1a54
	if (ctx.cr6.eq) goto loc_821D1A54;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da9e8
	ctx.lr = 0x821D1A38;
	sub_821DA9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821D1A40;
	sub_821ABA40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f0,3472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f0,3476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
loc_821D1A54:
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

PPC_WEAK_FUNC(sub_821D19B8) {
	__imp__sub_821D19B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1A68) {
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
	// bne cr6,0x821d1aa4
	if (!ctx.cr6.eq) goto loc_821D1AA4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d1ab4
	if (!ctx.cr6.eq) goto loc_821D1AB4;
loc_821D1AA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1AB0;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D1AB4:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d18b8
	ctx.lr = 0x821D1AC0;
	sub_821D18B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D1A68) {
	__imp__sub_821D1A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1AD0) {
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
	// bne cr6,0x821d1b0c
	if (!ctx.cr6.eq) goto loc_821D1B0C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d1b1c
	if (!ctx.cr6.eq) goto loc_821D1B1C;
loc_821D1B0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1B18;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D1B1C:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d18b8
	ctx.lr = 0x821D1B28;
	sub_821D18B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D1AD0) {
	__imp__sub_821D1AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1B38) {
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
	// bne cr6,0x821d1b80
	if (!ctx.cr6.eq) goto loc_821D1B80;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d1b80
	if (ctx.cr6.eq) goto loc_821D1B80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d1b90
	goto loc_821D1B90;
loc_821D1B80:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1B8C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D1B90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D1B9C;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bb408
	ctx.lr = 0x821D1BA8;
	sub_821BB408(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D1BAC;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D1B38) {
	__imp__sub_821D1B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1BC0) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d1c0c
	if (!ctx.cr6.eq) goto loc_821D1C0C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d1c0c
	if (ctx.cr6.eq) goto loc_821D1C0C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d1c1c
	goto loc_821D1C1C;
loc_821D1C0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1C18;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D1C1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822acb68
	ctx.lr = 0x821D1C28;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x821d1c5c
	if (!ctx.cr6.eq) goto loc_821D1C5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D1C38;
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
	// bge cr6,0x821d1c5c
	if (!ctx.cr6.lt) goto loc_821D1C5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// bl 0x822ad4e0
	ctx.lr = 0x821D1C5C;
	sub_822AD4E0(ctx, base);
loc_821D1C5C:
	// bl 0x822acb68
	ctx.lr = 0x821D1C60;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x821d1c70
	if (!ctx.cr6.lt) goto loc_821D1C70;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821d1c80
	goto loc_821D1C80;
loc_821D1C70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D1C7C;
	sub_822B2498(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_821D1C80:
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b3bf0
	ctx.lr = 0x821D1C90;
	sub_821B3BF0(ctx, base);
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

PPC_WEAK_FUNC(sub_821D1BC0) {
	__imp__sub_821D1BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1CA8) {
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
	// bne cr6,0x821d1cf4
	if (!ctx.cr6.eq) goto loc_821D1CF4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d1cf4
	if (ctx.cr6.eq) goto loc_821D1CF4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d1d04
	goto loc_821D1D04;
loc_821D1CF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1D00;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D1D04:
	// lhz r3,214(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x821D1D0C;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821D1D10;
	sub_82232100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x821D1D18;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d1d40
	if (ctx.cr6.eq) goto loc_821D1D40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x821D1D2C;
	sub_82332B28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// bl 0x822e84f0
	ctx.lr = 0x821D1D3C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D1D40;
	sub_822AD350(ctx, base);
loc_821D1D40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b3ea8
	ctx.lr = 0x821D1D48;
	sub_821B3EA8(ctx, base);
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

PPC_WEAK_FUNC(sub_821D1CA8) {
	__imp__sub_821D1CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1D60) {
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
	// bne cr6,0x821d1da0
	if (!ctx.cr6.eq) goto loc_821D1DA0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d1db0
	if (!ctx.cr6.eq) goto loc_821D1DB0;
loc_821D1DA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1DAC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D1DB0:
	// bl 0x822acb68
	ctx.lr = 0x821D1DB4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1dd0
	if (ctx.cr6.eq) goto loc_821D1DD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D1DC8;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x821d1dd4
	goto loc_821D1DD4;
loc_821D1DD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821D1DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b3f70
	ctx.lr = 0x821D1DDC;
	sub_821B3F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1de8
	if (ctx.cr6.eq) goto loc_821D1DE8;
	// bl 0x82229b60
	ctx.lr = 0x821D1DE8;
	sub_82229B60(ctx, base);
loc_821D1DE8:
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

PPC_WEAK_FUNC(sub_821D1D60) {
	__imp__sub_821D1D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D1DFC) {
	__imp__sub_821D1DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1E00) {
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
	// bne cr6,0x821d1e40
	if (!ctx.cr6.eq) goto loc_821D1E40;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d1e50
	if (!ctx.cr6.eq) goto loc_821D1E50;
loc_821D1E40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1E4C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D1E50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D1E58;
	sub_821AA3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1e94
	if (ctx.cr6.eq) goto loc_821D1E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d1e94
	if (ctx.cr6.eq) goto loc_821D1E94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2bc8
	ctx.lr = 0x821D1E7C;
	sub_821B2BC8(ctx, base);
	// stfs f1,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
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
loc_821D1E94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
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

PPC_WEAK_FUNC(sub_821D1E00) {
	__imp__sub_821D1E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D1EB4) {
	__imp__sub_821D1EB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1EB8) {
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
	// bne cr6,0x821d1ef4
	if (!ctx.cr6.eq) goto loc_821D1EF4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d1f04
	if (!ctx.cr6.eq) goto loc_821D1F04;
loc_821D1EF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1F00;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D1F04:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821bacc0
	ctx.lr = 0x821D1F0C;
	sub_821BACC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1f18
	if (ctx.cr6.eq) goto loc_821D1F18;
	// bl 0x82237bc0
	ctx.lr = 0x821D1F18;
	sub_82237BC0(ctx, base);
loc_821D1F18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D1EB8) {
	__imp__sub_821D1EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1F28) {
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
	// bne cr6,0x821d1f68
	if (!ctx.cr6.eq) goto loc_821D1F68;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d1f78
	if (!ctx.cr6.eq) goto loc_821D1F78;
loc_821D1F68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1F74;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D1F78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D1F80;
	sub_822B1FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821baf78
	ctx.lr = 0x821D1F90;
	sub_821BAF78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1f9c
	if (ctx.cr6.eq) goto loc_821D1F9C;
	// bl 0x82237bc0
	ctx.lr = 0x821D1F9C;
	sub_82237BC0(ctx, base);
loc_821D1F9C:
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

PPC_WEAK_FUNC(sub_821D1F28) {
	__imp__sub_821D1F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D1FB0) {
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
	// bne cr6,0x821d1fec
	if (!ctx.cr6.eq) goto loc_821D1FEC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d1ffc
	if (!ctx.cr6.eq) goto loc_821D1FFC;
loc_821D1FEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D1FF8;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D1FFC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821bb0f0
	ctx.lr = 0x821D2004;
	sub_821BB0F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D1FB0) {
	__imp__sub_821D1FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D2014) {
	__imp__sub_821D2014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2018) {
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
	// bne cr6,0x821d2054
	if (!ctx.cr6.eq) goto loc_821D2054;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d2064
	if (!ctx.cr6.eq) goto loc_821D2064;
loc_821D2054:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2060;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D2064:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821bb3d0
	ctx.lr = 0x821D206C;
	sub_821BB3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d2078
	if (ctx.cr6.eq) goto loc_821D2078;
	// bl 0x82237bc0
	ctx.lr = 0x821D2078;
	sub_82237BC0(ctx, base);
loc_821D2078:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D2018) {
	__imp__sub_821D2018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2088) {
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
	// bne cr6,0x821d20c4
	if (!ctx.cr6.eq) goto loc_821D20C4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d20d4
	if (!ctx.cr6.eq) goto loc_821D20D4;
loc_821D20C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D20D0;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D20D4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821bb188
	ctx.lr = 0x821D20DC;
	sub_821BB188(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d20e8
	if (ctx.cr6.eq) goto loc_821D20E8;
	// bl 0x82237bc0
	ctx.lr = 0x821D20E8;
	sub_82237BC0(ctx, base);
loc_821D20E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D2088) {
	__imp__sub_821D2088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D20F8) {
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
	// bne cr6,0x821d2138
	if (!ctx.cr6.eq) goto loc_821D2138;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d2148
	if (!ctx.cr6.eq) goto loc_821D2148;
loc_821D2138:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2144;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2148:
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2160
	if (ctx.cr6.eq) goto loc_821D2160;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27196
	ctx.r3.s64 = ctx.r11.s64 + -27196;
	// bl 0x822ad350
	ctx.lr = 0x821D2160;
	sub_822AD350(ctx, base);
loc_821D2160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae080
	ctx.lr = 0x821D2168;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2180
	if (ctx.cr6.eq) goto loc_821D2180;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27256
	ctx.r3.s64 = ctx.r11.s64 + -27256;
	// bl 0x822ad350
	ctx.lr = 0x821D2180;
	sub_822AD350(ctx, base);
loc_821D2180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821D2188;
	sub_821ABA40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4688, ctx.r11.u32);
	// bl 0x82234810
	ctx.lr = 0x821D2198;
	sub_82234810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bb248
	ctx.lr = 0x821D21A4;
	sub_821BB248(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D21AC;
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

PPC_WEAK_FUNC(sub_821D20F8) {
	__imp__sub_821D20F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D21C0) {
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
	// bne cr6,0x821d2200
	if (!ctx.cr6.eq) goto loc_821D2200;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d2210
	if (!ctx.cr6.eq) goto loc_821D2210;
loc_821D2200:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D220C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2210:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d2228
	if (!ctx.cr6.eq) goto loc_821D2228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x821D2228;
	sub_822ACB78(ctx, base);
loc_821D2228:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821b91f0
	ctx.lr = 0x821D2238;
	sub_821B91F0(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D223C;
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

PPC_WEAK_FUNC(sub_821D21C0) {
	__imp__sub_821D21C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2250) {
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
	// bne cr6,0x821d2298
	if (!ctx.cr6.eq) goto loc_821D2298;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2298
	if (ctx.cr6.eq) goto loc_821D2298;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d22a8
	goto loc_821D22A8;
loc_821D2298:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D22A4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D22A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D22B0;
	sub_822B1FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf1a8
	ctx.lr = 0x821D22B8;
	sub_821BF1A8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D22C0;
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

PPC_WEAK_FUNC(sub_821D2250) {
	__imp__sub_821D2250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D22D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D22D4) {
	__imp__sub_821D22D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D22D8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d2324
	if (!ctx.cr6.eq) goto loc_821D2324;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2324
	if (ctx.cr6.eq) goto loc_821D2324;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d2334
	goto loc_821D2334;
loc_821D2324:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2330;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D2334:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821D233C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d2354
	if (ctx.cr6.eq) goto loc_821D2354;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821D234C;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821D2354:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf4e0
	ctx.lr = 0x821D2360;
	sub_821BF4E0(ctx, base);
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

PPC_WEAK_FUNC(sub_821D22D8) {
	__imp__sub_821D22D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2378) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d23c4
	if (!ctx.cr6.eq) goto loc_821D23C4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d23c4
	if (ctx.cr6.eq) goto loc_821D23C4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d23d4
	goto loc_821D23D4;
loc_821D23C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D23D0;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D23D4:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821D23DC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d23f4
	if (ctx.cr6.eq) goto loc_821D23F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821D23EC;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821D23F4:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf600
	ctx.lr = 0x821D2400;
	sub_821BF600(ctx, base);
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

PPC_WEAK_FUNC(sub_821D2378) {
	__imp__sub_821D2378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2418) {
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
	// bne cr6,0x821d2460
	if (!ctx.cr6.eq) goto loc_821D2460;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2460
	if (ctx.cr6.eq) goto loc_821D2460;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d2470
	goto loc_821D2470;
loc_821D2460:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D246C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac798
	ctx.lr = 0x821D2478;
	sub_821AC798(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d2490
	if (!ctx.cr6.eq) goto loc_821D2490;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// bl 0x822ad350
	ctx.lr = 0x821D2490;
	sub_822AD350(ctx, base);
loc_821D2490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac6e0
	ctx.lr = 0x821D2498;
	sub_821AC6E0(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D249C;
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

PPC_WEAK_FUNC(sub_821D2418) {
	__imp__sub_821D2418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D24B0) {
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
	// bne cr6,0x821d24f8
	if (!ctx.cr6.eq) goto loc_821D24F8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d24f8
	if (ctx.cr6.eq) goto loc_821D24F8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d2508
	goto loc_821D2508;
loc_821D24F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2504;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2508:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac798
	ctx.lr = 0x821D2510;
	sub_821AC798(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d2528
	if (!ctx.cr6.eq) goto loc_821D2528;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// bl 0x822ad350
	ctx.lr = 0x821D2528;
	sub_822AD350(ctx, base);
loc_821D2528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf6e8
	ctx.lr = 0x821D2530;
	sub_821BF6E8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D2538;
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

PPC_WEAK_FUNC(sub_821D24B0) {
	__imp__sub_821D24B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D254C) {
	__imp__sub_821D254C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2550) {
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
	// bne cr6,0x821d258c
	if (!ctx.cr6.eq) goto loc_821D258C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d259c
	if (!ctx.cr6.eq) goto loc_821D259C;
loc_821D258C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2598;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D259C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821ddc88
	ctx.lr = 0x821D25A4;
	sub_821DDC88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D2550) {
	__imp__sub_821D2550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D25B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D25B4) {
	__imp__sub_821D25B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D25B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D25C0;
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d25fc
	if (!ctx.cr6.eq) goto loc_821D25FC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d260c
	if (!ctx.cr6.eq) goto loc_821D260C;
loc_821D25FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2608;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D260C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d262c
	if (!ctx.cr6.eq) goto loc_821D262C;
	// lfs f13,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821d2650
	if (ctx.cr6.eq) goto loc_821D2650;
loc_821D262C:
	// lhz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2650
	if (ctx.cr6.eq) goto loc_821D2650;
	// lhz r11,386(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2650
	if (ctx.cr6.eq) goto loc_821D2650;
	// lhz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d265c
	if (!ctx.cr6.eq) goto loc_821D265C;
loc_821D2650:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26940
	ctx.r3.s64 = ctx.r11.s64 + -26940;
	// bl 0x822ad350
	ctx.lr = 0x821D265C;
	sub_822AD350(ctx, base);
loc_821D265C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2664;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
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
	// bl 0x822acb68
	ctx.lr = 0x821D2684;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d269c
	if (!ctx.cr6.gt) goto loc_821D269C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821D2694;
	sub_822B1C50(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821D269C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5150
	ctx.lr = 0x821D26AC;
	sub_821E5150(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r8,126(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// lwz r11,-6136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6136);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821d2788
	if (!ctx.cr6.eq) goto loc_821D2788;
	// lhz r11,386(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2788
	if (ctx.cr6.eq) goto loc_821D2788;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lhz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x821a9830
	ctx.lr = 0x821D2700;
	sub_821A9830(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r8,32580
	ctx.r29.s64 = ctx.r8.s64 + 32580;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x821D2730;
	sub_8220BF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,386(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// bl 0x821a9830
	ctx.lr = 0x821D273C;
	sub_821A9830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8220bf58
	ctx.lr = 0x821D275C;
	sub_8220BF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r31,388(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 388);
	// bl 0x821a9830
	ctx.lr = 0x821D2768;
	sub_821A9830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8220bf58
	ctx.lr = 0x821D2788;
	sub_8220BF58(ctx, base);
loc_821D2788:
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

PPC_WEAK_FUNC(sub_821D25B8) {
	__imp__sub_821D25B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D27A0;
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
	// bne cr6,0x821d27e0
	if (!ctx.cr6.eq) goto loc_821D27E0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d27f0
	if (!ctx.cr6.eq) goto loc_821D27F0;
loc_821D27E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D27EC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D27F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D27F8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e5290
	ctx.lr = 0x821D281C;
	sub_821E5290(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-6136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6136);
	// lhz r7,126(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821d2900
	if (!ctx.cr6.eq) goto loc_821D2900;
	// lhz r11,386(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2900
	if (ctx.cr6.eq) goto loc_821D2900;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lhz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x821a9830
	ctx.lr = 0x821D2870;
	sub_821A9830(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r29,r9,32592
	ctx.r29.s64 = ctx.r9.s64 + 32592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f30,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x8220bf58
	ctx.lr = 0x821D28A8;
	sub_8220BF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,386(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// bl 0x821a9830
	ctx.lr = 0x821D28B4;
	sub_821A9830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8220bf58
	ctx.lr = 0x821D28D4;
	sub_8220BF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r31,388(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 388);
	// bl 0x821a9830
	ctx.lr = 0x821D28E0;
	sub_821A9830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8220bf58
	ctx.lr = 0x821D2900;
	sub_8220BF58(ctx, base);
loc_821D2900:
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

PPC_WEAK_FUNC(sub_821D2798) {
	__imp__sub_821D2798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D2914) {
	__imp__sub_821D2914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D2920;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x821D2928;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2938;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2944;
	sub_822B1FB0(ctx, base);
	// lhz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d2974
	if (!ctx.cr6.eq) goto loc_821D2974;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d2984
	if (!ctx.cr6.eq) goto loc_821D2984;
loc_821D2974:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2980;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9830
	ctx.lr = 0x821D298C;
	sub_821A9830(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x821d29ac
	if (ctx.cr6.lt) goto loc_821D29AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26804
	ctx.r3.s64 = ctx.r11.s64 + -26804;
	// bl 0x822ad350
	ctx.lr = 0x821D29AC;
	sub_822AD350(ctx, base);
loc_821D29AC:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// bgt cr6,0x821d29c0
	if (ctx.cr6.gt) goto loc_821D29C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26864
	ctx.r3.s64 = ctx.r11.s64 + -26864;
	// bl 0x822ad350
	ctx.lr = 0x821D29C0;
	sub_822AD350(ctx, base);
loc_821D29C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f0,f31,f29
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f29.f64));
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// fdivs f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f28.f64));
	// stfs f13,396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// bl 0x822b1d30
	ctx.lr = 0x821D29E4;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r10,384(r31)
	PPC_STORE_U16(ctx.r31.u32 + 384, ctx.r10.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1d30
	ctx.lr = 0x821D29FC;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r9,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r9.u16);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1d30
	ctx.lr = 0x821D2A14;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// sth r8,388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 388, ctx.r8.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-6136(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6136);
	// lhz r5,126(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 126);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821d2aa4
	if (!ctx.cr6.eq) goto loc_821D2AA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,384(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r29,r11,-26884
	ctx.r29.s64 = ctx.r11.s64 + -26884;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220bf58
	ctx.lr = 0x821D2A64;
	sub_8220BF58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhz r5,386(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x821D2A84;
	sub_8220BF58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,388(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 388);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x821D2AA4;
	sub_8220BF58(ctx, base);
loc_821D2AA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x821D2AB0;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D2918) {
	__imp__sub_821D2918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D2AB4) {
	__imp__sub_821D2AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821D2AC0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
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
	// bne cr6,0x821d2b00
	if (!ctx.cr6.eq) goto loc_821D2B00;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d2b10
	if (!ctx.cr6.eq) goto loc_821D2B10;
loc_821D2B00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2B0C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2B10:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82317030
	ctx.lr = 0x821D2B24;
	sub_82317030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d2c70
	if (ctx.cr6.eq) goto loc_821D2C70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821d2b48
	if (ctx.cr6.lt) goto loc_821D2B48;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821d2b4c
	if (!ctx.cr6.gt) goto loc_821D2B4C;
loc_821D2B48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D2B4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d2c70
	if (!ctx.cr6.eq) goto loc_821D2C70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9830
	ctx.lr = 0x821D2B60;
	sub_821A9830(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822b1d30
	ctx.lr = 0x821D2B70;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x821D2B84;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822b1fb0
	ctx.lr = 0x821D2B94;
	sub_822B1FB0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2BA0;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2BAC;
	sub_822B1FB0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822846c0
	ctx.lr = 0x821D2BB8;
	sub_822846C0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822f75d8
	ctx.lr = 0x821D2BDC;
	sub_822F75D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f75d8
	ctx.lr = 0x821D2C00;
	sub_822F75D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaa38
	ctx.lr = 0x821D2C0C;
	sub_821AAA38(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-6136(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6136);
	// lhz r6,126(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x821d2c70
	if (!ctx.cr6.eq) goto loc_821D2C70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r31,r11,-26748
	ctx.r31.s64 = ctx.r11.s64 + -26748;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8220bf58
	ctx.lr = 0x821D2C50;
	sub_8220BF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x821D2C70;
	sub_8220BF58(ctx, base);
loc_821D2C70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_821D2AB8) {
	__imp__sub_821D2AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D2C84) {
	__imp__sub_821D2C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2C88) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d2ccc
	if (!ctx.cr6.eq) goto loc_821D2CCC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d2cdc
	if (!ctx.cr6.eq) goto loc_821D2CDC;
loc_821D2CCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2CD8;
	sub_822AD548(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D2CDC:
	// stb r31,406(r11)
	PPC_STORE_U8(ctx.r11.u32 + 406, ctx.r31.u8);
	// stb r31,405(r11)
	PPC_STORE_U8(ctx.r11.u32 + 405, ctx.r31.u8);
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

PPC_WEAK_FUNC(sub_821D2C88) {
	__imp__sub_821D2C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2CF8) {
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
	// bne cr6,0x821d2d44
	if (!ctx.cr6.eq) goto loc_821D2D44;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2d44
	if (ctx.cr6.eq) goto loc_821D2D44;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d2d54
	goto loc_821D2D54;
loc_821D2D44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2D50;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2D54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9830
	ctx.lr = 0x821D2D5C;
	sub_821A9830(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822b1d30
	ctx.lr = 0x821D2D6C;
	sub_822B1D30(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x821D2D7C;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1d30
	ctx.lr = 0x821D2D8C;
	sub_822B1D30(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x821c5e70
	ctx.lr = 0x821D2DA4;
	sub_821C5E70(ctx, base);
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

PPC_WEAK_FUNC(sub_821D2CF8) {
	__imp__sub_821D2CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D2DBC) {
	__imp__sub_821D2DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2DC0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r9,150(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821d2e14
	if (!ctx.cr6.eq) goto loc_821D2E14;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2e14
	if (ctx.cr6.eq) goto loc_821D2E14;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d2e24
	goto loc_821D2E24;
loc_821D2E14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2E20;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2E24:
	// lbz r11,523(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 523);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d2e3c
	if (!ctx.cr6.eq) goto loc_821D2E3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26736
	ctx.r3.s64 = ctx.r11.s64 + -26736;
	// bl 0x822ad350
	ctx.lr = 0x821D2E3C;
	sub_822AD350(ctx, base);
loc_821D2E3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D2E48;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x821D2E4C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d2e60
	if (!ctx.cr6.gt) goto loc_821D2E60;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2E5C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821D2E60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5f28
	ctx.lr = 0x821D2E70;
	sub_821C5F28(ctx, base);
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

PPC_WEAK_FUNC(sub_821D2DC0) {
	__imp__sub_821D2DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2E88) {
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
	// bne cr6,0x821d2ed8
	if (!ctx.cr6.eq) goto loc_821D2ED8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2ed8
	if (ctx.cr6.eq) goto loc_821D2ED8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d2ee8
	goto loc_821D2EE8;
loc_821D2ED8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2EE4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2EE8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2EF0;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2EFC;
	sub_822B1FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2F08;
	sub_822B1FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x821c6040
	ctx.lr = 0x821D2F18;
	sub_821C6040(ctx, base);
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

PPC_WEAK_FUNC(sub_821D2E88) {
	__imp__sub_821D2E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D2F34) {
	__imp__sub_821D2F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2F38) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821d2f8c
	if (!ctx.cr6.eq) goto loc_821D2F8C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2f8c
	if (ctx.cr6.eq) goto loc_821D2F8C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d2f9c
	goto loc_821D2F9C;
loc_821D2F8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D2F98;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D2F9C:
	// bl 0x822acb68
	ctx.lr = 0x821D2FA0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d2fb4
	if (ctx.cr6.eq) goto loc_821D2FB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D2FB0;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821D2FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821c6180
	ctx.lr = 0x821D2FC0;
	sub_821C6180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5e18
	ctx.lr = 0x821D2FC8;
	sub_821C5E18(ctx, base);
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

PPC_WEAK_FUNC(sub_821D2F38) {
	__imp__sub_821D2F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D2FE0) {
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
	// bne cr6,0x821d3020
	if (!ctx.cr6.eq) goto loc_821D3020;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d3030
	if (!ctx.cr6.eq) goto loc_821D3030;
loc_821D3020:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D302C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3030:
	// bl 0x822acb68
	ctx.lr = 0x821D3034;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d3064
	if (ctx.cr6.eq) goto loc_821D3064;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D3044;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r8,126(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// lwz r7,92(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821d306c
	if (!ctx.cr6.eq) goto loc_821D306C;
loc_821D3064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5e18
	ctx.lr = 0x821D306C;
	sub_821C5E18(ctx, base);
loc_821D306C:
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

PPC_WEAK_FUNC(sub_821D2FE0) {
	__imp__sub_821D2FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3080) {
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
	// bne cr6,0x821d30c8
	if (!ctx.cr6.eq) goto loc_821D30C8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d30c8
	if (ctx.cr6.eq) goto loc_821D30C8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d30d8
	goto loc_821D30D8;
loc_821D30C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D30D4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D30D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8898
	ctx.lr = 0x821D30E8;
	sub_821D8898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d30fc
	if (!ctx.cr6.eq) goto loc_821D30FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8670
	ctx.lr = 0x821D30FC;
	sub_821D8670(ctx, base);
loc_821D30FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x821D3104;
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

PPC_WEAK_FUNC(sub_821D3080) {
	__imp__sub_821D3080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// bne cr6,0x821d3160
	if (!ctx.cr6.eq) goto loc_821D3160;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3160
	if (ctx.cr6.eq) goto loc_821D3160;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d3170
	goto loc_821D3170;
loc_821D3160:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D316C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3170:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8898
	ctx.lr = 0x821D3180;
	sub_821D8898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d3194
	if (!ctx.cr6.eq) goto loc_821D3194;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8768
	ctx.lr = 0x821D3194;
	sub_821D8768(ctx, base);
loc_821D3194:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d50f8
	ctx.lr = 0x821D31A0;
	sub_822D50F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x821D31A8;
	sub_822AD078(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D3118) {
	__imp__sub_821D3118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D31BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D31BC) {
	__imp__sub_821D31BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D31C0) {
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
	// bne cr6,0x821d3200
	if (!ctx.cr6.eq) goto loc_821D3200;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d3210
	if (!ctx.cr6.eq) goto loc_821D3210;
loc_821D3200:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D320C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3210:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8898
	ctx.lr = 0x821D3220;
	sub_821D8898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d328c
	if (ctx.cr6.eq) goto loc_821D328C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x821D3240;
	sub_822DA518(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f4,f13,f7,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f4,f13,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f4,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f2.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x821d3298
	goto loc_821D3298;
loc_821D328C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8670
	ctx.lr = 0x821D3298;
	sub_821D8670(ctx, base);
loc_821D3298:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x821D32A0;
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

PPC_WEAK_FUNC(sub_821D31C0) {
	__imp__sub_821D31C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D32B4) {
	__imp__sub_821D32B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D32B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// bne cr6,0x821d32f8
	if (!ctx.cr6.eq) goto loc_821D32F8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d3308
	if (!ctx.cr6.eq) goto loc_821D3308;
loc_821D32F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3304;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3308:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D3314;
	sub_822B2498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4260
	ctx.lr = 0x821D331C;
	sub_821B4260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d33f4
	if (ctx.cr6.eq) goto loc_821D33F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8898
	ctx.lr = 0x821D3338;
	sub_821D8898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d33f4
	if (ctx.cr6.eq) goto loc_821D33F4;
	// bl 0x822acb68
	ctx.lr = 0x821D3344;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d3388
	if (!ctx.cr6.gt) goto loc_821D3388;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D3358;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821D3388:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8220
	ctx.lr = 0x821D3398;
	sub_821D8220(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-6020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6020);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d33ec
	if (ctx.cr6.eq) goto loc_821D33EC;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r7,30
	ctx.r7.s64 = 30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x821d33e0
	if (ctx.cr6.eq) goto loc_821D33E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
	// bl 0x821f2d18
	ctx.lr = 0x821D33D8;
	sub_821F2D18(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// b 0x821d33f8
	goto loc_821D33F8;
loc_821D33E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-2280
	ctx.r5.s64 = ctx.r11.s64 + -2280;
	// bl 0x821f2d18
	ctx.lr = 0x821D33EC;
	sub_821F2D18(ctx, base);
loc_821D33EC:
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// b 0x821d33f8
	goto loc_821D33F8;
loc_821D33F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D33F8:
	// bl 0x822acbf8
	ctx.lr = 0x821D33FC;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D32B8) {
	__imp__sub_821D32B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3410) {
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
	// bne cr6,0x821d3458
	if (!ctx.cr6.eq) goto loc_821D3458;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3458
	if (ctx.cr6.eq) goto loc_821D3458;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d3468
	goto loc_821D3468;
loc_821D3458:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3464;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3468:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d3490
	if (!ctx.cr6.eq) goto loc_821D3490;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-26672
	ctx.r3.s64 = ctx.r10.s64 + -26672;
	// lhz r4,126(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x821D348C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D3490;
	sub_822AD350(ctx, base);
loc_821D3490:
	// bl 0x822acb68
	ctx.lr = 0x821D3494;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d34ac
	if (ctx.cr6.eq) goto loc_821D34AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821D34A4;
	sub_822B1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821d34b0
	goto loc_821D34B0;
loc_821D34AC:
	// li r4,250
	ctx.r4.s64 = 250;
loc_821D34B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8f18
	ctx.lr = 0x821D34B8;
	sub_821D8F18(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acbf8
	ctx.lr = 0x821D34C0;
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

PPC_WEAK_FUNC(sub_821D3410) {
	__imp__sub_821D3410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D34D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D34D4) {
	__imp__sub_821D34D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D34D8) {
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
	// bne cr6,0x821d3524
	if (!ctx.cr6.eq) goto loc_821D3524;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3524
	if (ctx.cr6.eq) goto loc_821D3524;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d3534
	goto loc_821D3534;
loc_821D3524:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3530;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3534:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D353C;
	sub_82229BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x821D3544;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d355c
	if (!ctx.cr6.gt) goto loc_821D355C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821D3554;
	sub_822B1C50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821d356c
	goto loc_821D356C;
loc_821D355C:
	// lwz r5,764(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r5,250
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 250, ctx.xer);
	// bge cr6,0x821d356c
	if (!ctx.cr6.lt) goto loc_821D356C;
	// li r5,250
	ctx.r5.s64 = 250;
loc_821D356C:
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d3584
	if (ctx.cr6.eq) goto loc_821D3584;
	// bl 0x821d9170
	ctx.lr = 0x821D3580;
	sub_821D9170(ctx, base);
	// b 0x821d358c
	goto loc_821D358C;
loc_821D3584:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821d9090
	ctx.lr = 0x821D358C;
	sub_821D9090(ctx, base);
loc_821D358C:
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D3594;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D34D8) {
	__imp__sub_821D34D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D35AC) {
	__imp__sub_821D35AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D35B0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d35f4
	if (!ctx.cr6.eq) goto loc_821D35F4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r30,r6,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d3604
	if (!ctx.cr6.eq) goto loc_821D3604;
loc_821D35F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3600;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D3604:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D360C;
	sub_82229BF0(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d364c
	if (ctx.cr6.eq) goto loc_821D364C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D3624;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
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
	// bl 0x821d9100
	ctx.lr = 0x821D3648;
	sub_821D9100(ctx, base);
	// b 0x821d3658
	goto loc_821D3658;
loc_821D364C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9090
	ctx.lr = 0x821D3658;
	sub_821D9090(ctx, base);
loc_821D3658:
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D3660;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D35B0) {
	__imp__sub_821D35B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3678) {
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
	// bne cr6,0x821d36c0
	if (!ctx.cr6.eq) goto loc_821D36C0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d36c0
	if (ctx.cr6.eq) goto loc_821D36C0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d36d0
	goto loc_821D36D0;
loc_821D36C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D36CC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D36D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D36D8;
	sub_82229BF0(ctx, base);
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d36f4
	if (ctx.cr6.eq) goto loc_821D36F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9530
	ctx.lr = 0x821D36EC;
	sub_821A9530(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x821d3704
	goto loc_821D3704;
loc_821D36F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26616
	ctx.r3.s64 = ctx.r11.s64 + -26616;
	// bl 0x822ad350
	ctx.lr = 0x821D3700;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D3704:
	// bl 0x822acbf8
	ctx.lr = 0x821D3708;
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

PPC_WEAK_FUNC(sub_821D3678) {
	__imp__sub_821D3678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D371C) {
	__imp__sub_821D371C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3720) {
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
	// bne cr6,0x821d3768
	if (!ctx.cr6.eq) goto loc_821D3768;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3768
	if (ctx.cr6.eq) goto loc_821D3768;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d3778
	goto loc_821D3778;
loc_821D3768:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3774;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3778:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D3780;
	sub_82229BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8500
	ctx.lr = 0x821D3790;
	sub_821D8500(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x821D3798;
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

PPC_WEAK_FUNC(sub_821D3720) {
	__imp__sub_821D3720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D37AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D37AC) {
	__imp__sub_821D37AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D37B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821D37B8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
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
	// bne cr6,0x821d37f8
	if (!ctx.cr6.eq) goto loc_821D37F8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d37f8
	if (ctx.cr6.eq) goto loc_821D37F8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x821d3808
	goto loc_821D3808;
loc_821D37F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3804;
	sub_822AD548(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_821D3808:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821D3810;
	sub_822B2288(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x821D3820;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d3a44
	if (ctx.cr6.eq) goto loc_821D3A44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x821D3830;
	sub_822B20B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821D383C;
	sub_822B1FB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82232100
	ctx.lr = 0x821D3848;
	sub_82232100(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d3868
	if (!ctx.cr6.eq) goto loc_821D3868;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,-26544
	ctx.r3.s64 = ctx.r11.s64 + -26544;
	// bl 0x822e84f0
	ctx.lr = 0x821D3864;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D3868;
	sub_822AD350(ctx, base);
loc_821D3868:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// lhz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 112);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d3884
	if (!ctx.cr6.eq) goto loc_821D3884;
	// lhz r9,226(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 226);
	// b 0x821d38c4
	goto loc_821D38C4;
loc_821D3884:
	// lhz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 140);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d3898
	if (!ctx.cr6.eq) goto loc_821D3898;
	// lhz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 228);
	// b 0x821d38c4
	goto loc_821D38C4;
loc_821D3898:
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d38ac
	if (!ctx.cr6.eq) goto loc_821D38AC;
	// lhz r9,230(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 230);
	// b 0x821d38c4
	goto loc_821D38C4;
loc_821D38AC:
	// lhz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// lhz r10,232(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 232);
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 & ctx.r10.u64;
loc_821D38C4:
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d38f8
	if (ctx.cr6.eq) goto loc_821D38F8;
	// addi r11,r28,536
	ctx.r11.s64 = ctx.r28.s64 + 536;
	// addi r10,r28,664
	ctx.r10.s64 = ctx.r28.s64 + 664;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821d38f8
	if (ctx.cr6.eq) goto loc_821D38F8;
loc_821D38E0:
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821d39dc
	if (ctx.cr6.eq) goto loc_821D39DC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d38e0
	if (!ctx.cr6.eq) goto loc_821D38E0;
loc_821D38F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821f82f8
	ctx.lr = 0x821D3908;
	sub_821F82F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d3928
	if (!ctx.cr6.eq) goto loc_821D3928;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,-26572
	ctx.r3.s64 = ctx.r11.s64 + -26572;
	// bl 0x822e84f0
	ctx.lr = 0x821D3924;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D3928;
	sub_822AD350(ctx, base);
loc_821D3928:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821f7d70
	ctx.lr = 0x821D3938;
	sub_821F7D70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x821d39f8
	if (ctx.cr6.eq) goto loc_821D39F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r8,9624
	ctx.r7.s64 = ctx.r8.s64 + 9624;
	// lfs f10,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f6,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fsubs f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmadds f2,f5,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fadds f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmadds f13,f1,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f6,f5,f8
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,40(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// b 0x821d3a10
	goto loc_821D3A10;
loc_821D39DC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821D39F8:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
loc_821D3A10:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332af8
	ctx.lr = 0x821D3A1C;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// bl 0x821f8f80
	ctx.lr = 0x821D3A2C;
	sub_821F8F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x821D3A34;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r4,284(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 284);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821D3A44;
	sub_82229DA8(ctx, base);
loc_821D3A44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D37B0) {
	__imp__sub_821D37B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D3A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821db6d0
	ctx.lr = 0x821D3A6C;
	sub_821DB6D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d3b50
	if (ctx.cr6.eq) goto loc_821D3B50;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x821D3A9C;
	sub_822D4AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f2,f8,f4,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f1,f7,f4,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821db858
	ctx.lr = 0x821D3ADC;
	sub_821DB858(ctx, base);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821d3b50
	if (!ctx.cr6.gt) goto loc_821D3B50;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_821D3B0C:
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f3,f9,f11,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f1,f5,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fmuls f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x821d3b5c
	if (ctx.cr6.lt) goto loc_821D3B5C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821d3b0c
	if (ctx.cr6.lt) goto loc_821D3B0C;
loc_821D3B50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D3B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D3A50) {
	__imp__sub_821D3A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821D3B70;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821d3ba0
	if (ctx.cr6.eq) goto loc_821D3BA0;
	// rlwinm r29,r11,0,18,16
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// rlwinm r29,r29,0,7,5
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x821d3ba8
	goto loc_821D3BA8;
loc_821D3BA0:
	// oris r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 33554432;
	// ori r29,r29,16384
	ctx.r29.u64 = ctx.r29.u64 | 16384;
loc_821D3BA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r8,r29,8192
	ctx.r8.u64 = ctx.r29.u64 | 8192;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r9,-9672
	ctx.r6.s64 = ctx.r9.s64 + -9672;
	// lfs f0,6012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6012);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lhz r7,126(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x821D3C00;
	sub_821FE618(ctx, base);
	// lbz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821d3c18
	if (ctx.cr6.eq) goto loc_821D3C18;
loc_821D3C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821D3C18:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821d3c78
	if (ctx.cr6.eq) goto loc_821D3C78;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f10,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f3,f7,f0,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f2,f4,f0,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgt cr6,0x821d3c0c
	if (ctx.cr6.gt) goto loc_821D3C0C;
loc_821D3C78:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,126(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// bl 0x821c8b88
	ctx.lr = 0x821D3CA4;
	sub_821C8B88(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D3B68) {
	__imp__sub_821D3B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D3CC0;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x821d3cf4
	if (!ctx.cr6.eq) goto loc_821D3CF4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d3d04
	if (!ctx.cr6.eq) goto loc_821D3D04;
loc_821D3CF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3D00;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3D04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D3D10;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x821D3D14;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d3d30
	if (!ctx.cr6.gt) goto loc_821D3D30;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821D3D24;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r29,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821d3d34
	goto loc_821D3D34;
loc_821D3D30:
	// li r29,1
	ctx.r29.s64 = 1;
loc_821D3D34:
	// bl 0x822acb68
	ctx.lr = 0x821D3D38;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821d3d54
	if (!ctx.cr6.gt) goto loc_821D3D54;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821D3D48;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821d3d58
	goto loc_821D3D58;
loc_821D3D54:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D3D58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d3d78
	if (ctx.cr6.eq) goto loc_821D3D78;
loc_821D3D68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x821D3D70;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D3D78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3a50
	ctx.lr = 0x821D3D88;
	sub_821D3A50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d3d68
	if (!ctx.cr6.eq) goto loc_821D3D68;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fa40
	ctx.lr = 0x821D3D9C;
	sub_8223FA40(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3b68
	ctx.lr = 0x821D3DB8;
	sub_821D3B68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d3d68
	if (ctx.cr6.eq) goto loc_821D3D68;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,4788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4788, ctx.r11.u32);
	// bl 0x822acbf8
	ctx.lr = 0x821D3DD8;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D3CB8) {
	__imp__sub_821D3CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3DE0) {
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d3e2c
	if (!ctx.cr6.eq) goto loc_821D3E2C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3e2c
	if (ctx.cr6.eq) goto loc_821D3E2C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d3e3c
	goto loc_821D3E3C;
loc_821D3E2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D3E38;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D3E3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D3E48;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D3E54;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x821D3E58;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821d3e74
	if (!ctx.cr6.gt) goto loc_821D3E74;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821D3E68;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821d3e78
	goto loc_821D3E78;
loc_821D3E74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_821D3E78:
	// bl 0x822acb68
	ctx.lr = 0x821D3E7C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x821d3e98
	if (!ctx.cr6.gt) goto loc_821D3E98;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1c50
	ctx.lr = 0x821D3E8C;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r8,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821d3e9c
	goto loc_821D3E9C;
loc_821D3E98:
	// li r8,0
	ctx.r8.s64 = 0;
loc_821D3E9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d3ee4
	if (!ctx.cr6.eq) goto loc_821D3EE4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3b68
	ctx.lr = 0x821D3EC4;
	sub_821D3B68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d3ee4
	if (ctx.cr6.eq) goto loc_821D3EE4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,4788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4788, ctx.r11.u32);
	// b 0x821d3ee8
	goto loc_821D3EE8;
loc_821D3EE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D3EE8:
	// bl 0x822acbf8
	ctx.lr = 0x821D3EEC;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821D3DE0) {
	__imp__sub_821D3DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D3F04) {
	__imp__sub_821D3F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D3F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821D3F30;
	sub_8223FAE0(ctx, base);
	// lhz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x821d9930
	ctx.lr = 0x821D3F4C;
	sub_821D9930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d3f7c
	if (ctx.cr6.eq) goto loc_821D3F7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,126(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-26448
	ctx.r4.s64 = ctx.r11.s64 + -26448;
	// bl 0x82280a68
	ctx.lr = 0x821D3F68;
	sub_82280A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x821D3F70;
	sub_822ACBF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D3F7C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9930
	ctx.lr = 0x821D3F90;
	sub_821D9930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d3fc0
	if (ctx.cr6.eq) goto loc_821D3FC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,126(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-26508
	ctx.r4.s64 = ctx.r11.s64 + -26508;
	// bl 0x82280a68
	ctx.lr = 0x821D3FAC;
	sub_82280A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x821D3FB4;
	sub_822ACBF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D3FC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D3F08) {
	__imp__sub_821D3F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D3FCC) {
	__imp__sub_821D3FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D3FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821D3FD8;
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// lhz r9,214(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 214);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r29,r11,26552
	ctx.r29.s64 = ctx.r11.s64 + 26552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d401c
	if (!ctx.cr6.eq) goto loc_821D401C;
	// lhz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 212);
	// addi r10,r29,268
	ctx.r10.s64 = ctx.r29.s64 + 268;
	// mulli r8,r9,624
	ctx.r8.s64 = ctx.r9.s64 * 624;
	// lwzx r30,r8,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d402c
	if (!ctx.cr6.eq) goto loc_821D402C;
loc_821D401C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4028;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D402C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D4040;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x821D4044;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d405c
	if (!ctx.cr6.gt) goto loc_821D405C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D4058;
	sub_822B2498(ctx, base);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
loc_821D405C:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,468(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f30,-14540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14540);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821d41fc
	if (ctx.cr6.eq) goto loc_821D41FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// xori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 ^ 2;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_821D40B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821D40C4;
	sub_8222FB90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3436(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3436, temp.u32);
	// stfs f0,3440(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3440, temp.u32);
	// stfs f0,3444(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3444, temp.u32);
	// stfs f0,3468(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3468, temp.u32);
	// stfs f0,3472(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3472, temp.u32);
	// stfs f0,3476(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3476, temp.u32);
	// lbz r10,5000(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d4118
	if (ctx.cr6.eq) goto loc_821D4118;
	// addi r4,r30,4916
	ctx.r4.s64 = ctx.r30.s64 + 4916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821aae88
	ctx.lr = 0x821D40FC;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4110
	if (ctx.cr6.eq) goto loc_821D4110;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x821d4118
	if (!ctx.cr6.gt) goto loc_821D4118;
loc_821D4110:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b0768
	ctx.lr = 0x821D4118;
	sub_821B0768(ctx, base);
loc_821D4118:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821d4168
	if (ctx.cr6.eq) goto loc_821D4168;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821D412C;
	sub_8222FBE8(ctx, base);
	// addi r3,r30,308
	ctx.r3.s64 = ctx.r30.s64 + 308;
	// lfs f2,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821D413C;
	sub_821CE2B8(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// addi r3,r30,324
	ctx.r3.s64 = ctx.r30.s64 + 324;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821d4158
	if (!ctx.cr6.eq) goto loc_821D4158;
	// lfs f2,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821D4158;
	sub_821CE2B8(ctx, base);
loc_821D4158:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce310
	ctx.lr = 0x821D4168;
	sub_821CE310(ctx, base);
loc_821D4168:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d41e4
	if (!ctx.cr6.eq) goto loc_821D41E4;
	// lwz r11,2892(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d418c
	if (!ctx.cr6.eq) goto loc_821D418C;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x821d41e4
	if (!ctx.cr6.gt) goto loc_821D41E4;
loc_821D418C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x821D4194;
	sub_8223FCB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aba40
	ctx.lr = 0x821D419C;
	sub_821ABA40(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821D41A4;
	sub_8223FB90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,14892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821d41c0
	if (!ctx.cr6.gt) goto loc_821D41C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// xori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 ^ 2;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_821D41C0:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x821d41e4
	if (!ctx.cr6.eq) goto loc_821D41E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9fb0
	ctx.lr = 0x821D41D0;
	sub_821A9FB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d41e4
	if (!ctx.cr6.eq) goto loc_821D41E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821D41E4;
	sub_821B4E00(ctx, base);
loc_821D41E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acbf8
	ctx.lr = 0x821D41EC;
	sub_822ACBF8(ctx, base);
loc_821D41EC:
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
loc_821D41FC:
	// lwz r11,2892(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d40b8
	if (!ctx.cr6.eq) goto loc_821D40B8;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x821d40b8
	if (ctx.cr6.eq) goto loc_821D40B8;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x821d426c
	if (!ctx.cr6.eq) goto loc_821D426C;
	// bl 0x822acb68
	ctx.lr = 0x821D421C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821d4230
	if (!ctx.cr6.gt) goto loc_821D4230;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821D422C;
	sub_822B1FB0(ctx, base);
	// b 0x821d4234
	goto loc_821D4234;
loc_821D4230:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_821D4234:
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821d426c
	if (!ctx.cr6.gt) goto loc_821D426C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-26324
	ctx.r4.s64 = ctx.r11.s64 + -26324;
	// bl 0x82280a68
	ctx.lr = 0x821D4254;
	sub_82280A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x821D425C;
	sub_822ACBF8(ctx, base);
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
loc_821D426C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x821d42c4
	if (!ctx.cr6.gt) goto loc_821D42C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d3f08
	ctx.lr = 0x821D4288;
	sub_821D3F08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d41ec
	if (ctx.cr6.eq) goto loc_821D41EC;
	// addi r3,r29,624
	ctx.r3.s64 = ctx.r29.s64 + 624;
	// bl 0x821d9a68
	ctx.lr = 0x821D4298;
	sub_821D9A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d40b8
	if (ctx.cr6.eq) goto loc_821D40B8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,624
	ctx.r3.s64 = ctx.r29.s64 + 624;
	// bl 0x821d3f08
	ctx.lr = 0x821D42B8;
	sub_821D3F08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d41ec
	if (ctx.cr6.eq) goto loc_821D41EC;
	// b 0x821d40b8
	goto loc_821D40B8;
loc_821D42C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ab968
	ctx.lr = 0x821D42CC;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d40b8
	if (ctx.cr6.eq) goto loc_821D40B8;
	// lwz r11,4712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d40b8
	if (ctx.cr6.eq) goto loc_821D40B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-26380
	ctx.r4.s64 = ctx.r11.s64 + -26380;
	// bl 0x82280a68
	ctx.lr = 0x821D42F8;
	sub_82280A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x821D4300;
	sub_822ACBF8(ctx, base);
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
}

PPC_WEAK_FUNC(sub_821D3FD0) {
	__imp__sub_821D3FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4310) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821d3fd0
	sub_821D3FD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4310) {
	__imp__sub_821D4310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4318) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821d3fd0
	sub_821D3FD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4318) {
	__imp__sub_821D4318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4320) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821d3fd0
	sub_821D3FD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4320) {
	__imp__sub_821D4320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4328) {
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
	// bne cr6,0x821d4370
	if (!ctx.cr6.eq) goto loc_821D4370;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4370
	if (ctx.cr6.eq) goto loc_821D4370;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d4380
	goto loc_821D4380;
loc_821D4370:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D437C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4380:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D4388;
	sub_822B1FB0(ctx, base);
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c82b8
	ctx.lr = 0x821D4390;
	sub_821C82B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x822acc78
	ctx.lr = 0x821D43A8;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D4328) {
	__imp__sub_821D4328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D43BC) {
	__imp__sub_821D43BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D43C0) {
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
	// bne cr6,0x821d4408
	if (!ctx.cr6.eq) goto loc_821D4408;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4408
	if (ctx.cr6.eq) goto loc_821D4408;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d4418
	goto loc_821D4418;
loc_821D4408:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4414;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821D4420;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4438
	if (ctx.cr6.eq) goto loc_821D4438;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fd8
	ctx.lr = 0x821D4434;
	sub_821C6FD8(ctx, base);
	// b 0x821d443c
	goto loc_821D443C;
loc_821D4438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D443C:
	// bl 0x822acbf8
	ctx.lr = 0x821D4440;
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

PPC_WEAK_FUNC(sub_821D43C0) {
	__imp__sub_821D43C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D4454) {
	__imp__sub_821D4454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821D4460;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d44a0
	if (!ctx.cr6.eq) goto loc_821D44A0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d44a0
	if (ctx.cr6.eq) goto loc_821D44A0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x821d44b0
	goto loc_821D44B0;
loc_821D44A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D44AC;
	sub_822AD548(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_821D44B0:
	// bl 0x822acb68
	ctx.lr = 0x821D44B4;
	sub_822ACB68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x821d44cc
	if (!ctx.cr6.lt) goto loc_821D44CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// bl 0x822ad350
	ctx.lr = 0x821D44CC;
	sub_822AD350(ctx, base);
loc_821D44CC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r30,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r30.u32);
	// ble cr6,0x821d4564
	if (!ctx.cr6.gt) goto loc_821D4564;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r28,r11,-26260
	ctx.r28.s64 = ctx.r11.s64 + -26260;
	// addi r31,r10,-25976
	ctx.r31.s64 = ctx.r10.s64 + -25976;
loc_821D44E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b20b8
	ctx.lr = 0x821D44F0;
	sub_822B20B8(ctx, base);
	// lhz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 176);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d450c
	if (!ctx.cr6.eq) goto loc_821D450C;
	// lwz r11,3364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3364);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r10.u32);
	// b 0x821d4558
	goto loc_821D4558;
loc_821D450C:
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d4528
	if (!ctx.cr6.eq) goto loc_821D4528;
	// lwz r11,3364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3364);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r10.u32);
	// b 0x821d4558
	goto loc_821D4558;
loc_821D4528:
	// lhz r11,138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 138);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d4544
	if (!ctx.cr6.eq) goto loc_821D4544;
	// lwz r11,3364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3364);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r10.u32);
	// b 0x821d4558
	goto loc_821D4558;
loc_821D4544:
	// bl 0x822a13a0
	ctx.lr = 0x821D4548;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821D4554;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D4558;
	sub_822AD350(ctx, base);
loc_821D4558:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821d44e8
	if (ctx.cr6.lt) goto loc_821D44E8;
loc_821D4564:
	// lwz r11,3364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d4584
	if (!ctx.cr6.eq) goto loc_821D4584;
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r11.u32);
	// addi r3,r10,-26288
	ctx.r3.s64 = ctx.r10.s64 + -26288;
	// bl 0x822ad350
	ctx.lr = 0x821D4584;
	sub_822AD350(ctx, base);
loc_821D4584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4458) {
	__imp__sub_821D4458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D458C) {
	__imp__sub_821D458C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D4598;
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
	// bne cr6,0x821d45d4
	if (!ctx.cr6.eq) goto loc_821D45D4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d45d4
	if (ctx.cr6.eq) goto loc_821D45D4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d45e4
	goto loc_821D45E4;
loc_821D45D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D45E0;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D45E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821D45EC;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 176);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d460c
	if (!ctx.cr6.eq) goto loc_821D460C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x821d464c
	goto loc_821D464C;
loc_821D460C:
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d4620
	if (!ctx.cr6.eq) goto loc_821D4620;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x821d464c
	goto loc_821D464C;
loc_821D4620:
	// lhz r11,138(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 138);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d4634
	if (!ctx.cr6.eq) goto loc_821D4634;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x821d464c
	goto loc_821D464C;
loc_821D4634:
	// bl 0x822a13a0
	ctx.lr = 0x821D4638;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26176
	ctx.r3.s64 = ctx.r11.s64 + -26176;
	// bl 0x822e84f0
	ctx.lr = 0x821D4648;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D464C;
	sub_822AD350(ctx, base);
loc_821D464C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,7
	ctx.r31.s64 = 7;
	// bl 0x821ab968
	ctx.lr = 0x821D4658;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4670
	if (ctx.cr6.eq) goto loc_821D4670;
	// addi r3,r30,3712
	ctx.r3.s64 = ctx.r30.s64 + 3712;
	// bl 0x821c8370
	ctx.lr = 0x821D466C;
	sub_821C8370(ctx, base);
	// b 0x821d468c
	goto loc_821D468C;
loc_821D4670:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ac230
	ctx.lr = 0x821D4678;
	sub_821AC230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d4690
	if (ctx.cr6.eq) goto loc_821D4690;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82236688
	ctx.lr = 0x821D468C;
	sub_82236688(ctx, base);
loc_821D468C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821D4690:
	// lwz r11,3364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d46a4
	if (ctx.cr6.eq) goto loc_821D46A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821D46A4:
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d46b8
	if (!ctx.cr6.eq) goto loc_821D46B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D46B8:
	// bl 0x822acbf8
	ctx.lr = 0x821D46BC;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4590) {
	__imp__sub_821D4590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D46C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D46C4) {
	__imp__sub_821D46C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D46C8) {
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
	// bne cr6,0x821d4704
	if (!ctx.cr6.eq) goto loc_821D4704;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d4714
	if (!ctx.cr6.eq) goto loc_821D4714;
loc_821D4704:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4710;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D4714:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821db710
	ctx.lr = 0x821D471C;
	sub_821DB710(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x821D4720;
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

PPC_WEAK_FUNC(sub_821D46C8) {
	__imp__sub_821D46C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4730) {
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
	// bne cr6,0x821d476c
	if (!ctx.cr6.eq) goto loc_821D476C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d477c
	if (!ctx.cr6.eq) goto loc_821D477C;
loc_821D476C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4778;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D477C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821db6a0
	ctx.lr = 0x821D4784;
	sub_821DB6A0(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x821D4788;
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

PPC_WEAK_FUNC(sub_821D4730) {
	__imp__sub_821D4730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4798) {
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
	// bne cr6,0x821d47d4
	if (!ctx.cr6.eq) goto loc_821D47D4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d47e4
	if (!ctx.cr6.eq) goto loc_821D47E4;
loc_821D47D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D47E0;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D47E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821db6d0
	ctx.lr = 0x821D47EC;
	sub_821DB6D0(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x821D47F0;
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

PPC_WEAK_FUNC(sub_821D4798) {
	__imp__sub_821D4798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4800) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d484c
	if (!ctx.cr6.eq) goto loc_821D484C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d484c
	if (ctx.cr6.eq) goto loc_821D484C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d485c
	goto loc_821D485C;
loc_821D484C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4858;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D485C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82229bf0
	ctx.lr = 0x821D486C;
	sub_82229BF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D4878;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x821D487C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821d4890
	if (!ctx.cr6.gt) goto loc_821D4890;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821D488C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821D4890:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c2e88
	ctx.lr = 0x821D48A0;
	sub_821C2E88(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D48A4;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D4800) {
	__imp__sub_821D4800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D48BC) {
	__imp__sub_821D48BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D48C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821D48C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822acb68
	ctx.lr = 0x821D48D8;
	sub_822ACB68(ctx, base);
	// subf r29,r28,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r28.s64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x821d48f4
	if (ctx.cr6.lt) goto loc_821D48F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26132
	ctx.r3.s64 = ctx.r11.s64 + -26132;
	// bl 0x822ad350
	ctx.lr = 0x821D48F0;
	sub_822AD350(ctx, base);
	// li r29,4
	ctx.r29.s64 = 4;
loc_821D48F4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821d4924
	if (!ctx.cr6.gt) goto loc_821D4924;
	// addi r30,r27,44
	ctx.r30.s64 = ctx.r27.s64 + 44;
loc_821D4904:
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x822b20b8
	ctx.lr = 0x821D490C;
	sub_822B20B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821d4904
	if (ctx.cr6.lt) goto loc_821D4904;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x821d4934
	if (!ctx.cr6.lt) goto loc_821D4934;
loc_821D4924:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r10.u32);
loc_821D4934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D48C0) {
	__imp__sub_821D48C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D493C) {
	__imp__sub_821D493C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4940) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d4984
	if (!ctx.cr6.eq) goto loc_821D4984;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d4994
	if (!ctx.cr6.eq) goto loc_821D4994;
loc_821D4984:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4990;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D499C;
	sub_821AA3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4a4c
	if (ctx.cr6.eq) goto loc_821D4A4C;
	// lwz r11,3304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d4a4c
	if (!ctx.cr6.gt) goto loc_821D4A4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b2498
	ctx.lr = 0x821D49D8;
	sub_822B2498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x821D4A04;
	sub_822B1FB0(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d48c0
	ctx.lr = 0x821D4A14;
	sub_821D48C0(ctx, base);
	// addi r30,r31,3332
	ctx.r30.s64 = ctx.r31.s64 + 3332;
	// addi r5,r31,3308
	ctx.r5.s64 = ctx.r31.s64 + 3308;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c4a48
	ctx.lr = 0x821D4A2C;
	sub_821C4A48(ctx, base);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r6.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821d4a4c
	if (ctx.cr6.eq) goto loc_821D4A4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad078
	ctx.lr = 0x821D4A4C;
	sub_822AD078(ctx, base);
loc_821D4A4C:
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

PPC_WEAK_FUNC(sub_821D4940) {
	__imp__sub_821D4940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D4A64) {
	__imp__sub_821D4A64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4A68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d4aac
	if (!ctx.cr6.eq) goto loc_821D4AAC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d4abc
	if (!ctx.cr6.eq) goto loc_821D4ABC;
loc_821D4AAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4AB8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4ABC:
	// lwz r11,3304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d4b78
	if (!ctx.cr6.gt) goto loc_821D4B78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b2498
	ctx.lr = 0x821D4AF0;
	sub_822B2498(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D4AFC;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821D4B04;
	sub_822B1C50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821d48c0
	ctx.lr = 0x821D4B28;
	sub_821D48C0(ctx, base);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3320(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// addi r30,r31,3332
	ctx.r30.s64 = ctx.r31.s64 + 3332;
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r31,3308
	ctx.r5.s64 = ctx.r31.s64 + 3308;
	// stfs f10,3324(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,3328(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c2980
	ctx.lr = 0x821D4B58;
	sub_821C2980(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821d4b78
	if (ctx.cr6.eq) goto loc_821D4B78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad078
	ctx.lr = 0x821D4B78;
	sub_822AD078(ctx, base);
loc_821D4B78:
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

PPC_WEAK_FUNC(sub_821D4A68) {
	__imp__sub_821D4A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821D4B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// lhz r9,262(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 262);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d4bd0
	if (!ctx.cr6.eq) goto loc_821D4BD0;
	// lhz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 260);
	// addi r10,r30,268
	ctx.r10.s64 = ctx.r30.s64 + 268;
	// mulli r8,r9,624
	ctx.r8.s64 = ctx.r9.s64 * 624;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d4be0
	if (!ctx.cr6.eq) goto loc_821D4BE0;
loc_821D4BD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4BDC;
	sub_822AD548(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_821D4BE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821d4e2c
	if (!ctx.cr6.gt) goto loc_821D4E2C;
	// lhz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d4c1c
	if (!ctx.cr6.eq) goto loc_821D4C1C;
	// lbz r11,3298(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3298);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d4c1c
	if (!ctx.cr6.eq) goto loc_821D4C1C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-26008
	ctx.r3.s64 = ctx.r10.s64 + -26008;
	// bl 0x822ad3b8
	ctx.lr = 0x821D4C1C;
	sub_822AD3B8(ctx, base);
loc_821D4C1C:
	// lbz r11,3299(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3299);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4d10
	if (ctx.cr6.eq) goto loc_821D4D10;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
	// lhz r4,530(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 530);
	// bl 0x8222f018
	ctx.lr = 0x821D4C40;
	sub_8222F018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d4c90
	if (!ctx.cr6.eq) goto loc_821D4C90;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822846c0
	ctx.lr = 0x821D4C50;
	sub_822846C0(ctx, base);
	// bl 0x822ef030
	ctx.lr = 0x821D4C54;
	sub_822EF030(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,530(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 530);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r30,126(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// bl 0x822a13a0
	ctx.lr = 0x821D4C6C;
	sub_822A13A0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,-26052
	ctx.r3.s64 = ctx.r9.s64 + -26052;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821D4C84;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D4C88;
	sub_822AD350(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D4C90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f11,3320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f10,3324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f9,3328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lbz r9,3300(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3300);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lhz r8,3296(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3296);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// bl 0x821c2980
	ctx.lr = 0x821D4D08;
	sub_821C2980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d4d40
	if (!ctx.cr6.eq) goto loc_821D4D40;
loc_821D4D10:
	// lfs f0,3308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,3312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,3316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,3332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,3336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f9,3340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821D4D40:
	// lwz r3,3292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// bl 0x82332af8
	ctx.lr = 0x821D4D48;
	sub_82332AF8(ctx, base);
	// lhz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3288);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4dcc
	if (ctx.cr6.eq) goto loc_821D4DCC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821d4dcc
	if (!ctx.cr6.eq) goto loc_821D4DCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c41b0
	ctx.lr = 0x821D4D78;
	sub_821C41B0(ctx, base);
	// lhz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3288);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x822062b8
	ctx.lr = 0x821D4D90;
	sub_822062B8(ctx, base);
	// lhz r10,3288(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3288);
	// li r7,1
	ctx.r7.s64 = 1;
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x822064e0
	ctx.lr = 0x821D4DB4;
	sub_822064E0(ctx, base);
	// lhz r9,3288(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3288);
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82340d30
	ctx.lr = 0x821D4DC8;
	sub_82340D30(ctx, base);
	// b 0x821d4e2c
	goto loc_821D4E2C;
loc_821D4DCC:
	// lwz r11,3292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d4df8
	if (!ctx.cr6.eq) goto loc_821D4DF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821D4DE4;
	sub_822A13A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,-26100
	ctx.r3.s64 = ctx.r10.s64 + -26100;
	// bl 0x822e84f0
	ctx.lr = 0x821D4DF4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D4DF8;
	sub_822AD350(ctx, base);
loc_821D4DF8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,732(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 732);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,3292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822067b8
	ctx.lr = 0x821D4E18;
	sub_822067B8(ctx, base);
	// lwz r11,3304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d4e2c
	if (!ctx.cr6.gt) goto loc_821D4E2C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
loc_821D4E2C:
	// stb r28,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// bl 0x822a24e0
	ctx.lr = 0x821D4E3C;
	sub_822A24E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4B90) {
	__imp__sub_821D4B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D4E44) {
	__imp__sub_821D4E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D4E50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lhz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4e84
	if (ctx.cr6.eq) goto loc_821D4E84;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lwz r9,-1412(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1412);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821d4e98
	if (ctx.cr6.lt) goto loc_821D4E98;
loc_821D4E84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// addi r3,r11,-25856
	ctx.r3.s64 = ctx.r11.s64 + -25856;
	// bl 0x822e84f0
	ctx.lr = 0x821D4E94;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D4E98;
	sub_822AD350(ctx, base);
loc_821D4E98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x821D4EA4;
	sub_82332AF8(ctx, base);
	// lwz r10,1028(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821d4edc
	if (ctx.cr6.gt) goto loc_821D4EDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25912
	ctx.r3.s64 = ctx.r11.s64 + -25912;
	// bl 0x822e84f0
	ctx.lr = 0x821D4ED8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D4EDC;
	sub_822AD350(ctx, base);
loc_821D4EDC:
	// addi r9,r31,3332
	ctx.r9.s64 = ctx.r31.s64 + 3332;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r31,3308
	ctx.r8.s64 = ctx.r31.s64 + 3308;
	// addi r6,r31,3320
	ctx.r6.s64 = ctx.r31.s64 + 3320;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c2cf0
	ctx.lr = 0x821D4EFC;
	sub_821C2CF0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r3,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D4E48) {
	__imp__sub_821D4E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D4F18) {
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
	// bne cr6,0x821d4f5c
	if (!ctx.cr6.eq) goto loc_821D4F5C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d4f6c
	if (!ctx.cr6.eq) goto loc_821D4F6C;
loc_821D4F5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D4F68;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4F6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D4F74;
	sub_821AA3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4ff4
	if (ctx.cr6.eq) goto loc_821D4FF4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8223fa40
	ctx.lr = 0x821D4F88;
	sub_8223FA40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223fa70
	ctx.lr = 0x821D4F94;
	sub_8223FA70(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f11,3320(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// stfs f8,3324(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// stfs f6,3328(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// bl 0x822b2498
	ctx.lr = 0x821D4FD0;
	sub_822B2498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821d4e48
	ctx.lr = 0x821D4FE4;
	sub_821D4E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d4ff4
	if (ctx.cr6.eq) goto loc_821D4FF4;
	// addi r3,r31,3332
	ctx.r3.s64 = ctx.r31.s64 + 3332;
	// bl 0x822ad078
	ctx.lr = 0x821D4FF4;
	sub_822AD078(ctx, base);
loc_821D4FF4:
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

PPC_WEAK_FUNC(sub_821D4F18) {
	__imp__sub_821D4F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D500C) {
	__imp__sub_821D500C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5010) {
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
	// bne cr6,0x821d5050
	if (!ctx.cr6.eq) goto loc_821D5050;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5060
	if (!ctx.cr6.eq) goto loc_821D5060;
loc_821D5050:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D505C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5060:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D506C;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D5078;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,3324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// stfs f12,3328(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// bl 0x821d4e48
	ctx.lr = 0x821D50A4;
	sub_821D4E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d50b4
	if (ctx.cr6.eq) goto loc_821D50B4;
	// addi r3,r31,3332
	ctx.r3.s64 = ctx.r31.s64 + 3332;
	// bl 0x822ad078
	ctx.lr = 0x821D50B4;
	sub_822AD078(ctx, base);
loc_821D50B4:
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

PPC_WEAK_FUNC(sub_821D5010) {
	__imp__sub_821D5010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D50C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D50D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d5108
	if (!ctx.cr6.eq) goto loc_821D5108;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5118
	if (!ctx.cr6.eq) goto loc_821D5118;
loc_821D5108:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5114;
	sub_822AD548(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821D5118:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821d51fc
	if (!ctx.cr6.gt) goto loc_821D51FC;
	// lbz r11,3298(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3298);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5148
	if (!ctx.cr6.eq) goto loc_821D5148;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-25768
	ctx.r3.s64 = ctx.r10.s64 + -25768;
	// bl 0x822ad3b8
	ctx.lr = 0x821D5148;
	sub_822AD3B8(ctx, base);
loc_821D5148:
	// lbz r11,3299(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3299);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d51fc
	if (ctx.cr6.eq) goto loc_821D51FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821D515C;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222f018
	ctx.lr = 0x821D5170;
	sub_8222F018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d51a8
	if (!ctx.cr6.eq) goto loc_821D51A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r31,126(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822a13a0
	ctx.lr = 0x821D5188;
	sub_822A13A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,-25804
	ctx.r3.s64 = ctx.r10.s64 + -25804;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821D519C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D51A0;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821D51A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4e48
	ctx.lr = 0x821D51B8;
	sub_821D4E48(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d51fc
	if (ctx.cr6.eq) goto loc_821D51FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,3332
	ctx.r5.s64 = ctx.r31.s64 + 3332;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r7,168(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// lhz r6,124(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x822067b8
	ctx.lr = 0x821D51F0;
	sub_822067B8(ctx, base);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
loc_821D51FC:
	// stb r29,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D50C8) {
	__imp__sub_821D50C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5208) {
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
	// bne cr6,0x821d5244
	if (!ctx.cr6.eq) goto loc_821D5244;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5254
	if (!ctx.cr6.eq) goto loc_821D5254;
loc_821D5244:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5250;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5254:
	// lhz r10,3288(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d5268
	if (ctx.cr6.eq) goto loc_821D5268;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821c40f0
	ctx.lr = 0x821D5268;
	sub_821C40F0(ctx, base);
loc_821D5268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D5208) {
	__imp__sub_821D5208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5278) {
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
	// bne cr6,0x821d52c4
	if (!ctx.cr6.eq) goto loc_821D52C4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d52c4
	if (ctx.cr6.eq) goto loc_821D52C4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d52d4
	goto loc_821D52D4;
loc_821D52C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D52D0;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D52D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D52DC;
	sub_82229BF0(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d52fc
	if (!ctx.cr6.eq) goto loc_821D52FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25664
	ctx.r4.s64 = ctx.r11.s64 + -25664;
	// bl 0x822ad4e0
	ctx.lr = 0x821D52FC;
	sub_822AD4E0(ctx, base);
loc_821D52FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0150
	ctx.lr = 0x821D5308;
	sub_821E0150(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D530C;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D5278) {
	__imp__sub_821D5278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D5324) {
	__imp__sub_821D5324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5328) {
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
	// bne cr6,0x821d5364
	if (!ctx.cr6.eq) goto loc_821D5364;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5374
	if (!ctx.cr6.eq) goto loc_821D5374;
loc_821D5364:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5370;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5374:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821e01b8
	ctx.lr = 0x821D537C;
	sub_821E01B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D5328) {
	__imp__sub_821D5328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D538C) {
	__imp__sub_821D538C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5390) {
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
	// bne cr6,0x821d53dc
	if (!ctx.cr6.eq) goto loc_821D53DC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d53dc
	if (ctx.cr6.eq) goto loc_821D53DC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d53ec
	goto loc_821D53EC;
loc_821D53DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D53E8;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D53EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D53F4;
	sub_82229BF0(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5414
	if (!ctx.cr6.eq) goto loc_821D5414;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25664
	ctx.r4.s64 = ctx.r11.s64 + -25664;
	// bl 0x822ad4e0
	ctx.lr = 0x821D5414;
	sub_822AD4E0(ctx, base);
loc_821D5414:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245dd8
	ctx.lr = 0x821D5420;
	sub_82245DD8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D5428;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D5390) {
	__imp__sub_821D5390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5440) {
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
	// bne cr6,0x821d5488
	if (!ctx.cr6.eq) goto loc_821D5488;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5488
	if (ctx.cr6.eq) goto loc_821D5488;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d5498
	goto loc_821D5498;
loc_821D5488:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5494;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5498:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821D54A0;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 528);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d54d0
	if (!ctx.cr6.eq) goto loc_821D54D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
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
loc_821D54D0:
	// lhz r10,582(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 582);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d54f8
	if (!ctx.cr6.eq) goto loc_821D54F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
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
loc_821D54F8:
	// lhz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 572);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5520
	if (!ctx.cr6.eq) goto loc_821D5520;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
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
loc_821D5520:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// bl 0x822ad350
	ctx.lr = 0x821D552C;
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

PPC_WEAK_FUNC(sub_821D5440) {
	__imp__sub_821D5440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821D5548;
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
	// bne cr6,0x821d5584
	if (!ctx.cr6.eq) goto loc_821D5584;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5584
	if (ctx.cr6.eq) goto loc_821D5584;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x821d5594
	goto loc_821D5594;
loc_821D5584:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5590;
	sub_822AD548(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_821D5594:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x821D55A0;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x821D55A8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d55c0
	if (!ctx.cr6.gt) goto loc_821D55C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821D55B8;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r29,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821D55C0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// lhz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d55e8
	if (ctx.cr6.eq) goto loc_821D55E8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d55e8
	if (ctx.cr6.eq) goto loc_821D55E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821aba40
	ctx.lr = 0x821D55E8;
	sub_821ABA40(ctx, base);
loc_821D55E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d5604
	if (ctx.cr6.eq) goto loc_821D5604;
	// lbz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d56ec
	if (!ctx.cr6.eq) goto loc_821D56EC;
loc_821D5604:
	// lhz r10,586(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 586);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d562c
	if (!ctx.cr6.eq) goto loc_821D562C;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r10.u32);
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// ori r8,r9,4096
	ctx.r8.u64 = ctx.r9.u64 | 4096;
	// stw r8,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D562C:
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lhz r8,528(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 528);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821d5654
	if (!ctx.cr6.eq) goto loc_821D5654;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D5654:
	// lhz r11,582(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 582);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5670
	if (!ctx.cr6.eq) goto loc_821D5670;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D5670:
	// lhz r11,482(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 482);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d568c
	if (!ctx.cr6.eq) goto loc_821D568C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D568C:
	// lhz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 612);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d56a8
	if (!ctx.cr6.eq) goto loc_821D56A8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D56A8:
	// lhz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d56c4
	if (!ctx.cr6.eq) goto loc_821D56C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D56C4:
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d56e0
	if (!ctx.cr6.eq) goto loc_821D56E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3416, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D56E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25580
	ctx.r3.s64 = ctx.r11.s64 + -25580;
	// bl 0x822ad350
	ctx.lr = 0x821D56EC;
	sub_822AD350(ctx, base);
loc_821D56EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D5540) {
	__imp__sub_821D5540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D56F4) {
	__imp__sub_821D56F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D56F8) {
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
	// bne cr6,0x821d5744
	if (!ctx.cr6.eq) goto loc_821D5744;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5744
	if (ctx.cr6.eq) goto loc_821D5744;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d5754
	goto loc_821D5754;
loc_821D5744:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5750;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D5754:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821D575C;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,510(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 510);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d579c
	if (!ctx.cr6.eq) goto loc_821D579C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// addi r31,r30,324
	ctx.r31.s64 = ctx.r30.s64 + 324;
	// bl 0x822b1fb0
	ctx.lr = 0x821D5784;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821D5798;
	sub_821CE2B8(ctx, base);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D579C:
	// lhz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 512);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d57bc
	if (!ctx.cr6.eq) goto loc_821D57BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,336(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 336, temp.u32);
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D57BC:
	// lhz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 516);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d5818
	if (!ctx.cr6.eq) goto loc_821D5818;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D57D4;
	sub_822B2498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d5800
	if (!ctx.cr6.eq) goto loc_821D5800;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d5800
	if (!ctx.cr6.eq) goto loc_821D5800;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25232
	ctx.r3.s64 = ctx.r11.s64 + -25232;
	// bl 0x822ad350
	ctx.lr = 0x821D5800;
	sub_822AD350(ctx, base);
loc_821D5800:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r30,324
	ctx.r3.s64 = ctx.r30.s64 + 324;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821cee00
	ctx.lr = 0x821D5814;
	sub_821CEE00(ctx, base);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D5818:
	// lhz r10,518(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 518);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d5830
	if (!ctx.cr6.eq) goto loc_821D5830;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D5830:
	// lhz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 520);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d5848
	if (!ctx.cr6.eq) goto loc_821D5848;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D5848:
	// lhz r10,522(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 522);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d5860
	if (!ctx.cr6.eq) goto loc_821D5860;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D5860:
	// lhz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 524);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d5878
	if (!ctx.cr6.eq) goto loc_821D5878;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D5878:
	// lhz r10,526(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 526);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d58fc
	if (!ctx.cr6.eq) goto loc_821D58FC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821D5890;
	sub_822B2498(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r30,324
	ctx.r3.s64 = ctx.r30.s64 + 324;
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f6,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r10.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x821d5920
	if (ctx.cr6.lt) goto loc_821D5920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821cee00
	ctx.lr = 0x821D58F8;
	sub_821CEE00(ctx, base);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D58FC:
	// lhz r11,514(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 514);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5914
	if (!ctx.cr6.eq) goto loc_821D5914;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cfae8
	ctx.lr = 0x821D5910;
	sub_821CFAE8(ctx, base);
	// b 0x821d5920
	goto loc_821D5920;
loc_821D5914:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25552
	ctx.r3.s64 = ctx.r11.s64 + -25552;
	// bl 0x822ad350
	ctx.lr = 0x821D5920;
	sub_822AD350(ctx, base);
loc_821D5920:
	// bl 0x822acb68
	ctx.lr = 0x821D5924;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821d5954
	if (!ctx.cr6.gt) goto loc_821D5954;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821D5934;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821d5954
	if (!ctx.cr6.gt) goto loc_821D5954;
	// addi r3,r30,308
	ctx.r3.s64 = ctx.r30.s64 + 308;
	// lfs f1,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce288
	ctx.lr = 0x821D5948;
	sub_821CE288(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce388
	ctx.lr = 0x821D5954;
	sub_821CE388(ctx, base);
loc_821D5954:
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

PPC_WEAK_FUNC(sub_821D56F8) {
	__imp__sub_821D56F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D596C) {
	__imp__sub_821D596C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5970) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d59b4
	if (!ctx.cr6.eq) goto loc_821D59B4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d59c4
	if (!ctx.cr6.eq) goto loc_821D59C4;
loc_821D59B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D59C0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D59C4:
	// lfs f0,3440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,3436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,3436
	ctx.r3.s64 = ctx.r31.s64 + 3436;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821d5a28
	if (!ctx.cr6.gt) goto loc_821D5A28;
	// bl 0x822d4ed0
	ctx.lr = 0x821D59EC;
	sub_822D4ED0(ctx, base);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821D5A10;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x821d5a58
	goto loc_821D5A58;
loc_821D5A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821D5A30;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5a50
	if (ctx.cr6.eq) goto loc_821D5A50;
	// addi r3,r31,4640
	ctx.r3.s64 = ctx.r31.s64 + 4640;
	// bl 0x822d4ed0
	ctx.lr = 0x821D5A44;
	sub_822D4ED0(ctx, base);
	// lfs f2,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x821D5A4C;
	sub_820D52C0(ctx, base);
	// b 0x821d5a58
	goto loc_821D5A58;
loc_821D5A50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_821D5A58:
	// bl 0x822acc78
	ctx.lr = 0x821D5A5C;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D5970) {
	__imp__sub_821D5970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D5A74) {
	__imp__sub_821D5A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5A78) {
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
	// bne cr6,0x821d5ab4
	if (!ctx.cr6.eq) goto loc_821D5AB4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5ac4
	if (!ctx.cr6.eq) goto loc_821D5AC4;
loc_821D5AB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5AC0;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5AC4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821cf8b8
	ctx.lr = 0x821D5ACC;
	sub_821CF8B8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D5AD4;
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

PPC_WEAK_FUNC(sub_821D5A78) {
	__imp__sub_821D5A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D5AE4) {
	__imp__sub_821D5AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5AE8) {
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
	// bne cr6,0x821d5b30
	if (!ctx.cr6.eq) goto loc_821D5B30;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5b30
	if (ctx.cr6.eq) goto loc_821D5B30;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d5b40
	goto loc_821D5B40;
loc_821D5B30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5B3C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5B40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf148
	ctx.lr = 0x821D5B48;
	sub_821CF148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5b5c
	if (ctx.cr6.eq) goto loc_821D5B5C;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x822ad078
	ctx.lr = 0x821D5B5C;
	sub_822AD078(ctx, base);
loc_821D5B5C:
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

PPC_WEAK_FUNC(sub_821D5AE8) {
	__imp__sub_821D5AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5B70) {
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
	// bne cr6,0x821d5bb0
	if (!ctx.cr6.eq) goto loc_821D5BB0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5bc0
	if (!ctx.cr6.eq) goto loc_821D5BC0;
loc_821D5BB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5BBC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5BC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9830
	ctx.lr = 0x821D5BC8;
	sub_821A9830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x821D5BD4;
	sub_822B1D30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stb r11,3362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3362, ctx.r11.u8);
	// sth r10,3360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3360, ctx.r10.u16);
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

PPC_WEAK_FUNC(sub_821D5B70) {
	__imp__sub_821D5B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D5BFC) {
	__imp__sub_821D5BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5C00) {
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
	// bne cr6,0x821d5c48
	if (!ctx.cr6.eq) goto loc_821D5C48;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5c48
	if (ctx.cr6.eq) goto loc_821D5C48;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d5c58
	goto loc_821D5C58;
loc_821D5C48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5C54;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0108
	ctx.lr = 0x821D5C60;
	sub_821E0108(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5c74
	if (ctx.cr6.eq) goto loc_821D5C74;
	// lwz r3,3356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// bl 0x82229b60
	ctx.lr = 0x821D5C74;
	sub_82229B60(ctx, base);
loc_821D5C74:
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

PPC_WEAK_FUNC(sub_821D5C00) {
	__imp__sub_821D5C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5C88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2047
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2047, ctx.xer);
	// bne cr6,0x821d5ca0
	if (!ctx.cr6.eq) goto loc_821D5CA0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,122(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821D5CA0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lwz r7,312(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 312);
	// rlwinm r6,r7,0,21,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821d5cd4
	if (ctx.cr6.eq) goto loc_821D5CD4;
	// lhz r11,546(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 546);
	// b 0x821d5cd8
	goto loc_821D5CD8;
loc_821D5CD4:
	// lhz r11,610(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 610);
loc_821D5CD8:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D5C88) {
	__imp__sub_821D5C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5CE0) {
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
	// bne cr6,0x821d5d1c
	if (!ctx.cr6.eq) goto loc_821D5D1C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5d2c
	if (!ctx.cr6.eq) goto loc_821D5D2C;
loc_821D5D1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5D28;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5D2C:
	// lhz r11,3448(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3448);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x821d5d58
	if (!ctx.cr6.eq) goto loc_821D5D58;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,122(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// bl 0x822acff0
	ctx.lr = 0x821D5D48;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821D5D58:
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r8,r9,9624
	ctx.r8.s64 = ctx.r9.s64 + 9624;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lwz r6,312(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 312);
	// rlwinm r5,r6,0,21,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821d5d8c
	if (ctx.cr6.eq) goto loc_821D5D8C;
	// lhz r11,546(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 546);
	// b 0x821d5d90
	goto loc_821D5D90;
loc_821D5D8C:
	// lhz r11,610(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 610);
loc_821D5D90:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822acff0
	ctx.lr = 0x821D5D98;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D5CE0) {
	__imp__sub_821D5CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D5DB0;
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
	// bne cr6,0x821d5de4
	if (!ctx.cr6.eq) goto loc_821D5DE4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5df4
	if (!ctx.cr6.eq) goto loc_821D5DF4;
loc_821D5DE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5DF0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5DF4:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dac60
	ctx.lr = 0x821D5E00;
	sub_821DAC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d5e58
	if (ctx.cr6.eq) goto loc_821D5E58;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2588
	ctx.lr = 0x821D5E10;
	sub_822B2588(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x821D5E18;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d5e30
	if (!ctx.cr6.gt) goto loc_821D5E30;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2588
	ctx.lr = 0x821D5E28;
	sub_822B2588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821d5e34
	goto loc_821D5E34;
loc_821D5E30:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D5E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821D5E3C;
	sub_821B4E00(ctx, base);
	// stw r29,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r29.u32);
	// stw r30,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r30.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r3,r31,3396
	ctx.r3.s64 = ctx.r31.s64 + 3396;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,470(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 470);
	// bl 0x822a24e0
	ctx.lr = 0x821D5E58;
	sub_822A24E0(ctx, base);
loc_821D5E58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D5DA8) {
	__imp__sub_821D5DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5E60) {
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
	// bne cr6,0x821d5e9c
	if (!ctx.cr6.eq) goto loc_821D5E9C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5eac
	if (!ctx.cr6.eq) goto loc_821D5EAC;
loc_821D5E9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5EA8;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5EAC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821a9fb0
	ctx.lr = 0x821D5EB4;
	sub_821A9FB0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D5EBC;
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

PPC_WEAK_FUNC(sub_821D5E60) {
	__imp__sub_821D5E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D5ECC) {
	__imp__sub_821D5ECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5ED0) {
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
	// bne cr6,0x821d5f14
	if (!ctx.cr6.eq) goto loc_821D5F14;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5f24
	if (!ctx.cr6.eq) goto loc_821D5F24;
loc_821D5F14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5F20;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5F24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D5F2C;
	sub_821AA3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d5f74
	if (ctx.cr6.eq) goto loc_821D5F74;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821D5F3C;
	sub_8223FB90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D5F48;
	sub_821AA3D0(ctx, base);
	// bl 0x8223fb90
	ctx.lr = 0x821D5F4C;
	sub_8223FB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d5f74
	if (ctx.cr6.eq) goto loc_821D5F74;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d5f74
	if (ctx.cr6.eq) goto loc_821D5F74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821D5F68;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821d5f78
	if (!ctx.cr6.eq) goto loc_821D5F78;
loc_821D5F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D5F78:
	// bl 0x822acbf8
	ctx.lr = 0x821D5F7C;
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

PPC_WEAK_FUNC(sub_821D5ED0) {
	__imp__sub_821D5ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D5F94) {
	__imp__sub_821D5F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D5F98) {
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
	// bne cr6,0x821d5fd8
	if (!ctx.cr6.eq) goto loc_821D5FD8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5fe8
	if (!ctx.cr6.eq) goto loc_821D5FE8;
loc_821D5FD8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D5FE4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5FE8:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c7010
	ctx.lr = 0x821D5FF0;
	sub_821C7010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6018
	if (ctx.cr6.eq) goto loc_821D6018;
	// lbz r11,4611(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,3736(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3736);
	// bl 0x82234970
	ctx.lr = 0x821D6014;
	sub_82234970(ctx, base);
	// bl 0x82237bc0
	ctx.lr = 0x821D6018;
	sub_82237BC0(ctx, base);
loc_821D6018:
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

PPC_WEAK_FUNC(sub_821D5F98) {
	__imp__sub_821D5F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D602C) {
	__imp__sub_821D602C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6030) {
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
	// bne cr6,0x821d6070
	if (!ctx.cr6.eq) goto loc_821D6070;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d6080
	if (!ctx.cr6.eq) goto loc_821D6080;
loc_821D6070:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D607C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D6080:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c7010
	ctx.lr = 0x821D6088;
	sub_821C7010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d60b0
	if (ctx.cr6.eq) goto loc_821D60B0;
	// lbz r11,4611(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,3708(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3708);
	// bl 0x82234970
	ctx.lr = 0x821D60AC;
	sub_82234970(ctx, base);
	// bl 0x82237bc0
	ctx.lr = 0x821D60B0;
	sub_82237BC0(ctx, base);
loc_821D60B0:
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

PPC_WEAK_FUNC(sub_821D6030) {
	__imp__sub_821D6030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D60C4) {
	__imp__sub_821D60C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D60C8) {
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
	// bne cr6,0x821d610c
	if (!ctx.cr6.eq) goto loc_821D610C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d611c
	if (!ctx.cr6.eq) goto loc_821D611C;
loc_821D610C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6118;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D611C:
	// lbz r10,4608(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4608);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821d6170
	if (ctx.cr0.lt) goto loc_821D6170;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,3736
	ctx.r30.s64 = ctx.r11.s64 + 3736;
loc_821D6138:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821d615c
	if (ctx.cr6.lt) goto loc_821D615C;
	// bl 0x82234970
	ctx.lr = 0x821D6148;
	sub_82234970(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821d616c
	if (ctx.cr6.eq) goto loc_821D616C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821d616c
	if (ctx.cr6.eq) goto loc_821D616C;
loc_821D615C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// bge 0x821d6138
	if (!ctx.cr0.lt) goto loc_821D6138;
	// b 0x821d6170
	goto loc_821D6170;
loc_821D616C:
	// bl 0x82237bc0
	ctx.lr = 0x821D6170;
	sub_82237BC0(ctx, base);
loc_821D6170:
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

PPC_WEAK_FUNC(sub_821D60C8) {
	__imp__sub_821D60C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821D6190;
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
	// bne cr6,0x821d61cc
	if (!ctx.cr6.eq) goto loc_821D61CC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d61cc
	if (ctx.cr6.eq) goto loc_821D61CC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x821d61dc
	goto loc_821D61DC;
loc_821D61CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D61D8;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821D61DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x821D61E4;
	sub_82234810(ctx, base);
	// lbz r11,4608(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4608);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821d6270
	if (ctx.cr0.lt) goto loc_821D6270;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,3736
	ctx.r30.s64 = ctx.r11.s64 + 3736;
loc_821D6204:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821d621c
	if (ctx.cr6.lt) goto loc_821D621C;
	// bl 0x82234970
	ctx.lr = 0x821D6214;
	sub_82234970(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821d6238
	if (ctx.cr6.eq) goto loc_821D6238;
loc_821D621C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// bge 0x821d6204
	if (!ctx.cr0.lt) goto loc_821D6204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x821D6230;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821D6238:
	// addi r11,r31,133
	ctx.r11.s64 = ctx.r31.s64 + 133;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x821d6274
	if (ctx.cr6.gt) goto loc_821D6274;
loc_821D6270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D6274:
	// bl 0x822acb78
	ctx.lr = 0x821D6278;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D6188) {
	__imp__sub_821D6188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6280) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// bne cr6,0x821d62c8
	if (!ctx.cr6.eq) goto loc_821D62C8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// addi r8,r11,268
	ctx.r8.s64 = ctx.r11.s64 + 268;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821d62d4
	if (!ctx.cr6.eq) goto loc_821D62D4;
loc_821D62C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D62D4;
	sub_822AD548(ctx, base);
loc_821D62D4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D62E0;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D62E8;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1c50
	ctx.lr = 0x821D62F4;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d6314
	if (ctx.cr6.eq) goto loc_821D6314;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,26572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26572);
	ctx.f4.f64 = double(temp.f32);
	// b 0x821d631c
	goto loc_821D631C;
loc_821D6314:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,13220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f4.f64 = double(temp.f32);
loc_821D631C:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f2,14004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14004);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// lfs f1,7932(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82320340
	ctx.lr = 0x821D635C;
	sub_82320340(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D6364;
	sub_822ACB78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_821D6280) {
	__imp__sub_821D6280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D637C) {
	__imp__sub_821D637C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6380) {
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
	// bne cr6,0x821d63c0
	if (!ctx.cr6.eq) goto loc_821D63C0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d63d0
	if (!ctx.cr6.eq) goto loc_821D63D0;
loc_821D63C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D63CC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D63D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821D63D8;
	sub_822B1C50(ctx, base);
	// lwz r11,3528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// bne cr6,0x821d63ec
	if (!ctx.cr6.eq) goto loc_821D63EC;
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
loc_821D63EC:
	// stw r10,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821D6380) {
	__imp__sub_821D6380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D6404) {
	__imp__sub_821D6404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6408) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4972, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D6408) {
	__imp__sub_821D6408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6410) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d645c
	if (!ctx.cr6.eq) goto loc_821D645C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d645c
	if (ctx.cr6.eq) goto loc_821D645C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d646c
	goto loc_821D646C;
loc_821D645C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6468;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D646C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x821D6474;
	sub_82234810(ctx, base);
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d64d0
	if (!ctx.cr6.eq) goto loc_821D64D0;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d64d0
	if (!ctx.cr6.eq) goto loc_821D64D0;
	// lfs f3,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// li r3,18
	ctx.r3.s64 = 18;
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
	// addi r4,r10,-25208
	ctx.r4.s64 = ctx.r10.s64 + -25208;
	// lhz r5,126(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82280b08
	ctx.lr = 0x821D64D0;
	sub_82280B08(ctx, base);
loc_821D64D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d1778
	ctx.lr = 0x821D64E0;
	sub_821D1778(ctx, base);
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

PPC_WEAK_FUNC(sub_821D6410) {
	__imp__sub_821D6410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D64F8) {
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
	// bl 0x821ae110
	ctx.lr = 0x821D6518;
	sub_821AE110(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4976
	ctx.r3.s64 = ctx.r31.s64 + 4976;
	// bl 0x821e2e18
	ctx.lr = 0x821D6524;
	sub_821E2E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
	// stw r11,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821D64F8) {
	__imp__sub_821D64F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6548) {
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
	// bne cr6,0x821d6590
	if (!ctx.cr6.eq) goto loc_821D6590;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6590
	if (ctx.cr6.eq) goto loc_821D6590;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d65a0
	goto loc_821D65A0;
loc_821D6590:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D659C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D65A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D65AC;
	sub_822B2498(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1778
	ctx.lr = 0x821D65BC;
	sub_821D1778(ctx, base);
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

PPC_WEAK_FUNC(sub_821D6548) {
	__imp__sub_821D6548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D65D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d6610
	if (!ctx.cr6.eq) goto loc_821D6610;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d6620
	if (!ctx.cr6.eq) goto loc_821D6620;
loc_821D6610:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D661C;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821D6620:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D6628;
	sub_82229BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821D6634;
	sub_821AE110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821D663C;
	sub_821AE110(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,4976
	ctx.r3.s64 = ctx.r31.s64 + 4976;
	// bl 0x821e2e18
	ctx.lr = 0x821D6648;
	sub_821E2E18(ctx, base);
	// stw r30,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r30.u32);
	// stw r30,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r30.u32);
	// bl 0x822acb68
	ctx.lr = 0x821D6654;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d6668
	if (!ctx.cr6.gt) goto loc_821D6668;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821D6664;
	sub_822B1C50(ctx, base);
	// stw r3,4984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4984, ctx.r3.u32);
loc_821D6668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D65D0) {
	__imp__sub_821D65D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6670) {
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
	// bne cr6,0x821d66b4
	if (!ctx.cr6.eq) goto loc_821D66B4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d66c4
	if (!ctx.cr6.eq) goto loc_821D66C4;
loc_821D66B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D66C0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D66C4:
	// lhz r11,4976(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d66e8
	if (ctx.cr6.eq) goto loc_821D66E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-25032
	ctx.r3.s64 = ctx.r10.s64 + -25032;
	// lhz r4,126(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x821D66E4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D66E8;
	sub_822AD350(ctx, base);
loc_821D66E8:
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d670c
	if (ctx.cr6.eq) goto loc_821D670C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r10,-25076
	ctx.r4.s64 = ctx.r10.s64 + -25076;
	// lhz r5,126(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82280b08
	ctx.lr = 0x821D670C;
	sub_82280B08(ctx, base);
loc_821D670C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D6714;
	sub_82229BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4948
	ctx.r3.s64 = ctx.r31.s64 + 4948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233cd78
	ctx.lr = 0x821D6724;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d6738
	if (!ctx.cr6.eq) goto loc_821D6738;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25136
	ctx.r3.s64 = ctx.r11.s64 + -25136;
	// bl 0x822ad350
	ctx.lr = 0x821D6738;
	sub_822AD350(ctx, base);
loc_821D6738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821D6740;
	sub_821AE110(ctx, base);
	// stw r30,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_821D6670) {
	__imp__sub_821D6670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D675C) {
	__imp__sub_821D675C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6760) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d67a4
	if (!ctx.cr6.eq) goto loc_821D67A4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d67b4
	if (!ctx.cr6.eq) goto loc_821D67B4;
loc_821D67A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D67B0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D67B4:
	// lhz r11,4976(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d67cc
	if (ctx.cr6.eq) goto loc_821D67CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24972
	ctx.r3.s64 = ctx.r11.s64 + -24972;
	// bl 0x822ad350
	ctx.lr = 0x821D67CC;
	sub_822AD350(ctx, base);
loc_821D67CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D67D4;
	sub_82229BF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r11.u32);
	// addi r4,r3,208
	ctx.r4.s64 = ctx.r3.s64 + 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1778
	ctx.lr = 0x821D67F0;
	sub_821D1778(ctx, base);
	// lfs f11,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27440(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,6060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6060);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f9,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsel f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfs f4,4960(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4960, temp.u32);
	// lfs f3,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f2,4964(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4964, temp.u32);
	// bl 0x821ae110
	ctx.lr = 0x821D6840;
	sub_821AE110(ctx, base);
	// stw r30,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_821D6760) {
	__imp__sub_821D6760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D685C) {
	__imp__sub_821D685C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6860) {
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
	// bne cr6,0x821d689c
	if (!ctx.cr6.eq) goto loc_821D689C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d68ac
	if (!ctx.cr6.eq) goto loc_821D68AC;
loc_821D689C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D68A8;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D68AC:
	// lwz r3,4972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4972);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d68bc
	if (ctx.cr6.eq) goto loc_821D68BC;
	// bl 0x82229b60
	ctx.lr = 0x821D68BC;
	sub_82229B60(ctx, base);
loc_821D68BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D6860) {
	__imp__sub_821D6860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D68CC) {
	__imp__sub_821D68CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D68D0) {
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
	// bne cr6,0x821d6920
	if (!ctx.cr6.eq) goto loc_821D6920;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6920
	if (ctx.cr6.eq) goto loc_821D6920;
	// stw r10,4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4972, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821D6920:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D692C;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4972(0)
	PPC_STORE_U32(4972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D68D0) {
	__imp__sub_821D68D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D6944) {
	__imp__sub_821D6944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6948) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d6994
	if (!ctx.cr6.eq) goto loc_821D6994;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6994
	if (ctx.cr6.eq) goto loc_821D6994;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d69a4
	goto loc_821D69A4;
loc_821D6994:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D69A0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D69A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D69AC;
	sub_82229BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,5016
	ctx.r3.s64 = ctx.r31.s64 + 5016;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821D69BC;
	sub_821E2E18(ctx, base);
	// lfs f0,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f9,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f5,f7,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,5012(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
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

PPC_WEAK_FUNC(sub_821D6948) {
	__imp__sub_821D6948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6A00) {
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r9,118(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,26552
	ctx.r31.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x821d6a40
	if (!ctx.cr6.eq) goto loc_821D6A40;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r10,r31,268
	ctx.r10.s64 = ctx.r31.s64 + 268;
	// mulli r8,r9,624
	ctx.r8.s64 = ctx.r9.s64 * 624;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6a50
	if (!ctx.cr6.eq) goto loc_821D6A50;
loc_821D6A40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6A4C;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D6A50:
	// lhz r11,5016(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6a6c
	if (ctx.cr6.eq) goto loc_821D6A6C;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82229b60
	ctx.lr = 0x821D6A6C;
	sub_82229B60(ctx, base);
loc_821D6A6C:
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

PPC_WEAK_FUNC(sub_821D6A00) {
	__imp__sub_821D6A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6A80) {
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
	// bne cr6,0x821d6ac8
	if (!ctx.cr6.eq) goto loc_821D6AC8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6ac8
	if (ctx.cr6.eq) goto loc_821D6AC8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d6ad8
	goto loc_821D6AD8;
loc_821D6AC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6AD4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D6AD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5016
	ctx.r3.s64 = ctx.r31.s64 + 5016;
	// bl 0x821e2e18
	ctx.lr = 0x821D6AE4;
	sub_821E2E18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
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

PPC_WEAK_FUNC(sub_821D6A80) {
	__imp__sub_821D6A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D6B04) {
	__imp__sub_821D6B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6B08) {
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
	// bne cr6,0x821d6b50
	if (!ctx.cr6.eq) goto loc_821D6B50;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6b50
	if (ctx.cr6.eq) goto loc_821D6B50;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d6b60
	goto loc_821D6B60;
loc_821D6B50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6B5C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D6B60:
	// bl 0x822acb68
	ctx.lr = 0x821D6B64;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821d6b8c
	if (ctx.cr6.eq) goto loc_821D6B8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24920
	ctx.r3.s64 = ctx.r11.s64 + -24920;
	// bl 0x822ad350
	ctx.lr = 0x821D6B78;
	sub_822AD350(ctx, base);
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
loc_821D6B8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D6B98;
	sub_822B2498(ctx, base);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821aae88
	ctx.lr = 0x821D6BA4;
	sub_821AAE88(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D6BAC;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821D6B08) {
	__imp__sub_821D6B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6BC0) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d6c04
	if (!ctx.cr6.eq) goto loc_821D6C04;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r30,r6,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d6c14
	if (!ctx.cr6.eq) goto loc_821D6C14;
loc_821D6C04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6C10;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D6C14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D6C20;
	sub_822B2498(ctx, base);
	// lfs f0,672(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r30,672
	ctx.r31.s64 = ctx.r30.s64 + 672;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d6c60
	if (!ctx.cr6.eq) goto loc_821D6C60;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d6c60
	if (!ctx.cr6.eq) goto loc_821D6C60;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d6c60
	if (!ctx.cr6.eq) goto loc_821D6C60;
	// lwz r11,668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d6c78
	if (!ctx.cr6.eq) goto loc_821D6C78;
loc_821D6C60:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 84);
	// bl 0x82229da8
	ctx.lr = 0x821D6C78;
	sub_82229DA8(ctx, base);
loc_821D6C78:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_821D6BC0) {
	__imp__sub_821D6BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6CB0) {
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
	// bne cr6,0x821d6cf8
	if (!ctx.cr6.eq) goto loc_821D6CF8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6cf8
	if (ctx.cr6.eq) goto loc_821D6CF8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d6d08
	goto loc_821D6D08;
loc_821D6CF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6D04;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D6D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x821D6D10;
	sub_82234810(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad88
	ctx.lr = 0x821D6D20;
	sub_821AAD88(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821D6D28;
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

PPC_WEAK_FUNC(sub_821D6CB0) {
	__imp__sub_821D6CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D6D3C) {
	__imp__sub_821D6D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6D40) {
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
	// bne cr6,0x821d6d7c
	if (!ctx.cr6.eq) goto loc_821D6D7C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6d8c
	if (!ctx.cr6.eq) goto loc_821D6D8C;
loc_821D6D7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6D88;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D6D8C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821ac230
	ctx.lr = 0x821D6D94;
	sub_821AC230(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D6D98;
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

PPC_WEAK_FUNC(sub_821D6D40) {
	__imp__sub_821D6D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6DA8) {
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
	// bne cr6,0x821d6de4
	if (!ctx.cr6.eq) goto loc_821D6DE4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6df4
	if (!ctx.cr6.eq) goto loc_821D6DF4;
loc_821D6DE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6DF0;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D6DF4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821ac280
	ctx.lr = 0x821D6DFC;
	sub_821AC280(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x821D6E00;
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

PPC_WEAK_FUNC(sub_821D6DA8) {
	__imp__sub_821D6DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6E10) {
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
	// bne cr6,0x821d6e50
	if (!ctx.cr6.eq) goto loc_821D6E50;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d6e60
	if (!ctx.cr6.eq) goto loc_821D6E60;
loc_821D6E50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6E5C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D6E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac230
	ctx.lr = 0x821D6E68;
	sub_821AC230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d6ea0
	if (ctx.cr6.eq) goto loc_821D6EA0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r8,0,28,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821d6ea0
	if (ctx.cr6.eq) goto loc_821D6EA0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82236640
	ctx.lr = 0x821D6E9C;
	sub_82236640(ctx, base);
	// b 0x821d6ea4
	goto loc_821D6EA4;
loc_821D6EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D6EA4:
	// bl 0x822acb78
	ctx.lr = 0x821D6EA8;
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

PPC_WEAK_FUNC(sub_821D6E10) {
	__imp__sub_821D6E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D6EBC) {
	__imp__sub_821D6EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6EC0) {
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
	// bne cr6,0x821d6f08
	if (!ctx.cr6.eq) goto loc_821D6F08;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6f08
	if (ctx.cr6.eq) goto loc_821D6F08;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d6f18
	goto loc_821D6F18;
loc_821D6F08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6F14;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D6F18:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D6F20;
	sub_82229BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d6f3c
	if (ctx.cr6.eq) goto loc_821D6F3C;
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d6f3c
	if (ctx.cr6.eq) goto loc_821D6F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9558
	ctx.lr = 0x821D6F3C;
	sub_821D9558(ctx, base);
loc_821D6F3C:
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

PPC_WEAK_FUNC(sub_821D6EC0) {
	__imp__sub_821D6EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D6F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D6F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d6f90
	if (!ctx.cr6.eq) goto loc_821D6F90;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r10,r30,268
	ctx.r10.s64 = ctx.r30.s64 + 268;
	// mulli r8,r9,624
	ctx.r8.s64 = ctx.r9.s64 * 624;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d6fa0
	if (!ctx.cr6.eq) goto loc_821D6FA0;
loc_821D6F90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D6F9C;
	sub_822AD548(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821D6FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D6FA8;
	sub_821AA3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d6fdc
	if (ctx.cr6.eq) goto loc_821D6FDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821D6FB8;
	sub_821AA3D0(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,840(r6)
	PPC_STORE_U32(ctx.r6.u32 + 840, ctx.r29.u32);
loc_821D6FDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7020
	if (ctx.cr6.eq) goto loc_821D7020;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-624
	ctx.r30.s64 = ctx.r11.s64 + -624;
	// bl 0x821aa3a0
	ctx.lr = 0x821D7000;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821d7020
	if (!ctx.cr6.eq) goto loc_821D7020;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x821e2e18
	ctx.lr = 0x821D7018;
	sub_821E2E18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,91(r11)
	PPC_STORE_U8(ctx.r11.u32 + 91, ctx.r29.u8);
loc_821D7020:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223fcc0
	ctx.lr = 0x821D7034;
	sub_8223FCC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D6F50) {
	__imp__sub_821D6F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D703C) {
	__imp__sub_821D703C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D7048;
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d7084
	if (!ctx.cr6.eq) goto loc_821D7084;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d7094
	if (!ctx.cr6.eq) goto loc_821D7094;
loc_821D7084:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7090;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D7094:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D709C;
	sub_82229BF0(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d70b8
	if (ctx.cr6.eq) goto loc_821D70B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24848
	ctx.r3.s64 = ctx.r11.s64 + -24848;
	// bl 0x822ad350
	ctx.lr = 0x821D70B8;
	sub_822AD350(ctx, base);
loc_821D70B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x821e2e18
	ctx.lr = 0x821D70C8;
	sub_821E2E18(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,196(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 196);
	// bl 0x8233d278
	ctx.lr = 0x821D70DC;
	sub_8233D278(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,91(r9)
	PPC_STORE_U8(ctx.r9.u32 + 91, ctx.r7.u8);
	// bl 0x822acb68
	ctx.lr = 0x821D70F0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d716c
	if (!ctx.cr6.gt) goto loc_821D716C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D7100;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,12168
	ctx.r30.s64 = ctx.r11.s64 + 12168;
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x821d7134
	if (!ctx.cr6.gt) goto loc_821D7134;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821d7134
	if (ctx.cr6.gt) goto loc_821D7134;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// b 0x821d7180
	goto loc_821D7180;
loc_821D7134:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-24892
	ctx.r3.s64 = ctx.r10.s64 + -24892;
	// lhz r4,126(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x821D7148;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D714C;
	sub_822AD350(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fneg f12,f31
	ctx.f12.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fsel f11,f13,f0,f31
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// fsel f10,f12,f30,f11
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// stfs f10,64(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// b 0x821d7180
	goto loc_821D7180;
loc_821D716C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,12168
	ctx.r30.s64 = ctx.r11.s64 + 12168;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
loc_821D7180:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d71a0
	if (!ctx.cr6.eq) goto loc_821D71A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223fcc0
	ctx.lr = 0x821D71A0;
	sub_8223FCC0(ctx, base);
loc_821D71A0:
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

PPC_WEAK_FUNC(sub_821D7040) {
	__imp__sub_821D7040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D71B0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x821d71f4
	if (!ctx.cr6.eq) goto loc_821D71F4;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r10,r30,268
	ctx.r10.s64 = ctx.r30.s64 + 268;
	// mulli r8,r9,624
	ctx.r8.s64 = ctx.r9.s64 * 624;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d7204
	if (!ctx.cr6.eq) goto loc_821D7204;
loc_821D71F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7200;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D7204:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7244
	if (ctx.cr6.eq) goto loc_821D7244;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-624
	ctx.r30.s64 = ctx.r11.s64 + -624;
	// bl 0x821aa3a0
	ctx.lr = 0x821D7228;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821d7244
	if (!ctx.cr6.eq) goto loc_821D7244;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223fcc0
	ctx.lr = 0x821D7244;
	sub_8223FCC0(ctx, base);
loc_821D7244:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x821e2e18
	ctx.lr = 0x821D7254;
	sub_821E2E18(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,91(r10)
	PPC_STORE_U8(ctx.r10.u32 + 91, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_821D71B0) {
	__imp__sub_821D71B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7278) {
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
	// bne cr6,0x821d72f8
	if (!ctx.cr6.eq) goto loc_821D72F8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d72f8
	if (ctx.cr6.eq) goto loc_821D72F8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x822acb68
	ctx.lr = 0x821D72C0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821d72d4
	if (ctx.cr6.eq) goto loc_821D72D4;
loc_821D72C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24784
	ctx.r3.s64 = ctx.r11.s64 + -24784;
	// bl 0x822ad350
	ctx.lr = 0x821D72D4;
	sub_822AD350(ctx, base);
loc_821D72D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D72DC;
	sub_822B1FB0(ctx, base);
	// addi r3,r31,3184
	ctx.r3.s64 = ctx.r31.s64 + 3184;
	// bl 0x821ded10
	ctx.lr = 0x821D72E4;
	sub_821DED10(ctx, base);
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
loc_821D72F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7304;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821d72c8
	goto loc_821D72C8;
}

PPC_WEAK_FUNC(sub_821D7278) {
	__imp__sub_821D7278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D730C) {
	__imp__sub_821D730C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7310) {
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
	// bne cr6,0x821d7388
	if (!ctx.cr6.eq) goto loc_821D7388;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7388
	if (ctx.cr6.eq) goto loc_821D7388;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x822acb68
	ctx.lr = 0x821D7358;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d736c
	if (ctx.cr6.eq) goto loc_821D736C;
loc_821D7360:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// bl 0x822ad350
	ctx.lr = 0x821D736C;
	sub_822AD350(ctx, base);
loc_821D736C:
	// addi r3,r31,3184
	ctx.r3.s64 = ctx.r31.s64 + 3184;
	// bl 0x821ded78
	ctx.lr = 0x821D7374;
	sub_821DED78(ctx, base);
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
loc_821D7388:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7394;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821d7360
	goto loc_821D7360;
}

PPC_WEAK_FUNC(sub_821D7310) {
	__imp__sub_821D7310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D739C) {
	__imp__sub_821D739C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D73A0) {
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
	// bne cr6,0x821d73e8
	if (!ctx.cr6.eq) goto loc_821D73E8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d73e8
	if (ctx.cr6.eq) goto loc_821D73E8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d73f8
	goto loc_821D73F8;
loc_821D73E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D73F4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D73F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821D7400;
	sub_822B1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad378
	ctx.lr = 0x821D740C;
	sub_821AD378(ctx, base);
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

PPC_WEAK_FUNC(sub_821D73A0) {
	__imp__sub_821D73A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7420) {
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
	// bne cr6,0x821d7460
	if (!ctx.cr6.eq) goto loc_821D7460;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d7470
	if (!ctx.cr6.eq) goto loc_821D7470;
loc_821D7460:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D746C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D7470:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D7478;
	sub_822B1FB0(ctx, base);
	// stfs f1,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D7484;
	sub_822B1FB0(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,740(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x821d74b8
	if (!ctx.cr6.gt) goto loc_821D74B8;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24704
	ctx.r3.s64 = ctx.r11.s64 + -24704;
	// bl 0x822e84f0
	ctx.lr = 0x821D74B4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D74B8;
	sub_822AD350(ctx, base);
loc_821D74B8:
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

PPC_WEAK_FUNC(sub_821D7420) {
	__imp__sub_821D7420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D74CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D74CC) {
	__imp__sub_821D74CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D74D0) {
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
	// bne cr6,0x821d7510
	if (!ctx.cr6.eq) goto loc_821D7510;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d7520
	if (!ctx.cr6.eq) goto loc_821D7520;
loc_821D7510:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D751C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D7520:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821D7528;
	sub_822B1FB0(ctx, base);
	// stfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D7534;
	sub_822B1FB0(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,748(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bge cr6,0x821d7568
	if (!ctx.cr6.lt) goto loc_821D7568;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24656
	ctx.r3.s64 = ctx.r11.s64 + -24656;
	// bl 0x822e84f0
	ctx.lr = 0x821D7564;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821D7568;
	sub_822AD350(ctx, base);
loc_821D7568:
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

PPC_WEAK_FUNC(sub_821D74D0) {
	__imp__sub_821D74D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D757C) {
	__imp__sub_821D757C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7580) {
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
	// bne cr6,0x821d75c8
	if (!ctx.cr6.eq) goto loc_821D75C8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d75c8
	if (ctx.cr6.eq) goto loc_821D75C8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d75d8
	goto loc_821D75D8;
loc_821D75C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D75D4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D75D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821D75E4;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821D75EC;
	sub_822B1FB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab680
	ctx.lr = 0x821D75FC;
	sub_821AB680(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x821d760c
	if (!ctx.cr6.eq) goto loc_821D760C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D760C:
	// bl 0x822acbf8
	ctx.lr = 0x821D7610;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821D7580) {
	__imp__sub_821D7580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7624) {
	__imp__sub_821D7624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7628) {
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
	// bne cr6,0x821d7670
	if (!ctx.cr6.eq) goto loc_821D7670;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7670
	if (ctx.cr6.eq) goto loc_821D7670;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d7680
	goto loc_821D7680;
loc_821D7670:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D767C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D7680:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821D7688;
	sub_82229BF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-5928
	ctx.r5.s64 = ctx.r10.s64 + -5928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ab680
	ctx.lr = 0x821D76A4;
	sub_821AB680(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x821d76b4
	if (!ctx.cr6.eq) goto loc_821D76B4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D76B4:
	// bl 0x822acbf8
	ctx.lr = 0x821D76B8;
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

PPC_WEAK_FUNC(sub_821D7628) {
	__imp__sub_821D7628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D76CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D76CC) {
	__imp__sub_821D76CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D76D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821D76D8;
	__savegprlr_26(ctx, base);
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
	// bne cr6,0x821d7714
	if (!ctx.cr6.eq) goto loc_821D7714;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7714
	if (ctx.cr6.eq) goto loc_821D7714;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x821d7724
	goto loc_821D7724;
loc_821D7714:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7720;
	sub_822AD548(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_821D7724:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821D7730;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d77a8
	if (ctx.cr6.eq) goto loc_821D77A8;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r10,7188
	ctx.r31.s64 = ctx.r10.s64 + 7188;
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
loc_821D774C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821D7754;
	sub_822B20B8(ctx, base);
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d77b4
	if (ctx.cr6.eq) goto loc_821D77B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821D7768:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821d7790
	if (ctx.cr6.eq) goto loc_821D7790;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821d7768
	if (ctx.cr6.lt) goto loc_821D7768;
	// b 0x821d7798
	goto loc_821D7798;
loc_821D7790:
	// slw r11,r28,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_821D7798:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bl 0x822acb68
	ctx.lr = 0x821D77A0;
	sub_822ACB68(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821d774c
	if (ctx.cr6.lt) goto loc_821D774C;
loc_821D77A8:
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821D77B4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D76D0) {
	__imp__sub_821D76D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D77C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D77C4) {
	__imp__sub_821D77C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D77C8) {
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
	// bne cr6,0x821d7804
	if (!ctx.cr6.eq) goto loc_821D7804;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7814
	if (!ctx.cr6.eq) goto loc_821D7814;
loc_821D7804:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7810;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D7814:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D77C8) {
	__imp__sub_821D77C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7834) {
	__imp__sub_821D7834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7838) {
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
	// bne cr6,0x821d7874
	if (!ctx.cr6.eq) goto loc_821D7874;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7884
	if (!ctx.cr6.eq) goto loc_821D7884;
loc_821D7874:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7880;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D7884:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D7838) {
	__imp__sub_821D7838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D78A4) {
	__imp__sub_821D78A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D78A8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d78ec
	if (!ctx.cr6.eq) goto loc_821D78EC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d78fc
	if (!ctx.cr6.eq) goto loc_821D78FC;
loc_821D78EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D78F8;
	sub_822AD548(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D78FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r31.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r31.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82340d30
	ctx.lr = 0x821D7914;
	sub_82340D30(ctx, base);
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

PPC_WEAK_FUNC(sub_821D78A8) {
	__imp__sub_821D78A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7928) {
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
	// bne cr6,0x821d7964
	if (!ctx.cr6.eq) goto loc_821D7964;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7974
	if (!ctx.cr6.eq) goto loc_821D7974;
loc_821D7964:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7970;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D7974:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,642
	ctx.r9.s64 = 42074112;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// ori r7,r9,21
	ctx.r7.u64 = ctx.r9.u64 | 21;
	// stw r7,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r7.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,204(r6)
	PPC_STORE_U32(ctx.r6.u32 + 204, ctx.r8.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82340d30
	ctx.lr = 0x821D7998;
	sub_82340D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D7928) {
	__imp__sub_821D7928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D79A8) {
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
	// bne cr6,0x821d79f4
	if (!ctx.cr6.eq) goto loc_821D79F4;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r6,r8,624
	ctx.r6.s64 = ctx.r8.s64 * 624;
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d79f4
	if (ctx.cr6.eq) goto loc_821D79F4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821d7a04
	goto loc_821D7A04;
loc_821D79F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x822ad548
	ctx.lr = 0x821D7A00;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D7A04:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821D7A0C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d7a20
	if (ctx.cr6.eq) goto loc_821D7A20;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x821D7A1C;
	sub_82234810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821D7A20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821D7A2C;
	sub_821B8DB0(ctx, base);
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

PPC_WEAK_FUNC(sub_821D79A8) {
	__imp__sub_821D79A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7A44) {
	__imp__sub_821D7A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7A48) {
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
	// bne cr6,0x821d7aa4
	if (!ctx.cr6.eq) goto loc_821D7AA4;
	// addi r11,r11,-28784
	ctx.r11.s64 = ctx.r11.s64 + -28784;
	// li r30,116
	ctx.r30.s64 = 116;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_821D7A74:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x821D7A80;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821d7a74
	if (!ctx.cr0.eq) goto loc_821D7A74;
loc_821D7A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D7A8C:
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
loc_821D7AA4:
	// addi r4,r11,-28784
	ctx.r4.s64 = ctx.r11.s64 + -28784;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821D7AB8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821D7AC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x821d7ae4
	if (ctx.cr6.eq) goto loc_821D7AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d7ac0
	if (ctx.cr6.eq) goto loc_821D7AC0;
loc_821D7AE4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d7b04
	if (ctx.cr6.eq) goto loc_821D7B04;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,1392
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1392, ctx.xer);
	// blt cr6,0x821d7ab8
	if (ctx.cr6.lt) goto loc_821D7AB8;
	// b 0x821d7a88
	goto loc_821D7A88;
loc_821D7B04:
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
	// b 0x821d7a8c
	goto loc_821D7A8C;
}

PPC_WEAK_FUNC(sub_821D7A48) {
	__imp__sub_821D7A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7B24) {
	__imp__sub_821D7B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7B28) {
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
	// lbz r11,3172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7b6c
	if (ctx.cr6.eq) goto loc_821D7B6C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d7b64
	if (ctx.cr6.eq) goto loc_821D7B64;
	// bl 0x821aa3a0
	ctx.lr = 0x821D7B5C;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821d7b6c
	if (ctx.cr6.eq) goto loc_821D7B6C;
loc_821D7B64:
	// lfs f1,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821d7b70
	goto loc_821D7B70;
loc_821D7B6C:
	// lfs f1,752(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	ctx.f1.f64 = double(temp.f32);
loc_821D7B70:
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

PPC_WEAK_FUNC(sub_821D7B28) {
	__imp__sub_821D7B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821D7B90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5028);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r10,768(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 768);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,5028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5028, ctx.r9.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// beq cr6,0x821d7c8c
	if (ctx.cr6.eq) goto loc_821D7C8C;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r27,r10,-9672
	ctx.r27.s64 = ctx.r10.s64 + -9672;
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,11176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11176);
	// lis r9,640
	ctx.r9.s64 = 41943040;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r9,r9,55299
	ctx.r9.u64 = ctx.r9.u64 | 55299;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f13,f3,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f7,f10,f0,f12
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fdivs f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f0,f4,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f6,f4
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f0,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f1,f3,f13,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f0,f3,f12,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lhz r7,126(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// bl 0x82342160
	ctx.lr = 0x821D7C6C;
	sub_82342160(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821d7d10
	if (!ctx.cr6.eq) goto loc_821D7D10;
	// lis r9,640
	ctx.r9.s64 = 41943040;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r9,r9,55297
	ctx.r9.u64 = ctx.r9.u64 | 55297;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x821d7cec
	goto loc_821D7CEC;
loc_821D7C8C:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,640
	ctx.r9.s64 = 41943040;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,11176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11176);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// addi r6,r10,-9672
	ctx.r6.s64 = ctx.r10.s64 + -9672;
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// bge cr6,0x821d7ce8
	if (!ctx.cr6.lt) goto loc_821D7CE8;
	// ori r9,r9,55297
	ctx.r9.u64 = ctx.r9.u64 | 55297;
	// b 0x821d7cec
	goto loc_821D7CEC;
loc_821D7CE8:
	// ori r9,r9,55299
	ctx.r9.u64 = ctx.r9.u64 | 55299;
loc_821D7CEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r7,126(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82342160
	ctx.lr = 0x821D7D04;
	sub_82342160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d7d1c
	if (ctx.cr6.eq) goto loc_821D7D1C;
loc_821D7D10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821D7D1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338210
	ctx.lr = 0x821D7D28;
	sub_82338210(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-24608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821d7d40
	if (ctx.cr6.lt) goto loc_821D7D40;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D7D40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D7B88) {
	__imp__sub_821D7B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x821d7dac
	if (ctx.cr6.eq) goto loc_821D7DAC;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x821d7da4
	if (ctx.cr6.gt) goto loc_821D7DA4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lfs f13,2876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2876);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821d7dac
	if (!ctx.cr6.gt) goto loc_821D7DAC;
loc_821D7DA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D7DAC:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x821d7b88
	sub_821D7B88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D7D48) {
	__imp__sub_821D7D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7DB4) {
	__imp__sub_821D7DB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821D7DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x821a9500
	ctx.lr = 0x821D7DE4;
	sub_821A9500(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7e8c
	if (ctx.cr6.eq) goto loc_821D7E8C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7e68
	if (!ctx.cr6.eq) goto loc_821D7E68;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-6128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6128);
	// lhz r5,126(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821d7e38
	if (!ctx.cr6.eq) goto loc_821D7E38;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r6,126(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// addi r4,r10,-24600
	ctx.r4.s64 = ctx.r10.s64 + -24600;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r7,52(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// bl 0x82280900
	ctx.lr = 0x821D7E38;
	sub_82280900(ctx, base);
loc_821D7E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821D7E40;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821d7e68
	if (!ctx.cr6.eq) goto loc_821D7E68;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,508(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 508);
	// bl 0x82229da8
	ctx.lr = 0x821D7E60;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dee88
	ctx.lr = 0x821D7E68;
	sub_821DEE88(ctx, base);
loc_821D7E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0108
	ctx.lr = 0x821D7E70;
	sub_821E0108(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7e80
	if (!ctx.cr6.eq) goto loc_821D7E80;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
loc_821D7E80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// bl 0x821d9558
	ctx.lr = 0x821D7E8C;
	sub_821D9558(ctx, base);
loc_821D7E8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D7DB8) {
	__imp__sub_821D7DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7E94) {
	__imp__sub_821D7E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821d7eb8
	if (!ctx.cr6.eq) goto loc_821D7EB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D7EB8:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfsx f5,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// bge cr6,0x821d7f1c
	if (!ctx.cr6.lt) goto loc_821D7F1C;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f12,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x821d7f20
	if (ctx.cr6.lt) goto loc_821D7F20;
loc_821D7F1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D7F20:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D7E98) {
	__imp__sub_821D7E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7F28) {
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
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x821d7e98
	ctx.lr = 0x821D7F48;
	sub_821D7E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7f98
	if (!ctx.cr6.eq) goto loc_821D7F98;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x821d7e98
	ctx.lr = 0x821D7F68;
	sub_821D7E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7f98
	if (!ctx.cr6.eq) goto loc_821D7F98;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x821d7e98
	ctx.lr = 0x821D7F88;
	sub_821D7E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7f9c
	if (ctx.cr6.eq) goto loc_821D7F9C;
loc_821D7F98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D7F9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821D7F28) {
	__imp__sub_821D7F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D7FAC) {
	__imp__sub_821D7FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D7FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821D7FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821D8004;
	sub_822DA650(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d6770
	ctx.lr = 0x821D8014;
	sub_822D6770(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// bl 0x821d7f28
	ctx.lr = 0x821D8024;
	sub_821D7F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d80d8
	if (ctx.cr6.eq) goto loc_821D80D8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f4,f3,f3
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f3,f9,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f2,f13,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f1,f6,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f13,f5,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fsqrts f11,f1
	ctx.f11.f64 = double(float(sqrt(ctx.f1.f64)));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsqrts f7,f13
	ctx.f7.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsel f5,f10,f0,f11
	ctx.f5.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fdivs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f0,f3,f7,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f2,f7,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f1,f7,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821D80D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821D7FB0) {
	__imp__sub_821D7FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D80E0) {
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
	// bl 0x821aa3d0
	ctx.lr = 0x821D8100;
	sub_821AA3D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821d8130
	if (ctx.cr6.eq) goto loc_821D8130;
	// lhz r11,3232(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8168
	if (ctx.cr6.eq) goto loc_821D8168;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821d8168
	if (!ctx.cr6.eq) goto loc_821D8168;
loc_821D8130:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9530
	ctx.lr = 0x821D813C;
	sub_821A9530(ctx, base);
	// lwz r11,3160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821d8168
	if (ctx.cr6.lt) goto loc_821D8168;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,1000
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1000, ctx.xer);
	// blt cr6,0x821d816c
	if (ctx.cr6.lt) goto loc_821D816C;
loc_821D8168:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D816C:
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

PPC_WEAK_FUNC(sub_821D80E0) {
	__imp__sub_821D80E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D8184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821D8184) {
	__imp__sub_821D8184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821D8188) {
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
	// bl 0x821aa3d0
	ctx.lr = 0x821D81A0;
	sub_821AA3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d81bc
	if (!ctx.cr6.eq) goto loc_821D81BC;
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
loc_821D81BC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,824
	ctx.r9.s64 = ctx.r11.s64 + 824;
	// lwz r11,840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d8200
	if (ctx.cr6.eq) goto loc_821D8200;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821d8204
	if (ctx.cr6.lt) goto loc_821D8204;
loc_821D8200:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D8204:
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

PPC_WEAK_FUNC(sub_821D8188) {
	__imp__sub_821D8188(ctx, base);
}

