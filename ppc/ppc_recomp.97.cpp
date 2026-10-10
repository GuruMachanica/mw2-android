#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8239E910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8239E918;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,4608
	ctx.r27.s64 = ctx.r11.s64 + 4608;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8239ea04
	if (!ctx.cr6.gt) goto loc_8239EA04;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// addi r28,r11,-11984
	ctx.r28.s64 = ctx.r11.s64 + -11984;
loc_8239E94C:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stb r10,-12(r31)
	PPC_STORE_U8(ctx.r31.u32 + -12, ctx.r10.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,-11(r31)
	PPC_STORE_U8(ctx.r31.u32 + -11, ctx.r9.u8);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,32(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f3,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e9e4
	if (ctx.cr6.eq) goto loc_8239E9E4;
	// bl 0x823c39b0
	ctx.lr = 0x8239E9DC;
	sub_823C39B0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x8239e9e8
	goto loc_8239E9E8;
loc_8239E9E4:
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
loc_8239E9E8:
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239e94c
	if (ctx.cr6.lt) goto loc_8239E94C;
loc_8239EA04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239E910) {
	__imp__sub_8239E910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EA0C) {
	__imp__sub_8239EA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8239EA18;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239ea5c
	if (ctx.cr6.eq) goto loc_8239EA5C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r4,22(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239EA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8239EA5C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239EA6C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239ea6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239EA6C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bge cr6,0x8239eb80
	if (!ctx.cr6.lt) goto loc_8239EB80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 * 68;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,-11984
	ctx.r26.s64 = ctx.r11.s64 + -11984;
	// addi r25,r10,11264
	ctx.r25.s64 = ctx.r10.s64 + 11264;
loc_8239EAD8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239eb14
	if (!ctx.cr6.eq) goto loc_8239EB14;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8239eb14
	if (ctx.cr6.lt) goto loc_8239EB14;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9ce8
	ctx.lr = 0x8239EB10;
	sub_822D9CE8(ctx, base);
	// b 0x8239eb28
	goto loc_8239EB28;
loc_8239EB14:
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9be8
	ctx.lr = 0x8239EB28;
	sub_822D9BE8(ctx, base);
loc_8239EB28:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239eb68
	if (!ctx.cr6.eq) goto loc_8239EB68;
	// lwz r11,540(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 540);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82386040
	ctx.lr = 0x8239EB48;
	sub_82386040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239eb68
	if (!ctx.cr6.eq) goto loc_8239EB68;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8239EB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239EB68:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239ead8
	if (ctx.cr6.lt) goto loc_8239EAD8;
loc_8239EB80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239EA10) {
	__imp__sub_8239EA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EB8C) {
	__imp__sub_8239EB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EB90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239eba4
	if (!ctx.cr6.eq) goto loc_8239EBA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8239EBA4:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,-30164
	ctx.r9.s64 = ctx.r10.s64 + -30164;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EB90) {
	__imp__sub_8239EB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EBBC) {
	__imp__sub_8239EBBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239ebd4
	if (!ctx.cr6.eq) goto loc_8239EBD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8239EBD4:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,-30164
	ctx.r9.s64 = ctx.r10.s64 + -30164;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EBC0) {
	__imp__sub_8239EBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EBEC) {
	__imp__sub_8239EBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EBF0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// sthx r5,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u16);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EBF0) {
	__imp__sub_8239EBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EC2C) {
	__imp__sub_8239EC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
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
	// li r9,0
	ctx.r9.s64 = 0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// bgt cr6,0x8239edac
	if (ctx.cr6.gt) goto loc_8239EDAC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239ed58
	if (ctx.cr6.eq) goto loc_8239ED58;
	// bdz 0x8239ed20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239ED20;
	// bdz 0x8239edac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239EDAC;
	// bdz 0x8239ed88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239ED88;
	// bdnz 0x8239ece8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239ECE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f12,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
loc_8239ECE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f13,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
loc_8239ED20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
loc_8239ED58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
loc_8239ED88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// b 0x8239edcc
	goto loc_8239EDCC;
loc_8239EDAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_8239EDCC:
	// stfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EC30) {
	__imp__sub_8239EC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EDE4) {
	__imp__sub_8239EDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EDE8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-29944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8239ee20
	if (ctx.cr6.gt) goto loc_8239EE20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-29948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8239EE20:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,-31544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31544);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,-29952(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29952);
	ctx.f0.f64 = double(temp.f32);
	// lfd f2,29376(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 29376);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823e1e88
	ctx.lr = 0x8239EE44;
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

PPC_WEAK_FUNC(sub_8239EDE8) {
	__imp__sub_8239EDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EE58) {
	__imp__sub_8239EE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EE5C) {
	__imp__sub_8239EE5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EE60) {
	__imp__sub_8239EE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EE64) {
	__imp__sub_8239EE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EE68) {
	__imp__sub_8239EE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EE6C) {
	__imp__sub_8239EE6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE70) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239EE70) {
	__imp__sub_8239EE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239EE94) {
	__imp__sub_8239EE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8239EEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// addi r31,r11,12548
	ctx.r31.s64 = ctx.r11.s64 + 12548;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8239eed4
	if (ctx.cr6.lt) goto loc_8239EED4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8239EED4:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r4,6
	ctx.r3.s64 = ctx.r4.s64 + 6;
	// bl 0x823de130
	ctx.lr = 0x8239EF00;
	sub_823DE130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r29,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// sth r28,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// sth r27,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r27.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239EE98) {
	__imp__sub_8239EE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239EF38) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,12548
	ctx.r11.s64 = ctx.r11.s64 + 12548;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8239efbc
	if (ctx.cr0.lt) goto loc_8239EFBC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8239EF64:
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8239efa0
	if (!ctx.cr0.eq) goto loc_8239EFA0;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8239efa0
	if (!ctx.cr0.eq) goto loc_8239EFA0;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// subf. r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239eff4
	if (ctx.cr0.eq) goto loc_8239EFF4;
loc_8239EFA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8239efb0
	if (!ctx.cr6.lt) goto loc_8239EFB0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// b 0x8239efb4
	goto loc_8239EFB4;
loc_8239EFB0:
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
loc_8239EFB4:
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8239ef64
	if (!ctx.cr6.gt) goto loc_8239EF64;
loc_8239EFBC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8239efdc
	if (ctx.cr6.eq) goto loc_8239EFDC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8239ee98
	ctx.lr = 0x8239EFCC;
	sub_8239EE98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239efe0
	if (!ctx.cr6.eq) goto loc_8239EFE0;
loc_8239EFDC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8239EFE0:
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
loc_8239EFF4:
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

PPC_WEAK_FUNC(sub_8239EF38) {
	__imp__sub_8239EF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239F00C) {
	__imp__sub_8239F00C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8239F018;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de028
	ctx.lr = 0x8239F020;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,12548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f234
	if (ctx.cr6.eq) goto loc_8239F234;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13112);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8239f234
	if (!ctx.cr6.gt) goto loc_8239F234;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2428);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8239F074;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r22,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r9.s32 >> 5;
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8239F098;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r21,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r21.s64 = ctx.r8.s32 >> 5;
	// bl 0x823dde20
	ctx.lr = 0x8239F0B8;
	sub_823DDE20(ctx, base);
	// clrldi r7,r22,32
	ctx.r7.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// clrldi r6,r21,32
	ctx.r6.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r20,-1
	ctx.r20.s64 = -1;
	// lfs f30,6044(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6044);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2432(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2432);
	ctx.f31.f64 = double(temp.f32);
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r19,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r19.s64 = ctx.r11.s32 >> 6;
	// clrldi r10,r19,32
	ctx.r10.u64 = ctx.r19.u64 & 0xFFFFFFFF;
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f29,27440(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 27440);
	ctx.f29.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f28,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmsubs f8,f11,f30,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f7,f10,f30,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmsubs f6,f9,f29,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 - ctx.f31.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8239F144:
	// add r28,r20,r19
	ctx.r28.u64 = ctx.r20.u64 + ctx.r19.u64;
	// cmplwi cr6,r28,4096
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4096, ctx.xer);
	// bgt cr6,0x8239f228
	if (ctx.cr6.gt) goto loc_8239F228;
	// neg r27,r26
	ctx.r27.s64 = -ctx.r26.s64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8239f228
	if (ctx.cr6.gt) goto loc_8239F228;
