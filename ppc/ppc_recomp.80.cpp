#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82307A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307A04) {
	__imp__sub_82307A04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82307A10;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,24340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24340);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r31,-31835
	ctx.r31.s64 = -2086338560;
	// lis r28,-31835
	ctx.r28.s64 = -2086338560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,6908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	// lwz r10,6124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6124);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f31,f6,f5
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// bl 0x822d4ac8
	ctx.lr = 0x82307A84;
	sub_822D4AC8(ctx, base);
	// lwz r11,6124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6124);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82307aa0
	if (!ctx.cr6.lt) goto loc_82307AA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82307ac8
	goto loc_82307AC8;
loc_82307AA0:
	// lwz r11,6908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bgt cr6,0x82307ac8
	if (ctx.cr6.gt) goto loc_82307AC8;
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_82307AC8:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82307A08) {
	__imp__sub_82307A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307AEC) {
	__imp__sub_82307AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r3,104
	ctx.r9.s64 = ctx.r3.s64 + 104;
	// addi r5,r3,72
	ctx.r5.s64 = ctx.r3.s64 + 72;
	// lis r6,-31835
	ctx.r6.s64 = -2086338560;
	// lis r7,-31835
	ctx.r7.s64 = -2086338560;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82307B08:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
loc_82307B10:
	// lwz r11,6112(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6112);
	// lbzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stbx r4,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u8);
	// lwz r11,6204(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6204);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82307b38
	if (ctx.cr6.eq) goto loc_82307B38;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82307b3c
	goto loc_82307B3C;
loc_82307B38:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82307B3C:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82307b60
	if (!ctx.cr6.eq) goto loc_82307B60;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82307b58
	if (ctx.cr6.gt) goto loc_82307B58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82307B58:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// b 0x82307b74
	goto loc_82307B74;
loc_82307B60:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82307b70
	if (ctx.cr6.lt) goto loc_82307B70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82307B70:
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_82307B74:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82307b10
	if (!ctx.cr6.eq) goto loc_82307B10;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82307b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82307B08;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307AF0) {
	__imp__sub_82307AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307B90) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,6(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82307a08
	ctx.lr = 0x82307BCC;
	sub_82307A08(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x82307a08
	ctx.lr = 0x82307BE0;
	sub_82307A08(ctx, base);
	// lfs f12,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f10,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f8,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,100(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f7,84(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// bl 0x82307af0
	ctx.lr = 0x82307C28;
	sub_82307AF0(ctx, base);
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

PPC_WEAK_FUNC(sub_82307B90) {
	__imp__sub_82307B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// sth r9,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r9.u16);
	// sth r9,130(r11)
	PPC_STORE_U16(ctx.r11.u32 + 130, ctx.r9.u16);
	// b 0x8236ff40
	sub_8236FF40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82307C40) {
	__imp__sub_82307C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307C64) {
	__imp__sub_82307C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307C68) {
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
	// bl 0x8213af78
	ctx.lr = 0x82307C80;
	sub_8213AF78(ctx, base);
	// lbz r11,67(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 67);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82307cac
	if (!ctx.cr6.eq) goto loc_82307CAC;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r9.u16);
	// sth r9,130(r11)
	PPC_STORE_U16(ctx.r11.u32 + 130, ctx.r9.u16);
	// b 0x82307cf4
	goto loc_82307CF4;
loc_82307CAC:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 * 172;
	// addi r10,r10,6216
	ctx.r10.s64 = ctx.r10.s64 + 6216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,2956(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2956);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r8,130(r11)
	PPC_STORE_U16(ctx.r11.u32 + 130, ctx.r8.u16);
	// sth r7,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r7.u16);
loc_82307CF4:
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ff40
	ctx.lr = 0x82307D00;
	sub_8236FF40(ctx, base);
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

PPC_WEAK_FUNC(sub_82307C68) {
	__imp__sub_82307C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307D14) {
	__imp__sub_82307D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82307D20;
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r11,4368
	ctx.r8.s64 = ctx.r11.s64 + 4368;
	// addi r3,r10,4356
	ctx.r3.s64 = ctx.r10.s64 + 4356;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82307D54;
	sub_822E1618(ctx, base);
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r3,6904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6904, ctx.r3.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f31,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r5,4316
	ctx.r8.s64 = ctx.r5.s64 + 4316;
	// lfs f30,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r4,4292
	ctx.r3.s64 = ctx.r4.s64 + 4292;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,4352(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82307D94;
	sub_822E1660(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r3,6208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6208, ctx.r3.u32);
	// addi r3,r7,4268
	ctx.r3.s64 = ctx.r7.s64 + 4268;
	// addi r8,r9,4236
	ctx.r8.s64 = ctx.r9.s64 + 4236;
	// lfs f1,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x82307DC4;
	sub_822E1660(ctx, base);
	// lis r6,-31835
	ctx.r6.s64 = -2086338560;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r4,4204
	ctx.r8.s64 = ctx.r4.s64 + 4204;
	// stw r3,6124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6124, ctx.r3.u32);
	// addi r3,r11,4180
	ctx.r3.s64 = ctx.r11.s64 + 4180;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,11804(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82307DF4;
	sub_822E1660(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r3,6908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6908, ctx.r3.u32);
	// addi r3,r7,4160
	ctx.r3.s64 = ctx.r7.s64 + 4160;
	// addi r8,r8,4124
	ctx.r8.s64 = ctx.r8.s64 + 4124;
	// lfs f1,4292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x82307E24;
	sub_822E1660(ctx, base);
	// lis r6,-31835
	ctx.r6.s64 = -2086338560;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r4,4040
	ctx.r8.s64 = ctx.r4.s64 + 4040;
	// stw r3,6112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6112, ctx.r3.u32);
	// addi r3,r11,4004
	ctx.r3.s64 = ctx.r11.s64 + 4004;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,6020(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6020);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82307E54;
	sub_822E1660(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r9,3936
	ctx.r8.s64 = ctx.r9.s64 + 3936;
	// stw r3,6204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6204, ctx.r3.u32);
	// addi r3,r7,-9972
	ctx.r3.s64 = ctx.r7.s64 + -9972;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,420
	ctx.r4.s64 = 420;
	// bl 0x822e1618
	ctx.lr = 0x82307E80;
	sub_822E1618(ctx, base);
	// lis r6,-31835
	ctx.r6.s64 = -2086338560;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,3856
	ctx.r8.s64 = ctx.r5.s64 + 3856;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,6116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6116, ctx.r3.u32);
	// addi r3,r4,-10000
	ctx.r3.s64 = ctx.r4.s64 + -10000;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,210
	ctx.r4.s64 = 210;
	// bl 0x822e1618
	ctx.lr = 0x82307EAC;
	sub_822E1618(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// stw r3,6200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6200, ctx.r3.u32);
	// addi r3,r9,3832
	ctx.r3.s64 = ctx.r9.s64 + 3832;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x82307EDC;
	sub_822E1618(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,6216
	ctx.r29.s64 = ctx.r11.s64 + 6216;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r29,128
	ctx.r31.s64 = ctx.r29.s64 + 128;
	// stw r3,6120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6120, ctx.r3.u32);
loc_82307EF8:
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ff40
	ctx.lr = 0x82307F0C;
	sub_8236FF40(ctx, base);
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// addi r11,r29,816
	ctx.r11.s64 = ctx.r29.s64 + 816;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82307ef8
	if (ctx.cr6.lt) goto loc_82307EF8;
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

PPC_WEAK_FUNC(sub_82307D18) {
	__imp__sub_82307D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307F30) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82307b90
	ctx.lr = 0x82307F5C;
	sub_82307B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82307878
	ctx.lr = 0x82307F68;
	sub_82307878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307960
	ctx.lr = 0x82307F74;
	sub_82307960(ctx, base);
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

PPC_WEAK_FUNC(sub_82307F30) {
	__imp__sub_82307F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// stw r3,6192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6192, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307F88) {
	__imp__sub_82307F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307F94) {
	__imp__sub_82307F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// stw r3,6212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6212, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307F98) {
	__imp__sub_82307F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307FA4) {
	__imp__sub_82307FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r9,r11,6216
	ctx.r9.s64 = ctx.r11.s64 + 6216;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307FA8) {
	__imp__sub_82307FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307FBC) {
	__imp__sub_82307FBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82307fec
	if (ctx.cr6.eq) goto loc_82307FEC;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82307ff0
	if (!ctx.cr6.eq) goto loc_82307FF0;
loc_82307FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82307FF0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307FC0) {
	__imp__sub_82307FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r9,6216
	ctx.r11.s64 = ctx.r9.s64 + 6216;
	// rlwinm r8,r4,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82308040
	if (ctx.cr6.eq) goto loc_82308040;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// rlwinm r8,r9,0,4,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82308040:
	// rlwinm r10,r4,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307FF8) {
	__imp__sub_82307FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// rlwinm r7,r4,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823080b4
	if (ctx.cr6.eq) goto loc_823080B4;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r9,r4,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// and r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 & ctx.r9.u64;
	// and r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r8,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r9,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8230810c
	goto loc_8230810C;
loc_823080B4:
	// rlwinm r10,r4,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230810c
	if (ctx.cr6.eq) goto loc_8230810C;
	// rlwinm r9,r4,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823080e8
	if (ctx.cr6.gt) goto loc_823080E8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823080E8:
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82308108
	if (ctx.cr6.gt) goto loc_82308108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308108:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_8230810C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308128
	if (ctx.cr6.eq) goto loc_82308128;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8230812c
	if (ctx.cr6.eq) goto loc_8230812C;
loc_82308128:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230812C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308060) {
	__imp__sub_82308060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308134) {
	__imp__sub_82308134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// rlwinm r7,r4,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8230818c
	if (ctx.cr6.eq) goto loc_8230818C;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r9,r4,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// and r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 & ctx.r9.u64;
	// and r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r8,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r9,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823081e4
	goto loc_823081E4;
loc_8230818C:
	// rlwinm r10,r4,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823081e4
	if (ctx.cr6.eq) goto loc_823081E4;
	// rlwinm r9,r4,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823081c0
	if (ctx.cr6.gt) goto loc_823081C0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823081C0:
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823081e0
	if (ctx.cr6.gt) goto loc_823081E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823081E0:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_823081E4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82308200
	if (!ctx.cr6.eq) goto loc_82308200;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82308204
	if (!ctx.cr6.eq) goto loc_82308204;
loc_82308200:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308204:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308138) {
	__imp__sub_82308138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230820C) {
	__imp__sub_8230820C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r3,43
	ctx.r11.s64 = ctx.r3.s64 * 43;
	// rlwinm r10,r4,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,6216
	ctx.r11.s64 = ctx.r9.s64 + 6216;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,72
	ctx.r6.s64 = ctx.r11.s64 + 72;
	// lfsx f1,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308210) {
	__imp__sub_82308210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308234) {
	__imp__sub_82308234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r9,r11,120
	ctx.r9.s64 = ctx.r11.s64 + 120;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308238) {
	__imp__sub_82308238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r9,r11,124
	ctx.r9.s64 = ctx.r11.s64 + 124;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308250) {
	__imp__sub_82308250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r4,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// mulli r9,r3,172
	ctx.r9.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// lbzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823082b4
	if (ctx.cr6.eq) goto loc_823082B4;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823082b8
	if (ctx.cr6.eq) goto loc_823082B8;
loc_823082B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823082B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308268) {
	__imp__sub_82308268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823082C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r4,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// mulli r9,r3,172
	ctx.r9.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lbzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82308308
	if (ctx.cr6.eq) goto loc_82308308;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8230830c
	if (ctx.cr6.eq) goto loc_8230830C;
loc_82308308:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230830C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823082C0) {
	__imp__sub_823082C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308314) {
	__imp__sub_82308314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r10,r4,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// mulli r9,r3,172
	ctx.r9.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lbzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82308360
	if (ctx.cr6.eq) goto loc_82308360;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82308364
	if (ctx.cr6.eq) goto loc_82308364;
loc_82308360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308364:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308318) {
	__imp__sub_82308318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230836C) {
	__imp__sub_8230836C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230838c
	if (ctx.cr6.eq) goto loc_8230838C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8230838C:
	// lbz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230839c
	if (ctx.cr6.eq) goto loc_8230839C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8230839C:
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823083ac
	if (ctx.cr6.eq) goto loc_823083AC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_823083AC:
	// lbz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308370) {
	__imp__sub_82308370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823083C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823083C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r3,172
	ctx.r11.s64 = ctx.r3.s64 * 172;
	// addi r29,r10,6212
	ctx.r29.s64 = ctx.r10.s64 + 6212;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// lbzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8236ff28
	ctx.lr = 0x823083F4;
	sub_8236FF28(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addi r5,r31,152
	ctx.r5.s64 = ctx.r31.s64 + 152;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// bl 0x8236ff28
	ctx.lr = 0x82308414;
	sub_8236FF28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82308424
	if (ctx.cr6.eq) goto loc_82308424;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308424:
	// lis r28,-31835
	ctx.r28.s64 = -2086338560;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lwz r11,6192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308470
	if (ctx.cr6.eq) goto loc_82308470;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308470
	if (ctx.cr6.eq) goto loc_82308470;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82308470
	if (!ctx.cr6.eq) goto loc_82308470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82307f30
	ctx.lr = 0x82308458;
	sub_82307F30(ctx, base);
	// lwz r11,6192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6192);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82308468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82308470:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823084a4
	if (ctx.cr6.eq) goto loc_823084A4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823084a4
	if (!ctx.cr6.eq) goto loc_823084A4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823084a4
	if (ctx.cr6.eq) goto loc_823084A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823084A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823084A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823083C0) {
	__imp__sub_823083C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823084AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823084AC) {
	__imp__sub_823084AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823084B0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_823084C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823083c0
	ctx.lr = 0x823084CC;
	sub_823083C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x823084c4
	if (ctx.cr6.lt) goto loc_823084C4;
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

PPC_WEAK_FUNC(sub_823084B0) {
	__imp__sub_823084B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823084EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823084EC) {
	__imp__sub_823084EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823084F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823084F8;
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
	// lis r28,-31835
	ctx.r28.s64 = -2086338560;
	// lwz r10,6904(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6904);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82308614
	if (!ctx.cr6.lt) goto loc_82308614;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r11,6216
	ctx.r31.s64 = ctx.r11.s64 + 6216;
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82308590
	if (!ctx.cr6.eq) goto loc_82308590;
	// addi r11,r31,-88
	ctx.r11.s64 = ctx.r31.s64 + -88;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8230853C:
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82308570
	if (ctx.cr6.eq) goto loc_82308570;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82307b90
	ctx.lr = 0x82308558;
	sub_82307B90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82307878
	ctx.lr = 0x82308564;
	sub_82307878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82307960
	ctx.lr = 0x82308570;
	sub_82307960(ctx, base);
loc_82308570:
	// addi r11,r31,-88
	ctx.r11.s64 = ctx.r31.s64 + -88;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230853c
	if (ctx.cr6.lt) goto loc_8230853C;
	// lwz r10,6904(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6904);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
loc_82308590:
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82308714
	if (ctx.cr6.gt) goto loc_82308714;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823085A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823083c0
	ctx.lr = 0x823085B0;
	sub_823083C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x823085a8
	if (ctx.cr6.lt) goto loc_823085A8;
	// addi r30,r31,-88
	ctx.r30.s64 = ctx.r31.s64 + -88;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823085C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ff30
	ctx.lr = 0x823085D0;
	sub_8236FF30(ctx, base);
	// addi r10,r31,-20
	ctx.r10.s64 = ctx.r31.s64 + -20;
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r31,-88
	ctx.r11.s64 = ctx.r31.s64 + -88;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// stbx r8,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r8.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823085c4
	if (ctx.cr6.lt) goto loc_823085C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_82308614:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82308618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823083c0
	ctx.lr = 0x82308620;
	sub_823083C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82308618
	if (ctx.cr6.lt) goto loc_82308618;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,6216
	ctx.r29.s64 = ctx.r11.s64 + 6216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lis r28,-31835
	ctx.r28.s64 = -2086338560;
	// lfs f29,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,6232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6232);
	ctx.f31.f64 = double(temp.f32);
loc_82308658:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ff30
	ctx.lr = 0x82308664;
	sub_8236FF30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823086f8
	if (!ctx.cr6.eq) goto loc_823086F8;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82307b90
	ctx.lr = 0x82308678;
	sub_82307B90(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82307878
	ctx.lr = 0x82308684;
	sub_82307878(ctx, base);
	// lbz r6,102(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r5,103(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,6208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6208);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmsubs f6,f9,f31,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f13.f64));
	// fdivs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f2,f3,f29,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f29.f64 : ctx.f4.f64;
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f13,f5,f31,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f0.f64));
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f29,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f29.f64 : ctx.f11.f64;
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_823086F8:
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// addi r11,r29,696
	ctx.r11.s64 = ctx.r29.s64 + 696;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82308658
	if (ctx.cr6.lt) goto loc_82308658;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 696, ctx.r11.u32);
loc_82308714:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_823084F0) {
	__imp__sub_823084F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308728) {
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
	// bl 0x82307d18
	ctx.lr = 0x82308738;
	sub_82307D18(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,18824
	ctx.r3.s64 = ctx.r11.s64 + 18824;
	// bl 0x82307f98
	ctx.lr = 0x82308744;
	sub_82307F98(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r3,r10,18936
	ctx.r3.s64 = ctx.r10.s64 + 18936;
	// bl 0x82307f88
	ctx.lr = 0x82308750;
	sub_82307F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308728) {
	__imp__sub_82308728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82308768;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823084f0
	ctx.lr = 0x82308774;
	sub_823084F0(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82308778;
	sub_82310110(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,22312
	ctx.r27.s64 = ctx.r11.s64 + 22312;
	// lfs f31,2956(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2956);
	ctx.f31.f64 = double(temp.f32);
loc_82308790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307fa8
	ctx.lr = 0x82308798;
	sub_82307FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308934
	if (ctx.cr6.eq) goto loc_82308934;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82308210
	ctx.lr = 0x823087B0;
	sub_82308210(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82308210
	ctx.lr = 0x823087D0;
	sub_82308210(ctx, base);
	// fmuls f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82308210
	ctx.lr = 0x823087F0;
	sub_82308210(ctx, base);
	// fmuls f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82308210
	ctx.lr = 0x82308810;
	sub_82308210(ctx, base);
	// fmuls f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82307ff8
	ctx.lr = 0x8230882C;
	sub_82307FF8(ctx, base);
	// fmuls f6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82307ff8
	ctx.lr = 0x8230884C;
	sub_82307FF8(ctx, base);
	// fmuls f4,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821296b8
	ctx.lr = 0x82308870;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821296b8
	ctx.lr = 0x82308884;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821296b8
	ctx.lr = 0x82308898;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821296b8
	ctx.lr = 0x823088AC;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821296b8
	ctx.lr = 0x823088C0;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821296b8
	ctx.lr = 0x823088D4;
	sub_821296B8(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
loc_823088DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82308060
	ctx.lr = 0x823088E8;
	sub_82308060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308900
	if (ctx.cr6.eq) goto loc_82308900;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8230891c
	goto loc_8230891C;
loc_82308900:
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82308138
	ctx.lr = 0x82308908;
	sub_82308138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308928
	if (ctx.cr6.eq) goto loc_82308928;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230891C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82129328
	ctx.lr = 0x82308928;
	sub_82129328(ctx, base);
loc_82308928:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x823088dc
	if (!ctx.cr0.eq) goto loc_823088DC;
loc_82308934:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82308790
	if (ctx.cr6.lt) goto loc_82308790;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308760) {
	__imp__sub_82308760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230894C) {
	__imp__sub_8230894C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82308958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x82308964;
	sub_82310110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821296b8
	ctx.lr = 0x8230897C;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821296b8
	ctx.lr = 0x82308990;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821296b8
	ctx.lr = 0x823089A4;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821296b8
	ctx.lr = 0x823089B8;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821296b8
	ctx.lr = 0x823089CC;
	sub_821296B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821296b8
	ctx.lr = 0x823089E0;
	sub_821296B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r11,r11,22312
	ctx.r11.s64 = ctx.r11.s64 + 22312;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_823089F0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwzu r4,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82129328
	ctx.lr = 0x82308A04;
	sub_82129328(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823089f0
	if (!ctx.cr0.eq) goto loc_823089F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308950) {
	__imp__sub_82308950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308A14) {
	__imp__sub_82308A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82308760
	sub_82308760(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308A18) {
	__imp__sub_82308A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308A1C) {
	__imp__sub_82308A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A20) {
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
	// bl 0x82307d18
	ctx.lr = 0x82308A30;
	sub_82307D18(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,18824
	ctx.r3.s64 = ctx.r11.s64 + 18824;
	// bl 0x82307f98
	ctx.lr = 0x82308A3C;
	sub_82307F98(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r3,r10,18936
	ctx.r3.s64 = ctx.r10.s64 + 18936;
	// bl 0x82307f88
	ctx.lr = 0x82308A48;
	sub_82307F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308A20) {
	__imp__sub_82308A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A58) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_82308A6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307c40
	ctx.lr = 0x82308A74;
	sub_82307C40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82308a6c
	if (ctx.cr6.lt) goto loc_82308A6C;
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

PPC_WEAK_FUNC(sub_82308A58) {
	__imp__sub_82308A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308A94) {
	__imp__sub_82308A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308A98) {
	__imp__sub_82308A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308A9C) {
	__imp__sub_82308A9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308AA0) {
	__imp__sub_82308AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308AA4) {
	__imp__sub_82308AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308AA8) {
	__imp__sub_82308AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308AB0) {
	__imp__sub_82308AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308AB4) {
	__imp__sub_82308AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82308ae0
	if (ctx.cr6.eq) goto loc_82308AE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82308ad4
	if (ctx.cr6.eq) goto loc_82308AD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82308AD4:
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// blr 
	return;
loc_82308AE0:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308AB8) {
	__imp__sub_82308AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308AE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82308b08
	if (ctx.cr6.eq) goto loc_82308B08;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
loc_82308B08:
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308AE8) {
	__imp__sub_82308AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82308b2c
	if (!ctx.cr6.eq) goto loc_82308B2C;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82308B2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82308b3c
	if (!ctx.cr6.eq) goto loc_82308B3C;
loc_82308B34:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82308B3C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82308b34
	if (ctx.cr6.lt) goto loc_82308B34;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308B10) {
	__imp__sub_82308B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308B54) {
	__imp__sub_82308B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82308B60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x822805e8
	ctx.lr = 0x82308B90;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82308B94;
	sub_822807B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x82308BA4;
	sub_82280760(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822807c8
	ctx.lr = 0x82308BAC;
	sub_822807C8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236fe50
	ctx.lr = 0x82308BC4;
	sub_8236FE50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82308c14
	if (ctx.cr6.eq) goto loc_82308C14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82308BD8;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308bf8
	if (ctx.cr6.eq) goto loc_82308BF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,3460
	ctx.r4.s64 = ctx.r11.s64 + 3460;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82308BF8;
	sub_82280B08(ctx, base);
loc_82308BF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x82308C04;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82308C08;
	sub_822805F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82308C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308B58) {
	__imp__sub_82308B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,65533
	ctx.r8.u64 = ctx.r11.u64 | 65533;
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
loc_82308C50:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82308c6c
	if (ctx.cr6.lt) goto loc_82308C6C;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82308c88
	if (!ctx.cr6.gt) goto loc_82308C88;
loc_82308C6C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r5,r4
	PPC_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r11.u16);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_82308C88:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82308c50
	if (ctx.cr6.lt) goto loc_82308C50;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82308C20) {
	__imp__sub_82308C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82308CA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25608);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82308d50
	if (ctx.cr6.eq) goto loc_82308D50;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r4,r11,-18008
	ctx.r4.s64 = ctx.r11.s64 + -18008;
	// bl 0x82308c20
	ctx.lr = 0x82308CD8;
	sub_82308C20(ctx, base);
	// lis r10,-31811
	ctx.r10.s64 = -2084765696;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r29,r31,25604
	ctx.r29.s64 = ctx.r31.s64 + 25604;
	// addi r7,r11,-18008
	ctx.r7.s64 = ctx.r11.s64 + -18008;
	// addi r30,r31,25600
	ctx.r30.s64 = ctx.r31.s64 + 25600;
	// lis r3,16726
	ctx.r3.s64 = 1096155136;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r3,r3,2071
	ctx.r3.u64 = ctx.r3.u64 | 2071;
	// lwz r11,13792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13792);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8236b358
	ctx.lr = 0x82308D10;
	sub_8236B358(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82308d5c
	if (ctx.cr6.eq) goto loc_82308D5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82308D24;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308d50
	if (ctx.cr6.eq) goto loc_82308D50;
	// lwz r11,25608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r4,r10,4488
	ctx.r4.s64 = ctx.r10.s64 + 4488;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x82308D50;
	sub_82280B08(ctx, base);
loc_82308D50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82308D5C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,4456
	ctx.r4.s64 = ctx.r11.s64 + 4456;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82308D70;
	sub_82280A68(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,25600
	ctx.r6.s64 = 25600;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r10,4408
	ctx.r4.s64 = ctx.r10.s64 + 4408;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82308D88;
	sub_82280A68(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82308b58
	ctx.lr = 0x82308DA4;
	sub_82308B58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308CA0) {
	__imp__sub_82308CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308DAC) {
	__imp__sub_82308DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82308DB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25608);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82308e70
	if (ctx.cr6.eq) goto loc_82308E70;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r27,r11,13800
	ctx.r27.s64 = ctx.r11.s64 + 13800;
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r4,r11,-18008
	ctx.r4.s64 = ctx.r11.s64 + -18008;
	// bl 0x82308c20
	ctx.lr = 0x82308DE4;
	sub_82308C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141340
	ctx.lr = 0x82308DEC;
	sub_82141340(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8230bd88
	ctx.lr = 0x82308DF4;
	sub_8230BD88(ctx, base);
	// lis r9,-31811
	ctx.r9.s64 = -2084765696;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 65536;
	// addi r27,r31,25604
	ctx.r27.s64 = ctx.r31.s64 + 25604;
	// addi r30,r31,25600
	ctx.r30.s64 = ctx.r31.s64 + 25600;
	// lwz r11,13792(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13792);
	// lis r3,16726
	ctx.r3.s64 = 1096155136;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r10,-18008
	ctx.r7.s64 = ctx.r10.s64 + -18008;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r3,r3,2071
	ctx.r3.u64 = ctx.r3.u64 | 2071;
	// bl 0x8236b3b8
	ctx.lr = 0x82308E30;
	sub_8236B3B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82308e7c
	if (ctx.cr6.eq) goto loc_82308E7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82308E44;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308e70
	if (ctx.cr6.eq) goto loc_82308E70;
	// lwz r11,25608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r4,r10,4648
	ctx.r4.s64 = ctx.r10.s64 + 4648;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x82308E70;
	sub_82280B08(ctx, base);
loc_82308E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82308E7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,25600
	ctx.r7.s64 = 25600;
	// addi r4,r11,4580
	ctx.r4.s64 = ctx.r11.s64 + 4580;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82308E98;
	sub_82280A68(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82308b58
	ctx.lr = 0x82308EB4;
	sub_82308B58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308DB0) {
	__imp__sub_82308DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82308EBC) {
	__imp__sub_82308EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82308EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82308EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,25608(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25608);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82308f6c
	if (ctx.cr6.eq) goto loc_82308F6C;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r4,r11,-18008
	ctx.r4.s64 = ctx.r11.s64 + -18008;
	// bl 0x82308c20
	ctx.lr = 0x82308EF4;
	sub_82308C20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,25600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25600, ctx.r11.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r4,r10,47520
	ctx.r4.u64 = ctx.r10.u64 | 47520;
	// addi r30,r29,25600
	ctx.r30.s64 = ctx.r29.s64 + 25600;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lis r3,16726
	ctx.r3.s64 = 1096155136;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,-18008
	ctx.r7.s64 = ctx.r11.s64 + -18008;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r5,-18824
	ctx.r5.s64 = ctx.r5.s64 + -18824;
	// ori r3,r3,2071
	ctx.r3.u64 = ctx.r3.u64 | 2071;
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x8236b280
	ctx.lr = 0x82308F38;
	sub_8236B280(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x82308f78
	if (ctx.cr6.eq) goto loc_82308F78;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82308F4C;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308f6c
	if (ctx.cr6.eq) goto loc_82308F6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,4952
	ctx.r4.s64 = ctx.r11.s64 + 4952;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82308F6C;
	sub_82280B08(ctx, base);
loc_82308F6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82308F78:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,25600
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25600, ctx.xer);
	// ble cr6,0x82308fbc
	if (!ctx.cr6.gt) goto loc_82308FBC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82308F8C;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308fb0
	if (ctx.cr6.eq) goto loc_82308FB0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,25600
	ctx.r5.s64 = 25600;
	// addi r4,r11,4864
	ctx.r4.s64 = ctx.r11.s64 + 4864;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82308FB0;
	sub_82280B08(ctx, base);
loc_82308FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82308FBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,25600
	ctx.r6.s64 = 25600;
	// addi r4,r11,4816
	ctx.r4.s64 = ctx.r11.s64 + 4816;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82308FD0;
	sub_82280A68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822805e8
	ctx.lr = 0x82308FE0;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82308FE4;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82280760
	ctx.lr = 0x82308FF4;
	sub_82280760(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822807c8
	ctx.lr = 0x82308FFC;
	sub_822807C8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r8,r10,47520
	ctx.r8.u64 = ctx.r10.u64 | 47520;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// lis r3,16726
	ctx.r3.s64 = 1096155136;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r7,-18008
	ctx.r7.s64 = ctx.r7.s64 + -18008;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-18824
	ctx.r5.s64 = ctx.r11.s64 + -18824;
	// ori r3,r3,2071
	ctx.r3.u64 = ctx.r3.u64 | 2071;
	// bl 0x8236b280
	ctx.lr = 0x82309034;
	sub_8236B280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82309084
	if (ctx.cr6.eq) goto loc_82309084;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82309048;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309068
	if (ctx.cr6.eq) goto loc_82309068;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,4744
	ctx.r4.s64 = ctx.r11.s64 + 4744;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309068;
	sub_82280B08(ctx, base);
loc_82309068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82280760
	ctx.lr = 0x82309074;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309078;
	sub_822805F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82309084:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82308EC0) {
	__imp__sub_82308EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82309098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82141340
	ctx.lr = 0x823090AC;
	sub_82141340(ctx, base);
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r7,r10,-18012
	ctx.r7.s64 = ctx.r10.s64 + -18012;
	// addi r6,r11,-18832
	ctx.r6.s64 = ctx.r11.s64 + -18832;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82372c08
	ctx.lr = 0x823090D4;
	sub_82372C08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309118
	if (ctx.cr6.eq) goto loc_82309118;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bba0
	ctx.lr = 0x823090E8;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230910c
	if (ctx.cr6.eq) goto loc_8230910C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,5088
	ctx.r4.s64 = ctx.r11.s64 + 5088;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x8230910C;
	sub_82280B08(ctx, base);
loc_8230910C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82309118:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r9,r11,46704
	ctx.r9.u64 = ctx.r11.u64 | 46704;
	// addi r4,r10,5036
	ctx.r4.s64 = ctx.r10.s64 + 5036;
	// li r6,19600
	ctx.r6.s64 = 19600;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82280a68
	ctx.lr = 0x82309138;
	sub_82280A68(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r5,r8,46704
	ctx.r5.u64 = ctx.r8.u64 | 46704;
	// ori r11,r7,47524
	ctx.r11.u64 = ctx.r7.u64 | 47524;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r6,r31,27104
	ctx.r6.s64 = ctx.r31.s64 + 27104;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r7,r31,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82308b58
	ctx.lr = 0x82309164;
	sub_82308B58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309090) {
	__imp__sub_82309090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230916C) {
	__imp__sub_8230916C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309170) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r10,-29936
	ctx.r6.s64 = ctx.r10.s64 + -29936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823def18
	ctx.lr = 0x823091A0;
	sub_823DEF18(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823091d8
	if (ctx.cr6.eq) goto loc_823091D8;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_823091BC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823091d8
	if (ctx.cr6.eq) goto loc_823091D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823091bc
	if (ctx.cr6.lt) goto loc_823091BC;
loc_823091D8:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82309170) {
	__imp__sub_82309170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823091F0) {
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
	// bl 0x8230bd88
	ctx.lr = 0x82309208;
	sub_8230BD88(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230923c
	if (ctx.cr6.eq) goto loc_8230923C;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82309220:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r3,r8
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x8230923c
	if (ctx.cr6.eq) goto loc_8230923C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82309220
	if (ctx.cr6.lt) goto loc_82309220;
loc_8230923C:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823091F0) {
	__imp__sub_823091F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82309268;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 * 44;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309288;
	sub_822807B0(ctx, base);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r30,41
	ctx.r10.s64 = ctx.r30.s64 + 41;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stb r27,25620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25620, ctx.r27.u8);
	// stb r27,25621(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25621, ctx.r27.u8);
	// lbzx r25,r29,r10
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// lwzx r24,r29,r9
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// bl 0x8236bab0
	ctx.lr = 0x823092B4;
	sub_8236BAB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,25604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823092cc
	if (ctx.cr6.eq) goto loc_823092CC;
	// bl 0x8236b770
	ctx.lr = 0x823092C8;
	sub_8236B770(ctx, base);
	// stw r27,25604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25604, ctx.r27.u32);
loc_823092CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82280760
	ctx.lr = 0x823092D8;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x823092DC;
	sub_822805F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8230931c
	if (!ctx.cr6.lt) goto loc_8230931C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8230bba0
	ctx.lr = 0x823092EC;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309310
	if (ctx.cr6.eq) goto loc_82309310;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r11,5216
	ctx.r4.s64 = ctx.r11.s64 + 5216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309310;
	sub_82280B08(ctx, base);
loc_82309310:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8230931C:
	// lwz r11,25628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25628);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8230935c
	if (ctx.cr6.lt) goto loc_8230935C;
	// bne cr6,0x823093e8
	if (!ctx.cr6.eq) goto loc_823093E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309170
	ctx.lr = 0x82309334;
	sub_82309170(ctx, base);
	// lbz r11,25622(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25622);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823093e8
	if (ctx.cr6.eq) goto loc_823093E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823091f0
	ctx.lr = 0x8230934C;
	sub_823091F0(ctx, base);
	// stw r3,25616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25616, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8230935C:
	// lbz r11,25622(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25622);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823093e8
	if (ctx.cr6.eq) goto loc_823093E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823093c0
	if (!ctx.cr6.eq) goto loc_823093C0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x823093ac
	if (!ctx.cr6.eq) goto loc_823093AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r5,r11,5164
	ctx.r5.s64 = ctx.r11.s64 + 5164;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82309398;
	sub_82280A68(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82308ca0
	ctx.lr = 0x823093A8;
	sub_82308CA0(ctx, base);
	// stb r3,25621(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25621, ctx.r3.u8);
loc_823093AC:
	// stw r27,25616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25616, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,25612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25612, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823093C0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,25612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25612, ctx.r10.u32);
	// bl 0x823091f0
	ctx.lr = 0x823093DC;
	sub_823091F0(ctx, base);
	// lwz r9,25612(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,25616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25616, ctx.r8.u32);
loc_823093E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309260) {
	__imp__sub_82309260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823093F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823093F4) {
	__imp__sub_823093F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823093F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82309400;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309420;
	sub_822807B0(ctx, base);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8236bad8
	ctx.lr = 0x82309438;
	sub_8236BAD8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,41
	ctx.r8.s64 = ctx.r31.s64 + 41;
	// ori r9,r10,47524
	ctx.r9.u64 = ctx.r10.u64 | 47524;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbzx r27,r30,r8
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x8236b770
	ctx.lr = 0x82309454;
	sub_8236B770(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r6,r7,47524
	ctx.r6.u64 = ctx.r7.u64 | 47524;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwx r25,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r25.u32);
	// bl 0x82280760
	ctx.lr = 0x82309474;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309478;
	sub_822805F0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823094c8
	if (ctx.cr6.eq) goto loc_823094C8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823094c8
	if (ctx.cr6.eq) goto loc_823094C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82309494;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823094b8
	if (ctx.cr6.eq) goto loc_823094B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,5336
	ctx.r4.s64 = ctx.r11.s64 + 5336;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x823094B8;
	sub_82280B08(ctx, base);
loc_823094B8:
	// stb r25,25621(r26)
	PPC_STORE_U8(ctx.r26.u32 + 25621, ctx.r25.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823094C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bd88
	ctx.lr = 0x823094D0;
	sub_8230BD88(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r8,r11,46712
	ctx.r8.u64 = ctx.r11.u64 | 46712;
	// ori r7,r10,47520
	ctx.r7.u64 = ctx.r10.u64 | 47520;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stdx r3,r31,r8
	PPC_STORE_U64(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u64);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// beq cr6,0x82309584
	if (ctx.cr6.eq) goto loc_82309584;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,27128
	ctx.r30.s64 = ctx.r31.s64 + 27128;
	// addi r29,r11,-27340
	ctx.r29.s64 = ctx.r11.s64 + -27340;
loc_82309508:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82309570
	if (!ctx.cr6.eq) goto loc_82309570;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309570
	if (!ctx.cr6.eq) goto loc_82309570;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82309534;
	sub_82280A68(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ld r3,-24(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + -24);
	// ori r9,r10,47520
	ctx.r9.u64 = ctx.r10.u64 | 47520;
	// addi r8,r11,-18824
	ctx.r8.s64 = ctx.r11.s64 + -18824;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,47520
	ctx.r5.u64 = ctx.r7.u64 | 47520;
	// ori r4,r6,47520
	ctx.r4.u64 = ctx.r6.u64 | 47520;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r3,r11,r8
	PPC_STORE_U64(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u64);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
loc_82309570:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,196
	ctx.r30.s64 = ctx.r30.s64 + 196;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82309508
	if (ctx.cr6.lt) goto loc_82309508;
loc_82309584:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82308ec0
	ctx.lr = 0x82309590;
	sub_82308EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823094b8
	if (ctx.cr6.eq) goto loc_823094B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823093F8) {
	__imp__sub_823093F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823095A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,25628(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25628);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823095c8
	if (ctx.cr6.eq) goto loc_823095C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25612(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25612, ctx.r11.u32);
	// blr 
	return;
loc_823095C8:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230963c
	if (ctx.cr6.eq) goto loc_8230963C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230963c
	if (ctx.cr6.eq) goto loc_8230963C;
	// lwz r10,25612(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25612);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82309634
	if (ctx.cr6.lt) goto loc_82309634;
loc_823095F4:
	// lis r9,-31811
	ctx.r9.s64 = -2084765696;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r9,13792(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13792);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r10,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r8,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,25612(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25612, ctx.r7.u32);
	// blr 
	return;
loc_82309634:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823095f4
	if (ctx.cr6.lt) goto loc_823095F4;
loc_8230963C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823095A8) {
	__imp__sub_823095A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309644) {
	__imp__sub_82309644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82309650;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82141340
	ctx.lr = 0x82309660;
	sub_82141340(ctx, base);
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// lbz r11,27033(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823097e0
	if (!ctx.cr6.eq) goto loc_823097E0;
	// bl 0x8230bba0
	ctx.lr = 0x8230967C;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823097e0
	if (ctx.cr6.eq) goto loc_823097E0;
	// lwz r11,27020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823097e0
	if (ctx.cr6.eq) goto loc_823097E0;
	// bl 0x82310110
	ctx.lr = 0x82309698;
	sub_82310110(ctx, base);
	// lis r10,-31811
	ctx.r10.s64 = -2084765696;
	// lwz r11,27040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27040);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r28,13796(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13796);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823096c4
	if (!ctx.cr6.eq) goto loc_823096C4;
	// lbz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823096c8
	if (ctx.cr6.eq) goto loc_823096C8;
loc_823096C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823096C8:
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-2720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2720);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309700
	if (ctx.cr6.eq) goto loc_82309700;
	// lwz r10,27036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27036);
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// subf r10,r10,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r10.s64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82309704
	goto loc_82309704;
loc_82309700:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82309704:
	// clrlwi r30,r26,24
	ctx.r30.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230971c
	if (ctx.cr6.eq) goto loc_8230971C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8230972c
	goto loc_8230972C;
loc_8230971C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r31,1412
	ctx.r4.s64 = ctx.r31.s64 + 1412;
	// bl 0x823095a8
	ctx.lr = 0x82309728;
	sub_823095A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_8230972C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8230974c
	if (!ctx.cr6.eq) goto loc_8230974C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230974c
	if (!ctx.cr6.eq) goto loc_8230974C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823097e0
	if (ctx.cr6.eq) goto loc_823097E0;
loc_8230974C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,27040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27040, ctx.r11.u32);
	// blt cr6,0x82309774
	if (ctx.cr6.lt) goto loc_82309774;
	// bne cr6,0x823097a8
	if (!ctx.cr6.eq) goto loc_823097A8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82309090
	ctx.lr = 0x8230976C;
	sub_82309090(ctx, base);
	// stb r3,27033(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27033, ctx.r3.u8);
	// b 0x823097ac
	goto loc_823097AC;
loc_82309774:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// beq cr6,0x82309790
	if (ctx.cr6.eq) goto loc_82309790;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82308db0
	ctx.lr = 0x82309788;
	sub_82308DB0(ctx, base);
	// stb r3,27033(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27033, ctx.r3.u8);
	// b 0x823097ac
	goto loc_823097AC;
loc_82309790:
	// lwz r11,27024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27024);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82308ca0
	ctx.lr = 0x823097A0;
	sub_82308CA0(ctx, base);
	// stb r3,27033(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27033, ctx.r3.u8);
	// b 0x823097ac
	goto loc_823097AC;
loc_823097A8:
	// lbz r3,27033(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27033);
loc_823097AC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,5444
	ctx.r4.s64 = ctx.r11.s64 + 5444;
	// beq cr6,0x823097dc
	if (ctx.cr6.eq) goto loc_823097DC;
	// stw r24,27036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27036, ctx.r24.u32);
	// stb r26,27034(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27034, ctx.r26.u8);
	// bl 0x822c3908
	ctx.lr = 0x823097D0;
	sub_822C3908(ctx, base);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823097DC:
	// bl 0x822c3928
	ctx.lr = 0x823097E0;
	sub_822C3928(ctx, base);
loc_823097E0:
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309648) {
	__imp__sub_82309648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823097EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823097EC) {
	__imp__sub_823097EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823097F0) {
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
	// li r5,1352
	ctx.r5.s64 = 1352;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-17872
	ctx.r3.s64 = ctx.r11.s64 + -17872;
	// bl 0x823de090
	ctx.lr = 0x8230981C;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823097F0) {
	__imp__sub_823097F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309838) {
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
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// lwz r4,27024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27024);
	// bl 0x82309648
	ctx.lr = 0x82309858;
	sub_82309648(ctx, base);
	// lbz r11,27033(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823098b0
	if (!ctx.cr6.eq) goto loc_823098B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823098b0
	if (ctx.cr6.eq) goto loc_823098B0;
	// lwz r11,27040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x82309898
	if (!ctx.cr6.eq) goto loc_82309898;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
loc_82309898:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
loc_823098B0:
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

PPC_WEAK_FUNC(sub_82309838) {
	__imp__sub_82309838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823098C8) {
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
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// lbz r11,27033(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309950
	if (!ctx.cr6.eq) goto loc_82309950;
	// lwz r4,27028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27028);
	// bl 0x82309648
	ctx.lr = 0x823098FC;
	sub_82309648(ctx, base);
	// lwz r10,27028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27028);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,27024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27024);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// ldx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82141340
	ctx.lr = 0x8230992C;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236b620
	ctx.lr = 0x82309934;
	sub_8236B620(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309950
	if (ctx.cr6.eq) goto loc_82309950;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5460
	ctx.r4.s64 = ctx.r11.s64 + 5460;
	// bl 0x82280b08
	ctx.lr = 0x82309950;
	sub_82280B08(ctx, base);
loc_82309950:
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

PPC_WEAK_FUNC(sub_823098C8) {
	__imp__sub_823098C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309968) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,65534
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65534, ctx.xer);
	// bne cr6,0x8230997c
	if (!ctx.cr6.eq) goto loc_8230997C;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// blr 
	return;
loc_8230997C:
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823099b0
	if (ctx.cr6.eq) goto loc_823099B0;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82309994:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x823099b8
	if (ctx.cr6.eq) goto loc_823099B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82309994
	if (ctx.cr6.lt) goto loc_82309994;
loc_823099B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823099B8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823099e8
	if (ctx.cr6.eq) goto loc_823099E8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823099b0
	if (!ctx.cr6.eq) goto loc_823099B0;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// blr 
	return;
loc_823099E8:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82309968) {
	__imp__sub_82309968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823099F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823099F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309A14;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x82309A1C;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82280760
	ctx.lr = 0x82309A34;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309A38;
	sub_822805F0(ctx, base);
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// bl 0x8236b770
	ctx.lr = 0x82309A40;
	sub_8236B770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82309a58
	if (!ctx.cr6.eq) goto loc_82309A58;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5584
	ctx.r4.s64 = ctx.r11.s64 + 5584;
	// bl 0x82280b08
	ctx.lr = 0x82309A58;
	sub_82280B08(ctx, base);
loc_82309A58:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// beq cr6,0x82309a8c
	if (ctx.cr6.eq) goto loc_82309A8C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,5532
	ctx.r4.s64 = ctx.r11.s64 + 5532;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309A80;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82309A8C:
	// bl 0x82310110
	ctx.lr = 0x82309A90;
	sub_82310110(ctx, base);
	// lwz r11,1336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r4,r10,5504
	ctx.r4.s64 = ctx.r10.s64 + 5504;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280a68
	ctx.lr = 0x82309AA8;
	sub_82280A68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823099F0) {
	__imp__sub_823099F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309AB4) {
	__imp__sub_82309AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82309AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822805e8
	ctx.lr = 0x82309AE0;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82309AE4;
	sub_822807B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x82309AF4;
	sub_82280760(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822807c8
	ctx.lr = 0x82309AFC;
	sub_822807C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1268);
	// bl 0x823733c0
	ctx.lr = 0x82309B08;
	sub_823733C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309b3c
	if (ctx.cr6.eq) goto loc_82309B3C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82309b3c
	if (ctx.cr6.eq) goto loc_82309B3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5640
	ctx.r4.s64 = ctx.r11.s64 + 5640;
	// bl 0x82280b08
	ctx.lr = 0x82309B2C;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x82309B38;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309B3C;
	sub_822805F0(ctx, base);
loc_82309B3C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5620
	ctx.r4.s64 = ctx.r11.s64 + 5620;
	// bl 0x82280a68
	ctx.lr = 0x82309B4C;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309AB8) {
	__imp__sub_82309AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309B54) {
	__imp__sub_82309B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309B7C;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x82309B84;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,41
	ctx.r9.s64 = ctx.r31.s64 + 41;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82280760
	ctx.lr = 0x82309BA4;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309BA8;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309ab8
	ctx.lr = 0x82309BB4;
	sub_82309AB8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82309bdc
	if (ctx.cr6.eq) goto loc_82309BDC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,5700
	ctx.r4.s64 = ctx.r11.s64 + 5700;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309BD0;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82309BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309B58) {
	__imp__sub_82309B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x82309C14;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82309C18;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x82309C28;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x82309C30;
	sub_822807C8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82373520
	ctx.lr = 0x82309C44;
	sub_82373520(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309c84
	if (ctx.cr6.eq) goto loc_82309C84;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82309c84
	if (ctx.cr6.eq) goto loc_82309C84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5772
	ctx.r4.s64 = ctx.r11.s64 + 5772;
	// bl 0x82280b08
	ctx.lr = 0x82309C68;
	sub_82280B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x82309C74;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309C78;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82309ab8
	ctx.lr = 0x82309C84;
	sub_82309AB8(ctx, base);
loc_82309C84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5752
	ctx.r4.s64 = ctx.r11.s64 + 5752;
	// bl 0x82280a68
	ctx.lr = 0x82309C94;
	sub_82280A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309BE8) {
	__imp__sub_82309BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309C9C) {
	__imp__sub_82309C9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309CA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309CC4;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x82309CCC;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,41
	ctx.r9.s64 = ctx.r31.s64 + 41;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82280760
	ctx.lr = 0x82309CEC;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309CF0;
	sub_822805F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82309d24
	if (ctx.cr6.eq) goto loc_82309D24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,5832
	ctx.r4.s64 = ctx.r11.s64 + 5832;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309D0C;
	sub_82280B08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309ab8
	ctx.lr = 0x82309D18;
	sub_82309AB8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82309D24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309be8
	ctx.lr = 0x82309D30;
	sub_82309BE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309CA0) {
	__imp__sub_82309CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309D3C) {
	__imp__sub_82309D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x82309D6C;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82309D70;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x82309D80;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x82309D88;
	sub_822807C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// bl 0x82373668
	ctx.lr = 0x82309D94;
	sub_82373668(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309dd4
	if (ctx.cr6.eq) goto loc_82309DD4;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82309dd4
	if (ctx.cr6.eq) goto loc_82309DD4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5832
	ctx.r4.s64 = ctx.r11.s64 + 5832;
	// bl 0x82280b08
	ctx.lr = 0x82309DB8;
	sub_82280B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x82309DC4;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309DC8;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82309ab8
	ctx.lr = 0x82309DD4;
	sub_82309AB8(ctx, base);
loc_82309DD4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5884
	ctx.r4.s64 = ctx.r11.s64 + 5884;
	// bl 0x82280a68
	ctx.lr = 0x82309DE4;
	sub_82280A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309D40) {
	__imp__sub_82309D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309DEC) {
	__imp__sub_82309DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309E14;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x82309E1C;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,41
	ctx.r9.s64 = ctx.r31.s64 + 41;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82280760
	ctx.lr = 0x82309E3C;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309E40;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309d40
	ctx.lr = 0x82309E4C;
	sub_82309D40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82309e74
	if (ctx.cr6.eq) goto loc_82309E74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,5900
	ctx.r4.s64 = ctx.r11.s64 + 5900;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309E68;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82309E74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309DF0) {
	__imp__sub_82309DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x82309EAC;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82309EB0;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x82309EC0;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x82309EC8;
	sub_822807C8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,1208
	ctx.r6.s64 = ctx.r31.s64 + 1208;
	// lwz r5,27096(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27096);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// bl 0x82373718
	ctx.lr = 0x82309EE0;
	sub_82373718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309f20
	if (ctx.cr6.eq) goto loc_82309F20;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82309f20
	if (ctx.cr6.eq) goto loc_82309F20;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5964
	ctx.r4.s64 = ctx.r11.s64 + 5964;
	// bl 0x82280b08
	ctx.lr = 0x82309F04;
	sub_82280B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x82309F10;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309F14;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82309d40
	ctx.lr = 0x82309F20;
	sub_82309D40(ctx, base);
loc_82309F20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,5952
	ctx.r4.s64 = ctx.r11.s64 + 5952;
	// bl 0x82280a68
	ctx.lr = 0x82309F30;
	sub_82280A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309E80) {
	__imp__sub_82309E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82309F5C;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x82309F64;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,41
	ctx.r9.s64 = ctx.r31.s64 + 41;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82280760
	ctx.lr = 0x82309F84;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82309F88;
	sub_822805F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82309fbc
	if (ctx.cr6.eq) goto loc_82309FBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,6024
	ctx.r4.s64 = ctx.r11.s64 + 6024;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x82309FA4;
	sub_82280B08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309be8
	ctx.lr = 0x82309FB0;
	sub_82309BE8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82309FBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309e80
	ctx.lr = 0x82309FC8;
	sub_82309E80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309F38) {
	__imp__sub_82309F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82309FD4) {
	__imp__sub_82309FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82309FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82309FE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x8230A004;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230A008;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230A018;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8230A020;
	sub_822807C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// bl 0x823735c8
	ctx.lr = 0x8230A030;
	sub_823735C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a070
	if (ctx.cr6.eq) goto loc_8230A070;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8230a070
	if (ctx.cr6.eq) goto loc_8230A070;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6096
	ctx.r4.s64 = ctx.r11.s64 + 6096;
	// bl 0x82280b08
	ctx.lr = 0x8230A054;
	sub_82280B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230A060;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230A064;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82309be8
	ctx.lr = 0x8230A070;
	sub_82309BE8(ctx, base);
loc_8230A070:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6076
	ctx.r4.s64 = ctx.r11.s64 + 6076;
	// bl 0x82280a68
	ctx.lr = 0x8230A080;
	sub_82280A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82309FD8) {
	__imp__sub_82309FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230A090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8230A0AC;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8230A0B4;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,41
	ctx.r9.s64 = ctx.r31.s64 + 41;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82280760
	ctx.lr = 0x8230A0D4;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230A0D8;
	sub_822805F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8230a10c
	if (ctx.cr6.eq) goto loc_8230A10C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,6156
	ctx.r4.s64 = ctx.r11.s64 + 6156;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x8230A0F4;
	sub_82280B08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309ab8
	ctx.lr = 0x8230A100;
	sub_82309AB8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230A10C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309fd8
	ctx.lr = 0x8230A118;
	sub_82309FD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A088) {
	__imp__sub_8230A088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230A124) {
	__imp__sub_8230A124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230A130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x8230A154;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230A158;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230A168;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8230A170;
	sub_822807C8(ctx, base);
	// addi r6,r31,1332
	ctx.r6.s64 = ctx.r31.s64 + 1332;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82373470
	ctx.lr = 0x8230A188;
	sub_82373470(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a1c8
	if (ctx.cr6.eq) goto loc_8230A1C8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8230a1c8
	if (ctx.cr6.eq) goto loc_8230A1C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// bl 0x82280b08
	ctx.lr = 0x8230A1AC;
	sub_82280B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230A1B8;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230A1BC;
	sub_822805F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82309ab8
	ctx.lr = 0x8230A1C8;
	sub_82309AB8(ctx, base);
loc_8230A1C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6208
	ctx.r4.s64 = ctx.r11.s64 + 6208;
	// bl 0x82280a68
	ctx.lr = 0x8230A1D8;
	sub_82280A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A128) {
	__imp__sub_8230A128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230A1E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8230A204;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8230A20C;
	sub_8236BAB0(ctx, base);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,41
	ctx.r9.s64 = ctx.r31.s64 + 41;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82280760
	ctx.lr = 0x8230A22C;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230A230;
	sub_822805F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8230a270
	if (ctx.cr6.eq) goto loc_8230A270;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,6284
	ctx.r4.s64 = ctx.r11.s64 + 6284;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x8230A24C;
	sub_82280B08(ctx, base);
	// lwz r10,1268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230a264
	if (ctx.cr6.eq) goto loc_8230A264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82309ab8
	ctx.lr = 0x8230A264;
	sub_82309AB8(ctx, base);
loc_8230A264:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230A270:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230a128
	ctx.lr = 0x8230A27C;
	sub_8230A128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A1E0) {
	__imp__sub_8230A1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230A290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x8230A2B4;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230A2B8;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230A2C8;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8230A2D0;
	sub_822807C8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x8236b1d0
	ctx.lr = 0x8230A2E4;
	sub_8236B1D0(ctx, base);
	// addi r10,r31,1268
	ctx.r10.s64 = ctx.r31.s64 + 1268;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r31,1272
	ctx.r8.s64 = ctx.r31.s64 + 1272;
	// addi r7,r31,1344
	ctx.r7.s64 = ctx.r31.s64 + 1344;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1799
	ctx.r3.s64 = 1799;
	// bl 0x82373210
	ctx.lr = 0x8230A308;
	sub_82373210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a33c
	if (ctx.cr6.eq) goto loc_8230A33C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8230a33c
	if (ctx.cr6.eq) goto loc_8230A33C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6360
	ctx.r4.s64 = ctx.r11.s64 + 6360;
	// bl 0x82280b08
	ctx.lr = 0x8230A32C;
	sub_82280B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230A338;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230A33C;
	sub_822805F0(ctx, base);
loc_8230A33C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// bl 0x82280a68
	ctx.lr = 0x8230A34C;
	sub_82280A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A288) {
	__imp__sub_8230A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230A354) {
	__imp__sub_8230A354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230A360;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,13800
	ctx.r27.s64 = ctx.r11.s64 + 13800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// addi r28,r11,5444
	ctx.r28.s64 = ctx.r11.s64 + 5444;
loc_8230A37C:
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a474
	if (ctx.cr6.eq) goto loc_8230A474;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822807b0
	ctx.lr = 0x8230A390;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8230a474
	if (ctx.cr6.eq) goto loc_8230A474;
	// lbz r3,37(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// bl 0x82141280
	ctx.lr = 0x8230A3A4;
	sub_82141280(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8230a474
	if (ctx.cr6.gt) goto loc_8230A474;
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23604
	ctx.r12.s64 = ctx.r12.s64 + -23604;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8230A44C;
	case 1:
		goto loc_8230A44C;
	case 2:
		goto loc_8230A44C;
	case 3:
		goto loc_8230A458;
	case 4:
		goto loc_8230A3F8;
	case 5:
		goto loc_8230A404;
	case 6:
		goto loc_8230A410;
	case 7:
		goto loc_8230A41C;
	case 8:
		goto loc_8230A428;
	case 9:
		goto loc_8230A434;
	case 10:
		goto loc_8230A440;
	default:
		return;
	}
	// lwz r17,-23476(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23476);
	// lwz r17,-23476(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23476);
	// lwz r17,-23476(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23476);
	// lwz r17,-23464(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23464);
	// lwz r17,-23560(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23560);
	// lwz r17,-23548(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23548);
	// lwz r17,-23536(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23536);
	// lwz r17,-23524(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23524);
	// lwz r17,-23512(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23512);
	// lwz r17,-23500(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23500);
	// lwz r17,-23488(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23488);
loc_8230A3F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230a1e0
	ctx.lr = 0x8230A400;
	sub_8230A1E0(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230a088
	ctx.lr = 0x8230A40C;
	sub_8230A088(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309f38
	ctx.lr = 0x8230A418;
	sub_82309F38(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A41C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309df0
	ctx.lr = 0x8230A424;
	sub_82309DF0(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309ca0
	ctx.lr = 0x8230A430;
	sub_82309CA0(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309b58
	ctx.lr = 0x8230A43C;
	sub_82309B58(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823099f0
	ctx.lr = 0x8230A448;
	sub_823099F0(ctx, base);
	// b 0x8230a474
	goto loc_8230A474;
loc_8230A44C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309260
	ctx.lr = 0x8230A454;
	sub_82309260(ctx, base);
	// b 0x8230a468
	goto loc_8230A468;
loc_8230A458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823093f8
	ctx.lr = 0x8230A460;
	sub_823093F8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8230a474
	if (!ctx.cr6.eq) goto loc_8230A474;
loc_8230A468:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c3928
	ctx.lr = 0x8230A474;
	sub_822C3928(ctx, base);
loc_8230A474:
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// addi r11,r27,1412
	ctx.r11.s64 = ctx.r27.s64 + 1412;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230a37c
	if (ctx.cr6.lt) goto loc_8230A37C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A358) {
	__imp__sub_8230A358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A490) {
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
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280600
	ctx.lr = 0x8230A4B0;
	sub_82280600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a4d4
	if (ctx.cr6.eq) goto loc_8230A4D4;
loc_8230A4BC:
	// bl 0x8230a358
	ctx.lr = 0x8230A4C0;
	sub_8230A358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280600
	ctx.lr = 0x8230A4C8;
	sub_82280600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230a4bc
	if (!ctx.cr6.eq) goto loc_8230A4BC;
loc_8230A4D4:
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

PPC_WEAK_FUNC(sub_8230A490) {
	__imp__sub_8230A490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A4E8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82309968
	ctx.lr = 0x8230A504;
	sub_82309968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8235a4c8
	ctx.lr = 0x8230A510;
	sub_8235A4C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230A4E8) {
	__imp__sub_8230A4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A520) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82309968
	ctx.lr = 0x8230A53C;
	sub_82309968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8235a568
	ctx.lr = 0x8230A548;
	sub_8235A568(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230A520) {
	__imp__sub_8230A520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A558) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82309968
	ctx.lr = 0x8230A574;
	sub_82309968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8235a430
	ctx.lr = 0x8230A580;
	sub_8235A430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230A558) {
	__imp__sub_8230A558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230A598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r11,13800
	ctx.r10.s64 = ctx.r11.s64 + 13800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,27020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27020);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8230a5fc
	if (ctx.cr6.lt) goto loc_8230A5FC;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8230a5fc
	if (ctx.cr6.lt) goto loc_8230A5FC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82309968
	ctx.lr = 0x8230A5D4;
	sub_82309968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82309968
	ctx.lr = 0x8230A5E4;
	sub_82309968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235a440
	ctx.lr = 0x8230A5F4;
	sub_8235A440(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8230A5FC:
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

PPC_WEAK_FUNC(sub_8230A590) {
	__imp__sub_8230A590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230A60C) {
	__imp__sub_8230A60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A610) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82309968
	ctx.lr = 0x8230A62C;
	sub_82309968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8235a768
	ctx.lr = 0x8230A638;
	sub_8235A768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230A610) {
	__imp__sub_8230A610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230A650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82309648
	ctx.lr = 0x8230A664;
	sub_82309648(ctx, base);
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// lbz r11,27033(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a688
	if (ctx.cr6.eq) goto loc_8230A688;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230A688:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,27024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27024);
	// stb r11,27044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27044, ctx.r11.u8);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq cr6,0x8230a714
	if (ctx.cr6.eq) goto loc_8230A714;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8230a6f0
	if (ctx.cr6.eq) goto loc_8230A6F0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r9,r10,4384
	ctx.r9.s64 = ctx.r10.s64 + 4384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8230A6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230A6F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,13712
	ctx.r5.s64 = ctx.r11.s64 + 13712;
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
	// bl 0x822e8368
	ctx.lr = 0x8230A708;
	sub_822E8368(ctx, base);
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230A714:
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A648) {
	__imp__sub_8230A648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8230A728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x8230a784
	if (ctx.cr6.eq) goto loc_8230A784;
	// bl 0x8235a7f8
	ctx.lr = 0x8230A74C;
	sub_8235A7F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a784
	if (ctx.cr6.eq) goto loc_8230A784;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8235a450
	ctx.lr = 0x8230A760;
	sub_8235A450(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a790
	if (!ctx.cr6.eq) goto loc_8230A790;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,6496
	ctx.r4.s64 = ctx.r11.s64 + 6496;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8230A784;
	sub_82280B08(ctx, base);
loc_8230A784:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8230A790:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82308c20
	ctx.lr = 0x8230A7A0;
	sub_82308C20(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r3,16726
	ctx.r3.s64 = 1096155136;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,2071
	ctx.r3.u64 = ctx.r3.u64 | 2071;
	// bl 0x8236b280
	ctx.lr = 0x8230A7D0;
	sub_8236B280(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8230a7f8
	if (ctx.cr6.eq) goto loc_8230A7F8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,6432
	ctx.r4.s64 = ctx.r11.s64 + 6432;
	// bl 0x82280b08
	ctx.lr = 0x8230A7EC;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8230A7F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A720) {
	__imp__sub_8230A720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230A804) {
	__imp__sub_8230A804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A808) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8230a838
	if (!ctx.cr6.eq) goto loc_8230A838;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230a87c
	goto loc_8230A87C;
loc_8230A838:
	// bl 0x8236bab0
	ctx.lr = 0x8230A83C;
	sub_8236BAB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230a878
	if (!ctx.cr6.lt) goto loc_8230A878;
	// lbz r3,37(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// bl 0x8230bba0
	ctx.lr = 0x8230A850;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a870
	if (ctx.cr6.eq) goto loc_8230A870;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,6544
	ctx.r4.s64 = ctx.r11.s64 + 6544;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8230A870;
	sub_82280B08(ctx, base);
loc_8230A870:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8230a87c
	goto loc_8230A87C;
loc_8230A878:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8230A87C:
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

PPC_WEAK_FUNC(sub_8230A808) {
	__imp__sub_8230A808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230A894) {
	__imp__sub_8230A894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A898) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8230a8d0
	if (ctx.cr6.gt) goto loc_8230A8D0;
loc_8230A8B4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
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
loc_8230A8D0:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8230a8b4
	if (!ctx.cr6.gt) goto loc_8230A8B4;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8230a8b4
	if (ctx.cr6.lt) goto loc_8230A8B4;
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,65533
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65533, ctx.xer);
	// beq cr6,0x8230a974
	if (ctx.cr6.eq) goto loc_8230A974;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8230a940
	if (ctx.cr6.eq) goto loc_8230A940;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,4384
	ctx.r10.s64 = ctx.r11.s64 + 4384;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8230A92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_8230A940:
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r5,r10,13712
	ctx.r5.s64 = ctx.r10.s64 + 13712;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
	// bl 0x822e8368
	ctx.lr = 0x8230A95C;
	sub_822E8368(ctx, base);
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
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
loc_8230A974:
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
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

PPC_WEAK_FUNC(sub_8230A898) {
	__imp__sub_8230A898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230A98C) {
	__imp__sub_8230A98C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230A990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230A998;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8230A9AC;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ab14
	if (ctx.cr6.eq) goto loc_8230AB14;
	// bl 0x8230a490
	ctx.lr = 0x8230A9BC;
	sub_8230A490(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235a7f8
	ctx.lr = 0x8230A9C4;
	sub_8235A7F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a9ec
	if (!ctx.cr6.eq) goto loc_8230A9EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,6704
	ctx.r4.s64 = ctx.r11.s64 + 6704;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x8230A9E4;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230A9EC:
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,27076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27076, ctx.r30.u32);
	// stw r11,27096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27096, ctx.r11.u32);
	// bl 0x8230bd88
	ctx.lr = 0x8230AA08;
	sub_8230BD88(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,47664
	ctx.r9.u64 = ctx.r11.u64 | 47664;
	// ori r8,r10,48996
	ctx.r8.u64 = ctx.r10.u64 | 48996;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stdx r3,r31,r9
	PPC_STORE_U64(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u64);
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230aa58
	if (!ctx.cr6.gt) goto loc_8230AA58;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8230AA3C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,65534
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65534, ctx.xer);
	// beq cr6,0x8230aa58
	if (ctx.cr6.eq) goto loc_8230AA58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230aa3c
	if (ctx.cr6.lt) goto loc_8230AA3C;
loc_8230AA58:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230aa7c
	if (ctx.cr6.lt) goto loc_8230AA7C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,6660
	ctx.r4.s64 = ctx.r11.s64 + 6660;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x8230AA74;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230AA7C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r8,27076(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27076);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r4,r6,47680
	ctx.r4.u64 = ctx.r6.u64 | 47680;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ori r5,r9,47672
	ctx.r5.u64 = ctx.r9.u64 | 47672;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stbx r10,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r4,r3,47688
	ctx.r4.u64 = ctx.r3.u64 | 47688;
	// ori r3,r7,48880
	ctx.r3.u64 = ctx.r7.u64 | 48880;
	// lis r30,0
	ctx.r30.s64 = 0;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// ori r7,r6,48876
	ctx.r7.u64 = ctx.r6.u64 | 48876;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// ori r6,r30,48872
	ctx.r6.u64 = ctx.r30.u64 | 48872;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// addi r9,r9,-17864
	ctx.r9.s64 = ctx.r9.s64 + -17864;
	// li r10,1
	ctx.r10.s64 = 1;
	// stdx r11,r31,r4
	PPC_STORE_U64(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u64);
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x8230AAF4;
	sub_82310110(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r5,49000
	ctx.r9.u64 = ctx.r5.u64 | 49000;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,-17872
	ctx.r4.s64 = ctx.r10.s64 + -17872;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8230a288
	ctx.lr = 0x8230AB14;
	sub_8230A288(ctx, base);
loc_8230AB14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230A990) {
	__imp__sub_8230A990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AB1C) {
	__imp__sub_8230AB1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AB20) {
	PPC_FUNC_PROLOGUE();
	// cmpld cr6,r3,r4
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r4.u64, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AB20) {
	__imp__sub_8230AB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AB34) {
	__imp__sub_8230AB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AB38) {
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
	// bl 0x82280f20
	ctx.lr = 0x8230AB58;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ab74
	if (ctx.cr6.eq) goto loc_8230AB74;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230AB70;
	sub_82280B08(ctx, base);
	// b 0x8230ab7c
	goto loc_8230AB7C;
loc_8230AB74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822830e8
	ctx.lr = 0x8230AB7C;
	sub_822830E8(ctx, base);
loc_8230AB7C:
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

PPC_WEAK_FUNC(sub_8230AB38) {
	__imp__sub_8230AB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AB94) {
	__imp__sub_8230AB94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AB98) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230abcc
	if (ctx.cr6.eq) goto loc_8230ABCC;
	// bl 0x822807d8
	ctx.lr = 0x8230ABBC;
	sub_822807D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230abd0
	if (ctx.cr6.eq) goto loc_8230ABD0;
loc_8230ABCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230ABD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AB98) {
	__imp__sub_8230AB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230ABE0) {
	__imp__sub_8230ABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230ABEC) {
	__imp__sub_8230ABEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230ABF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230ABF0) {
	__imp__sub_8230ABF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230ABFC) {
	__imp__sub_8230ABFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AC00) {
	__imp__sub_8230AC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AC0C) {
	__imp__sub_8230AC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r3,104
	ctx.r11.s64 = ctx.r3.s64 * 104;
	// addi r10,r10,6936
	ctx.r10.s64 = ctx.r10.s64 + 6936;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AC10) {
	__imp__sub_8230AC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r3,104
	ctx.r11.s64 = ctx.r3.s64 * 104;
	// addi r10,r10,6936
	ctx.r10.s64 = ctx.r10.s64 + 6936;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AC28) {
	__imp__sub_8230AC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r3,104
	ctx.r11.s64 = ctx.r3.s64 * 104;
	// addi r10,r10,6936
	ctx.r10.s64 = ctx.r10.s64 + 6936;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AC40) {
	__imp__sub_8230AC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AC58) {
	__imp__sub_8230AC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AC6C) {
	__imp__sub_8230AC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AC70) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stb r31,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r31.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82372850
	ctx.lr = 0x8230ACC8;
	sub_82372850(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,7520
	ctx.r30.s64 = ctx.r11.s64 + 7520;
	// beq cr6,0x8230ace4
	if (ctx.cr6.eq) goto loc_8230ACE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8230ACE4;
	sub_822830E8(ctx, base);
loc_8230ACE4:
	// bl 0x82373870
	ctx.lr = 0x8230ACE8;
	sub_82373870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230acfc
	if (ctx.cr6.eq) goto loc_8230ACFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8230ACFC;
	sub_822830E8(ctx, base);
loc_8230ACFC:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r5,416
	ctx.r5.s64 = 416;
	// addi r3,r11,6936
	ctx.r3.s64 = ctx.r11.s64 + 6936;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8230AD10;
	sub_823DE090(ctx, base);
loc_8230AD10:
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x8230AD24;
	sub_8236B1D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8230ad10
	if (ctx.cr6.lt) goto loc_8230AD10;
	// lis r30,-31835
	ctx.r30.s64 = -2086338560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r30,6932
	ctx.r31.s64 = ctx.r30.s64 + 6932;
	// addi r4,r11,7508
	ctx.r4.s64 = ctx.r11.s64 + 7508;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x822801e0
	ctx.lr = 0x8230AD48;
	sub_822801E0(ctx, base);
	// bl 0x8235bf18
	ctx.lr = 0x8230AD4C;
	sub_8235BF18(ctx, base);
	// bl 0x82361550
	ctx.lr = 0x8230AD50;
	sub_82361550(ctx, base);
	// bl 0x8235a108
	ctx.lr = 0x8230AD54;
	sub_8235A108(ctx, base);
	// bl 0x82280168
	ctx.lr = 0x8230AD58;
	sub_82280168(ctx, base);
	// bl 0x82307440
	ctx.lr = 0x8230AD5C;
	sub_82307440(ctx, base);
	// bl 0x8213fd58
	ctx.lr = 0x8230AD60;
	sub_8213FD58(ctx, base);
	// bl 0x82139420
	ctx.lr = 0x8230AD64;
	sub_82139420(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,239
	ctx.r3.s64 = 239;
	// ori r10,r10,64000
	ctx.r10.u64 = ctx.r10.u64 | 64000;
	// stw r10,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r10.u32);
	// bl 0x82370008
	ctx.lr = 0x8230AD80;
	sub_82370008(ctx, base);
	// stw r3,6932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6932, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ad94
	if (ctx.cr6.eq) goto loc_8230AD94;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230ada4
	if (!ctx.cr6.eq) goto loc_8230ADA4;
loc_8230AD94:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7456
	ctx.r4.s64 = ctx.r11.s64 + 7456;
	// bl 0x822830e8
	ctx.lr = 0x8230ADA4;
	sub_822830E8(ctx, base);
loc_8230ADA4:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x823f1124
	ctx.lr = 0x8230ADAC;
	__imp__XNotifyPositionUI(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,7424
	ctx.r6.s64 = ctx.r11.s64 + 7424;
	// addi r3,r10,7408
	ctx.r3.s64 = ctx.r10.s64 + 7408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8230ADC8;
	sub_822E15D0(ctx, base);
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,7380
	ctx.r6.s64 = ctx.r8.s64 + 7380;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,6920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6920, ctx.r3.u32);
	// addi r3,r7,7360
	ctx.r3.s64 = ctx.r7.s64 + 7360;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8230ADEC;
	sub_822E15D0(ctx, base);
	// lis r5,-31835
	ctx.r5.s64 = -2086338560;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,7336
	ctx.r6.s64 = ctx.r4.s64 + 7336;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8816(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8816, ctx.r3.u32);
	// addi r3,r11,7316
	ctx.r3.s64 = ctx.r11.s64 + 7316;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8230AE10;
	sub_822E15D0(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r3,7352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7352, ctx.r3.u32);
	// addi r3,r7,7288
	ctx.r3.s64 = ctx.r7.s64 + 7288;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r8,7240
	ctx.r8.s64 = ctx.r8.s64 + 7240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822e1618
	ctx.lr = 0x8230AE44;
	sub_822E1618(ctx, base);
	// lis r6,-31835
	ctx.r6.s64 = -2086338560;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,7188
	ctx.r8.s64 = ctx.r5.s64 + 7188;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,7372(r6)
	PPC_STORE_U32(ctx.r6.u32 + 7372, ctx.r3.u32);
	// addi r3,r4,7148
	ctx.r3.s64 = ctx.r4.s64 + 7148;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x822e1618
	ctx.lr = 0x8230AE70;
	sub_822E1618(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r10,7056
	ctx.r6.s64 = ctx.r10.s64 + 7056;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,7364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7364, ctx.r3.u32);
	// addi r3,r9,7036
	ctx.r3.s64 = ctx.r9.s64 + 7036;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8230AE94;
	sub_822E15D0(ctx, base);
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,6988
	ctx.r6.s64 = ctx.r7.s64 + 6988;
	// stw r3,7356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7356, ctx.r3.u32);
	// addi r3,r5,7016
	ctx.r3.s64 = ctx.r5.s64 + 7016;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8230AEB8;
	sub_822E15D0(ctx, base);
	// lis r4,-31835
	ctx.r4.s64 = -2086338560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6944
	ctx.r6.s64 = ctx.r11.s64 + 6944;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,8820(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8820, ctx.r3.u32);
	// addi r3,r10,6924
	ctx.r3.s64 = ctx.r10.s64 + 6924;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8230AEDC;
	sub_822E15D0(ctx, base);
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r3,6928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6928, ctx.r3.u32);
	// addi r3,r7,6820
	ctx.r3.s64 = ctx.r7.s64 + 6820;
	// addi r8,r8,6848
	ctx.r8.s64 = ctx.r8.s64 + 6848;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x822e1618
	ctx.lr = 0x8230AF08;
	sub_822E1618(ctx, base);
	// lis r5,-31835
	ctx.r5.s64 = -2086338560;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,6768
	ctx.r6.s64 = ctx.r4.s64 + 6768;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,7368(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7368, ctx.r3.u32);
	// addi r3,r11,6744
	ctx.r3.s64 = ctx.r11.s64 + 6744;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8230AF2C;
	sub_822E15D0(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// stw r3,-11144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11144, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8230AC70) {
	__imp__sub_8230AC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AF4C) {
	__imp__sub_8230AF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AF50) {
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
	// bl 0x82373880
	ctx.lr = 0x8230AF64;
	sub_82373880(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8230AF68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ef90
	ctx.lr = 0x8230AF70;
	sub_8213EF90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8230af68
	if (ctx.cr6.lt) goto loc_8230AF68;
	// bl 0x822801a0
	ctx.lr = 0x8230AF80;
	sub_822801A0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8230AF84;
	sub_8230A490(ctx, base);
	// bl 0x8235a218
	ctx.lr = 0x8230AF88;
	sub_8235A218(ctx, base);
	// bl 0x823615c0
	ctx.lr = 0x8230AF8C;
	sub_823615C0(ctx, base);
	// bl 0x8235bf80
	ctx.lr = 0x8230AF90;
	sub_8235BF80(ctx, base);
	// bl 0x823074b0
	ctx.lr = 0x8230AF94;
	sub_823074B0(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r3,r11,7376
	ctx.r3.s64 = ctx.r11.s64 + 7376;
	// bl 0x82280470
	ctx.lr = 0x8230AFA0;
	sub_82280470(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6920(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6920);
	// bl 0x822e1f18
	ctx.lr = 0x8230AFB0;
	sub_822E1F18(ctx, base);
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

PPC_WEAK_FUNC(sub_8230AF50) {
	__imp__sub_8230AF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230AFC4) {
	__imp__sub_8230AFC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230AFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// addi r11,r9,72
	ctx.r11.s64 = ctx.r9.s64 + 72;
loc_8230AFD8:
	// ld r8,-32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8230b00c
	if (ctx.cr6.eq) goto loc_8230B00C;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8230b00c
	if (ctx.cr6.eq) goto loc_8230B00C;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// addi r8,r9,488
	ctx.r8.s64 = ctx.r9.s64 + 488;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8230afd8
	if (ctx.cr6.lt) goto loc_8230AFD8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8230B00C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230AFC8) {
	__imp__sub_8230AFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B014) {
	__imp__sub_8230B014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B018) {
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
	// bl 0x8230afc8
	ctx.lr = 0x8230B028;
	sub_8230AFC8(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B018) {
	__imp__sub_8230B018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230B048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,22448
	ctx.r30.s64 = ctx.r11.s64 + 22448;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,22448(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230b0a0
	if (ctx.cr6.eq) goto loc_8230B0A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8230B070:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x8230B078;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230b0c8
	if (ctx.cr6.eq) goto loc_8230B0C8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230b070
	if (!ctx.cr6.eq) goto loc_8230B070;
loc_8230B0A0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,7548
	ctx.r3.s64 = ctx.r11.s64 + 7548;
	// bl 0x822e84f0
	ctx.lr = 0x8230B0B0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8230B0BC;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230B0C8:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B040) {
	__imp__sub_8230B040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8788
	ctx.r11.s64 = ctx.r11.s64 + 8788;
loc_8230B0E4:
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x8230b0e4
	if (ctx.cr6.lt) goto loc_8230B0E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B0D8) {
	__imp__sub_8230B0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B104) {
	__imp__sub_8230B104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8230B110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// addi r30,r11,7376
	ctx.r30.s64 = ctx.r11.s64 + 7376;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8230B12C;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8230b148
	if (!ctx.cr6.eq) goto loc_8230B148;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230B148:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280760
	ctx.lr = 0x8230B154;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8230B158;
	sub_822807D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8230B164;
	sub_8236BAB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230b1d8
	if (ctx.cr6.eq) goto loc_8230B1D8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8230b1d8
	if (ctx.cr6.eq) goto loc_8230B1D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280760
	ctx.lr = 0x8230B184;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230B188;
	sub_822805F0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,16389
	ctx.r9.u64 = ctx.r11.u64 | 16389;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// li r3,16
	ctx.r3.s64 = 16;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8230b1bc
	if (!ctx.cr6.eq) goto loc_8230B1BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7628
	ctx.r4.s64 = ctx.r11.s64 + 7628;
	// bl 0x82280b08
	ctx.lr = 0x8230B1B0;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230B1BC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7576
	ctx.r4.s64 = ctx.r11.s64 + 7576;
	// bl 0x82280b08
	ctx.lr = 0x8230B1CC;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8230B1D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280760
	ctx.lr = 0x8230B1E4;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230B1E8;
	sub_822805F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B108) {
	__imp__sub_8230B108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B1FC) {
	__imp__sub_8230B1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B200) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B200) {
	__imp__sub_8230B200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B208) {
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
	// bl 0x82372930
	ctx.lr = 0x8230B218;
	sub_82372930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b258
	if (!ctx.cr6.eq) goto loc_8230B258;
	// bl 0x82280f20
	ctx.lr = 0x8230B224;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7676
	ctx.r4.s64 = ctx.r11.s64 + 7676;
	// beq cr6,0x8230b250
	if (ctx.cr6.eq) goto loc_8230B250;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230B240;
	sub_82280B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8230B250:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230B258;
	sub_822830E8(ctx, base);
loc_8230B258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B208) {
	__imp__sub_8230B208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B268) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31835
	ctx.r7.s64 = -2086338560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,6924
	ctx.r6.s64 = ctx.r7.s64 + 6924;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r11.u8);
	// stb r10,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r10.u8);
	// stb r9,1885(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1885, ctx.r9.u8);
	// stb r8,6924(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6924, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B268) {
	__imp__sub_8230B268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B294) {
	__imp__sub_8230B294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B298) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82370010
	ctx.lr = 0x8230B2B0;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b2cc
	if (!ctx.cr6.eq) goto loc_8230B2CC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230b2d0
	if (!ctx.cr6.eq) goto loc_8230B2D0;
loc_8230B2CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230B2D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B298) {
	__imp__sub_8230B298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B2E0) {
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
	// bl 0x82141280
	ctx.lr = 0x8230B2FC;
	sub_82141280(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7768
	ctx.r4.s64 = ctx.r11.s64 + 7768;
	// bl 0x822c3928
	ctx.lr = 0x8230B30C;
	sub_822C3928(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,3628
	ctx.r4.s64 = ctx.r10.s64 + 3628;
	// bl 0x822c3928
	ctx.lr = 0x8230B31C;
	sub_822C3928(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,10464
	ctx.r4.s64 = ctx.r9.s64 + 10464;
	// bl 0x822c3928
	ctx.lr = 0x8230B32C;
	sub_822C3928(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230b388
	if (ctx.cr6.eq) goto loc_8230B388;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b388
	if (ctx.cr6.eq) goto loc_8230B388;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x8230b378
	if (ctx.cr6.eq) goto loc_8230B378;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b7268
	ctx.lr = 0x8230B360;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230b378
	if (ctx.cr6.eq) goto loc_8230B378;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,7748
	ctx.r3.s64 = ctx.r11.s64 + 7748;
	// b 0x8230b398
	goto loc_8230B398;
loc_8230B378:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,7748
	ctx.r3.s64 = ctx.r11.s64 + 7748;
	// b 0x8230b398
	goto loc_8230B398;
loc_8230B388:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,7720
	ctx.r4.s64 = ctx.r11.s64 + 7720;
	// addi r3,r10,7748
	ctx.r3.s64 = ctx.r10.s64 + 7748;
loc_8230B398:
	// bl 0x822e2520
	ctx.lr = 0x8230B39C;
	sub_822E2520(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,7700
	ctx.r4.s64 = ctx.r11.s64 + 7700;
	// bl 0x822c3908
	ctx.lr = 0x8230B3AC;
	sub_822C3908(ctx, base);
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

PPC_WEAK_FUNC(sub_8230B2E0) {
	__imp__sub_8230B2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B3C4) {
	__imp__sub_8230B3C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230b2e0
	sub_8230B2E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B3C8) {
	__imp__sub_8230B3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B3CC) {
	__imp__sub_8230B3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B3D0) {
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
	// bl 0x82372930
	ctx.lr = 0x8230B3E0;
	sub_82372930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b414
	if (!ctx.cr6.eq) goto loc_8230B414;
	// bl 0x82280f20
	ctx.lr = 0x8230B3EC;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7676
	ctx.r4.s64 = ctx.r11.s64 + 7676;
	// beq cr6,0x8230b40c
	if (ctx.cr6.eq) goto loc_8230B40C;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230B408;
	sub_82280B08(ctx, base);
	// b 0x8230b414
	goto loc_8230B414;
loc_8230B40C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230B414;
	sub_822830E8(ctx, base);
loc_8230B414:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,8809(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8809, ctx.r11.u8);
	// bl 0x8236b650
	ctx.lr = 0x8230B428;
	sub_8236B650(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b610
	ctx.lr = 0x8230B434;
	sub_8236B610(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B3D0) {
	__imp__sub_8230B3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B444) {
	__imp__sub_8230B444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B448) {
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
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,6926(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6926, ctx.r11.u8);
	// bl 0x8236b650
	ctx.lr = 0x8230B468;
	sub_8236B650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236b610
	ctx.lr = 0x8230B474;
	sub_8236B610(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B448) {
	__imp__sub_8230B448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B484) {
	__imp__sub_8230B484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r11,r11,6936
	ctx.r11.s64 = ctx.r11.s64 + 6936;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B488) {
	__imp__sub_8230B488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r11,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r11.u32);
	// b 0x823f1114
	__imp__XamLoaderSetLaunchData(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B4A0) {
	__imp__sub_8230B4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r11,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r11.u32);
	// b 0x823f1114
	__imp__XamLoaderSetLaunchData(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B4B8) {
	__imp__sub_8230B4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r11,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r11.u32);
	// b 0x823f1114
	__imp__XamLoaderSetLaunchData(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B4D0) {
	__imp__sub_8230B4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B4E8) {
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
	// bl 0x821416e8
	ctx.lr = 0x8230B50C;
	sub_821416E8(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r11,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r11.u32);
	// bl 0x823f1114
	ctx.lr = 0x8230B524;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x8236b1d0
	ctx.lr = 0x8230B538;
	sub_8236B1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x8230B540;
	sub_82141280(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233b898
	ctx.lr = 0x8230B554;
	sub_8233B898(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230b58c
	if (ctx.cr6.eq) goto loc_8230B58C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r3,r10,7788
	ctx.r3.s64 = ctx.r10.s64 + 7788;
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r5,85(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x8230B580;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227cf18
	ctx.lr = 0x8230B58C;
	sub_8227CF18(ctx, base);
loc_8230B58C:
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

PPC_WEAK_FUNC(sub_8230B4E8) {
	__imp__sub_8230B4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B5A4) {
	__imp__sub_8230B5A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,912
	ctx.r11.s64 = ctx.r3.s64 + 912;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r9.u32);
loc_8230B5C8:
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8230b5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230B5C8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// b 0x823f1114
	__imp__XamLoaderSetLaunchData(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B5A8) {
	__imp__sub_8230B5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B5DC) {
	__imp__sub_8230B5DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,11336
	ctx.r10.s64 = ctx.r11.s64 + 11336;
	// lwz r11,908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	// addi r9,r11,-3
	ctx.r9.s64 = ctx.r11.s64 + -3;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B5E0) {
	__imp__sub_8230B5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B5FC) {
	__imp__sub_8230B5FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,11336
	ctx.r10.s64 = ctx.r11.s64 + 11336;
	// lwz r11,908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B600) {
	__imp__sub_8230B600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B61C) {
	__imp__sub_8230B61C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B620) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8230f318
	ctx.lr = 0x8230B63C;
	sub_8230F318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230b690
	if (!ctx.cr6.eq) goto loc_8230B690;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// addi r11,r11,928
	ctx.r11.s64 = ctx.r11.s64 + 928;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
loc_8230B658:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8230b678
	if (!ctx.cr0.eq) goto loc_8230B678;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8230b658
	if (!ctx.cr6.eq) goto loc_8230B658;
loc_8230B678:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8230B690:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B620) {
	__imp__sub_8230B620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B6A4) {
	__imp__sub_8230B6A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B6A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// bl 0x822e1f18
	ctx.lr = 0x8230B6C4;
	sub_822E1F18(ctx, base);
	// lis r7,-31835
	ctx.r7.s64 = -2086338560;
	// lis r6,-32165
	ctx.r6.s64 = -2107965440;
	// addi r5,r7,6924
	ctx.r5.s64 = ctx.r7.s64 + 6924;
	// addi r4,r6,28832
	ctx.r4.s64 = ctx.r6.s64 + 28832;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// stb r9,1885(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1885, ctx.r9.u8);
	// stb r8,6924(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6924, ctx.r8.u8);
	// lwz r11,332(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b710
	if (ctx.cr6.eq) goto loc_8230B710;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,11636
	ctx.r3.s64 = ctx.r11.s64 + 11636;
	// bl 0x822e20d0
	ctx.lr = 0x8230B710;
	sub_822E20D0(ctx, base);
loc_8230B710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230B6A8) {
	__imp__sub_8230B6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230B728;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8213ef90
	ctx.lr = 0x8230B738;
	sub_8213EF90(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 * 104;
	// addi r11,r11,6936
	ctx.r11.s64 = ctx.r11.s64 + 6936;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stdx r9,r10,r6
	PPC_STORE_U64(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u64);
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// bl 0x8235ff98
	ctx.lr = 0x8230B770;
	sub_8235FF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x8230B778;
	sub_82141280(ctx, base);
	// lis r30,-32191
	ctx.r30.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b7a8
	if (ctx.cr6.eq) goto loc_8230B7A8;
	// bl 0x821413c8
	ctx.lr = 0x8230B790;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4688);
	// bne cr6,0x8230b7b8
	if (!ctx.cr6.eq) goto loc_8230B7B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230b818
	if (!ctx.cr6.eq) goto loc_8230B818;
loc_8230B7A8:
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lwz r10,-16768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16768);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8230b818
	if (!ctx.cr6.eq) goto loc_8230B818;
loc_8230B7B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b7d4
	if (ctx.cr6.eq) goto loc_8230B7D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141198
	ctx.lr = 0x8230B7C8;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230b810
	if (ctx.cr6.eq) goto loc_8230B810;
loc_8230B7D4:
	// bl 0x82141b20
	ctx.lr = 0x8230B7D8;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230b7ec
	if (ctx.cr6.eq) goto loc_8230B7EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8230b810
	if (!ctx.cr6.eq) goto loc_8230B810;
loc_8230B7EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,7816
	ctx.r4.s64 = ctx.r11.s64 + 7816;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230B800;
	sub_82280900(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r9,r10,11208
	ctx.r9.s64 = ctx.r10.s64 + 11208;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_8230B810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230ef20
	ctx.lr = 0x8230B818;
	sub_8230EF20(ctx, base);
loc_8230B818:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B720) {
	__imp__sub_8230B720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B824) {
	__imp__sub_8230B824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B828) {
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
	// bl 0x82141458
	ctx.lr = 0x8230B848;
	sub_82141458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230b85c
	if (!ctx.cr6.eq) goto loc_8230B85C;
loc_8230B854:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230b8c4
	goto loc_8230B8C4;
loc_8230B85C:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8230b854
	if (!ctx.cr6.eq) goto loc_8230B854;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b89c
	if (ctx.cr6.eq) goto loc_8230B89C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141198
	ctx.lr = 0x8230B890;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230b854
	if (ctx.cr6.eq) goto loc_8230B854;
loc_8230B89C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x8230B8A8;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230b8c0
	if (ctx.cr6.eq) goto loc_8230B8C0;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8230b8c4
	goto loc_8230B8C4;
loc_8230B8C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8230B8C4:
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

PPC_WEAK_FUNC(sub_8230B828) {
	__imp__sub_8230B828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230B8DC) {
	__imp__sub_8230B8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230B8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230B8E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8236b418
	ctx.lr = 0x8230B8FC;
	sub_8236B418(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8230b920
	if (!ctx.cr6.eq) goto loc_8230B920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8230b720
	ctx.lr = 0x8230B914;
	sub_8230B720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230B920:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8236b1d8
	ctx.lr = 0x8230B92C;
	sub_8236B1D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141280
	ctx.lr = 0x8230B934;
	sub_82141280(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,6920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// bl 0x822e1f18
	ctx.lr = 0x8230B948;
	sub_822E1F18(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mulli r30,r29,104
	ctx.r30.s64 = ctx.r29.s64 * 104;
	// addi r31,r10,6936
	ctx.r31.s64 = ctx.r10.s64 + 6936;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stdx r8,r30,r9
	PPC_STORE_U64(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u64);
	// bl 0x82370010
	ctx.lr = 0x8230B970;
	sub_82370010(ctx, base);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stdx r6,r30,r7
	PPC_STORE_U64(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u64);
	// bl 0x822e7e98
	ctx.lr = 0x8230B990;
	sub_822E7E98(ctx, base);
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8230b9c4
	if (!ctx.cr6.eq) goto loc_8230B9C4;
	// bl 0x82310110
	ctx.lr = 0x8230B9A0;
	sub_82310110(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213eec8
	ctx.lr = 0x8230B9AC;
	sub_8213EEC8(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230B9B0;
	sub_82310110(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// subf r5,r28,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r4,r11,7904
	ctx.r4.s64 = ctx.r11.s64 + 7904;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230B9C4;
	sub_82280900(ctx, base);
loc_8230B9C4:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r28,-32191
	ctx.r28.s64 = -2109669376;
	// addi r11,r11,6924
	ctx.r11.s64 = ctx.r11.s64 + 6924;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230b9f8
	if (!ctx.cr6.eq) goto loc_8230B9F8;
	// lbz r9,1885(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1885);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230b9f8
	if (!ctx.cr6.eq) goto loc_8230B9F8;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ba24
	if (ctx.cr6.eq) goto loc_8230BA24;
	// b 0x8230ba1c
	goto loc_8230BA1C;
loc_8230B9F8:
	// lwz r11,4688(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230ba24
	if (!ctx.cr6.eq) goto loc_8230BA24;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8230ba24
	if (!ctx.cr6.eq) goto loc_8230BA24;
loc_8230BA1C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// stw r29,-16768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16768, ctx.r29.u32);
loc_8230BA24:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ba9c
	if (ctx.cr6.eq) goto loc_8230BA9C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230b828
	ctx.lr = 0x8230BA44;
	sub_8230B828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230ba9c
	if (ctx.cr6.eq) goto loc_8230BA9C;
	// lwz r11,4688(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ba80
	if (ctx.cr6.eq) goto loc_8230BA80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,7892
	ctx.r3.s64 = ctx.r11.s64 + 7892;
	// bl 0x822e2170
	ctx.lr = 0x8230BA68;
	sub_822E2170(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-14904(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14904);
	// bl 0x822e1f18
	ctx.lr = 0x8230BA78;
	sub_822E1F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821416e8
	ctx.lr = 0x8230BA80;
	sub_821416E8(ctx, base);
loc_8230BA80:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,11636
	ctx.r3.s64 = ctx.r11.s64 + 11636;
	// bl 0x822e20d0
	ctx.lr = 0x8230BA90;
	sub_822E20D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c4c00
	ctx.lr = 0x8230BA9C;
	sub_822C4C00(ctx, base);
loc_8230BA9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230B8E0) {
	__imp__sub_8230B8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8230BAB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7976
	ctx.r4.s64 = ctx.r11.s64 + 7976;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8230BAD4;
	sub_82280900(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r30,r29,104
	ctx.r30.s64 = ctx.r29.s64 * 104;
	// addi r31,r11,6936
	ctx.r31.s64 = ctx.r11.s64 + 6936;
	// lwzx r26,r30,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8230bb2c
	if (!ctx.cr6.eq) goto loc_8230BB2C;
	// bl 0x82310110
	ctx.lr = 0x8230BAF0;
	sub_82310110(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230b8e0
	ctx.lr = 0x8230BB00;
	sub_8230B8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230bb14
	if (!ctx.cr6.eq) goto loc_8230BB14;
loc_8230BB08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8230BB14:
	// bl 0x82310110
	ctx.lr = 0x8230BB18;
	sub_82310110(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// subf r5,r27,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r27.s64;
	// addi r4,r11,7944
	ctx.r4.s64 = ctx.r11.s64 + 7944;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230BB2C;
	sub_82280900(ctx, base);
loc_8230BB2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370010
	ctx.lr = 0x8230BB3C;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230bb08
	if (!ctx.cr6.eq) goto loc_8230BB08;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8230bb08
	if (ctx.cr6.eq) goto loc_8230BB08;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,4688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// stwx r7,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stdx r11,r30,r9
	PPC_STORE_U64(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u64);
	// stdx r11,r30,r8
	PPC_STORE_U64(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u64);
	// bne cr6,0x8230bb94
	if (!ctx.cr6.eq) goto loc_8230BB94;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8230bb94
	if (!ctx.cr6.eq) goto loc_8230BB94;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8230bb94
	if (!ctx.cr6.eq) goto loc_8230BB94;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8230BB94:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230BAA8) {
	__imp__sub_8230BAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BBA0) {
	__imp__sub_8230BBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BBC0) {
	__imp__sub_8230BBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r3,r6,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BBE0) {
	__imp__sub_8230BBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8230BC08;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8012
	ctx.r4.s64 = ctx.r11.s64 + 8012;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8230BC2C;
	sub_82280900(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 * 104;
	// addi r30,r11,6936
	ctx.r30.s64 = ctx.r11.s64 + 6936;
	// lwzx r28,r29,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8230bc64
	if (!ctx.cr6.eq) goto loc_8230BC64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b8e0
	ctx.lr = 0x8230BC50;
	sub_8230B8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230bc64
	if (!ctx.cr6.eq) goto loc_8230BC64;
loc_8230BC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8230BC64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370010
	ctx.lr = 0x8230BC74;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230bc58
	if (!ctx.cr6.eq) goto loc_8230BC58;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r9.u32);
	// stdx r11,r29,r10
	PPC_STORE_U64(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u64);
	// bl 0x8227ff78
	ctx.lr = 0x8230BC98;
	sub_8227FF78(ctx, base);
	// bl 0x8213ff20
	ctx.lr = 0x8230BC9C;
	sub_8213FF20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307548
	ctx.lr = 0x8230BCA4;
	sub_82307548(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r11,4688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230bcfc
	if (!ctx.cr6.eq) goto loc_8230BCFC;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lwz r11,-16768(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16768);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8230bcf4
	if (!ctx.cr6.eq) goto loc_8230BCF4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8230bcec
	if (!ctx.cr6.eq) goto loc_8230BCEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r8,r11,11008
	ctx.r8.s64 = ctx.r11.s64 + 11008;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r11,4688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230bcfc
	if (!ctx.cr6.eq) goto loc_8230BCFC;
	// lwz r11,-16768(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16768);
loc_8230BCEC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8230bcfc
	if (ctx.cr6.eq) goto loc_8230BCFC;
loc_8230BCF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230fd80
	ctx.lr = 0x8230BCFC;
	sub_8230FD80(ctx, base);
loc_8230BCFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230BC00) {
	__imp__sub_8230BC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BD08) {
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
	// bl 0x82141280
	ctx.lr = 0x8230BD28;
	sub_82141280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82141400
	ctx.lr = 0x8230BD30;
	sub_82141400(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230bd44
	if (ctx.cr6.eq) goto loc_8230BD44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b948
	ctx.lr = 0x8230BD44;
	sub_8213B948(ctx, base);
loc_8230BD44:
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// bl 0x82142948
	ctx.lr = 0x8230BD50;
	sub_82142948(ctx, base);
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

PPC_WEAK_FUNC(sub_8230BD08) {
	__imp__sub_8230BD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r3,r6,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BD68) {
	__imp__sub_8230BD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BD88) {
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
	// mulli r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 * 104;
	// addi r31,r11,6936
	ctx.r31.s64 = ctx.r11.s64 + 6936;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8230bde0
	if (ctx.cr6.gt) goto loc_8230BDE0;
	// bl 0x82280f20
	ctx.lr = 0x8230BDB8;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11208
	ctx.r4.s64 = ctx.r11.s64 + 11208;
	// beq cr6,0x8230bdd8
	if (ctx.cr6.eq) goto loc_8230BDD8;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230BDD4;
	sub_82280B08(ctx, base);
	// b 0x8230bde0
	goto loc_8230BDE0;
loc_8230BDD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230BDE0;
	sub_822830E8(ctx, base);
loc_8230BDE0:
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// ldx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8230BD88) {
	__imp__sub_8230BD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r11,r11,6936
	ctx.r11.s64 = ctx.r11.s64 + 6936;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// ldx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BE00) {
	__imp__sub_8230BE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE18) {
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
	// bl 0x8230bd88
	ctx.lr = 0x8230BE30;
	sub_8230BD88(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
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

PPC_WEAK_FUNC(sub_8230BE18) {
	__imp__sub_8230BE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lbz r3,8808(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8808);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BE48) {
	__imp__sub_8230BE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230BE54) {
	__imp__sub_8230BE54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lbz r3,8810(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8810);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BE58) {
	__imp__sub_8230BE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230BE64) {
	__imp__sub_8230BE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8810(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8810, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BE68) {
	__imp__sub_8230BE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8810(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8810, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BE78) {
	__imp__sub_8230BE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BE88) {
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
	// bl 0x8236b618
	ctx.lr = 0x8230BE98;
	sub_8236B618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230bed8
	if (!ctx.cr6.lt) goto loc_8230BED8;
	// bl 0x82280f20
	ctx.lr = 0x8230BEA4;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,8048
	ctx.r4.s64 = ctx.r11.s64 + 8048;
	// beq cr6,0x8230bed0
	if (ctx.cr6.eq) goto loc_8230BED0;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230BEC0;
	sub_82280B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8230BED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230BED8;
	sub_822830E8(ctx, base);
loc_8230BED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BE88) {
	__imp__sub_8230BE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,8812(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8812);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BEE8) {
	__imp__sub_8230BEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230BEF4) {
	__imp__sub_8230BEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,8804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8804);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230BEF8) {
	__imp__sub_8230BEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230BF04) {
	__imp__sub_8230BF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230BF08) {
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
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// addi r31,r10,8804
	ctx.r31.s64 = ctx.r10.s64 + 8804;
	// addi r10,r31,-1428
	ctx.r10.s64 = ctx.r31.s64 + -1428;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822807b0
	ctx.lr = 0x8230BF38;
	sub_822807B0(ctx, base);
	// lwz r11,-1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1444);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230bf60
	if (!ctx.cr6.eq) goto loc_8230BF60;
	// addi r3,r31,-1428
	ctx.r3.s64 = ctx.r31.s64 + -1428;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8230BF54;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230BF58;
	sub_822805F0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8230bff8
	goto loc_8230BFF8;
loc_8230BF60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8230bf74
	if (!ctx.cr6.lt) goto loc_8230BF74;
loc_8230BF6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230bff8
	goto loc_8230BFF8;
loc_8230BF74:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230bf90
	if (!ctx.cr6.eq) goto loc_8230BF90;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230bf6c
	if (ctx.cr6.eq) goto loc_8230BF6C;
loc_8230BF90:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r3,16
	ctx.r3.s64 = 16;
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addi r4,r9,8144
	ctx.r4.s64 = ctx.r9.s64 + 8144;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82280900
	ctx.lr = 0x8230BFB8;
	sub_82280900(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r7,8080
	ctx.r4.s64 = ctx.r7.s64 + 8080;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x82280900
	ctx.lr = 0x8230BFD4;
	sub_82280900(ctx, base);
	// lwz r3,-1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1444);
	// bl 0x82372910
	ctx.lr = 0x8230BFDC;
	sub_82372910(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,-1428
	ctx.r3.s64 = ctx.r31.s64 + -1428;
	// stw r11,-1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1444, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8230BFF0;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230BFF4;
	sub_822805F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8230BFF8:
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

PPC_WEAK_FUNC(sub_8230BF08) {
	__imp__sub_8230BF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C010) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,7360
	ctx.r31.s64 = ctx.r11.s64 + 7360;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822805e8
	ctx.lr = 0x8230C03C;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230C040;
	sub_822807B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823728f8
	ctx.lr = 0x8230C054;
	sub_823728F8(ctx, base);
	// cmpwi cr6,r3,10013
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10013, ctx.xer);
	// bne cr6,0x8230c084
	if (!ctx.cr6.eq) goto loc_8230C084;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c06c
	if (ctx.cr6.eq) goto loc_8230C06C;
	// bl 0x82372910
	ctx.lr = 0x8230C06C;
	sub_82372910(ctx, base);
loc_8230C06C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8230C080;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230C084;
	sub_822805F0(ctx, base);
loc_8230C084:
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

PPC_WEAK_FUNC(sub_8230C010) {
	__imp__sub_8230C010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C09C) {
	__imp__sub_8230C09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230C0A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x822ec4e8
	ctx.lr = 0x8230C0B4;
	sub_822EC4E8(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r11,7376
	ctx.r29.s64 = ctx.r11.s64 + 7376;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// addi r28,r10,8252
	ctx.r28.s64 = ctx.r10.s64 + 8252;
	// addi r27,r11,8204
	ctx.r27.s64 = ctx.r11.s64 + 8204;
loc_8230C0D4:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c12c
	if (ctx.cr6.eq) goto loc_8230C12C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8230c110
	if (ctx.cr6.eq) goto loc_8230C110;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8230c12c
	if (!ctx.cr6.eq) goto loc_8230C12C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bf08
	ctx.lr = 0x8230C0FC;
	sub_8230BF08(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8230c12c
	if (ctx.cr6.lt) goto loc_8230C12C;
	// beq cr6,0x8230c12c
	if (ctx.cr6.eq) goto loc_8230C12C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8230c124
	goto loc_8230C124;
loc_8230C110:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230b108
	ctx.lr = 0x8230C118;
	sub_8230B108(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8230c12c
	if (ctx.cr6.lt) goto loc_8230C12C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8230C124:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8230C12C;
	sub_82280B08(ctx, base);
loc_8230C12C:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r29,1444
	ctx.r11.s64 = ctx.r29.s64 + 1444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230c0d4
	if (ctx.cr6.lt) goto loc_8230C0D4;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x822ec500
	ctx.lr = 0x8230C148;
	sub_822EC500(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230C0A0) {
	__imp__sub_8230C0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8230C158;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821285f0
	ctx.lr = 0x8230C160;
	sub_821285F0(ctx, base);
	// bl 0x8213ed60
	ctx.lr = 0x8230C164;
	sub_8213ED60(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r25,r11,6936
	ctx.r25.s64 = ctx.r11.s64 + 6936;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r25,4
	ctx.r29.s64 = ctx.r25.s64 + 4;
	// addi r28,r9,8352
	ctx.r28.s64 = ctx.r9.s64 + 8352;
	// addi r27,r10,8316
	ctx.r27.s64 = ctx.r10.s64 + 8316;
	// addi r26,r11,8280
	ctx.r26.s64 = ctx.r11.s64 + 8280;
loc_8230C18C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1e0
	ctx.lr = 0x8230C194;
	sub_8236B1E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8230c200
	if (ctx.cr6.eq) goto loc_8230C200;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8230c228
	if (!ctx.cr6.eq) goto loc_8230C228;
	// bl 0x82310110
	ctx.lr = 0x8230C1A8;
	sub_82310110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370010
	ctx.lr = 0x8230C1BC;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c1d8
	if (!ctx.cr6.eq) goto loc_8230C1D8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230c1dc
	if (!ctx.cr6.eq) goto loc_8230C1DC;
loc_8230C1D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230C1DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c228
	if (!ctx.cr6.eq) goto loc_8230C228;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230bc00
	ctx.lr = 0x8230C1F4;
	sub_8230BC00(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230C1F8;
	sub_82310110(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8230c21c
	goto loc_8230C21C;
loc_8230C200:
	// bl 0x82310110
	ctx.lr = 0x8230C204;
	sub_82310110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230baa8
	ctx.lr = 0x8230C214;
	sub_8230BAA8(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8230C218;
	sub_82310110(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8230C21C:
	// subf r5,r30,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r30.s64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230C228;
	sub_82280900(ctx, base);
loc_8230C228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213af90
	ctx.lr = 0x8230C230;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c270
	if (ctx.cr6.eq) goto loc_8230C270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213afa8
	ctx.lr = 0x8230C244;
	sub_8213AFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c270
	if (ctx.cr6.eq) goto loc_8230C270;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230C264;
	sub_82280900(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b720
	ctx.lr = 0x8230C270;
	sub_8230B720(ctx, base);
loc_8230C270:
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// addi r11,r25,420
	ctx.r11.s64 = ctx.r25.s64 + 420;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230c18c
	if (ctx.cr6.lt) goto loc_8230C18C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230C150) {
	__imp__sub_8230C150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C28C) {
	__imp__sub_8230C28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C290) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236b1d8
	ctx.lr = 0x8230C2B8;
	sub_8236B1D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c2d8
	if (ctx.cr6.eq) goto loc_8230C2D8;
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
loc_8230C2D8:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mulli r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 * 104;
	// addi r10,r10,6936
	ctx.r10.s64 = ctx.r10.s64 + 6936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e8068
	ctx.lr = 0x8230C2F4;
	sub_822E8068(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_8230C290) {
	__imp__sub_8230C290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C310) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82141280
	ctx.lr = 0x8230C32C;
	sub_82141280(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addic r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r31,r11,6924
	ctx.r31.s64 = ctx.r11.s64 + 6924;
	// subfe r11,r10,r30
	temp.u8 = (~ctx.r10.u32 + ctx.r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,1884(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1884, ctx.r11.u8);
	// bl 0x821285f0
	ctx.lr = 0x8230C348;
	sub_821285F0(ctx, base);
	// lbz r9,1884(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1884);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230c3ac
	if (!ctx.cr6.eq) goto loc_8230C3AC;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c384
	if (!ctx.cr6.eq) goto loc_8230C384;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c384
	if (!ctx.cr6.eq) goto loc_8230C384;
	// lbz r11,1885(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1885);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c384
	if (!ctx.cr6.eq) goto loc_8230C384;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c390
	if (ctx.cr6.eq) goto loc_8230C390;
loc_8230C384:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c4c00
	ctx.lr = 0x8230C390;
	sub_822C4C00(ctx, base);
loc_8230C390:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// stb r9,1885(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1885, ctx.r9.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8230C3AC:
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

PPC_WEAK_FUNC(sub_8230C310) {
	__imp__sub_8230C310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C3C4) {
	__imp__sub_8230C3C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230C3C8) {
	__imp__sub_8230C3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C3CC) {
	__imp__sub_8230C3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C3D0) {
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
	// bl 0x8230bd88
	ctx.lr = 0x8230C3F0;
	sub_8230BD88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235a898
	ctx.lr = 0x8230C3FC;
	sub_8235A898(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8230c420
	if (!ctx.cr6.eq) goto loc_8230C420;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 * 104;
	// addi r11,r11,6936
	ctx.r11.s64 = ctx.r11.s64 + 6936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// ldx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8235a898
	ctx.lr = 0x8230C420;
	sub_8235A898(ctx, base);
loc_8230C420:
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

PPC_WEAK_FUNC(sub_8230C3D0) {
	__imp__sub_8230C3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8230C440;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r26,r3,104
	ctx.r26.s64 = ctx.r3.s64 * 104;
	// addi r27,r11,6936
	ctx.r27.s64 = ctx.r11.s64 + 6936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230c480
	if (!ctx.cr6.eq) goto loc_8230C480;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8520
	ctx.r4.s64 = ctx.r11.s64 + 8520;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x8230C478;
	sub_82280C30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8230C480:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8230b040
	ctx.lr = 0x8230C488;
	sub_8230B040(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,7376
	ctx.r30.s64 = ctx.r11.s64 + 7376;
loc_8230C498:
	// addi r11,r30,1412
	ctx.r11.s64 = ctx.r30.s64 + 1412;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230c4b8
	if (ctx.cr6.eq) goto loc_8230C4B8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8230c498
	if (ctx.cr6.lt) goto loc_8230C498;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8230C4B8:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,8824
	ctx.r10.s64 = ctx.r10.s64 + 8824;
	// addi r8,r30,1412
	ctx.r8.s64 = ctx.r30.s64 + 1412;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stbx r4,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822805e8
	ctx.lr = 0x8230C4F4;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230C4F8;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230C508;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8230C510;
	sub_822807C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b0c0
	ctx.lr = 0x8230C520;
	sub_8236B0C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c560
	if (ctx.cr6.eq) goto loc_8230C560;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8230c560
	if (ctx.cr6.eq) goto loc_8230C560;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8230c550
	if (!ctx.cr6.eq) goto loc_8230C550;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,8464
	ctx.r4.s64 = ctx.r11.s64 + 8464;
	// bl 0x82280b08
	ctx.lr = 0x8230C550;
	sub_82280B08(ctx, base);
loc_8230C550:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8230C55C;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230C560;
	sub_822805F0(ctx, base);
loc_8230C560:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230C438) {
	__imp__sub_8230C438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C568) {
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
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8230c5c8
	if (ctx.cr6.eq) goto loc_8230C5C8;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,6927(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6927, ctx.r11.u8);
	// bl 0x8236b650
	ctx.lr = 0x8230C5A0;
	sub_8236B650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b610
	ctx.lr = 0x8230C5AC;
	sub_8236B610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c5c8
	if (ctx.cr6.eq) goto loc_8230C5C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,8608
	ctx.r4.s64 = ctx.r11.s64 + 8608;
	// bl 0x82280b08
	ctx.lr = 0x8230C5C8;
	sub_82280B08(ctx, base);
loc_8230C5C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230C568) {
	__imp__sub_8230C568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C5D8) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8230c634
	if (!ctx.cr6.gt) goto loc_8230C634;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82370010
	ctx.lr = 0x8230C608;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c624
	if (!ctx.cr6.eq) goto loc_8230C624;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230c628
	if (!ctx.cr6.eq) goto loc_8230C628;
loc_8230C624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230C628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c654
	if (ctx.cr6.eq) goto loc_8230C654;
loc_8230C634:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,6924(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6924, ctx.r11.u8);
	// bl 0x8236b650
	ctx.lr = 0x8230C648;
	sub_8236B650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b610
	ctx.lr = 0x8230C654;
	sub_8236B610(ctx, base);
loc_8230C654:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230C5D8) {
	__imp__sub_8230C5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C664) {
	__imp__sub_8230C664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C668) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8230c6b8
	if (ctx.cr6.eq) goto loc_8230C6B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7720
	ctx.r4.s64 = ctx.r11.s64 + 7720;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C6A0;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C6B8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82370010
	ctx.lr = 0x8230C6C4;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c6e0
	if (!ctx.cr6.eq) goto loc_8230C6E0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230c6e4
	if (!ctx.cr6.eq) goto loc_8230C6E4;
loc_8230C6E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230C6E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c718
	if (ctx.cr6.eq) goto loc_8230C718;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,8804
	ctx.r4.s64 = ctx.r11.s64 + 8804;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C700;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C718:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// bl 0x8236b1f0
	ctx.lr = 0x8230C724;
	sub_8236B1F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1245
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1245, ctx.xer);
	// bne cr6,0x8230c758
	if (!ctx.cr6.eq) goto loc_8230C758;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7720
	ctx.r4.s64 = ctx.r11.s64 + 7720;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C740;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C758:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8230c778
	if (ctx.cr6.eq) goto loc_8230C778;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r10,8728
	ctx.r4.s64 = ctx.r10.s64 + 8728;
	// bl 0x82280b08
	ctx.lr = 0x8230C778;
	sub_82280B08(ctx, base);
loc_8230C778:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-29342(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29342);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230c7b0
	if (ctx.cr6.eq) goto loc_8230C7B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8712
	ctx.r4.s64 = ctx.r11.s64 + 8712;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C798;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C7B0:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-29344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230c7e8
	if (ctx.cr6.eq) goto loc_8230C7E8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8692
	ctx.r4.s64 = ctx.r11.s64 + 8692;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C7D0;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C7E8:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-16689(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -16689);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230c820
	if (ctx.cr6.eq) goto loc_8230C820;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8676
	ctx.r4.s64 = ctx.r11.s64 + 8676;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C808;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C820:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230c854
	if (!ctx.cr6.eq) goto loc_8230C854;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8652
	ctx.r4.s64 = ctx.r11.s64 + 8652;
	// bl 0x8230b2e0
	ctx.lr = 0x8230C83C;
	sub_8230B2E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8230C854:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_8230C668) {
	__imp__sub_8230C668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C86C) {
	__imp__sub_8230C86C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230C878;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,6936
	ctx.r29.s64 = ctx.r11.s64 + 6936;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8230C894:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8230c930
	if (!ctx.cr6.eq) goto loc_8230C930;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370010
	ctx.lr = 0x8230C8B0;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c8cc
	if (!ctx.cr6.eq) goto loc_8230C8CC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230c8d0
	if (!ctx.cr6.eq) goto loc_8230C8D0;
loc_8230C8CC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8230C8D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c930
	if (!ctx.cr6.eq) goto loc_8230C930;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1f0
	ctx.lr = 0x8230C8F4;
	sub_8236B1F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c950
	if (!ctx.cr6.eq) goto loc_8230C950;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230c930
	if (!ctx.cr6.eq) goto loc_8230C930;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1f0
	ctx.lr = 0x8230C918;
	sub_8236B1F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c950
	if (!ctx.cr6.eq) goto loc_8230C950;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230c950
	if (ctx.cr6.eq) goto loc_8230C950;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8230C930:
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// addi r11,r29,416
	ctx.r11.s64 = ctx.r29.s64 + 416;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230c894
	if (ctx.cr6.lt) goto loc_8230C894;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230C950:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230C870) {
	__imp__sub_8230C870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230C95C) {
	__imp__sub_8230C95C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230C960) {
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370010
	ctx.lr = 0x8230C980;
	sub_82370010(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c9a0
	if (!ctx.cr6.eq) goto loc_8230C9A0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230c9a4
	if (!ctx.cr6.eq) goto loc_8230C9A4;
loc_8230C9A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8230C9A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c9c8
	if (ctx.cr6.eq) goto loc_8230C9C8;
	// bl 0x8230c870
	ctx.lr = 0x8230C9B4;
	sub_8230C870(ctx, base);
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
loc_8230C9C8:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1f0
	ctx.lr = 0x8230C9E0;
	sub_8236B1F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ca00
	if (ctx.cr6.eq) goto loc_8230CA00;
loc_8230C9E8:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8230CA00:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230ca34
	if (!ctx.cr6.eq) goto loc_8230CA34;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1f0
	ctx.lr = 0x8230CA1C;
	sub_8236B1F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c9e8
	if (!ctx.cr6.eq) goto loc_8230C9E8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ca38
	if (ctx.cr6.eq) goto loc_8230CA38;
loc_8230CA34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230CA38:
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

PPC_WEAK_FUNC(sub_8230C960) {
	__imp__sub_8230C960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230CA4C) {
	__imp__sub_8230CA4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230CA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8230CA58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82141280
	ctx.lr = 0x8230CA64;
	sub_82141280(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-29342(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29342);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230caa4
	if (ctx.cr6.eq) goto loc_8230CAA4;
	// bl 0x82280f20
	ctx.lr = 0x8230CA78;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,8864
	ctx.r4.s64 = ctx.r11.s64 + 8864;
	// beq cr6,0x8230ca98
	if (ctx.cr6.eq) goto loc_8230CA98;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230CA94;
	sub_82280B08(ctx, base);
	// b 0x8230cae0
	goto loc_8230CAE0;
loc_8230CA98:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230CAA0;
	sub_822830E8(ctx, base);
	// b 0x8230cae0
	goto loc_8230CAE0;
loc_8230CAA4:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-29344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230cac0
	if (ctx.cr6.eq) goto loc_8230CAC0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,8848
	ctx.r4.s64 = ctx.r11.s64 + 8848;
	// b 0x8230cad8
	goto loc_8230CAD8;
loc_8230CAC0:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-16689(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -16689);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230cae0
	if (ctx.cr6.eq) goto loc_8230CAE0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
loc_8230CAD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230ab38
	ctx.lr = 0x8230CAE0;
	sub_8230AB38(ctx, base);
loc_8230CAE0:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r27,r10,11336
	ctx.r27.s64 = ctx.r10.s64 + 11336;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,908(r27)
	PPC_STORE_U32(ctx.r27.u32 + 908, ctx.r11.u32);
	// bl 0x823f1114
	ctx.lr = 0x8230CAFC;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,6920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230cbb0
	if (ctx.cr6.eq) goto loc_8230CBB0;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r28,104
	ctx.r10.s64 = ctx.r28.s64 * 104;
	// addi r9,r11,6936
	ctx.r9.s64 = ctx.r11.s64 + 6936;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8230cbb0
	if (!ctx.cr6.eq) goto loc_8230CBB0;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r29,r11,-30024
	ctx.r29.s64 = ctx.r11.s64 + -30024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// stw r28,-16768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16768, ctx.r28.u32);
	// stw r28,-16764(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16764, ctx.r28.u32);
loc_8230CB48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cb60
	if (ctx.cr6.eq) goto loc_8230CB60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82133d20
	ctx.lr = 0x8230CB60;
	sub_82133D20(ctx, base);
loc_8230CB60:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230cb48
	if (ctx.cr6.lt) goto loc_8230CB48;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
loc_8230CB80:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cb98
	if (ctx.cr6.eq) goto loc_8230CB98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4c00
	ctx.lr = 0x8230CB98;
	sub_822C4C00(ctx, base);
loc_8230CB98:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8230cb80
	if (ctx.cr6.lt) goto loc_8230CB80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,920
	ctx.r3.s64 = ctx.r27.s64 + 920;
	// bl 0x8230b4e8
	ctx.lr = 0x8230CBB0;
	sub_8230B4E8(ctx, base);
loc_8230CBB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230CA50) {
	__imp__sub_8230CA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r10,r11,6936
	ctx.r10.s64 = ctx.r11.s64 + 6936;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8230CBC4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8230cbe8
	if (ctx.cr6.gt) goto loc_8230CBE8;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// addi r9,r10,416
	ctx.r9.s64 = ctx.r10.s64 + 416;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230cbc4
	if (ctx.cr6.lt) goto loc_8230CBC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8230CBE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230CBB8) {
	__imp__sub_8230CBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230CBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8230CBF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r22,r11,6936
	ctx.r22.s64 = ctx.r11.s64 + 6936;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r30,r22,40
	ctx.r30.s64 = ctx.r22.s64 + 40;
	// addi r28,r11,6924
	ctx.r28.s64 = ctx.r11.s64 + 6924;
	// addi r23,r10,-360
	ctx.r23.s64 = ctx.r10.s64 + -360;
	// addi r24,r9,9064
	ctx.r24.s64 = ctx.r9.s64 + 9064;
	// addi r25,r8,9012
	ctx.r25.s64 = ctx.r8.s64 + 9012;
	// addi r26,r7,8904
	ctx.r26.s64 = ctx.r7.s64 + 8904;
loc_8230CC44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1e0
	ctx.lr = 0x8230CC4C;
	sub_8236B1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370010
	ctx.lr = 0x8230CC60;
	sub_82370010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230cca4
	if (!ctx.cr6.eq) goto loc_8230CCA4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b418
	ctx.lr = 0x8230CC74;
	sub_8236B418(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1d8
	ctx.lr = 0x8230CC84;
	sub_8236B1D8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230ccb4
	if (ctx.cr6.eq) goto loc_8230CCB4;
	// lwz r11,-40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ce38
	if (ctx.cr6.eq) goto loc_8230CE38;
	// b 0x8230ce2c
	goto loc_8230CE2C;
loc_8230CCA4:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stb r21,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r21.u8);
	// std r21,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r21.u64);
	// b 0x8230ccb8
	goto loc_8230CCB8;
loc_8230CCB4:
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_8230CCB8:
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ccfc
	if (ctx.cr6.eq) goto loc_8230CCFC;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// andc r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r20,r10,1,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// bl 0x82141280
	ctx.lr = 0x8230CCD8;
	sub_82141280(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82141400
	ctx.lr = 0x8230CCE0;
	sub_82141400(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8230ccf0
	if (ctx.cr6.eq) goto loc_8230CCF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b948
	ctx.lr = 0x8230CCF0;
	sub_8213B948(ctx, base);
loc_8230CCF0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82142948
	ctx.lr = 0x8230CCF8;
	sub_82142948(ctx, base);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_8230CCFC:
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// beq cr6,0x8230cd84
	if (ctx.cr6.eq) goto loc_8230CD84;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x8230cd84
	if (ctx.cr6.eq) goto loc_8230CD84;
	// cmpld cr6,r6,r5
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x8230cd84
	if (ctx.cr6.eq) goto loc_8230CD84;
	// addi r7,r30,-36
	ctx.r7.s64 = ctx.r30.s64 + -36;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8230CD24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8230cd48
	if (ctx.cr6.eq) goto loc_8230CD48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230cd24
	if (ctx.cr6.eq) goto loc_8230CD24;
loc_8230CD48:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230cd80
	if (ctx.cr6.eq) goto loc_8230CD80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230CD64;
	sub_82280900(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b720
	ctx.lr = 0x8230CD70;
	sub_8230B720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8230cd84
	goto loc_8230CD84;
loc_8230CD80:
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
loc_8230CD84:
	// lwz r11,-40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -40);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8230ce38
	if (ctx.cr6.eq) goto loc_8230CE38;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x8230cdc4
	if (ctx.cr6.lt) goto loc_8230CDC4;
	// beq cr6,0x8230cdb4
	if (ctx.cr6.eq) goto loc_8230CDB4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x8230cdf0
	if (!ctx.cr6.lt) goto loc_8230CDF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230bc00
	ctx.lr = 0x8230CDB0;
	sub_8230BC00(ctx, base);
	// b 0x8230cde4
	goto loc_8230CDE4;
loc_8230CDB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230baa8
	ctx.lr = 0x8230CDC0;
	sub_8230BAA8(ctx, base);
	// b 0x8230cde4
	goto loc_8230CDE4;
loc_8230CDC4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230CDD8;
	sub_82280900(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b720
	ctx.lr = 0x8230CDE4;
	sub_8230B720(ctx, base);
loc_8230CDE4:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8230CDF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213af90
	ctx.lr = 0x8230CDF8;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ce38
	if (ctx.cr6.eq) goto loc_8230CE38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213afa8
	ctx.lr = 0x8230CE0C;
	sub_8213AFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ce38
	if (ctx.cr6.eq) goto loc_8230CE38;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230CE2C;
	sub_82280900(ctx, base);
loc_8230CE2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b720
	ctx.lr = 0x8230CE38;
	sub_8230B720(ctx, base);
loc_8230CE38:
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// addi r11,r22,456
	ctx.r11.s64 = ctx.r22.s64 + 456;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230cc44
	if (ctx.cr6.lt) goto loc_8230CC44;
	// lbz r11,1886(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1886);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ce5c
	if (ctx.cr6.eq) goto loc_8230CE5C;
	// bl 0x82141eb8
	ctx.lr = 0x8230CE5C;
	sub_82141EB8(ctx, base);
loc_8230CE5C:
	// lbz r11,1885(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1885);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230cecc
	if (ctx.cr6.eq) goto loc_8230CECC;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-16768(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370010
	ctx.lr = 0x8230CE80;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ce9c
	if (!ctx.cr6.eq) goto loc_8230CE9C;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230cea0
	if (!ctx.cr6.eq) goto loc_8230CEA0;
loc_8230CE9C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8230CEA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230cebc
	if (!ctx.cr6.eq) goto loc_8230CEBC;
	// mulli r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 * 104;
	// lwzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8230cecc
	if (ctx.cr6.eq) goto loc_8230CECC;
loc_8230CEBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r11,8876
	ctx.r30.s64 = ctx.r11.s64 + 8876;
	// b 0x8230ced0
	goto loc_8230CED0;
loc_8230CECC:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8230CED0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8230CED4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8230cfe4
	if (ctx.cr6.gt) goto loc_8230CFE4;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// addi r10,r22,416
	ctx.r10.s64 = ctx.r22.s64 + 416;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230ced4
	if (ctx.cr6.lt) goto loc_8230CED4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8230CEF4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,11636
	ctx.r31.s64 = ctx.r11.s64 + 11636;
	// beq cr6,0x8230cf54
	if (ctx.cr6.eq) goto loc_8230CF54;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// bl 0x822e1f18
	ctx.lr = 0x8230CF18;
	sub_822E1F18(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stb r21,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r21.u8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stb r21,1885(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1885, ctx.r21.u8);
	// addi r8,r10,28832
	ctx.r8.s64 = ctx.r10.s64 + 28832;
	// stb r21,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r21.u8);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stb r21,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r21.u8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r11,332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cf54
	if (ctx.cr6.eq) goto loc_8230CF54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x8230CF54;
	sub_822E20D0(ctx, base);
loc_8230CF54:
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// stb r21,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r21.u8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stb r21,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r21.u8);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stb r21,1885(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1885, ctx.r21.u8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stb r21,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r21.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8230d01c
	if (ctx.cr6.eq) goto loc_8230D01C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r8,-32021
	ctx.r8.s64 = -2098528256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r3,-14904(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14904);
	// bl 0x822e1f18
	ctx.lr = 0x8230CF9C;
	sub_822E1F18(ctx, base);
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-376(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -376);
	// bl 0x822e1f18
	ctx.lr = 0x8230CFAC;
	sub_822E1F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x8230CFB8;
	sub_822E20D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230cfec
	if (ctx.cr6.eq) goto loc_8230CFEC;
	// bl 0x82280f20
	ctx.lr = 0x8230CFC4;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d004
	if (!ctx.cr6.eq) goto loc_8230D004;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8230CFDC;
	sub_822830E8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8230CFE4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8230cef4
	goto loc_8230CEF4;
loc_8230CFEC:
	// bl 0x82280f20
	ctx.lr = 0x8230CFF0;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-3760
	ctx.r4.s64 = ctx.r11.s64 + -3760;
	// beq cr6,0x8230d014
	if (ctx.cr6.eq) goto loc_8230D014;
loc_8230D004:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8230D00C;
	sub_82280B08(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8230D014:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822830e8
	ctx.lr = 0x8230D01C;
	sub_822830E8(ctx, base);
loc_8230D01C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230CBF0) {
	__imp__sub_8230CBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D024) {
	__imp__sub_8230D024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r9,r11,11336
	ctx.r9.s64 = ctx.r11.s64 + 11336;
	// lwz r11,908(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// ld r9,912(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 912);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,6936
	ctx.r10.s64 = ctx.r11.s64 + 6936;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8230D050:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8230d068
	if (!ctx.cr6.eq) goto loc_8230D068;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x8230d080
	if (ctx.cr6.eq) goto loc_8230D080;
loc_8230D068:
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// addi r8,r10,416
	ctx.r8.s64 = ctx.r10.s64 + 416;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8230d050
	if (ctx.cr6.lt) goto loc_8230D050;
	// blr 
	return;
loc_8230D080:
	// b 0x8230ca50
	sub_8230CA50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230D028) {
	__imp__sub_8230D028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D084) {
	__imp__sub_8230D084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D088) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82372d68
	ctx.lr = 0x8230D0A8;
	sub_82372D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230d158
	if (ctx.cr6.lt) goto loc_8230D158;
	// lis r11,16726
	ctx.r11.s64 = 1096155136;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r9,r11,2071
	ctx.r9.u64 = ctx.r11.u64 | 2071;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230d158
	if (!ctx.cr6.eq) goto loc_8230D158;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8230afc8
	ctx.lr = 0x8230D0CC;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230d158
	if (!ctx.cr6.lt) goto loc_8230D158;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r31,r10,11336
	ctx.r31.s64 = ctx.r10.s64 + 11336;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// std r11,912(r31)
	PPC_STORE_U64(ctx.r31.u32 + 912, ctx.r11.u64);
	// bl 0x823de1f0
	ctx.lr = 0x8230D0F4;
	sub_823DE1F0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// andc r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stb r11,980(r31)
	PPC_STORE_U8(ctx.r31.u32 + 980, ctx.r11.u8);
	// bl 0x823f1114
	ctx.lr = 0x8230D11C;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// bl 0x8230ab98
	ctx.lr = 0x8230D120;
	sub_8230AB98(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8230d150
	if (ctx.cr6.eq) goto loc_8230D150;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d150
	if (!ctx.cr6.eq) goto loc_8230D150;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141280
	ctx.lr = 0x8230D148;
	sub_82141280(ctx, base);
	// bl 0x822c3d30
	ctx.lr = 0x8230D14C;
	sub_822C3D30(ctx, base);
	// b 0x8230d158
	goto loc_8230D158;
loc_8230D150:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ca50
	ctx.lr = 0x8230D158;
	sub_8230CA50(ctx, base);
loc_8230D158:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_8230D088) {
	__imp__sub_8230D088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8230D178;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// bl 0x8228bcc0
	ctx.lr = 0x8230D188;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d598
	if (ctx.cr6.eq) goto loc_8230D598;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82141280
	ctx.lr = 0x8230D19C;
	sub_82141280(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r15,r11,6925
	ctx.r15.s64 = ctx.r11.s64 + 6925;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,7(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 7);
	// bl 0x823f1134
	ctx.lr = 0x8230D1B8;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230d598
	if (ctx.cr6.eq) goto loc_8230D598;
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r29,9568
	ctx.r25.s64 = ctx.r29.s64 + 9568;
	// addi r19,r30,9536
	ctx.r19.s64 = ctx.r30.s64 + 9536;
	// lis r20,-32191
	ctx.r20.s64 = -2109669376;
	// lis r28,-32166
	ctx.r28.s64 = -2108030976;
	// lis r27,-32191
	ctx.r27.s64 = -2109669376;
	// addi r18,r31,9516
	ctx.r18.s64 = ctx.r31.s64 + 9516;
	// addi r30,r3,9392
	ctx.r30.s64 = ctx.r3.s64 + 9392;
	// addi r24,r4,9356
	ctx.r24.s64 = ctx.r4.s64 + 9356;
	// addi r29,r5,9340
	ctx.r29.s64 = ctx.r5.s64 + 9340;
	// addi r23,r6,9332
	ctx.r23.s64 = ctx.r6.s64 + 9332;
	// addi r22,r7,9320
	ctx.r22.s64 = ctx.r7.s64 + 9320;
	// addi r21,r8,9312
	ctx.r21.s64 = ctx.r8.s64 + 9312;
	// addi r26,r9,9268
	ctx.r26.s64 = ctx.r9.s64 + 9268;
	// addi r17,r10,9232
	ctx.r17.s64 = ctx.r10.s64 + 9232;
	// addi r16,r11,9200
	ctx.r16.s64 = ctx.r11.s64 + 9200;
loc_8230D22C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8230d318
	if (ctx.cr6.gt) goto loc_8230D318;
	// beq cr6,0x8230d57c
	if (ctx.cr6.eq) goto loc_8230D57C;
	// addi r10,r11,-9
	ctx.r10.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x8230d564
	if (ctx.cr6.gt) goto loc_8230D564;
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11672
	ctx.r12.s64 = ctx.r12.s64 + -11672;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8230D298;
	case 1:
		goto loc_8230D290;
	case 2:
		goto loc_8230D310;
	case 3:
		goto loc_8230D564;
	case 4:
		goto loc_8230D564;
	case 5:
		goto loc_8230D57C;
	case 6:
		goto loc_8230D564;
	case 7:
		goto loc_8230D564;
	case 8:
		goto loc_8230D57C;
	case 9:
		goto loc_8230D2A8;
	default:
		return;
	}
	// lwz r17,-11624(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11624);
	// lwz r17,-11632(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11632);
	// lwz r17,-11504(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11504);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10884(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10884);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10884(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10884);
	// lwz r17,-11608(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11608);
loc_8230D290:
	// bl 0x8230cbf0
	ctx.lr = 0x8230D294;
	sub_8230CBF0(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D298:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8230c310
	ctx.lr = 0x8230D2A4;
	sub_8230C310(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D2A8:
	// bl 0x823084f0
	ctx.lr = 0x8230D2AC;
	sub_823084F0(ctx, base);
	// lwz r11,4688(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d57c
	if (ctx.cr6.eq) goto loc_8230D57C;
	// bl 0x82141bb8
	ctx.lr = 0x8230D2BC;
	sub_82141BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d57c
	if (ctx.cr6.eq) goto loc_8230D57C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8230D2CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141198
	ctx.lr = 0x8230D2D4;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d300
	if (ctx.cr6.eq) goto loc_8230D300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307fa8
	ctx.lr = 0x8230D2E8;
	sub_82307FA8(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x8230D2F4;
	sub_82141280(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82141400
	ctx.lr = 0x8230D2FC;
	sub_82141400(ctx, base);
	// lwz r14,260(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
loc_8230D300:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8230d2cc
	if (ctx.cr6.lt) goto loc_8230D2CC;
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D310:
	// bl 0x8230e1f8
	ctx.lr = 0x8230D314;
	sub_8230E1F8(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D318:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8230d508
	if (ctx.cr6.gt) goto loc_8230D508;
	// beq cr6,0x8230d548
	if (ctx.cr6.eq) goto loc_8230D548;
	// addis r10,r11,-512
	ctx.r10.s64 = ctx.r11.s64 + -33554432;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x8230d564
	if (ctx.cr6.gt) goto loc_8230D564;
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11436
	ctx.r12.s64 = ctx.r12.s64 + -11436;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8230D3A4;
	case 1:
		goto loc_8230D4FC;
	case 2:
		goto loc_8230D37C;
	case 3:
		goto loc_8230D564;
	case 4:
		goto loc_8230D564;
	case 5:
		goto loc_8230D564;
	case 6:
		goto loc_8230D57C;
	case 7:
		goto loc_8230D4EC;
	case 8:
		goto loc_8230D57C;
	case 9:
		goto loc_8230D57C;
	default:
		return;
	}
	// lwz r17,-11356(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11356);
	// lwz r17,-11012(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11012);
	// lwz r17,-11396(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11396);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10908(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10908);
	// lwz r17,-10884(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10884);
	// lwz r17,-11028(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11028);
	// lwz r17,-10884(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10884);
	// lwz r17,-10884(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10884);
loc_8230D37C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,16
	ctx.r3.s64 = 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d398
	if (ctx.cr6.eq) goto loc_8230D398;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82280900
	ctx.lr = 0x8230D394;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D398:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82280900
	ctx.lr = 0x8230D3A0;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D3A4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230D3B0;
	sub_82280900(ctx, base);
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r10,4099
	ctx.r9.u64 = ctx.r10.u64 | 4099;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230d490
	if (ctx.cr6.gt) goto loc_8230D490;
	// ori r9,r10,4097
	ctx.r9.u64 = ctx.r10.u64 | 4097;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8230d484
	if (!ctx.cr6.lt) goto loc_8230D484;
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// ori r9,r10,4336
	ctx.r9.u64 = ctx.r10.u64 | 4336;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230d3f8
	if (ctx.cr6.eq) goto loc_8230D3F8;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230d4ac
	if (ctx.cr6.eq) goto loc_8230D4AC;
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D3F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stb r11,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r11.u8);
	// bl 0x8230c010
	ctx.lr = 0x8230D408;
	sub_8230C010(ctx, base);
	// bl 0x823738a8
	ctx.lr = 0x8230D40C;
	sub_823738A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,22440(r27)
	PPC_STORE_U32(ctx.r27.u32 + 22440, ctx.r3.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8230d430
	if (!ctx.cr6.eq) goto loc_8230D430;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8230D42C;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D430:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8230d44c
	if (!ctx.cr6.eq) goto loc_8230D44C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8230D448;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D44C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8230d468
	if (!ctx.cr6.eq) goto loc_8230D468;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8230D464;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D468:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8230D470;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8230D480;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D484:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r11.u8);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D490:
	// ori r9,r10,4100
	ctx.r9.u64 = ctx.r10.u64 | 4100;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230d57c
	if (ctx.cr6.lt) goto loc_8230D57C;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r9,r10,4102
	ctx.r9.u64 = ctx.r10.u64 | 4102;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230d57c
	if (ctx.cr6.gt) goto loc_8230D57C;
loc_8230D4AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r10.u8);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r6,r11,7,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3F;
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280a68
	ctx.lr = 0x8230D4D0;
	sub_82280A68(ctx, base);
	// lbz r11,29088(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d57c
	if (ctx.cr6.eq) goto loc_8230D57C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230ab38
	ctx.lr = 0x8230D4E8;
	sub_8230AB38(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D4EC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230D4F8;
	sub_82280900(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D4FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8230d088
	ctx.lr = 0x8230D504;
	sub_8230D088(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D508:
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230d554
	if (ctx.cr6.gt) goto loc_8230D554;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8230d57c
	if (!ctx.cr6.lt) goto loc_8230D57C;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230d564
	if (ctx.cr6.lt) goto loc_8230D564;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230d564
	if (ctx.cr6.gt) goto loc_8230D564;
loc_8230D548:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82307548
	ctx.lr = 0x8230D550;
	sub_82307548(ctx, base);
	// b 0x8230d57c
	goto loc_8230D57C;
loc_8230D554:
	// lis r10,3588
	ctx.r10.s64 = 235143168;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230d57c
	if (ctx.cr6.eq) goto loc_8230D57C;
loc_8230D564:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r6,r11,7,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3F;
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230D57C;
	sub_82280900(ctx, base);
loc_8230D57C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,7(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 7);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f1134
	ctx.lr = 0x8230D590;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230d22c
	if (!ctx.cr6.eq) goto loc_8230D22C;
loc_8230D598:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230D170) {
	__imp__sub_8230D170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230D5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8230d170
	ctx.lr = 0x8230D5B4;
	sub_8230D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 * 104;
	// bl 0x8230c960
	ctx.lr = 0x8230D5C0;
	sub_8230C960(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r29,r11,6936
	ctx.r29.s64 = ctx.r11.s64 + 6936;
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230d66c
	if (!ctx.cr6.eq) goto loc_8230D66C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370010
	ctx.lr = 0x8230D5EC;
	sub_82370010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d608
	if (!ctx.cr6.eq) goto loc_8230D608;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d60c
	if (!ctx.cr6.eq) goto loc_8230D60C;
loc_8230D608:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230D60C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d66c
	if (!ctx.cr6.eq) goto loc_8230D66C;
	// bl 0x82360028
	ctx.lr = 0x8230D61C;
	sub_82360028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d630
	if (!ctx.cr6.eq) goto loc_8230D630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360d68
	ctx.lr = 0x8230D630;
	sub_82360D68(ctx, base);
loc_8230D630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ff88
	ctx.lr = 0x8230D638;
	sub_8235FF88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d664
	if (!ctx.cr6.eq) goto loc_8230D664;
	// bl 0x82360028
	ctx.lr = 0x8230D648;
	sub_82360028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d664
	if (ctx.cr6.eq) goto loc_8230D664;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823615d0
	ctx.lr = 0x8230D664;
	sub_823615D0(ctx, base);
loc_8230D664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823074c0
	ctx.lr = 0x8230D66C;
	sub_823074C0(ctx, base);
loc_8230D66C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230D5A0) {
	__imp__sub_8230D5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D674) {
	__imp__sub_8230D674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230D680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8230D690;
	sub_82141340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230c0a0
	ctx.lr = 0x8230D698;
	sub_8230C0A0(ctx, base);
	// bl 0x8235d0a8
	ctx.lr = 0x8230D69C;
	sub_8235D0A8(ctx, base);
	// bl 0x823614c8
	ctx.lr = 0x8230D6A0;
	sub_823614C8(ctx, base);
	// bl 0x8230a358
	ctx.lr = 0x8230D6A4;
	sub_8230A358(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8230D6A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x8230D6B0;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d6cc
	if (ctx.cr6.eq) goto loc_8230D6CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x8230D6C4;
	sub_82141340(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8230d5a0
	ctx.lr = 0x8230D6CC;
	sub_8230D5A0(ctx, base);
loc_8230D6CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8230d6a8
	if (ctx.cr6.lt) goto loc_8230D6A8;
	// bl 0x82141588
	ctx.lr = 0x8230D6DC;
	sub_82141588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d6f0
	if (ctx.cr6.eq) goto loc_8230D6F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230d170
	ctx.lr = 0x8230D6F0;
	sub_8230D170(ctx, base);
loc_8230D6F0:
	// bl 0x823102b0
	ctx.lr = 0x8230D6F4;
	sub_823102B0(ctx, base);
	// bl 0x82307398
	ctx.lr = 0x8230D6F8;
	sub_82307398(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213ff70
	ctx.lr = 0x8230D700;
	sub_8213FF70(ctx, base);
	// bl 0x8235cd40
	ctx.lr = 0x8230D704;
	sub_8235CD40(ctx, base);
	// bl 0x8213af08
	ctx.lr = 0x8230D708;
	sub_8213AF08(ctx, base);
	// bl 0x8230f0a0
	ctx.lr = 0x8230D70C;
	sub_8230F0A0(ctx, base);
	// bl 0x8230d028
	ctx.lr = 0x8230D710;
	sub_8230D028(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230D678) {
	__imp__sub_8230D678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230D718) {
	__imp__sub_8230D718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D71C) {
	__imp__sub_8230D71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82282b58
	ctx.lr = 0x8230D754;
	sub_82282B58(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,1160
	ctx.r10.s64 = ctx.r1.s64 + 1160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x8230D774;
	sub_823E06D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stb r9,1119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1119, ctx.r9.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r8,9700
	ctx.r4.s64 = ctx.r8.s64 + 9700;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8230D790;
	sub_82280B08(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d7bc
	if (ctx.cr6.eq) goto loc_8230D7BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x8230D7B8;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// b 0x8230d818
	goto loc_8230D818;
loc_8230D7BC:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,15536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230d800
	if (!ctx.cr6.eq) goto loc_8230D800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,9668
	ctx.r4.s64 = ctx.r11.s64 + 9668;
	// bl 0x82280900
	ctx.lr = 0x8230D7DC;
	sub_82280900(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8230D7F0;
	sub_82280900(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r9,9636
	ctx.r4.s64 = ctx.r9.s64 + 9636;
	// bl 0x82280900
	ctx.lr = 0x8230D800;
	sub_82280900(ctx, base);
loc_8230D800:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,9632
	ctx.r5.s64 = ctx.r11.s64 + 9632;
	// li r4,900
	ctx.r4.s64 = 900;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e8368
	ctx.lr = 0x8230D818;
	sub_822E8368(ctx, base);
loc_8230D818:
	// bl 0x8228beb8
	ctx.lr = 0x8230D81C;
	sub_8228BEB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x8230D828;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,9620
	ctx.r3.s64 = ctx.r11.s64 + 9620;
	// bl 0x8236b030
	ctx.lr = 0x8230D838;
	sub_8236B030(ctx, base);
}

PPC_WEAK_FUNC(sub_8230D720) {
	__imp__sub_8230D720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230D838) {
	__imp__sub_8230D838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D83C) {
	__imp__sub_8230D83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D840) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230D840) {
	__imp__sub_8230D840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230D848) {
	__imp__sub_8230D848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D84C) {
	__imp__sub_8230D84C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D850) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230D850) {
	__imp__sub_8230D850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8230D860;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31835
	ctx.r29.s64 = -2086338560;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r30,-31835
	ctx.r30.s64 = -2086338560;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r9,r11,12336
	ctx.r9.s64 = ctx.r11.s64 + 12336;
	// lwz r11,10308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r10,23680(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23680);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// blt cr6,0x8230d8d0
	if (ctx.cr6.lt) goto loc_8230D8D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,9728
	ctx.r4.s64 = ctx.r11.s64 + 9728;
	// bl 0x82280900
	ctx.lr = 0x8230D8C0;
	sub_82280900(ctx, base);
	// lwz r10,23680(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23680);
	// lwz r11,10308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23680, ctx.r10.u32);
loc_8230D8D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,10308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10308, ctx.r11.u32);
	// bne cr6,0x8230d8e8
	if (!ctx.cr6.eq) goto loc_8230D8E8;
	// bl 0x82310110
	ctx.lr = 0x8230D8E4;
	sub_82310110(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8230D8E8:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230D858) {
	__imp__sub_8230D858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D90C) {
	__imp__sub_8230D90C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8230D918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31835
	ctx.r29.s64 = -2086338560;
	// lis r31,-31835
	ctx.r31.s64 = -2086338560;
	// lwz r9,10308(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// lwz r11,23680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23680);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8230d970
	if (!ctx.cr6.gt) goto loc_8230D970;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// addi r30,r10,12336
	ctx.r30.s64 = ctx.r10.s64 + 12336;
loc_8230D93C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stw r11,23680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23680, ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230d968
	if (ctx.cr6.eq) goto loc_8230D968;
	// bl 0x822814d8
	ctx.lr = 0x8230D960;
	sub_822814D8(ctx, base);
	// lwz r9,10308(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// lwz r11,23680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23680);
loc_8230D968:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8230d93c
	if (ctx.cr6.gt) goto loc_8230D93C;
loc_8230D970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230D910) {
	__imp__sub_8230D910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230D978) {
	__imp__sub_8230D978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230D97C) {
	__imp__sub_8230D97C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230D980) {
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
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,23680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23680);
	// lwz r9,10308(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10308);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8230d9ec
	if (!ctx.cr6.gt) goto loc_8230D9EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r11,23680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23680, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// addi r10,r9,12336
	ctx.r10.s64 = ctx.r9.s64 + 12336;
	// mulli r9,r7,28
	ctx.r9.s64 = ctx.r7.s64 * 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8230D9DC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8230d9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230D9DC;
	// b 0x8230da28
	goto loc_8230DA28;
loc_8230D9EC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x8230DA08;
	sub_82310110(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8230DA1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8230da1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DA1C;
loc_8230DA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_8230D980) {
	__imp__sub_8230D980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DA40) {
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
	ctx.lr = 0x8230DA50;
	sub_82308A58(ctx, base);
	// bl 0x82308a20
	ctx.lr = 0x8230DA54;
	sub_82308A20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DA40) {
	__imp__sub_8230DA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DA64) {
	__imp__sub_8230DA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DA68) {
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
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r5,r11,23688
	ctx.r5.s64 = ctx.r11.s64 + 23688;
	// addi r3,r9,9752
	ctx.r3.s64 = ctx.r9.s64 + 9752;
	// addi r4,r10,-9664
	ctx.r4.s64 = ctx.r10.s64 + -9664;
	// bl 0x8227da10
	ctx.lr = 0x8230DA90;
	sub_8227DA10(ctx, base);
	// bl 0x82308a20
	ctx.lr = 0x8230DA94;
	sub_82308A20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DA68) {
	__imp__sub_8230DA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230DAA4) {
	__imp__sub_8230DAA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r11,r11,23684
	ctx.r11.s64 = ctx.r11.s64 + 23684;
	// lbz r10,-4176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// stb r10,-4176(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4176, ctx.r10.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x822e4ec0
	sub_822E4EC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8230DAA8) {
	__imp__sub_8230DAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230DAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230DAD0) {
	__imp__sub_8230DAD0(ctx, base);
}

