#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821B9F50) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821B9F78;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9fb0
	if (ctx.cr6.eq) goto loc_821B9FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B9F88;
	sub_821AA3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9fac
	if (ctx.cr6.eq) goto loc_821B9FAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x82235e30
	ctx.lr = 0x821B9FA0;
	sub_82235E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821b9fb0
	if (ctx.cr6.eq) goto loc_821B9FB0;
loc_821B9FAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B9FB0:
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

PPC_WEAK_FUNC(sub_821B9F50) {
	__imp__sub_821B9F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9FC8) {
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
	// bl 0x82235e30
	ctx.lr = 0x821B9FE8;
	sub_82235E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ba008
	if (ctx.cr6.eq) goto loc_821BA008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8ce0
	ctx.lr = 0x821B9FF8;
	sub_821B8CE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8ba8
	ctx.lr = 0x821BA008;
	sub_821B8BA8(ctx, base);
loc_821BA008:
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

PPC_WEAK_FUNC(sub_821B9FC8) {
	__imp__sub_821B9FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r9,0,19,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FE0;
	// rlwinm r8,r8,0,26,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF03F;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821ba058
	if (!ctx.cr6.eq) goto loc_821BA058;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ba058
	if (!ctx.cr6.eq) goto loc_821BA058;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821BA058:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BA020) {
	__imp__sub_821BA020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BA064) {
	__imp__sub_821BA064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821BA070;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de020
	ctx.lr = 0x821BA078;
	__savefpr_26(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BA08C;
	sub_821AB968(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,27440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ac318
	ctx.lr = 0x821BA0B8;
	sub_821AC318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ba0f0
	if (ctx.cr6.eq) goto loc_821BA0F0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f0,20476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f11,f0,f13
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f12
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_821BA0F0:
	// lwz r10,3156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3156);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r6,r11,26012
	ctx.r6.s64 = ctx.r11.s64 + 26012;
	// addi r5,r9,7364
	ctx.r5.s64 = ctx.r9.s64 + 7364;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,256
	ctx.r8.s64 = 256;
	// lfs f1,26012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26012);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// bl 0x82234bd8
	ctx.lr = 0x821BA128;
	sub_82234BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8223fc78
	ctx.lr = 0x821BA134;
	sub_8223FC78(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f26,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x821ba244
	if (!ctx.cr6.gt) goto loc_821BA244;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// lfs f29,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lfs f27,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f27.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f28,6060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6060);
	ctx.f28.f64 = double(temp.f32);
	// ori r28,r8,8209
	ctx.r28.u64 = ctx.r8.u64 | 8209;
loc_821BA180:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4918
	ctx.lr = 0x821BA194;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bgt cr6,0x821ba200
	if (ctx.cr6.gt) goto loc_821BA200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// slw r10,r21,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r10,0,19,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE0;
	// rlwinm r9,r9,0,26,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF03F;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ba1cc
	if (!ctx.cr6.eq) goto loc_821BA1CC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ba1cc
	if (!ctx.cr6.eq) goto loc_821BA1CC;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// b 0x821ba1d0
	goto loc_821BA1D0;
loc_821BA1CC:
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
loc_821BA1D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821f1868
	ctx.lr = 0x821BA1F8;
	sub_821F1868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ba238
	if (!ctx.cr6.eq) goto loc_821BA238;
loc_821BA200:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821BA20C;
	sub_821B9E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba238
	if (ctx.cr6.eq) goto loc_821BA238;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b9cc8
	ctx.lr = 0x821BA228;
	sub_821B9CC8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x821ba238
	if (!ctx.cr6.gt) goto loc_821BA238;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_821BA238:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x821ba180
	if (!ctx.cr0.eq) goto loc_821BA180;
loc_821BA244:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de06c
	ctx.lr = 0x821BA254;
	__restfpr_26(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BA068) {
	__imp__sub_821BA068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA258) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x8233cd78
	sub_8233CD78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BA258) {
	__imp__sub_821BA258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA260) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8223fc78
	ctx.lr = 0x821BA288;
	sub_8223FC78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x821aa3a0
	ctx.lr = 0x821BA2A4;
	sub_821AA3A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ba350
	if (ctx.cr6.eq) goto loc_821BA350;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lfs f13,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821BA2DC;
	sub_822D4AC8(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,740(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bge cr6,0x821ba2fc
	if (!ctx.cr6.lt) goto loc_821BA2FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x821ba358
	goto loc_821BA358;
loc_821BA2FC:
	// lfs f0,736(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821ba318
	if (!ctx.cr6.lt) goto loc_821BA318;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x821ba358
	goto loc_821BA358;
loc_821BA318:
	// lfs f0,748(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821ba334
	if (!ctx.cr6.gt) goto loc_821BA334;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x821ba358
	goto loc_821BA358;
loc_821BA334:
	// lfs f0,744(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821ba358
	if (!ctx.cr6.gt) goto loc_821BA358;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x821ba358
	goto loc_821BA358;
loc_821BA350:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821BA358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_821BA260) {
	__imp__sub_821BA260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BA374) {
	__imp__sub_821BA374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821BA380;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x821ba260
	ctx.lr = 0x821BA3A0;
	sub_821BA260(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x821ba5c0
	if (!ctx.cr6.gt) goto loc_821BA5C0;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_821BA3B8:
	// lbz r11,3153(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3153);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba3e8
	if (ctx.cr6.eq) goto loc_821BA3E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821BA3D8;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ba404
	if (!ctx.cr6.eq) goto loc_821BA404;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821ba404
	goto loc_821BA404;
loc_821BA3E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821BA3F4;
	sub_821B9E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_821BA404:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba430
	if (ctx.cr6.eq) goto loc_821BA430;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821ba430
	if (ctx.cr6.eq) goto loc_821BA430;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x8233cd78
	ctx.lr = 0x821BA424;
	sub_8233CD78(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_821BA430:
	// lwz r8,48(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821ba560
	if (ctx.cr6.eq) goto loc_821BA560;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x821ba4e0
	if (ctx.cr6.lt) goto loc_821BA4E0;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r27,36
	ctx.r9.s64 = ctx.r27.s64 + 36;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r27,20
	ctx.r10.s64 = ctx.r27.s64 + 20;
loc_821BA458:
	// lfs f12,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821ba54c
	if (ctx.cr6.gt) goto loc_821BA54C;
	// lfs f12,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821ba538
	if (ctx.cr6.gt) goto loc_821BA538;
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f10,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821ba540
	if (ctx.cr6.gt) goto loc_821BA540;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f10,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821ba548
	if (ctx.cr6.gt) goto loc_821BA548;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821ba458
	if (ctx.cr6.lt) goto loc_821BA458;
loc_821BA4E0:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821ba54c
	if (!ctx.cr6.lt) goto loc_821BA54C;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
loc_821BA504:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821ba54c
	if (ctx.cr6.gt) goto loc_821BA54C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821ba504
	if (ctx.cr6.lt) goto loc_821BA504;
	// b 0x821ba54c
	goto loc_821BA54C;
loc_821BA538:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821ba54c
	goto loc_821BA54C;
loc_821BA540:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x821ba54c
	goto loc_821BA54C;
loc_821BA548:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_821BA54C:
	// xoris r10,r8,32768
	ctx.r10.u64 = ctx.r8.u64 ^ 2147483648;
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addc r8,r9,r10
	temp.u8 = ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32;
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.xer.ca = temp.u8;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 & ctx.r31.u64;
loc_821BA560:
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ba5a0
	if (ctx.cr6.eq) goto loc_821BA5A0;
	// lbz r11,3153(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3153);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba58c
	if (!ctx.cr6.eq) goto loc_821BA58C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821b98b0
	ctx.lr = 0x821BA588;
	sub_821B98B0(ctx, base);
	// b 0x821ba594
	goto loc_821BA594;
loc_821BA58C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b9b28
	ctx.lr = 0x821BA594;
	sub_821B9B28(ctx, base);
loc_821BA594:
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821ba5b0
	if (!ctx.cr6.eq) goto loc_821BA5B0;
loc_821BA5A0:
	// ldu r11,-8(r25)
	ea = -8 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r25.u32 = ea;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// b 0x821ba5b8
	goto loc_821BA5B8;
loc_821BA5B0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_821BA5B8:
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821ba3b8
	if (ctx.cr6.lt) goto loc_821BA3B8;
loc_821BA5C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BA378) {
	__imp__sub_821BA378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BA5CC) {
	__imp__sub_821BA5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ba5f4
	if (!ctx.cr6.lt) goto loc_821BA5F4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821BA5F4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BA5D0) {
	__imp__sub_821BA5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3173);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba620
	if (ctx.cr6.eq) goto loc_821BA620;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-19192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19192);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821ba628
	goto loc_821BA628;
loc_821BA620:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,26040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26040);
	ctx.f1.f64 = double(temp.f32);
loc_821BA628:
	// lfs f12,4928(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4916(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x821ba684
	if (ctx.cr6.gt) goto loc_821BA684;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,4944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ba67c
	if (!ctx.cr6.eq) goto loc_821BA67C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4928(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,27440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f1,f11,f12,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// blr 
	return;
loc_821BA67C:
	// lfs f1,4928(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821BA684:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,4924(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f0,f4,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f9,f11,f13,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// fdivs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// ble cr6,0x821ba700
	if (!ctx.cr6.gt) goto loc_821BA700;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_821BA700:
	// fsubs f12,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f8,f9,f13,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BA608) {
	__imp__sub_821BA608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BA72C) {
	__imp__sub_821BA72C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f0,6688(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821ba7b8
	if (ctx.cr6.lt) goto loc_821BA7B8;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BA75C:
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ba770
	if (!ctx.cr6.gt) goto loc_821BA770;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821BA770:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ba784
	if (!ctx.cr6.gt) goto loc_821BA784;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_821BA784:
	// lfs f13,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ba798
	if (!ctx.cr6.gt) goto loc_821BA798;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_821BA798:
	// lfs f13,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ba7ac
	if (!ctx.cr6.gt) goto loc_821BA7AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_821BA7AC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x821ba75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA75C;
loc_821BA7B8:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x821ba7f4
	if (!ctx.cr6.lt) goto loc_821BA7F4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BA7D4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ba7e8
	if (!ctx.cr6.gt) goto loc_821BA7E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821BA7E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x821ba7d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA7D4;
loc_821BA7F4:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BA730) {
	__imp__sub_821BA730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821BA808;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-23088
	ctx.r6.s64 = ctx.r11.s64 + -23088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r28,r7,-1
	ctx.r28.s64 = ctx.r7.s64 + -1;
	// bl 0x823def18
	ctx.lr = 0x821BA83C;
	sub_823DEF18(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821ba864
	if (!ctx.cr6.gt) goto loc_821BA864;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_821BA858:
	// lwzu r9,-8(r11)
	ea = -8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ba858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA858;
loc_821BA864:
	// lbz r11,3153(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba9ac
	if (ctx.cr6.eq) goto loc_821BA9AC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x821aa3a0
	ctx.lr = 0x821BA888;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ba8a8
	if (ctx.cr6.eq) goto loc_821BA8A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ba8ac
	if (!ctx.cr6.eq) goto loc_821BA8AC;
loc_821BA8A8:
	// li r24,0
	ctx.r24.s64 = 0;
loc_821BA8AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4928(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4928);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ba964
	if (!ctx.cr6.gt) goto loc_821BA964;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x821ba950
	if (ctx.cr6.lt) goto loc_821BA950;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lfs f31,20420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20420);
	ctx.f31.f64 = double(temp.f32);
loc_821BA8D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bgt cr6,0x821ba950
	if (ctx.cr6.gt) goto loc_821BA950;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82236610
	ctx.lr = 0x821BA91C;
	sub_82236610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ba950
	if (!ctx.cr6.eq) goto loc_821BA950;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821ba940
	if (ctx.cr6.eq) goto loc_821BA940;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ba950
	if (ctx.cr6.eq) goto loc_821BA950;
loc_821BA940:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x821ba8d8
	if (!ctx.cr6.gt) goto loc_821BA8D8;
loc_821BA950:
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 & ctx.r10.u64;
	// b 0x821ba968
	goto loc_821BA968;
loc_821BA964:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821BA968:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821ba9ac
	if (ctx.cr6.lt) goto loc_821BA9AC;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// add r30,r10,r26
	ctx.r30.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_821BA984:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222fdd8
	ctx.lr = 0x821BA990;
	sub_8222FDD8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stwu r9,-4(r30)
	ea = -4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// bne 0x821ba984
	if (!ctx.cr0.eq) goto loc_821BA984;
loc_821BA9AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BA800) {
	__imp__sub_821BA800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BA9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821BA9C0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821BA9D8;
	sub_821AA3D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r28,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba608
	ctx.lr = 0x821BA9F0;
	sub_821BA608(ctx, base);
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821baa3c
	if (!ctx.cr6.eq) goto loc_821BAA3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821baa3c
	if (ctx.cr6.eq) goto loc_821BAA3C;
	// lbz r11,3173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3173);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821baa3c
	if (ctx.cr6.eq) goto loc_821BAA3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9530
	ctx.lr = 0x821BAA1C;
	sub_821A9530(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821baa3c
	if (!ctx.cr6.gt) goto loc_821BAA3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9530
	ctx.lr = 0x821BAA34;
	sub_821A9530(ctx, base);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// b 0x821baa40
	goto loc_821BAA40;
loc_821BAA3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_821BAA40:
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r8,256
	ctx.r8.s64 = 256;
	// lfs f2,4932(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4932);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r10,7364
	ctx.r9.s64 = ctx.r10.s64 + 7364;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x82234bd8
	ctx.lr = 0x821BAA6C;
	sub_82234BD8(ctx, base);
	// lbz r5,3153(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821baa84
	if (ctx.cr6.eq) goto loc_821BAA84;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// b 0x821baa90
	goto loc_821BAA90;
loc_821BAA84:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db778
	ctx.lr = 0x821BAA90;
	sub_821DB778(ctx, base);
loc_821BAA90:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,4940(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4940);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba378
	ctx.lr = 0x821BAAA8;
	sub_821BA378(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821baac4
	if (!ctx.cr6.eq) goto loc_821BAAC4;
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821BAAC4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x821baaec
	if (!ctx.cr6.eq) goto loc_821BAAEC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821ba730
	ctx.lr = 0x821BAAD8;
	sub_821BA730(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821BAAEC:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x821baaf8
	if (!ctx.cr6.lt) goto loc_821BAAF8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_821BAAF8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba800
	ctx.lr = 0x821BAB0C;
	sub_821BA800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BA9B8) {
	__imp__sub_821BA9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BAB1C) {
	__imp__sub_821BAB1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BAB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821BAB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821bab90
	if (!ctx.cr6.gt) goto loc_821BAB90;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_821BAB48:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821bab48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAB48;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821bab90
	if (!ctx.cr6.gt) goto loc_821BAB90;
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821BAB64:
	// bl 0x8222fd60
	ctx.lr = 0x821BAB68;
	sub_8222FD60(ctx, base);
	// divw r9,r3,r29
	ctx.r9.s32 = ctx.r3.s32 / ctx.r29.s32;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r8,r9,r29
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// bne 0x821bab64
	if (!ctx.cr0.eq) goto loc_821BAB64;
loc_821BAB90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BAB20) {
	__imp__sub_821BAB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BAB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821BABA0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lhz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821bac64
	if (!ctx.cr6.gt) goto loc_821BAC64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_821BABE4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bac54
	if (ctx.cr6.eq) goto loc_821BAC54;
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x82234970
	ctx.lr = 0x821BAC00;
	sub_82234970(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821bac54
	if (ctx.cr6.eq) goto loc_821BAC54;
	// lhz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bac54
	if (ctx.cr6.eq) goto loc_821BAC54;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f7,f9,f13,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x821bac54
	if (!ctx.cr6.gt) goto loc_821BAC54;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x821baca4
	if (ctx.cr6.lt) goto loc_821BACA4;
loc_821BAC54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821babe4
	if (ctx.cr6.lt) goto loc_821BABE4;
loc_821BAC64:
	// lwz r7,3528(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3528);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 16384;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r26,20
	ctx.r4.s64 = ctx.r26.s64 + 20;
	// lfs f1,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lhz r5,126(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// bl 0x821c8b88
	ctx.lr = 0x821BAC94;
	sub_821C8B88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821BACA4:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x821bac64
	if (!ctx.cr6.lt) goto loc_821BAC64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BAB98) {
	__imp__sub_821BAB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BACC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821BACC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r10,720(r3)
	PPC_STORE_U8(ctx.r3.u32 + 720, ctx.r10.u8);
	// lwz r24,92(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821baeb4
	if (ctx.cr6.eq) goto loc_821BAEB4;
	// lhz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 100);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// bl 0x821db778
	ctx.lr = 0x821BACF8;
	sub_821DB778(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ba260
	ctx.lr = 0x821BAD04;
	sub_821BA260(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821bae2c
	if (!ctx.cr6.gt) goto loc_821BAE2C;
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,-8
	ctx.r28.s64 = ctx.r11.s64 + -8;
loc_821BAD1C:
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bae20
	if (ctx.cr6.eq) goto loc_821BAE20;
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x82234970
	ctx.lr = 0x821BAD38;
	sub_82234970(ctx, base);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r27,4916
	ctx.r4.s64 = ctx.r27.s64 + 4916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aae88
	ctx.lr = 0x821BAD4C;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bae20
	if (ctx.cr6.eq) goto loc_821BAE20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821BAD64;
	sub_821B9E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bae20
	if (ctx.cr6.eq) goto loc_821BAE20;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bad8c
	if (ctx.cr6.eq) goto loc_821BAD8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821BAD84;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bae20
	if (ctx.cr6.eq) goto loc_821BAE20;
loc_821BAD8C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82236610
	ctx.lr = 0x821BAD9C;
	sub_82236610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bae20
	if (!ctx.cr6.eq) goto loc_821BAE20;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bae04
	if (ctx.cr6.eq) goto loc_821BAE04;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble cr6,0x821bae04
	if (!ctx.cr6.gt) goto loc_821BAE04;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_821BADC8:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f13,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821badfc
	if (ctx.cr6.gt) goto loc_821BADFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821badc8
	if (ctx.cr6.lt) goto loc_821BADC8;
	// b 0x821bae04
	goto loc_821BAE04;
loc_821BADFC:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821bae20
	if (ctx.cr6.lt) goto loc_821BAE20;
loc_821BAE04:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b98b0
	ctx.lr = 0x821BAE18;
	sub_821B98B0(ctx, base);
	// stfsu f1,8(r28)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r28.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_821BAE20:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// bne 0x821bad1c
	if (!ctx.cr0.eq) goto loc_821BAD1C;
loc_821BAE2C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821bab20
	ctx.lr = 0x821BAE38;
	sub_821BAB20(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x821baeb4
	if (!ctx.cr6.gt) goto loc_821BAEB4;
	// addi r29,r24,20
	ctx.r29.s64 = ctx.r24.s64 + 20;
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
loc_821BAE50:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f1,f13,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// bl 0x821bab98
	ctx.lr = 0x821BAE94;
	sub_821BAB98(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821baec0
	if (!ctx.cr6.eq) goto loc_821BAEC0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// blt cr6,0x821bae50
	if (ctx.cr6.lt) goto loc_821BAE50;
loc_821BAEB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821BAEC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BACC0) {
	__imp__sub_821BACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BAECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BAECC) {
	__imp__sub_821BAECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BAED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f10,4928(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f5,f11,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fsqrts f0,f5
	ctx.f0.f64 = double(float(sqrt(ctx.f5.f64)));
	// fadds f4,f0,f1
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f10,f4
	ctx.cr6.compare(ctx.f10.f64, ctx.f4.f64);
	// blt cr6,0x821baf2c
	if (ctx.cr6.lt) goto loc_821BAF2C;
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
loc_821BAF2C:
	// fneg f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f10,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// fsel f6,f8,f10,f0
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fdivs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 / ctx.f6.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmadds f0,f5,f3,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f5,f2,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f5,f1,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BAED0) {
	__imp__sub_821BAED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BAF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821BAF80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4928(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stb r11,720(r3)
	PPC_STORE_U8(ctx.r3.u32 + 720, ctx.r11.u8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fsel f31,f13,f1,f0
	ctx.f31.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821baed0
	ctx.lr = 0x821BAFB0;
	sub_821BAED0(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,4932(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4932);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r10,7364
	ctx.r9.s64 = ctx.r10.s64 + 7364;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lwz r6,3156(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3156);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x82234bd8
	ctx.lr = 0x821BAFE4;
	sub_82234BD8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x821db778
	ctx.lr = 0x821BB000;
	sub_821DB778(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ba260
	ctx.lr = 0x821BB00C;
	sub_821BA260(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821bb0e0
	if (!ctx.cr6.gt) goto loc_821BB0E0;
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
loc_821BB018:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821bb0d4
	if (ctx.cr6.eq) goto loc_821BB0D4;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bb0d4
	if (ctx.cr6.eq) goto loc_821BB0D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821BB040;
	sub_821B9E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb0d4
	if (ctx.cr6.eq) goto loc_821BB0D4;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bb0b0
	if (ctx.cr6.eq) goto loc_821BB0B0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble cr6,0x821bb0b0
	if (!ctx.cr6.gt) goto loc_821BB0B0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
loc_821BB074:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f13,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x821bb0a8
	if (ctx.cr6.gt) goto loc_821BB0A8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821bb074
	if (ctx.cr6.lt) goto loc_821BB074;
	// b 0x821bb0b0
	goto loc_821BB0B0;
loc_821BB0A8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821bb0d4
	if (ctx.cr6.lt) goto loc_821BB0D4;
loc_821BB0B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b98b0
	ctx.lr = 0x821BB0C0;
	sub_821B98B0(ctx, base);
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x821bb0d4
	if (!ctx.cr6.lt) goto loc_821BB0D4;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_821BB0D4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x821bb018
	if (!ctx.cr0.eq) goto loc_821BB018;
loc_821BB0E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BAF78) {
	__imp__sub_821BAF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821BB0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BB104;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb174
	if (ctx.cr6.eq) goto loc_821BB174;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821bb174
	if (!ctx.cr6.eq) goto loc_821BB174;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ba9b8
	ctx.lr = 0x821BB134;
	sub_821BA9B8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 708, ctx.r3.u32);
	// ble cr6,0x821bb17c
	if (!ctx.cr6.gt) goto loc_821BB17C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r30,5038
	ctx.r28.s64 = ctx.r30.s64 + 5038;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_821BB150:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82234950
	ctx.lr = 0x821BB158;
	sub_82234950(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sthu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r28.u32 = ea;
	// lwz r10,708(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bb150
	if (ctx.cr6.lt) goto loc_821BB150;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821BB174:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 708, ctx.r11.u32);
loc_821BB17C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BB0F0) {
	__imp__sub_821BB0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BB184) {
	__imp__sub_821BB184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB188) {
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
	// bl 0x821aa3a0
	ctx.lr = 0x821BB1A0;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb228
	if (ctx.cr6.eq) goto loc_821BB228;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821bb228
	if (!ctx.cr6.eq) goto loc_821BB228;
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb230
	if (ctx.cr6.eq) goto loc_821BB230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BB1D4;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb1f8
	if (!ctx.cr6.eq) goto loc_821BB1F8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4752);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bb228
	if (ctx.cr6.lt) goto loc_821BB228;
loc_821BB1F8:
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// addi r11,r11,2520
	ctx.r11.s64 = ctx.r11.s64 + 2520;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82234970
	ctx.lr = 0x821BB214;
	sub_82234970(ctx, base);
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
loc_821BB228:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
loc_821BB230:
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

PPC_WEAK_FUNC(sub_821BB188) {
	__imp__sub_821BB188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB248) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821bb284
	if (ctx.cr6.eq) goto loc_821BB284;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bb2d4
	if (!ctx.cr6.eq) goto loc_821BB2D4;
loc_821BB284:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821BB290;
	sub_821B9E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb2d4
	if (ctx.cr6.eq) goto loc_821BB2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bb2dc
	if (!ctx.cr6.eq) goto loc_821BB2DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1a98
	ctx.lr = 0x821BB2C0;
	sub_821B1A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb2dc
	if (!ctx.cr6.eq) goto loc_821BB2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821BB2D4;
	sub_821DBA18(ctx, base);
loc_821BB2D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821bb324
	goto loc_821BB324;
loc_821BB2DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821BB2E8;
	sub_82240108(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x821bb314
	if (ctx.cr6.eq) goto loc_821BB314;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da9e8
	ctx.lr = 0x821BB314;
	sub_821DA9E8(ctx, base);
loc_821BB314:
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da818
	ctx.lr = 0x821BB320;
	sub_821DA818(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821BB324:
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

PPC_WEAK_FUNC(sub_821BB248) {
	__imp__sub_821BB248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BB33C) {
	__imp__sub_821BB33C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821BB348;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821201f0
	ctx.lr = 0x821BB35C;
	sub_821201F0(ctx, base);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r8,512
	ctx.r8.s64 = 512;
	// lfs f2,4932(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4932);
	ctx.f2.f64 = double(temp.f32);
	// ori r9,r9,7932
	ctx.r9.u64 = ctx.r9.u64 | 7932;
	// lfs f1,4928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4916
	ctx.r3.s64 = ctx.r31.s64 + 4916;
	// lwz r28,4940(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4940);
	// bl 0x82234bd8
	ctx.lr = 0x821BB384;
	sub_82234BD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821bb3c4
	if (!ctx.cr6.gt) goto loc_821BB3C4;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821BB394:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x8233cd78
	ctx.lr = 0x821BB3A4;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bb3b8
	if (ctx.cr6.eq) goto loc_821BB3B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x821BB3B8;
	sub_82235A10(ctx, base);
loc_821BB3B8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821bb394
	if (!ctx.cr0.eq) goto loc_821BB394;
loc_821BB3C4:
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BB340) {
	__imp__sub_821BB340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BB3CC) {
	__imp__sub_821BB3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB3D0) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821ba9b8
	ctx.lr = 0x821BB3E8;
	sub_821BA9B8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BB3D0) {
	__imp__sub_821BB3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BB410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BB420;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb438
	if (!ctx.cr6.eq) goto loc_821BB438;
loc_821BB42C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BB438:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bb42c
	if (ctx.cr6.eq) goto loc_821BB42C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r31,3712
	ctx.r29.s64 = ctx.r31.s64 + 3712;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821BB45C;
	sub_822D4918(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lbz r7,4608(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// lbz r6,4611(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// lfs f0,14892(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14892);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-3
	ctx.r9.s64 = ctx.r11.s64 + -3;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// fsel f7,f13,f0,f1
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// bge cr6,0x821bb48c
	if (!ctx.cr6.lt) goto loc_821BB48C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_821BB48C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r10,232
	ctx.r11.s64 = ctx.r10.s64 + 232;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// blt cr6,0x821bb524
	if (ctx.cr6.lt) goto loc_821BB524;
	// mulli r7,r8,28
	ctx.r7.s64 = ctx.r8.s64 * 28;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// add r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
loc_821BB4D8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f5,f13,f9,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f12
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// bge cr6,0x821bb504
	if (!ctx.cr6.lt) goto loc_821BB504;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bgt cr6,0x821bb42c
	if (ctx.cr6.gt) goto loc_821BB42C;
loc_821BB504:
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f6,f0,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bgt cr6,0x821bb530
	if (ctx.cr6.gt) goto loc_821BB530;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821bb4d8
	if (!ctx.cr6.lt) goto loc_821BB4D8;
loc_821BB524:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BB530:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821bb524
	if (!ctx.cr6.eq) goto loc_821BB524;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BB408) {
	__imp__sub_821BB408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB548) {
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
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
loc_821BB56C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821bb65c
	goto loc_821BB65C;
loc_821BB574:
	// lbz r11,4611(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// lbz r10,4608(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bgt cr6,0x821bb56c
	if (ctx.cr6.gt) goto loc_821BB56C;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,232
	ctx.r4.s64 = ctx.r10.s64 + 232;
	// addi r3,r11,3712
	ctx.r3.s64 = ctx.r11.s64 + 3712;
	// bl 0x822d4918
	ctx.lr = 0x821BB5A8;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,26044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821bb56c
	if (ctx.cr6.gt) goto loc_821BB56C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bl 0x821c7010
	ctx.lr = 0x821BB5C8;
	sub_821C7010(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bb5dc
	if (ctx.cr6.eq) goto loc_821BB5DC;
loc_821BB5D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bb65c
	goto loc_821BB65C;
loc_821BB5DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb650
	if (ctx.cr6.eq) goto loc_821BB650;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bb650
	if (ctx.cr6.eq) goto loc_821BB650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BB614;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb650
	if (ctx.cr6.eq) goto loc_821BB650;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821bb650
	if (!ctx.cr6.eq) goto loc_821BB650;
	// lfs f0,4620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821bb650
	if (!ctx.cr6.eq) goto loc_821BB650;
	// lfs f0,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821bb5d4
	if (ctx.cr6.eq) goto loc_821BB5D4;
loc_821BB650:
	// lhz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 700);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821BB65C:
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

PPC_WEAK_FUNC(sub_821BB548) {
	__imp__sub_821BB548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BB674) {
	__imp__sub_821BB674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821BB680;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x821BB688;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 700);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,3712
	ctx.r31.s64 = ctx.r3.s64 + 3712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb6c8
	if (ctx.cr6.eq) goto loc_821BB6C8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,-624(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -624);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d5368
	ctx.lr = 0x821BB6C4;
	sub_822D5368(ctx, base);
	// b 0x821bb724
	goto loc_821BB724;
loc_821BB6C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7010
	ctx.lr = 0x821BB6D0;
	sub_821C7010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb70c
	if (ctx.cr6.eq) goto loc_821BB70C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c6628
	ctx.lr = 0x821BB6E4;
	sub_821C6628(ctx, base);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bb738
	goto loc_821BB738;
loc_821BB70C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f11,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821BB724:
	// lfs f12,908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821BB738:
	// lbz r11,899(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 899);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,896(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 896);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r26,3528(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3528);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lfs f29,7640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7640);
	ctx.f29.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821bb850
	if (!ctx.cr6.lt) goto loc_821BB850;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f28,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// addi r27,r11,-9672
	ctx.r27.s64 = ctx.r11.s64 + -9672;
	// lfs f30,26048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26048);
	ctx.f30.f64 = double(temp.f32);
loc_821BB794:
	// lbz r11,899(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 899);
	// lfs f12,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821bb7d0
	if (!ctx.cr6.gt) goto loc_821BB7D0;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// bgt cr6,0x821bb850
	if (ctx.cr6.gt) goto loc_821BB850;
loc_821BB7D0:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f9,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// blt cr6,0x821bb838
	if (ctx.cr6.lt) goto loc_821BB838;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lhz r7,126(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fe618
	ctx.lr = 0x821BB820;
	sub_821FE618(ctx, base);
	// lbz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821bb850
	if (!ctx.cr6.eq) goto loc_821BB850;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x821bb850
	if (ctx.cr6.lt) goto loc_821BB850;
loc_821BB838:
	// lbz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 896);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bb794
	if (ctx.cr6.lt) goto loc_821BB794;
loc_821BB850:
	// lbz r11,899(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 899);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821bb8bc
	if (ctx.cr6.eq) goto loc_821BB8BC;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r10,r11,-28
	ctx.r10.s64 = ctx.r11.s64 + -28;
	// lfs f12,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f10,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821BB898;
	sub_822D4AC8(ctx, base);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822ad078
	ctx.lr = 0x821BB8A4;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,500(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 500);
	// bl 0x82229da8
	ctx.lr = 0x821BB8BC;
	sub_82229DA8(ctx, base);
loc_821BB8BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x821BB8C8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BB678) {
	__imp__sub_821BB678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BB8CC) {
	__imp__sub_821BB8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BB8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821BB8D8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de01c
	ctx.lr = 0x821BB8E0;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bba94
	if (ctx.cr6.eq) goto loc_821BBA94;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r9,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bba94
	if (ctx.cr6.eq) goto loc_821BBA94;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,672(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f10,f13,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f26,26052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26052);
	ctx.f26.f64 = double(temp.f32);
	// fcmpu cr6,f7,f26
	ctx.cr6.compare(ctx.f7.f64, ctx.f26.f64);
	// bgt cr6,0x821bba94
	if (ctx.cr6.gt) goto loc_821BBA94;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bb97c
	if (ctx.cr6.eq) goto loc_821BB97C;
	// lfs f29,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fneg f30,f10
	ctx.f30.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// b 0x821bb988
	goto loc_821BB988;
loc_821BB97C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821BB988:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,4608(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4608);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// ble cr6,0x821bba94
	if (!ctx.cr6.gt) goto loc_821BBA94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r26,3740
	ctx.r31.s64 = ctx.r26.s64 + 3740;
	// lfs f27,20476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,24356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24356);
	ctx.f25.f64 = double(temp.f32);
loc_821BB9BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d4918
	ctx.lr = 0x821BB9C8;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bgt cr6,0x821bba94
	if (ctx.cr6.gt) goto loc_821BBA94;
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bgt cr6,0x821bba94
	if (ctx.cr6.gt) goto loc_821BBA94;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821bba7c
	if (ctx.cr6.lt) goto loc_821BBA7C;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821BBA0C;
	sub_822D4AC8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f13,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f5,f26
	ctx.cr6.compare(ctx.f5.f64, ctx.f26.f64);
	// ble cr6,0x821bba74
	if (!ctx.cr6.gt) goto loc_821BBA74;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f13,f29,f13,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x821bba74
	if (!ctx.cr6.gt) goto loc_821BBA74;
	// lhz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821bba74
	if (!ctx.cr6.gt) goto loc_821BBA74;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821BBA58:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821bbaa8
	if (ctx.cr6.eq) goto loc_821BBAA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821bba58
	if (ctx.cr6.lt) goto loc_821BBA58;
loc_821BBA74:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
loc_821BBA7C:
	// lbz r11,4608(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4608);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bb9bc
	if (ctx.cr6.lt) goto loc_821BB9BC;
loc_821BBA94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x821BBAA4;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821BBAA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x821BBAB8;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BB8D0) {
	__imp__sub_821BB8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BBABC) {
	__imp__sub_821BBABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBAC0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BBADC;
	sub_821CFAE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821BBAF8;
	sub_821CE2B8(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_821BBAC0) {
	__imp__sub_821BBAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBB20) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BBB20) {
	__imp__sub_821BBB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBB28) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,3412(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x821b4eb0
	ctx.lr = 0x821BBB6C;
	sub_821B4EB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,5038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5038, ctx.r7.u8);
	// bl 0x821b4de8
	ctx.lr = 0x821BBB7C;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821bbbbc
	if (!ctx.cr6.eq) goto loc_821BBBBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821da9e8
	ctx.lr = 0x821BBB90;
	sub_821DA9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b52d8
	ctx.lr = 0x821BBB98;
	sub_821B52D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821b4eb0
	ctx.lr = 0x821BBBAC;
	sub_821B4EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BBBB4;
	sub_821ABA40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bbc80
	goto loc_821BBC80;
loc_821BBBBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,26056
	ctx.r10.s64 = ctx.r11.s64 + 26056;
	// stw r10,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r10.u32);
	// bl 0x821a9ec0
	ctx.lr = 0x821BBBCC;
	sub_821A9EC0(ctx, base);
	// lwz r8,692(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821bbc74
	if (!ctx.cr6.gt) goto loc_821BBC74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f31,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821a96b0
	ctx.lr = 0x821BBC30;
	sub_821A96B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bbc64
	if (ctx.cr6.eq) goto loc_821BBC64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821bbc64
	if (!ctx.cr6.lt) goto loc_821BBC64;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// b 0x821bbc74
	goto loc_821BBC74;
loc_821BBC64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f29,236(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f31,240(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
loc_821BBC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b26b8
	ctx.lr = 0x821BBC7C;
	sub_821B26B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBC80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_821BBB28) {
	__imp__sub_821BBB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BBCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,332(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821bbce0
	if (!ctx.cr6.gt) goto loc_821BBCE0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r4,126(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// addi r3,r10,26072
	ctx.r3.s64 = ctx.r10.s64 + 26072;
	// bl 0x822e84f0
	ctx.lr = 0x821BBCD0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821BBCD4;
	sub_822AD350(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 332, ctx.r9.u32);
loc_821BBCE0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r11,r29,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bbd10
	if (ctx.cr6.eq) goto loc_821BBD10;
	// bl 0x8223fb90
	ctx.lr = 0x821BBD00;
	sub_8223FB90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bbd10
	if (ctx.cr6.eq) goto loc_821BBD10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82238348
	ctx.lr = 0x821BBD10;
	sub_82238348(ctx, base);
loc_821BBD10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821BBD18;
	sub_821AE110(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821BBD24;
	sub_82240108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5e18
	ctx.lr = 0x821BBD2C;
	sub_821C5E18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r9.u32);
	// lwz r8,3412(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3412);
	// lwz r7,3528(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// rlwinm r6,r7,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r6,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r6.u32);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x821bbdc4
	if (ctx.cr6.eq) goto loc_821BBDC4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bbdc4
	if (!ctx.cr6.eq) goto loc_821BBDC4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821bbd7c
	if (ctx.cr6.lt) goto loc_821BBD7C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ble cr6,0x821bbd80
	if (!ctx.cr6.gt) goto loc_821BBD80;
loc_821BBD7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BBD80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bbdc4
	if (!ctx.cr6.eq) goto loc_821BBDC4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r8,500
	ctx.r8.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stb r29,406(r31)
	PPC_STORE_U8(ctx.r31.u32 + 406, ctx.r29.u8);
	// stb r29,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r29.u8);
	// stw r8,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r8.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// bl 0x821b8478
	ctx.lr = 0x821BBDC4;
	sub_821B8478(ctx, base);
loc_821BBDC4:
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da818
	ctx.lr = 0x821BBDD0;
	sub_821DA818(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BBCA0) {
	__imp__sub_821BBCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BBDDC) {
	__imp__sub_821BBDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBDE0) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821bebf8
	ctx.lr = 0x821BBE00;
	sub_821BEBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c4b40
	ctx.lr = 0x821BBE08;
	sub_821C4B40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822407c8
	ctx.lr = 0x821BBE10;
	sub_822407C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BBE18;
	sub_821ABA40(ctx, base);
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

PPC_WEAK_FUNC(sub_821BBDE0) {
	__imp__sub_821BBDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BBE2C) {
	__imp__sub_821BBE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBE30) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r9,r10,26108
	ctx.r9.s64 = ctx.r10.s64 + 26108;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r9,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpwi cr6,r6,200
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 200, ctx.xer);
	// bne cr6,0x821bbeb8
	if (!ctx.cr6.eq) goto loc_821BBEB8;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,800
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 800, ctx.xer);
	// blt cr6,0x821bbeb8
	if (ctx.cr6.lt) goto loc_821BBEB8;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821bebf8
	ctx.lr = 0x821BBE94;
	sub_821BEBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c4b40
	ctx.lr = 0x821BBE9C;
	sub_821C4B40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822407c8
	ctx.lr = 0x821BBEA4;
	sub_822407C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BBEAC;
	sub_821ABA40(ctx, base);
	// li r4,201
	ctx.r4.s64 = 201;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da818
	ctx.lr = 0x821BBEB8;
	sub_821DA818(ctx, base);
loc_821BBEB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lwz r9,3372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3372);
	// addi r8,r10,-500
	ctx.r8.s64 = ctx.r10.s64 + -500;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r6,r11,84
	ctx.r6.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821bbf14
	if (!ctx.cr6.eq) goto loc_821BBF14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4de8
	ctx.lr = 0x821BBEE4;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bbf14
	if (!ctx.cr6.eq) goto loc_821BBF14;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,200
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 200, ctx.xer);
	// bne cr6,0x821bbf0c
	if (!ctx.cr6.eq) goto loc_821BBF0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbde0
	ctx.lr = 0x821BBF0C;
	sub_821BBDE0(ctx, base);
loc_821BBF0C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821bbf78
	goto loc_821BBF78;
loc_821BBF14:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BBF20;
	sub_821CFAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b58c8
	ctx.lr = 0x821BBF28;
	sub_821B58C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821BBF30;
	sub_821B2850(ctx, base);
	// lbz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbf48
	if (ctx.cr6.eq) goto loc_821BBF48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821b8478
	ctx.lr = 0x821BBF48;
	sub_821B8478(ctx, base);
loc_821BBF48:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r10,500
	ctx.r10.s64 = ctx.r10.s64 + 500;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bbf74
	if (ctx.cr6.lt) goto loc_821BBF74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stw r9,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82340d30
	ctx.lr = 0x821BBF74;
	sub_82340D30(ctx, base);
loc_821BBF74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBF78:
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

PPC_WEAK_FUNC(sub_821BBE30) {
	__imp__sub_821BBE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBF90) {
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
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// li r8,500
	ctx.r8.s64 = 500;
	// stb r11,406(r3)
	PPC_STORE_U8(ctx.r3.u32 + 406, ctx.r11.u8);
	// stb r11,405(r3)
	PPC_STORE_U8(ctx.r3.u32 + 405, ctx.r11.u8);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r8,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r8.u32);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// bl 0x821da818
	ctx.lr = 0x821BBFC8;
	sub_821DA818(ctx, base);
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

PPC_WEAK_FUNC(sub_821BBF90) {
	__imp__sub_821BBF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BBFDC) {
	__imp__sub_821BBFDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,406(r3)
	PPC_STORE_U8(ctx.r3.u32 + 406, ctx.r11.u8);
	// stb r11,405(r3)
	PPC_STORE_U8(ctx.r3.u32 + 405, ctx.r11.u8);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BBFE0) {
	__imp__sub_821BBFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BBFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BBFFC) {
	__imp__sub_821BBFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,406(r3)
	PPC_STORE_U8(ctx.r3.u32 + 406, ctx.r11.u8);
	// stb r11,405(r3)
	PPC_STORE_U8(ctx.r3.u32 + 405, ctx.r11.u8);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BC000) {
	__imp__sub_821BC000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BC01C) {
	__imp__sub_821BC01C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC020) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc094
	if (ctx.cr6.eq) goto loc_821BC094;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,3372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// addi r9,r11,2616
	ctx.r9.s64 = ctx.r11.s64 + 2616;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bc070
	if (!ctx.cr6.eq) goto loc_821BC070;
	// bl 0x821b4de8
	ctx.lr = 0x821BC060;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bc070
	if (!ctx.cr6.eq) goto loc_821BC070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821BC070;
	sub_821B4E00(ctx, base);
loc_821BC070:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x821b4eb0
	ctx.lr = 0x821BC094;
	sub_821B4EB0(ctx, base);
loc_821BC094:
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

PPC_WEAK_FUNC(sub_821BC020) {
	__imp__sub_821BC020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC0A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4928(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f1,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x821bc11c
	if (!ctx.cr6.lt) goto loc_821BC11C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4916
	ctx.r4.s64 = ctx.r3.s64 + 4916;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aaf30
	ctx.lr = 0x821BC0F0;
	sub_821AAF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bc104
	if (!ctx.cr6.eq) goto loc_821BC104;
loc_821BC0FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1a00
	ctx.lr = 0x821BC104;
	sub_821B1A00(ctx, base);
loc_821BC104:
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
loc_821BC11C:
	// addi r30,r31,4916
	ctx.r30.s64 = ctx.r31.s64 + 4916;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238eb8
	ctx.lr = 0x821BC12C;
	sub_82238EB8(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc0fc
	if (ctx.cr6.eq) goto loc_821BC0FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x821aae88
	ctx.lr = 0x821BC144;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc0fc
	if (ctx.cr6.eq) goto loc_821BC0FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821BC158;
	sub_8223FB90(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc104
	if (ctx.cr6.eq) goto loc_821BC104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c6a48
	ctx.lr = 0x821BC170;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// addi r7,r8,20
	ctx.r7.s64 = ctx.r8.s64 + 20;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x821ac4c0
	ctx.lr = 0x821BC198;
	sub_821AC4C0(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cdb08
	ctx.lr = 0x821BC1A4;
	sub_821CDB08(ctx, base);
	// b 0x821bc104
	goto loc_821BC104;
}

PPC_WEAK_FUNC(sub_821BC0A8) {
	__imp__sub_821BC0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x821BC1B0;
	__savegprlr_20(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821BC1D0;
	sub_821AA3D0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821BC200;
	sub_822D4AC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r11,24596
	ctx.r23.s64 = ctx.r11.s64 + 24596;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lfs f12,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lfs f11,12(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,24(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f11,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f3,f12,f13,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f2,f11,f13,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f1,f10,f13,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_821BC28C:
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821bc380
	if (ctx.cr6.lt) goto loc_821BC380;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821bc330
	if (ctx.cr6.lt) goto loc_821BC330;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
loc_821BC2B8:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821bc380
	if (ctx.cr6.lt) goto loc_821BC380;
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821bc36c
	if (ctx.cr6.lt) goto loc_821BC36C;
	// lwz r8,-16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821bc374
	if (ctx.cr6.lt) goto loc_821BC374;
	// lwz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821bc37c
	if (ctx.cr6.lt) goto loc_821BC37C;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stwu r9,-16(r11)
	ea = -16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x821bc2b8
	if (!ctx.cr6.lt) goto loc_821BC2B8;
loc_821BC330:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821bc380
	if (ctx.cr6.lt) goto loc_821BC380;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_821BC344:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821bc380
	if (ctx.cr6.lt) goto loc_821BC380;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r9,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bge 0x821bc344
	if (!ctx.cr0.lt) goto loc_821BC344;
	// b 0x821bc380
	goto loc_821BC380;
loc_821BC36C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x821bc380
	goto loc_821BC380;
loc_821BC374:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// b 0x821bc380
	goto loc_821BC380;
loc_821BC37C:
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
loc_821BC380:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x821bc28c
	if (ctx.cr6.lt) goto loc_821BC28C;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r20,68
	ctx.r11.s64 = ctx.r20.s64 + 68;
	// lhz r9,126(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
loc_821BC3B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821bc3d4
	if (ctx.cr6.eq) goto loc_821BC3D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821bc3b4
	if (ctx.cr6.lt) goto loc_821BC3B4;
	// b 0x821bc3e0
	goto loc_821BC3E0;
loc_821BC3D4:
	// addi r11,r10,17
	ctx.r11.s64 = ctx.r10.s64 + 17;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r20
	PPC_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r25.u32);
loc_821BC3E0:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r6,642
	ctx.r6.s64 = 42074112;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lfs f30,26572(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26572);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// ori r27,r6,21
	ctx.r27.u64 = ctx.r6.u64 | 21;
	// lis r24,-32032
	ctx.r24.s64 = -2099249152;
	// addi r26,r11,-2280
	ctx.r26.s64 = ctx.r11.s64 + -2280;
	// addi r29,r10,24548
	ctx.r29.s64 = ctx.r10.s64 + 24548;
	// addi r28,r9,26552
	ctx.r28.s64 = ctx.r9.s64 + 26552;
loc_821BC420:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,4996(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lfsx f12,r10,r23
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r10,r8,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r20.u32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f9,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// ble cr6,0x821bc494
	if (!ctx.cr6.gt) goto loc_821BC494;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// addi r11,r28,232
	ctx.r11.s64 = ctx.r28.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d4918
	ctx.lr = 0x821BC478;
	sub_822D4918(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821BC48C;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f1.f64);
	// ble cr6,0x821bc55c
	if (!ctx.cr6.gt) goto loc_821BC55C;
loc_821BC494:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lhz r7,126(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x821BC4B4;
	sub_821FE618(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821bc538
	if (!ctx.cr6.eq) goto loc_821BC538;
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bc538
	if (!ctx.cr6.eq) goto loc_821BC538;
	// lbz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bc538
	if (!ctx.cr6.eq) goto loc_821BC538;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lhz r7,126(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x821BC514;
	sub_821FE618(ctx, base);
	// lfs f10,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x821bc570
	if (ctx.cr6.lt) goto loc_821BC570;
	// lwz r11,-5976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5976);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc55c
	if (ctx.cr6.eq) goto loc_821BC55C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x821bc54c
	goto loc_821BC54C;
loc_821BC538:
	// lwz r11,-5976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5976);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc55c
	if (ctx.cr6.eq) goto loc_821BC55C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_821BC54C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f2d08
	ctx.lr = 0x821BC55C;
	sub_821F2D08(ctx, base);
loc_821BC55C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x821bc420
	if (ctx.cr6.lt) goto loc_821BC420;
	// b 0x821bc590
	goto loc_821BC590;
loc_821BC570:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lhz r8,126(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r11,17
	ctx.r7.s64 = ctx.r11.s64 + 17;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r20
	PPC_STORE_U32(ctx.r6.u32 + ctx.r20.u32, ctx.r8.u32);
loc_821BC590:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bne cr6,0x821bc5b0
	if (!ctx.cr6.eq) goto loc_821BC5B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_821BC5B0:
	// lwz r11,-5976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5976);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc634
	if (ctx.cr6.eq) goto loc_821BC634;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821bc634
	if (ctx.cr6.eq) goto loc_821BC634;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-2200
	ctx.r30.s64 = ctx.r11.s64 + -2200;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,7932(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f35e0
	ctx.lr = 0x821BC5F0;
	sub_821F35E0(ctx, base);
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,13712
	ctx.r3.s64 = ctx.r9.s64 + 13712;
	// lhz r4,126(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x821BC604;
	sub_822E84F0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,7036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe7d8
	ctx.lr = 0x821BC61C;
	sub_821FE7D8(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,-2264
	ctx.r5.s64 = ctx.r5.s64 + -2264;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f2d08
	ctx.lr = 0x821BC634;
	sub_821F2D08(ctx, base);
loc_821BC634:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BC1A8) {
	__imp__sub_821BC1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BC64C) {
	__imp__sub_821BC64C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f0,4916(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4916, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f13,4920(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4920, temp.u32);
	// addi r3,r3,4916
	ctx.r3.s64 = ctx.r3.s64 + 4916;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4924(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4924, temp.u32);
	// stw r9,4944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4944, ctx.r9.u32);
	// lfs f1,4992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4992);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,4936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4936, ctx.r10.u32);
	// stw r10,4940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4940, ctx.r10.u32);
	// b 0x821ad448
	sub_821AD448(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BC650) {
	__imp__sub_821BC650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BC68C) {
	__imp__sub_821BC68C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC690) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,3372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// addi r9,r11,2616
	ctx.r9.s64 = ctx.r11.s64 + 2616;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bc6d8
	if (!ctx.cr6.eq) goto loc_821BC6D8;
	// bl 0x821b4de8
	ctx.lr = 0x821BC6C0;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bc6d8
	if (ctx.cr6.eq) goto loc_821BC6D8;
	// lbz r11,3407(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3407);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821bc6dc
	if (ctx.cr6.eq) goto loc_821BC6DC;
loc_821BC6D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BC6DC:
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

PPC_WEAK_FUNC(sub_821BC690) {
	__imp__sub_821BC690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BC6F4) {
	__imp__sub_821BC6F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC6F8) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f12,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f11,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r6,24524
	ctx.r10.s64 = ctx.r6.s64 + 24524;
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,5880(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r3,232
	ctx.r31.s64 = ctx.r3.s64 + 232;
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_821BC76C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821bc76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC76C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,641
	ctx.r8.s64 = 42008576;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lhz r7,126(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// ori r8,r8,49169
	ctx.r8.u64 = ctx.r8.u64 | 49169;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,26116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26116);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fe618
	ctx.lr = 0x821BC7B8;
	sub_821FE618(ctx, base);
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r5,r5,-20920
	ctx.r5.s64 = ctx.r5.s64 + -20920;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// ori r7,r9,44628
	ctx.r7.u64 = ctx.r9.u64 | 44628;
	// fmadds f5,f6,f0,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmadds f1,f2,f0,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f1,4(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f9,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stwx r11,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821BC6F8) {
	__imp__sub_821BC6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BC83C) {
	__imp__sub_821BC83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BC848;
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r30,264(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lfs f30,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f30.f64 = double(temp.f32);
	// lfs f11,4996(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4996);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f11,f30
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc93c
	if (ctx.cr6.eq) goto loc_821BC93C;
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821bc900
	if (!ctx.cr6.gt) goto loc_821BC900;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// ori r7,r9,44628
	ctx.r7.u64 = ctx.r9.u64 | 44628;
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821bc8dc
	if (!ctx.cr6.lt) goto loc_821BC8DC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821bc6f8
	ctx.lr = 0x821BC8DC;
	sub_821BC6F8(ctx, base);
loc_821BC8DC:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// fadds f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// addi r11,r11,-20920
	ctx.r11.s64 = ctx.r11.s64 + -20920;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821BC900:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lhz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bc940
	if (ctx.cr6.eq) goto loc_821BC940;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24484);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BC93C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_821BC940:
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

PPC_WEAK_FUNC(sub_821BC840) {
	__imp__sub_821BC840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BC950) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,642
	ctx.r8.s64 = 42074112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r9,24548
	ctx.r6.s64 = ctx.r9.s64 + 24548;
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// lhz r7,126(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821fe618
	ctx.lr = 0x821BC994;
	sub_821FE618(ctx, base);
	// lbz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821bca64
	if (!ctx.cr6.eq) goto loc_821BCA64;
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
	// bne cr6,0x821bc9bc
	if (!ctx.cr6.eq) goto loc_821BC9BC;
loc_821BC9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bca68
	goto loc_821BCA68;
loc_821BC9BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82276090
	ctx.lr = 0x821BC9C4;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// bge cr6,0x821bca00
	if (!ctx.cr6.lt) goto loc_821BCA00;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bca00
	if (ctx.cr6.eq) goto loc_821BCA00;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44996
	ctx.r9.u64 = ctx.r10.u64 | 44996;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821bc9b4
	if (!ctx.cr6.eq) goto loc_821BC9B4;
loc_821BCA00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f13,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f3,f8,f0,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f2,f6,f0,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f1,f4,f0,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsubs f11,f1,f10
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x821bca68
	if (ctx.cr6.lt) goto loc_821BCA68;
loc_821BCA64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BCA68:
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

PPC_WEAK_FUNC(sub_821BC950) {
	__imp__sub_821BC950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821BCA88;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x821bc840
	ctx.lr = 0x821BCAAC;
	sub_821BC840(ctx, base);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r30,r31,4916
	ctx.r30.s64 = ctx.r31.s64 + 4916;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821aae88
	ctx.lr = 0x821BCAC4;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcc14
	if (ctx.cr6.eq) goto loc_821BCC14;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stb r27,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r27.u8);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// stb r27,5001(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5001, ctx.r27.u8);
	// bl 0x821aafb0
	ctx.lr = 0x821BCAF0;
	sub_821AAFB0(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc1a8
	ctx.lr = 0x821BCB04;
	sub_821BC1A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcc2c
	if (ctx.cr6.eq) goto loc_821BCC2C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821bcbdc
	if (ctx.cr6.eq) goto loc_821BCBDC;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821BCB40;
	sub_822D4AC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f7,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f4,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821BCB6C;
	sub_822D4AC8(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,25188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25188);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x821bcc24
	if (!ctx.cr6.gt) goto loc_821BCC24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x821bc690
	ctx.lr = 0x821BCBA0;
	sub_821BC690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcbdc
	if (!ctx.cr6.eq) goto loc_821BCBDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821ab0a8
	ctx.lr = 0x821BCBBC;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcbdc
	if (!ctx.cr6.eq) goto loc_821BCBDC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc950
	ctx.lr = 0x821BCBD8;
	sub_821BC950(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821BCBDC:
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r11,4944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4944, ctx.r11.u32);
	// stw r26,4936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4936, ctx.r26.u32);
	// lfs f1,4992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4992);
	ctx.f1.f64 = double(temp.f32);
	// stw r26,4940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4940, ctx.r26.u32);
	// bl 0x821ad448
	ctx.lr = 0x821BCC10;
	sub_821AD448(ctx, base);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_821BCC14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821BCC24:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x821bcbdc
	goto loc_821BCBDC;
loc_821BCC2C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821bcc14
	if (ctx.cr6.eq) goto loc_821BCC14;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc950
	ctx.lr = 0x821BCC44;
	sub_821BC950(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BCA80) {
	__imp__sub_821BCA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821BCC58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,26124
	ctx.r10.s64 = ctx.r11.s64 + 26124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r10,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r10.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x821a9ec0
	ctx.lr = 0x821BCC80;
	sub_821A9EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821BCC88;
	sub_821AA3D0(ctx, base);
	// lis r9,-32018
	ctx.r9.s64 = -2098331648;
	// lwz r8,3372(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3372);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r9,6688
	ctx.r11.s64 = ctx.r9.s64 + 6688;
	// addi r7,r11,2616
	ctx.r7.s64 = ctx.r11.s64 + 2616;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821bccc4
	if (!ctx.cr6.eq) goto loc_821BCCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4de8
	ctx.lr = 0x821BCCAC;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bccc4
	if (ctx.cr6.eq) goto loc_821BCCC4;
	// lbz r11,3407(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3407);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821bccc8
	if (ctx.cr6.eq) goto loc_821BCCC8;
loc_821BCCC4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821BCCC8:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821bccfc
	if (!ctx.cr6.eq) goto loc_821BCCFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821b8628
	ctx.lr = 0x821BCCE0;
	sub_821B8628(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcd20
	if (ctx.cr6.eq) goto loc_821BCD20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bca80
	ctx.lr = 0x821BCCF8;
	sub_821BCA80(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821BCCFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcd20
	if (ctx.cr6.eq) goto loc_821BCD20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae88
	ctx.lr = 0x821BCD14;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcd28
	if (!ctx.cr6.eq) goto loc_821BCD28;
loc_821BCD20:
	// stb r26,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r26.u8);
	// stb r26,5001(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5001, ctx.r26.u8);
loc_821BCD28:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcd3c
	if (!ctx.cr6.eq) goto loc_821BCD3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0160
	ctx.lr = 0x821BCD3C;
	sub_821B0160(ctx, base);
loc_821BCD3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BCD44;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcd74
	if (ctx.cr6.eq) goto loc_821BCD74;
	// addi r4,r31,4616
	ctx.r4.s64 = ctx.r31.s64 + 4616;
	// addi r3,r31,4916
	ctx.r3.s64 = ctx.r31.s64 + 4916;
	// bl 0x822d4918
	ctx.lr = 0x821BCD5C;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,26120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821bcd74
	if (!ctx.cr6.gt) goto loc_821BCD74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BCD74;
	sub_821ABA40(ctx, base);
loc_821BCD74:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcdac
	if (ctx.cr6.eq) goto loc_821BCDAC;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcdac
	if (!ctx.cr6.eq) goto loc_821BCDAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BCD90;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcdb4
	if (!ctx.cr6.eq) goto loc_821BCDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc0a8
	ctx.lr = 0x821BCDA4;
	sub_821BC0A8(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x821bcdb4
	goto loc_821BCDB4;
loc_821BCDAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1a00
	ctx.lr = 0x821BCDB4;
	sub_821B1A00(ctx, base);
loc_821BCDB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BCDBC;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bce0c
	if (!ctx.cr6.eq) goto loc_821BCE0C;
	// lbz r11,5001(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5001);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcde4
	if (ctx.cr6.eq) goto loc_821BCDE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0160
	ctx.lr = 0x821BCDDC;
	sub_821B0160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1a00
	ctx.lr = 0x821BCDE4;
	sub_821B1A00(ctx, base);
loc_821BCDE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bce0c
	if (ctx.cr6.eq) goto loc_821BCE0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BCDF4;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bce0c
	if (!ctx.cr6.eq) goto loc_821BCE0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc0a8
	ctx.lr = 0x821BCE08;
	sub_821BC0A8(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_821BCE0C:
	// stb r29,4784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4784, ctx.r29.u8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821bcea0
	if (!ctx.cr6.eq) goto loc_821BCEA0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821bcea0
	if (!ctx.cr6.eq) goto loc_821BCEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BCE28;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bce68
	if (ctx.cr6.eq) goto loc_821BCE68;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BCE40;
	sub_821CFAE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821BCE54;
	sub_821DD828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821BCE5C;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821BCE68:
	// stb r26,5001(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5001, ctx.r26.u8);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-500
	ctx.r9.s64 = ctx.r11.s64 + -500;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// bl 0x821b5080
	ctx.lr = 0x821BCE8C;
	sub_821B5080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821BCE94;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821BCEA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc020
	ctx.lr = 0x821BCEA8;
	sub_821BC020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821BCEB0;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BCC50) {
	__imp__sub_821BCC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BCEBC) {
	__imp__sub_821BCEBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,34
	ctx.r10.s64 = 34;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r9,1024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1024, ctx.r9.u32);
loc_821BCEE4:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCEE4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BCEC0) {
	__imp__sub_821BCEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BCEF4) {
	__imp__sub_821BCEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// stw r3,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BCEF8) {
	__imp__sub_821BCEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BCF04) {
	__imp__sub_821BCF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BCF08) {
	__imp__sub_821BCF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BCF14) {
	__imp__sub_821BCF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCF18) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,7504
	ctx.r8.s64 = ctx.r11.s64 + 7504;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821BCF34:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bcf50
	if (ctx.cr6.eq) goto loc_821BCF50;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821bcf94
	if (ctx.cr6.eq) goto loc_821BCF94;
loc_821BCF50:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r8,100
	ctx.r10.s64 = ctx.r8.s64 + 100;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bcf34
	if (ctx.cr6.lt) goto loc_821BCF34;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x822a13a0
	ctx.lr = 0x821BCF6C;
	sub_822A13A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26132
	ctx.r3.s64 = ctx.r11.s64 + 26132;
	// bl 0x822e84f0
	ctx.lr = 0x821BCF7C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821BCF80;
	sub_822AD350(ctx, base);
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
loc_821BCF94:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BCF18) {
	__imp__sub_821BCF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BCFA8) {
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
	// bl 0x821bcf18
	ctx.lr = 0x821BCFC4;
	sub_821BCF18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bd0b0
	if (ctx.cr6.eq) goto loc_821BD0B0;
	// lis r6,-32053
	ctx.r6.s64 = -2100625408;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,1032
	ctx.r7.s64 = ctx.r11.s64 + 1032;
	// lwz r11,1024(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821bd008
	if (!ctx.cr6.gt) goto loc_821BD008;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_821BCFEC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821bd038
	if (ctx.cr6.eq) goto loc_821BD038;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821bcfec
	if (ctx.cr6.lt) goto loc_821BCFEC;
loc_821BD008:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// blt cr6,0x821bd078
	if (ctx.cr6.lt) goto loc_821BD078;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// bl 0x822e84f0
	ctx.lr = 0x821BD020;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821BD024;
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
loc_821BD038:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
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
loc_821BD078:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r31,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r31.u32);
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// stw r11,1024(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1024, ctx.r11.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
loc_821BD0B0:
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

PPC_WEAK_FUNC(sub_821BCFA8) {
	__imp__sub_821BCFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD0C4) {
	__imp__sub_821BD0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r11,1032
	ctx.r10.s64 = ctx.r11.s64 + 1032;
	// lwz r11,1024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1024, ctx.r11.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821bd110
	if (!ctx.cr6.lt) goto loc_821BD110;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stwx r3,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u32);
loc_821BD110:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r8,2047
	ctx.r8.s64 = 2047;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD0C8) {
	__imp__sub_821BD0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD12C) {
	__imp__sub_821BD12C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD130) {
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
	// bl 0x821bcf18
	ctx.lr = 0x821BD14C;
	sub_821BCF18(ctx, base);
	// lis r5,-32053
	ctx.r5.s64 = -2100625408;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,1024(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x821bd218
	if (!ctx.cr6.gt) goto loc_821BD218;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r8,r10,1032
	ctx.r8.s64 = ctx.r10.s64 + 1032;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_821BD16C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821bd19c
	if (ctx.cr6.eq) goto loc_821BD19C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821bd16c
	if (ctx.cr6.lt) goto loc_821BD16C;
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
loc_821BD19C:
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r4,r3,27
	ctx.r4.u64 = ctx.r3.u32 & 0x1F;
	// li r3,1
	ctx.r3.s64 = 1;
	// slw r4,r3,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// andc r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd218
	if (!ctx.cr6.eq) goto loc_821BD218;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// stw r9,1024(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1024, ctx.r9.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821bd200
	if (!ctx.cr6.lt) goto loc_821BD200;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stwx r4,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_821BD200:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_821BD218:
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

PPC_WEAK_FUNC(sub_821BD130) {
	__imp__sub_821BD130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD22C) {
	__imp__sub_821BD22C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-32053
	ctx.r7.s64 = -2100625408;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,1024(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1024);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r8,r10,1032
	ctx.r8.s64 = ctx.r10.s64 + 1032;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_821BD250:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821bd270
	if (ctx.cr6.eq) goto loc_821BD270;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821bd250
	if (ctx.cr6.lt) goto loc_821BD250;
	// blr 
	return;
loc_821BD270:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,1024(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1024, ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821bd2a4
	if (!ctx.cr6.lt) goto loc_821BD2A4;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r4,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwzx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stwx r3,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u32);
loc_821BD2A4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD230) {
	__imp__sub_821BD230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD2C0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r31,1024(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x821bd364
	if (!ctx.cr6.lt) goto loc_821BD364;
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,1032
	ctx.r11.s64 = ctx.r9.s64 + 1032;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r4,r4,27
	ctx.r4.u64 = ctx.r4.u32 & 0x1F;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// slw r6,r7,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// addi r8,r9,26552
	ctx.r8.s64 = ctx.r9.s64 + 26552;
loc_821BD314:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bd350
	if (ctx.cr6.eq) goto loc_821BD350;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r8,272
	ctx.r4.s64 = ctx.r8.s64 + 272;
	// mulli r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 * 624;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bd368
	if (ctx.cr6.eq) goto loc_821BD368;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// slw r4,r7,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821bd368
	if (!ctx.cr6.eq) goto loc_821BD368;
loc_821BD350:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821bd314
	if (ctx.cr6.lt) goto loc_821BD314;
loc_821BD364:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821BD368:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD2C0) {
	__imp__sub_821BD2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,1032
	ctx.r9.s64 = ctx.r11.s64 + 1032;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mulli r10,r7,624
	ctx.r10.s64 = ctx.r7.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD370) {
	__imp__sub_821BD370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD394) {
	__imp__sub_821BD394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BD3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd40c
	if (ctx.cr6.eq) goto loc_821BD40C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822ad078
	ctx.lr = 0x821BD3C4;
	sub_822AD078(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd3d8
	if (ctx.cr6.eq) goto loc_821BD3D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x821BD3D4;
	sub_82229B60(ctx, base);
	// b 0x821bd3dc
	goto loc_821BD3DC;
loc_821BD3D8:
	// bl 0x822acd78
	ctx.lr = 0x821BD3DC;
	sub_822ACD78(ctx, base);
loc_821BD3DC:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7504
	ctx.r9.s64 = ctx.r11.s64 + 7504;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x821BD3F4;
	sub_822ACFF0(ctx, base);
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r7,-25976
	ctx.r6.s64 = ctx.r7.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,472(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 472);
	// bl 0x82229da8
	ctx.lr = 0x821BD40C;
	sub_82229DA8(ctx, base);
loc_821BD40C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD398) {
	__imp__sub_821BD398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD414) {
	__imp__sub_821BD414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD418) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821bd2c0
	sub_821BD2C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD418) {
	__imp__sub_821BD418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,26416
	ctx.r11.s64 = ctx.r10.s64 + 26416;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD428) {
	__imp__sub_821BD428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD454) {
	__imp__sub_821BD454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,26416
	ctx.r11.s64 = ctx.r10.s64 + 26416;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD458) {
	__imp__sub_821BD458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD484) {
	__imp__sub_821BD484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x821bd4b0
	if (ctx.cr6.eq) goto loc_821BD4B0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x821bd4a8
	if (ctx.cr6.eq) goto loc_821BD4A8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,3208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bd4b4
	goto loc_821BD4B4;
loc_821BD4A8:
	// lfs f0,3204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3204);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bd4b4
	goto loc_821BD4B4;
loc_821BD4B0:
	// lfs f0,3200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3200);
	ctx.f0.f64 = double(temp.f32);
loc_821BD4B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821bd4c8
	if (!ctx.cr6.eq) goto loc_821BD4C8;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_821BD4C8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD488) {
	__imp__sub_821BD488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD4D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,26416
	ctx.r8.s64 = ctx.r10.s64 + 26416;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BD4D0) {
	__imp__sub_821BD4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD4EC) {
	__imp__sub_821BD4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821BD4F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,26416
	ctx.r31.s64 = ctx.r11.s64 + 26416;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BD510:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bd52c
	if (ctx.cr6.eq) goto loc_821BD52C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x821BD524;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bd54c
	if (ctx.cr6.eq) goto loc_821BD54C;
loc_821BD52C:
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r30,600
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 600, ctx.xer);
	// blt cr6,0x821bd510
	if (ctx.cr6.lt) goto loc_821BD510;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821BD54C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD4F0) {
	__imp__sub_821BD4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r6,r11,19
	ctx.r6.s64 = ctx.r11.s64 + 19;
	// mulli r5,r6,44
	ctx.r5.s64 = ctx.r6.s64 * 44;
	// stwx r10,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x821dee70
	sub_821DEE70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD558) {
	__imp__sub_821BD558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD584) {
	__imp__sub_821BD584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD588) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd5c0
	if (ctx.cr6.eq) goto loc_821BD5C0;
	// lbz r11,3172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd5c0
	if (ctx.cr6.eq) goto loc_821BD5C0;
	// bl 0x821aa3a0
	ctx.lr = 0x821BD5B4;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821bd5c4
	if (!ctx.cr6.eq) goto loc_821BD5C4;
loc_821BD5C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BD5C4:
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

PPC_WEAK_FUNC(sub_821BD588) {
	__imp__sub_821BD588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD5DC) {
	__imp__sub_821BD5DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD5E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821d9558
	sub_821D9558(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD5E0) {
	__imp__sub_821BD5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD5E4) {
	__imp__sub_821BD5E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lhz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 56);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// lwz r4,268(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -624);
	// beq cr6,0x821bd630
	if (ctx.cr6.eq) goto loc_821BD630;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r5,r7,r9
	ctx.r5.s32 = ctx.r7.s32 / ctx.r9.s32;
	// b 0x821ad4d8
	sub_821AD4D8(ctx, base);
	return;
loc_821BD630:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x821d9558
	sub_821D9558(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD5E8) {
	__imp__sub_821BD5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD638) {
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
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd684
	if (ctx.cr6.eq) goto loc_821BD684;
	// bl 0x8222fd60
	ctx.lr = 0x821BD65C;
	sub_8222FD60(ctx, base);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mulli r10,r6,50
	ctx.r10.s64 = ctx.r6.s64 * 50;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r5.u32);
loc_821BD684:
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

PPC_WEAK_FUNC(sub_821BD638) {
	__imp__sub_821BD638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BD6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,724(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// beq cr6,0x821bd6e4
	if (ctx.cr6.eq) goto loc_821BD6E4;
	// bl 0x8222fd60
	ctx.lr = 0x821BD6C4;
	sub_8222FD60(ctx, base);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mulli r10,r7,50
	ctx.r10.s64 = ctx.r7.s64 * 50;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r6.u32);
loc_821BD6E4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,112
	ctx.r9.s64 = 112;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r11,r8,r9
	ctx.r11.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r7,r11,19
	ctx.r7.s64 = ctx.r11.s64 + 19;
	// mulli r6,r7,44
	ctx.r6.s64 = ctx.r7.s64 * 44;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x821dee70
	ctx.lr = 0x821BD70C;
	sub_821DEE70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9558
	ctx.lr = 0x821BD718;
	sub_821D9558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD698) {
	__imp__sub_821BD698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD720) {
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
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd774
	if (ctx.cr6.eq) goto loc_821BD774;
	// bl 0x8222fd60
	ctx.lr = 0x821BD74C;
	sub_8222FD60(ctx, base);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mulli r10,r6,50
	ctx.r10.s64 = ctx.r6.s64 * 50;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r5.u32);
loc_821BD774:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9558
	ctx.lr = 0x821BD780;
	sub_821D9558(ctx, base);
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

PPC_WEAK_FUNC(sub_821BD720) {
	__imp__sub_821BD720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BD7A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3175);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bd880
	if (!ctx.cr6.eq) goto loc_821BD880;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bd878
	if (ctx.cr6.eq) goto loc_821BD878;
	// lwz r4,272(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bd878
	if (ctx.cr6.eq) goto loc_821BD878;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821bd878
	if (ctx.cr6.eq) goto loc_821BD878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f0,20420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821bd870
	if (!ctx.cr6.lt) goto loc_821BD870;
	// bl 0x821d9558
	ctx.lr = 0x821BD86C;
	sub_821D9558(ctx, base);
	// b 0x821bd878
	goto loc_821BD878;
loc_821BD870:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821d8370
	ctx.lr = 0x821BD878;
	sub_821D8370(ctx, base);
loc_821BD878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dee70
	ctx.lr = 0x821BD880;
	sub_821DEE70(ctx, base);
loc_821BD880:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd894
	if (ctx.cr6.eq) goto loc_821BD894;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x821BD890;
	sub_82229B60(ctx, base);
	// b 0x821bd898
	goto loc_821BD898;
loc_821BD894:
	// bl 0x822acd78
	ctx.lr = 0x821BD898;
	sub_822ACD78(ctx, base);
loc_821BD898:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ad078
	ctx.lr = 0x821BD8A0;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,70(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 70);
	// bl 0x82229da8
	ctx.lr = 0x821BD8B8;
	sub_82229DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD798) {
	__imp__sub_821BD798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD8C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821c5208
	sub_821C5208(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD8C0) {
	__imp__sub_821BD8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD8C4) {
	__imp__sub_821BD8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD8C8) {
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
	// bl 0x821dee70
	ctx.lr = 0x821BD8E8;
	sub_821DEE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ddd10
	ctx.lr = 0x821BD8F4;
	sub_821DDD10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bd908
	if (ctx.cr6.eq) goto loc_821BD908;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9558
	ctx.lr = 0x821BD908;
	sub_821D9558(ctx, base);
loc_821BD908:
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

PPC_WEAK_FUNC(sub_821BD8C8) {
	__imp__sub_821BD8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BD928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821dee70
	ctx.lr = 0x821BD938;
	sub_821DEE70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,268(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821BD948;
	sub_821AA3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd998
	if (ctx.cr6.eq) goto loc_821BD998;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ddd10
	ctx.lr = 0x821BD960;
	sub_821DDD10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bd998
	if (ctx.cr6.eq) goto loc_821BD998;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r5,r8,r10
	ctx.r5.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x821ad4d8
	ctx.lr = 0x821BD98C;
	sub_821AD4D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BD998:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD920) {
	__imp__sub_821BD920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BD9A4) {
	__imp__sub_821BD9A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BD9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821BD9B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x821dee70
	ctx.lr = 0x821BD9D0;
	sub_821DEE70(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bda38
	if (ctx.cr6.eq) goto loc_821BDA38;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r7,r10,9624
	ctx.r7.s64 = ctx.r10.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r11,19
	ctx.r5.s64 = ctx.r11.s64 + 19;
	// mulli r4,r5,44
	ctx.r4.s64 = ctx.r5.s64 * 44;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// bl 0x821dee70
	ctx.lr = 0x821BDA0C;
	sub_821DEE70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821d9558
	ctx.lr = 0x821BDA18;
	sub_821D9558(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821bda38
	if (!ctx.cr6.eq) goto loc_821BDA38;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db2f8
	ctx.lr = 0x821BDA38;
	sub_821DB2F8(ctx, base);
loc_821BDA38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BD9A8) {
	__imp__sub_821BD9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDA40) {
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
	// lwz r10,272(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bda74
	if (!ctx.cr6.eq) goto loc_821BDA74;
loc_821BDA60:
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
loc_821BDA74:
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bda60
	if (ctx.cr6.eq) goto loc_821BDA60;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdab0
	if (ctx.cr6.eq) goto loc_821BDAB0;
	// lbz r11,351(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 351);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdab0
	if (ctx.cr6.eq) goto loc_821BDAB0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x821d87d8
	ctx.lr = 0x821BDAA0;
	sub_821D87D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdab4
	if (ctx.cr6.eq) goto loc_821BDAB4;
loc_821BDAB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821BDAB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BDA40) {
	__imp__sub_821BDA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BDAC4) {
	__imp__sub_821BDAC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDAC8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x821bdca4
	if (ctx.cr6.gt) goto loc_821BDCA4;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9456
	ctx.r12.s64 = ctx.r12.s64 + -9456;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821BDB40;
	case 1:
		goto loc_821BDB40;
	case 2:
		goto loc_821BDB40;
	case 3:
		goto loc_821BDBCC;
	case 4:
		goto loc_821BDBDC;
	case 5:
		goto loc_821BDC0C;
	case 6:
		goto loc_821BDC3C;
	case 7:
		goto loc_821BDC78;
	case 8:
		goto loc_821BDC4C;
	case 9:
		goto loc_821BDC88;
	case 10:
		goto loc_821BDC98;
	case 11:
		goto loc_821BDC88;
	default:
		return;
	}
	// lwz r16,-9408(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9408);
	// lwz r16,-9408(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9408);
	// lwz r16,-9408(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9408);
	// lwz r16,-9268(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9268);
	// lwz r16,-9252(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9252);
	// lwz r16,-9204(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9204);
	// lwz r16,-9156(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9156);
	// lwz r16,-9096(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9096);
	// lwz r16,-9140(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9140);
	// lwz r16,-9080(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9080);
	// lwz r16,-9064(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9064);
	// lwz r16,-9080(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9080);
loc_821BDB40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821ddd10
	ctx.lr = 0x821BDB4C;
	sub_821DDD10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bdca4
	if (ctx.cr6.eq) goto loc_821BDCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0108
	ctx.lr = 0x821BDB5C;
	sub_821E0108(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdbbc
	if (ctx.cr6.eq) goto loc_821BDBBC;
	// lwz r3,3356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// bl 0x82243470
	ctx.lr = 0x821BDB70;
	sub_82243470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdbbc
	if (ctx.cr6.eq) goto loc_821BDBBC;
	// lwz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bdbbc
	if (ctx.cr6.eq) goto loc_821BDBBC;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r7,r11,9624
	ctx.r7.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = ctx.r6.s32 / ctx.r8.s32;
	// mulli r11,r5,44
	ctx.r11.s64 = ctx.r5.s64 * 44;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,840(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 840);
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,3000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3000, ctx.xer);
	// bge cr6,0x821bdca4
	if (!ctx.cr6.lt) goto loc_821BDCA4;
loc_821BDBBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821d9558
	ctx.lr = 0x821BDBC8;
	sub_821D9558(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDBCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821bd5e8
	ctx.lr = 0x821BDBD8;
	sub_821BD5E8(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDBDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bda40
	ctx.lr = 0x821BDBE8;
	sub_821BDA40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdca4
	if (ctx.cr6.eq) goto loc_821BDCA4;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,272(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// bl 0x821bd698
	ctx.lr = 0x821BDC08;
	sub_821BD698(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDC0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bda40
	ctx.lr = 0x821BDC18;
	sub_821BDA40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdca4
	if (ctx.cr6.eq) goto loc_821BDCA4;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,272(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// bl 0x821bd720
	ctx.lr = 0x821BDC38;
	sub_821BD720(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDC3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd798
	ctx.lr = 0x821BDC48;
	sub_821BD798(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDC4C:
	// lhz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdc78
	if (ctx.cr6.eq) goto loc_821BDC78;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r8,26552
	ctx.r10.s64 = ctx.r8.s64 + 26552;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821bdca4
	if (ctx.cr6.eq) goto loc_821BDCA4;
loc_821BDC78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5208
	ctx.lr = 0x821BDC84;
	sub_821C5208(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821bd8c8
	ctx.lr = 0x821BDC94;
	sub_821BD8C8(ctx, base);
	// b 0x821bdca4
	goto loc_821BDCA4;
loc_821BDC98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821bd920
	ctx.lr = 0x821BDCA4;
	sub_821BD920(ctx, base);
loc_821BDCA4:
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

PPC_WEAK_FUNC(sub_821BDAC8) {
	__imp__sub_821BDAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BDCBC) {
	__imp__sub_821BDCBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821BDCC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// beq cr6,0x821bdd50
	if (ctx.cr6.eq) goto loc_821BDD50;
	// cmpwi cr6,r5,17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 17, ctx.xer);
	// bne cr6,0x821bddb8
	if (!ctx.cr6.eq) goto loc_821BDDB8;
	// lbz r11,3175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3175);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bddb8
	if (!ctx.cr6.eq) goto loc_821BDDB8;
	// bl 0x821dee70
	ctx.lr = 0x821BDD00;
	sub_821DEE70(ctx, base);
	// lwz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bddb8
	if (ctx.cr6.eq) goto loc_821BDDB8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r7,r11,9624
	ctx.r7.s64 = ctx.r11.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r11,19
	ctx.r5.s64 = ctx.r11.s64 + 19;
	// mulli r4,r5,44
	ctx.r4.s64 = ctx.r5.s64 * 44;
	// stwx r10,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x821dee70
	ctx.lr = 0x821BDD3C;
	sub_821DEE70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821d9558
	ctx.lr = 0x821BDD48;
	sub_821D9558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821BDD50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dee70
	ctx.lr = 0x821BDD58;
	sub_821DEE70(ctx, base);
	// lwz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bddb8
	if (ctx.cr6.eq) goto loc_821BDDB8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r7,r11,9624
	ctx.r7.s64 = ctx.r11.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r11,19
	ctx.r5.s64 = ctx.r11.s64 + 19;
	// mulli r4,r5,44
	ctx.r4.s64 = ctx.r5.s64 * 44;
	// stwx r10,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x821dee70
	ctx.lr = 0x821BDD94;
	sub_821DEE70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x821d9558
	ctx.lr = 0x821BDDA0;
	sub_821D9558(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db2f8
	ctx.lr = 0x821BDDB8;
	sub_821DB2F8(ctx, base);
loc_821BDDB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BDCC0) {
	__imp__sub_821BDCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDDC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x821b6be8
	sub_821B6BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BDDC0) {
	__imp__sub_821BDDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDDCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BDDCC) {
	__imp__sub_821BDDCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDDD0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x821b6be8
	sub_821B6BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BDDD0) {
	__imp__sub_821BDDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDDDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BDDDC) {
	__imp__sub_821BDDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BDDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821BDDE8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x821BDDF0;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r26,r11,26416
	ctx.r26.s64 = ctx.r11.s64 + 26416;
	// rlwinm r25,r10,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// addi r8,r26,8
	ctx.r8.s64 = ctx.r26.s64 + 8;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r7,r25,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwzx r6,r25,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f0,f0
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f28,f13,f13
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// bl 0x821a9b38
	ctx.lr = 0x821BDE48;
	sub_821A9B38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x821bdf64
	if (ctx.cr6.eq) goto loc_821BDF64;
loc_821BDE5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821bde7c
	if (!ctx.cr6.eq) goto loc_821BDE7C;
	// addi r10,r26,20
	ctx.r10.s64 = ctx.r26.s64 + 20;
	// lwzx r9,r25,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bde80
	if (ctx.cr6.eq) goto loc_821BDE80;
loc_821BDE7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BDE80:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bdf4c
	if (!ctx.cr6.eq) goto loc_821BDF4C;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,3172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3172);
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821bdedc
	if (ctx.cr6.eq) goto loc_821BDEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BDED0;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821bdee0
	if (!ctx.cr6.eq) goto loc_821BDEE0;
loc_821BDEDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BDEE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdef4
	if (ctx.cr6.eq) goto loc_821BDEF4;
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x821bdef8
	goto loc_821BDEF8;
loc_821BDEF4:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
loc_821BDEF8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x821bdf20
	if (ctx.cr6.eq) goto loc_821BDF20;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x821bdf18
	if (ctx.cr6.eq) goto loc_821BDF18;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x821bdf2c
	if (!ctx.cr6.eq) goto loc_821BDF2C;
	// lfs f0,3208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bdf24
	goto loc_821BDF24;
loc_821BDF18:
	// lfs f0,3204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bdf24
	goto loc_821BDF24;
loc_821BDF20:
	// lfs f0,3200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3200);
	ctx.f0.f64 = double(temp.f32);
loc_821BDF24:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821bdf30
	if (!ctx.cr6.eq) goto loc_821BDF30;
loc_821BDF2C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_821BDF30:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821bdf4c
	if (ctx.cr6.gt) goto loc_821BDF4C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdac8
	ctx.lr = 0x821BDF4C;
	sub_821BDAC8(ctx, base);
loc_821BDF4C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821BDF58;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bde5c
	if (!ctx.cr6.eq) goto loc_821BDE5C;
loc_821BDF64:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd418
	ctx.lr = 0x821BDF70;
	sub_821BD418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821be0c4
	if (ctx.cr6.lt) goto loc_821BE0C4;
loc_821BDF7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd370
	ctx.lr = 0x821BDF84;
	sub_821BD370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821bdfa4
	if (!ctx.cr6.eq) goto loc_821BDFA4;
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// lwzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bdfa8
	if (ctx.cr6.eq) goto loc_821BDFA8;
loc_821BDFA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BDFA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be0a8
	if (!ctx.cr6.eq) goto loc_821BE0A8;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821be088
	if (ctx.cr6.eq) goto loc_821BE088;
	// lbz r11,3172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be00c
	if (ctx.cr6.eq) goto loc_821BE00C;
	// bl 0x821aa3a0
	ctx.lr = 0x821BE000;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821be010
	if (!ctx.cr6.eq) goto loc_821BE010;
loc_821BE00C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BE010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be024
	if (ctx.cr6.eq) goto loc_821BE024;
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x821be028
	goto loc_821BE028;
loc_821BE024:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
loc_821BE028:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x821be074
	if (ctx.cr6.eq) goto loc_821BE074;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x821be060
	if (ctx.cr6.eq) goto loc_821BE060;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x821be04c
	if (ctx.cr6.eq) goto loc_821BE04C;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821be08c
	goto loc_821BE08C;
loc_821BE04C:
	// lfs f0,3208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821be08c
	if (!ctx.cr6.eq) goto loc_821BE08C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821be08c
	goto loc_821BE08C;
loc_821BE060:
	// lfs f0,3204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821be08c
	if (!ctx.cr6.eq) goto loc_821BE08C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821be08c
	goto loc_821BE08C;
loc_821BE074:
	// lfs f0,3200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821be08c
	if (!ctx.cr6.eq) goto loc_821BE08C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821be08c
	goto loc_821BE08C;
loc_821BE088:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_821BE08C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821be0a8
	if (ctx.cr6.gt) goto loc_821BE0A8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd398
	ctx.lr = 0x821BE0A8;
	sub_821BD398(ctx, base);
loc_821BE0A8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd2c0
	ctx.lr = 0x821BE0B8;
	sub_821BD2C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821bdf7c
	if (!ctx.cr6.lt) goto loc_821BDF7C;
loc_821BE0C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x821BE0D0;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BDDE0) {
	__imp__sub_821BDDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BE0D4) {
	__imp__sub_821BE0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821BE0E0;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821be154
	if (!ctx.cr6.eq) goto loc_821BE154;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be3a8
	if (ctx.cr6.eq) goto loc_821BE3A8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r26,r8,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821be3a8
	if (ctx.cr6.eq) goto loc_821BE3A8;
loc_821BE154:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r25,r11,26416
	ctx.r25.s64 = ctx.r11.s64 + 26416;
	// rlwinm r24,r10,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r25,16
	ctx.r9.s64 = ctx.r25.s64 + 16;
	// lwzx r8,r24,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821be1a0
	if (ctx.cr6.eq) goto loc_821BE1A0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bdde0
	ctx.lr = 0x821BE18C;
	sub_821BDDE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_821BE1A0:
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwzx r8,r24,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f0
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f29,f13,f13
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// bl 0x821a9b38
	ctx.lr = 0x821BE1D0;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be2ac
	if (ctx.cr6.eq) goto loc_821BE2AC;
loc_821BE1DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821be1fc
	if (!ctx.cr6.eq) goto loc_821BE1FC;
	// addi r10,r25,20
	ctx.r10.s64 = ctx.r25.s64 + 20;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821be200
	if (ctx.cr6.eq) goto loc_821BE200;
loc_821BE1FC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_821BE200:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821be294
	if (!ctx.cr6.eq) goto loc_821BE294;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,3172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3172);
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821be25c
	if (ctx.cr6.eq) goto loc_821BE25C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BE250;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821be260
	if (!ctx.cr6.eq) goto loc_821BE260;
loc_821BE25C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821BE260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be274
	if (ctx.cr6.eq) goto loc_821BE274;
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x821be278
	goto loc_821BE278;
loc_821BE274:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821BE278:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821be294
	if (ctx.cr6.gt) goto loc_821BE294;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdac8
	ctx.lr = 0x821BE294;
	sub_821BDAC8(ctx, base);
loc_821BE294:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821BE2A0;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821be1dc
	if (!ctx.cr6.eq) goto loc_821BE1DC;
loc_821BE2AC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821bd418
	ctx.lr = 0x821BE2B8;
	sub_821BD418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821be3a8
	if (ctx.cr6.lt) goto loc_821BE3A8;
loc_821BE2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd370
	ctx.lr = 0x821BE2CC;
	sub_821BD370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821be2ec
	if (!ctx.cr6.eq) goto loc_821BE2EC;
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// lwzx r10,r24,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821be2f0
	if (ctx.cr6.eq) goto loc_821BE2F0;
loc_821BE2EC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821BE2F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be38c
	if (!ctx.cr6.eq) goto loc_821BE38C;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821be354
	if (ctx.cr6.eq) goto loc_821BE354;
	// lbz r11,3172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be354
	if (ctx.cr6.eq) goto loc_821BE354;
	// bl 0x821aa3a0
	ctx.lr = 0x821BE348;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821be358
	if (!ctx.cr6.eq) goto loc_821BE358;
loc_821BE354:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821BE358:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be36c
	if (ctx.cr6.eq) goto loc_821BE36C;
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x821be370
	goto loc_821BE370;
loc_821BE36C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821BE370:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821be38c
	if (ctx.cr6.gt) goto loc_821BE38C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd398
	ctx.lr = 0x821BE38C;
	sub_821BD398(ctx, base);
loc_821BE38C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd2c0
	ctx.lr = 0x821BE39C;
	sub_821BD2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821be2c4
	if (!ctx.cr6.lt) goto loc_821BE2C4;
loc_821BE3A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_821BE0D8) {
	__imp__sub_821BE0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BE3BC) {
	__imp__sub_821BE3BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821BE3C8;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de010
	ctx.lr = 0x821BE3D0;
	__savefpr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821be43c
	if (!ctx.cr6.eq) goto loc_821BE43C;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be7b0
	if (ctx.cr6.eq) goto loc_821BE7B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lwzx r23,r8,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821be7b0
	if (ctx.cr6.eq) goto loc_821BE7B0;
loc_821BE43C:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r11,26416
	ctx.r25.s64 = ctx.r11.s64 + 26416;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lfs f10,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r24,r11,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r25,8
	ctx.r9.s64 = ctx.r25.s64 + 8;
	// fsubs f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// addi r8,r25,12
	ctx.r8.s64 = ctx.r25.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwzx r7,r24,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// fmuls f8,f31,f31
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lwzx r6,r24,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// lfsx f24,r24,r8
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r8.u32);
	ctx.f24.f64 = double(temp.f32);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f30,f30,f8
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f8.f64));
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f23,f7,f7
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f22,f5,f5
	ctx.f22.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f26,f29,f29,f6
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f6.f64));
	// bl 0x821a9b38
	ctx.lr = 0x821BE4B8;
	sub_821A9B38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f25,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// beq cr6,0x821be624
	if (ctx.cr6.eq) goto loc_821BE624;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,24524
	ctx.r30.s64 = ctx.r11.s64 + 24524;
loc_821BE4D4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821be4f4
	if (!ctx.cr6.eq) goto loc_821BE4F4;
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// lwzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821be4f8
	if (ctx.cr6.eq) goto loc_821BE4F8;
loc_821BE4F4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821BE4F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be60c
	if (!ctx.cr6.eq) goto loc_821BE60C;
	// lfs f0,232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f4,f8,f30,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f0,f29,f6,f4
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x821be60c
	if (ctx.cr6.lt) goto loc_821BE60C;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x821be554
	if (ctx.cr6.lt) goto loc_821BE554;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821be564
	goto loc_821BE564;
loc_821BE554:
	// fdivs f10,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f26.f64));
	// fmadds f0,f10,f31,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f30,f10,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f12,f29,f10,f11
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f11.f64));
loc_821BE564:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lbz r10,3172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f7,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fadds f27,f5,f11
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmadds f28,f6,f6,f4
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821be5bc
	if (ctx.cr6.eq) goto loc_821BE5BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BE5B0;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821be5c0
	if (!ctx.cr6.eq) goto loc_821BE5C0;
loc_821BE5BC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821BE5C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be5d4
	if (ctx.cr6.eq) goto loc_821BE5D4;
	// fmr f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f22.f64;
	// b 0x821be5d8
	goto loc_821BE5D8;
loc_821BE5D4:
	// fmr f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f23.f64;
loc_821BE5D8:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x821be60c
	if (ctx.cr6.gt) goto loc_821BE60C;
	// fabs f0,f27
	ctx.f0.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// fabs f13,f24
	ctx.f13.u64 = ctx.f24.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821be60c
	if (!ctx.cr6.lt) goto loc_821BE60C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdcc0
	ctx.lr = 0x821BE60C;
	sub_821BDCC0(ctx, base);
loc_821BE60C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821BE618;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821be4d4
	if (!ctx.cr6.eq) goto loc_821BE4D4;
loc_821BE624:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bd418
	ctx.lr = 0x821BE630;
	sub_821BD418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821be7b0
	if (ctx.cr6.lt) goto loc_821BE7B0;
loc_821BE63C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd370
	ctx.lr = 0x821BE644;
	sub_821BD370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821be664
	if (!ctx.cr6.eq) goto loc_821BE664;
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// lwzx r10,r24,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821be668
	if (ctx.cr6.eq) goto loc_821BE668;
loc_821BE664:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821BE668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be794
	if (!ctx.cr6.eq) goto loc_821BE794;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f4,f8,f30,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f0,f29,f6,f4
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x821be794
	if (ctx.cr6.lt) goto loc_821BE794;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x821be6d0
	if (ctx.cr6.lt) goto loc_821BE6D0;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
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
	// b 0x821be6ec
	goto loc_821BE6EC;
loc_821BE6D0:
	// fdivs f0,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f26.f64));
	// fmadds f13,f0,f31,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f30,f0,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f29,f0,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821BE6EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e490
	ctx.lr = 0x821BE6F8;
	sub_8222E490(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f27,f7,f8
	ctx.f27.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f28,f9,f9,f6
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// beq cr6,0x821be74c
	if (ctx.cr6.eq) goto loc_821BE74C;
	// lbz r11,3172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be74c
	if (ctx.cr6.eq) goto loc_821BE74C;
	// bl 0x821aa3a0
	ctx.lr = 0x821BE740;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821be750
	if (!ctx.cr6.eq) goto loc_821BE750;
loc_821BE74C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821BE750:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be764
	if (ctx.cr6.eq) goto loc_821BE764;
	// fmr f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f22.f64;
	// b 0x821be768
	goto loc_821BE768;
loc_821BE764:
	// fmr f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f23.f64;
loc_821BE768:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x821be794
	if (ctx.cr6.gt) goto loc_821BE794;
	// fabs f0,f27
	ctx.f0.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// fabs f13,f24
	ctx.f13.u64 = ctx.f24.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821be794
	if (!ctx.cr6.lt) goto loc_821BE794;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd398
	ctx.lr = 0x821BE794;
	sub_821BD398(ctx, base);
loc_821BE794:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd2c0
	ctx.lr = 0x821BE7A4;
	sub_821BD2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821be63c
	if (!ctx.cr6.lt) goto loc_821BE63C;
loc_821BE7B0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de05c
	ctx.lr = 0x821BE7BC;
	__restfpr_22(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BE3C0) {
	__imp__sub_821BE3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821BE7C8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de024
	ctx.lr = 0x821BE7D0;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// beq cr6,0x821be9b4
	if (ctx.cr6.eq) goto loc_821BE9B4;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821be850
	if (!ctx.cr6.eq) goto loc_821BE850;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be9b4
	if (ctx.cr6.eq) goto loc_821BE9B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r28,r8,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821be9b4
	if (ctx.cr6.eq) goto loc_821BE9B4;
loc_821BE850:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a9b38
	ctx.lr = 0x821BE858;
	sub_821A9B38(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,26416
	ctx.r26.s64 = ctx.r11.s64 + 26416;
	// beq cr6,0x821be8f8
	if (ctx.cr6.eq) goto loc_821BE8F8;
loc_821BE86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821be898
	if (!ctx.cr6.eq) goto loc_821BE898;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,20
	ctx.r10.s64 = ctx.r26.s64 + 20;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821be89c
	if (ctx.cr6.eq) goto loc_821BE89C;
loc_821BE898:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821BE89C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be8e0
	if (!ctx.cr6.eq) goto loc_821BE8E0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821ad488
	ctx.lr = 0x821BE8C4;
	sub_821AD488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be8e0
	if (ctx.cr6.eq) goto loc_821BE8E0;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// bne cr6,0x821be8e0
	if (!ctx.cr6.eq) goto loc_821BE8E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6be8
	ctx.lr = 0x821BE8E0;
	sub_821B6BE8(ctx, base);
loc_821BE8E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821BE8EC;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821be86c
	if (!ctx.cr6.eq) goto loc_821BE86C;
loc_821BE8F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd418
	ctx.lr = 0x821BE904;
	sub_821BD418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821be9b4
	if (ctx.cr6.lt) goto loc_821BE9B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,7932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f27.f64 = double(temp.f32);
loc_821BE918:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd370
	ctx.lr = 0x821BE920;
	sub_821BD370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821be94c
	if (!ctx.cr6.eq) goto loc_821BE94C;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,20
	ctx.r10.s64 = ctx.r26.s64 + 20;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821be950
	if (ctx.cr6.eq) goto loc_821BE950;
loc_821BE94C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821BE950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be998
	if (!ctx.cr6.eq) goto loc_821BE998;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f5,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f28.f64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822d8f18
	ctx.lr = 0x821BE97C;
	sub_822D8F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821be998
	if (ctx.cr6.eq) goto loc_821BE998;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd398
	ctx.lr = 0x821BE998;
	sub_821BD398(ctx, base);
loc_821BE998:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd2c0
	ctx.lr = 0x821BE9A8;
	sub_821BD2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821be918
	if (!ctx.cr6.lt) goto loc_821BE918;
loc_821BE9B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de070
	ctx.lr = 0x821BE9C0;
	__restfpr_27(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BE7C0) {
	__imp__sub_821BE7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BE9C4) {
	__imp__sub_821BE9C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BE9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821BE9D0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821bea3c
	if (!ctx.cr6.eq) goto loc_821BEA3C;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bebe8
	if (ctx.cr6.eq) goto loc_821BEBE8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r27,r8,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821bebe8
	if (ctx.cr6.eq) goto loc_821BEBE8;
loc_821BEA3C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f31,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r29,r24,232
	ctx.r29.s64 = ctx.r24.s64 + 232;
	// bl 0x821a9b38
	ctx.lr = 0x821BEA4C;
	sub_821A9B38(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,26416
	ctx.r25.s64 = ctx.r11.s64 + 26416;
	// beq cr6,0x821beb10
	if (ctx.cr6.eq) goto loc_821BEB10;
loc_821BEA60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x821bea8c
	if (!ctx.cr6.eq) goto loc_821BEA8C;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r25,20
	ctx.r9.s64 = ctx.r25.s64 + 20;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821bea90
	if (ctx.cr6.eq) goto loc_821BEA90;
loc_821BEA8C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821BEA90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821beaf8
	if (!ctx.cr6.eq) goto loc_821BEAF8;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// lfs f13,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bge cr6,0x821beaf8
	if (!ctx.cr6.lt) goto loc_821BEAF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8233cd78
	ctx.lr = 0x821BEAE0;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821beaf8
	if (ctx.cr6.eq) goto loc_821BEAF8;
	// cmpwi cr6,r28,23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 23, ctx.xer);
	// bne cr6,0x821beaf8
	if (!ctx.cr6.eq) goto loc_821BEAF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6be8
	ctx.lr = 0x821BEAF8;
	sub_821B6BE8(ctx, base);
loc_821BEAF8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821BEB04;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bea60
	if (!ctx.cr6.eq) goto loc_821BEA60;
loc_821BEB10:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bd418
	ctx.lr = 0x821BEB1C;
	sub_821BD418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821bebe8
	if (ctx.cr6.lt) goto loc_821BEBE8;
loc_821BEB28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd370
	ctx.lr = 0x821BEB30;
	sub_821BD370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x821beb5c
	if (!ctx.cr6.eq) goto loc_821BEB5C;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r25,20
	ctx.r10.s64 = ctx.r25.s64 + 20;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821beb60
	if (ctx.cr6.eq) goto loc_821BEB60;
loc_821BEB5C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821BEB60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bebcc
	if (!ctx.cr6.eq) goto loc_821BEBCC;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bge cr6,0x821bebcc
	if (!ctx.cr6.lt) goto loc_821BEBCC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8233cd78
	ctx.lr = 0x821BEBB0;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bebcc
	if (ctx.cr6.eq) goto loc_821BEBCC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd398
	ctx.lr = 0x821BEBCC;
	sub_821BD398(ctx, base);
loc_821BEBCC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bd2c0
	ctx.lr = 0x821BEBDC;
	sub_821BD2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821beb28
	if (!ctx.cr6.lt) goto loc_821BEB28;
loc_821BEBE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BE9C8) {
	__imp__sub_821BE9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BEBF4) {
	__imp__sub_821BEBF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEBF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r3,232
	ctx.r6.s64 = ctx.r3.s64 + 232;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x821be0d8
	sub_821BE0D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BEBF8) {
	__imp__sub_821BEBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BEC14) {
	__imp__sub_821BEC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEC18) {
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
	// lbz r11,5000(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5000);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821becc8
	if (!ctx.cr6.eq) goto loc_821BECC8;
	// lwz r11,3412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821becc8
	if (ctx.cr6.eq) goto loc_821BECC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821becc8
	if (ctx.cr6.eq) goto loc_821BECC8;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r11,4788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4788);
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r8,r11,1000
	ctx.r8.s64 = ctx.r11.s64 + 1000;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821becc8
	if (ctx.cr6.lt) goto loc_821BECC8;
	// bl 0x821ae080
	ctx.lr = 0x821BEC70;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821becc8
	if (!ctx.cr6.eq) goto loc_821BECC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4928(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821becb8
	if (!ctx.cr6.gt) goto loc_821BECB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821BECAC;
	sub_822D4918(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821becc8
	if (ctx.cr6.lt) goto loc_821BECC8;
loc_821BECB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,3404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3404, ctx.r11.u8);
	// stw r10,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r10.u32);
loc_821BECC8:
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

PPC_WEAK_FUNC(sub_821BEC18) {
	__imp__sub_821BEC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BECE0) {
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
	// bl 0x821b5688
	ctx.lr = 0x821BECFC;
	sub_821B5688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821BED04;
	sub_821AA3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1640
	ctx.lr = 0x821BED10;
	sub_821B1640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bedb8
	if (ctx.cr6.eq) goto loc_821BEDB8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bedb8
	if (ctx.cr6.eq) goto loc_821BEDB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bec18
	ctx.lr = 0x821BED2C;
	sub_821BEC18(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,824
	ctx.r9.s64 = ctx.r11.s64 + 824;
	// lwz r11,832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bed6c
	if (ctx.cr6.eq) goto loc_821BED6C;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// blt cr6,0x821bedb8
	if (ctx.cr6.lt) goto loc_821BEDB8;
loc_821BED6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bedb8
	if (ctx.cr6.eq) goto loc_821BEDB8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bedb8
	if (ctx.cr6.eq) goto loc_821BEDB8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9250
	ctx.lr = 0x821BED9C;
	sub_821B9250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bedb0
	if (ctx.cr6.eq) goto loc_821BEDB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bedb8
	if (ctx.cr6.eq) goto loc_821BEDB8;
loc_821BEDB0:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821bedbc
	goto loc_821BEDBC;
loc_821BEDB8:
	// li r4,3
	ctx.r4.s64 = 3;
loc_821BEDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BEDC4;
	sub_821CFAE0(ctx, base);
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

PPC_WEAK_FUNC(sub_821BECE0) {
	__imp__sub_821BECE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BEDDC) {
	__imp__sub_821BEDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEDE0) {
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
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x821da818
	ctx.lr = 0x821BEDF4;
	sub_821DA818(ctx, base);
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

PPC_WEAK_FUNC(sub_821BEDE0) {
	__imp__sub_821BEDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEE08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3174, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BEE08) {
	__imp__sub_821BEE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BEE14) {
	__imp__sub_821BEE14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEE18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3174, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BEE18) {
	__imp__sub_821BEE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BEE24) {
	__imp__sub_821BEE24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEE28) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,102
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 102, ctx.xer);
	// bne cr6,0x821bee9c
	if (!ctx.cr6.eq) goto loc_821BEE9C;
	// bl 0x821aa3d0
	ctx.lr = 0x821BEE5C;
	sub_821AA3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bee9c
	if (ctx.cr6.eq) goto loc_821BEE9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae88
	ctx.lr = 0x821BEE78;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bee8c
	if (!ctx.cr6.eq) goto loc_821BEE8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821beea0
	goto loc_821BEEA0;
loc_821BEE8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af8e8
	ctx.lr = 0x821BEE9C;
	sub_821AF8E8(ctx, base);
loc_821BEE9C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821BEEA0:
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

PPC_WEAK_FUNC(sub_821BEE28) {
	__imp__sub_821BEE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEEB8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BEEDC;
	sub_821CFAE0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821BEEF0;
	sub_821DD828(ctx, base);
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

PPC_WEAK_FUNC(sub_821BEEB8) {
	__imp__sub_821BEEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BEF08) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4684);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,1000
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1000, ctx.xer);
	// blt cr6,0x821bf048
	if (ctx.cr6.lt) goto loc_821BF048;
	// bl 0x821d91c0
	ctx.lr = 0x821BEF40;
	sub_821D91C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf048
	if (ctx.cr6.eq) goto loc_821BF048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8f18
	ctx.lr = 0x821BEF58;
	sub_821D8F18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf048
	if (ctx.cr6.eq) goto loc_821BF048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BEF6C;
	sub_821AA3A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821befec
	if (ctx.cr6.eq) goto loc_821BEFEC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// bl 0x82240730
	ctx.lr = 0x821BEFB4;
	sub_82240730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821befd4
	if (ctx.cr6.eq) goto loc_821BEFD4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,25732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x821befec
	if (!ctx.cr6.lt) goto loc_821BEFEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bf04c
	goto loc_821BF04C;
loc_821BEFD4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x821befec
	if (!ctx.cr6.lt) goto loc_821BEFEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bf04c
	goto loc_821BF04C;
loc_821BEFEC:
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821aae88
	ctx.lr = 0x821BEFF8;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf048
	if (ctx.cr6.eq) goto loc_821BF048;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bf048
	if (ctx.cr6.eq) goto loc_821BF048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae080
	ctx.lr = 0x821BF01C;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf048
	if (!ctx.cr6.eq) goto loc_821BF048;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x821ab0a8
	ctx.lr = 0x821BF040;
	sub_821AB0A8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// b 0x821bf04c
	goto loc_821BF04C;
loc_821BF048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF04C:
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

PPC_WEAK_FUNC(sub_821BEF08) {
	__imp__sub_821BEF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF064) {
	__imp__sub_821BF064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF068) {
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
	// bl 0x821aa3d0
	ctx.lr = 0x821BF080;
	sub_821AA3D0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf120
	if (!ctx.cr6.eq) goto loc_821BF120;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf120
	if (ctx.cr6.eq) goto loc_821BF120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,24356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821bf120
	if (!ctx.cr6.lt) goto loc_821BF120;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82240768
	ctx.lr = 0x821BF0E8;
	sub_82240768(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bf120
	if (!ctx.cr6.eq) goto loc_821BF120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BF0F8;
	sub_821ABA40(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r9,r11,5000
	ctx.r9.s64 = ctx.r11.s64 + 5000;
	// stw r9,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r9.u32);
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
loc_821BF120:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BF12C;
	sub_821CFAE0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821BF140;
	sub_821DD828(ctx, base);
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

PPC_WEAK_FUNC(sub_821BF068) {
	__imp__sub_821BF068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF154) {
	__imp__sub_821BF154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821bf198
	if (!ctx.cr6.eq) goto loc_821BF198;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x821bf18c
	if (ctx.cr6.eq) goto loc_821BF18C;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x821bf198
	if (!ctx.cr6.eq) goto loc_821BF198;
loc_821BF18C:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821BF198:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BF158) {
	__imp__sub_821BF158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF1A4) {
	__imp__sub_821BF1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821BF1B0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de024
	ctx.lr = 0x821BF1B8;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BF1C8;
	sub_821AA3A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf49c
	if (ctx.cr6.eq) goto loc_821BF49C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821bf49c
	if (!ctx.cr6.eq) goto loc_821BF49C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4260
	ctx.lr = 0x821BF1F4;
	sub_821B4260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf49c
	if (ctx.cr6.eq) goto loc_821BF49C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821aa530
	ctx.lr = 0x821BF21C;
	sub_821AA530(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822d52c8
	ctx.lr = 0x821BF22C;
	sub_822D52C8(ctx, base);
	// lfs f0,232(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,236(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,240(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmadds f8,f13,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f11,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// ble cr6,0x821bf49c
	if (!ctx.cr6.gt) goto loc_821BF49C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8898
	ctx.lr = 0x821BF294;
	sub_821D8898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bf49c
	if (ctx.cr6.eq) goto loc_821BF49C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4ac8
	ctx.lr = 0x821BF2A4;
	sub_822D4AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821d8670
	ctx.lr = 0x821BF2D4;
	sub_821D8670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,272(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf314
	if (ctx.cr6.eq) goto loc_821BF314;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,760(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f29,f11,f13,f12
	ctx.f29.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// b 0x821bf318
	goto loc_821BF318;
loc_821BF314:
	// lfs f29,760(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	ctx.f29.f64 = double(temp.f32);
loc_821BF318:
	// bl 0x8222fd60
	ctx.lr = 0x821BF31C;
	sub_8222FD60(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r27,r3,31
	ctx.r27.u64 = ctx.r3.u32 & 0x1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,4916
	ctx.r29.s64 = ctx.r31.s64 + 4916;
	// lfs f30,5876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r11,-12920
	ctx.r28.s64 = ctx.r11.s64 + -12920;
loc_821BF338:
	// xor r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 ^ ctx.r27.u64;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,4928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	ctx.f27.f64 = double(temp.f32);
	// lfsx f8,r10,r28
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f8,f28
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f6,f13,f31
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f3,176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x822d4918
	ctx.lr = 0x821BF398;
	sub_822D4918(ctx, base);
	// fmuls f0,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821bf490
	if (ctx.cr6.gt) goto loc_821BF490;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lhz r7,126(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821d7d48
	ctx.lr = 0x821BF3CC;
	sub_821D7D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf490
	if (ctx.cr6.eq) goto loc_821BF490;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8220
	ctx.lr = 0x821BF3E8;
	sub_821D8220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf490
	if (ctx.cr6.eq) goto loc_821BF490;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f31,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f31,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r5,2047
	ctx.r5.s64 = 2047;
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,3528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821c8b88
	ctx.lr = 0x821BF440;
	sub_821C8B88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf490
	if (ctx.cr6.eq) goto loc_821BF490;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821aae88
	ctx.lr = 0x821BF458;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf490
	if (ctx.cr6.eq) goto loc_821BF490;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af5b0
	ctx.lr = 0x821BF47C;
	sub_821AF5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BF484;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf4b0
	if (!ctx.cr6.eq) goto loc_821BF4B0;
loc_821BF490:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x821bf338
	if (ctx.cr6.lt) goto loc_821BF338;
loc_821BF49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x821BF4AC;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821BF4B0:
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da818
	ctx.lr = 0x821BF4BC;
	sub_821DA818(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BF4C8;
	sub_821CFAE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x821BF4D8;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BF1A8) {
	__imp__sub_821BF1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF4DC) {
	__imp__sub_821BF4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF4E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BF500;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf5e0
	if (ctx.cr6.eq) goto loc_821BF5E0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821bf5e0
	if (!ctx.cr6.eq) goto loc_821BF5E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BF528;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf558
	if (!ctx.cr6.eq) goto loc_821BF558;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821bf558
	if (!ctx.cr6.lt) goto loc_821BF558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac678
	ctx.lr = 0x821BF554;
	sub_821AC678(ctx, base);
	// b 0x821bf5e8
	goto loc_821BF5E8;
loc_821BF558:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa4f0
	ctx.lr = 0x821BF564;
	sub_821AA4F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821BF56C;
	sub_821AA3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821bf58c
	if (ctx.cr6.eq) goto loc_821BF58C;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821af8e8
	ctx.lr = 0x821BF588;
	sub_821AF8E8(ctx, base);
	// b 0x821bf5a0
	goto loc_821BF5A0;
loc_821BF58C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821af5b0
	ctx.lr = 0x821BF5A0;
	sub_821AF5B0(ctx, base);
loc_821BF5A0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf5b4
	if (!ctx.cr6.eq) goto loc_821BF5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab1d0
	ctx.lr = 0x821BF5B4;
	sub_821AB1D0(ctx, base);
loc_821BF5B4:
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821aae88
	ctx.lr = 0x821BF5C0;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf5d4
	if (!ctx.cr6.eq) goto loc_821BF5D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac688
	ctx.lr = 0x821BF5D4;
	sub_821AC688(ctx, base);
loc_821BF5D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac6d0
	ctx.lr = 0x821BF5DC;
	sub_821AC6D0(ctx, base);
	// b 0x821bf5e8
	goto loc_821BF5E8;
loc_821BF5E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BF5E8;
	sub_821ABA40(ctx, base);
loc_821BF5E8:
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

PPC_WEAK_FUNC(sub_821BF4E0) {
	__imp__sub_821BF4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF600) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BF620;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf6c4
	if (ctx.cr6.eq) goto loc_821BF6C4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821bf6c4
	if (!ctx.cr6.eq) goto loc_821BF6C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa4f0
	ctx.lr = 0x821BF64C;
	sub_821AA4F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,760(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f0,24332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24332);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f1,f7,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f12,f4,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821bf6a8
	if (!ctx.cr6.gt) goto loc_821BF6A8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821BF6A8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821afa58
	ctx.lr = 0x821BF6B8;
	sub_821AFA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac6d0
	ctx.lr = 0x821BF6C0;
	sub_821AC6D0(ctx, base);
	// b 0x821bf6cc
	goto loc_821BF6CC;
loc_821BF6C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821BF6CC;
	sub_821ABA40(ctx, base);
loc_821BF6CC:
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

PPC_WEAK_FUNC(sub_821BF600) {
	__imp__sub_821BF600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF6E4) {
	__imp__sub_821BF6E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF6E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4736, ctx.r11.u32);
	// stw r11,4740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4740, ctx.r11.u32);
	// bl 0x821aa3a0
	ctx.lr = 0x821BF70C;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf76c
	if (ctx.cr6.eq) goto loc_821BF76C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821bf76c
	if (!ctx.cr6.eq) goto loc_821BF76C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BF734;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf76c
	if (ctx.cr6.eq) goto loc_821BF76C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821BF748;
	sub_821AE110(ctx, base);
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da818
	ctx.lr = 0x821BF754;
	sub_821DA818(ctx, base);
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
loc_821BF76C:
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

PPC_WEAK_FUNC(sub_821BF6E8) {
	__imp__sub_821BF6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF784) {
	__imp__sub_821BF784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF788) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BF7A4;
	sub_821CFAE0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821BF7B8;
	sub_821DD828(ctx, base);
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

PPC_WEAK_FUNC(sub_821BF788) {
	__imp__sub_821BF788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF7CC) {
	__imp__sub_821BF7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF7D0) {
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
	// bl 0x821ab968
	ctx.lr = 0x821BF7E8;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf83c
	if (ctx.cr6.eq) goto loc_821BF83C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,2000
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2000, ctx.xer);
	// bge cr6,0x821bf83c
	if (!ctx.cr6.lt) goto loc_821BF83C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// lfs f1,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c7540
	ctx.lr = 0x821BF820;
	sub_821C7540(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_821BF83C:
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

PPC_WEAK_FUNC(sub_821BF7D0) {
	__imp__sub_821BF7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF854) {
	__imp__sub_821BF854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF858) {
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
	// bl 0x821aa3a0
	ctx.lr = 0x821BF870;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821bf884
	if (ctx.cr6.eq) goto loc_821BF884;
	// bl 0x821b5688
	ctx.lr = 0x821BF880;
	sub_821B5688(ctx, base);
	// b 0x821bf894
	goto loc_821BF894;
loc_821BF884:
	// bl 0x821b52d8
	ctx.lr = 0x821BF888;
	sub_821B52D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5080
	ctx.lr = 0x821BF894;
	sub_821B5080(ctx, base);
loc_821BF894:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BF8A0;
	sub_821CFAE0(ctx, base);
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

PPC_WEAK_FUNC(sub_821BF858) {
	__imp__sub_821BF858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BF8B4) {
	__imp__sub_821BF8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BF8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821BF8C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821b24f0
	ctx.lr = 0x821BF8D4;
	sub_821B24F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BF8DC;
	sub_821AB968(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bf9b8
	if (ctx.cr6.eq) goto loc_821BF9B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,27032
	ctx.r10.s64 = ctx.r11.s64 + 27032;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r10.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821BF908;
	sub_821DD828(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lwz r11,11284(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11284);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf924
	if (ctx.cr6.eq) goto loc_821BF924;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x821bf964
	goto loc_821BF964;
loc_821BF924:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf960
	if (ctx.cr6.eq) goto loc_821BF960;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bf960
	if (ctx.cr6.eq) goto loc_821BF960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf7d0
	ctx.lr = 0x821BF944;
	sub_821BF7D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf960
	if (ctx.cr6.eq) goto loc_821BF960;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// li r30,5
	ctx.r30.s64 = 5;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf964
	if (ctx.cr6.eq) goto loc_821BF964;
loc_821BF960:
	// li r30,2
	ctx.r30.s64 = 2;
loc_821BF964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1640
	ctx.lr = 0x821BF96C;
	sub_821B1640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf990
	if (ctx.cr6.eq) goto loc_821BF990;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf9a4
	if (ctx.cr6.eq) goto loc_821BF9A4;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bf9a4
	if (ctx.cr6.eq) goto loc_821BF9A4;
loc_821BF990:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BF99C;
	sub_821CFAE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BF9A4:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BF9B0;
	sub_821CFAE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BF9B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,3153(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// addi r9,r11,27016
	ctx.r9.s64 = ctx.r11.s64 + 27016;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r9.u32);
	// beq cr6,0x821bf9d8
	if (ctx.cr6.eq) goto loc_821BF9D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b49c8
	ctx.lr = 0x821BF9D8;
	sub_821B49C8(ctx, base);
loc_821BF9D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1640
	ctx.lr = 0x821BF9E0;
	sub_821B1640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfa34
	if (ctx.cr6.eq) goto loc_821BFA34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bfa2c
	if (ctx.cr6.eq) goto loc_821BFA2C;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bfa2c
	if (ctx.cr6.eq) goto loc_821BFA2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b52d8
	ctx.lr = 0x821BFA0C;
	sub_821B52D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5080
	ctx.lr = 0x821BFA18;
	sub_821B5080(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821BFA24;
	sub_821CFAE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821BFA2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bec18
	ctx.lr = 0x821BFA34;
	sub_821BEC18(ctx, base);
loc_821BFA34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf858
	ctx.lr = 0x821BFA3C;
	sub_821BF858(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BF8B8) {
	__imp__sub_821BF8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BFA44) {
	__imp__sub_821BFA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFA48) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x821b4eb0
	ctx.lr = 0x821BFA80;
	sub_821B4EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821cfae0
	ctx.lr = 0x821BFA8C;
	sub_821CFAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4de8
	ctx.lr = 0x821BFA94;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bfaac
	if (ctx.cr6.eq) goto loc_821BFAAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821BFAA4;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bfab4
	if (!ctx.cr6.eq) goto loc_821BFAB4;
loc_821BFAAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3174, ctx.r11.u8);
loc_821BFAB4:
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

PPC_WEAK_FUNC(sub_821BFA48) {
	__imp__sub_821BFA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,272(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821d9558
	sub_821D9558(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821BFAC8) {
	__imp__sub_821BFAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821BFAD8) {
	__imp__sub_821BFAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821BFADC) {
	__imp__sub_821BFADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821BFAE8;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,3153(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3153);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,3096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821bfc88
	if (!ctx.cr6.eq) goto loc_821BFC88;
	// bl 0x821aa3a0
	ctx.lr = 0x821BFB10;
	sub_821AA3A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfc88
	if (ctx.cr6.eq) goto loc_821BFC88;
	// addi r30,r3,232
	ctx.r30.s64 = ctx.r3.s64 + 232;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aae88
	ctx.lr = 0x821BFB2C;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfc88
	if (ctx.cr6.eq) goto loc_821BFC88;
	// lwz r11,272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfb58
	if (ctx.cr6.eq) goto loc_821BFB58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d91c0
	ctx.lr = 0x821BFB4C;
	sub_821D91C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfc78
	if (ctx.cr6.eq) goto loc_821BFC78;
loc_821BFB58:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240768
	ctx.lr = 0x821BFB60;
	sub_82240768(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821bfbb4
	if (ctx.cr6.eq) goto loc_821BFBB4;
	// bl 0x821aba40
	ctx.lr = 0x821BFB70;
	sub_821ABA40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
loc_821BFB7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821bf1a8
	ctx.lr = 0x821BFB88;
	sub_821BF1A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfc88
	if (!ctx.cr6.eq) goto loc_821BFC88;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmuls f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x821bfb7c
	if (ctx.cr6.lt) goto loc_821BFB7C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821BFBB4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,20476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821baf78
	ctx.lr = 0x821BFBC4;
	sub_821BAF78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfc38
	if (ctx.cr6.eq) goto loc_821BFC38;
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c66c0
	ctx.lr = 0x821BFBDC;
	sub_821C66C0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1a98
	ctx.lr = 0x821BFBF0;
	sub_821B1A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfc20
	if (ctx.cr6.eq) goto loc_821BFC20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821BFC04;
	sub_821AE110(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821BFC10;
	sub_82240108(ctx, base);
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
loc_821BFC20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c88b0
	ctx.lr = 0x821BFC28;
	sub_821C88B0(ctx, base);
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
loc_821BFC38:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,25520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25520);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x821bfc88
	if (!ctx.cr6.gt) goto loc_821BFC88;
loc_821BFC78:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,272(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af8e8
	ctx.lr = 0x821BFC88;
	sub_821AF8E8(ctx, base);
loc_821BFC88:
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

PPC_WEAK_FUNC(sub_821BFAE0) {
	__imp__sub_821BFAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFC98) {
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
	// bl 0x821aa3a0
	ctx.lr = 0x821BFCB0;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bfcc0
	if (!ctx.cr6.eq) goto loc_821BFCC0;
	// li r4,101
	ctx.r4.s64 = 101;
	// b 0x821bfd34
	goto loc_821BFD34;
loc_821BFCC0:
	// lbz r11,3174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3174);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfcd4
	if (ctx.cr6.eq) goto loc_821BFCD4;
	// li r4,104
	ctx.r4.s64 = 104;
	// b 0x821bfd34
	goto loc_821BFD34;
loc_821BFCD4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821bfd3c
	if (ctx.cr6.gt) goto loc_821BFD3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bfe08
	if (ctx.cr6.eq) goto loc_821BFE08;
	// bdz 0x821bfd0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821BFD0C;
	// bdz 0x821bfd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821BFD50;
	// bdz 0x821bfdf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821BFDF0;
	// b 0x821bfd30
	goto loc_821BFD30;
loc_821BFD0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821deca0
	ctx.lr = 0x821BFD14;
	sub_821DECA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bfd30
	if (!ctx.cr6.eq) goto loc_821BFD30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9290
	ctx.lr = 0x821BFD24;
	sub_821D9290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfd3c
	if (ctx.cr6.eq) goto loc_821BFD3C;
loc_821BFD30:
	// li r4,100
	ctx.r4.s64 = 100;
loc_821BFD34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BFD38:
	// bl 0x821da818
	ctx.lr = 0x821BFD3C;
	sub_821DA818(ctx, base);
loc_821BFD3C:
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
loc_821BFD50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BFD58;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfd8c
	if (!ctx.cr6.eq) goto loc_821BFD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d91c0
	ctx.lr = 0x821BFD6C;
	sub_821D91C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfd8c
	if (ctx.cr6.eq) goto loc_821BFD8C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
	// b 0x821bfd30
	goto loc_821BFD30;
loc_821BFD8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BFD94;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfdb0
	if (ctx.cr6.eq) goto loc_821BFDB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bef08
	ctx.lr = 0x821BFDA8;
	sub_821BEF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bfd3c
	if (ctx.cr6.eq) goto loc_821BFD3C;
loc_821BFDB0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
	// bl 0x821bfae0
	ctx.lr = 0x821BFDC8;
	sub_821BFAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BFDD0;
	sub_821AB968(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bfde8
	if (ctx.cr6.eq) goto loc_821BFDE8;
	// li r4,103
	ctx.r4.s64 = 103;
	// b 0x821bfd38
	goto loc_821BFD38;
loc_821BFDE8:
	// li r4,100
	ctx.r4.s64 = 100;
	// b 0x821bfd38
	goto loc_821BFD38;
loc_821BFDF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BFDF8;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfd3c
	if (!ctx.cr6.eq) goto loc_821BFD3C;
	// b 0x821bfd30
	goto loc_821BFD30;
loc_821BFE08:
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfd3c
	if (ctx.cr6.eq) goto loc_821BFD3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b47b8
	ctx.lr = 0x821BFE1C;
	sub_821B47B8(ctx, base);
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

PPC_WEAK_FUNC(sub_821BFC98) {
	__imp__sub_821BFC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821BFE30) {
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
	// lhz r10,3288(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,26124
	ctx.r9.s64 = ctx.r11.s64 + 26124;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r9.u32);
	// beq cr6,0x821bfe70
	if (ctx.cr6.eq) goto loc_821BFE70;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821da9e8
	ctx.lr = 0x821BFE68;
	sub_821DA9E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bfff4
	goto loc_821BFFF4;
loc_821BFE70:
	// lbz r11,3704(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfe90
	if (ctx.cr6.eq) goto loc_821BFE90;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da9e8
	ctx.lr = 0x821BFE88;
	sub_821DA9E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bfff4
	goto loc_821BFFF4;
loc_821BFE90:
	// lwz r11,3356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfec4
	if (ctx.cr6.eq) goto loc_821BFEC4;
	// lbz r11,290(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 290);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfec0
	if (!ctx.cr6.eq) goto loc_821BFEC0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da9e8
	ctx.lr = 0x821BFEB8;
	sub_821DA9E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bfff4
	goto loc_821BFFF4;
loc_821BFEC0:
	// stw r30,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r30.u32);
loc_821BFEC4:
	// lwz r4,3384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bfee4
	if (ctx.cr6.eq) goto loc_821BFEE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4eb0
	ctx.lr = 0x821BFEE0;
	sub_821B4EB0(ctx, base);
	// stw r30,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r30.u32);
loc_821BFEE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9ec0
	ctx.lr = 0x821BFEEC;
	sub_821A9EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bfc98
	ctx.lr = 0x821BFEF4;
	sub_821BFC98(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821bffe8
	if (ctx.cr6.gt) goto loc_821BFFE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bff38
	if (ctx.cr6.eq) goto loc_821BFF38;
	// bdz 0x821bff2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821BFF2C;
	// bdz 0x821bffa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821BFFA0;
	// bdz 0x821bffbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821BFFBC;
	// b 0x821bffd4
	goto loc_821BFFD4;
loc_821BFF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf8b8
	ctx.lr = 0x821BFF34;
	sub_821BF8B8(ctx, base);
	// b 0x821bffe8
	goto loc_821BFFE8;
loc_821BFF38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,3153(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// addi r9,r11,27116
	ctx.r9.s64 = ctx.r11.s64 + 27116;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r9.u32);
	// beq cr6,0x821bff58
	if (ctx.cr6.eq) goto loc_821BFF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b49c8
	ctx.lr = 0x821BFF58;
	sub_821B49C8(ctx, base);
loc_821BFF58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b24f0
	ctx.lr = 0x821BFF60;
	sub_821B24F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821BFF68;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bff80
	if (!ctx.cr6.eq) goto loc_821BFF80;
	// bl 0x821bece0
	ctx.lr = 0x821BFF7C;
	sub_821BECE0(ctx, base);
	// b 0x821bffe8
	goto loc_821BFFE8;
loc_821BFF80:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821cfae0
	ctx.lr = 0x821BFF88;
	sub_821CFAE0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821BFF9C;
	sub_821DD828(ctx, base);
	// b 0x821bffe8
	goto loc_821BFFE8;
loc_821BFFA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r10,r11,27092
	ctx.r10.s64 = ctx.r11.s64 + 27092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r10.u32);
	// bl 0x821beeb8
	ctx.lr = 0x821BFFB8;
	sub_821BEEB8(ctx, base);
	// b 0x821bffe8
	goto loc_821BFFE8;
loc_821BFFBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,27068
	ctx.r10.s64 = ctx.r11.s64 + 27068;
	// stw r10,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r10.u32);
	// bl 0x821bf068
	ctx.lr = 0x821BFFD0;
	sub_821BF068(ctx, base);
	// b 0x821bffe8
	goto loc_821BFFE8;
loc_821BFFD4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,27048
	ctx.r10.s64 = ctx.r11.s64 + 27048;
	// stw r10,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r10.u32);
	// bl 0x821bfa48
	ctx.lr = 0x821BFFE8;
	sub_821BFA48(ctx, base);
loc_821BFFE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821BFFF0;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BFFF4:
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

PPC_WEAK_FUNC(sub_821BFE30) {
	__imp__sub_821BFE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C000C) {
	__imp__sub_821C000C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0010) {
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
	// addi r11,r11,31928
	ctx.r11.s64 = ctx.r11.s64 + 31928;
	// addi r10,r11,-2600
	ctx.r10.s64 = ctx.r11.s64 + -2600;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821c0080
	if (ctx.cr6.eq) goto loc_821C0080;
	// addi r10,r11,-200
	ctx.r10.s64 = ctx.r11.s64 + -200;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c0050
	if (!ctx.cr6.eq) goto loc_821C0050;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821C0050:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c006c
	if (!ctx.cr6.eq) goto loc_821C006C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821C006C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,32108
	ctx.r4.s64 = ctx.r11.s64 + 32108;
	// bl 0x822830e8
	ctx.lr = 0x821C007C;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C0010) {
	__imp__sub_821C0010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821C0098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c00ec
	if (ctx.cr6.eq) goto loc_821C00EC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821C00B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x821C00C4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c00f8
	if (ctx.cr6.eq) goto loc_821C00F8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c00b8
	if (!ctx.cr6.eq) goto loc_821C00B8;
loc_821C00EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C00F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0090) {
	__imp__sub_821C0090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0104) {
	__imp__sub_821C0104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0108) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821C0124;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,7188
	ctx.r9.s64 = ctx.r11.s64 + 7188;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821C0134:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821c0184
	if (ctx.cr6.eq) goto loc_821C0184;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821c0134
	if (ctx.cr6.lt) goto loc_821C0134;
	// bl 0x822a13a0
	ctx.lr = 0x821C015C;
	sub_822A13A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// bl 0x822e84f0
	ctx.lr = 0x821C016C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C0170;
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
loc_821C0184:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222feb8
	ctx.lr = 0x821C019C;
	sub_8222FEB8(ctx, base);
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

PPC_WEAK_FUNC(sub_821C0108) {
	__imp__sub_821C0108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C01B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7188
	ctx.r9.s64 = ctx.r10.s64 + 7188;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lhz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C01B0) {
	__imp__sub_821C01B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C01CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C01CC) {
	__imp__sub_821C01CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C01D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3692);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7604
	ctx.r9.s64 = ctx.r10.s64 + 7604;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lhz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C01D0) {
	__imp__sub_821C01D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C01EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C01EC) {
	__imp__sub_821C01EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C01F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0208
	if (ctx.cr6.eq) goto loc_821C0208;
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0208:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// lhz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 128);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C01F0) {
	__imp__sub_821C01F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0218) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822b1fb0
	ctx.lr = 0x821C0240;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x821c0278
	if (!ctx.cr6.gt) goto loc_821C0278;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,32228
	ctx.r3.s64 = ctx.r11.s64 + 32228;
	// bl 0x822e84f0
	ctx.lr = 0x821C0268;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C026C;
	sub_822AD350(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f31,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x821c02b8
	goto loc_821C02B8;
loc_821C0278:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x821c02b0
	if (!ctx.cr6.lt) goto loc_821C02B0;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,32188
	ctx.r3.s64 = ctx.r11.s64 + 32188;
	// bl 0x822e84f0
	ctx.lr = 0x821C02A0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C02A4;
	sub_822AD350(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f31,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x821c02b8
	goto loc_821C02B8;
loc_821C02B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f1,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_821C02B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_821C0218) {
	__imp__sub_821C0218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C02D4) {
	__imp__sub_821C02D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C02D8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822b1fb0
	ctx.lr = 0x821C0300;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x821c0338
	if (!ctx.cr6.lt) goto loc_821C0338;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,32188
	ctx.r3.s64 = ctx.r11.s64 + 32188;
	// bl 0x822e84f0
	ctx.lr = 0x821C0328;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C032C;
	sub_822AD350(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f31,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x821c0340
	goto loc_821C0340;
loc_821C0338:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f1,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_821C0340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_821C02D8) {
	__imp__sub_821C02D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C035C) {
	__imp__sub_821C035C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0360) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822b1fb0
	ctx.lr = 0x821C0384;
	sub_822B1FB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
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

PPC_WEAK_FUNC(sub_821C0360) {
	__imp__sub_821C0360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C03A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x822acc78
	sub_822ACC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C03A8) {
	__imp__sub_821C03A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C03B8) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,32268
	ctx.r3.s64 = ctx.r11.s64 + 32268;
	// bl 0x822e84f0
	ctx.lr = 0x821C03D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C03D8;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C03B8) {
	__imp__sub_821C03B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C03E8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821C0408;
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
	// bge cr6,0x821c042c
	if (!ctx.cr6.lt) goto loc_821C042C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32296
	ctx.r4.s64 = ctx.r11.s64 + 32296;
	// bl 0x822ad4e0
	ctx.lr = 0x821C042C;
	sub_822AD4E0(ctx, base);
loc_821C042C:
	// addi r3,r31,4948
	ctx.r3.s64 = ctx.r31.s64 + 4948;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ad448
	ctx.lr = 0x821C0438;
	sub_821AD448(ctx, base);
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

PPC_WEAK_FUNC(sub_821C03E8) {
	__imp__sub_821C03E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0450) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821C046C;
	sub_822B1FB0(ctx, base);
	// addi r3,r31,4948
	ctx.r3.s64 = ctx.r31.s64 + 4948;
	// bl 0x821ad468
	ctx.lr = 0x821C0474;
	sub_821AD468(ctx, base);
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

PPC_WEAK_FUNC(sub_821C0450) {
	__imp__sub_821C0450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0488) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822b1fb0
	ctx.lr = 0x821C04AC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821C04C8;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821C0488) {
	__imp__sub_821C0488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C04F8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lfs f0,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x821C0530;
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

PPC_WEAK_FUNC(sub_821C04F8) {
	__imp__sub_821C04F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7880
	ctx.r9.s64 = ctx.r10.s64 + 7880;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0540) {
	__imp__sub_821C0540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821C0568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822b2288
	ctx.lr = 0x821C057C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821C0584;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821c05e0
	if (!ctx.cr6.eq) goto loc_821C05E0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c05cc
	if (ctx.cr6.eq) goto loc_821C05CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x821C05A8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c05cc
	if (ctx.cr6.eq) goto loc_821C05CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// bl 0x822e84f0
	ctx.lr = 0x821C05C0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C05C4;
	sub_822AD350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C05CC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C05E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821C05E8;
	sub_822B2288(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821C05EC;
	sub_82232100(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0560) {
	__imp__sub_821C0560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C05FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C05FC) {
	__imp__sub_821C05FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0600) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x82332b28
	ctx.lr = 0x821C0618;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821C061C;
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

PPC_WEAK_FUNC(sub_821C0600) {
	__imp__sub_821C0600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C062C) {
	__imp__sub_821C062C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0630) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821C064C;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,498(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 498);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c066c
	if (!ctx.cr6.eq) goto loc_821C066C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// b 0x821c06cc
	goto loc_821C06CC;
loc_821C066C:
	// lhz r10,570(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 570);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c0684
	if (!ctx.cr6.eq) goto loc_821C0684;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// b 0x821c06cc
	goto loc_821C06CC;
loc_821C0684:
	// lhz r10,478(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 478);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c069c
	if (!ctx.cr6.eq) goto loc_821C069C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// b 0x821c06cc
	goto loc_821C06CC;
loc_821C069C:
	// lhz r11,480(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 480);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c06b4
	if (!ctx.cr6.eq) goto loc_821C06B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// b 0x821c06cc
	goto loc_821C06CC;
loc_821C06B4:
	// bl 0x822a13a0
	ctx.lr = 0x821C06B8;
	sub_822A13A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// bl 0x822e84f0
	ctx.lr = 0x821C06C8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C06CC;
	sub_822AD350(ctx, base);
loc_821C06CC:
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821c06e4
	if (ctx.cr6.eq) goto loc_821C06E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821c06e8
	if (!ctx.cr6.eq) goto loc_821C06E8;
loc_821C06E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C06E8:
	// stb r11,3153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3153, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_821C0630) {
	__imp__sub_821C0630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3156);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821c0730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C0730;
	// bdzf 4*cr6+eq,0x821c0740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C0740;
	// bne cr6,0x821c0750
	if (!ctx.cr6.eq) goto loc_821C0750;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,498(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 498);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0730:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,570(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 570);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0740:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,478(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 478);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0750:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,480(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 480);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0700) {
	__imp__sub_821C0700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C0760) {
	__imp__sub_821C0760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0764) {
	__imp__sub_821C0764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0768) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821C0784;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,7224
	ctx.r9.s64 = ctx.r11.s64 + 7224;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821C0794:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821c07e4
	if (ctx.cr6.eq) goto loc_821C07E4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821c0794
	if (ctx.cr6.lt) goto loc_821C0794;
	// bl 0x822a13a0
	ctx.lr = 0x821C07BC;
	sub_822A13A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32468
	ctx.r3.s64 = ctx.r11.s64 + 32468;
	// bl 0x822e84f0
	ctx.lr = 0x821C07CC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821C07D0;
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
loc_821C07E4:
	// stw r10,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821C0768) {
	__imp__sub_821C0768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C07FC) {
	__imp__sub_821C07FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3160);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7224
	ctx.r9.s64 = ctx.r10.s64 + 7224;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lhz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0800) {
	__imp__sub_821C0800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C081C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C081C) {
	__imp__sub_821C081C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0820) {
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
	// lwz r3,3464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3464);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c0840
	if (ctx.cr6.eq) goto loc_821C0840;
	// bl 0x822ec0a0
	ctx.lr = 0x821C083C;
	sub_822EC0A0(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821C0840;
	sub_822ACED0(ctx, base);
loc_821C0840:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C0820) {
	__imp__sub_821C0820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821C0858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821C0868;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x823170a8
	ctx.lr = 0x821C0874;
	sub_823170A8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r9,138(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 138);
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r30.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x821c08a8
	if (!ctx.cr6.eq) goto loc_821C08A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,3420
	ctx.r3.s64 = ctx.r31.s64 + 3420;
	// bl 0x822a24e0
	ctx.lr = 0x821C08A0;
	sub_822A24E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C08A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c08bc
	if (ctx.cr6.eq) goto loc_821C08BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,32592
	ctx.r29.s64 = ctx.r11.s64 + 32592;
	// b 0x821c08c4
	goto loc_821C08C4;
loc_821C08BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,32580
	ctx.r29.s64 = ctx.r11.s64 + 32580;
loc_821C08C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x821C08CC;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,3420(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3420);
	// bl 0x822a13a0
	ctx.lr = 0x821C08D8;
	sub_822A13A0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lhz r4,126(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x821C08F8;
	sub_822E84F0(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,-28736
	ctx.r4.s64 = ctx.r9.s64 + -28736;
	// bl 0x822ad3b8
	ctx.lr = 0x821C0904;
	sub_822AD3B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0850) {
	__imp__sub_821C0850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C090C) {
	__imp__sub_821C090C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0910) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x821C092C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821c093c
	if (!ctx.cr6.eq) goto loc_821C093C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821c094c
	goto loc_821C094C;
loc_821C093C:
	// addi r4,r31,772
	ctx.r4.s64 = ctx.r31.s64 + 772;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821C0948;
	sub_822B2498(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C094C:
	// stb r11,769(r31)
	PPC_STORE_U8(ctx.r31.u32 + 769, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_821C0910) {
	__imp__sub_821C0910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0964) {
	__imp__sub_821C0964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0968) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,769(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 769);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,772
	ctx.r3.s64 = ctx.r3.s64 + 772;
	// b 0x822ad078
	sub_822AD078(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0968) {
	__imp__sub_821C0968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C097C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C097C) {
	__imp__sub_821C097C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0980) {
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
	// bl 0x821ab968
	ctx.lr = 0x821C0998;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c09ac
	if (ctx.cr6.eq) goto loc_821C09AC;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x822ad078
	ctx.lr = 0x821C09AC;
	sub_822AD078(ctx, base);
loc_821C09AC:
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

PPC_WEAK_FUNC(sub_821C0980) {
	__imp__sub_821C0980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C09C0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821C09DC;
	sub_822B1C50(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
	// stb r9,5005(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5005, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_821C09C0) {
	__imp__sub_821C09C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0A04) {
	__imp__sub_821C0A04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0A08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3404(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3404);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821c0a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C0A38;
	// bdzf 4*cr6+eq,0x821c0a48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C0A48;
	// bne cr6,0x821c0a58
	if (!ctx.cr6.eq) goto loc_821C0A58;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,604(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 604);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0A38:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,606(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 606);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0A48:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,608(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 608);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_821C0A58:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,594(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 594);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0A08) {
	__imp__sub_821C0A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C0A68) {
	__imp__sub_821C0A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0A6C) {
	__imp__sub_821C0A6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0A70) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821C0A8C;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,200
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 200, ctx.xer);
	// blt cr6,0x821c0a9c
	if (ctx.cr6.lt) goto loc_821C0A9C;
	// li r11,200
	ctx.r11.s64 = 200;
	// b 0x821c0aac
	goto loc_821C0AAC;
loc_821C0A9C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x821c0aac
	if (ctx.cr6.gt) goto loc_821C0AAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C0AAC:
	// stw r11,4732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4732, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821C0A70) {
	__imp__sub_821C0A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0AC4) {
	__imp__sub_821C0AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x821C0AD0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0c48
	if (ctx.cr6.eq) goto loc_821C0C48;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r31,32716
	ctx.r27.s64 = ctx.r31.s64 + 32716;
	// addi r28,r28,32700
	ctx.r28.s64 = ctx.r28.s64 + 32700;
	// addi r29,r29,32688
	ctx.r29.s64 = ctx.r29.s64 + 32688;
	// addi r30,r30,32676
	ctx.r30.s64 = ctx.r30.s64 + 32676;
	// addi r26,r3,32664
	ctx.r26.s64 = ctx.r3.s64 + 32664;
	// addi r25,r4,32656
	ctx.r25.s64 = ctx.r4.s64 + 32656;
	// addi r24,r5,32648
	ctx.r24.s64 = ctx.r5.s64 + 32648;
	// addi r23,r6,32640
	ctx.r23.s64 = ctx.r6.s64 + 32640;
	// addi r31,r7,32632
	ctx.r31.s64 = ctx.r7.s64 + 32632;
	// addi r22,r8,32624
	ctx.r22.s64 = ctx.r8.s64 + 32624;
	// addi r21,r9,32616
	ctx.r21.s64 = ctx.r9.s64 + 32616;
	// addi r20,r10,32608
	ctx.r20.s64 = ctx.r10.s64 + 32608;
	// addi r19,r11,32604
	ctx.r19.s64 = ctx.r11.s64 + 32604;
loc_821C0B54:
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x821c0c28
	if (ctx.cr6.gt) goto loc_821C0C28;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2936
	ctx.r12.s64 = ctx.r12.s64 + 2936;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821C0BBC;
	case 1:
		goto loc_821C0BC4;
	case 2:
		goto loc_821C0BCC;
	case 3:
		goto loc_821C0BD4;
	case 4:
		goto loc_821C0BDC;
	case 5:
		goto loc_821C0C28;
	case 6:
		goto loc_821C0BE4;
	case 7:
		goto loc_821C0BEC;
	case 8:
		goto loc_821C0BEC;
	case 9:
		goto loc_821C0BF4;
	case 10:
		goto loc_821C0BFC;
	case 11:
		goto loc_821C0BFC;
	case 12:
		goto loc_821C0C04;
	case 13:
		goto loc_821C0C0C;
	case 14:
		goto loc_821C0C28;
	case 15:
		goto loc_821C0BDC;
	case 16:
		goto loc_821C0C14;
	default:
		return;
	}
	// lwz r16,3004(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3004);
	// lwz r16,3012(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3012);
	// lwz r16,3020(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3020);
	// lwz r16,3028(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3028);
	// lwz r16,3036(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3036);
	// lwz r16,3112(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3112);
	// lwz r16,3044(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3044);
	// lwz r16,3052(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3052);
	// lwz r16,3052(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3052);
	// lwz r16,3060(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3060);
	// lwz r16,3068(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3068);
	// lwz r16,3068(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3068);
	// lwz r16,3076(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3076);
	// lwz r16,3084(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3084);
	// lwz r16,3112(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3112);
	// lwz r16,3036(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3036);
	// lwz r16,3092(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3092);
loc_821C0BBC:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BC4:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BCC:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BD4:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BDC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BE4:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BEC:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BF4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0BFC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0C04:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0C0C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x821c0c18
	goto loc_821C0C18;
loc_821C0C14:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_821C0C18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x821C0C28;
	sub_82280900(ctx, base);
loc_821C0C28:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r11,r16
	ctx.r18.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lwzx r10,r11,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c0b54
	if (!ctx.cr6.eq) goto loc_821C0B54;
loc_821C0C48:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0AC8) {
	__imp__sub_821C0AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0C50) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32600
	ctx.r4.s64 = ctx.r11.s64 + -32600;
	// bl 0x82280900
	ctx.lr = 0x821C0C70;
	sub_82280900(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-32712
	ctx.r4.s64 = ctx.r10.s64 + -32712;
	// bl 0x82280900
	ctx.lr = 0x821C0C80;
	sub_82280900(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,32752
	ctx.r4.s64 = ctx.r9.s64 + 32752;
	// bl 0x82280900
	ctx.lr = 0x821C0C90;
	sub_82280900(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r8,32728
	ctx.r4.s64 = ctx.r8.s64 + 32728;
	// bl 0x82280900
	ctx.lr = 0x821C0CA0;
	sub_82280900(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r31,r7,31928
	ctx.r31.s64 = ctx.r7.s64 + 31928;
	// addi r3,r31,-2600
	ctx.r3.s64 = ctx.r31.s64 + -2600;
	// bl 0x821c0ac8
	ctx.lr = 0x821C0CB0;
	sub_821C0AC8(ctx, base);
	// addi r3,r31,-200
	ctx.r3.s64 = ctx.r31.s64 + -200;
	// bl 0x821c0ac8
	ctx.lr = 0x821C0CB8;
	sub_821C0AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0ac8
	ctx.lr = 0x821C0CC0;
	sub_821C0AC8(ctx, base);
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

PPC_WEAK_FUNC(sub_821C0C50) {
	__imp__sub_821C0C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0CD4) {
	__imp__sub_821C0CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0CD8) {
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
	// lhz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821C0CFC;
	sub_822A13A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82240058
	ctx.lr = 0x821C0D0C;
	sub_82240058(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r8,-32512
	ctx.r4.s64 = ctx.r8.s64 + -32512;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r5,126(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// bl 0x82280900
	ctx.lr = 0x821C0D2C;
	sub_82280900(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,302(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0d54
	if (ctx.cr6.eq) goto loc_821C0D54;
	// bl 0x822a13a0
	ctx.lr = 0x821C0D40;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-32528
	ctx.r4.s64 = ctx.r11.s64 + -32528;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x821C0D54;
	sub_82280900(ctx, base);
loc_821C0D54:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x82280900
	ctx.lr = 0x821C0D64;
	sub_82280900(ctx, base);
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

PPC_WEAK_FUNC(sub_821C0CD8) {
	__imp__sub_821C0CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C0D7C) {
	__imp__sub_821C0D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8222f930
	sub_8222F930(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0D80) {
	__imp__sub_821C0D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C0D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821C0D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r7,r9,1272
	ctx.r7.s64 = ctx.r9.s64 + 1272;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// lhz r29,126(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// bne cr6,0x821c0e08
	if (!ctx.cr6.eq) goto loc_821C0E08;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r8,-32308
	ctx.r4.s64 = ctx.r8.s64 + -32308;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,5804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82280900
	ctx.lr = 0x821C0E00;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C0E08:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x821c1158
	if (ctx.cr6.gt) goto loc_821C1158;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3628
	ctx.r12.s64 = ctx.r12.s64 + 3628;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821C0E6C;
	case 1:
		goto loc_821C0E80;
	case 2:
		goto loc_821C0E98;
	case 3:
		goto loc_821C0EAC;
	case 4:
		goto loc_821C0EDC;
	case 5:
		goto loc_821C1158;
	case 6:
		goto loc_821C0F14;
	case 7:
		goto loc_821C0F60;
	case 8:
		goto loc_821C0FD4;
	case 9:
		goto loc_821C1014;
	case 10:
		goto loc_821C105C;
	case 11:
		goto loc_821C108C;
	case 12:
		goto loc_821C10E0;
	case 13:
		goto loc_821C110C;
	case 14:
		goto loc_821C1158;
	case 15:
		goto loc_821C112C;
	default:
		return;
	}
	// lwz r16,3692(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3692);
	// lwz r16,3712(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3712);
	// lwz r16,3736(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3736);
	// lwz r16,3756(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3756);
	// lwz r16,3804(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3804);
	// lwz r16,4440(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4440);
	// lwz r16,3860(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3860);
	// lwz r16,3936(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3936);
	// lwz r16,4052(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4052);
	// lwz r16,4116(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4116);
	// lwz r16,4188(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4188);
	// lwz r16,4236(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4236);
	// lwz r16,4320(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4320);
	// lwz r16,4364(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4364);
	// lwz r16,4440(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4440);
	// lwz r16,4396(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
loc_821C0E6C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-32328
	ctx.r4.s64 = ctx.r9.s64 + -32328;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821c1148
	goto loc_821C1148;
loc_821C0E80:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-32328
	ctx.r4.s64 = ctx.r9.s64 + -32328;
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// b 0x821c1148
	goto loc_821C1148;
loc_821C0E98:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-32328
	ctx.r4.s64 = ctx.r9.s64 + -32328;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821c1148
	goto loc_821C1148;
loc_821C0EAC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r9,-32308
	ctx.r4.s64 = ctx.r9.s64 + -32308;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82280900
	ctx.lr = 0x821C0ED4;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C0EDC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0f00
	if (ctx.cr6.eq) goto loc_821C0F00;
	// bl 0x822a13a0
	ctx.lr = 0x821C0EF0;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// b 0x821c1148
	goto loc_821C1148;
loc_821C0F00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-32360
	ctx.r7.s64 = ctx.r11.s64 + -32360;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// b 0x821c1148
	goto loc_821C1148;
loc_821C0F14:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,-32384
	ctx.r4.s64 = ctx.r9.s64 + -32384;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfd f3,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82280900
	ctx.lr = 0x821C0F58;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C0F60:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c106c
	if (ctx.cr6.eq) goto loc_821C106C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r30,r7,r9
	ctx.r30.s32 = ctx.r7.s32 / ctx.r9.s32;
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,302(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0fa8
	if (ctx.cr6.eq) goto loc_821C0FA8;
	// bl 0x822a13a0
	ctx.lr = 0x821C0FA0;
	sub_822A13A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x821c0fb0
	goto loc_821C0FB0;
loc_821C0FA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r11,-32360
	ctx.r8.s64 = ctx.r11.s64 + -32360;
loc_821C0FB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-32420
	ctx.r4.s64 = ctx.r11.s64 + -32420;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x821C0FCC;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C0FD4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c106c
	if (ctx.cr6.eq) goto loc_821C106C;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,302(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0fa8
	if (ctx.cr6.eq) goto loc_821C0FA8;
	// bl 0x822a13a0
	ctx.lr = 0x821C100C;
	sub_822A13A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x821c0fb0
	goto loc_821C0FB0;
loc_821C1014:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821c106c
	if (ctx.cr6.eq) goto loc_821C106C;
loc_821C1024:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r30,126(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,302(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0fa8
	if (ctx.cr6.eq) goto loc_821C0FA8;
	// bl 0x822a13a0
	ctx.lr = 0x821C1054;
	sub_822A13A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x821c0fb0
	goto loc_821C0FB0;
loc_821C105C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821c1024
	if (!ctx.cr6.eq) goto loc_821C1024;
loc_821C106C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-32444
	ctx.r4.s64 = ctx.r11.s64 + -32444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x821C1084;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C108C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c106c
	if (ctx.cr6.eq) goto loc_821C106C;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,9624
	ctx.r6.s64 = ctx.r8.s64 + 9624;
	// lwz r5,-112(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -112);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lhz r30,126(r5)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + 126);
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,302(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0fa8
	if (ctx.cr6.eq) goto loc_821C0FA8;
	// bl 0x822a13a0
	ctx.lr = 0x821C10D8;
	sub_822A13A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x821c0fb0
	goto loc_821C0FB0;
loc_821C10E0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// ori r8,r8,45016
	ctx.r8.u64 = ctx.r8.u64 | 45016;
	// addi r4,r7,-32468
	ctx.r4.s64 = ctx.r7.s64 + -32468;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,9624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9624);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r9,r8
	ctx.r7.s32 = ctx.r9.s32 / ctx.r8.s32;
	// b 0x821c1148
	goto loc_821C1148;
loc_821C110C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c106c
	if (ctx.cr6.eq) goto loc_821C106C;
	// bl 0x82234950
	ctx.lr = 0x821C1120;
	sub_82234950(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-32492
	ctx.r4.s64 = ctx.r11.s64 + -32492;
	// b 0x821c1144
	goto loc_821C1144;
loc_821C112C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8222e3b0
	ctx.lr = 0x821C1138;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x821C113C;
	sub_822A13A0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-32348
	ctx.r4.s64 = ctx.r9.s64 + -32348;
loc_821C1144:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_821C1148:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x821C1158;
	sub_82280900(ctx, base);
loc_821C1158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C0D88) {
	__imp__sub_821C0D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821C1168;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,952
	ctx.r9.s64 = ctx.r10.s64 + 952;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821c11a8
	if (!ctx.cr6.eq) goto loc_821C11A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32260
	ctx.r4.s64 = ctx.r11.s64 + -32260;
	// bl 0x82280b08
	ctx.lr = 0x821C11A0;
	sub_82280B08(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C11A8:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r9,r10,1160
	ctx.r9.s64 = ctx.r10.s64 + 1160;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821c1224
	if (!ctx.cr6.eq) goto loc_821C1224;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x821c11cc
	if (ctx.cr6.eq) goto loc_821C11CC;
loc_821C11C0:
	// bl 0x821c0c50
	ctx.lr = 0x821C11C4;
	sub_821C0C50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C11CC:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8227d380
	ctx.lr = 0x821C11DC;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823dec00
	ctx.lr = 0x821C11E4;
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
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821C1204;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r8,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r8.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C1224:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r9,r11,1000
	ctx.r9.s64 = ctx.r11.s64 + 1000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821c126c
	if (!ctx.cr6.eq) goto loc_821C126C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x821c11c0
	if (!ctx.cr6.eq) goto loc_821C11C0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8227d380
	ctx.lr = 0x821C1250;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823dec00
	ctx.lr = 0x821C1258;
	sub_823DEC00(ctx, base);
	// addi r3,r31,4948
	ctx.r3.s64 = ctx.r31.s64 + 4948;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x821ad448
	ctx.lr = 0x821C1264;
	sub_821AD448(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C126C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x821c1400
	if (ctx.cr6.gt) goto loc_821C1400;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4752
	ctx.r12.s64 = ctx.r12.s64 + 4752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821C12D4;
	case 1:
		goto loc_821C1304;
	case 2:
		goto loc_821C1334;
	case 3:
		goto loc_821C1364;
	case 4:
		goto loc_821C13F0;
	case 5:
		goto loc_821C1400;
	case 6:
		goto loc_821C1398;
	case 7:
		goto loc_821C13F0;
	case 8:
		goto loc_821C13F0;
	case 9:
		goto loc_821C13F0;
	case 10:
		goto loc_821C13F0;
	case 11:
		goto loc_821C13F0;
	case 12:
		goto loc_821C13F0;
	case 13:
		goto loc_821C13F0;
	case 14:
		goto loc_821C1400;
	case 15:
		goto loc_821C13F0;
	case 16:
		goto loc_821C13F0;
	default:
		return;
	}
	// lwz r16,4820(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4820);
	// lwz r16,4868(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4868);
	// lwz r16,4916(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4916);
	// lwz r16,4964(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4964);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5120(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5120);
	// lwz r16,5016(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5016);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5120(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5120);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
	// lwz r16,5104(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5104);
loc_821C12D4:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x821c11c0
	if (!ctx.cr6.eq) goto loc_821C11C0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8227d380
	ctx.lr = 0x821C12EC;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823deaf8
	ctx.lr = 0x821C12F4;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C1304:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x821c11c0
	if (!ctx.cr6.eq) goto loc_821C11C0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8227d380
	ctx.lr = 0x821C131C;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823deaf8
	ctx.lr = 0x821C1324;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// sthx r3,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u16);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C1334:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x821c11c0
	if (!ctx.cr6.eq) goto loc_821C11C0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8227d380
	ctx.lr = 0x821C134C;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823deaf8
	ctx.lr = 0x821C1354;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stbx r3,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C1364:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x821c11c0
	if (!ctx.cr6.eq) goto loc_821C11C0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8227d380
	ctx.lr = 0x821C137C;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823dec00
	ctx.lr = 0x821C1384;
	sub_823DEC00(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r11,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C1398:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x821c11c0
	if (!ctx.cr6.eq) goto loc_821C11C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C13A8:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 3;
	// bl 0x8227d380
	ctx.lr = 0x821C13B8;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823dec00
	ctx.lr = 0x821C13C0;
	sub_823DEC00(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// stfsx f0,r9,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x821c13a8
	if (ctx.cr6.lt) goto loc_821C13A8;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821C13F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32288
	ctx.r4.s64 = ctx.r11.s64 + -32288;
	// bl 0x82280900
	ctx.lr = 0x821C1400;
	sub_82280900(ctx, base);
loc_821C1400:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1160) {
	__imp__sub_821C1160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821C1410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,29288
	ctx.r11.s64 = ctx.r11.s64 + 29288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c1444
	if (!ctx.cr6.eq) goto loc_821C1444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0cd8
	ctx.lr = 0x821C143C;
	sub_821C0CD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C1444:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c1460
	if (!ctx.cr6.eq) goto loc_821C1460;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8222f930
	ctx.lr = 0x821C1458;
	sub_8222F930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C1460:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x821c1488
	if (!ctx.cr6.eq) goto loc_821C1488;
	// bl 0x821c0010
	ctx.lr = 0x821C1470;
	sub_821C0010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821c0d88
	ctx.lr = 0x821C1480;
	sub_821C0D88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821C1488:
	// bl 0x821c0010
	ctx.lr = 0x821C148C;
	sub_821C0010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x821c1160
	ctx.lr = 0x821C14A0;
	sub_821C1160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1408) {
	__imp__sub_821C1408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C14A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821C14B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x823deaf8
	ctx.lr = 0x821C14CC;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821c1530
	if (ctx.cr6.eq) goto loc_821C1530;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821C14E0;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c15b0
	if (ctx.cr6.eq) goto loc_821C15B0;
loc_821C14EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,126(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x821c1510
	if (ctx.cr6.eq) goto loc_821C1510;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c1408
	ctx.lr = 0x821C1510;
	sub_821C1408(ctx, base);
loc_821C1510:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821C151C;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c14ec
	if (!ctx.cr6.eq) goto loc_821C14EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1530:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x821c1598
	if (ctx.cr6.lt) goto loc_821C1598;
	// cmpwi cr6,r30,2048
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2048, ctx.xer);
	// bge cr6,0x821c1598
	if (!ctx.cr6.lt) goto loc_821C1598;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,268(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c1580
	if (!ctx.cr6.eq) goto loc_821C1580;
	// bl 0x821c0c50
	ctx.lr = 0x821C1564;
	sub_821C0C50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-32204
	ctx.r4.s64 = ctx.r11.s64 + -32204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280b08
	ctx.lr = 0x821C1578;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1580:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c1408
	ctx.lr = 0x821C1590;
	sub_821C1408(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1598:
	// bl 0x821c0c50
	ctx.lr = 0x821C159C;
	sub_821C0C50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-32240
	ctx.r4.s64 = ctx.r11.s64 + -32240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280b08
	ctx.lr = 0x821C15B0;
	sub_82280B08(ctx, base);
loc_821C15B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C14A8) {
	__imp__sub_821C14A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C15B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821C15C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821c15e0
	if (ctx.cr6.eq) goto loc_821C15E0;
	// not r26,r26
	ctx.r26.u64 = ~ctx.r26.u64;
loc_821C15E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a9b38
	ctx.lr = 0x821C15E8;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c1680
	if (ctx.cr6.eq) goto loc_821C1680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,29288
	ctx.r27.s64 = ctx.r11.s64 + 29288;
loc_821C15FC:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821c1610
	if (!ctx.cr6.eq) goto loc_821C1610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0cd8
	ctx.lr = 0x821C160C;
	sub_821C0CD8(ctx, base);
	// b 0x821c1668
	goto loc_821C1668;
loc_821C1610:
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c1628
	if (!ctx.cr6.eq) goto loc_821C1628;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222f930
	ctx.lr = 0x821C1624;
	sub_8222F930(ctx, base);
	// b 0x821c1668
	goto loc_821C1668;
loc_821C1628:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821c1650
	if (!ctx.cr6.eq) goto loc_821C1650;
	// bl 0x821c0010
	ctx.lr = 0x821C163C;
	sub_821C0010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821c0d88
	ctx.lr = 0x821C164C;
	sub_821C0D88(ctx, base);
	// b 0x821c1668
	goto loc_821C1668;
loc_821C1650:
	// bl 0x821c0010
	ctx.lr = 0x821C1654;
	sub_821C0010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x821c1160
	ctx.lr = 0x821C1668;
	sub_821C1160(ctx, base);
loc_821C1668:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821C1674;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c15fc
	if (!ctx.cr6.eq) goto loc_821C15FC;
loc_821C1680:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C15B8) {
	__imp__sub_821C15B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821C1690;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822ea248
	ctx.lr = 0x821C16B0;
	sub_822EA248(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r26,r11,302
	ctx.r26.s64 = ctx.r11.s64 + 302;
	// bl 0x822a1d50
	ctx.lr = 0x821C16D0;
	sub_822A1D50(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x821a9b38
	ctx.lr = 0x821C16E0;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c1740
	if (ctx.cr6.eq) goto loc_821C1740;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821C16F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhzx r8,r26,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x821c1728
	if (!ctx.cr6.eq) goto loc_821C1728;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c1408
	ctx.lr = 0x821C1728;
	sub_821C1408(ctx, base);
loc_821C1728:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821C1734;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c16f4
	if (!ctx.cr6.eq) goto loc_821C16F4;
loc_821C1740:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a24e0
	ctx.lr = 0x821C174C;
	sub_822A24E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1688) {
	__imp__sub_821C1688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C1754) {
	__imp__sub_821C1754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821C1760;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r10,-22504
	ctx.r11.s64 = ctx.r10.s64 + -22504;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r11,-22504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22504);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bge cr6,0x821c1794
	if (!ctx.cr6.lt) goto loc_821C1794;
	// bl 0x821c0c50
	ctx.lr = 0x821C178C;
	sub_821C0C50(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1794:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8227d380
	ctx.lr = 0x821C17A4;
	sub_8227D380(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32124
	ctx.r4.s64 = ctx.r11.s64 + -32124;
	// bl 0x822e8058
	ctx.lr = 0x821C17B4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821c1824
	if (!ctx.cr6.eq) goto loc_821C1824;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29288
	ctx.r31.s64 = ctx.r11.s64 + 29288;
loc_821C17C8:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d380
	ctx.lr = 0x821C17D8;
	sub_8227D380(ctx, base);
	// lbz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 336);
	// addi r29,r1,336
	ctx.r29.s64 = ctx.r1.s64 + 336;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x821c17f0
	if (!ctx.cr6.eq) goto loc_821C17F0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r1,337
	ctx.r29.s64 = ctx.r1.s64 + 337;
loc_821C17F0:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9a0
	ctx.lr = 0x821C17FC;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c18c8
	if (ctx.cr6.eq) goto loc_821C18C8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c14a8
	ctx.lr = 0x821C181C;
	sub_821C14A8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1824:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32132
	ctx.r4.s64 = ctx.r11.s64 + -32132;
	// bl 0x822e8058
	ctx.lr = 0x821C1834;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// bne cr6,0x821c1850
	if (!ctx.cr6.eq) goto loc_821C1850;
	// addi r11,r11,29288
	ctx.r11.s64 = ctx.r11.s64 + 29288;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// b 0x821c17c8
	goto loc_821C17C8;
loc_821C1850:
	// addi r29,r11,29288
	ctx.r29.s64 = ctx.r11.s64 + 29288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// bl 0x821c0090
	ctx.lr = 0x821C1864;
	sub_821C0090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c17c8
	if (!ctx.cr6.eq) goto loc_821C17C8;
	// addi r3,r29,2440
	ctx.r3.s64 = ctx.r29.s64 + 2440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,2440
	ctx.r30.s64 = ctx.r29.s64 + 2440;
	// bl 0x821c0090
	ctx.lr = 0x821C1880;
	sub_821C0090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c17c8
	if (!ctx.cr6.eq) goto loc_821C17C8;
	// addi r3,r29,2640
	ctx.r3.s64 = ctx.r29.s64 + 2640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,2640
	ctx.r30.s64 = ctx.r29.s64 + 2640;
	// bl 0x821c0090
	ctx.lr = 0x821C189C;
	sub_821C0090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c17c8
	if (!ctx.cr6.eq) goto loc_821C17C8;
	// bl 0x821c0c50
	ctx.lr = 0x821C18AC;
	sub_821C0C50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32168
	ctx.r4.s64 = ctx.r11.s64 + -32168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280b08
	ctx.lr = 0x821C18C0;
	sub_82280B08(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C18C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,24440
	ctx.r4.s64 = ctx.r11.s64 + 24440;
	// bl 0x822e8058
	ctx.lr = 0x821C18D8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821c1900
	if (!ctx.cr6.eq) goto loc_821C1900;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c15b8
	ctx.lr = 0x821C18F8;
	sub_821C15B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1900:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82240098
	ctx.lr = 0x821C1908;
	sub_82240098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x821c1934
	if (ctx.cr6.eq) goto loc_821C1934;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r6,r11,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c15b8
	ctx.lr = 0x821C192C;
	sub_821C15B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821C1934:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c1688
	ctx.lr = 0x821C1940;
	sub_821C1688(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1758) {
	__imp__sub_821C1758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821C1950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,29328
	ctx.r30.s64 = ctx.r11.s64 + 29328;
	// lwz r4,29328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29328);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c1994
	if (ctx.cr6.eq) goto loc_821C1994;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,20
	ctx.r29.s64 = 20;
loc_821C1970:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r5,r10,16384
	ctx.r5.u64 = ctx.r10.u64 | 16384;
	// bl 0x822a8a78
	ctx.lr = 0x821C1984;
	sub_822A8A78(ctx, base);
	// lwzu r4,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c1970
	if (!ctx.cr6.eq) goto loc_821C1970;
loc_821C1994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1948) {
	__imp__sub_821C1948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C199C) {
	__imp__sub_821C199C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C19A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,29328
	ctx.r10.s64 = ctx.r10.s64 + 29328;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c19cc
	if (ctx.cr6.eq) goto loc_821C19CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821C19CC:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8222aa38
	sub_8222AA38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C19A0) {
	__imp__sub_821C19A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C19D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,29328
	ctx.r10.s64 = ctx.r10.s64 + 29328;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1a04
	if (ctx.cr6.eq) goto loc_821C1A04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821C1A04:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C19D8) {
	__imp__sub_821C19D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C1A10) {
	__imp__sub_821C1A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C1A14) {
	__imp__sub_821C1A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,7616
	ctx.r7.s64 = ctx.r10.s64 + 7616;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_821C1A18) {
	__imp__sub_821C1A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,7616
	ctx.r7.s64 = ctx.r10.s64 + 7616;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_821C1A50) {
	__imp__sub_821C1A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C1A84) {
	__imp__sub_821C1A84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C1A88) {
	__imp__sub_821C1A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C1A8C) {
	__imp__sub_821C1A8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3668);
	// lhz r10,126(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 126);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
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
	// lwz r6,264(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 264);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821aba40
	sub_821ABA40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1A90) {
	__imp__sub_821C1A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821C1AC4) {
	__imp__sub_821C1AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1AC8) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2880);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x821c1b0c
	if (ctx.cr6.lt) goto loc_821C1B0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r11,-31412
	ctx.r4.s64 = ctx.r11.s64 + -31412;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821C1B08;
	sub_822830E8(ctx, base);
	// lwz r11,2880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2880);
loc_821C1B0C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r9,1344
	ctx.r8.s64 = ctx.r9.s64 + 1344;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,2880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2880, ctx.r10.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x8222f680
	ctx.lr = 0x821C1B4C;
	sub_8222F680(ctx, base);
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

PPC_WEAK_FUNC(sub_821C1AC8) {
	__imp__sub_821C1AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C1B64) {
	__imp__sub_821C1B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821C1B70;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de01c
	ctx.lr = 0x821C1B78;
	__savefpr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r27,r11,-6496
	ctx.r27.s64 = ctx.r11.s64 + -6496;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,-6496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6496);
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ble cr6,0x821c1c1c
	if (!ctx.cr6.gt) goto loc_821C1C1C;
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f7,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 / ctx.f8.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,2416
	ctx.r10.s64 = ctx.r10.s64 + 2416;
	// lfs f11,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f7,f9
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f5,f30,f30
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmadds f11,f6,f11,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x821c1fdc
	if (!ctx.cr6.gt) goto loc_821C1FDC;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f25,f11,f31
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// b 0x821c1c68
	goto loc_821C1C68;
loc_821C1C1C:
	// fsubs f8,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f10,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f10,f5,f10,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x821c1fdc
	if (!ctx.cr6.gt) goto loc_821C1FDC;
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,2416
	ctx.r10.s64 = ctx.r10.s64 + 2416;
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f25,f8,f31
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
loc_821C1C68:
	// fadds f26,f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f30.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f26,f25
	ctx.f9.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fmadds f6,f7,f9,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fsubs f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f8
	ctx.cr6.compare(ctx.f4.f64, ctx.f8.f64);
	// bgt cr6,0x821c1fdc
	if (ctx.cr6.gt) goto loc_821C1FDC;
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f6,f9,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f5,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f8
	ctx.cr6.compare(ctx.f3.f64, ctx.f8.f64);
	// bgt cr6,0x821c1fdc
	if (ctx.cr6.gt) goto loc_821C1FDC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,2047
	ctx.r26.s64 = 2047;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821c1cd4
	if (ctx.cr6.eq) goto loc_821C1CD4;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r26,126(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
loc_821C1CD4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,640
	ctx.r8.s64 = 41943040;
	// ori r29,r8,61585
	ctx.r29.u64 = ctx.r8.u64 | 61585;
	// lfs f27,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,14156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14156);
	ctx.f28.f64 = double(temp.f32);
	// ble cr6,0x821c1eb4
	if (!ctx.cr6.gt) goto loc_821C1EB4;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f7,f0,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f8,f6,f0,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r28,r26,16
	ctx.r28.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,2047
	ctx.r8.s64 = 2047;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f13,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f6,f7,f28,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f29.f64));
	// fsubs f5,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f29.f64));
	// fsubs f4,f6,f27
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f27.f64));
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f10,f13,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82342160
	ctx.lr = 0x821C1D6C;
	sub_82342160(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821c1fdc
	if (!ctx.cr6.eq) goto loc_821C1FDC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f30,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r8,2047
	ctx.r8.s64 = 2047;
	// fmadds f9,f30,f12,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f4,f6,f31,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82342160
	ctx.lr = 0x821C1DD4;
	sub_82342160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c1fdc
	if (!ctx.cr6.eq) goto loc_821C1FDC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_821C1DE4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r28,r26,16
	ctx.r28.u64 = ctx.r26.u32 & 0xFFFF;
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f26,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f11.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r8,2047
	ctx.r8.s64 = 2047;
	// fmadds f7,f26,f10,f8
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f4,f13,f25
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmadds f3,f4,f28,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f29.f64));
	// fsubs f2,f3,f29
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f29.f64));
	// fsubs f1,f3,f27
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f27.f64));
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fnmsubs f10,f11,f31,f6
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f6.f64)));
	// fmadds f9,f10,f26,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f5.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82342160
	ctx.lr = 0x821C1E6C;
	sub_82342160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c1fdc
	if (!ctx.cr6.eq) goto loc_821C1FDC;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821fe618
	ctx.lr = 0x821C1E94;
	sub_821FE618(ctx, base);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x821c1ec4
	if (!ctx.cr6.eq) goto loc_821C1EC4;
loc_821C1EA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de068
	ctx.lr = 0x821C1EB0;
	__restfpr_25(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821C1EB4:
	// stfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x821c1de4
	goto loc_821C1DE4;
loc_821C1EC4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82276090
	ctx.lr = 0x821C1ECC;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// bne cr6,0x821c1f64
	if (!ctx.cr6.eq) goto loc_821C1F64;
	// lfs f9,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f10,7648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7648);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f3,f8,f0,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f2,f6,f0,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f1,f4,f0,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f13,f2,f7
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fsubs f12,f1,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f9,f13,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f0,f12,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x821c1ea0
	if (ctx.cr6.lt) goto loc_821C1EA0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,7644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7644);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821c1fdc
	if (!ctx.cr6.lt) goto loc_821C1FDC;
	// lfs f0,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821c1fdc
	if (!ctx.cr6.gt) goto loc_821C1FDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de068
	ctx.lr = 0x821C1F60;
	__restfpr_25(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821C1F64:
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
	// lwz r11,272(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1fdc
	if (ctx.cr6.eq) goto loc_821C1FDC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821c1fdc
	if (ctx.cr6.eq) goto loc_821C1FDC;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r3,r6,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c1ea0
	if (!ctx.cr6.eq) goto loc_821C1EA0;
loc_821C1FDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de068
	ctx.lr = 0x821C1FEC;
	__restfpr_25(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1B68) {
	__imp__sub_821C1B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C1FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821C1FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822da650
	ctx.lr = 0x821C2018;
	sub_822DA650(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f7,f6,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f11,f7,f5,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f10,f7,f4,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f3,f2,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f8,f3,f1,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f7,f3,f0,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f2,8(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C1FF0) {
	__imp__sub_821C1FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C2098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821C20A0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x821C20BC;
	sub_82332AF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r7,2065
	ctx.r7.s64 = 2065;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82200bd0
	ctx.lr = 0x821C210C;
	sub_82200BD0(ctx, base);
	// lfs f9,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// bne cr6,0x821c2120
	if (!ctx.cr6.eq) goto loc_821C2120;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821c212c
	goto loc_821C212C;
loc_821C2120:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
loc_821C212C:
	// lwz r10,1092(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1092);
	// rlwinm r9,r11,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwz r8,1096(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1096);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f0,-31376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f7,f0,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsubs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C2098) {
	__imp__sub_821C2098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C21B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821C21B8;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,-6040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6040);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lfs f13,5812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5524);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// bl 0x823de800
	ctx.lr = 0x821C2204;
	sub_823DE800(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// lwz r6,2880(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2880);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821c2344
	if (ctx.cr6.eq) goto loc_821C2344;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r23,r11,1344
	ctx.r23.s64 = ctx.r11.s64 + 1344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
	// addi r28,r11,-31436
	ctx.r28.s64 = ctx.r11.s64 + -31436;
loc_821C2240:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x821c22e8
	if (ctx.cr6.lt) goto loc_821C22E8;
	// lfs f0,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
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
	ctx.lr = 0x821C2280;
	sub_822D4AC8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821c22e8
	if (ctx.cr6.gt) goto loc_821C22E8;
	// lfs f0,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821C22B8;
	sub_822D4AC8(ctx, base);
	// lfs f8,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f5,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f29
	ctx.cr6.compare(ctx.f3.f64, ctx.f29.f64);
	// bgt cr6,0x821c22e8
	if (ctx.cr6.gt) goto loc_821C22E8;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x821c22e8
	if (!ctx.cr6.lt) goto loc_821C22E8;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_821C22E8:
	// lwz r11,2880(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2880);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c2240
	if (ctx.cr6.lt) goto loc_821C2240;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x821c2344
	if (ctx.cr6.eq) goto loc_821C2344;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-104(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821C2344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

PPC_WEAK_FUNC(sub_821C21B0) {
	__imp__sub_821C21B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C235C) {
	__imp__sub_821C235C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C2360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f8,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f13,f12,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x821c23ac
	if (!ctx.cr6.lt) goto loc_821C23AC;
loc_821C23A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821C23AC:
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,-6496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6496);
	// lwz r9,-6064(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6064);
	// lfs f11,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f6,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmsubs f0,f6,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmsubs f13,f0,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x821c23a4
	if (ctx.cr6.lt) goto loc_821C23A4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821c2408
	if (ctx.cr6.eq) goto loc_821C2408;
	// fadds f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// b 0x821c240c
	goto loc_821C240C;
loc_821C2408:
	// fsubs f6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_821C240C:
	// fmuls f5,f6,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f0,f4,f7
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f7.f64));
	// fdivs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f5,f11,f12,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,8(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// b 0x821c1b68
	sub_821C1B68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C2360) {
	__imp__sub_821C2360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821C2454) {
	__imp__sub_821C2454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821C2458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,-6496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6496);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f13,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// fmadds f1,f8,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f10,f5,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsqrts f4,f6
	ctx.f4.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fdivs f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// fmuls f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f10,f2,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmadds f9,f11,f12,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x821c1b68
	sub_821C1B68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821C2458) {
	__imp__sub_821C2458(ctx, base);
}