loc_8239F160:
	// add r30,r23,r21
	ctx.r30.u64 = ctx.r23.u64 + ctx.r21.u64;
	// cmplwi cr6,r30,8192
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8192, ctx.xer);
	// bgt cr6,0x8239f21c
	if (ctx.cr6.gt) goto loc_8239F21C;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8239f21c
	if (ctx.cr6.gt) goto loc_8239F21C;
	// subf r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r31,r27,r22
	ctx.r31.u64 = ctx.r27.u64 + ctx.r22.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_8239F180:
	// cmplwi cr6,r31,8192
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8192, ctx.xer);
	// bgt cr6,0x8239f210
	if (ctx.cr6.gt) goto loc_8239F210;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmsubs f3,f6,f30,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f8,f30,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmsubs f4,f7,f29,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 - ctx.f31.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8238fe40
	ctx.lr = 0x8239F1F0;
	sub_8238FE40(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8239f210
	if (!ctx.cr6.eq) goto loc_8239F210;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239ef38
	ctx.lr = 0x8239F210;
	sub_8239EF38(ctx, base);
loc_8239F210:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x8239f180
	if (!ctx.cr0.eq) goto loc_8239F180;
loc_8239F21C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r26
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x8239f160
	if (!ctx.cr6.gt) goto loc_8239F160;
loc_8239F228:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// ble cr6,0x8239f144
	if (!ctx.cr6.gt) goto loc_8239F144;
loc_8239F234:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de074
	ctx.lr = 0x8239F240;
	__restfpr_28(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239F010) {
	__imp__sub_8239F010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239F244) {
	__imp__sub_8239F244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8239F250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239f270
	if (!ctx.cr6.eq) goto loc_8239F270;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x8239f278
	goto loc_8239F278;
loc_8239F270:
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8239F278:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239F27C:
	// and r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 & ctx.r28.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r5,r31,r29
	ctx.r5.u64 = ctx.r31.u64 & ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r7,r31,31
	ctx.r7.u64 = ctx.r31.u32 & 0x1;
	// subfe r9,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8239ef38
	ctx.lr = 0x8239F2B8;
	sub_8239EF38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8239f27c
	if (ctx.cr6.lt) goto loc_8239F27C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239F248) {
	__imp__sub_8239F248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239F2CC) {
	__imp__sub_8239F2CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239F2D0) {
	__imp__sub_8239F2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239F2F4) {
	__imp__sub_8239F2F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_8239F318:
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r1,-20
	ctx.r10.s64 = ctx.r1.s64 + -20;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F328:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239f328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F328;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// bne 0x8239f318
	if (!ctx.cr0.eq) goto loc_8239F318;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r1,-20
	ctx.r10.s64 = ctx.r1.s64 + -20;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F35C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// divw r9,r9,r3
	ctx.r9.s32 = ctx.r9.s32 / ctx.r3.s32;
	// stbx r9,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8239f35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F35C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r9,-9(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r9,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239F2F8) {
	__imp__sub_8239F2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F398) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// lbz r9,165(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 165);
	// lbz r7,157(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r10,166(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 166);
	// lbz r8,158(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 158);
	// lbz r11,167(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 167);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,129(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,130(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// lbz r8,131(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,120(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,121(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// lbz r8,122(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,45(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,46(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r8,47(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r7,37(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r8,38(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r6,9(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r7,10(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r8,11(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// srawi r6,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 3;
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239F398) {
	__imp__sub_8239F398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239F47C) {
	__imp__sub_8239F47C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239F480) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r6,3(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lbz r6,7(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r9,11(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// lbz r8,13(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r7,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r7.u32);
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r4,17(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lbz r11,15(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r4,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r8,18(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r9,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r9.u32);
	// lbz r8,22(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r7,23(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r6,21(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r7,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r7.u32);
	// lbz r6,25(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// lbz r4,26(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r4,256(r5)
	PPC_STORE_U32(ctx.r5.u32 + 256, ctx.r4.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lbz r9,29(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// lbz r8,27(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r9,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, ctx.r9.u32);
	// lbz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lbz r6,30(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,31(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r7,264(r5)
	PPC_STORE_U32(ctx.r5.u32 + 264, ctx.r7.u32);
	// lbz r6,35(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// lbz r4,33(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r11,268(r5)
	PPC_STORE_U32(ctx.r5.u32 + 268, ctx.r11.u32);
	// lbz r9,38(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// lbz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,37(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,272(r5)
	PPC_STORE_U32(ctx.r5.u32 + 272, ctx.r7.u32);
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// lbz r6,41(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// lbz r4,39(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r11,276(r5)
	PPC_STORE_U32(ctx.r5.u32 + 276, ctx.r11.u32);
	// lbz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// lbz r8,42(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,43(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,280(r5)
	PPC_STORE_U32(ctx.r5.u32 + 280, ctx.r7.u32);
	// lbz r6,46(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r4,45(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// or r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,47(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r4,284(r5)
	PPC_STORE_U32(ctx.r5.u32 + 284, ctx.r4.u32);
	// lbz r6,50(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// lbz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r9,1024(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1024, ctx.r9.u32);
	// lbz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// lbz r8,53(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// lbz r7,51(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 51);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r6,1028(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1028, ctx.r6.u32);
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// lbz r9,55(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r9,1032(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1032, ctx.r9.u32);
	// lbz r7,58(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// lbz r4,59(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 59);
	// lbz r8,57(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r7,1036(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1036, ctx.r7.u32);
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// lbz r6,62(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 62);
	// lbz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r11,1040(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1040, ctx.r11.u32);
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,1044(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1044, ctx.r7.u32);
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r4,9(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,11(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r11,1048(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1048, ctx.r11.u32);
	// lbz r8,63(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 63);
	// lbz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r9,65(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,1052(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1052, ctx.r7.u32);
	// lbz r4,67(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 67);
	// lbz r6,66(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r4,1280(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1280, ctx.r4.u32);
	// lbz r9,37(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// lbz r7,38(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r9,1284(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1284, ctx.r9.u32);
	// lbz r6,46(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r8,47(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// lbz r7,45(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r6,1288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1288, ctx.r6.u32);
	// lbz r8,71(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// lbz r4,69(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// lbz r11,70(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,1292(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1292, ctx.r11.u32);
	// lbz r6,74(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// lbz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lbz r8,73(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,1296(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1296, ctx.r8.u32);
	// lbz r7,75(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// lbz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lbz r11,77(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,1300(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1300, ctx.r6.u32);
	// lbz r4,78(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 78);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r11,79(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 79);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,1304(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1304, ctx.r11.u32);
	// lbz r6,83(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 83);
	// lbz r9,81(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,82(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,1308(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1308, ctx.r8.u32);
	// lbz r11,86(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 86);
	// lbz r7,84(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,85(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,4096(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4096, ctx.r6.u32);
	// lbz r8,89(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// lbz r4,87(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 87);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,4100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4100, ctx.r11.u32);
	// lbz r6,92(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// lbz r8,91(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// lbz r9,90(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 90);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,4104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4104, ctx.r8.u32);
	// lbz r7,93(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 93);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,94(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 94);
	// lbz r11,95(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 95);
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,4108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4108, ctx.r6.u32);
	// lbz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// lbz r11,97(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r8,98(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 98);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,4112(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4112, ctx.r11.u32);
	// lbz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// lbz r8,121(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r6,122(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,4116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4116, ctx.r8.u32);
	// lbz r7,129(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// lbz r6,130(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lbz r11,131(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,4120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4120, ctx.r6.u32);
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// lbz r8,101(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 101);
	// lbz r4,99(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,4124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4124, ctx.r11.u32);
	// lbz r6,104(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// lbz r9,102(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 102);
	// lbz r8,103(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 103);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,4352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4352, ctx.r8.u32);
	// lbz r11,158(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 158);
	// lbz r6,157(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// lbz r7,156(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,4356(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4356, ctx.r6.u32);
	// lbz r9,167(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 167);
	// lbz r4,166(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 166);
	// lbz r11,165(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 165);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r11,4360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4360, ctx.r11.u32);
	// lbz r7,107(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 107);
	// lbz r8,105(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r9,106(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 106);
	// or r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,4364(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4364, ctx.r8.u32);
	// lbz r11,110(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 110);
	// lbz r6,109(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 109);
	// lbz r7,108(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,4368(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4368, ctx.r6.u32);
	// lbz r4,111(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 111);
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r8,113(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,4372(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4372, ctx.r11.u32);
	// lbz r9,114(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 114);
	// lbz r8,115(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 115);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r6,116(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,4376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4376, ctx.r8.u32);
	// lbz r7,117(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 117);
	// lbz r6,118(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 118);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lbz r11,119(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 119);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,4380(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4380, ctx.r6.u32);
	// lbz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// lbz r11,121(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r8,122(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,5120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5120, ctx.r11.u32);
	// lbz r8,124(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// lbz r9,123(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 123);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,125(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 125);
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,5124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5124, ctx.r8.u32);
	// lbz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 126);
	// lbz r6,127(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 127);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,5128(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5128, ctx.r6.u32);
	// lbz r4,129(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// lbz r11,130(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r8,131(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,5132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5132, ctx.r11.u32);
	// lbz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 132);
	// lbz r8,133(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 133);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r6,134(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 134);
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,5136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5136, ctx.r8.u32);
	// lbz r11,137(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// lbz r7,135(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 135);
	// lbz r6,136(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,5140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5140, ctx.r6.u32);
	// lbz r4,138(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 138);
	// lbz r11,139(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 139);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r8,140(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,5144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5144, ctx.r11.u32);
	// lbz r9,141(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 141);
	// lbz r8,142(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 142);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r6,143(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 143);
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,5148(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5148, ctx.r8.u32);
	// lbz r11,146(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 146);
	// lbz r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// lbz r6,145(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,5376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5376, ctx.r6.u32);
	// lbz r8,149(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 149);
	// lbz r4,147(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 147);
	// lbz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,5380(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5380, ctx.r11.u32);
	// lbz r9,150(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 150);
	// lbz r8,151(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 151);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r6,152(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,5384(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5384, ctx.r8.u32);
	// lbz r6,154(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// lbz r11,155(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 155);
	// lbz r7,153(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 153);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,5388(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5388, ctx.r6.u32);
	// lbz r8,158(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 158);
	// lbz r11,157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// lbz r4,156(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,5392(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5392, ctx.r11.u32);
	// lbz r8,160(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// lbz r6,161(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 161);
	// lbz r9,159(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 159);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,5396(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5396, ctx.r8.u32);
	// lbz r6,163(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 163);
	// lbz r7,162(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 162);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,5400(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5400, ctx.r6.u32);
	// lbz r4,165(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 165);
	// lbz r11,166(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 166);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lbz r9,167(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 167);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r4,5404(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5404, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239F480) {
	__imp__sub_8239F480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239FD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r8,21
	ctx.r8.s64 = 21;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239FD9C:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// sth r6,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// sth r8,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r8.u16);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// sth r4,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r4.u16);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// sth r6,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r6.u16);
	// lbzu r4,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// sthu r3,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8239fd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239FD9C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239FD88) {
	__imp__sub_8239FD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239FE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239FE04) {
	__imp__sub_8239FE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239FE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8239FE10;
	__savegprlr_28(ctx, base);
	// li r8,21
	ctx.r8.s64 = 21;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239FE24:
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r7,r6,r9
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r31,10(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r29,14(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lbz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sth r3,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// lbz r6,7(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// mullw r8,r6,r9
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// sth r5,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r5.u16);
	// lbzu r3,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// sthu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8239fe24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239FE24;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239FE08) {
	__imp__sub_8239FE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239FECC) {
	__imp__sub_8239FECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239FED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239FEE0:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r8,r9,127
	ctx.r8.s64 = ctx.r9.s64 + 127;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r4,r9,127
	ctx.r4.s64 = ctx.r9.s64 + 127;
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r7,r9,127
	ctx.r7.s64 = ctx.r9.s64 + 127;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// addi r6,r9,127
	ctx.r6.s64 = ctx.r9.s64 + 127;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r5.u8);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// addi r5,r9,127
	ctx.r5.s64 = ctx.r9.s64 + 127;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// lhzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stbu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239fee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239FEE0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239FED0) {
	__imp__sub_8239FED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239FF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,20476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239FF98:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lhz r31,-10(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// sthx r31,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u16);
	// lhzx r31,r5,r6
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x8239ffd4
	if (!ctx.cr6.lt) goto loc_8239FFD4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8239FFD4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8239ff98
	if (ctx.cr6.lt) goto loc_8239FF98;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r8,r10,256
	ctx.r8.s64 = ctx.r10.s64 + 256;
	// sthx r8,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239FF68) {
	__imp__sub_8239FF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A0010;
	__savegprlr_27(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,21
	ctx.r9.s64 = 21;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lfs f0,20476(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// ori r9,r10,65280
	ctx.r9.u64 = ctx.r10.u64 | 65280;
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f10.u64);
	// lhz r31,-58(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -58);
loc_823A0054:
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r7,r8,r31
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a006c
	if (!ctx.cr6.gt) goto loc_823A006C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A006C:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// sth r28,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a008c
	if (!ctx.cr6.gt) goto loc_823A008C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A008C:
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a00ac
	if (!ctx.cr6.gt) goto loc_823A00AC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A00AC:
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a00cc
	if (!ctx.cr6.gt) goto loc_823A00CC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A00CC:
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a00ec
	if (!ctx.cr6.gt) goto loc_823A00EC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A00EC:
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r10,r7,r31
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// sth r6,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r6.u16);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a010c
	if (!ctx.cr6.gt) goto loc_823A010C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A010C:
	// lhz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a0130
	if (!ctx.cr6.gt) goto loc_823A0130;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A0130:
	// lhz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// sth r8,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r8.u16);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823a0154
	if (!ctx.cr6.gt) goto loc_823A0154;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823A0154:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sthu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bdnz 0x823a0054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A0054;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,168
	ctx.r10.s64 = 168;
	// addi r8,r3,-2
	ctx.r8.s64 = ctx.r3.s64 + -2;
	// divw r6,r29,r10
	ctx.r6.s32 = ctx.r29.s32 / ctx.r10.s32;
	// lwz r11,12908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12908);
	// lfs f12,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f8.u64);
	// lwz r10,-60(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// subf r7,r4,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r4.s64;
loc_823A01E0:
	// lhz r6,2(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a0200
	if (ctx.cr6.lt) goto loc_823A0200;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x823a020c
	goto loc_823A020C;
loc_823A0200:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a020c
	if (ctx.cr6.gt) goto loc_823A020C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A020C:
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x823a01e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A01E0;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A0008) {
	__imp__sub_823A0008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0218) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,13084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13084);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a02a0
	if (ctx.cr6.eq) goto loc_823A02A0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12688);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a02a0
	if (ctx.cr6.eq) goto loc_823A02A0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a02a0
	if (ctx.cr6.eq) goto loc_823A02A0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r4,168
	ctx.r10.s64 = ctx.r4.s64 * 168;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,256
	ctx.r4.s64 = 256;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8239fd88
	ctx.lr = 0x823A0288;
	sub_8239FD88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a0008
	ctx.lr = 0x823A0290;
	sub_823A0008(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239fed0
	ctx.lr = 0x823A029C;
	sub_8239FED0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_823A02A0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
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

PPC_WEAK_FUNC(sub_823A0218) {
	__imp__sub_823A0218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A02B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A02C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a0300
	if (ctx.cr6.eq) goto loc_823A0300;
	// li r5,168
	ctx.r5.s64 = 168;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823A02F0;
	sub_823DE1F0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cb950
	ctx.lr = 0x823A0300;
	sub_823CB950(ctx, base);
loc_823A0300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A02B8) {
	__imp__sub_823A02B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A0310;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r4,168
	ctx.r10.s64 = ctx.r4.s64 * 168;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a0390
	if (ctx.cr6.eq) goto loc_823A0390;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a0378
	if (ctx.cr6.eq) goto loc_823A0378;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823A0364;
	sub_823DE1F0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823cb950
	ctx.lr = 0x823A0378;
	sub_823CB950(ctx, base);
loc_823A0378:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a0218
	ctx.lr = 0x823A038C;
	sub_823A0218(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823A0390:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r31,87(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8239f480
	ctx.lr = 0x823A03C0;
	sub_8239F480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8239f398
	ctx.lr = 0x823A03C8;
	sub_8239F398(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A0308) {
	__imp__sub_823A0308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A03D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A03D4) {
	__imp__sub_823A03D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A03D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823A03E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mulli r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 * 168;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8239fd88
	ctx.lr = 0x823A0418;
	sub_8239FD88(ctx, base);
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// subf r29,r29,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r29.s64;
loc_823A0424:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mulli r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 * 168;
	// lhzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8239fe08
	ctx.lr = 0x823A0440;
	sub_8239FE08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823a0424
	if (ctx.cr6.lt) goto loc_823A0424;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a04a0
	if (ctx.cr6.eq) goto loc_823A04A0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13084);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a04a0
	if (ctx.cr6.eq) goto loc_823A04A0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12688);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a04a0
	if (ctx.cr6.eq) goto loc_823A04A0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a04a0
	if (ctx.cr6.eq) goto loc_823A04A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a0008
	ctx.lr = 0x823A04A0;
	sub_823A0008(ctx, base);
loc_823A04A0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239fed0
	ctx.lr = 0x823A04AC;
	sub_8239FED0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A03D8) {
	__imp__sub_823A03D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A04B4) {
	__imp__sub_823A04B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A04B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A04C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x8239ff68
	ctx.lr = 0x823A04E8;
	sub_8239FF68(ctx, base);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a03d8
	ctx.lr = 0x823A0504;
	sub_823A03D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A04B8) {
	__imp__sub_823A04B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A050C) {
	__imp__sub_823A050C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A0518;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x8239ff68
	ctx.lr = 0x823A0544;
	sub_8239FF68(ctx, base);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a03d8
	ctx.lr = 0x823A0560;
	sub_823A03D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f7
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x8239f2f8
	ctx.lr = 0x823A0570;
	sub_8239F2F8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A0510) {
	__imp__sub_823A0510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A0580;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// addic r9,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// subfe r30,r9,r31
	temp.u8 = (~ctx.r9.u32 + ctx.r31.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r29,87(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bl 0x8239ff68
	ctx.lr = 0x823A05D4;
	sub_8239FF68(ctx, base);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a03d8
	ctx.lr = 0x823A05F0;
	sub_823A03D8(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823a0608
	if (ctx.cr6.eq) goto loc_823A0608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823cb950
	ctx.lr = 0x823A0608;
	sub_823CB950(ctx, base);
loc_823A0608:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239f480
	ctx.lr = 0x823A0618;
	sub_8239F480(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239f398
	ctx.lr = 0x823A0624;
	sub_8239F398(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A0578) {
	__imp__sub_823A0578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A062C) {
	__imp__sub_823A062C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0630) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,255
	ctx.r4.s64 = 255;
	// mulli r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 * 168;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// bl 0x8239f480
	ctx.lr = 0x823A065C;
	sub_8239F480(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8239f398
	ctx.lr = 0x823A0664;
	sub_8239F398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0630) {
	__imp__sub_823A0630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0674) {
	__imp__sub_823A0674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0678) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x823a06fc
	if (!ctx.cr6.eq) goto loc_823A06FC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823a06fc
	if (!ctx.cr6.eq) goto loc_823A06FC;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12996);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a06fc
	if (ctx.cr6.eq) goto loc_823A06FC;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,255
	ctx.r4.s64 = 255;
	// mulli r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 * 168;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// bl 0x8239f480
	ctx.lr = 0x823A06D8;
	sub_8239F480(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8239f398
	ctx.lr = 0x823A06E0;
	sub_8239F398(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_823A06FC:
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823a0748
	if (ctx.cr6.gt) goto loc_823A0748;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r9,r9,168
	ctx.r9.s64 = ctx.r9.s64 * 168;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r10,-168
	ctx.r3.s64 = ctx.r10.s64 + -168;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8239f480
	ctx.lr = 0x823A0724;
	sub_8239F480(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8239f398
	ctx.lr = 0x823A072C;
	sub_8239F398(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_823A0748:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f1,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a0308
	ctx.lr = 0x823A0758;
	sub_823A0308(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r8,r9,12344
	ctx.r8.s64 = ctx.r9.s64 + 12344;
	// lbz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28);
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

PPC_WEAK_FUNC(sub_823A0678) {
	__imp__sub_823A0678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A077C) {
	__imp__sub_823A077C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a07b4
	if (ctx.cr6.eq) goto loc_823A07B4;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823A0798:
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823a07cc
	if (ctx.cr6.eq) goto loc_823A07CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823a0798
	if (ctx.cr6.lt) goto loc_823A0798;
loc_823A07B4:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// sthx r6,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u16);
	// stfsx f1,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
loc_823A07CC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfsx f13,r11,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0780) {
	__imp__sub_823A0780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A07E4) {
	__imp__sub_823A07E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A07E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823A07F0;
	__savegprlr_26(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// lhzx r8,r7,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a0b94
	if (!ctx.cr6.lt) goto loc_823A0B94;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x823a0b94
	if (ctx.cr6.eq) goto loc_823A0B94;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r8,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// subf r26,r9,r7
	ctx.r26.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a0b94
	if (ctx.cr6.gt) goto loc_823A0B94;
	// lhz r7,6(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x823a08b4
	if (!ctx.cr6.gt) goto loc_823A08B4;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// stw r28,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r28.u32);
	// stw r28,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r28.u32);
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a0ba8
	if (!ctx.cr6.lt) goto loc_823A0BA8;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823A08B4:
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x823a0954
	if (!ctx.cr6.eq) goto loc_823A0954;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r28.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// ble cr6,0x823a08ec
	if (!ctx.cr6.gt) goto loc_823A08EC;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_823A08EC:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r10,r4,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r4.s64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0908
	if (ctx.cr6.lt) goto loc_823A0908;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x823a0914
	goto loc_823A0914;
loc_823A0908:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_823A0914:
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0930
	if (ctx.cr6.lt) goto loc_823A0930;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823a0940
	goto loc_823A0940;
loc_823A0930:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823A0940:
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823a0ba8
	if (!ctx.cr6.lt) goto loc_823A0BA8;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823A0954:
	// subfic r9,r7,255
	ctx.xer.ca = ctx.r7.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r7.s64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// addi r27,r9,3
	ctx.r27.s64 = ctx.r9.s64 + 3;
	// blt cr6,0x823a099c
	if (ctx.cr6.lt) goto loc_823A099C;
loc_823A0970:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// beq cr6,0x823a0990
	if (ctx.cr6.eq) goto loc_823A0990;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_823A0990:
	// lbzux r10,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a0970
	if (!ctx.cr6.lt) goto loc_823A0970;
loc_823A099C:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a0a78
	if (!ctx.cr6.eq) goto loc_823A0A78;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r28.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a09ec
	if (ctx.cr6.eq) goto loc_823A09EC;
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x823a09dc
	if (!ctx.cr6.gt) goto loc_823A09DC;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823A09DC:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a09ec
	if (!ctx.cr6.lt) goto loc_823A09EC;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
loc_823A09EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0ba0
	if (ctx.cr6.lt) goto loc_823A0BA0;
loc_823A09FC:
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a0ba0
	if (ctx.cr6.eq) goto loc_823A0BA0;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// beq cr6,0x823a0a3c
	if (ctx.cr6.eq) goto loc_823A0A3C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_823A0A3C:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// ble cr6,0x823a0a5c
	if (!ctx.cr6.gt) goto loc_823A0A5C;
	// lbz r9,3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823A0A5C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0b68
	if (ctx.cr6.lt) goto loc_823A0B68;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x823a0b74
	goto loc_823A0B74;
loc_823A0A78:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x823a0a90
	if (!ctx.cr6.gt) goto loc_823A0A90;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823A0A90:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a0aa0
	if (!ctx.cr6.lt) goto loc_823A0AA0;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
loc_823A0AA0:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r10,r10,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r10.s64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// blt cr6,0x823a0ac4
	if (ctx.cr6.lt) goto loc_823A0AC4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x823a0ad0
	goto loc_823A0AD0;
loc_823A0AC4:
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_823A0AD0:
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0aec
	if (ctx.cr6.lt) goto loc_823A0AEC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x823a0afc
	goto loc_823A0AFC;
loc_823A0AEC:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_823A0AFC:
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823a09fc
	if (!ctx.cr6.lt) goto loc_823A09FC;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0b28
	if (ctx.cr6.lt) goto loc_823A0B28;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x823a0b34
	goto loc_823A0B34;
loc_823A0B28:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823A0B34:
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a0b50
	if (ctx.cr6.lt) goto loc_823A0B50;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823A0B50:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823A0B68:
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_823A0B74:
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a0b50
	if (ctx.cr6.lt) goto loc_823A0B50;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823A0B94:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r28.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
loc_823A0BA0:
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// stw r28,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r28.u32);
loc_823A0BA8:
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A07E8) {
	__imp__sub_823A07E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0BAC) {
	__imp__sub_823A0BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,11264
	ctx.r10.s64 = ctx.r11.s64 + 11264;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0BB0) {
	__imp__sub_823A0BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,11264
	ctx.r10.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subfic r3,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r3.s64 = 256 - ctx.r11.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0BC0) {
	__imp__sub_823A0BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0BD4) {
	__imp__sub_823A0BD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,11264
	ctx.r9.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// subfic r8,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r11.s64;
	// subfc r11,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0BD8) {
	__imp__sub_823A0BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0BF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823a0c18
	if (ctx.cr6.lt) goto loc_823A0C18;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,11264
	ctx.r10.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823a0c1c
	if (!ctx.cr6.gt) goto loc_823A0C1C;
loc_823A0C18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A0C1C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0BF8) {
	__imp__sub_823A0BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0C24) {
	__imp__sub_823A0C24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,11264
	ctx.r10.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-255
	ctx.r3.s64 = ctx.r11.s64 + -255;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0C28) {
	__imp__sub_823A0C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0C40) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a0c54
	if (!ctx.cr6.eq) goto loc_823A0C54;
loc_823A0C4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823A0C54:
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a0c8c
	if (ctx.cr6.eq) goto loc_823A0C8C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r8,r11,11264
	ctx.r8.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a0c4c
	if (!ctx.cr6.lt) goto loc_823A0C4C;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a0c8c
	if (!ctx.cr6.lt) goto loc_823A0C8C;
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_823A0C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A0C40) {
	__imp__sub_823A0C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0C94) {
	__imp__sub_823A0C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8211e990
	sub_8211E990(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A0C98) {
	__imp__sub_823A0C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0C9C) {
	__imp__sub_823A0C9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0CA0) {
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
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r10,r4,3,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x20;
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r8,r4,4,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x20;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r5,r4,6,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x40;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// frsp f8,f7
	ctx.f8.f64 = double(float(ctx.f7.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f11,f5
	ctx.f11.f64 = double(ctx.f5.s64);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2432);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,27440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27440);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lfs f13,6044(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6044);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f3,f2,f12,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f2,f8,f13,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f0,f7,f13,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r8,8193
	ctx.r8.s64 = 8193;
	// addi r6,r7,-9672
	ctx.r6.s64 = ctx.r7.s64 + -9672;
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfsx f12,r10,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfsx f7,r31,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fadds f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fsubs f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f8,f9,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fsel f2,f5,f13,f6
	ctx.f2.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// fdivs f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fmuls f13,f1,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmadds f8,f13,f0,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f7,f10,f0,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f6,f9,f0,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8211e990
	ctx.lr = 0x823A0E34;
	sub_8211E990(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_823A0CA0) {
	__imp__sub_823A0CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A0E54) {
	__imp__sub_823A0E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A0E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823A0E60;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x823dde20
	ctx.lr = 0x823A0E88;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r30,2
	ctx.r30.s64 = 131072;
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x823dde20
	ctx.lr = 0x823A0EB0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f1,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// bl 0x823dde20
	ctx.lr = 0x823A0ED4;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2428(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2428);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfsx f7,r9,r28
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f8,r10,r28
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// lfs f12,17644(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,13772(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13772);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// fcfid f10,f2
	ctx.f10.f64 = double(ctx.f2.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fmsubs f1,f5,f12,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fsubs f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f0,12168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// fmsubs f12,f4,f13,f6
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f6.f64));
	// fsubs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmsubs f11,f3,f13,f2
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f2.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f4,f9,f1
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// fmuls f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a07e8
	ctx.lr = 0x823A1000;
	sub_823A07E8(ctx, base);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r27,16
	ctx.r19.s64 = ctx.r27.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// bl 0x823a07e8
	ctx.lr = 0x823A102C;
	sub_823A07E8(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r9,12860(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12860);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x823a1064
	if (ctx.cr6.eq) goto loc_823A1064;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239f248
	ctx.lr = 0x823A1064;
	sub_8239F248(ctx, base);
loc_823A1064:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// std r24,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r24.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lfs f30,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// subf r22,r31,r27
	ctx.r22.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r20,r11,11264
	ctx.r20.s64 = ctx.r11.s64 + 11264;
loc_823A10A0:
	// lwzx r31,r22,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a11b4
	if (ctx.cr6.eq) goto loc_823A11B4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x823a10c0
	if (!ctx.cr6.lt) goto loc_823A10C0;
	// stwx r24,r22,r30
	PPC_STORE_U32(ctx.r22.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x823a11b4
	goto loc_823A11B4;
loc_823A10C0:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// and r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 & ctx.r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a10f4
	if (ctx.cr6.eq) goto loc_823A10F4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a0ca0
	ctx.lr = 0x823A10E4;
	sub_823A0CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823a10f8
	if (ctx.cr6.eq) goto loc_823A10F8;
loc_823A10F4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823A10F8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r26,r10
	PPC_STORE_U8(ctx.r26.u32 + ctx.r10.u32, ctx.r9.u8);
	// beq cr6,0x823a1120
	if (ctx.cr6.eq) goto loc_823A1120;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1148
	if (ctx.cr6.eq) goto loc_823A1148;
	// stwx r24,r22,r30
	PPC_STORE_U32(ctx.r22.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x823a11b4
	goto loc_823A11B4;
loc_823A1120:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1148
	if (!ctx.cr6.eq) goto loc_823A1148;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r25,2(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x823de090
	ctx.lr = 0x823A1144;
	sub_823DE090(ctx, base);
	// b 0x823a11b4
	goto loc_823A11B4;
loc_823A1148:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1160
	if (!ctx.cr6.eq) goto loc_823A1160;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a11a0
	goto loc_823A11A0;
loc_823A1160:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a119c
	if (ctx.cr6.eq) goto loc_823A119C;
	// lwz r10,28(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// subfic r10,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a1184
	if (ctx.cr6.lt) goto loc_823A1184;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a11a0
	goto loc_823A11A0;
loc_823A1184:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a119c
	if (!ctx.cr6.lt) goto loc_823A119C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x823a11a0
	if (ctx.cr6.lt) goto loc_823A11A0;
loc_823A119C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823A11A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a11b4
	if (ctx.cr6.eq) goto loc_823A11B4;
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_823A11B4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// blt cr6,0x823a10a0
	if (ctx.cr6.lt) goto loc_823A10A0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1210
	if (ctx.cr6.eq) goto loc_823A1210;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13160);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823a1210
	if (!ctx.cr6.eq) goto loc_823A1210;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_823A1210:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A0E58) {
	__imp__sub_823A0E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A1228;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a125c
	if (!ctx.cr6.eq) goto loc_823A125C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823A125C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,13772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A1270;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f31,6044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6044);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x823A1290;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,17644(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17644);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x823A12B0;
	sub_823DDE20(ctx, base);
	// rlwinm r6,r30,4,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x20;
	// rlwinm r4,r30,6,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x40;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r30,3,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x20;
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f1,f5
	ctx.f1.f64 = double(ctx.f5.s64);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lfs f0,27440(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfsx f8,r10,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f7,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfsx f6,r8,r9
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8227f4e0
	ctx.lr = 0x823A1348;
	sub_8227F4E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A1220) {
	__imp__sub_823A1220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A1354) {
	__imp__sub_823A1354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A1360;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// lfs f0,27440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x823a0e58
	ctx.lr = 0x823A13C0;
	sub_823A0E58(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a13e8
	if (!ctx.cr6.eq) goto loc_823A13E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239e408
	ctx.lr = 0x823A13D4;
	sub_8239E408(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823A13E8:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,11264
	ctx.r10.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subfic r9,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r11.s64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823a14c0
	if (!ctx.cr6.lt) goto loc_823A14C0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x823a1414
	if (ctx.cr6.lt) goto loc_823A1414;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823a1418
	if (!ctx.cr6.gt) goto loc_823A1418;
loc_823A1414:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A1418:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a14c0
	if (!ctx.cr6.eq) goto loc_823A14C0;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mulli r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 * 68;
	// addi r9,r11,-11984
	ctx.r9.s64 = ctx.r11.s64 + -11984;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x823a146c
	if (!ctx.cr6.eq) goto loc_823A146C;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x823a146c
	if (ctx.cr6.lt) goto loc_823A146C;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9ce8
	ctx.lr = 0x823A1468;
	sub_822D9CE8(ctx, base);
	// b 0x823a1480
	goto loc_823A1480;
loc_823A146C:
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9be8
	ctx.lr = 0x823A1480;
	sub_822D9BE8(ctx, base);
loc_823A1480:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a14c0
	if (!ctx.cr6.eq) goto loc_823A14C0;
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82386040
	ctx.lr = 0x823A14A8;
	sub_82386040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823A14C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A1358) {
	__imp__sub_823A1358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A14D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823A14D8;
	__savegprlr_18(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// bl 0x823a0e58
	ctx.lr = 0x823A1508;
	sub_823A0E58(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// addi r18,r11,11264
	ctx.r18.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// subfic r10,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r11.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a1530
	if (ctx.cr6.lt) goto loc_823A1530;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,-255
	ctx.r29.s64 = ctx.r11.s64 + -255;
	// b 0x823a1564
	goto loc_823A1564;
loc_823A1530:
	// lbz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a1564
	if (ctx.cr6.eq) goto loc_823A1564;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x823a1550
	if (ctx.cr6.lt) goto loc_823A1550;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823a1554
	if (!ctx.cr6.gt) goto loc_823A1554;
loc_823A1550:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A1554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1564
	if (!ctx.cr6.eq) goto loc_823A1564;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_823A1564:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,364(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r20,356(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,0(r19)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// addi r23,r10,-11984
	ctx.r23.s64 = ctx.r10.s64 + -11984;
	// stfs f0,0(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
loc_823A159C:
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a168c
	if (ctx.cr6.eq) goto loc_823A168C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823a15cc
	if (!ctx.cr6.eq) goto loc_823A15CC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// b 0x823a1628
	goto loc_823A1628;
loc_823A15CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a15ec
	if (ctx.cr6.eq) goto loc_823A15EC;
	// lwz r10,28(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// subfic r10,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a1628
	if (ctx.cr6.lt) goto loc_823A1628;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823a1628
	if (ctx.cr6.eq) goto loc_823A1628;
loc_823A15EC:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mulli r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 * 68;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823a1220
	ctx.lr = 0x823A1608;
	sub_823A1220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1628
	if (ctx.cr6.eq) goto loc_823A1628;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r20)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
loc_823A1628:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfsx f0,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// beq cr6,0x823a1674
	if (ctx.cr6.eq) goto loc_823A1674;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_823A1658:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823a16ac
	if (ctx.cr6.eq) goto loc_823A16AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a1658
	if (ctx.cr6.lt) goto loc_823A1658;
loc_823A1674:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r8,r10,r21
	PPC_STORE_U16(ctx.r10.u32 + ctx.r21.u32, ctx.r8.u16);
	// stfsx f0,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
loc_823A1688:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_823A168C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x823a159c
	if (ctx.cr6.lt) goto loc_823A159C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_823A16AC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r10,r25
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, temp.u32);
	// b 0x823a1688
	goto loc_823A1688;
}

PPC_WEAK_FUNC(sub_823A14D0) {
	__imp__sub_823A14D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A16C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A16C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823a14d0
	ctx.lr = 0x823A170C;
	sub_823A14D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f12,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a176c
	if (ctx.cr6.eq) goto loc_823A176C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x823a1738
	if (!ctx.cr6.eq) goto loc_823A1738;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823a1770
	goto loc_823A1770;
loc_823A1738:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823a1758
	if (ctx.cr6.eq) goto loc_823A1758;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x823a1770
	goto loc_823A1770;
loc_823A1758:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x823a1770
	if (ctx.cr6.eq) goto loc_823A1770;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// b 0x823a1770
	goto loc_823A1770;
loc_823A176C:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
loc_823A1770:
	// subfic r11,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bne cr6,0x823a17a8
	if (!ctx.cr6.eq) goto loc_823A17A8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a0678
	ctx.lr = 0x823A179C;
	sub_823A0678(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823A17A8:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x823a17cc
	if (!ctx.cr6.eq) goto loc_823A17CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// bl 0x823a0308
	ctx.lr = 0x823A17BC;
	sub_823A0308(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823A17CC:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fdivs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x823a0578
	ctx.lr = 0x823A17E8;
	sub_823A0578(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A16C0) {
	__imp__sub_823A16C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A17F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a1820
	if (!ctx.cr6.eq) goto loc_823A1820;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_823A1820:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f8,8(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f3,f9,f9
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f2,f12,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f13,f11,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// fsqrts f9,f13
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// bne cr6,0x823a1958
	if (!ctx.cr6.eq) goto loc_823A1958;
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f5,f0,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f0,f4,f12,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823a1958
	if (!ctx.cr6.lt) goto loc_823A1958;
	// fsubs f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmr f11,f3
	ctx.f11.f64 = ctx.f3.f64;
	// fdivs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823a1958
	if (!ctx.cr6.lt) goto loc_823A1958;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x823a1940
	if (ctx.cr6.lt) goto loc_823A1940;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823A191C:
	// fmuls f12,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// bdnz 0x823a191c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A191C;
loc_823A1940:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823a1958
	if (!ctx.cr6.lt) goto loc_823A1958;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823A1950:
	// fmuls f10,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bdnz 0x823a1950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1950;
loc_823A1958:
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fneg f7,f12
	ctx.f7.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f6,f9,f13,f12
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f5,f7,f8,f6
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f6.f64;
	// fsubs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f2,0(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A17F8) {
	__imp__sub_823A17F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A19A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A19A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r31,r11,4608
	ctx.r31.s64 = ctx.r11.s64 + 4608;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x823a14d0
	ctx.lr = 0x823A19F8;
	sub_823A14D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a1a2c
	if (!ctx.cr6.eq) goto loc_823A1A2C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,12344
	ctx.r8.s64 = ctx.r11.s64 + 12344;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f7,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f7.f64 = double(temp.f32);
	// lbz r30,28(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28);
	// b 0x823a1a68
	goto loc_823A1A68;
loc_823A1A2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a1a3c
	if (!ctx.cr6.eq) goto loc_823A1A3C;
	// fmr f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f31.f64;
	// b 0x823a1a5c
	goto loc_823A1A5C;
loc_823A1A3C:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x823a1a58
	if (ctx.cr6.eq) goto loc_823A1A58;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x823a1a5c
	goto loc_823A1A5C;
loc_823A1A58:
	// lfs f7,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
loc_823A1A5C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x823a1a80
	if (!ctx.cr6.eq) goto loc_823A1A80;
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
loc_823A1A68:
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mulli r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 * 168;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823a1ac0
	goto loc_823A1AC0;
loc_823A1A80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x8239ff68
	ctx.lr = 0x823A1A9C;
	sub_8239FF68(ctx, base);
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x823a03d8
	ctx.lr = 0x823A1ABC;
	sub_823A03D8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_823A1AC0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f7
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x8239f2f8
	ctx.lr = 0x823A1ACC;
	sub_8239F2F8(ctx, base);
	// cmplwi cr6,r30,248
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 248, ctx.xer);
	// bge cr6,0x823a1b94
	if (!ctx.cr6.lt) goto loc_823A1B94;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a1b94
	if (ctx.cr6.eq) goto loc_823A1B94;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mulli r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 * 68;
	// addi r9,r11,-11984
	ctx.r9.s64 = ctx.r11.s64 + -11984;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823a17f8
	ctx.lr = 0x823A1AFC;
	sub_823A17F8(ctx, base);
	// lbz r6,99(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f0,3100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// subf r9,r29,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r29.s64;
loc_823A1B38:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f13,f12,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f4,f6,f0,f7
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsel f3,f5,f31,f4
	ctx.f3.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f4.f64;
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// lbz r6,111(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823a1b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1B38;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r11.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823A1B94:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3100(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
loc_823A1BB0:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f0,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsel f7,f9,f31,f8
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lbz r7,111(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823a1bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1BB0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r11.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A19A0) {
	__imp__sub_823A19A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1C00) {
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
	// bl 0x8239ede8
	ctx.lr = 0x823A1C10;
	sub_8239EDE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x823a1c3c
	if (!ctx.cr6.gt) goto loc_823A1C3C;
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823a1c3c
	if (ctx.cr6.lt) goto loc_823A1C3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823a1c40
	if (!ctx.cr6.gt) goto loc_823A1C40;
loc_823A1C3C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_823A1C40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A1C00) {
	__imp__sub_823A1C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A1C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823a1c00
	ctx.lr = 0x823A1C8C;
	sub_823A1C00(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a1c00
	ctx.lr = 0x823A1C98;
	sub_823A1C00(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1c00
	ctx.lr = 0x823A1CA4;
	sub_823A1C00(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,56
	ctx.r11.s64 = 56;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823A1CC4:
	// stb r31,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r31.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stbu r3,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823a1cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1CC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c6de0
	ctx.lr = 0x823A1CDC;
	sub_823C6DE0(ctx, base);
	// bl 0x823c6e90
	ctx.lr = 0x823A1CE0;
	sub_823C6E90(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// addi r9,r10,12344
	ctx.r9.s64 = ctx.r10.s64 + 12344;
	// stb r11,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A1C70) {
	__imp__sub_823A1C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1CF8) {
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
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r31,r10,12344
	ctx.r31.s64 = ctx.r10.s64 + 12344;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x823A1D30;
	sub_823DE1F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_823A1CF8) {
	__imp__sub_823A1CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A1D4C) {
	__imp__sub_823A1D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,12344
	ctx.r11.s64 = ctx.r11.s64 + 12344;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823a1d70
	if (ctx.cr6.eq) goto loc_823A1D70;
loc_823A1D68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823A1D70:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a1dd8
	if (ctx.cr6.eq) goto loc_823A1DD8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823a1d68
	if (!ctx.cr6.eq) goto loc_823A1D68;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823a1d68
	if (!ctx.cr6.eq) goto loc_823A1D68;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823a1d68
	if (!ctx.cr6.eq) goto loc_823A1D68;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823a1d68
	if (!ctx.cr6.eq) goto loc_823A1D68;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823a1d68
	if (!ctx.cr6.eq) goto loc_823A1D68;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823a1d68
	if (!ctx.cr6.eq) goto loc_823A1D68;
loc_823A1DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A1D50) {
	__imp__sub_823A1D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1DE0) {
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
	// bl 0x823a1d50
	ctx.lr = 0x823A1DFC;
	sub_823A1D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a1e74
	if (ctx.cr6.eq) goto loc_823A1E74;
	// bl 0x82390a98
	ctx.lr = 0x823A1E08;
	sub_82390A98(ctx, base);
	// bl 0x823b9a18
	ctx.lr = 0x823A1E0C;
	sub_823B9A18(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r31,r11,12344
	ctx.r31.s64 = ctx.r11.s64 + 12344;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823A1E24:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a1e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1E24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a1e4c
	if (ctx.cr6.eq) goto loc_823A1E4C;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823a1c70
	ctx.lr = 0x823A1E48;
	sub_823A1C70(ctx, base);
	// b 0x823a1e74
	goto loc_823A1E74;
loc_823A1E4C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r5,168
	ctx.r5.s64 = 168;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x823A1E6C;
	sub_823DE1F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
loc_823A1E74:
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

PPC_WEAK_FUNC(sub_823A1DE0) {
	__imp__sub_823A1DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A1E8C) {
	__imp__sub_823A1E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a1de0
	sub_823A1DE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A1E90) {
	__imp__sub_823A1E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A1E94) {
	__imp__sub_823A1E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1E98) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r30,-31780
	ctx.r30.s64 = -2082734080;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// addi r31,r30,12344
	ctx.r31.s64 = ctx.r30.s64 + 12344;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x823A1ED4;
	sub_823DE1F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// stw r10,12344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12344, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_823A1E98) {
	__imp__sub_823A1E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A1EFC) {
	__imp__sub_823A1EFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1F00) {
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
	// bl 0x822e7868
	ctx.lr = 0x823A1F18;
	sub_822E7868(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823A1F1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a1f1c
	if (!ctx.cr6.eq) goto loc_823A1F1C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x823a1f58
	if (ctx.cr6.lt) goto loc_823A1F58;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29932
	ctx.r4.s64 = ctx.r11.s64 + -29932;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823A1F58;
	sub_822830E8(ctx, base);
loc_823A1F58:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-29940
	ctx.r10.s64 = ctx.r11.s64 + -29940;
loc_823A1F60:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1f60
	if (!ctx.cr6.eq) goto loc_823A1F60;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_823A1F74:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x823a1f74
	if (!ctx.cr6.eq) goto loc_823A1F74;
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

PPC_WEAK_FUNC(sub_823A1F00) {
	__imp__sub_823A1F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A1FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A1FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31780
	ctx.r30.s64 = -2082734080;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,12548
	ctx.r31.s64 = ctx.r11.s64 + 12548;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12860(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12860);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a2074
	if (ctx.cr6.eq) goto loc_823A2074;
	// lis r3,96
	ctx.r3.s64 = 6291456;
	// bl 0x822dacd8
	ctx.lr = 0x823A1FE4;
	sub_822DACD8(ctx, base);
	// lwz r11,12860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12860);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823a2074
	if (!ctx.cr6.eq) goto loc_823A2074;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a1f00
	ctx.lr = 0x823A2004;
	sub_823A1F00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3ae0
	ctx.lr = 0x823A2010;
	sub_822D3AE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823a2074
	if (ctx.cr6.lt) goto loc_823A2074;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x823a206c
	if (!ctx.cr0.eq) goto loc_823A206C;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823a2050
	if (!ctx.cr6.gt) goto loc_823A2050;
	// lis r30,96
	ctx.r30.s64 = 6291456;
loc_823A2050:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823de1f0
	ctx.lr = 0x823A2060;
	sub_823DE1F0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A206C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d3b90
	ctx.lr = 0x823A2074;
	sub_822D3B90(ctx, base);
loc_823A2074:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A1FA0) {
	__imp__sub_823A1FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A207C) {
	__imp__sub_823A207C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2080) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r31,r11,12548
	ctx.r31.s64 = ctx.r11.s64 + 12548;
	// lwz r11,12548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a20f4
	if (ctx.cr6.eq) goto loc_823A20F4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a20f4
	if (ctx.cr6.eq) goto loc_823A20F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823a1f00
	ctx.lr = 0x823A20C4;
	sub_823A1F00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822d3b98
	ctx.lr = 0x823A20E0;
	sub_822D3B98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822dabb0
	ctx.lr = 0x823A20E8;
	sub_822DABB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A20F4:
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

PPC_WEAK_FUNC(sub_823A2080) {
	__imp__sub_823A2080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x823a0e58
	ctx.lr = 0x823A212C;
	sub_823A0E58(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r11,11264
	ctx.r9.s64 = ctx.r11.s64 + 11264;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// subfic r8,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823a2154
	if (ctx.cr6.lt) goto loc_823A2154;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_823A2154:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_823A215C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a2188
	if (ctx.cr6.eq) goto loc_823A2188;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823a2188
	if (!ctx.cr6.lt) goto loc_823A2188;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a219c
	if (ctx.cr6.eq) goto loc_823A219C;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823a219c
	if (ctx.cr6.eq) goto loc_823A219C;
loc_823A2188:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x823a215c
	if (ctx.cr6.lt) goto loc_823A215C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A219C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A2108) {
	__imp__sub_823A2108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A21B0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822dabf0
	ctx.lr = 0x823A21D8;
	sub_822DABF0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a21f0
	if (!ctx.cr6.eq) goto loc_823A21F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x823ddd78
	ctx.lr = 0x823A21F0;
	sub_823DDD78(ctx, base);
loc_823A21F0:
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

PPC_WEAK_FUNC(sub_823A21B0) {
	__imp__sub_823A21B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2208) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a2234
	if (ctx.cr6.eq) goto loc_823A2234;
	// bl 0x822dabb0
	ctx.lr = 0x823A222C;
	sub_822DABB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823A2234:
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

PPC_WEAK_FUNC(sub_823A2208) {
	__imp__sub_823A2208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A2248) {
	__imp__sub_823A2248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A224C) {
	__imp__sub_823A224C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A2250) {
	__imp__sub_823A2250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A2254) {
	__imp__sub_823A2254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A2258) {
	__imp__sub_823A2258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A225C) {
	__imp__sub_823A225C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lhz r6,13512(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 13512);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f31,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// add r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r4,-29712
	ctx.r11.s64 = ctx.r4.s64 + -29712;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmuls f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfsx f5,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,12168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f30,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fadds f10,f6,f31
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fmadds f6,f12,f13,f4
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f5,f11,f13,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f9,f10,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f12,f30,f10,f4
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f13,f7,f10,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmuls f11,f3,f3
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fdivs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// bl 0x823901a8
	ctx.lr = 0x823A236C;
	sub_823901A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A237C;
	sub_823DDE20(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A2260) {
	__imp__sub_823A2260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A23A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A23A8) {
	__imp__sub_823A23A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A23AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A23AC) {
	__imp__sub_823A23AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A23B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x823A23DC;
	sub_823DE090(ctx, base);
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r10,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r10.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r9,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
	// stb r10,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r10.u8);
	// stb r9,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r9.u8);
	// stb r7,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_823A23B0) {
	__imp__sub_823A23B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2420) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A2428;
	__savegprlr_27(ctx, base);
	// lis r28,-31799
	ctx.r28.s64 = -2083979264;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,13512(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a24ac
	if (!ctx.cr6.gt) goto loc_823A24AC;
loc_823A243C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a24a0
	if (!ctx.cr6.gt) goto loc_823A24A0;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// addi r7,r4,2
	ctx.r7.s64 = ctx.r4.s64 + 2;
	// addi r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 2;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// addi r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 3;
	// addi r30,r4,3
	ctx.r30.s64 = ctx.r4.s64 + 3;
loc_823A2460:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,18
	ctx.r10.s64 = ctx.r11.s64 + 18;
	// lbzx r27,r8,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stbx r27,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u8);
	// lbzx r27,r6,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stbx r27,r5,r10
	PPC_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r27.u8);
	// lbzx r27,r31,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r27,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r27.u8);
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// lhz r11,13512(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a2460
	if (ctx.cr6.lt) goto loc_823A2460;
loc_823A24A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a243c
	if (ctx.cr6.lt) goto loc_823A243C;
loc_823A24AC:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2420) {
	__imp__sub_823A2420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A24B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A24B8;
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
	// lis r27,-31799
	ctx.r27.s64 = -2083979264;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,13512(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 13512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a2540
	if (!ctx.cr6.gt) goto loc_823A2540;
loc_823A24E8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a2534
	if (!ctx.cr6.gt) goto loc_823A2534;
	// addi r28,r25,3
	ctx.r28.s64 = ctx.r25.s64 + 3;
loc_823A24F8:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
	// bl 0x823a2260
	ctx.lr = 0x823A2520;
	sub_823A2260(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbx r3,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r3.u8);
	// lhz r11,13512(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 13512);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a24f8
	if (ctx.cr6.lt) goto loc_823A24F8;
loc_823A2534:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a24e8
	if (ctx.cr6.lt) goto loc_823A24E8;
loc_823A2540:
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

PPC_WEAK_FUNC(sub_823A24B0) {
	__imp__sub_823A24B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2550) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,13512(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 13512);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822dacd8
	ctx.lr = 0x823A2578;
	sub_822DACD8(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,12560
	ctx.r11.s64 = ctx.r8.s64 + 12560;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823A2550) {
	__imp__sub_823A2550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A25A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823A25A8;
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
	// lis r28,-31799
	ctx.r28.s64 = -2083979264;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// lhz r11,13512(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,18
	ctx.r31.s64 = ctx.r11.s64 + 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dacd8
	ctx.lr = 0x823A25E4;
	sub_822DACD8(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r28,13512(r28)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x823A25F8;
	sub_823DE090(ctx, base);
	// srawi r9,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 8;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r8,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r8.u8);
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r7,13(r26)
	PPC_STORE_U8(ctx.r26.u32 + 13, ctx.r7.u8);
	// stb r6,2(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2, ctx.r6.u8);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// stb r8,14(r26)
	PPC_STORE_U8(ctx.r26.u32 + 14, ctx.r8.u8);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r7,15(r26)
	PPC_STORE_U8(ctx.r26.u32 + 15, ctx.r7.u8);
	// addi r29,r4,12560
	ctx.r29.s64 = ctx.r4.s64 + 12560;
	// stb r5,16(r26)
	PPC_STORE_U8(ctx.r26.u32 + 16, ctx.r5.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x823a2420
	ctx.lr = 0x823A263C;
	sub_823A2420(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823a24b0
	ctx.lr = 0x823A2650;
	sub_823A24B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d3b98
	ctx.lr = 0x823A2660;
	sub_822D3B98(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dabb0
	ctx.lr = 0x823A2668;
	sub_822DABB0(ctx, base);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x822dabb0
	ctx.lr = 0x823A2670;
	sub_822DABB0(ctx, base);
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

PPC_WEAK_FUNC(sub_823A25A0) {
	__imp__sub_823A25A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2680) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// bl 0x823c90b8
	ctx.lr = 0x823A269C;
	sub_823C90B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823A26AC;
	sub_823C9CA0(ctx, base);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,3224
	ctx.r6.s64 = ctx.r9.s64 + 3224;
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
	// lfs f1,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c29b0
	ctx.lr = 0x823A26E0;
	sub_820C29B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A2680) {
	__imp__sub_823A2680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A26F0) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// bl 0x823c90b8
	ctx.lr = 0x823A270C;
	sub_823C90B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823A271C;
	sub_823C9CA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A26F0) {
	__imp__sub_823A26F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A272C) {
	__imp__sub_823A272C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2730) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// addi r6,r8,13512
	ctx.r6.s64 = ctx.r8.s64 + 13512;
	// addi r5,r7,13536
	ctx.r5.s64 = ctx.r7.s64 + 13536;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r3,13512(r8)
	PPC_STORE_U16(ctx.r8.u32 + 13512, ctx.r3.u16);
	// sth r4,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r4.u16);
	// stw r11,776(r5)
	PPC_STORE_U32(ctx.r5.u32 + 776, ctx.r11.u32);
	// b 0x823a2680
	sub_823A2680(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2730) {
	__imp__sub_823A2730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A2754) {
	__imp__sub_823A2754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2758) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,13512(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 13512);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822dacd8
	ctx.lr = 0x823A2780;
	sub_822DACD8(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,12560
	ctx.r11.s64 = ctx.r8.s64 + 12560;
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r7,-29904
	ctx.r5.s64 = ctx.r7.s64 + -29904;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r3.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823A27A8;
	sub_823C90B8(ctx, base);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823A27B8;
	sub_823C9CA0(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// stw r11,776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 776, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823A2758) {
	__imp__sub_823A2758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A27DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A27DC) {
	__imp__sub_823A27DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A27E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a25a0
	sub_823A25A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A27E0) {
	__imp__sub_823A27E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A27E4) {
	__imp__sub_823A27E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A27E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-29712
	ctx.r11.s64 = ctx.r11.s64 + -29712;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f1,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f8,4(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f1,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,8(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f1,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f2,f1,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f2,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f2,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fmadds f4,f13,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f1,f2,f0,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A27E8) {
	__imp__sub_823A27E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A28C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823A28C8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de00c
	ctx.lr = 0x823A28D0;
	__savefpr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lfs f28,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,2416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f27,f28
	ctx.f27.f64 = ctx.f28.f64;
	// addi r7,r11,-29712
	ctx.r7.s64 = ctx.r11.s64 + -29712;
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// fmr f25,f28
	ctx.f25.f64 = ctx.f28.f64;
loc_823A2918:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823a2aac
	if (!ctx.cr6.gt) goto loc_823A2AAC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823A2928:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823a2a9c
	if (!ctx.cr6.gt) goto loc_823A2A9C;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fadds f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// addi r10,r7,24
	ctx.r10.s64 = ctx.r7.s64 + 24;
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfsx f7,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f24,f4,f13
	ctx.f24.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 / ctx.f2.f64));
	// fsubs f24,f2,f31
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// fmuls f2,f24,f1
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f1.f64));
	// fmuls f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmuls f29,f29,f24
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
loc_823A29E4:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f24,f6,f0,f5
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f23,f4,f0,f3
	ctx.f23.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f0,f8,f0,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f24,f1,f24
	ctx.f24.f64 = double(float(ctx.f1.f64 + ctx.f24.f64));
	// fadds f23,f29,f23
	ctx.f23.f64 = double(float(ctx.f29.f64 + ctx.f23.f64));
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fmuls f22,f24,f24
	ctx.f22.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// fmadds f22,f23,f23,f22
	ctx.f22.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f22.f64));
	// fmadds f22,f0,f0,f22
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f22.f64));
	// fsqrts f22,f22
	ctx.f22.f64 = double(float(sqrt(ctx.f22.f64)));
	// fneg f21,f22
	ctx.f21.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// fsel f22,f21,f31,f22
	ctx.f22.f64 = ctx.f21.f64 >= 0.0 ? ctx.f31.f64 : ctx.f22.f64;
	// fdivs f22,f31,f22
	ctx.f22.f64 = double(float(ctx.f31.f64 / ctx.f22.f64));
	// fmuls f0,f22,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// fmuls f24,f24,f22
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f22.f64));
	// fmuls f23,f23,f22
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f22.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f12,f24,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fmadds f0,f10,f23,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f23.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x823a2a94
	if (!ctx.cr6.gt) goto loc_823A2A94;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f24,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f27,f24,f0,f27
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f27.f64));
	// lfs f23,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// lfs f24,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f26,f23,f0,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fmadds f25,f24,f0,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f25.f64));
loc_823A2A94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x823a29e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A29E4;
loc_823A2A9C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823a2928
	if (ctx.cr6.lt) goto loc_823A2928;
loc_823A2AAC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x823a2918
	if (ctx.cr6.lt) goto loc_823A2918;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f29,-29456(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29456);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fmuls f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f28,f11,f26
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmuls f27,f11,f25
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823A2AEC;
	sub_823E1E88(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823e1e88
	ctx.lr = 0x823A2AFC;
	sub_823E1E88(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823e1e88
	ctx.lr = 0x823A2B0C;
	sub_823E1E88(ctx, base);
	// lfs f10,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f10,f26
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f28,f7,f28
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// lfs f29,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f6,f9
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fsubs f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsel f4,f5,f31,f8
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fmadds f1,f4,f29,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A2B40;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fsubs f2,f28,f31
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f1.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fsel f0,f2,f31,f28
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f28.f64;
	// stb r8,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r8.u8);
	// fmadds f1,f0,f29,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A2B64;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fsubs f12,f27,f31
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fsel f10,f12,f31,f27
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f27.f64;
	// stb r6,2(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2, ctx.r6.u8);
	// fmadds f1,f10,f29,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A2B88;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// li r4,255
	ctx.r4.s64 = 255;
	// stb r4,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r4.u8);
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stb r3,3(r27)
	PPC_STORE_U8(ctx.r27.u32 + 3, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de058
	ctx.lr = 0x823A2BB0;
	__restfpr_21(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A28C0) {
	__imp__sub_823A28C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A2BB4) {
	__imp__sub_823A2BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x823A2BC0;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de024
	ctx.lr = 0x823A2BC8;
	__savefpr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f28,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lfs f29,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r23,r11,-29712
	ctx.r23.s64 = ctx.r11.s64 + -29712;
loc_823A2C04:
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x823a2d70
	if (!ctx.cr6.gt) goto loc_823A2D70;
	// li r20,0
	ctx.r20.s64 = 0;
	// rlwinm r16,r26,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_823A2C18:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x823a2d60
	if (!ctx.cr6.gt) goto loc_823A2D60;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fadds f7,f11,f29
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// addi r9,r23,12
	ctx.r9.s64 = ctx.r23.s64 + 12;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f27,f8
	ctx.f27.f64 = double(float(ctx.f8.f64));
	// addi r8,r23,24
	ctx.r8.s64 = ctx.r23.s64 + 24;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r21,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// fmuls f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fdivs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// fsubs f30,f4,f31
	ctx.f30.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
loc_823A2C9C:
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r24,r17
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r17.u32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f3,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f2,f9,f29
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fmuls f1,f2,f28
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// fdivs f12,f1,f27
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f27.f64));
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fmadds f9,f0,f11,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f6,f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f8,f11,f10,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f5,f7,f30,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmadds f3,f30,f3,f6
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f4,f4,f30,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f0,f3,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f11,f12,f31,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f8,f10,f3
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f7,f10,f5
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x823a28c0
	ctx.lr = 0x823A2D50;
	sub_823A28C0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x823a2c9c
	if (ctx.cr6.lt) goto loc_823A2C9C;
loc_823A2D60:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r20,r16,r20
	ctx.r20.u64 = ctx.r16.u64 + ctx.r20.u64;
	// cmpw cr6,r22,r25
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x823a2c18
	if (ctx.cr6.lt) goto loc_823A2C18;
loc_823A2D70:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 6, ctx.xer);
	// blt cr6,0x823a2c04
	if (ctx.cr6.lt) goto loc_823A2C04;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de070
	ctx.lr = 0x823A2D88;
	__restfpr_27(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2BB8) {
	__imp__sub_823A2BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A2D8C) {
	__imp__sub_823A2D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823A2D98;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfd f30,-29448(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29448);
	// subf r27,r6,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r6.s64;
	// lfs f31,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f31.f64 = double(temp.f32);
	// li r22,6
	ctx.r22.s64 = 6;
loc_823A2DC8:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x823a2eb4
	if (!ctx.cr6.gt) goto loc_823A2EB4;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_823A2DD8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x823a2eac
	if (!ctx.cr6.gt) goto loc_823A2EAC;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
loc_823A2DF8:
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823A2E20;
	sub_823E1E88(ctx, base);
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfsx f11,r8,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, temp.u32);
	// lbz r5,2(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823A2E54;
	sub_823E1E88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823A2E8C;
	sub_823E1E88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bne 0x823a2df8
	if (!ctx.cr0.eq) goto loc_823A2DF8;
loc_823A2EAC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x823a2dd8
	if (!ctx.cr0.eq) goto loc_823A2DD8;
loc_823A2EB4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823a2dc8
	if (!ctx.cr0.eq) goto loc_823A2DC8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2D90) {
	__imp__sub_823A2D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A2ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31799
	ctx.r28.s64 = -2083979264;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,13512(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// mullw r31,r11,r11
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822dacd8
	ctx.lr = 0x823A2EFC;
	sub_822DACD8(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lhz r4,13512(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// addi r31,r8,12560
	ctx.r31.s64 = ctx.r8.s64 + 12560;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x823a2d90
	ctx.lr = 0x823A2F54;
	sub_823A2D90(ctx, base);
	// lhz r4,13512(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 13512);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2bb8
	ctx.lr = 0x823A2F6C;
	sub_823A2BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dabb0
	ctx.lr = 0x823A2F74;
	sub_822DABB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2ED0) {
	__imp__sub_823A2ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A2F7C) {
	__imp__sub_823A2F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-29148
	ctx.r6.s64 = ctx.r11.s64 + -29148;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822e15d0
	sub_822E15D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2F80) {
	__imp__sub_823A2F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A2F94) {
	__imp__sub_823A2F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A2F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A2FA0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823ddff8
	ctx.lr = 0x823A2FA8;
	__savefpr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823cd028
	ctx.lr = 0x823A2FB0;
	sub_823CD028(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r11,-19156
	ctx.r8.s64 = ctx.r11.s64 + -19156;
	// addi r3,r10,-19168
	ctx.r3.s64 = ctx.r10.s64 + -19168;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A2FD8;
	sub_822E1618(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// addi r11,r11,13312
	ctx.r11.s64 = ctx.r11.s64 + 13312;
	// stw r3,12716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12716, ctx.r3.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823a3018
	if (ctx.cr6.eq) goto loc_823A3018;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lhz r5,34(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lbz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addi r6,r10,-19196
	ctx.r6.s64 = ctx.r10.s64 + -19196;
	// addi r3,r9,-19212
	ctx.r3.s64 = ctx.r9.s64 + -19212;
	// bl 0x822e15d0
	ctx.lr = 0x823A3010;
	sub_822E15D0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// stw r3,12628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12628, ctx.r3.u32);
loc_823A3018:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r3,r7,-19220
	ctx.r3.s64 = ctx.r7.s64 + -19220;
	// lfs f21,7544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f21.f64 = double(temp.f32);
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,-19232
	ctx.r8.s64 = ctx.r9.s64 + -19232;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3050;
	sub_822E1660(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-19256
	ctx.r6.s64 = ctx.r4.s64 + -19256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,12644(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12644, ctx.r3.u32);
	// addi r3,r11,-19272
	ctx.r3.s64 = ctx.r11.s64 + -19272;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x822e15d0
	ctx.lr = 0x823A3074;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// stw r3,12888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12888, ctx.r3.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f2,7344(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7344);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r6,-19312
	ctx.r8.s64 = ctx.r6.s64 + -19312;
	// lfs f20,14164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14164);
	ctx.f20.f64 = double(temp.f32);
	// addi r3,r5,-19328
	ctx.r3.s64 = ctx.r5.s64 + -19328;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A30B0;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-19376
	ctx.r8.s64 = ctx.r11.s64 + -19376;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12832(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12832, ctx.r3.u32);
	// addi r3,r10,-19396
	ctx.r3.s64 = ctx.r10.s64 + -19396;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822e1618
	ctx.lr = 0x823A30DC;
	sub_822E1618(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-19448
	ctx.r6.s64 = ctx.r8.s64 + -19448;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12828, ctx.r3.u32);
	// addi r3,r7,-19468
	ctx.r3.s64 = ctx.r7.s64 + -19468;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3100;
	sub_822E15D0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r8,r5,-19536
	ctx.r8.s64 = ctx.r5.s64 + -19536;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,13140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13140, ctx.r3.u32);
	// addi r3,r4,-19556
	ctx.r3.s64 = ctx.r4.s64 + -19556;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e1618
	ctx.lr = 0x823A312C;
	sub_822E1618(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r31,r9,-3960
	ctx.r31.s64 = ctx.r9.s64 + -3960;
	// stw r3,12872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12872, ctx.r3.u32);
	// addi r7,r10,-19640
	ctx.r7.s64 = ctx.r10.s64 + -19640;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r8,-19660
	ctx.r3.s64 = ctx.r8.s64 + -19660;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x823A315C;
	sub_822E1828(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lfs f1,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r3,12956(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12956, ctx.r3.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f30,26896(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 26896);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r4,-19688
	ctx.r8.s64 = ctx.r4.s64 + -19688;
	// addi r3,r3,-19708
	ctx.r3.s64 = ctx.r3.s64 + -19708;
	// lfs f3,-19664(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19664);
	ctx.f3.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3194;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r10,-19744
	ctx.r6.s64 = ctx.r10.s64 + -19744;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12972, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,-19760
	ctx.r3.s64 = ctx.r9.s64 + -19760;
	// bl 0x822e15d0
	ctx.lr = 0x823A31B8;
	sub_822E15D0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r7,r7,-19812
	ctx.r7.s64 = ctx.r7.s64 + -19812;
	// stw r3,12852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12852, ctx.r3.u32);
	// addi r3,r6,-19776
	ctx.r3.s64 = ctx.r6.s64 + -19776;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x823A31E0;
	sub_822E1828(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lfs f4,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f3,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// addi r8,r10,-19856
	ctx.r8.s64 = ctx.r10.s64 + -19856;
	// lfs f25,6056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6056);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r9,-19868
	ctx.r3.s64 = ctx.r9.s64 + -19868;
	// stw r11,12804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12804, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// fmr f6,f25
	ctx.f6.f64 = ctx.f25.f64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822e1790
	ctx.lr = 0x823A3228;
	sub_822E1790(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r3,12736(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12736, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f24,20560(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20560);
	ctx.f24.f64 = double(temp.f32);
	// addi r8,r4,-19960
	ctx.r8.s64 = ctx.r4.s64 + -19960;
	// lfs f31,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r11,-19968
	ctx.r3.s64 = ctx.r11.s64 + -19968;
	// lfs f27,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f27.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A326C;
	sub_822E1660(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-19996
	ctx.r8.s64 = ctx.r6.s64 + -19996;
	// stw r3,13156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13156, ctx.r3.u32);
	// addi r3,r5,-20016
	ctx.r3.s64 = ctx.r5.s64 + -20016;
	// lfs f19,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f19.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A32A0;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-20088
	ctx.r8.s64 = ctx.r10.s64 + -20088;
	// stw r3,12732(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12732, ctx.r3.u32);
	// addi r3,r9,-20096
	ctx.r3.s64 = ctx.r9.s64 + -20096;
	// lfs f28,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f28.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A32D4;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,-20128
	ctx.r6.s64 = ctx.r7.s64 + -20128;
	// stw r3,12640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12640, ctx.r3.u32);
	// addi r3,r5,-20104
	ctx.r3.s64 = ctx.r5.s64 + -20104;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A32F8;
	sub_822E15D0(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r3,13180(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13180, ctx.r3.u32);
	// addi r3,r7,-20152
	ctx.r3.s64 = ctx.r7.s64 + -20152;
	// lfs f31,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r9,-20240
	ctx.r8.s64 = ctx.r9.s64 + -20240;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,-11972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11972);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3330;
	sub_822E1660(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f3,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r5,-20328
	ctx.r8.s64 = ctx.r5.s64 + -20328;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12728(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12728, ctx.r3.u32);
	// addi r3,r4,-20348
	ctx.r3.s64 = ctx.r4.s64 + -20348;
	// bl 0x822e1660
	ctx.lr = 0x823A335C;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,-20400
	ctx.r7.s64 = ctx.r10.s64 + -20400;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// stw r3,12760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12760, ctx.r3.u32);
	// addi r3,r9,-20412
	ctx.r3.s64 = ctx.r9.s64 + -20412;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x823A3384;
	sub_822E1828(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r7,r7,-20480
	ctx.r7.s64 = ctx.r7.s64 + -20480;
	// stw r3,12916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12916, ctx.r3.u32);
	// addi r3,r6,-20424
	ctx.r3.s64 = ctx.r6.s64 + -20424;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x823A33AC;
	sub_822E1828(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r4,-20552
	ctx.r7.s64 = ctx.r4.s64 + -20552;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// stw r3,13060(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13060, ctx.r3.u32);
	// addi r3,r11,-20568
	ctx.r3.s64 = ctx.r11.s64 + -20568;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x823A33D4;
	sub_822E1828(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,-20616
	ctx.r7.s64 = ctx.r9.s64 + -20616;
	// stw r3,12624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12624, ctx.r3.u32);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r8,-20628
	ctx.r3.s64 = ctx.r8.s64 + -20628;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x823A33FC;
	sub_822E1828(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r5,-20704
	ctx.r7.s64 = ctx.r5.s64 + -20704;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// stw r3,13136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13136, ctx.r3.u32);
	// addi r3,r11,-20720
	ctx.r3.s64 = ctx.r11.s64 + -20720;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x823A3424;
	sub_822E1828(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,12896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12896, ctx.r3.u32);
	// addi r8,r6,-20772
	ctx.r8.s64 = ctx.r6.s64 + -20772;
	// lfs f1,14232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14232);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-20796
	ctx.r3.s64 = ctx.r5.s64 + -20796;
	// li r7,76
	ctx.r7.s64 = 76;
	// lfs f3,13220(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13220);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823A3458;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-20852
	ctx.r8.s64 = ctx.r10.s64 + -20852;
	// stw r3,12652(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12652, ctx.r3.u32);
	// addi r3,r9,-20872
	ctx.r3.s64 = ctx.r9.s64 + -20872;
	// lfs f26,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f26.f64 = double(temp.f32);
	// li r7,76
	ctx.r7.s64 = 76;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A348C;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,-20908
	ctx.r6.s64 = ctx.r7.s64 + -20908;
	// stw r3,12824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12824, ctx.r3.u32);
	// addi r3,r5,-19048
	ctx.r3.s64 = ctx.r5.s64 + -19048;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A34B0;
	sub_822E15D0(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r11,-20956
	ctx.r8.s64 = ctx.r11.s64 + -20956;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,13072(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13072, ctx.r3.u32);
	// addi r3,r10,-19084
	ctx.r3.s64 = ctx.r10.s64 + -19084;
	// bl 0x822e1660
	ctx.lr = 0x823A34DC;
	sub_822E1660(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// addi r8,r8,-21004
	ctx.r8.s64 = ctx.r8.s64 + -21004;
	// stw r3,12836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12836, ctx.r3.u32);
	// addi r3,r7,-19120
	ctx.r3.s64 = ctx.r7.s64 + -19120;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A3508;
	sub_822E1660(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-21072
	ctx.r6.s64 = ctx.r4.s64 + -21072;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,12856(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12856, ctx.r3.u32);
	// addi r3,r11,-21092
	ctx.r3.s64 = ctx.r11.s64 + -21092;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A352C;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// addi r8,r9,-21148
	ctx.r8.s64 = ctx.r9.s64 + -21148;
	// stw r3,13080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13080, ctx.r3.u32);
	// addi r3,r7,-21112
	ctx.r3.s64 = ctx.r7.s64 + -21112;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823A3558;
	sub_822E1660(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r8,r5,-21240
	ctx.r8.s64 = ctx.r5.s64 + -21240;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r3,12796(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12796, ctx.r3.u32);
	// addi r3,r4,-21256
	ctx.r3.s64 = ctx.r4.s64 + -21256;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A3584;
	sub_822E1618(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-21316
	ctx.r8.s64 = ctx.r10.s64 + -21316;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12860, ctx.r3.u32);
	// addi r3,r9,-21332
	ctx.r3.s64 = ctx.r9.s64 + -21332;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A35B0;
	sub_822E1618(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-21416
	ctx.r8.s64 = ctx.r6.s64 + -21416;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r3,13112(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13112, ctx.r3.u32);
	// addi r3,r5,-21432
	ctx.r3.s64 = ctx.r5.s64 + -21432;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A35DC;
	sub_822E1618(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-21496
	ctx.r6.s64 = ctx.r11.s64 + -21496;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,13160(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13160, ctx.r3.u32);
	// addi r3,r10,-21520
	ctx.r3.s64 = ctx.r10.s64 + -21520;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3600;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-21580
	ctx.r6.s64 = ctx.r8.s64 + -21580;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12996(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12996, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r7,-21604
	ctx.r3.s64 = ctx.r7.s64 + -21604;
	// bl 0x822e15d0
	ctx.lr = 0x823A3624;
	sub_822E15D0(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-21656
	ctx.r6.s64 = ctx.r4.s64 + -21656;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,12660(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12660, ctx.r3.u32);
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3648;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r9,-21736
	ctx.r6.s64 = ctx.r9.s64 + -21736;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r3,12876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12876, ctx.r3.u32);
	// addi r3,r8,-21760
	ctx.r3.s64 = ctx.r8.s64 + -21760;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A366C;
	sub_822E15D0(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,-21828
	ctx.r6.s64 = ctx.r6.s64 + -21828;
	// stw r3,13084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13084, ctx.r3.u32);
	// addi r3,r5,-21788
	ctx.r3.s64 = ctx.r5.s64 + -21788;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3690;
	sub_822E15D0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-21884
	ctx.r8.s64 = ctx.r10.s64 + -21884;
	// stw r3,12688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12688, ctx.r3.u32);
	// addi r3,r9,-21908
	ctx.r3.s64 = ctx.r9.s64 + -21908;
	// lfs f30,5488(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// li r7,72
	ctx.r7.s64 = 72;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A36C4;
	sub_822E1660(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f1,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r6,-21964
	ctx.r8.s64 = ctx.r6.s64 + -21964;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r3,12792(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12792, ctx.r3.u32);
	// addi r3,r5,-21984
	ctx.r3.s64 = ctx.r5.s64 + -21984;
	// li r7,72
	ctx.r7.s64 = 72;
	// bl 0x822e1660
	ctx.lr = 0x823A36F0;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-22012
	ctx.r6.s64 = ctx.r11.s64 + -22012;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12908(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12908, ctx.r3.u32);
	// addi r3,r10,-22028
	ctx.r3.s64 = ctx.r10.s64 + -22028;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3714;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r8,r8,-22208
	ctx.r8.s64 = ctx.r8.s64 + -22208;
	// stw r3,12932(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12932, ctx.r3.u32);
	// addi r3,r7,-22060
	ctx.r3.s64 = ctx.r7.s64 + -22060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e1618
	ctx.lr = 0x823A3740;
	sub_822E1618(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r4,-22328
	ctx.r8.s64 = ctx.r4.s64 + -22328;
	// stw r3,12668(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12668, ctx.r3.u32);
	// addi r3,r11,-22364
	ctx.r3.s64 = ctx.r11.s64 + -22364;
	// lfs f18,27440(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 27440);
	ctx.f18.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3774;
	sub_822E1660(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r28,r9,-22416
	ctx.r28.s64 = ctx.r9.s64 + -22416;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12744, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r8,-22436
	ctx.r3.s64 = ctx.r8.s64 + -22436;
	// bl 0x822e15d0
	ctx.lr = 0x823A379C;
	sub_822E15D0(ctx, base);
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,13096(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13096, ctx.r3.u32);
	// lfs f23,6040(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6040);
	ctx.f23.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r5,-22460
	ctx.r3.s64 = ctx.r5.s64 + -22460;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823A37CC;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-22512
	ctx.r8.s64 = ctx.r11.s64 + -22512;
	// stw r3,13184(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13184, ctx.r3.u32);
	// addi r3,r9,-22536
	ctx.r3.s64 = ctx.r9.s64 + -22536;
	// lfs f17,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f17.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f17
	ctx.f2.f64 = ctx.f17.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3800;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r3,12588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12588, ctx.r3.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f16,5996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5996);
	ctx.f16.f64 = double(temp.f32);
	// addi r8,r4,-22560
	ctx.r8.s64 = ctx.r4.s64 + -22560;
	// lfs f22,7324(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7324);
	ctx.f22.f64 = double(temp.f32);
	// addi r3,r3,-22580
	ctx.r3.s64 = ctx.r3.s64 + -22580;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,-23144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23144);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3840;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// addi r8,r10,-22644
	ctx.r8.s64 = ctx.r10.s64 + -22644;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,13032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13032, ctx.r3.u32);
	// addi r3,r9,-22668
	ctx.r3.s64 = ctx.r9.s64 + -22668;
	// bl 0x822e1660
	ctx.lr = 0x823A386C;
	sub_822E1660(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f2,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r6,-22760
	ctx.r8.s64 = ctx.r6.s64 + -22760;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stw r3,13124(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13124, ctx.r3.u32);
	// addi r3,r5,-22776
	ctx.r3.s64 = ctx.r5.s64 + -22776;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A3898;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-22824
	ctx.r6.s64 = ctx.r11.s64 + -22824;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,13020(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13020, ctx.r3.u32);
	// addi r3,r10,-22840
	ctx.r3.s64 = ctx.r10.s64 + -22840;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A38BC;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-22888
	ctx.r6.s64 = ctx.r8.s64 + -22888;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12756, ctx.r3.u32);
	// addi r3,r7,-22904
	ctx.r3.s64 = ctx.r7.s64 + -22904;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A38E0;
	sub_822E15D0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r28,r5,-29148
	ctx.r28.s64 = ctx.r5.s64 + -29148;
	// stw r3,12800(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12800, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r4,-22928
	ctx.r3.s64 = ctx.r4.s64 + -22928;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3908;
	sub_822E15D0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,12692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12692, ctx.r3.u32);
	// addi r3,r10,-22952
	ctx.r3.s64 = ctx.r10.s64 + -22952;
	// addi r27,r11,12692
	ctx.r27.s64 = ctx.r11.s64 + 12692;
	// bl 0x822e15d0
	ctx.lr = 0x823A392C;
	sub_822E15D0(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r9,-22976
	ctx.r3.s64 = ctx.r9.s64 + -22976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3948;
	sub_822E15D0(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-23020
	ctx.r6.s64 = ctx.r8.s64 + -23020;
	// addi r3,r7,-23036
	ctx.r3.s64 = ctx.r7.s64 + -23036;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3968;
	sub_822E15D0(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-23112
	ctx.r6.s64 = ctx.r4.s64 + -23112;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,12988(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12988, ctx.r3.u32);
	// addi r3,r11,-23124
	ctx.r3.s64 = ctx.r11.s64 + -23124;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A398C;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,-23168
	ctx.r7.s64 = ctx.r9.s64 + -23168;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// stw r3,12676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12676, ctx.r3.u32);
	// addi r3,r8,-23176
	ctx.r3.s64 = ctx.r8.s64 + -23176;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x823A39B4;
	sub_822E1828(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f4,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f4.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r9,r6,-23236
	ctx.r9.s64 = ctx.r6.s64 + -23236;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r3,12880(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12880, ctx.r3.u32);
	// addi r3,r5,-23252
	ctx.r3.s64 = ctx.r5.s64 + -23252;
	// bl 0x822e1890
	ctx.lr = 0x823A39E4;
	sub_822E1890(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f4,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r9,r11,-23320
	ctx.r9.s64 = ctx.r11.s64 + -23320;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r3,13056(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13056, ctx.r3.u32);
	// addi r3,r10,-23340
	ctx.r3.s64 = ctx.r10.s64 + -23340;
	// bl 0x822e1890
	ctx.lr = 0x823A3A14;
	sub_822E1890(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-23384
	ctx.r6.s64 = ctx.r8.s64 + -23384;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,13012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13012, ctx.r3.u32);
	// addi r3,r7,-23404
	ctx.r3.s64 = ctx.r7.s64 + -23404;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3A38;
	sub_822E15D0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r8,r5,-23460
	ctx.r8.s64 = ctx.r5.s64 + -23460;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,13008(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13008, ctx.r3.u32);
	// addi r3,r4,-23476
	ctx.r3.s64 = ctx.r4.s64 + -23476;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e1618
	ctx.lr = 0x823A3A64;
	sub_822E1618(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// addi r8,r10,-23568
	ctx.r8.s64 = ctx.r10.s64 + -23568;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r3,12892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12892, ctx.r3.u32);
	// addi r3,r9,-23596
	ctx.r3.s64 = ctx.r9.s64 + -23596;
	// bl 0x822e1660
	ctx.lr = 0x823A3A90;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r3,12844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12844, ctx.r3.u32);
	// addi r8,r5,-23660
	ctx.r8.s64 = ctx.r5.s64 + -23660;
	// lfs f20,4668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4668);
	ctx.f20.f64 = double(temp.f32);
	// addi r3,r4,-23684
	ctx.r3.s64 = ctx.r4.s64 + -23684;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f1,6060(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6060);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3AC8;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f2,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r3,12948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12948, ctx.r3.u32);
	// addi r3,r7,-23712
	ctx.r3.s64 = ctx.r7.s64 + -23712;
	// addi r8,r9,-23776
	ctx.r8.s64 = ctx.r9.s64 + -23776;
	// lfs f1,-23688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23688);
	ctx.f1.f64 = double(temp.f32);
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x823A3AF8;
	sub_822E1660(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-23808
	ctx.r6.s64 = ctx.r4.s64 + -23808;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,13164(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13164, ctx.r3.u32);
	// addi r3,r11,-23828
	ctx.r3.s64 = ctx.r11.s64 + -23828;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A3B1C;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r9,-23876
	ctx.r6.s64 = ctx.r9.s64 + -23876;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12848, ctx.r3.u32);
	// addi r3,r8,-23904
	ctx.r3.s64 = ctx.r8.s64 + -23904;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3B40;
	sub_822E15D0(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,-23972
	ctx.r6.s64 = ctx.r6.s64 + -23972;
	// stw r3,12772(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12772, ctx.r3.u32);
	// addi r3,r5,-23932
	ctx.r3.s64 = ctx.r5.s64 + -23932;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A3B64;
	sub_822E15D0(ctx, base);
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r3,13004(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13004, ctx.r3.u32);
	// addi r8,r10,-24064
	ctx.r8.s64 = ctx.r10.s64 + -24064;
	// addi r3,r9,-24092
	ctx.r3.s64 = ctx.r9.s64 + -24092;
	// lfs f1,27208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27208);
	ctx.f1.f64 = double(temp.f32);
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x823A3B94;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,12764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12764, ctx.r3.u32);
	// addi r8,r6,-24192
	ctx.r8.s64 = ctx.r6.s64 + -24192;
	// lfs f1,17968(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17968);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-24216
	ctx.r3.s64 = ctx.r5.s64 + -24216;
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x823A3BC4;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-24280
	ctx.r8.s64 = ctx.r11.s64 + -24280;
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r3,12684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12684, ctx.r3.u32);
	// addi r3,r10,-24300
	ctx.r3.s64 = ctx.r10.s64 + -24300;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e1618
	ctx.lr = 0x823A3BF0;
	sub_822E1618(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-24324
	ctx.r6.s64 = ctx.r8.s64 + -24324;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,13068(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13068, ctx.r3.u32);
	// addi r3,r7,-24336
	ctx.r3.s64 = ctx.r7.s64 + -24336;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3C14;
	sub_822E15D0(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-24432
	ctx.r6.s64 = ctx.r4.s64 + -24432;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,13052(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13052, ctx.r3.u32);
	// addi r3,r11,-24444
	ctx.r3.s64 = ctx.r11.s64 + -24444;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A3C38;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r9,-24536
	ctx.r6.s64 = ctx.r9.s64 + -24536;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12912, ctx.r3.u32);
	// addi r3,r8,-24548
	ctx.r3.s64 = ctx.r8.s64 + -24548;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3C5C;
	sub_822E15D0(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f2,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r8,r5,-24672
	ctx.r8.s64 = ctx.r5.s64 + -24672;
	// stw r3,13044(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13044, ctx.r3.u32);
	// addi r3,r4,-24688
	ctx.r3.s64 = ctx.r4.s64 + -24688;
	// lfs f20,7036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7036);
	ctx.f20.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A3C90;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r10,-24800
	ctx.r6.s64 = ctx.r10.s64 + -24800;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12784, ctx.r3.u32);
	// addi r3,r9,-24824
	ctx.r3.s64 = ctx.r9.s64 + -24824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3CB4;
	sub_822E15D0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,13148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13148, ctx.r3.u32);
	// addi r3,r5,-24944
	ctx.r3.s64 = ctx.r5.s64 + -24944;
	// addi r6,r7,-24928
	ctx.r6.s64 = ctx.r7.s64 + -24928;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A3CD8;
	sub_822E15D0(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-25032
	ctx.r8.s64 = ctx.r11.s64 + -25032;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12680(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12680, ctx.r3.u32);
	// addi r3,r10,-25052
	ctx.r3.s64 = ctx.r10.s64 + -25052;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A3D04;
	sub_822E1618(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f2,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-25144
	ctx.r8.s64 = ctx.r6.s64 + -25144;
	// stw r3,12740(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12740, ctx.r3.u32);
	// addi r3,r5,-25164
	ctx.r3.s64 = ctx.r5.s64 + -25164;
	// lfs f1,14192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14192);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823A3D34;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-25248
	ctx.r8.s64 = ctx.r11.s64 + -25248;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,13040(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13040, ctx.r3.u32);
	// addi r3,r10,-25272
	ctx.r3.s64 = ctx.r10.s64 + -25272;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e1618
	ctx.lr = 0x823A3D60;
	sub_822E1618(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r7,r8,-25340
	ctx.r7.s64 = ctx.r8.s64 + -25340;
	// stw r3,12592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12592, ctx.r3.u32);
	// addi r3,r6,-25292
	ctx.r3.s64 = ctx.r6.s64 + -25292;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x823A3D88;
	sub_822E1828(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r4,-25416
	ctx.r8.s64 = ctx.r4.s64 + -25416;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12992(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12992, ctx.r3.u32);
	// addi r3,r11,-25440
	ctx.r3.s64 = ctx.r11.s64 + -25440;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A3DB4;
	sub_822E1618(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r9,-25492
	ctx.r8.s64 = ctx.r9.s64 + -25492;
	// stw r3,13100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13100, ctx.r3.u32);
	// addi r3,r7,-25456
	ctx.r3.s64 = ctx.r7.s64 + -25456;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A3DE0;
	sub_822E1660(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r5,-25528
	ctx.r8.s64 = ctx.r5.s64 + -25528;
	// stw r3,13128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13128, ctx.r3.u32);
	// addi r3,r4,-25544
	ctx.r3.s64 = ctx.r4.s64 + -25544;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A3E0C;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,-25580
	ctx.r8.s64 = ctx.r10.s64 + -25580;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12940, ctx.r3.u32);
	// addi r3,r9,-25596
	ctx.r3.s64 = ctx.r9.s64 + -25596;
	// bl 0x822e1660
	ctx.lr = 0x823A3E38;
	sub_822E1660(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r8,r6,-25632
	ctx.r8.s64 = ctx.r6.s64 + -25632;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r3,12776(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12776, ctx.r3.u32);
	// addi r3,r5,-25648
	ctx.r3.s64 = ctx.r5.s64 + -25648;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A3E64;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r7,r11,-25688
	ctx.r7.s64 = ctx.r11.s64 + -25688;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,12648(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12648, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-25700
	ctx.r3.s64 = ctx.r10.s64 + -25700;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e1828
	ctx.lr = 0x823A3E8C;
	sub_822E1828(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-25724
	ctx.r6.s64 = ctx.r8.s64 + -25724;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,13132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13132, ctx.r3.u32);
	// addi r3,r7,-25736
	ctx.r3.s64 = ctx.r7.s64 + -25736;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3EB0;
	sub_822E15D0(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-25776
	ctx.r6.s64 = ctx.r4.s64 + -25776;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,12976(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12976, ctx.r3.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r3,r11,-25792
	ctx.r3.s64 = ctx.r11.s64 + -25792;
	// bl 0x822e15d0
	ctx.lr = 0x823A3ED4;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r9,-25832
	ctx.r6.s64 = ctx.r9.s64 + -25832;
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r3,12608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12608, ctx.r3.u32);
	// addi r3,r8,-25848
	ctx.r3.s64 = ctx.r8.s64 + -25848;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A3EF8;
	sub_822E15D0(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-25892
	ctx.r8.s64 = ctx.r6.s64 + -25892;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,12612(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12612, ctx.r3.u32);
	// addi r3,r5,-25908
	ctx.r3.s64 = ctx.r5.s64 + -25908;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e1618
	ctx.lr = 0x823A3F24;
	sub_822E1618(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-25960
	ctx.r8.s64 = ctx.r11.s64 + -25960;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12616(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12616, ctx.r3.u32);
	// addi r3,r10,-25976
	ctx.r3.s64 = ctx.r10.s64 + -25976;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e1618
	ctx.lr = 0x823A3F50;
	sub_822E1618(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-26096
	ctx.r8.s64 = ctx.r6.s64 + -26096;
	// stw r3,12656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12656, ctx.r3.u32);
	// addi r3,r5,-26124
	ctx.r3.s64 = ctx.r5.s64 + -26124;
	// lfs f3,-14540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14540);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823A3F80;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// addi r8,r11,-26200
	ctx.r8.s64 = ctx.r11.s64 + -26200;
	// fmr f2,f17
	ctx.f2.f64 = ctx.f17.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12816, ctx.r3.u32);
	// addi r3,r10,-26224
	ctx.r3.s64 = ctx.r10.s64 + -26224;
	// bl 0x822e1660
	ctx.lr = 0x823A3FAC;
	sub_822E1660(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-26328
	ctx.r8.s64 = ctx.r6.s64 + -26328;
	// stw r3,12632(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12632, ctx.r3.u32);
	// addi r3,r5,-26360
	ctx.r3.s64 = ctx.r5.s64 + -26360;
	// lfs f3,-19192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19192);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823A3FDC;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f2,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-26496
	ctx.r8.s64 = ctx.r10.s64 + -26496;
	// stw r3,12968(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12968, ctx.r3.u32);
	// addi r3,r9,-26532
	ctx.r3.s64 = ctx.r9.s64 + -26532;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,14156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823A400C;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,12964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12964, ctx.r3.u32);
	// addi r8,r6,-26556
	ctx.r8.s64 = ctx.r6.s64 + -26556;
	// lfs f24,6016(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6016);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r5,-26580
	ctx.r3.s64 = ctx.r5.s64 + -26580;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A4040;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-26604
	ctx.r8.s64 = ctx.r10.s64 + -26604;
	// stw r3,12712(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12712, ctx.r3.u32);
	// addi r3,r9,-26628
	ctx.r3.s64 = ctx.r9.s64 + -26628;
	// lfs f25,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f25.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A4074;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,13188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13188, ctx.r3.u32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f2,17644(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f18,5880(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5880);
	ctx.f18.f64 = double(temp.f32);
	// addi r8,r5,-26648
	ctx.r8.s64 = ctx.r5.s64 + -26648;
	// addi r3,r4,-26672
	ctx.r3.s64 = ctx.r4.s64 + -26672;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x823A40AC;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// addi r10,r8,-26720
	ctx.r10.s64 = ctx.r8.s64 + -26720;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stw r3,13000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13000, ctx.r3.u32);
	// addi r3,r7,-26740
	ctx.r3.s64 = ctx.r7.s64 + -26740;
	// lfs f17,6688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6688);
	ctx.f17.f64 = double(temp.f32);
	// li r9,68
	ctx.r9.s64 = 68;
	// fmr f4,f17
	ctx.f4.f64 = ctx.f17.f64;
	// bl 0x822e16f0
	ctx.lr = 0x823A40E8;
	sub_822E16F0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// addi r8,r5,-26772
	ctx.r8.s64 = ctx.r5.s64 + -26772;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// li r7,76
	ctx.r7.s64 = 76;
	// stw r3,13024(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13024, ctx.r3.u32);
	// addi r3,r4,-26792
	ctx.r3.s64 = ctx.r4.s64 + -26792;
	// bl 0x822e1660
	ctx.lr = 0x823A4114;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r10,-26816
	ctx.r6.s64 = ctx.r10.s64 + -26816;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,13176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13176, ctx.r3.u32);
	// addi r3,r9,-26832
	ctx.r3.s64 = ctx.r9.s64 + -26832;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A4138;
	sub_822E15D0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,-26876
	ctx.r6.s64 = ctx.r7.s64 + -26876;
	// stw r3,12752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12752, ctx.r3.u32);
	// addi r3,r5,-26848
	ctx.r3.s64 = ctx.r5.s64 + -26848;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A415C;
	sub_822E15D0(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-26892
	ctx.r6.s64 = ctx.r11.s64 + -26892;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12596(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12596, ctx.r3.u32);
	// addi r3,r10,-26912
	ctx.r3.s64 = ctx.r10.s64 + -26912;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A4180;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-26932
	ctx.r6.s64 = ctx.r8.s64 + -26932;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12920, ctx.r3.u32);
	// addi r3,r7,-26956
	ctx.r3.s64 = ctx.r7.s64 + -26956;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A41A4;
	sub_822E15D0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r5,-27040
	ctx.r8.s64 = ctx.r5.s64 + -27040;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,13144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13144, ctx.r3.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// bl 0x822e1618
	ctx.lr = 0x823A41D0;
	sub_822E1618(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r8,r9,-27132
	ctx.r8.s64 = ctx.r9.s64 + -27132;
	// stw r3,13108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13108, ctx.r3.u32);
	// addi r3,r7,-27080
	ctx.r3.s64 = ctx.r7.s64 + -27080;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A41FC;
	sub_822E1618(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// addi r8,r5,-27164
	ctx.r8.s64 = ctx.r5.s64 + -27164;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12768(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12768, ctx.r3.u32);
	// addi r3,r4,-27172
	ctx.r3.s64 = ctx.r4.s64 + -27172;
	// bl 0x822e1660
	ctx.lr = 0x823A4228;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r10,-27192
	ctx.r6.s64 = ctx.r10.s64 + -27192;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,13064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13064, ctx.r3.u32);
	// addi r3,r9,-27208
	ctx.r3.s64 = ctx.r9.s64 + -27208;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A424C;
	sub_822E15D0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,-27236
	ctx.r6.s64 = ctx.r7.s64 + -27236;
	// stw r3,12664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12664, ctx.r3.u32);
	// addi r3,r5,-27224
	ctx.r3.s64 = ctx.r5.s64 + -27224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A4270;
	sub_822E15D0(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-27292
	ctx.r6.s64 = ctx.r11.s64 + -27292;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,12620(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12620, ctx.r3.u32);
	// addi r3,r10,-27324
	ctx.r3.s64 = ctx.r10.s64 + -27324;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A4294;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r8,-27340
	ctx.r6.s64 = ctx.r8.s64 + -27340;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,13092(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13092, ctx.r3.u32);
	// addi r3,r7,-18680
	ctx.r3.s64 = ctx.r7.s64 + -18680;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A42B8;
	sub_822E15D0(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r4,-27380
	ctx.r6.s64 = ctx.r4.s64 + -27380;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,12928(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12928, ctx.r3.u32);
	// addi r3,r11,-27396
	ctx.r3.s64 = ctx.r11.s64 + -27396;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A42DC;
	sub_822E15D0(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r9,-27424
	ctx.r6.s64 = ctx.r9.s64 + -27424;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12724, ctx.r3.u32);
	// addi r3,r8,-17908
	ctx.r3.s64 = ctx.r8.s64 + -17908;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A4300;
	sub_822E15D0(ctx, base);
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,13028(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13028, ctx.r3.u32);
	// addi r8,r6,-20808
	ctx.r8.s64 = ctx.r6.s64 + -20808;
	// addi r3,r5,-17928
	ctx.r3.s64 = ctx.r5.s64 + -17928;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A432C;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r11,-27460
	ctx.r8.s64 = ctx.r11.s64 + -27460;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,13172(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13172, ctx.r3.u32);
	// addi r3,r10,-18040
	ctx.r3.s64 = ctx.r10.s64 + -18040;
	// bl 0x822e1660
	ctx.lr = 0x823A4358;
	sub_822E1660(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f2,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r8,-27504
	ctx.r8.s64 = ctx.r8.s64 + -27504;
	// stw r3,12960(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12960, ctx.r3.u32);
	// addi r3,r7,-18092
	ctx.r3.s64 = ctx.r7.s64 + -18092;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A4384;
	sub_822E1660(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f3,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r5,-27544
	ctx.r8.s64 = ctx.r5.s64 + -27544;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12936(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12936, ctx.r3.u32);
	// addi r3,r4,-18124
	ctx.r3.s64 = ctx.r4.s64 + -18124;
	// bl 0x822e1660
	ctx.lr = 0x823A43B0;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r10,-27592
	ctx.r6.s64 = ctx.r10.s64 + -27592;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12704, ctx.r3.u32);
	// addi r3,r9,-27608
	ctx.r3.s64 = ctx.r9.s64 + -27608;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A43D4;
	sub_822E15D0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,-27696
	ctx.r6.s64 = ctx.r7.s64 + -27696;
	// stw r3,12672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12672, ctx.r3.u32);
	// addi r3,r5,-27624
	ctx.r3.s64 = ctx.r5.s64 + -27624;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x823A43F8;
	sub_822E15D0(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-27744
	ctx.r6.s64 = ctx.r11.s64 + -27744;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,12980(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12980, ctx.r3.u32);
	// addi r3,r10,-17616
	ctx.r3.s64 = ctx.r10.s64 + -17616;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A441C;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-20844
	ctx.r8.s64 = ctx.r6.s64 + -20844;
	// stw r3,12952(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12952, ctx.r3.u32);
	// addi r3,r5,-17636
	ctx.r3.s64 = ctx.r5.s64 + -17636;
	// lfs f1,14248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14248);
	ctx.f1.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x823A444C;
	sub_822E1660(ctx, base);
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,12864(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12864, ctx.r3.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-27764
	ctx.r8.s64 = ctx.r11.s64 + -27764;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r10,-27776
	ctx.r3.s64 = ctx.r10.s64 + -27776;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A4478;
	sub_822E1660(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f1,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r8,-27816
	ctx.r8.s64 = ctx.r8.s64 + -27816;
	// stw r3,12748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12748, ctx.r3.u32);
	// addi r3,r6,-27792
	ctx.r3.s64 = ctx.r6.s64 + -27792;
	// bl 0x822e1660
	ctx.lr = 0x823A44A4;
	sub_822E1660(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,12168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r4,-27840
	ctx.r8.s64 = ctx.r4.s64 + -27840;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12788(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12788, ctx.r3.u32);
	// addi r3,r11,-27856
	ctx.r3.s64 = ctx.r11.s64 + -27856;
	// bl 0x822e1660
	ctx.lr = 0x823A44D0;
	sub_822E1660(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r9,-20912
	ctx.r8.s64 = ctx.r9.s64 + -20912;
	// stw r3,12604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12604, ctx.r3.u32);
	// addi r3,r7,-17660
	ctx.r3.s64 = ctx.r7.s64 + -17660;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x823A44FC;
	sub_822E1660(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r8,r4,-27928
	ctx.r8.s64 = ctx.r4.s64 + -27928;
	// stw r3,13116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13116, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f31,13216(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13216);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r3,-17684
	ctx.r3.s64 = ctx.r3.s64 + -17684;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A4530;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,-28016
	ctx.r8.s64 = ctx.r10.s64 + -28016;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r3,12868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12868, ctx.r3.u32);
	// addi r3,r9,-17712
	ctx.r3.s64 = ctx.r9.s64 + -17712;
	// bl 0x822e1660
	ctx.lr = 0x823A455C;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,-28060
	ctx.r6.s64 = ctx.r7.s64 + -28060;
	// stw r3,12720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12720, ctx.r3.u32);
	// addi r3,r5,-17732
	ctx.r3.s64 = ctx.r5.s64 + -17732;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x823A4580;
	sub_822E15D0(ctx, base);
	// lfs f3,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,12904(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12904, ctx.r3.u32);
	// addi r3,r8,-17800
	ctx.r3.s64 = ctx.r8.s64 + -17800;
	// lfs f31,12260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12260);
	ctx.f31.f64 = double(temp.f32);
	// addi r9,r10,-21076
	ctx.r9.s64 = ctx.r10.s64 + -21076;
	// li r8,64
	ctx.r8.s64 = 64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1740
	ctx.lr = 0x823A45B8;
	sub_822E1740(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f2,12168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r9,r5,-28104
	ctx.r9.s64 = ctx.r5.s64 + -28104;
	// stw r3,13016(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13016, ctx.r3.u32);
	// addi r3,r4,-17780
	ctx.r3.s64 = ctx.r4.s64 + -17780;
	// lfs f3,19444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19444);
	ctx.f3.f64 = double(temp.f32);
	// li r8,64
	ctx.r8.s64 = 64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822e1740
	ctx.lr = 0x823A45EC;
	sub_822E1740(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,12780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12780, ctx.r3.u32);
	// addi r9,r6,-21180
	ctx.r9.s64 = ctx.r6.s64 + -21180;
	// li r8,64
	ctx.r8.s64 = 64;
	// lfs f2,9412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9412);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r5,-17756
	ctx.r3.s64 = ctx.r5.s64 + -17756;
	// lfs f1,14220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1740
	ctx.lr = 0x823A4624;
	sub_822E1740(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-28140
	ctx.r6.s64 = ctx.r11.s64 + -28140;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12944(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12944, ctx.r3.u32);
	// addi r3,r10,-28156
	ctx.r3.s64 = ctx.r10.s64 + -28156;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x823A4648;
	sub_822E15D0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,-28224
	ctx.r6.s64 = ctx.r8.s64 + -28224;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,12984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12984, ctx.r3.u32);
	// addi r3,r7,-28236
	ctx.r3.s64 = ctx.r7.s64 + -28236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A466C;
	sub_822E15D0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f26.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r31,r5,-28320
	ctx.r31.s64 = ctx.r5.s64 + -28320;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,13076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13076, ctx.r3.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r3,-28340
	ctx.r3.s64 = ctx.r3.s64 + -28340;
	// lfs f1,23112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 23112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823A46A0;
	sub_822E1660(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,13036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13036, ctx.r3.u32);
	// addi r3,r9,-28356
	ctx.r3.s64 = ctx.r9.s64 + -28356;
	// lfs f1,14212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823A46CC;
	sub_822E1660(ctx, base);
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// stw r3,13168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13168, ctx.r3.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f31,3096(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3096);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r6,-28408
	ctx.r8.s64 = ctx.r6.s64 + -28408;
	// addi r3,r5,-28432
	ctx.r3.s64 = ctx.r5.s64 + -28432;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A4700;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r11,-28484
	ctx.r8.s64 = ctx.r11.s64 + -28484;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12808(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12808, ctx.r3.u32);
	// addi r3,r10,-28504
	ctx.r3.s64 = ctx.r10.s64 + -28504;
	// bl 0x822e1660
	ctx.lr = 0x823A472C;
	sub_822E1660(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r8,r6,-28552
	ctx.r8.s64 = ctx.r6.s64 + -28552;
	// stw r3,12812(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12812, ctx.r3.u32);
	// addi r3,r5,-28568
	ctx.r3.s64 = ctx.r5.s64 + -28568;
	// lfs f31,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A4760;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-28612
	ctx.r8.s64 = ctx.r10.s64 + -28612;
	// stw r3,13088(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13088, ctx.r3.u32);
	// addi r3,r9,-28628
	ctx.r3.s64 = ctx.r9.s64 + -28628;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823A4790;
	sub_822E1660(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f2,5484(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,12600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12600, ctx.r3.u32);
	// addi r8,r6,-28680
	ctx.r8.s64 = ctx.r6.s64 + -28680;
	// lfs f31,-28632(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28632);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r5,-28696
	ctx.r3.s64 = ctx.r5.s64 + -28696;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x823A47C4;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f2,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-28744
	ctx.r8.s64 = ctx.r10.s64 + -28744;
	// stw r3,12636(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12636, ctx.r3.u32);
	// addi r3,r9,-28760
	ctx.r3.s64 = ctx.r9.s64 + -28760;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,-28700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28700);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823A47F4;
	sub_822E1660(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f3,f21
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f21.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f2,f19
	ctx.f2.f64 = ctx.f19.f64;
	// addi r8,r6,-28840
	ctx.r8.s64 = ctx.r6.s64 + -28840;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r3,13152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13152, ctx.r3.u32);
	// addi r3,r5,-28856
	ctx.r3.s64 = ctx.r5.s64 + -28856;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x823A4820;
	sub_822E1660(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// stw r3,13048(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13048, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,-28912
	ctx.r8.s64 = ctx.r11.s64 + -28912;
	// addi r3,r10,-28944
	ctx.r3.s64 = ctx.r10.s64 + -28944;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x822e1618
	ctx.lr = 0x823A484C;
	sub_822E1618(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// fmr f2,f17
	ctx.f2.f64 = ctx.f17.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// addi r8,r8,-28992
	ctx.r8.s64 = ctx.r8.s64 + -28992;
	// stw r3,12900(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12900, ctx.r3.u32);
	// addi r3,r7,-28964
	ctx.r3.s64 = ctx.r7.s64 + -28964;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x823A4878;
	sub_822E1660(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// stw r3,12820(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12820, ctx.r3.u32);
	// bl 0x822e0238
	ctx.lr = 0x823A4884;
	sub_822E0238(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r6,r5,-29048
	ctx.r6.s64 = ctx.r5.s64 + -29048;
	// addi r3,r4,-29068
	ctx.r3.s64 = ctx.r4.s64 + -29068;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A48A0;
	sub_822E15D0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-29108
	ctx.r8.s64 = ctx.r10.s64 + -29108;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,13104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13104, ctx.r3.u32);
	// addi r3,r9,-29124
	ctx.r3.s64 = ctx.r9.s64 + -29124;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x822e1618
	ctx.lr = 0x823A48CC;
	sub_822E1618(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,22352
	ctx.r8.s64 = ctx.r6.s64 + 22352;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r3,12708(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12708, ctx.r3.u32);
	// addi r3,r5,22340
	ctx.r3.s64 = ctx.r5.s64 + 22340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x823A48F8;
	sub_822E1618(ctx, base);
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r11,12596
	ctx.r6.s64 = ctx.r11.s64 + 12596;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,13120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13120, ctx.r3.u32);
	// addi r3,r10,12584
	ctx.r3.s64 = ctx.r10.s64 + 12584;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823A491C;
	sub_822E15D0(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// stw r3,-9436(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9436, ctx.r3.u32);
	// bl 0x82187ea0
	ctx.lr = 0x823A4928;
	sub_82187EA0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de044
	ctx.lr = 0x823A4934;
	__restfpr_16(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A2F98) {
	__imp__sub_823A2F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4938) {
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
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a4964
	if (!ctx.cr6.eq) goto loc_823A4964;
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
loc_823A4964:
	// bl 0x822e0228
	ctx.lr = 0x823A4968;
	sub_822E0228(ctx, base);
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

PPC_WEAK_FUNC(sub_823A4938) {
	__imp__sub_823A4938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A497C) {
	__imp__sub_823A497C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4980) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A4980) {
	__imp__sub_823A4980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4998) {
	PPC_FUNC_PROLOGUE();
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A4998) {
	__imp__sub_823A4998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A49A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A49A0) {
	__imp__sub_823A49A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A49C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r3,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r3.s64 = ctx.r5.s64 >> temp.u64;
	// srd r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r10.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A49C8) {
	__imp__sub_823A49C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A49F4) {
	__imp__sub_823A49F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A49F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A49F8) {
	__imp__sub_823A49F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A4A0C) {
	__imp__sub_823A4A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4A10) {
	PPC_FUNC_PROLOGUE();
	// subfic r11,r4,95
	ctx.xer.ca = ctx.r4.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r4.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r9,r11,21846
	ctx.r9.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x820c0db0
	sub_820C0DB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4A10) {
	__imp__sub_823A4A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A4A34) {
	__imp__sub_823A4A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r6,r8,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r8.s64;
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r11,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r11.s64 = ctx.r5.s64 >> temp.u64;
	// srd r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A4A38) {
	__imp__sub_823A4A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A4A94) {
	__imp__sub_823A4A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x820b8988
	sub_820B8988(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4A98) {
	__imp__sub_823A4A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A4AC4) {
	__imp__sub_823A4AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A4AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// bl 0x820b93a8
	ctx.lr = 0x823A4AE0;
	sub_820B93A8(ctx, base);
	// lis r30,-31780
	ctx.r30.s64 = -2082734080;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r29,r30,13324
	ctx.r29.s64 = ctx.r30.s64 + 13324;
	// addi r31,r10,-3024
	ctx.r31.s64 = ctx.r10.s64 + -3024;
	// stw r3,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// addi r3,r31,-776
	ctx.r3.s64 = ctx.r31.s64 + -776;
	// bl 0x820b8f70
	ctx.lr = 0x823A4AFC;
	sub_820B8F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x820b8b90
	ctx.lr = 0x823A4B0C;
	sub_820B8B90(ctx, base);
	// stw r3,13324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13324, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822e54e0
	ctx.lr = 0x823A4B20;
	sub_822E54E0(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,13312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13312, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4AC8) {
	__imp__sub_823A4AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A4B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,13440
	ctx.r31.s64 = ctx.r11.s64 + 13440;
	// ori r9,r10,9668
	ctx.r9.u64 = ctx.r10.u64 | 9668;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// ble cr6,0x823a4bac
	if (!ctx.cr6.gt) goto loc_823A4BAC;
loc_823A4B74:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r9,-22524
	ctx.r9.s64 = ctx.r9.s64 + -22524;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x823a4b9c
	if (!ctx.cr6.gt) goto loc_823A4B9C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x823a4ba0
	goto loc_823A4BA0;
loc_823A4B9C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823A4BA0:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823a4b74
	if (ctx.cr6.lt) goto loc_823A4B74;
loc_823A4BAC:
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,-22528
	ctx.r9.s64 = ctx.r9.s64 + -22528;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x823a4c38
	if (ctx.cr6.lt) goto loc_823A4C38;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823a4c38
	if (!ctx.cr6.eq) goto loc_823A4C38;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// ori r8,r9,9668
	ctx.r8.u64 = ctx.r9.u64 | 9668;
	// lwzx r9,r31,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823a4c8c
	if (!ctx.cr6.lt) goto loc_823A4C8C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823a4c8c
	if (!ctx.cr6.eq) goto loc_823A4C8C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r9,9668
	ctx.r6.u64 = ctx.r9.u64 | 9668;
	// ori r5,r7,9668
	ctx.r5.u64 = ctx.r7.u64 | 9668;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823de130
	ctx.lr = 0x823A4C34;
	sub_823DE130(ctx, base);
	// b 0x823a4c8c
	goto loc_823A4C8C;
loc_823A4C38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823a4c54
	if (!ctx.cr6.lt) goto loc_823A4C54;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823a4c88
	if (ctx.cr6.eq) goto loc_823A4C88;
loc_823A4C54:
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x823de130
	ctx.lr = 0x823A4C68;
	sub_823DE130(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,9668
	ctx.r8.u64 = ctx.r10.u64 | 9668;
	// ori r7,r9,9668
	ctx.r7.u64 = ctx.r9.u64 | 9668;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_823A4C88:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_823A4C8C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// ori r11,r11,9680
	ctx.r11.u64 = ctx.r11.u64 | 9680;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4B38) {
	__imp__sub_823A4B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A4CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82179de8
	ctx.lr = 0x823A4CC8;
	sub_82179DE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A4CD8;
	sub_823A4B38(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,13440
	ctx.r9.s64 = ctx.r11.s64 + 13440;
	// ori r8,r10,9684
	ctx.r8.u64 = ctx.r10.u64 | 9684;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x82179e70
	ctx.lr = 0x823A4CF4;
	sub_82179E70(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823a4d00
	if (ctx.cr6.eq) goto loc_823A4D00;
	// bl 0x823aee78
	ctx.lr = 0x823A4D00;
	sub_823AEE78(ctx, base);
loc_823A4D00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4CB0) {
	__imp__sub_823A4CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4D08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,71(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a4d8c
	if (ctx.cr6.eq) goto loc_823A4D8C;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a4d8c
	if (ctx.cr6.eq) goto loc_823A4D8C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r7,r11,13440
	ctx.r7.s64 = ctx.r11.s64 + 13440;
	// ori r4,r9,9664
	ctx.r4.u64 = ctx.r9.u64 | 9664;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a4d8c
	if (ctx.cr6.eq) goto loc_823A4D8C;
loc_823A4D48:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823a4d74
	if (ctx.cr6.lt) goto loc_823A4D74;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x823a4d84
	goto loc_823A4D84;
loc_823A4D74:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_823A4D84:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a4d48
	if (ctx.cr6.lt) goto loc_823A4D48;
loc_823A4D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A4D08) {
	__imp__sub_823A4D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A4D94) {
	__imp__sub_823A4D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A4DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823a4d08
	ctx.lr = 0x823A4DA8;
	sub_823A4D08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4e28
	if (ctx.cr6.eq) goto loc_823A4E28;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,13440
	ctx.r31.s64 = ctx.r11.s64 + 13440;
	// ori r9,r10,9664
	ctx.r9.u64 = ctx.r10.u64 | 9664;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r6,12
	ctx.r6.s64 = 12;
	// ori r7,r8,9664
	ctx.r7.u64 = ctx.r8.u64 | 9664;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// divw r11,r10,r6
	ctx.r11.s32 = ctx.r10.s32 / ctx.r6.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de130
	ctx.lr = 0x823A4E0C;
	sub_823DE130(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A4E18;
	sub_823A4B38(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r7,r8,9684
	ctx.r7.u64 = ctx.r8.u64 | 9684;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
loc_823A4E28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4D98) {
	__imp__sub_823A4D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4E30) {
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
	// bl 0x823a4d98
	ctx.lr = 0x823A4E48;
	sub_823A4D98(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a4e70
	if (ctx.cr6.eq) goto loc_823A4E70;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_823A4E70:
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

PPC_WEAK_FUNC(sub_823A4E30) {
	__imp__sub_823A4E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A4E84) {
	__imp__sub_823A4E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4E88) {
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
	// bl 0x82174268
	ctx.lr = 0x823A4E98;
	sub_82174268(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// addi r8,r11,13440
	ctx.r8.s64 = ctx.r11.s64 + 13440;
	// rlwinm r5,r3,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,9216
	ctx.r11.s64 = ctx.r11.s64 + 9216;
	// addi r6,r7,17280
	ctx.r6.s64 = ctx.r7.s64 + 17280;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r7,r4,9672
	ctx.r7.u64 = ctx.r4.u64 | 9672;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A4E88) {
	__imp__sub_823A4E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A4EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A4EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r27,60(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r30,r11,13440
	ctx.r30.s64 = ctx.r11.s64 + 13440;
	// ori r8,r10,9664
	ctx.r8.u64 = ctx.r10.u64 | 9664;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// ble cr6,0x823a4f68
	if (!ctx.cr6.gt) goto loc_823A4F68;
loc_823A4F2C:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x823a4f58
	if (!ctx.cr6.gt) goto loc_823A4F58;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x823a4f5c
	goto loc_823A4F5C;
loc_823A4F58:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_823A4F5C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823a4f2c
	if (ctx.cr6.lt) goto loc_823A4F2C;
loc_823A4F68:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823de130
	ctx.lr = 0x823A4F94;
	sub_823DE130(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r7,9664
	ctx.r5.u64 = ctx.r7.u64 | 9664;
	// ori r4,r6,9664
	ctx.r4.u64 = ctx.r6.u64 | 9664;
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x82174268
	ctx.lr = 0x823A4FC8;
	sub_82174268(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// addi r10,r10,9216
	ctx.r10.s64 = ctx.r10.s64 + 9216;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r4,r6,9672
	ctx.r4.u64 = ctx.r6.u64 | 9672;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r9,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A4EE8) {
	__imp__sub_823A4EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5008) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r9,r10,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// stb r9,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r9.u8);
	// lhz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 76);
	// sth r8,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r8.u16);
	// lhz r7,78(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// sth r7,66(r3)
	PPC_STORE_U16(ctx.r3.u32 + 66, ctx.r7.u16);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// clrlwi r11,r6,6
	ctx.r11.u64 = ctx.r6.u32 & 0x3FFFFFF;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x823a4ee8
	sub_823A4EE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5008) {
	__imp__sub_823A5008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r7,r11,13440
	ctx.r7.s64 = ctx.r11.s64 + 13440;
	// ori r9,r10,9664
	ctx.r9.u64 = ctx.r10.u64 | 9664;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a50a4
	if (ctx.cr6.eq) goto loc_823A50A4;
loc_823A5060:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823a508c
	if (ctx.cr6.lt) goto loc_823A508C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x823a509c
	goto loc_823A509C;
loc_823A508C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x823a50ac
	if (ctx.cr6.gt) goto loc_823A50AC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_823A509C:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a5060
	if (ctx.cr6.lt) goto loc_823A5060;
loc_823A50A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A50AC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A5040) {
	__imp__sub_823A5040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A50B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A50B4) {
	__imp__sub_823A50B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A50B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A50C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,13440
	ctx.r30.s64 = ctx.r11.s64 + 13440;
	// ori r9,r10,9668
	ctx.r9.u64 = ctx.r10.u64 | 9668;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a52c4
	if (ctx.cr6.eq) goto loc_823A52C4;
loc_823A50F0:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r10,-22528
	ctx.r9.s64 = ctx.r10.s64 + -22528;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823a511c
	if (ctx.cr6.lt) goto loc_823A511C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x823a512c
	goto loc_823A512C;
loc_823A511C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x823a513c
	if (ctx.cr6.gt) goto loc_823A513C;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_823A512C:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823a50f0
	if (ctx.cr6.lt) goto loc_823A50F0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823A513C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823a516c
	if (ctx.cr0.lt) goto loc_823A516C;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,-22524
	ctx.r9.s64 = ctx.r9.s64 + -22524;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823A5154:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823a516c
	if (!ctx.cr6.gt) goto loc_823A516C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x823a5154
	if (!ctx.cr0.lt) goto loc_823A5154;
loc_823A516C:
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823a52c4
	if (!ctx.cr6.lt) goto loc_823A52C4;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,-22528
	ctx.r9.s64 = ctx.r9.s64 + -22528;
	// addi r10,r10,-22520
	ctx.r10.s64 = ctx.r10.s64 + -22520;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r31,r11,9680
	ctx.r31.u64 = ctx.r11.u64 | 9680;
loc_823A519C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823a52c4
	if (!ctx.cr6.lt) goto loc_823A52C4;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x823a5240
	if (!ctx.cr6.lt) goto loc_823A5240;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x823a51e0
	if (ctx.cr6.gt) goto loc_823A51E0;
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// b 0x823a52b0
	goto loc_823A52B0;
loc_823A51E0:
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,9668
	ctx.r7.u64 = ctx.r9.u64 | 9668;
	// stwx r8,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// subf r6,r27,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r27.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823de130
	ctx.lr = 0x823A520C;
	sub_823DE130(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// ori r3,r5,9668
	ctx.r3.u64 = ctx.r5.u64 | 9668;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// ori r10,r4,9668
	ctx.r10.u64 = ctx.r4.u64 | 9668;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stwx r9,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x823a52b0
	goto loc_823A52B0;
loc_823A5240:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823a5270
	if (!ctx.cr6.gt) goto loc_823A5270;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// b 0x823a52b0
	goto loc_823A52B0;
loc_823A5270:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,9668
	ctx.r6.u64 = ctx.r8.u64 | 9668;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r5,r7,9668
	ctx.r5.u64 = ctx.r7.u64 | 9668;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// subf r9,r27,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r27.s64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823de130
	ctx.lr = 0x823A52B0;
	sub_823DE130(ctx, base);
loc_823A52B0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9668
	ctx.r10.u64 = ctx.r11.u64 | 9668;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a519c
	if (ctx.cr6.lt) goto loc_823A519C;
loc_823A52C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A50B8) {
	__imp__sub_823A50B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A52CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A52CC) {
	__imp__sub_823A52CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A52D0) {
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
	// bl 0x82179de8
	ctx.lr = 0x823A52E0;
	sub_82179DE8(ctx, base);
	// bl 0x82179e70
	ctx.lr = 0x823A52E4;
	sub_82179E70(ctx, base);
	// bl 0x823aee78
	ctx.lr = 0x823A52E8;
	sub_823AEE78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A52D0) {
	__imp__sub_823A52D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A52F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A5300;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r27,r11,3224
	ctx.r27.s64 = ctx.r11.s64 + 3224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x820b9230
	ctx.lr = 0x823A5328;
	sub_820B9230(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x820b8e40
	ctx.lr = 0x823A5334;
	sub_820B8E40(ctx, base);
	// lis r26,-31780
	ctx.r26.s64 = -2082734080;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r25,r26,13320
	ctx.r25.s64 = ctx.r26.s64 + 13320;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x820b9060
	ctx.lr = 0x823A5348;
	sub_820B9060(ctx, base);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x820b8c80
	ctx.lr = 0x823A5354;
	sub_820B8C80(ctx, base);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x820b9280
	ctx.lr = 0x823A535C;
	sub_820B9280(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,13320(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13320);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820b9268
	ctx.lr = 0x823A5370;
	sub_820B9268(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed3c0
	ctx.lr = 0x823A5388;
	sub_823ED3C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ed900
	ctx.lr = 0x823A5394;
	sub_823ED900(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c0ed0
	ctx.lr = 0x823A53A8;
	sub_820C0ED0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c0db0
	ctx.lr = 0x823A53CC;
	sub_820C0DB0(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r30,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r6,r9,0,16,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF8;
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r6,r6,0,24,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// oris r10,r6,19202
	ctx.r10.u64 = ctx.r6.u64 | 1258422272;
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r29,29,9,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x7FFFFF;
	// lis r4,19200
	ctx.r4.s64 = 1258291200;
	// ori r10,r10,6657
	ctx.r10.u64 = ctx.r10.u64 | 6657;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// oris r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 1073741824;
	// oris r8,r7,19200
	ctx.r8.u64 = ctx.r7.u64 | 1258291200;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b8b38
	ctx.lr = 0x823A542C;
	sub_820B8B38(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r31,r7,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,1920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// bl 0x823ed3c0
	ctx.lr = 0x823A5480;
	sub_823ED3C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823ed900
	ctx.lr = 0x823A548C;
	sub_823ED900(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c7338
	ctx.lr = 0x823A54A0;
	sub_820C7338(ctx, base);
	// rlwinm r6,r29,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3FFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820c8188
	ctx.lr = 0x823A54B4;
	sub_820C8188(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c7488
	ctx.lr = 0x823A54CC;
	sub_820C7488(ctx, base);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820b9060
	ctx.lr = 0x823A54D8;
	sub_820B9060(ctx, base);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820b8c80
	ctx.lr = 0x823A54E4;
	sub_820B8C80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x820b9268
	ctx.lr = 0x823A54F0;
	sub_820B9268(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x820c0db0
	ctx.lr = 0x823A550C;
	sub_820C0DB0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stfs f10,1920(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1924(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1928(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1932(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 | ctx.r31.u64;
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A52F8) {
	__imp__sub_823A52F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823A5550;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r29,r11,13440
	ctx.r29.s64 = ctx.r11.s64 + 13440;
	// ori r9,r10,9676
	ctx.r9.u64 = ctx.r10.u64 | 9676;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a559c
	if (!ctx.cr6.eq) goto loc_823A559C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9672
	ctx.r10.u64 = ctx.r11.u64 | 9672;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a559c
	if (!ctx.cr6.eq) goto loc_823A559C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9684
	ctx.r10.u64 = ctx.r11.u64 | 9684;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a5710
	if (ctx.cr6.eq) goto loc_823A5710;
loc_823A559C:
	// bl 0x8228bdb0
	ctx.lr = 0x823A55A0;
	sub_8228BDB0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a55c4
	if (ctx.cr6.eq) goto loc_823A55C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aeec8
	ctx.lr = 0x823A55B0;
	sub_823AEEC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a55c8
	if (!ctx.cr6.eq) goto loc_823A55C8;
	// bl 0x8228bde8
	ctx.lr = 0x823A55BC;
	sub_8228BDE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823A55C4:
	// bl 0x823aee78
	ctx.lr = 0x823A55C8;
	sub_823AEE78(ctx, base);
loc_823A55C8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r10,r11,9676
	ctx.r10.u64 = ctx.r11.u64 | 9676;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5624
	if (ctx.cr6.eq) goto loc_823A5624;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r31,r10,6140
	ctx.r31.s64 = ctx.r10.s64 + 6140;
loc_823A55EC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwzu r5,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x823a52f8
	ctx.lr = 0x823A560C;
	sub_823A52F8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r7,r8,9676
	ctx.r7.u64 = ctx.r8.u64 | 9676;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a55ec
	if (ctx.cr6.lt) goto loc_823A55EC;
loc_823A5624:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,9216
	ctx.r28.s64 = ctx.r11.s64 + 9216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r26,112
	ctx.r26.s64 = 112;
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
loc_823A563C:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823a568c
	if (!ctx.cr6.lt) goto loc_823A568C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823A5654:
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// andc r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// bl 0x82174288
	ctx.lr = 0x823A5664;
	sub_82174288(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x823A5674;
	sub_823DE090(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823b2570
	ctx.lr = 0x823A567C;
	sub_823B2570(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823a5654
	if (ctx.cr6.lt) goto loc_823A5654;
loc_823A568C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x823a563c
	if (!ctx.cr0.eq) goto loc_823A563C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,9676
	ctx.r9.u64 = ctx.r11.u64 | 9676;
	// ori r8,r10,9672
	ctx.r8.u64 = ctx.r10.u64 | 9672;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stwx r25,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r25.u32);
	// stwx r25,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r25.u32);
	// bl 0x82178638
	ctx.lr = 0x823A56C0;
	sub_82178638(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r7,9684
	ctx.r6.u64 = ctx.r7.u64 | 9684;
	// lwzx r11,r29,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a5708
	if (ctx.cr6.eq) goto loc_823A5708;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r31,-31780
	ctx.r31.s64 = -2082734080;
	// ori r9,r11,9684
	ctx.r9.u64 = ctx.r11.u64 | 9684;
	// addi r8,r31,13332
	ctx.r8.s64 = ctx.r31.s64 + 13332;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwx r25,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r25.u32);
	// addi r6,r7,3224
	ctx.r6.s64 = ctx.r7.s64 + 3224;
	// stw r10,-16(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16, ctx.r10.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x820bad78
	ctx.lr = 0x823A5704;
	sub_820BAD78(ctx, base);
	// stw r3,13332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13332, ctx.r3.u32);
loc_823A5708:
	// bl 0x823ad808
	ctx.lr = 0x823A570C;
	sub_823AD808(ctx, base);
	// bl 0x8228bde8
	ctx.lr = 0x823A5710;
	sub_8228BDE8(ctx, base);
loc_823A5710:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5548) {
	__imp__sub_823A5548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5718) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r31,r11,13332
	ctx.r31.s64 = ctx.r11.s64 + 13332;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a576c
	if (ctx.cr6.eq) goto loc_823A576C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// bl 0x820badb0
	ctx.lr = 0x823A574C;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a576c
	if (ctx.cr6.eq) goto loc_823A576C;
loc_823A5754:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x823A575C;
	sub_8228B0D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820badb0
	ctx.lr = 0x823A5764;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a5754
	if (!ctx.cr6.eq) goto loc_823A5754;
loc_823A576C:
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

PPC_WEAK_FUNC(sub_823A5718) {
	__imp__sub_823A5718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A5788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,13440
	ctx.r31.s64 = ctx.r11.s64 + 13440;
	// ori r9,r10,9676
	ctx.r9.u64 = ctx.r10.u64 | 9676;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x823a57c8
	if (!ctx.cr6.eq) goto loc_823A57C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a5548
	ctx.lr = 0x823A57BC;
	sub_823A5548(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9676
	ctx.r10.u64 = ctx.r11.u64 | 9676;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_823A57C8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,6148
	ctx.r8.s64 = ctx.r10.s64 + 6148;
	// ori r6,r9,9676
	ctx.r6.u64 = ctx.r9.u64 | 9676;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// stwx r29,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r29.u32);
	// ori r3,r5,9676
	ctx.r3.u64 = ctx.r5.u64 | 9676;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r7,r9,6152
	ctx.r7.s64 = ctx.r9.s64 + 6152;
	// ori r6,r8,9676
	ctx.r6.u64 = ctx.r8.u64 | 9676;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r3,r5,9676
	ctx.r3.u64 = ctx.r5.u64 | 9676;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5780) {
	__imp__sub_823A5780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A584C) {
	__imp__sub_823A584C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A5858;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3584
	ctx.r11.s64 = 3584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// divwu r7,r5,r11
	ctx.r7.u32 = ctx.r5.u32 / ctx.r11.u32;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x823a5908
	if (ctx.cr6.gt) goto loc_823A5908;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// addi r10,r10,17280
	ctx.r10.s64 = ctx.r10.s64 + 17280;
	// addi r11,r11,23168
	ctx.r11.s64 = ctx.r11.s64 + 23168;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823a58b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A58B8;
	// bdzf 4*cr6+eq,0x823a58d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A58D4;
	// bne cr6,0x823a58f0
	if (!ctx.cr6.eq) goto loc_823A58F0;
	// addi r9,r5,10752
	ctx.r9.s64 = ctx.r5.s64 + 10752;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
loc_823A58B8:
	// addi r9,r5,7168
	ctx.r9.s64 = ctx.r5.s64 + 7168;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
loc_823A58D4:
	// addi r9,r5,3584
	ctx.r9.s64 = ctx.r5.s64 + 3584;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
loc_823A58F0:
	// rlwinm r9,r5,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r8,r5,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
loc_823A5908:
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r28,60(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823a5968
	if (!ctx.cr6.eq) goto loc_823A5968;
	// bl 0x823a4d98
	ctx.lr = 0x823A5920;
	sub_823A4D98(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5948
	if (ctx.cr6.eq) goto loc_823A5948;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_823A5948:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a4e88
	ctx.lr = 0x823A5950;
	sub_823A4E88(ctx, base);
	// add r4,r30,r25
	ctx.r4.u64 = ctx.r30.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A595C;
	sub_823A50B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823A5968:
	// addi r27,r7,-1
	ctx.r27.s64 = ctx.r7.s64 + -1;
	// addi r11,r27,10
	ctx.r11.s64 = ctx.r27.s64 + 10;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r29,r9,6
	ctx.r29.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// bl 0x823a4d98
	ctx.lr = 0x823A5980;
	sub_823A4D98(ctx, base);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823a59a8
	if (ctx.cr6.eq) goto loc_823A59A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_823A59A8:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r4,r30,r25
	ctx.r4.u64 = ctx.r30.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A59BC;
	sub_823A50B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A59C8;
	sub_823A50B8(ctx, base);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r9,r10,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// stb r9,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r9.u8);
	// lhz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 76);
	// sth r8,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r8.u16);
	// lhz r7,78(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// sth r7,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r7.u16);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// clrlwi r11,r6,6
	ctx.r11.u64 = ctx.r6.u32 & 0x3FFFFFF;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x823a4ee8
	ctx.lr = 0x823A5A0C;
	sub_823A4EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5850) {
	__imp__sub_823A5850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823A5A20;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r29,r11,23168
	ctx.r29.s64 = ctx.r11.s64 + 23168;
	// ori r9,r10,22272
	ctx.r9.u64 = ctx.r10.u64 | 22272;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x823a5b4c
	if (ctx.cr0.lt) goto loc_823A5B4C;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-6400
	ctx.r10.s64 = ctx.r10.s64 + -6400;
	// li r25,3584
	ctx.r25.s64 = 3584;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r24,r11,17280
	ctx.r24.s64 = ctx.r11.s64 + 17280;
loc_823A5A6C:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r7,r9,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a5ae8
	if (ctx.cr6.eq) goto loc_823A5AE8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1792
	ctx.r10.s64 = ctx.r29.s64 + 1792;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x823a5af4
	if (!ctx.cr6.gt) goto loc_823A5AF4;
	// divwu r31,r30,r25
	ctx.r31.u32 = ctx.r30.u32 / ctx.r25.u32;
	// mulli r11,r31,3584
	ctx.r11.s64 = ctx.r31.s64 * 3584;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82174288
	ctx.lr = 0x823A5AB4;
	sub_82174288(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a5ad4
	if (ctx.cr6.eq) goto loc_823A5AD4;
	// addi r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 9;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// clrlwi r7,r8,6
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_823A5AD4:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x823a5b58
	if (!ctx.cr6.lt) goto loc_823A5B58;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x823a5ae8
	if (!ctx.cr6.eq) goto loc_823A5AE8;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_823A5AE8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// bge 0x823a5a6c
	if (!ctx.cr0.lt) goto loc_823A5A6C;
loc_823A5AF4:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823a5b4c
	if (ctx.cr6.eq) goto loc_823A5B4C;
	// divwu r30,r26,r25
	ctx.r30.u32 = ctx.r26.u32 / ctx.r25.u32;
	// mulli r11,r30,3584
	ctx.r11.s64 = ctx.r30.s64 * 3584;
	// subf r3,r11,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r11.s64;
	// bl 0x82174288
	ctx.lr = 0x823A5B0C;
	sub_82174288(ctx, base);
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a5b2c
	if (ctx.cr6.eq) goto loc_823A5B2C;
	// addi r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 9;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r8,r9,6
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
loc_823A5B2C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x823a5850
	ctx.lr = 0x823A5B3C;
	sub_823A5850(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A5B44;
	sub_823A4B38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_823A5B4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_823A5B58:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823a5850
	ctx.lr = 0x823A5B68;
	sub_823A5850(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5A18) {
	__imp__sub_823A5A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A5B78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A5B88;
	sub_823A50B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a5040
	ctx.lr = 0x823A5B94;
	sub_823A5040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5c40
	if (ctx.cr6.eq) goto loc_823A5C40;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// addi r29,r11,13440
	ctx.r29.s64 = ctx.r11.s64 + 13440;
	// ble cr6,0x823a5bcc
	if (!ctx.cr6.gt) goto loc_823A5BCC;
loc_823A5BB4:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823a5bcc
	if (ctx.cr6.lt) goto loc_823A5BCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823a5bb4
	if (ctx.cr6.gt) goto loc_823A5BB4;
loc_823A5BCC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9664
	ctx.r10.u64 = ctx.r11.u64 | 9664;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823A5BE8:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823a5c00
	if (ctx.cr6.eq) goto loc_823A5C00;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823a5c04
	if (ctx.cr6.gt) goto loc_823A5C04;
loc_823A5C00:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823A5C04:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823a5c18
	if (ctx.cr6.eq) goto loc_823A5C18;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823a5c1c
	if (ctx.cr6.lt) goto loc_823A5C1C;
loc_823A5C18:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_823A5C1C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a5c2c
	if (ctx.cr6.eq) goto loc_823A5C2C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A5C2C;
	sub_823A4B38(ctx, base);
loc_823A5C2C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823a5c40
	if (ctx.cr6.eq) goto loc_823A5C40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823a5be8
	if (ctx.cr6.lt) goto loc_823A5BE8;
loc_823A5C40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5B70) {
	__imp__sub_823A5B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A5C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r30,r4,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r4.s64;
	// rlwinm r31,r11,0,0,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5780
	ctx.lr = 0x823A5C7C;
	sub_823A5780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a4d98
	ctx.lr = 0x823A5C84;
	sub_823A4D98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A5C90;
	sub_823A50B8(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A5C9C;
	sub_823A4B38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a4ee8
	ctx.lr = 0x823A5CAC;
	sub_823A4EE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5C48) {
	__imp__sub_823A5C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A5CB4) {
	__imp__sub_823A5CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823A5CC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A5CD4;
	sub_823A50B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a5040
	ctx.lr = 0x823A5CE0;
	sub_823A5040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5dd4
	if (ctx.cr6.eq) goto loc_823A5DD4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r23,-32
	ctx.r23.s64 = -2097152;
	// addi r24,r11,13440
	ctx.r24.s64 = ctx.r11.s64 + 13440;
loc_823A5CF4:
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r29,60(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a5e08
	ctx.lr = 0x823A5D08;
	sub_823A5E08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5dec
	if (ctx.cr6.eq) goto loc_823A5DEC;
	// lwz r28,60(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823a5da8
	if (ctx.cr6.eq) goto loc_823A5DA8;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823a5da8
	if (!ctx.cr6.lt) goto loc_823A5DA8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x823a5da8
	if (!ctx.cr6.gt) goto loc_823A5DA8;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823a5d4c
	if (!ctx.cr6.lt) goto loc_823A5D4C;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x823a5da8
	if (ctx.cr6.gt) goto loc_823A5DA8;
loc_823A5D4C:
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x823a5d68
	if (ctx.cr6.eq) goto loc_823A5D68;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9676
	ctx.r10.u64 = ctx.r11.u64 | 9676;
	// lwzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x823a5de0
	if (ctx.cr6.eq) goto loc_823A5DE0;
loc_823A5D68:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823a5d7c
	if (ctx.cr6.eq) goto loc_823A5D7C;
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A5D7C;
	sub_823A4B38(ctx, base);
loc_823A5D7C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5780
	ctx.lr = 0x823A5D8C;
	sub_823A5780(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4d98
	ctx.lr = 0x823A5D94;
	sub_823A4D98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4ee8
	ctx.lr = 0x823A5DA4;
	sub_823A4EE8(ctx, base);
	// b 0x823a5db4
	goto loc_823A5DB4;
loc_823A5DA8:
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A5DB4;
	sub_823A4B38(ctx, base);
loc_823A5DB4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A5DC0;
	sub_823A50B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a5040
	ctx.lr = 0x823A5DCC;
	sub_823A5040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a5cf4
	if (!ctx.cr6.eq) goto loc_823A5CF4;
loc_823A5DD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823A5DE0:
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A5DEC;
	sub_823A4B38(ctx, base);
loc_823A5DEC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a5b70
	ctx.lr = 0x823A5DF8;
	sub_823A5B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5CB8) {
	__imp__sub_823A5CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A5E04) {
	__imp__sub_823A5E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A5E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823A5E10;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r26,r11,13440
	ctx.r26.s64 = ctx.r11.s64 + 13440;
loc_823A5E2C:
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r22,r11,-22528
	ctx.r22.s64 = ctx.r11.s64 + -22528;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// ori r8,r10,9664
	ctx.r8.u64 = ctx.r10.u64 | 9664;
	// ori r9,r11,9668
	ctx.r9.u64 = ctx.r11.u64 | 9668;
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// lwzx r18,r26,r8
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// lwzx r7,r26,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_823A5E7C:
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_823A5E80:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x823a5ed4
	if (!ctx.cr6.lt) goto loc_823A5ED4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// subf r5,r31,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x823a5ed8
	goto loc_823A5ED8;
loc_823A5ED4:
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_823A5ED8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a5f98
	if (!ctx.cr6.lt) goto loc_823A5F98;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r8,r10,4095
	ctx.r8.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r8,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a5f1c
	if (!ctx.cr6.eq) goto loc_823A5F1C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// b 0x823a5e7c
	goto loc_823A5E7C;
loc_823A5F1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a5f2c
	if (ctx.cr6.eq) goto loc_823A5F2C;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823a5fa0
	if (!ctx.cr6.lt) goto loc_823A5FA0;
loc_823A5F2C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823a5f60
	if (ctx.cr6.eq) goto loc_823A5F60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823a5e80
	if (!ctx.cr6.eq) goto loc_823A5E80;
	// add r31,r10,r5
	ctx.r31.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// subf r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r31.s64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x823a5fc0
	goto loc_823A5FC0;
loc_823A5F60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a5f70
	if (ctx.cr6.eq) goto loc_823A5F70;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x823a5f78
	goto loc_823A5F78;
loc_823A5F70:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
loc_823A5F78:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x823a5fc0
	goto loc_823A5FC0;
loc_823A5F98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a6100
	if (ctx.cr6.eq) goto loc_823A6100;
loc_823A5FA0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x823a5e7c
	if (!ctx.cr6.eq) goto loc_823A5E7C;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a5e80
	if (!ctx.cr6.lt) goto loc_823A5E80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823A5FC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a5fec
	if (!ctx.cr6.eq) goto loc_823A5FEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a5fec
	if (ctx.cr6.eq) goto loc_823A5FEC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823a5fec
	if (ctx.cr6.eq) goto loc_823A5FEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823A5FEC:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a60bc
	if (!ctx.cr6.lt) goto loc_823A60BC;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-22532
	ctx.r10.s64 = ctx.r10.s64 + -22532;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_823A601C:
	// cmplw cr6,r4,r18
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x823a6084
	if (!ctx.cr6.lt) goto loc_823A6084;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823a6084
	if (!ctx.cr6.eq) goto loc_823A6084;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823a60f4
	if (!ctx.cr6.lt) goto loc_823A60F4;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a6070
	if (!ctx.cr6.lt) goto loc_823A6070;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// b 0x823a60b0
	goto loc_823A60B0;
loc_823A6070:
	// bne cr6,0x823a6078
	if (!ctx.cr6.eq) goto loc_823A6078;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823A6078:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// b 0x823a60b0
	goto loc_823A60B0;
loc_823A6084:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a5e80
	if (!ctx.cr6.lt) goto loc_823A5E80;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823a5e80
	if (!ctx.cr6.eq) goto loc_823A5E80;
	// lwzu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_823A60B0:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a601c
	if (ctx.cr6.lt) goto loc_823A601C;
loc_823A60BC:
	// cmplw cr6,r5,r20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x823a60d0
	if (ctx.cr6.lt) goto loc_823A60D0;
	// bne cr6,0x823a5e80
	if (!ctx.cr6.eq) goto loc_823A5E80;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x823a5e80
	if (!ctx.cr6.lt) goto loc_823A5E80;
loc_823A60D0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a6298
	if (ctx.cr6.eq) goto loc_823A6298;
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// b 0x823a5e80
	goto loc_823A5E80;
loc_823A60F4:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x823a5e80
	goto loc_823A5E80;
loc_823A6100:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x823a620c
	if (!ctx.cr6.eq) goto loc_823A620C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// bl 0x823a5a18
	ctx.lr = 0x823A611C;
	sub_823A5A18(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a6280
	if (!ctx.cr6.eq) goto loc_823A6280;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823a61dc
	if (!ctx.cr6.eq) goto loc_823A61DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a61dc
	if (ctx.cr6.eq) goto loc_823A61DC;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r10,-32
	ctx.r10.s64 = -2097152;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823a6164
	if (ctx.cr6.eq) goto loc_823A6164;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9676
	ctx.r10.u64 = ctx.r11.u64 | 9676;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x823a61dc
	if (ctx.cr6.eq) goto loc_823A61DC;
loc_823A6164:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// add r8,r14,r11
	ctx.r8.u64 = ctx.r14.u64 + ctx.r11.u64;
	// addi r7,r10,-22528
	ctx.r7.s64 = ctx.r10.s64 + -22528;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwzx r10,r6,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r5,r10,4095
	ctx.r5.s64 = ctx.r10.s64 + 4095;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r31,r5,0,0,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF000;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r30,r4,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823a5780
	ctx.lr = 0x823A61AC;
	sub_823A5780(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4d98
	ctx.lr = 0x823A61B4;
	sub_823A4D98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A61C0;
	sub_823A50B8(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823a4b38
	ctx.lr = 0x823A61CC;
	sub_823A4B38(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4ee8
	ctx.lr = 0x823A61DC;
	sub_823A4EE8(ctx, base);
loc_823A61DC:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r10,-32
	ctx.r10.s64 = -2097152;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823a628c
	if (!ctx.cr6.eq) goto loc_823A628C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823a5e2c
	if (!ctx.cr6.eq) goto loc_823A5E2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a5e2c
	if (!ctx.cr6.eq) goto loc_823A5E2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// bl 0x8230d720
	ctx.lr = 0x823A620C;
	sub_8230D720(ctx, base);
loc_823A620C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a6264
	if (ctx.cr6.eq) goto loc_823A6264;
	// rlwinm r11,r16,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// lwz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r7,r16,r11
	ctx.r7.u64 = ctx.r16.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-22528
	ctx.r10.s64 = ctx.r10.s64 + -22528;
	// lis r6,-32
	ctx.r6.s64 = -2097152;
	// add r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823a6260
	if (ctx.cr6.eq) goto loc_823A6260;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,9676
	ctx.r10.u64 = ctx.r11.u64 | 9676;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x823a628c
	if (ctx.cr6.eq) goto loc_823A628C;
loc_823A6260:
	// bl 0x823a5c48
	ctx.lr = 0x823A6264;
	sub_823A5C48(ctx, base);
loc_823A6264:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r4,r15,r11
	ctx.r4.u64 = ctx.r15.u64 + ctx.r11.u64;
	// bl 0x823a5cb8
	ctx.lr = 0x823A6278;
	sub_823A5CB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_823A6280:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_823A628C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_823A6298:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823a50b8
	ctx.lr = 0x823A62A8;
	sub_823A50B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A5E08) {
	__imp__sub_823A5E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A62B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A62B4) {
	__imp__sub_823A62B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A62B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A62C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82179de8
	ctx.lr = 0x823A62D0;
	sub_82179DE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r5,-32
	ctx.r5.s64 = -2097152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5cb8
	ctx.lr = 0x823A62E4;
	sub_823A5CB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a5548
	ctx.lr = 0x823A62EC;
	sub_823A5548(ctx, base);
	// bl 0x823a5718
	ctx.lr = 0x823A62F0;
	sub_823A5718(ctx, base);
	// bl 0x82179e70
	ctx.lr = 0x823A62F4;
	sub_82179E70(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823a6300
	if (ctx.cr6.eq) goto loc_823A6300;
	// bl 0x823aee78
	ctx.lr = 0x823A6300;
	sub_823AEE78(ctx, base);
loc_823A6300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A62B8) {
	__imp__sub_823A62B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6308) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823a5e08
	ctx.lr = 0x823A6320;
	sub_823A5E08(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823A6308) {
	__imp__sub_823A6308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x823a6374
	if (!ctx.cr6.eq) goto loc_823A6374;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bne cr6,0x823a6374
	if (!ctx.cr6.eq) goto loc_823A6374;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bne cr6,0x823a6374
	if (!ctx.cr6.eq) goto loc_823A6374;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823A6374:
	// addi r10,r4,2672
	ctx.r10.s64 = ctx.r4.s64 + 2672;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
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

PPC_WEAK_FUNC(sub_823A6338) {
	__imp__sub_823A6338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A639C) {
	__imp__sub_823A639C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A63A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A63A8;
	__savegprlr_25(ctx, base);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x823a63c8
	if (ctx.cr6.gt) goto loc_823A63C8;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// b 0x823a63e0
	goto loc_823A63E0;
loc_823A63C8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_823A63E0:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x823a63f8
	if (ctx.cr6.gt) goto loc_823A63F8;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// b 0x823a6410
	goto loc_823A6410;
loc_823A63F8:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
loc_823A6410:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// add r28,r8,r6
	ctx.r28.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r9,r7
	ctx.r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// add r25,r10,r8
	ctx.r25.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r27,24(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r30,r9,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stw r28,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r28.u32);
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stw r26,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r26.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r25,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r25.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A63A0) {
	__imp__sub_823A63A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A64C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A64C0) {
	__imp__sub_823A64C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A64CC) {
	__imp__sub_823A64CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A64D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A64D0) {
	__imp__sub_823A64D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A64E4) {
	__imp__sub_823A64E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A64E8) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-29904
	ctx.r31.s64 = ctx.r11.s64 + -29904;
	// lwz r11,5696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5696);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823a6570
	if (ctx.cr6.eq) goto loc_823A6570;
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
	// beq cr6,0x823a652c
	if (ctx.cr6.eq) goto loc_823A652C;
	// bl 0x823b1c28
	ctx.lr = 0x823A652C;
	sub_823B1C28(ctx, base);
loc_823A652C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r3,r31,4928
	ctx.r3.s64 = ctx.r31.s64 + 4928;
	// addi r4,r11,13536
	ctx.r4.s64 = ctx.r11.s64 + 13536;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,336
	ctx.r5.s64 = 336;
	// stw r11,5696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5696, ctx.r11.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823A6548;
	sub_823DE1F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,5264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5264, temp.u32);
	// stfs f0,5268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5268, temp.u32);
	// stfs f0,5272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5272, temp.u32);
	// stfs f13,5276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5276, temp.u32);
	// bl 0x823d40d8
	ctx.lr = 0x823A6570;
	sub_823D40D8(ctx, base);
loc_823A6570:
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

PPC_WEAK_FUNC(sub_823A64E8) {
	__imp__sub_823A64E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A6584) {
	__imp__sub_823A6584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r9,8176
	ctx.r9.s64 = 535822336;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A6588) {
	__imp__sub_823A6588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A65C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r10,8176
	ctx.r10.s64 = 535822336;
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A65C0) {
	__imp__sub_823A65C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A65F4) {
	__imp__sub_823A65F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A65F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,8176
	ctx.r11.s64 = 535822336;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A65F8) {
	__imp__sub_823A65F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A6624) {
	__imp__sub_823A6624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// addi r11,r1,-24
	ctx.r11.s64 = ctx.r1.s64 + -24;
	// stfs f5,-24(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f6,-20(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r8,r1,-24
	ctx.r8.s64 = ctx.r1.s64 + -24;
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lis r7,-31852
	ctx.r7.s64 = -2087452672;
	// lvrx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r6,-5664
	ctx.r11.s64 = ctx.r6.s64 + -5664;
	// addi r9,r4,-5648
	ctx.r9.s64 = ctx.r4.s64 + -5648;
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r5,r7,-30336
	ctx.r5.s64 = ctx.r7.s64 + -30336;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v0,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
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
	// vspltw128 v60,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stfs f8,20(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A6628) {
	__imp__sub_823A6628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A66B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823A66C0;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de018
	ctx.lr = 0x823A66C8;
	__savefpr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// fmr f24,f4
	ctx.f24.f64 = ctx.f4.f64;
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// fmr f27,f7
	ctx.f27.f64 = ctx.f7.f64;
	// fmr f26,f8
	ctx.f26.f64 = ctx.f8.f64;
	// bl 0x82178728
	ctx.lr = 0x823A66F4;
	sub_82178728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a6720
	if (ctx.cr6.eq) goto loc_823A6720;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-18784
	ctx.r4.s64 = ctx.r11.s64 + -18784;
	// bl 0x82280c30
	ctx.lr = 0x823A6710;
	sub_82280C30(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de064
	ctx.lr = 0x823A671C;
	__restfpr_24(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_823A6720:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1ca8
	ctx.lr = 0x823A6730;
	sub_823B1CA8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823a6768
	if (ctx.cr6.gt) goto loc_823A6768;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r8,6
	ctx.r7.s64 = ctx.r8.s64 + 6;
	// cmplwi cr6,r7,3072
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3072, ctx.xer);
	// ble cr6,0x823a6784
	if (!ctx.cr6.gt) goto loc_823A6784;
loc_823A6768:
	// bl 0x823b1c30
	ctx.lr = 0x823A676C;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823A6784:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// fadds f12,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// fadds f11,f30,f24
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// sthx r6,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u16);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r3,r5,6152
	ctx.r3.u64 = ctx.r5.u64 | 6152;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r30,r8,6
	ctx.r30.s64 = ctx.r8.s64 + 6;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// addi r29,r8,8
	ctx.r29.s64 = ctx.r8.s64 + 8;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// ori r28,r9,6152
	ctx.r28.u64 = ctx.r9.u64 | 6152;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r26,r7,6152
	ctx.r26.u64 = ctx.r7.u64 | 6152;
	// ori r25,r9,6152
	ctx.r25.u64 = ctx.r9.u64 | 6152;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// lwzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// ori r3,r24,6156
	ctx.r3.u64 = ctx.r24.u64 | 6156;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// sthx r11,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u16);
	// lis r9,8176
	ctx.r9.s64 = 535822336;
	// lwzx r8,r31,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r27.u16);
	// ori r4,r21,6156
	ctx.r4.u64 = ctx.r21.u64 | 6156;
	// lwzx r8,r31,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r27.u16);
	// lfs f0,5484(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r8,r31,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r6,r29
	PPC_STORE_U16(ctx.r6.u32 + ctx.r29.u32, ctx.r11.u16);
	// lfs f13,12168(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r5,r7
	PPC_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r24.u16);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ori r6,r3,6156
	ctx.r6.u64 = ctx.r3.u64 | 6156;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ori r4,r5,6156
	ctx.r4.u64 = ctx.r5.u64 | 6156;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// ori r7,r3,6152
	ctx.r7.u64 = ctx.r3.u64 | 6152;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ori r3,r6,6156
	ctx.r3.u64 = ctx.r6.u64 | 6156;
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r5,6156
	ctx.r5.u64 = ctx.r5.u64 | 6156;
	// ori r6,r6,6152
	ctx.r6.u64 = ctx.r6.u64 | 6152;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de064
	ctx.lr = 0x823A6974;
	__restfpr_24(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A66B8) {
	__imp__sub_823A66B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823A6980;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de018
	ctx.lr = 0x823A6988;
	__savefpr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// fmr f24,f4
	ctx.f24.f64 = ctx.f4.f64;
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// fmr f27,f7
	ctx.f27.f64 = ctx.f7.f64;
	// fmr f26,f8
	ctx.f26.f64 = ctx.f8.f64;
	// bl 0x823b1ca8
	ctx.lr = 0x823A69B8;
	sub_823B1CA8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823a69f0
	if (ctx.cr6.gt) goto loc_823A69F0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r8,6
	ctx.r7.s64 = ctx.r8.s64 + 6;
	// cmplwi cr6,r7,3072
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3072, ctx.xer);
	// ble cr6,0x823a6a0c
	if (!ctx.cr6.gt) goto loc_823A6A0C;
loc_823A69F0:
	// bl 0x823b1c30
	ctx.lr = 0x823A69F4;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823A6A0C:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// fadds f12,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// fadds f11,f30,f24
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// sthx r6,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u16);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r3,r5,6152
	ctx.r3.u64 = ctx.r5.u64 | 6152;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r30,r8,6
	ctx.r30.s64 = ctx.r8.s64 + 6;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// addi r29,r8,8
	ctx.r29.s64 = ctx.r8.s64 + 8;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// ori r28,r9,6152
	ctx.r28.u64 = ctx.r9.u64 | 6152;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r26,r7,6152
	ctx.r26.u64 = ctx.r7.u64 | 6152;
	// ori r25,r9,6152
	ctx.r25.u64 = ctx.r9.u64 | 6152;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// lwzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// ori r3,r24,6156
	ctx.r3.u64 = ctx.r24.u64 | 6156;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// sthx r11,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u16);
	// lis r9,8176
	ctx.r9.s64 = 535822336;
	// lwzx r8,r31,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r27.u16);
	// ori r4,r21,6156
	ctx.r4.u64 = ctx.r21.u64 | 6156;
	// lwzx r8,r31,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r27.u16);
	// lfs f0,5484(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r8,r31,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r6,r29
	PPC_STORE_U16(ctx.r6.u32 + ctx.r29.u32, ctx.r11.u16);
	// lfs f13,12168(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r5,r7
	PPC_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r24.u16);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ori r6,r3,6156
	ctx.r6.u64 = ctx.r3.u64 | 6156;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ori r4,r5,6156
	ctx.r4.u64 = ctx.r5.u64 | 6156;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// ori r7,r3,6152
	ctx.r7.u64 = ctx.r3.u64 | 6152;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ori r3,r6,6156
	ctx.r3.u64 = ctx.r6.u64 | 6156;
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r5,6156
	ctx.r5.u64 = ctx.r5.u64 | 6156;
	// ori r6,r6,6152
	ctx.r6.u64 = ctx.r6.u64 | 6152;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de064
	ctx.lr = 0x823A6BFC;
	__restfpr_24(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A6978) {
	__imp__sub_823A6978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823A6C08;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de010
	ctx.lr = 0x823A6C10;
	__savefpr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// fmr f23,f9
	ctx.f23.f64 = ctx.f9.f64;
	// fmr f22,f10
	ctx.f22.f64 = ctx.f10.f64;
	// bl 0x823b1ca8
	ctx.lr = 0x823A6C48;
	sub_823B1CA8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823a6c80
	if (ctx.cr6.gt) goto loc_823A6C80;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r5,6
	ctx.r8.s64 = ctx.r5.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823a6c9c
	if (!ctx.cr6.gt) goto loc_823A6C9C;
loc_823A6C80:
	// bl 0x823b1c30
	ctx.lr = 0x823A6C84;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_823A6C9C:
	// fmuls f0,f28,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f23.f64));
	// lis r8,1
	ctx.r8.s64 = 65536;
	// fmuls f13,f29,f22
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f22.f64));
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// fmuls f12,f29,f23
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f23.f64));
	// ori r28,r8,6156
	ctx.r28.u64 = ctx.r8.u64 | 6156;
	// fmuls f11,f28,f22
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f22.f64));
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r6,r6,6152
	ctx.r6.u64 = ctx.r6.u64 | 6152;
	// stwx r11,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// rlwinm r27,r5,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r23,r3,6
	ctx.r23.s64 = ctx.r3.s64 + 6;
	// fadds f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// addi r5,r5,6
	ctx.r5.s64 = ctx.r5.s64 + 6;
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// rlwinm r8,r9,5,11,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FFFE0;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r26,r10,2
	ctx.r26.s64 = ctx.r10.s64 + 2;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// addi r24,r9,2
	ctx.r24.s64 = ctx.r9.s64 + 2;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// sthx r9,r27,r26
	PPC_STORE_U16(ctx.r27.u32 + ctx.r26.u32, ctx.r9.u16);
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// fadds f3,f10,f31
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// sthx r9,r27,r30
	PPC_STORE_U16(ctx.r27.u32 + ctx.r30.u32, ctx.r9.u16);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// fadds f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// sthx r5,r27,r29
	PPC_STORE_U16(ctx.r27.u32 + ctx.r29.u32, ctx.r5.u16);
	// addi r25,r9,3
	ctx.r25.s64 = ctx.r9.s64 + 3;
	// lfs f13,12168(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r24,r24,16
	ctx.r24.u64 = ctx.r24.u32 & 0xFFFF;
	// fadds f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// lis r6,8176
	ctx.r6.s64 = 535822336;
	// sthx r25,r27,r22
	PPC_STORE_U16(ctx.r27.u32 + ctx.r22.u32, ctx.r25.u16);
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// sthx r24,r27,r28
	PPC_STORE_U16(ctx.r27.u32 + ctx.r28.u32, ctx.r24.u16);
	// sthx r24,r27,r23
	PPC_STORE_U16(ctx.r27.u32 + ctx.r23.u32, ctx.r24.u16);
	// stfs f30,4(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// stfsx f31,r8,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfs f27,20(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f26,24(r10)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsx f9,r8,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// stfs f25,20(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r6,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// stfsx f4,r8,r3
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f5,4(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f25,20(r9)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f24,24(r9)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// fadds f2,f11,f30
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfsx f3,r8,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f24,24(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de05c
	ctx.lr = 0x823A6E14;
	__restfpr_22(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A6C00) {
	__imp__sub_823A6C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A6E20;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x823A6E28;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6e64
	if (ctx.cr6.eq) goto loc_823A6E64;
	// bl 0x823b1c28
	ctx.lr = 0x823A6E64;
	sub_823B1C28(ctx, base);
loc_823A6E64:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r29,r11,-29904
	ctx.r29.s64 = ctx.r11.s64 + -29904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4060
	ctx.lr = 0x823A6E74;
	sub_823D4060(ctx, base);
	// lwz r11,5764(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5764);
	// lwz r10,5768(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5768);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// fmr f8,f28
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f28.f64;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r6,8
	ctx.r6.s64 = 8;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f2,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823A6ED4;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823A6ED8;
	sub_823B1C28(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x823A6EE4;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A6E18) {
	__imp__sub_823A6E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x823a6e18
	sub_823A6E18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A6EE8) {
	__imp__sub_823A6EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// fadds f12,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fadds f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// addi r5,r11,-29904
	ctx.r5.s64 = ctx.r11.s64 + -29904;
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,5768(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5768);
	// lwz r6,5764(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5764);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f1,f13,f5
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A6F08) {
	__imp__sub_823A6F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A6F7C) {
	__imp__sub_823A6F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A6F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A6F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6fb4
	if (ctx.cr6.eq) goto loc_823A6FB4;
	// bl 0x823b1c28
	ctx.lr = 0x823A6FB4;
	sub_823B1C28(ctx, base);
loc_823A6FB4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-29904
	ctx.r31.s64 = ctx.r11.s64 + -29904;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x823a6ffc
	if (!ctx.cr6.eq) goto loc_823A6FFC;
	// lfs f12,4468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x823a6ffc
	if (!ctx.cr6.eq) goto loc_823A6FFC;
	// lfs f12,4472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x823a6ffc
	if (!ctx.cr6.eq) goto loc_823A6FFC;
	// lfs f12,4476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4476);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x823a7018
	if (ctx.cr6.eq) goto loc_823A7018;
loc_823A6FFC:
	// lhz r11,5454(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5454);
	// stfs f13,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f13,4468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f0,4472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// stfs f0,4476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4476, temp.u32);
	// sth r11,5454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5454, ctx.r11.u16);
loc_823A7018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4060
	ctx.lr = 0x823A7020;
	sub_823D4060(ctx, base);
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r6,4520
	ctx.r4.s64 = ctx.r6.s64 + 4520;
	// lwz r8,344(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,348(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,5768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,4520(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4520);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwz r11,5764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5764);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f3,120(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// frsp f11,f6
	ctx.f11.f64 = double(float(ctx.f6.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// frsp f10,f8
	ctx.f10.f64 = double(float(ctx.f8.f64));
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// fcfid f8,f5
	ctx.f8.f64 = double(ctx.f5.s64);
	// fcfid f9,f4
	ctx.f9.f64 = double(ctx.f4.s64);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fdivs f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fdivs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// frsp f0,f8
	ctx.f0.f64 = double(float(ctx.f8.f64));
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// fdivs f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fdivs f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fmr f7,f4
	ctx.f7.f64 = ctx.f4.f64;
	// fsubs f12,f4,f6
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmuls f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fsubs f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f12,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823A7138;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823A713C;
	sub_823B1C28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A6F80) {
	__imp__sub_823A6F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7144) {
	__imp__sub_823A7144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29904
	ctx.r11.s64 = ctx.r11.s64 + -29904;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,4464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4464);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bne cr6,0x823a7190
	if (!ctx.cr6.eq) goto loc_823A7190;
	// lfs f0,4468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bne cr6,0x823a7190
	if (!ctx.cr6.eq) goto loc_823A7190;
	// lfs f0,4472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bne cr6,0x823a7190
	if (!ctx.cr6.eq) goto loc_823A7190;
	// lfs f0,4476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// beq cr6,0x823a71ac
	if (ctx.cr6.eq) goto loc_823A71AC;
loc_823A7190:
	// lhz r10,5454(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5454);
	// stfs f2,4464(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4464, temp.u32);
	// stfs f2,4468(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4468, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f4,4472(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4472, temp.u32);
	// stfs f4,4476(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4476, temp.u32);
	// sth r10,5454(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5454, ctx.r10.u16);
loc_823A71AC:
	// li r8,-1
	ctx.r8.s64 = -1;
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x823a6e18
	sub_823A6E18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7148) {
	__imp__sub_823A7148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A71BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A71BC) {
	__imp__sub_823A71BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A71C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r9,360(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// addi r11,r11,-29904
	ctx.r11.s64 = ctx.r11.s64 + -29904;
	// lwz r10,5764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5764);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823a71ec
	if (!ctx.cr6.eq) goto loc_823A71EC;
	// lwz r11,5768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5768);
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823a71f0
	if (ctx.cr6.eq) goto loc_823A71F0;
loc_823A71EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A71F0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A71C0) {
	__imp__sub_823A71C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A71F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r9,360(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// addi r11,r11,-29904
	ctx.r11.s64 = ctx.r11.s64 + -29904;
	// lwz r10,5764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5764);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823a7224
	if (!ctx.cr6.eq) goto loc_823A7224;
	// lwz r11,5768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5768);
	// lwz r10,364(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823a7228
	if (ctx.cr6.eq) goto loc_823A7228;
loc_823A7224:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A7228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7238
	if (ctx.cr6.eq) goto loc_823A7238;
	// b 0x823a7148
	sub_823A7148(ctx, base);
	return;
loc_823A7238:
	// b 0x823a6f80
	sub_823A6F80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A71F8) {
	__imp__sub_823A71F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A723C) {
	__imp__sub_823A723C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A7248;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de010
	ctx.lr = 0x823A7250;
	__savefpr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7280
	if (ctx.cr6.eq) goto loc_823A7280;
	// bl 0x823b1c28
	ctx.lr = 0x823A7280;
	sub_823B1C28(ctx, base);
loc_823A7280:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r27,r11,-29904
	ctx.r27.s64 = ctx.r11.s64 + -29904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d4060
	ctx.lr = 0x823A7290;
	sub_823D4060(ctx, base);
	// lwz r10,5768(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5768);
	// lwz r11,5764(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5764);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f8,120(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// lwz r11,13108(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13108);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f27,f5
	ctx.f27.f64 = double(float(ctx.f5.f64));
	// frsp f26,f2
	ctx.f26.f64 = double(float(ctx.f2.f64));
	// fdivs f11,f31,f1
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// fdivs f0,f31,f10
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fadds f10,f27,f12
	ctx.f10.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// fadds f9,f26,f13
	ctx.f9.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fmuls f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f28,f11,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f23,f10,f0
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f25,f9,f11
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// beq cr6,0x823a74d8
	if (ctx.cr6.eq) goto loc_823A74D8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f24,f13
	ctx.f24.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f24,f30
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A7378;
	sub_823DDE20(ctx, base);
	// frsp f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f24,f23
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// bl 0x823df940
	ctx.lr = 0x823A7384;
	sub_823DF940(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b1ca8
	ctx.lr = 0x823A7398;
	sub_823B1CA8(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823b1d48
	ctx.lr = 0x823A73A0;
	sub_823B1D48(ctx, base);
	// fadds f13,f22,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f22.f64 + ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f23,f30
	ctx.f10.f64 = double(float(ctx.f23.f64 - ctx.f30.f64));
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bgt cr6,0x823a74bc
	if (ctx.cr6.gt) goto loc_823A74BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// fdivs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// lis r10,8176
	ctx.r10.s64 = 535822336;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_823A73D4:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bne cr6,0x823a73e8
	if (!ctx.cr6.eq) goto loc_823A73E8;
	// fmr f12,f23
	ctx.f12.f64 = ctx.f23.f64;
	// b 0x823a73ec
	goto loc_823A73EC;
loc_823A73E8:
	// fdivs f12,f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f24.f64));
loc_823A73EC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// fsubs f7,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// lis r9,1
	ctx.r9.s64 = 65536;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// ori r7,r9,6156
	ctx.r7.u64 = ctx.r9.u64 | 6156;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// ori r5,r6,6156
	ctx.r5.u64 = ctx.r6.u64 | 6156;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r3,r4,6156
	ctx.r3.u64 = ctx.r4.u64 | 6156;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ori r6,r11,6156
	ctx.r6.u64 = ctx.r11.u64 | 6156;
	// fmuls f11,f6,f27
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f26,4(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f25,24(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// ble cr6,0x823a73d4
	if (!ctx.cr6.gt) goto loc_823A73D4;
loc_823A74BC:
	// bl 0x823b1c28
	ctx.lr = 0x823A74C0;
	sub_823B1C28(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823b1d48
	ctx.lr = 0x823A74C8;
	sub_823B1D48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de05c
	ctx.lr = 0x823A74D4;
	__restfpr_22(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823A74D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// fmr f8,f25
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f25.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f2,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823A7510;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823A7514;
	sub_823B1C28(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de05c
	ctx.lr = 0x823A7520;
	__restfpr_22(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7240) {
	__imp__sub_823A7240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7524) {
	__imp__sub_823A7524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7528) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x823a7240
	sub_823A7240(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7528) {
	__imp__sub_823A7528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7534) {
	__imp__sub_823A7534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// clrlwi r5,r6,28
	ctx.r5.u64 = ctx.r6.u32 & 0xF;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a7584
	if (ctx.cr6.eq) goto loc_823A7584;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_823A7584:
	// rlwinm r8,r7,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF0;
	// rlwinm r8,r8,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823a7598
	if (ctx.cr6.eq) goto loc_823A7598;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_823A7598:
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r9,r8,3224
	ctx.r9.s64 = ctx.r8.s64 + 3224;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r31,16(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x820c4308
	ctx.lr = 0x823A75E0;
	sub_820C4308(ctx, base);
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

PPC_WEAK_FUNC(sub_823A7538) {
	__imp__sub_823A7538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A75F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A75F4) {
	__imp__sub_823A75F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A75F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823A7600;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,5764(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5764);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r8,5768(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5768);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x823c9be0
	ctx.lr = 0x823A7658;
	sub_823C9BE0(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a7538
	ctx.lr = 0x823A768C;
	sub_823A7538(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A75F8) {
	__imp__sub_823A75F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7698) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de028
	ctx.lr = 0x823A76B0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8db0
	ctx.lr = 0x823A76D8;
	sub_823C8DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4060
	ctx.lr = 0x823A76E0;
	sub_823D4060(ctx, base);
	// stw r31,4816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4816, ctx.r31.u32);
	// lhz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lhz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// addi r7,r8,4608
	ctx.r7.s64 = ctx.r8.s64 + 4608;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// li r10,8
	ctx.r10.s64 = 8;
	// fadds f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// li r9,-1
	ctx.r9.s64 = -1;
	// fadds f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// lwz r3,8464(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8464);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f30,f8
	ctx.f6.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// fdivs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f5,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fdivs f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823A775C;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823A7760;
	sub_823B1C28(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x823A776C;
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

PPC_WEAK_FUNC(sub_823A7698) {
	__imp__sub_823A7698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823A7788;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r3.u64);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// std r10,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r10.u64);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r31,372(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r27,368(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r24,376(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r26,380(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// lwz r30,304(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r6,r30,5740
	ctx.r6.s64 = ctx.r30.s64 + 5740;
	// lwz r5,5740(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// add r25,r24,r27
	ctx.r25.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r28,r26,r31
	ctx.r28.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lwz r4,5744(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// lwz r3,5748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// addi r9,r25,7
	ctx.r9.s64 = ctx.r25.s64 + 7;
	// lwz r6,5752(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// addi r8,r28,7
	ctx.r8.s64 = ctx.r28.s64 + 7;
	// rlwinm r10,r31,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// rlwinm r11,r27,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// rlwinm r8,r8,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x823a7898
	if (ctx.cr6.eq) goto loc_823A7898;
	// subf r8,r10,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// bl 0x823a7698
	ctx.lr = 0x823A788C;
	sub_823A7698(ctx, base);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_823A7898:
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x823a790c
	if (ctx.cr6.eq) goto loc_823A790C;
	// subf r10,r26,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r26.s64;
	// extsw r8,r28
	ctx.r8.s64 = ctx.r28.s32;
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x823a7698
	ctx.lr = 0x823A7904;
	sub_823A7698(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_823A790C:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x823a7974
	if (ctx.cr6.eq) goto loc_823A7974;
	// extsw r6,r26
	ctx.r6.s64 = ctx.r26.s32;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f9,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// extsw r7,r31
	ctx.r7.s64 = ctx.r31.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// bl 0x823a7698
	ctx.lr = 0x823A7970;
	sub_823A7698(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_823A7974:
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x823a79dc
	if (ctx.cr6.eq) goto loc_823A79DC;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// extsw r8,r26
	ctx.r8.s64 = ctx.r26.s32;
	// extsw r6,r25
	ctx.r6.s64 = ctx.r25.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// subf r11,r24,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r24.s64;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r9,r27,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r27.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f9,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// bl 0x823a7698
	ctx.lr = 0x823A79DC;
	sub_823A7698(ctx, base);
loc_823A79DC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823A79E8;
	sub_823C8D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4060
	ctx.lr = 0x823A79F0;
	sub_823D4060(ctx, base);
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9be0
	ctx.lr = 0x823A79FC;
	sub_823C9BE0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a7538
	ctx.lr = 0x823A7A30;
	sub_823A7538(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7780) {
	__imp__sub_823A7780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7A3C) {
	__imp__sub_823A7A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A7A48;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// std r3,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r3.u64);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-26624
	ctx.r10.s64 = ctx.r11.s64 + -26624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,120(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823A7A70;
	sub_823C90B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9ca0
	ctx.lr = 0x823A7A7C;
	sub_823C9CA0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r8,r6,-2072
	ctx.r8.s64 = ctx.r6.s64 + -2072;
	// lfs f1,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// lwz r3,144(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,5764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5764);
	// lwz r9,5768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bl 0x823a7538
	ctx.lr = 0x823A7AE0;
	sub_823A7538(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7A40) {
	__imp__sub_823A7A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A7AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r6,-2072
	ctx.r8.s64 = ctx.r6.s64 + -2072;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f1,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r29,5764(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5764);
	// lwz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5768);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,144(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bl 0x823a7538
	ctx.lr = 0x823A7B5C;
	sub_823A7538(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7AE8) {
	__imp__sub_823A7AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7B64) {
	__imp__sub_823A7B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7B68) {
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
	// lhz r11,66(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 66);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lhz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r8,-2072
	ctx.r7.s64 = ctx.r8.s64 + -2072;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f6,f10,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f3,f7,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// fctiwz f0,f6
	ctx.f0.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f13,f3
	ctx.f13.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f2,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// bl 0x823a7780
	ctx.lr = 0x823A7C34;
	sub_823A7780(ctx, base);
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

PPC_WEAK_FUNC(sub_823A7B68) {
	__imp__sub_823A7B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7C4C) {
	__imp__sub_823A7C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7C50) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r31,r10,-26624
	ctx.r31.s64 = ctx.r10.s64 + -26624;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,2852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2852);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// bl 0x823a75f8
	ctx.lr = 0x823A7C98;
	sub_823A75F8(ctx, base);
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

PPC_WEAK_FUNC(sub_823A7C50) {
	__imp__sub_823A7C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7CAC) {
	__imp__sub_823A7CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A7CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r9,2852(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2852);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// rlwinm r30,r10,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r8,r5,-26624
	ctx.r8.s64 = ctx.r5.s64 + -26624;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r5,r9,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r7,r31,r29
	ctx.r7.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// add r5,r30,r28
	ctx.r5.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r8,r6,-2072
	ctx.r8.s64 = ctx.r6.s64 + -2072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,5484(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x823a7538
	ctx.lr = 0x823A7D68;
	sub_823A7538(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7CB0) {
	__imp__sub_823A7CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,-2072
	ctx.r7.s64 = ctx.r10.s64 + -2072;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823a75f8
	sub_823A75F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7D70) {
	__imp__sub_823A7D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7D90) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r8,-2072
	ctx.r7.s64 = ctx.r8.s64 + -2072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// ld r8,5748(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5748);
	// ld r10,5740(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5740);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// bl 0x823a7780
	ctx.lr = 0x823A7DD0;
	sub_823A7780(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A7D90) {
	__imp__sub_823A7D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7DE0) {
	PPC_FUNC_PROLOGUE();
	// fadds f4,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// b 0x823a7b68
	sub_823A7B68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7DE0) {
	__imp__sub_823A7DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7DEC) {
	__imp__sub_823A7DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7DF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a7a40
	sub_823A7A40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7DF0) {
	__imp__sub_823A7DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7DF4) {
	__imp__sub_823A7DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a7ae8
	sub_823A7AE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7DF8) {
	__imp__sub_823A7DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7DFC) {
	__imp__sub_823A7DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7E00) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f8,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a66b8
	ctx.lr = 0x823A7E50;
	sub_823A66B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_823A7E00) {
	__imp__sub_823A7E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7E74) {
	__imp__sub_823A7E74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7E78) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f8,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a6978
	ctx.lr = 0x823A7EC8;
	sub_823A6978(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_823A7E78) {
	__imp__sub_823A7E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A7EEC) {
	__imp__sub_823A7EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823A7EF8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de020
	ctx.lr = 0x823A7F00;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823b1ca8
	ctx.lr = 0x823A7F1C;
	sub_823B1CA8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,-15488
	ctx.r30.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823a7f54
	if (ctx.cr6.gt) goto loc_823A7F54;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823a7f70
	if (!ctx.cr6.gt) goto loc_823A7F70;
loc_823A7F54:
	// bl 0x823b1c30
	ctx.lr = 0x823A7F58;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
loc_823A7F70:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// ori r4,r4,6156
	ctx.r4.u64 = ctx.r4.u64 | 6156;
	// ori r3,r3,6152
	ctx.r3.u64 = ctx.r3.u64 | 6152;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,10
	ctx.r5.s64 = ctx.r5.s64 + 10;
	// addis r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 65536;
	// addi r24,r29,2
	ctx.r24.s64 = ctx.r29.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// clrlwi r24,r24,16
	ctx.r24.u64 = ctx.r24.u32 & 0xFFFF;
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r26,r29,3
	ctx.r26.s64 = ctx.r29.s64 + 3;
	// stwx r10,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r23,r29,1
	ctx.r23.s64 = ctx.r29.s64 + 1;
	// sthx r29,r27,r9
	PPC_STORE_U16(ctx.r27.u32 + ctx.r9.u32, ctx.r29.u16);
	// sthx r24,r27,r8
	PPC_STORE_U16(ctx.r27.u32 + ctx.r8.u32, ctx.r24.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sthx r26,r27,r25
	PPC_STORE_U16(ctx.r27.u32 + ctx.r25.u32, ctx.r26.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sthx r24,r27,r7
	PPC_STORE_U16(ctx.r27.u32 + ctx.r7.u32, ctx.r24.u16);
	// sthx r29,r27,r6
	PPC_STORE_U16(ctx.r27.u32 + ctx.r6.u32, ctx.r29.u16);
	// sthx r23,r27,r5
	PPC_STORE_U16(ctx.r27.u32 + ctx.r5.u32, ctx.r23.u16);
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f28,f10,f30
	ctx.f28.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f27,f9,f29
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// bl 0x823de720
	ctx.lr = 0x823A802C;
	sub_823DE720(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x823A8038;
	sub_823DE800(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// rlwinm r9,r29,5,11,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FFFE0;
	// fmuls f6,f26,f30
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f5,f26,f29
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lis r8,8176
	ctx.r8.s64 = 535822336;
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lfs f3,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// fmuls f2,f7,f30
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f1,f7,f29
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fneg f12,f5
	ctx.f12.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsubs f11,f27,f6
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f6.f64));
	// fadds f10,f6,f27
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// fsubs f9,f28,f2
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f2.f64));
	// fadds f8,f2,f28
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// fsubs f7,f11,f1
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfsx f5,r9,r30
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// stfs f3,20(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fsubs f3,f8,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f4,f12,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f5,20(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fadds f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// addi r7,r30,96
	ctx.r7.s64 = ctx.r30.s64 + 96;
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadds f8,f4,f28
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// fadds f7,f3,f27
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f27.f64));
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsx f12,r9,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f5,20(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f6,24(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de06c
	ctx.lr = 0x823A8188;
	__restfpr_26(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A7EF0) {
	__imp__sub_823A7EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A818C) {
	__imp__sub_823A818C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823A8198;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de014
	ctx.lr = 0x823A81A0;
	__savefpr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823b1ca8
	ctx.lr = 0x823A81BC;
	sub_823B1CA8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// addi r30,r11,-15488
	ctx.r30.s64 = ctx.r11.s64 + -15488;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,6152
	ctx.r7.u64 = ctx.r8.u64 | 6152;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r6,2048
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2048, ctx.xer);
	// bgt cr6,0x823a81fc
	if (ctx.cr6.gt) goto loc_823A81FC;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// cmplwi cr6,r11,3072
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3072, ctx.xer);
	// ble cr6,0x823a8218
	if (!ctx.cr6.gt) goto loc_823A8218;
loc_823A81FC:
	// bl 0x823b1c30
	ctx.lr = 0x823A8200;
	sub_823B1C30(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
loc_823A8218:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// ori r3,r3,6156
	ctx.r3.u64 = ctx.r3.u64 | 6156;
	// ori r26,r26,6152
	ctx.r26.u64 = ctx.r26.u64 | 6152;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r11,3
	ctx.r25.s64 = ctx.r11.s64 + 3;
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,10
	ctx.r5.s64 = ctx.r5.s64 + 10;
	// addis r22,r30,1
	ctx.r22.s64 = ctx.r30.s64 + 65536;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r10,r4,6
	ctx.r10.s64 = ctx.r4.s64 + 6;
	// clrlwi r4,r24,16
	ctx.r4.u64 = ctx.r24.u32 & 0xFFFF;
	// stwx r11,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r10,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r10.u32);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// sthx r29,r27,r9
	PPC_STORE_U16(ctx.r27.u32 + ctx.r9.u32, ctx.r29.u16);
	// sthx r4,r27,r8
	PPC_STORE_U16(ctx.r27.u32 + ctx.r8.u32, ctx.r4.u16);
	// sthx r25,r27,r22
	PPC_STORE_U16(ctx.r27.u32 + ctx.r22.u32, ctx.r25.u16);
	// sthx r4,r27,r7
	PPC_STORE_U16(ctx.r27.u32 + ctx.r7.u32, ctx.r4.u16);
	// sthx r29,r27,r6
	PPC_STORE_U16(ctx.r27.u32 + ctx.r6.u32, ctx.r29.u16);
	// lfs f0,5524(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// sthx r23,r27,r5
	PPC_STORE_U16(ctx.r27.u32 + ctx.r5.u32, ctx.r23.u16);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x823A82AC;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x823A82B8;
	sub_823DE800(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r29,5,11,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FFFE0;
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fsubs f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f5,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f31,f6,f8
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fadds f29,f6,f8
	ctx.f29.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fmuls f28,f2,f12
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fsubs f27,f7,f11
	ctx.f27.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fadds f26,f7,f11
	ctx.f26.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fsubs f25,f31,f10
	ctx.f25.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fsubs f24,f27,f9
	ctx.f24.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fsubs f26,f26,f9
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f9.f64));
	// fadds f25,f25,f3
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f3.f64));
	// fadds f24,f24,f4
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f4.f64));
	// fsubs f26,f26,f28
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// fadds f25,f25,f1
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f1.f64));
	// fsubs f24,f24,f13
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// fsubs f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f13.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,8176
	ctx.r8.s64 = 535822336;
	// lfs f23,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f23.f64 = double(temp.f32);
	// fadds f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfsx f13,r9,r30
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stfs f23,4(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lfs f13,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fadds f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f29,f29,f10
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// stfs f24,20(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f25,24(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f30,f5,f30
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f25,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// addi r7,r30,64
	ctx.r7.s64 = ctx.r30.s64 + 64;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadds f6,f3,f10
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fsubs f31,f29,f2
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f2.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f7,f30,f4
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// fsubs f3,f8,f2
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f24,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stfs f24,4(r10)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// fadds f5,f31,f1
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f1,f2,f25
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f25.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fsubs f4,f11,f28
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// stfs f26,20(r10)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fsubs f8,f3,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f5,24(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// fadds f11,f7,f27
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// fadds f10,f4,f30
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fadds f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfsx f4,r9,r7
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f12,24(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de060
	ctx.lr = 0x823A84B0;
	__restfpr_23(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A8190) {
	__imp__sub_823A8190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A84B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A84B4) {
	__imp__sub_823A84B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A84B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823A84C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823b1ca8
	ctx.lr = 0x823A84DC;
	sub_823B1CA8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823a8514
	if (ctx.cr6.gt) goto loc_823A8514;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r9,r31,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823a8530
	if (!ctx.cr6.gt) goto loc_823A8530;
loc_823A8514:
	// bl 0x823b1c30
	ctx.lr = 0x823A8518;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r9,r31,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823A8530:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r10,6156
	ctx.r7.u64 = ctx.r10.u64 | 6156;
	// ori r6,r8,6152
	ctx.r6.u64 = ctx.r8.u64 | 6152;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 8;
	// sthx r10,r3,r7
	PPC_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u16);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r10,5,11,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FFFE0;
	// sthx r10,r3,r11
	PPC_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r4,r4,10
	ctx.r4.s64 = ctx.r4.s64 + 10;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// clrlwi r24,r7,16
	ctx.r24.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// sthx r5,r3,r27
	PPC_STORE_U16(ctx.r3.u32 + ctx.r27.u32, ctx.r5.u16);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// sthx r24,r3,r9
	PPC_STORE_U16(ctx.r3.u32 + ctx.r9.u32, ctx.r24.u16);
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sthx r24,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r24.u16);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// sthx r28,r3,r4
	PPC_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r28.u16);
	// lis r7,8176
	ctx.r7.s64 = 535822336;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lfs f0,5484(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lfs f13,12168(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsx f11,r8,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lfs f9,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r3,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f8,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stw r7,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f13,20(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f13,24(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f6,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A84B8) {
	__imp__sub_823A84B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A86AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A86AC) {
	__imp__sub_823A86AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A86B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823A86B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823b1ca8
	ctx.lr = 0x823A86D4;
	sub_823B1CA8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// addi r30,r11,-15488
	ctx.r30.s64 = ctx.r11.s64 + -15488;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823a870c
	if (ctx.cr6.gt) goto loc_823A870C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,6152
	ctx.r9.u64 = ctx.r11.u64 | 6152;
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823a8728
	if (!ctx.cr6.gt) goto loc_823A8728;
loc_823A870C:
	// bl 0x823b1c30
	ctx.lr = 0x823A8710;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r9,r30,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
loc_823A8728:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r11,6156
	ctx.r7.u64 = ctx.r11.u64 | 6156;
	// ori r6,r8,6152
	ctx.r6.u64 = ctx.r8.u64 | 6152;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// stwx r10,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// stwx r9,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 8;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// sthx r11,r3,r10
	PPC_STORE_U16(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u16);
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// sthx r11,r3,r7
	PPC_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r28,r9,4
	ctx.r28.s64 = ctx.r9.s64 + 4;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// rlwinm r8,r11,5,11,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1FFFE0;
	// lfs f0,5484(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,10
	ctx.r4.s64 = ctx.r4.s64 + 10;
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sthx r10,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r10.u16);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// sthx r10,r3,r28
	PPC_STORE_U16(ctx.r3.u32 + ctx.r28.u32, ctx.r10.u16);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// sthx r5,r3,r27
	PPC_STORE_U16(ctx.r3.u32 + ctx.r27.u32, ctx.r5.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r7,8176
	ctx.r7.s64 = 535822336;
	// sthx r26,r3,r4
	PPC_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r26.u16);
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// lfs f13,12168(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// stfsx f9,r8,r30
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, temp.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r7,r30,96
	ctx.r7.s64 = ctx.r30.s64 + 96;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f12,24(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f4,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r3,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfsx f11,r8,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A86B0) {
	__imp__sub_823A86B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A88D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A88D4) {
	__imp__sub_823A88D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A88D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f4,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a6e18
	ctx.lr = 0x823A890C;
	sub_823A6E18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_823A88D8) {
	__imp__sub_823A88D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8930) {
	__imp__sub_823A8930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8934) {
	__imp__sub_823A8934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8938) {
	__imp__sub_823A8938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A894C) {
	__imp__sub_823A894C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8950) {
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
	// bl 0x823d58b0
	ctx.lr = 0x823A8968;
	sub_823D58B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a8988
	if (!ctx.cr6.eq) goto loc_823A8988;
loc_823A8970:
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
loc_823A8988:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// bl 0x82178728
	ctx.lr = 0x823A8994;
	sub_82178728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a8970
	if (!ctx.cr6.eq) goto loc_823A8970;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823A89AC;
	sub_823D5A38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823A89B8;
	sub_823D5650(ctx, base);
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

PPC_WEAK_FUNC(sub_823A8950) {
	__imp__sub_823A8950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A89D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823A89F4;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823A8A00;
	sub_823D5650(ctx, base);
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

PPC_WEAK_FUNC(sub_823A89D0) {
	__imp__sub_823A89D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8A14) {
	__imp__sub_823A8A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8A18) {
	__imp__sub_823A8A18(ctx, base);
}

