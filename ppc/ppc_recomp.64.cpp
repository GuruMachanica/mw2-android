#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822912A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822912A4) {
	__imp__sub_822912A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822912A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822912B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822913ec
	if (ctx.cr6.eq) goto loc_822913EC;
	// bl 0x8228cca8
	ctx.lr = 0x822912C4;
	sub_8228CCA8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x822912D0;
	sub_8228CCC0(ctx, base);
	// lwz r10,88(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r27,92
	ctx.r31.s64 = ctx.r27.s64 + 92;
	// addi r11,r23,8
	ctx.r11.s64 = ctx.r23.s64 + 8;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82291384
	if (!ctx.cr6.gt) goto loc_82291384;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
loc_822912F4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stb r26,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r26.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r26,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r26.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r28,r31,5
	ctx.r28.s64 = ctx.r31.s64 + 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x822efc98
	ctx.lr = 0x8229131C;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229135c
	if (ctx.cr6.eq) goto loc_8229135C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8229135c
	if (ctx.cr6.eq) goto loc_8229135C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82291368
	if (ctx.cr6.eq) goto loc_82291368;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822efc98
	ctx.lr = 0x82291348;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229135c
	if (ctx.cr6.eq) goto loc_8229135C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8229136c
	if (!ctx.cr6.eq) goto loc_8229136C;
loc_8229135C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82291368:
	// stb r26,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r26.u8);
loc_8229136C:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822912f4
	if (ctx.cr6.lt) goto loc_822912F4;
loc_82291384:
	// lwz r11,540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 540);
	// addi r31,r27,544
	ctx.r31.s64 = ctx.r27.s64 + 544;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822913e4
	if (!ctx.cr6.gt) goto loc_822913E4;
	// addi r29,r23,1124
	ctx.r29.s64 = ctx.r23.s64 + 1124;
loc_8229139C:
	// stb r26,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r26.u8);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x822efc98
	ctx.lr = 0x822913B4;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229135c
	if (ctx.cr6.eq) goto loc_8229135C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8229135c
	if (ctx.cr6.eq) goto loc_8229135C;
	// lwzu r11,32(r29)
	ea = 32 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 540);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229139c
	if (ctx.cr6.lt) goto loc_8229139C;
loc_822913E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8228fd50
	ctx.lr = 0x822913EC;
	sub_8228FD50(ctx, base);
loc_822913EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822912A8) {
	__imp__sub_822912A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822913F8) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82291478
	if (ctx.cr6.eq) goto loc_82291478;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82291478
	if (ctx.cr6.eq) goto loc_82291478;
	// bl 0x8228f488
	ctx.lr = 0x82291420;
	sub_8228F488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291490
	if (ctx.cr6.eq) goto loc_82291490;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82291490
	if (ctx.cr6.lt) goto loc_82291490;
	// bl 0x8228cf48
	ctx.lr = 0x8229143C;
	sub_8228CF48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-15924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15924);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82291490
	if (!ctx.cr6.lt) goto loc_82291490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228ffa8
	ctx.lr = 0x82291458;
	sub_8228FFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291490
	if (ctx.cr6.eq) goto loc_82291490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x8229146C;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228f348
	ctx.lr = 0x82291478;
	sub_8228F348(ctx, base);
loc_82291478:
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
loc_82291490:
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

PPC_WEAK_FUNC(sub_822913F8) {
	__imp__sub_822913F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822914A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822914B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8229156c
	if (ctx.cr6.eq) goto loc_8229156C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r28,r10,14648
	ctx.r28.s64 = ctx.r10.s64 + 14648;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291508
	if (ctx.cr6.eq) goto loc_82291508;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822914FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291554
	if (ctx.cr6.eq) goto loc_82291554;
loc_82291508:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r31.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291560
	if (ctx.cr6.eq) goto loc_82291560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82291538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82291560
	if (!ctx.cr6.eq) goto loc_82291560;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82291554
	if (!ctx.cr6.eq) goto loc_82291554;
	// stw r30,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
loc_82291554:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82291560:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
loc_8229156C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822914A8) {
	__imp__sub_822914A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82291580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// addi r29,r11,14648
	ctx.r29.s64 = ctx.r11.s64 + 14648;
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
loc_822915A8:
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822915d4
	if (ctx.cr6.eq) goto loc_822915D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822915D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822915D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822915a8
	if (!ctx.cr6.eq) goto loc_822915A8;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82291578) {
	__imp__sub_82291578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// stw r3,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82291600) {
	__imp__sub_82291600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229160C) {
	__imp__sub_8229160C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82291618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-15896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	// lwz r28,10584(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10584);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82291694
	if (ctx.cr6.eq) goto loc_82291694;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82291694
	if (!ctx.cr6.eq) goto loc_82291694;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r30,r11,-15888
	ctx.r30.s64 = ctx.r11.s64 + -15888;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8229165C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82291680
	if (!ctx.cr6.eq) goto loc_82291680;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82291680
	if (!ctx.cr6.gt) goto loc_82291680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82291578
	ctx.lr = 0x82291680;
	sub_82291578(ctx, base);
loc_82291680:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,2624
	ctx.r31.s64 = ctx.r31.s64 + 2624;
	// addi r11,r11,18432
	ctx.r11.s64 = ctx.r11.s64 + 18432;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229165c
	if (ctx.cr6.lt) goto loc_8229165C;
loc_82291694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82291610) {
	__imp__sub_82291610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229169C) {
	__imp__sub_8229169C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822916A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-15888
	ctx.r11.s64 = ctx.r11.s64 + -15888;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822916B4:
	// lwz r10,-56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822916d8
	if (!ctx.cr6.gt) goto loc_822916D8;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_822916D8:
	// lwz r10,2568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822916fc
	if (!ctx.cr6.gt) goto loc_822916FC;
	// lfs f0,2632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2620, temp.u32);
	// lfs f13,2636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2636);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2624(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2624, temp.u32);
	// lfs f12,2640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2640);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2628(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2628, temp.u32);
loc_822916FC:
	// lwz r10,5192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82291720
	if (!ctx.cr6.gt) goto loc_82291720;
	// lfs f0,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5244, temp.u32);
	// lfs f13,5260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5248(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5248, temp.u32);
	// lfs f12,5264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,5252(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5252, temp.u32);
loc_82291720:
	// lwz r10,7816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7816);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82291744
	if (!ctx.cr6.gt) goto loc_82291744;
	// lfs f0,7880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7868(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7868, temp.u32);
	// lfs f13,7884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7884);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,7872(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7872, temp.u32);
	// lfs f12,7888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7888);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,7876(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7876, temp.u32);
loc_82291744:
	// lwz r10,10440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10440);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82291768
	if (!ctx.cr6.gt) goto loc_82291768;
	// lfs f0,10504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10492, temp.u32);
	// lfs f13,10508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10508);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10496, temp.u32);
	// lfs f12,10512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10512);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,10500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10500, temp.u32);
loc_82291768:
	// lwz r10,13064(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13064);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8229178c
	if (!ctx.cr6.gt) goto loc_8229178C;
	// lfs f0,13128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,13116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13116, temp.u32);
	// lfs f13,13132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,13120(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13120, temp.u32);
	// lfs f12,13136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,13124(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13124, temp.u32);
loc_8229178C:
	// lwz r10,15688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15688);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822917b0
	if (!ctx.cr6.gt) goto loc_822917B0;
	// lfs f0,15752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,15740(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15740, temp.u32);
	// lfs f13,15756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15756);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,15744(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15744, temp.u32);
	// lfs f12,15760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15760);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,15748(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15748, temp.u32);
loc_822917B0:
	// lwz r10,18312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18312);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822917d4
	if (!ctx.cr6.gt) goto loc_822917D4;
	// lfs f0,18376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,18364(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 18364, temp.u32);
	// lfs f13,18380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18380);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,18368(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 18368, temp.u32);
	// lfs f12,18384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18384);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,18372(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 18372, temp.u32);
loc_822917D4:
	// addi r11,r11,20992
	ctx.r11.s64 = ctx.r11.s64 + 20992;
	// bdnz 0x822916b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822916B4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822916A0) {
	__imp__sub_822916A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822917E0) {
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
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-15896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229184c
	if (ctx.cr6.eq) goto loc_8229184C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8229184c
	if (!ctx.cr6.eq) goto loc_8229184C;
	// lis r31,-31918
	ctx.r31.s64 = -2091778048;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,1400
	ctx.r4.s64 = ctx.r10.s64 + 1400;
	// lwz r10,10588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10588);
	// lwz r11,10584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10584);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,10588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10588, ctx.r11.u32);
	// bl 0x82257f60
	ctx.lr = 0x82291840;
	sub_82257F60(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,10588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10588);
	// bl 0x82257698
	ctx.lr = 0x8229184C;
	sub_82257698(ctx, base);
loc_8229184C:
	// bl 0x822916a0
	ctx.lr = 0x82291850;
	sub_822916A0(ctx, base);
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

PPC_WEAK_FUNC(sub_822917E0) {
	__imp__sub_822917E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82291864) {
	__imp__sub_82291864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82291870;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de01c
	ctx.lr = 0x82291878;
	__savefpr_25(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82291888;
	sub_8228CCA8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x82291894;
	sub_8228CCC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229198c
	if (ctx.cr6.eq) goto loc_8229198C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228cce0
	ctx.lr = 0x822918A8;
	sub_8228CCE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229198c
	if (ctx.cr6.eq) goto loc_8229198C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r26,544
	ctx.r27.s64 = ctx.r26.s64 + 544;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r24,1128(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1128);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82291940
	if (ctx.cr6.eq) goto loc_82291940;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// addi r6,r10,17280
	ctx.r6.s64 = ctx.r10.s64 + 17280;
loc_822918F0:
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwzu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r5,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r4,r7,3
	ctx.r4.s64 = ctx.r7.s64 + 3;
	// rlwinm r3,r5,2,25,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r3,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lbzx r3,r7,r26
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r26.u32);
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r3,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// rlwinm r7,r3,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stwx r9,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// bdnz 0x822918f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822918F0;
loc_82291940:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f2388
	ctx.lr = 0x82291948;
	sub_822F2388(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r31,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r31.u8);
	// bl 0x821023f0
	ctx.lr = 0x82291960;
	sub_821023F0(ctx, base);
	// stb r25,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r25.u8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f23e0
	ctx.lr = 0x82291970;
	sub_822F23E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82102540
	ctx.lr = 0x82291978;
	sub_82102540(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x822919a0
	if (!ctx.cr6.eq) goto loc_822919A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822914a8
	ctx.lr = 0x8229198C;
	sub_822914A8(ctx, base);
loc_8229198C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de068
	ctx.lr = 0x8229199C;
	__restfpr_25(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_822919A0:
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r25,r26,2320
	ctx.r25.s64 = ctx.r26.s64 + 2320;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82291e40
	if (ctx.cr6.eq) goto loc_82291E40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r29,-24
	ctx.r30.s64 = ctx.r29.s64 + -24;
	// addi r28,r25,24
	ctx.r28.s64 = ctx.r25.s64 + 24;
	// lfs f26,11388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11388);
	ctx.f26.f64 = double(temp.f32);
	// addi r23,r23,1160
	ctx.r23.s64 = ctx.r23.s64 + 1160;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
loc_822919DC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82291a2c
	if (!ctx.cr6.gt) goto loc_82291A2C;
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r9.u64);
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r8.u64);
	// lfd f12,264(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f31,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fsel f30,f6,f25,f5
	ctx.f30.f64 = ctx.f6.f64 >= 0.0 ? ctx.f25.f64 : ctx.f5.f64;
	// b 0x82291a30
	goto loc_82291A30;
loc_82291A2C:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82291A30:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r21,4(r27)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8228e9c8
	ctx.lr = 0x82291A40;
	sub_8228E9C8(ctx, base);
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
	// rotlwi r11,r21,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r21.u32, 5);
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r8,r31,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r3,r8
	ctx.r31.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lbzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// rotlwi r11,r7,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f29,f0,f9
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fadds f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f7,f6,f4
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f6,f5,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fsubs f0,f29,f1
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f11,f9,f3
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fsubs f12,f3,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fsubs f9,f31,f8
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f8,f31,f7
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f7.f64));
	// stfs f8,224(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f7,f29,f1
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fsubs f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// stfs f6,240(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmadds f1,f5,f10,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fnmadds f11,f9,f4,f1
	ctx.f11.f64 = double(float(-(ctx.f9.f64 * ctx.f4.f64 + ctx.f1.f64)));
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f3,f12,f10,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fnmadds f2,f9,f8,f3
	ctx.f2.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 + ctx.f3.f64)));
	// stfs f2,248(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f9,f13,f1,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fnmadds f8,f12,f0,f9
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64)));
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f0,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmuls f7,f6,f3
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fadds f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f0,f9,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fsubs f8,f31,f3
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f10,f31,f4
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f7,f31,f2
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f5,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,200(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,204(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x82291C10;
	sub_822D60B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d9618
	ctx.lr = 0x82291C1C;
	sub_822D9618(ctx, base);
	// lfs f0,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// fmr f27,f12
	ctx.f27.f64 = ctx.f12.f64;
	// fmadds f2,f12,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f1,f13,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82291c88
	if (!ctx.cr6.gt) goto loc_82291C88;
	// lfs f13,-8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82291d14
	goto loc_82291D14;
loc_82291C88:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmadds f2,f8,f30,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f0.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f1,f6,f30,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f13.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f4,f30,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f3,f30,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822da9b0
	ctx.lr = 0x82291CE0;
	sub_822DA9B0(ctx, base);
	// lfs f12,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// lfs f9,-16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f28
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// fsubs f7,f9,f27
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f10,f30,f29
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f29.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f5,f8,f30,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f28.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f4,f7,f30,f27
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f27.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82291D14:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f9,f8,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f3,f0,f7,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fnmsubs f2,f5,f6,f3
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f6.f64 - ctx.f3.f64)));
	// stfs f2,40(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f6,f0,f9,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f5,f8,f12,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fnmsubs f4,f7,f1,f5
	ctx.f4.f64 = double(float(-(ctx.f7.f64 * ctx.f1.f64 - ctx.f5.f64)));
	// stfs f4,44(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f8,f13,f9,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f7,f3,f2,f8
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fnmsubs f6,f11,f10,f7
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f7.f64)));
	// stfs f6,48(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmsubs f12,f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f13.f64));
	// fnmsubs f11,f5,f4,f12
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - ctx.f12.f64)));
	// fnmsubs f10,f2,f3,f11
	ctx.f10.f64 = double(float(-(ctx.f2.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// stfs f10,52(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// bl 0x822d6a38
	ctx.lr = 0x82291DD8;
	sub_822D6A38(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d7ac8
	ctx.lr = 0x82291DE4;
	sub_822D7AC8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d4c28
	ctx.lr = 0x82291DF4;
	sub_822D4C28(ctx, base);
	// lfs f9,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f3,28(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// lfs f5,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfsu f1,32(r30)
	ea = 32 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bne 0x822919dc
	if (!ctx.cr0.eq) goto loc_822919DC;
loc_82291E40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de068
	ctx.lr = 0x82291E50;
	__restfpr_25(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82291868) {
	__imp__sub_82291868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82291E54) {
	__imp__sub_82291E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82291E60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82291e84
	if (ctx.cr6.lt) goto loc_82291E84;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82291e88
	if (!ctx.cr6.gt) goto loc_82291E88;
loc_82291E84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82291E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82291ea0
	if (!ctx.cr6.eq) goto loc_82291EA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82291EA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82291EA8;
	sub_8228CCA8(ctx, base);
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82291f40
	if (!ctx.cr6.gt) goto loc_82291F40;
	// addi r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 + 52;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r31,r25,24
	ctx.r31.s64 = ctx.r25.s64 + 24;
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// addi r26,r11,14632
	ctx.r26.s64 = ctx.r11.s64 + 14632;
loc_82291ED0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r31,-24
	ctx.r5.s64 = ctx.r31.s64 + -24;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82257720
	ctx.lr = 0x82291EE4;
	sub_82257720(ctx, base);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82291f04
	if (ctx.cr6.eq) goto loc_82291F04;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228ec88
	ctx.lr = 0x82291F00;
	sub_8228EC88(ctx, base);
	// b 0x82291f24
	goto loc_82291F24;
loc_82291F04:
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
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82291F24:
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82291ed0
	if (ctx.cr6.lt) goto loc_82291ED0;
loc_82291F40:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82291868
	ctx.lr = 0x82291F4C;
	sub_82291868(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82291E58) {
	__imp__sub_82291E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82291F54) {
	__imp__sub_82291F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82291F60;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82291F70;
	sub_8228CCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x82291F7C;
	sub_8228CCC0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228cce0
	ctx.lr = 0x82291F88;
	sub_8228CCE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82292298
	if (ctx.cr6.eq) goto loc_82292298;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82292298
	if (ctx.cr6.eq) goto loc_82292298;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292298
	if (ctx.cr6.eq) goto loc_82292298;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r26,88(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r25,r29,92
	ctx.r25.s64 = ctx.r29.s64 + 92;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// beq cr6,0x82292004
	if (ctx.cr6.eq) goto loc_82292004;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r8,r25,-28
	ctx.r8.s64 = ctx.r25.s64 + -28;
	// addi r7,r11,17280
	ctx.r7.s64 = ctx.r11.s64 + 17280;
loc_82291FE0:
	// lbzu r11,32(r8)
	ea = 32 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// bdnz 0x82291fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82291FE0;
loc_82292004:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822f2388
	ctx.lr = 0x8229200C;
	sub_822F2388(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r31,16(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// stb r28,16(r27)
	PPC_STORE_U8(ctx.r27.u32 + 16, ctx.r28.u8);
	// bl 0x821023f0
	ctx.lr = 0x82292024;
	sub_821023F0(ctx, base);
	// stb r31,16(r27)
	PPC_STORE_U8(ctx.r27.u32 + 16, ctx.r31.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822f23e0
	ctx.lr = 0x82292034;
	sub_822F23E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82102540
	ctx.lr = 0x8229203C;
	sub_82102540(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82292298
	if (ctx.cr6.eq) goto loc_82292298;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// ori r7,r7,2168
	ctx.r7.u64 = ctx.r7.u64 | 2168;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x8229220c
	if (ctx.cr6.lt) goto loc_8229220C;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82292090:
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f10,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// lfs f7,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f4,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,32(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lbz r5,36(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// rotlwi r9,r5,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f11,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,56(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f8,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,60(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f5,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,64(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lbz r4,68(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 68);
	// rotlwi r9,r4,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,104(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f1,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,108(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,88(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,92(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f6,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,96(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lbz r3,100(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 100);
	// rotlwi r9,r3,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 5);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,136(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,140(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,144(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,120(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,124(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f7,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfsu f5,128(r11)
	ea = 128 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82292090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82292090;
loc_8229220C:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8229228c
	if (!ctx.cr6.lt) goto loc_8229228C;
	// subf r11,r28,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r28.s64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r30,-24
	ctx.r10.s64 = ctx.r30.s64 + -24;
	// addi r8,r8,-28
	ctx.r8.s64 = ctx.r8.s64 + -28;
	// addi r7,r30,-32
	ctx.r7.s64 = ctx.r30.s64 + -32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229222C:
	// lbzu r11,32(r8)
	ea = 32 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfsu f8,32(r7)
	ea = 32 + ctx.r7.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,28(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfsu f2,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8229222c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229222C;
loc_8229228C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82292298:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822914a8
	ctx.lr = 0x822922A4;
	sub_822914A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82291F58) {
	__imp__sub_82291F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822922B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822922B8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,92
	ctx.r29.s64 = ctx.r3.s64 + 92;
	// bl 0x8228cca8
	ctx.lr = 0x822922D0;
	sub_8228CCA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,88(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x8229235c
	if (!ctx.cr6.gt) goto loc_8229235C;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_822922F4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82292344
	if (ctx.cr6.eq) goto loc_82292344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82255660
	ctx.lr = 0x82292310;
	sub_82255660(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f5,f7,f0,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82292344:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822922f4
	if (ctx.cr6.lt) goto loc_822922F4;
loc_8229235C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,24288(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24288);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82292384
	if (ctx.cr6.gt) goto loc_82292384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822914a8
	ctx.lr = 0x82292378;
	sub_822914A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82292384:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822922B0) {
	__imp__sub_822922B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822923C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822923C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822922b0
	ctx.lr = 0x822923D8;
	sub_822922B0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82292430
	if (!ctx.cr6.gt) goto loc_82292430;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82292408:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229241c
	if (ctx.cr6.eq) goto loc_8229241C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82258168
	ctx.lr = 0x8229241C;
	sub_82258168(ctx, base);
loc_8229241C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82292408
	if (ctx.cr6.lt) goto loc_82292408;
loc_82292430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822923C0) {
	__imp__sub_822923C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82292440;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de00c
	ctx.lr = 0x82292448;
	__savefpr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f22,f3
	ctx.f22.f64 = ctx.f3.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x82292780
	if (ctx.cr6.lt) goto loc_82292780;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f23,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f1,f23
	ctx.cr6.compare(ctx.f1.f64, ctx.f23.f64);
	// blt cr6,0x82292780
	if (ctx.cr6.lt) goto loc_82292780;
	// fcmpu cr6,f2,f23
	ctx.cr6.compare(ctx.f2.f64, ctx.f23.f64);
	// beq cr6,0x82292780
	if (ctx.cr6.eq) goto loc_82292780;
	// bl 0x82141df8
	ctx.lr = 0x82292490;
	sub_82141DF8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82292780
	if (!ctx.cr6.eq) goto loc_82292780;
	// fmuls f21,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f29,f30,f30
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmr f24,f23
	ctx.f24.f64 = ctx.f23.f64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f29,f21
	ctx.cr6.compare(ctx.f29.f64, ctx.f21.f64);
	// ble cr6,0x822924bc
	if (!ctx.cr6.gt) goto loc_822924BC;
	// fsubs f0,f29,f21
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f21.f64));
	// fdivs f24,f31,f0
	ctx.f24.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_822924BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822924d8
	if (ctx.cr6.eq) goto loc_822924D8;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lwz r11,10416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10416);
	// lwz r10,-15916(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15916);
	// b 0x822924e8
	goto loc_822924E8;
loc_822924D8:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lwz r11,2556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2556);
	// lwz r10,2552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
loc_822924E8:
	// lfs f26,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lfs f25,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,-15888
	ctx.r24.s64 = ctx.r11.s64 + -15888;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r24,88
	ctx.r30.s64 = ctx.r24.s64 + 88;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f30,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r11,-5928
	ctx.r27.s64 = ctx.r11.s64 + -5928;
loc_82292510:
	// lwz r11,-88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// addi r31,r30,-88
	ctx.r31.s64 = ctx.r30.s64 + -88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229276c
	if (!ctx.cr6.gt) goto loc_8229276C;
	// lwz r11,-52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -52);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8229276c
	if (ctx.cr6.lt) goto loc_8229276C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x82292534;
	sub_8228E9C8(ctx, base);
	// clrlwi r25,r22,24
	ctx.r25.u64 = ctx.r22.u32 & 0xFF;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82292564
	if (ctx.cr6.eq) goto loc_82292564;
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f13,f23
	ctx.f13.f64 = ctx.f23.f64;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// b 0x82292578
	goto loc_82292578;
loc_82292564:
	// lfs f10,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
loc_82292578:
	// fmuls f12,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bge cr6,0x8229276c
	if (!ctx.cr6.lt) goto loc_8229276C;
	// lwz r11,-52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -52);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822925b0
	if (!ctx.cr6.eq) goto loc_822925B0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822914a8
	ctx.lr = 0x822925A4;
	sub_822914A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229276c
	if (ctx.cr6.eq) goto loc_8229276C;
loc_822925B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,-48(r30)
	PPC_STORE_U32(ctx.r30.u32 + -48, ctx.r23.u32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f31,f12
	ctx.f27.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// ble cr6,0x8229276c
	if (!ctx.cr6.gt) goto loc_8229276C;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
loc_822925E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f28,f22
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f22.f64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82292758
	if (ctx.cr6.eq) goto loc_82292758;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82255660
	ctx.lr = 0x822925F8;
	sub_82255660(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d9488
	ctx.lr = 0x82292604;
	sub_822D9488(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d9488
	ctx.lr = 0x8229261C;
	sub_822D9488(ctx, base);
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d9488
	ctx.lr = 0x82292634;
	sub_822D9488(ctx, base);
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f1,f10
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f7,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f5,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f11,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fadds f13,f4,f9
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x82292758
	if (!ctx.cr6.lt) goto loc_82292758;
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// ble cr6,0x8229268c
	if (!ctx.cr6.gt) goto loc_8229268C;
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fmuls f8,f13,f24
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fmuls f28,f8,f22
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f22.f64));
loc_8229268C:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bne cr6,0x822926f0
	if (!ctx.cr6.eq) goto loc_822926F0;
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bne cr6,0x822926f0
	if (!ctx.cr6.eq) goto loc_822926F0;
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bne cr6,0x822926f0
	if (!ctx.cr6.eq) goto loc_822926F0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822926c8
	if (ctx.cr6.eq) goto loc_822926C8;
	// fmr f11,f23
	ctx.f11.f64 = ctx.f23.f64;
loc_822926C8:
	// fmadds f13,f11,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fadds f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f31,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// b 0x822926f8
	goto loc_822926F8;
loc_822926F0:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_822926F8:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// fadds f10,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmuls f9,f28,f27
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f27.f64));
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmadds f8,f0,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f7,f9,f25
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// fmadds f6,f10,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f3,f4,f31,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f5.f64;
	// fdivs f2,f31,f3
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f3.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82255708
	ctx.lr = 0x82292758;
	sub_82255708(ctx, base);
loc_82292758:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822925e0
	if (ctx.cr6.lt) goto loc_822925E0;
loc_8229276C:
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// addi r30,r30,2624
	ctx.r30.s64 = ctx.r30.s64 + 2624;
	// addi r11,r11,18520
	ctx.r11.s64 = ctx.r11.s64 + 18520;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82292510
	if (ctx.cr6.lt) goto loc_82292510;
loc_82292780:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de058
	ctx.lr = 0x8229278C;
	__restfpr_21(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292438) {
	__imp__sub_82292438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82292798;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x822927A0;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x82141df8
	ctx.lr = 0x822927C0;
	sub_82141DF8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82292884
	if (!ctx.cr6.eq) goto loc_82292884;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82292884
	if (ctx.cr6.eq) goto loc_82292884;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// fmuls f31,f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r30,r11,-15888
	ctx.r30.s64 = ctx.r11.s64 + -15888;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822927E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82292848
	if (!ctx.cr6.gt) goto loc_82292848;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82292848
	if (ctx.cr6.lt) goto loc_82292848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x82292808;
	sub_8228E9C8(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// bge cr6,0x82292848
	if (!ctx.cr6.lt) goto loc_82292848;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82292848
	if (!ctx.cr6.eq) goto loc_82292848;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822914a8
	ctx.lr = 0x82292848;
	sub_822914A8(ctx, base);
loc_82292848:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,2624
	ctx.r31.s64 = ctx.r31.s64 + 2624;
	// addi r11,r11,18432
	ctx.r11.s64 = ctx.r11.s64 + 18432;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822927e8
	if (ctx.cr6.lt) goto loc_822927E8;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,-15940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15940);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f3,f0,f29
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82258078
	ctx.lr = 0x82292884;
	sub_82258078(ctx, base);
loc_82292884:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x82292890;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292790) {
	__imp__sub_82292790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82292894) {
	__imp__sub_82292894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822928A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228ffa8
	ctx.lr = 0x822928AC;
	sub_8228FFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822928d0
	if (!ctx.cr6.eq) goto loc_822928D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822914a8
	ctx.lr = 0x822928C4;
	sub_822914A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822928D0:
	// bl 0x8228e9c8
	ctx.lr = 0x822928D4;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228f348
	ctx.lr = 0x822928E0;
	sub_8228F348(ctx, base);
	// lwz r11,2608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2608);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822928f8
	if (ctx.cr6.eq) goto loc_822928F8;
	// bl 0x82290b68
	ctx.lr = 0x822928F4;
	sub_82290B68(ctx, base);
	// b 0x822928fc
	goto loc_822928FC;
loc_822928F8:
	// bl 0x822908c8
	ctx.lr = 0x822928FC;
	sub_822908C8(ctx, base);
loc_822928FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82290da8
	ctx.lr = 0x82292904;
	sub_82290DA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228cce0
	ctx.lr = 0x82292910;
	sub_8228CCE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x8229291C;
	sub_8228E9C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f8,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x8228e9c8
	ctx.lr = 0x82292958;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291868
	ctx.lr = 0x82292964;
	sub_82291868(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229298c
	if (ctx.cr6.eq) goto loc_8229298C;
	// bl 0x822923c0
	ctx.lr = 0x82292978;
	sub_822923C0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// bne cr6,0x82292990
	if (!ctx.cr6.eq) goto loc_82292990;
loc_8229298C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82292990:
	// bl 0x822914a8
	ctx.lr = 0x82292994;
	sub_822914A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292898) {
	__imp__sub_82292898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822929A0) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// bge cr6,0x822929f0
	if (!ctx.cr6.lt) goto loc_822929F0;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 844, ctx.r10.u32);
	// bl 0x8228e9c8
	ctx.lr = 0x822929D0;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291f58
	ctx.lr = 0x822929DC;
	sub_82291F58(ctx, base);
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
loc_822929F0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// stw r9,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r9.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x8228e9c8
	ctx.lr = 0x82292A04;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291f58
	ctx.lr = 0x82292A10;
	sub_82291F58(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82292a28
	if (ctx.cr6.eq) goto loc_82292A28;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822914a8
	ctx.lr = 0x82292A28;
	sub_822914A8(ctx, base);
loc_82292A28:
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

PPC_WEAK_FUNC(sub_822929A0) {
	__imp__sub_822929A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82292A3C) {
	__imp__sub_82292A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292A40) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82292a6c
	if (ctx.cr6.lt) goto loc_82292A6C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82292a70
	if (!ctx.cr6.gt) goto loc_82292A70;
loc_82292A6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82292A70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292a90
	if (ctx.cr6.eq) goto loc_82292A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x82292A84;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291e58
	ctx.lr = 0x82292A90;
	sub_82291E58(ctx, base);
loc_82292A90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228fc80
	ctx.lr = 0x82292A98;
	sub_8228FC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228fcf8
	ctx.lr = 0x82292AA0;
	sub_8228FCF8(ctx, base);
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

PPC_WEAK_FUNC(sub_82292A40) {
	__imp__sub_82292A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292AB8) {
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
	// bl 0x8228cf48
	ctx.lr = 0x82292AD8;
	sub_8228CF48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-15924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15924);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82292b0c
	if (ctx.cr6.lt) goto loc_82292B0C;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// beq cr6,0x82292b00
	if (ctx.cr6.eq) goto loc_82292B00;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82292B00:
	// bl 0x822914a8
	ctx.lr = 0x82292B04;
	sub_822914A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82292b10
	goto loc_82292B10;
loc_82292B0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82292B10:
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

PPC_WEAK_FUNC(sub_82292AB8) {
	__imp__sub_82292AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292B28) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82292b50
	if (!ctx.cr6.gt) goto loc_82292B50;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82292b68
	goto loc_82292B68;
loc_82292B50:
	// bl 0x8228f488
	ctx.lr = 0x82292B54;
	sub_8228F488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292b6c
	if (ctx.cr6.eq) goto loc_82292B6C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82292B68:
	// bl 0x822914a8
	ctx.lr = 0x82292B6C;
	sub_822914A8(ctx, base);
loc_82292B6C:
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

PPC_WEAK_FUNC(sub_82292B28) {
	__imp__sub_82292B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292B80) {
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
	// bl 0x8228e9c8
	ctx.lr = 0x82292B98;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291e58
	ctx.lr = 0x82292BA4;
	sub_82291E58(ctx, base);
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

PPC_WEAK_FUNC(sub_82292B80) {
	__imp__sub_82292B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292BB8) {
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
	// bl 0x82291170
	ctx.lr = 0x82292BD0;
	sub_82291170(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292bec
	if (ctx.cr6.eq) goto loc_82292BEC;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822914a8
	ctx.lr = 0x82292BE8;
	sub_822914A8(ctx, base);
	// b 0x82292c14
	goto loc_82292C14;
loc_82292BEC:
	// bl 0x822907d0
	ctx.lr = 0x82292BF0;
	sub_822907D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x82292BF8;
	sub_8228E9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291e58
	ctx.lr = 0x82292C04;
	sub_82291E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82290fa0
	ctx.lr = 0x82292C0C;
	sub_82290FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822923c0
	ctx.lr = 0x82292C14;
	sub_822923C0(ctx, base);
loc_82292C14:
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f8,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,84(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
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

PPC_WEAK_FUNC(sub_82292BB8) {
	__imp__sub_82292BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// addi r10,r11,10600
	ctx.r10.s64 = ctx.r11.s64 + 10600;
	// stw r3,520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 520, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82292C58) {
	__imp__sub_82292C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292C68) {
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
	// bl 0x822e6680
	ctx.lr = 0x82292C84;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82292C8C;
	sub_822E5FB0(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-29844
	ctx.r4.s64 = ctx.r10.s64 + -29844;
	// lwz r11,10600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10600);
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82292CA8;
	sub_8229E338(ctx, base);
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

PPC_WEAK_FUNC(sub_82292C68) {
	__imp__sub_82292C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82292CC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,10600
	ctx.r28.s64 = ctx.r11.s64 + 10600;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x822e6d78
	ctx.lr = 0x82292CE0;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292da8
	if (ctx.cr6.eq) goto loc_82292DA8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r26,r9,-29844
	ctx.r26.s64 = ctx.r9.s64 + -29844;
	// addi r25,r10,20568
	ctx.r25.s64 = ctx.r10.s64 + 20568;
	// addi r24,r11,14720
	ctx.r24.s64 = ctx.r11.s64 + 14720;
loc_82292D08:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82292D10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82292D1C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82292d34
	if (ctx.cr6.eq) goto loc_82292D34;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82292d10
	if (ctx.cr6.lt) goto loc_82292D10;
loc_82292D34:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x82292d70
	if (ctx.cr6.gt) goto loc_82292D70;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82292d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82292D58;
	// bdzf 4*cr6+eq,0x82292d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82292D60;
	// bne cr6,0x82292d68
	if (!ctx.cr6.eq) goto loc_82292D68;
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x82292d90
	goto loc_82292D90;
loc_82292D58:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x82292d90
	goto loc_82292D90;
loc_82292D60:
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x82292d90
	goto loc_82292D90;
loc_82292D68:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x82292d90
	goto loc_82292D90;
loc_82292D70:
	// bl 0x822e6680
	ctx.lr = 0x82292D74;
	sub_822E6680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82292D7C;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82292D90;
	sub_8229E338(ctx, base);
loc_82292D90:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x822e6d78
	ctx.lr = 0x82292D98;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82292d08
	if (!ctx.cr6.eq) goto loc_82292D08;
loc_82292DA8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292CC0) {
	__imp__sub_82292CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82292DB4) {
	__imp__sub_82292DB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82292DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822a3628
	ctx.lr = 0x82292DD8;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82292e1c
	if (!ctx.cr6.eq) goto loc_82292E1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a67b8
	ctx.lr = 0x82292DF0;
	sub_822A67B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3878
	ctx.lr = 0x82292E14;
	sub_822A3878(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82292E1C:
	// bl 0x822a38e0
	ctx.lr = 0x82292E20;
	sub_822A38E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292DB8) {
	__imp__sub_82292DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82292E34) {
	__imp__sub_82292E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// addi r10,r11,11128
	ctx.r10.s64 = ctx.r11.s64 + 11128;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82292e5c
	if (!ctx.cr6.eq) goto loc_82292E5C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,20592
	ctx.r4.s64 = ctx.r11.s64 + 20592;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
loc_82292E5C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82292db8
	sub_82292DB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292E38) {
	__imp__sub_82292E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82292E64) {
	__imp__sub_82292E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82292E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82292E70;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r5,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r5.u8);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// stb r6,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r6.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r31,r11,10600
	ctx.r31.s64 = ctx.r11.s64 + 10600;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x822e6d10
	ctx.lr = 0x82292EB0;
	sub_822E6D10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293240
	if (ctx.cr6.eq) goto loc_82293240;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r29,r11,-29844
	ctx.r29.s64 = ctx.r11.s64 + -29844;
	// addi r22,r10,20860
	ctx.r22.s64 = ctx.r10.s64 + 20860;
	// addi r21,r9,20820
	ctx.r21.s64 = ctx.r9.s64 + 20820;
	// addi r20,r8,20792
	ctx.r20.s64 = ctx.r8.s64 + 20792;
	// addi r19,r7,20736
	ctx.r19.s64 = ctx.r7.s64 + 20736;
	// addi r25,r6,20724
	ctx.r25.s64 = ctx.r6.s64 + 20724;
	// addi r18,r5,20688
	ctx.r18.s64 = ctx.r5.s64 + 20688;
	// addi r17,r4,20668
	ctx.r17.s64 = ctx.r4.s64 + 20668;
loc_82292F00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229ce30
	ctx.lr = 0x82292F08;
	sub_8229CE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229308c
	if (ctx.cr6.eq) goto loc_8229308C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292f2c
	if (ctx.cr6.eq) goto loc_82292F2C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a6a50
	ctx.lr = 0x82292F2C;
	sub_822A6A50(ctx, base);
loc_82292F2C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1e20
	ctx.lr = 0x82292F3C;
	sub_822A1E20(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822a3628
	ctx.lr = 0x82292F4C;
	sub_822A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292f74
	if (ctx.cr6.eq) goto loc_82292F74;
	// bl 0x822e6680
	ctx.lr = 0x82292F58;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82292F60;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82292F74;
	sub_8229E338(ctx, base);
loc_82292F74:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a6760
	ctx.lr = 0x82292F80;
	sub_822A6760(ctx, base);
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82292fb4
	if (!ctx.cr6.eq) goto loc_82292FB4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822a3628
	ctx.lr = 0x82292F9C;
	sub_822A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292fb4
	if (!ctx.cr6.eq) goto loc_82292FB4;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82292fb8
	if (ctx.cr6.eq) goto loc_82292FB8;
loc_82292FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82292FB8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822e6d78
	ctx.lr = 0x82292FC8;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293228
	if (ctx.cr6.eq) goto loc_82293228;
	// bl 0x8229ce30
	ctx.lr = 0x82292FDC;
	sub_8229CE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293008
	if (ctx.cr6.eq) goto loc_82293008;
	// bl 0x822e6680
	ctx.lr = 0x82292FEC;
	sub_822E6680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82292FF4;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82293008;
	sub_8229E338(ctx, base);
loc_82293008:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82293020
	if (!ctx.cr6.eq) goto loc_82293020;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293040
	if (ctx.cr6.eq) goto loc_82293040;
loc_82293020:
	// bl 0x822e6680
	ctx.lr = 0x82293024;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x8229302C;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82293040;
	sub_8229E338(ctx, base);
loc_82293040:
	// bl 0x82292cc0
	ctx.lr = 0x82293044;
	sub_82292CC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e6d10
	ctx.lr = 0x82293050;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// bne cr6,0x8229306c
	if (!ctx.cr6.eq) goto loc_8229306C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229308c
	if (ctx.cr6.eq) goto loc_8229308C;
loc_8229306C:
	// bl 0x822e6680
	ctx.lr = 0x82293070;
	sub_822E6680(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82293078;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r14
	ctx.r3.s64 = ctx.r14.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x8229308C;
	sub_8229E338(ctx, base);
loc_8229308C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x82293200
	if (!ctx.cr6.eq) goto loc_82293200;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822930c8
	if (ctx.cr6.eq) goto loc_822930C8;
	// bl 0x822e6680
	ctx.lr = 0x822930AC;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x822930B4;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x822930C8;
	sub_8229E338(ctx, base);
loc_822930C8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e6d78
	ctx.lr = 0x822930D0;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822930fc
	if (ctx.cr6.eq) goto loc_822930FC;
	// bl 0x822e6680
	ctx.lr = 0x822930E0;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x822930E8;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x822930FC;
	sub_8229E338(ctx, base);
loc_822930FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82293124
	if (!ctx.cr6.eq) goto loc_82293124;
	// bl 0x822e6680
	ctx.lr = 0x82293108;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82293110;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82293124;
	sub_8229E338(ctx, base);
loc_82293124:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a3c58
	ctx.lr = 0x82293130;
	sub_822A3C58(ctx, base);
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82293160
	if (!ctx.cr6.eq) goto loc_82293160;
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293158
	if (ctx.cr6.eq) goto loc_82293158;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293160
	if (ctx.cr6.eq) goto loc_82293160;
loc_82293158:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82293164
	goto loc_82293164;
loc_82293160:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82293164:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r6,r28,31
	ctx.r6.u64 = ctx.r28.u32 & 0x1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82292e68
	ctx.lr = 0x82293180;
	sub_82292E68(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822931ac
	if (ctx.cr6.eq) goto loc_822931AC;
	// bl 0x822e6680
	ctx.lr = 0x82293190;
	sub_822E6680(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82293198;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x822931AC;
	sub_8229E338(ctx, base);
loc_822931AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822931B4;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822931e8
	if (ctx.cr6.eq) goto loc_822931E8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a6670
	ctx.lr = 0x822931CC;
	sub_822A6670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822a3878
	ctx.lr = 0x822931DC;
	sub_822A3878(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82293228
	goto loc_82293228;
loc_822931E8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a6a50
	ctx.lr = 0x822931F4;
	sub_822A6A50(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82293228
	goto loc_82293228;
loc_82293200:
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82293248
	if (ctx.cr6.eq) goto loc_82293248;
	// bl 0x822e6680
	ctx.lr = 0x8229320C;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x82293214;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82293228;
	sub_8229E338(ctx, base);
loc_82293228:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e6d10
	ctx.lr = 0x82293230;
	sub_822E6D10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82292f00
	if (!ctx.cr6.eq) goto loc_82292F00;
loc_82293240:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82293280
	goto loc_82293280;
loc_82293248:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229325c
	if (ctx.cr6.eq) goto loc_8229325C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82292c68
	ctx.lr = 0x8229325C;
	sub_82292C68(ctx, base);
loc_8229325C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e6d78
	ctx.lr = 0x82293264;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229327c
	if (ctx.cr6.eq) goto loc_8229327C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,20640
	ctx.r3.s64 = ctx.r11.s64 + 20640;
	// bl 0x82292c68
	ctx.lr = 0x8229327C;
	sub_82292C68(ctx, base);
loc_8229327C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82293280:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293298
	if (ctx.cr6.eq) goto loc_82293298;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a6a50
	ctx.lr = 0x82293298;
	sub_822A6A50(ctx, base);
loc_82293298:
	// lbz r10,279(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822932f8
	if (ctx.cr6.eq) goto loc_822932F8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822932AC;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822932f8
	if (!ctx.cr6.eq) goto loc_822932F8;
	// lbz r10,287(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 287);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822932cc
	if (ctx.cr6.eq) goto loc_822932CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,20628
	ctx.r3.s64 = ctx.r11.s64 + 20628;
	// b 0x822932d4
	goto loc_822932D4;
loc_822932CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
loc_822932D4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x822932E0;
	sub_822A1D20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6760
	ctx.lr = 0x822932F0;
	sub_822A6760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x822932F8;
	sub_822A2468(ctx, base);
loc_822932F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82292E68) {
	__imp__sub_82292E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293304) {
	__imp__sub_82293304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82293310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,20884
	ctx.r3.s64 = ctx.r11.s64 + 20884;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x8229332C;
	sub_822E5ED0(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,10600
	ctx.r31.s64 = ctx.r11.s64 + 10600;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,10600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10600, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82292e68
	ctx.lr = 0x82293354;
	sub_82292E68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82293388
	if (!ctx.cr6.eq) goto loc_82293388;
	// bl 0x822e6680
	ctx.lr = 0x82293364;
	sub_822E6680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5fb0
	ctx.lr = 0x8229336C;
	sub_822E5FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,20724
	ctx.r5.s64 = ctx.r10.s64 + 20724;
	// addi r4,r9,-29844
	ctx.r4.s64 = ctx.r9.s64 + -29844;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8229e338
	ctx.lr = 0x82293388;
	sub_8229E338(ctx, base);
loc_82293388:
	// bl 0x822e5fb0
	ctx.lr = 0x8229338C;
	sub_822E5FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293308) {
	__imp__sub_82293308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293394) {
	__imp__sub_82293394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822933A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,-28670
	ctx.r28.s64 = ctx.r28.s64 + -28670;
	// bl 0x822a3a70
	ctx.lr = 0x822933C8;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293440
	if (ctx.cr6.eq) goto loc_82293440;
	// lis r27,1
	ctx.r27.s64 = 65536;
loc_822933D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3b78
	ctx.lr = 0x822933E4;
	sub_822A3B78(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8229341c
	if (!ctx.cr6.lt) goto loc_8229341C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822933F8;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82293418
	if (!ctx.cr6.eq) goto loc_82293418;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x8229340C;
	sub_822A3CF8(ctx, base);
	// bl 0x82293398
	ctx.lr = 0x82293410;
	sub_82293398(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// b 0x8229341c
	goto loc_8229341C;
loc_82293418:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8229341C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3a88
	ctx.lr = 0x82293428;
	sub_822A3A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822933d8
	if (!ctx.cr6.eq) goto loc_822933D8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bne cr6,0x82293444
	if (!ctx.cr6.eq) goto loc_82293444;
loc_82293440:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82293444:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293398) {
	__imp__sub_82293398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229344C) {
	__imp__sub_8229344C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82293458;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x822a3628
	ctx.lr = 0x82293478;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822934fc
	if (ctx.cr6.eq) goto loc_822934FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a38e0
	ctx.lr = 0x8229348C;
	sub_822A38E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822934c8
	if (!ctx.cr6.eq) goto loc_822934C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822934A4;
	sub_822A13A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822934B0;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,20904
	ctx.r4.s64 = ctx.r11.s64 + 20904;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x822830e8
	ctx.lr = 0x822934C8;
	sub_822830E8(ctx, base);
loc_822934C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// beq cr6,0x822934f4
	if (ctx.cr6.eq) goto loc_822934F4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822934E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822934e0
	if (!ctx.cr6.eq) goto loc_822934E0;
loc_822934F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822934FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293450) {
	__imp__sub_82293450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293504) {
	__imp__sub_82293504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,11128
	ctx.r11.s64 = ctx.r11.s64 + 11128;
	// lwz r3,1040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8229352C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x8229352c
	if (!ctx.cr0.eq) goto loc_8229352C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82293508) {
	__imp__sub_82293508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11128
	ctx.r11.s64 = ctx.r11.s64 + 11128;
	// addi r9,r11,524
	ctx.r9.s64 = ctx.r11.s64 + 524;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82293548) {
	__imp__sub_82293548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82293568;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r17,r8,1
	ctx.r17.s64 = ctx.r8.s64 + 65536;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r17,r17,-28670
	ctx.r17.s64 = ctx.r17.s64 + -28670;
	// bl 0x822a3a70
	ctx.lr = 0x822935AC;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r16,1
	ctx.r16.s64 = 65536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822935ec
	if (ctx.cr6.eq) goto loc_822935EC;
loc_822935BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a3b78
	ctx.lr = 0x822935C8;
	sub_822A3B78(ctx, base);
	// cmplw cr6,r3,r16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x822935d4
	if (!ctx.cr6.lt) goto loc_822935D4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822935D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822935E0;
	sub_822A3A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822935bc
	if (!ctx.cr6.eq) goto loc_822935BC;
loc_822935EC:
	// lwz r19,332(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lhz r9,326(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 326);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// addi r21,r11,-6904
	ctx.r21.s64 = ctx.r11.s64 + -6904;
	// bne cr6,0x82293640
	if (!ctx.cr6.eq) goto loc_82293640;
	// lwz r11,72(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r11.u32);
loc_82293640:
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f27b0
	ctx.lr = 0x8229365C;
	sub_822F27B0(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// add r27,r30,r29
	ctx.r27.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82293664:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a3a70
	ctx.lr = 0x8229366C;
	sub_822A3A70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293798
	if (ctx.cr6.eq) goto loc_82293798;
loc_82293678:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a3b78
	ctx.lr = 0x82293684;
	sub_822A3B78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82293780
	if (!ctx.cr6.lt) goto loc_82293780;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822a3df8
	ctx.lr = 0x8229369C;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82293728
	if (!ctx.cr6.eq) goto loc_82293728;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822936B0;
	sub_822A3CF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3598
	ctx.lr = 0x822936BC;
	sub_822A3598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822936d8
	if (ctx.cr6.eq) goto loc_822936D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822936D0;
	sub_822A38E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822936dc
	goto loc_822936DC;
loc_822936D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822936DC:
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82293780
	if (!ctx.cr6.eq) goto loc_82293780;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822936F4;
	sub_822A13A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bl 0x82293560
	ctx.lr = 0x82293720;
	sub_82293560(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82293764
	goto loc_82293764;
loc_82293728:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82293780
	if (!ctx.cr6.eq) goto loc_82293780;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x8229374c
	if (!ctx.cr6.eq) goto loc_8229374C;
	// lwz r11,72(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r11.u32);
loc_8229374C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82293754;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f2758
	ctx.lr = 0x82293764;
	sub_822F2758(ctx, base);
loc_82293764:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82293450
	ctx.lr = 0x8229377C;
	sub_82293450(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82293780:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822a3a88
	ctx.lr = 0x8229378C;
	sub_822A3A88(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293678
	if (!ctx.cr6.eq) goto loc_82293678;
loc_82293798:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1, ctx.xer);
	// ble cr6,0x82293664
	if (!ctx.cr6.gt) goto loc_82293664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293560) {
	__imp__sub_82293560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822937B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822937B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r23,r8,1
	ctx.r23.s64 = ctx.r8.s64 + 65536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r23,r23,-28670
	ctx.r23.s64 = ctx.r23.s64 + -28670;
	// bl 0x822a3a70
	ctx.lr = 0x822937E0;
	sub_822A3A70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822938a0
	if (ctx.cr6.eq) goto loc_822938A0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r9,-5272
	ctx.r24.s64 = ctx.r9.s64 + -5272;
	// addi r26,r10,-29844
	ctx.r26.s64 = ctx.r10.s64 + -29844;
	// addi r27,r11,20952
	ctx.r27.s64 = ctx.r11.s64 + 20952;
loc_82293804:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3b78
	ctx.lr = 0x82293810;
	sub_822A3B78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a38e0
	ctx.lr = 0x82293820;
	sub_822A38E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293888
	if (ctx.cr6.eq) goto loc_82293888;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82293838;
	sub_822A13A0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82293844;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82293854;
	sub_822E84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229cdc8
	ctx.lr = 0x82293860;
	sub_8229CDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x8229387c
	if (ctx.cr6.eq) goto loc_8229387C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e448
	ctx.lr = 0x82293878;
	sub_8229E448(ctx, base);
	// b 0x82293888
	goto loc_82293888;
loc_8229387C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82293888;
	sub_822830E8(ctx, base);
loc_82293888:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a3a88
	ctx.lr = 0x82293894;
	sub_822A3A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293804
	if (!ctx.cr6.eq) goto loc_82293804;
loc_822938A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822937B0) {
	__imp__sub_822937B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822938A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822938B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822a2400
	ctx.lr = 0x822938C0;
	sub_822A2400(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,11128
	ctx.r31.s64 = ctx.r11.s64 + 11128;
	// lwz r3,11128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11128);
	// bl 0x822a3628
	ctx.lr = 0x822938D8;
	sub_822A3628(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne cr6,0x8229396c
	if (!ctx.cr6.eq) goto loc_8229396C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822a67b8
	ctx.lr = 0x822938F0;
	sub_822A67B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822a3c38
	ctx.lr = 0x82293904;
	sub_822A3C38(ctx, base);
	// addi r10,r31,1036
	ctx.r10.s64 = ctx.r31.s64 + 1036;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// rlwinm r7,r30,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,10600
	ctx.r11.s64 = ctx.r11.s64 + 10600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r28.u16);
loc_82293938:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8229393C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6760
	ctx.lr = 0x82293948;
	sub_822A6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3c58
	ctx.lr = 0x82293954;
	sub_822A3C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2468
	ctx.lr = 0x82293960;
	sub_822A2468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8229396C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x82293974;
	sub_822A3CF8(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// addi r9,r31,1036
	ctx.r9.s64 = ctx.r31.s64 + 1036;
	// addi r8,r11,10600
	ctx.r8.s64 = ctx.r11.s64 + 10600;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8229393c
	if (ctx.cr6.lt) goto loc_8229393C;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_822939B0:
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82293938
	if (ctx.cr6.eq) goto loc_82293938;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x822939b0
	if (!ctx.cr6.gt) goto loc_822939B0;
	// b 0x8229393c
	goto loc_8229393C;
}

PPC_WEAK_FUNC(sub_822938A8) {
	__imp__sub_822938A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822939D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822939D4) {
	__imp__sub_822939D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822939D8) {
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
	// bl 0x8229ce30
	ctx.lr = 0x822939F8;
	sub_8229CE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82293a18
	if (!ctx.cr6.eq) goto loc_82293A18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21000
	ctx.r4.s64 = ctx.r11.s64 + 21000;
	// bl 0x8229e338
	ctx.lr = 0x82293A14;
	sub_8229E338(ctx, base);
	// b 0x82293a34
	goto loc_82293A34;
loc_82293A18:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,11128
	ctx.r31.s64 = ctx.r11.s64 + 11128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1044
	ctx.r4.s64 = ctx.r31.s64 + 1044;
	// bl 0x822938a8
	ctx.lr = 0x82293A30;
	sub_822938A8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82293A34:
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

PPC_WEAK_FUNC(sub_822939D8) {
	__imp__sub_822939D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293A4C) {
	__imp__sub_82293A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293A50) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21020
	ctx.r4.s64 = ctx.r11.s64 + 21020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x82293A80;
	sub_823DF2B0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e258
	ctx.lr = 0x82293A94;
	sub_8229E258(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293abc
	if (ctx.cr6.eq) goto loc_82293ABC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82293308
	ctx.lr = 0x82293AA8;
	sub_82293308(ctx, base);
	// bl 0x822db348
	ctx.lr = 0x82293AAC;
	sub_822DB348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3a58
	ctx.lr = 0x82293AB4;
	sub_822A3A58(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82293ABC:
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

PPC_WEAK_FUNC(sub_82293A50) {
	__imp__sub_82293A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293AD4) {
	__imp__sub_82293AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82293AE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// add r26,r11,r3
	ctx.r26.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,10600
	ctx.r11.s64 = ctx.r10.s64 + 10600;
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lhzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// addi r31,r10,11128
	ctx.r31.s64 = ctx.r10.s64 + 11128;
	// lwz r3,11128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a3b78
	ctx.lr = 0x82293B20;
	sub_822A3B78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x82293B34;
	sub_822A3CF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a3628
	ctx.lr = 0x82293B40;
	sub_822A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293cc8
	if (!ctx.cr6.eq) goto loc_82293CC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3628
	ctx.lr = 0x82293B54;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293b78
	if (!ctx.cr6.eq) goto loc_82293B78;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82293B78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x82293B80;
	sub_822A3CF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a3148
	ctx.lr = 0x82293B88;
	sub_822A3148(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// bl 0x822a13a0
	ctx.lr = 0x82293B98;
	sub_822A13A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82293a50
	ctx.lr = 0x82293BA4;
	sub_82293A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82293bd4
	if (!ctx.cr6.eq) goto loc_82293BD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82293BB8;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// bl 0x822e84f0
	ctx.lr = 0x82293BC8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82293BD4;
	sub_822830E8(ctx, base);
loc_82293BD4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82293398
	ctx.lr = 0x82293BDC;
	sub_82293398(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82293BE8;
	sub_822A13A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x822f28a8
	ctx.lr = 0x82293BF4;
	sub_822F28A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r23,r11,-15536
	ctx.r23.s64 = ctx.r11.s64 + -15536;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x82293C10;
	sub_822A1D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82293450
	ctx.lr = 0x82293C2C;
	sub_82293450(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a2468
	ctx.lr = 0x82293C34;
	sub_822A2468(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82293560
	ctx.lr = 0x82293C64;
	sub_82293560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822937b0
	ctx.lr = 0x82293C70;
	sub_822937B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a6a50
	ctx.lr = 0x82293C7C;
	sub_822A6A50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a90e8
	ctx.lr = 0x82293C84;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a6760
	ctx.lr = 0x82293CA4;
	sub_822A6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x822a3878
	ctx.lr = 0x82293CB4;
	sub_822A3878(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822f54e8
	ctx.lr = 0x82293CBC;
	sub_822F54E8(ctx, base);
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// stwx r24,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r24.u32);
loc_82293CC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293AD8) {
	__imp__sub_82293AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82293CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822a2400
	ctx.lr = 0x82293CE0;
	sub_822A2400(ctx, base);
	// lis r30,-31918
	ctx.r30.s64 = -2091778048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,11128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11128);
	// bl 0x822a3628
	ctx.lr = 0x82293CF4;
	sub_822A3628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2468
	ctx.lr = 0x82293D00;
	sub_822A2468(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82293d18
	if (!ctx.cr6.eq) goto loc_82293D18;
loc_82293D0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82293D18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,11128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11128);
	// bl 0x822a3b78
	ctx.lr = 0x82293D24;
	sub_822A3B78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,11128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11128);
	// bl 0x822a3cf8
	ctx.lr = 0x82293D30;
	sub_822A3CF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3628
	ctx.lr = 0x82293D3C;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293d0c
	if (ctx.cr6.eq) goto loc_82293D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7160
	ctx.lr = 0x82293D50;
	sub_822A7160(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293CD0) {
	__imp__sub_82293CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82293D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822a1e20
	ctx.lr = 0x82293D88;
	sub_822A1E20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822938a8
	ctx.lr = 0x82293D9C;
	sub_822938A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82292db8
	ctx.lr = 0x82293DAC;
	sub_82292DB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x82293DB4;
	sub_822A2468(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293D60) {
	__imp__sub_82293D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293DBC) {
	__imp__sub_82293DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822a3458
	sub_822A3458(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293DC0) {
	__imp__sub_82293DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293DCC) {
	__imp__sub_82293DCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822a34b8
	sub_822A34B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293DD0) {
	__imp__sub_82293DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293DDC) {
	__imp__sub_82293DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822a2468
	sub_822A2468(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82293DE0) {
	__imp__sub_82293DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82293DF8) {
	__imp__sub_82293DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293DFC) {
	__imp__sub_82293DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293E00) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82293E20;
	sub_822A2830(ctx, base);
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r10,12184
	ctx.r8.s64 = ctx.r10.s64 + 12184;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82293e60
	if (!ctx.cr6.eq) goto loc_82293E60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82293e9c
	if (!ctx.cr6.eq) goto loc_82293E9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x82293E5C;
	sub_822A2468(ctx, base);
	// b 0x82293e9c
	goto loc_82293E9C;
loc_82293E60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293e70
	if (ctx.cr6.eq) goto loc_82293E70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x82293E70;
	sub_822A1EE8(ctx, base);
loc_82293E70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229cfb8
	ctx.lr = 0x82293E78;
	sub_8229CFB8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r11.u32);
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
loc_82293E9C:
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

PPC_WEAK_FUNC(sub_82293E00) {
	__imp__sub_82293E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293EB4) {
	__imp__sub_82293EB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293EB8) {
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
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// bl 0x82293e00
	ctx.lr = 0x82293EE4;
	sub_82293E00(ctx, base);
	// stb r31,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r31.u8);
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

PPC_WEAK_FUNC(sub_82293EB8) {
	__imp__sub_82293EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293F00) {
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
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 | 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// bne cr6,0x82293f54
	if (!ctx.cr6.eq) goto loc_82293F54;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82293f70
	if (!ctx.cr6.eq) goto loc_82293F70;
	// bl 0x822a2468
	ctx.lr = 0x82293F50;
	sub_822A2468(ctx, base);
	// b 0x82293f70
	goto loc_82293F70;
loc_82293F54:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82293f64
	if (ctx.cr6.eq) goto loc_82293F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x82293F64;
	sub_822A1EE8(ctx, base);
loc_82293F64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1e80
	ctx.lr = 0x82293F70;
	sub_822A1E80(ctx, base);
loc_82293F70:
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

PPC_WEAK_FUNC(sub_82293F00) {
	__imp__sub_82293F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293F88) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82293FA4;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_82293F88) {
	__imp__sub_82293F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82293FC4) {
	__imp__sub_82293FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82293FC8) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82293FE4;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
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

PPC_WEAK_FUNC(sub_82293FC8) {
	__imp__sub_82293FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294004) {
	__imp__sub_82294004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294008) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82294024;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
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

PPC_WEAK_FUNC(sub_82294008) {
	__imp__sub_82294008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294044) {
	__imp__sub_82294044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294048) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82294064;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
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

PPC_WEAK_FUNC(sub_82294048) {
	__imp__sub_82294048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294084) {
	__imp__sub_82294084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294088) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822a2840
	ctx.lr = 0x822940A4;
	sub_822A2840(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294088) {
	__imp__sub_82294088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822940C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822940C4) {
	__imp__sub_822940C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822940C8) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x822940E4;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
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

PPC_WEAK_FUNC(sub_822940C8) {
	__imp__sub_822940C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294104) {
	__imp__sub_82294104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294108) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82294124;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_82294108) {
	__imp__sub_82294108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294144) {
	__imp__sub_82294144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294148) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294148) {
	__imp__sub_82294148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294158) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82296cf0
	ctx.lr = 0x8229417C;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294188;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82294158) {
	__imp__sub_82294158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229419C) {
	__imp__sub_8229419C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822941A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822941A0) {
	__imp__sub_822941A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822941B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822941B4) {
	__imp__sub_822941B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822941B8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8229427c
	if (ctx.cr6.lt) goto loc_8229427C;
	// bne cr6,0x82294200
	if (!ctx.cr6.eq) goto loc_82294200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82296cf0
	ctx.lr = 0x822941F0;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822941FC;
	sub_8229E1D0(ctx, base);
	// b 0x82294330
	goto loc_82294330;
loc_82294200:
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// bge cr6,0x8229423c
	if (!ctx.cr6.lt) goto loc_8229423C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82296cf0
	ctx.lr = 0x82294218;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294224;
	sub_8229E1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x8229422C;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// b 0x82294330
	goto loc_82294330;
loc_8229423C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82294300
	if (!ctx.cr6.lt) goto loc_82294300;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82296cf0
	ctx.lr = 0x82294258;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294264;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229426C;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// b 0x82294330
	goto loc_82294330;
loc_8229427C:
	// cmpwi cr6,r31,-256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -256, ctx.xer);
	// ble cr6,0x822942bc
	if (!ctx.cr6.gt) goto loc_822942BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82296cf0
	ctx.lr = 0x82294294;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822942A0;
	sub_8229E1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822942A8;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// neg r10,r31
	ctx.r10.s64 = -ctx.r31.s64;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// b 0x82294330
	goto loc_82294330;
loc_822942BC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82294300
	if (!ctx.cr6.gt) goto loc_82294300;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82296cf0
	ctx.lr = 0x822942D8;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822942E4;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x822942EC;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// neg r10,r31
	ctx.r10.s64 = -ctx.r31.s64;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// b 0x82294330
	goto loc_82294330;
loc_82294300:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82296cf0
	ctx.lr = 0x82294310;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229431C;
	sub_8229E1D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82294324;
	sub_822A2830(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82294330:
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

PPC_WEAK_FUNC(sub_822941B8) {
	__imp__sub_822941B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294348) {
	__imp__sub_82294348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229435C) {
	__imp__sub_8229435C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294360) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82296cf0
	ctx.lr = 0x8229438C;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294398;
	sub_8229E1D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2840
	ctx.lr = 0x822943A0;
	sub_822A2840(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
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

PPC_WEAK_FUNC(sub_82294360) {
	__imp__sub_82294360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822943C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822943C4) {
	__imp__sub_822943C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822943C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// addi r10,r11,11128
	ctx.r10.s64 = ctx.r11.s64 + 11128;
	// lwz r11,1044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822943e8
	if (!ctx.cr6.eq) goto loc_822943E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,20592
	ctx.r4.s64 = ctx.r11.s64 + 20592;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
loc_822943E8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822941b8
	sub_822941B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822943C8) {
	__imp__sub_822943C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822943F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822943F4) {
	__imp__sub_822943F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822943F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82294430
	if (!ctx.cr6.lt) goto loc_82294430;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82294414:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82294438
	if (ctx.cr6.eq) goto loc_82294438;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82294414
	if (ctx.cr6.lt) goto loc_82294414;
loc_82294430:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82294438:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822943F8) {
	__imp__sub_822943F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294440) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,21064
	ctx.r4.s64 = ctx.r11.s64 + 21064;
	// b 0x822830e8
	sub_822830E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294440) {
	__imp__sub_82294440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294458) {
	__imp__sub_82294458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229445C) {
	__imp__sub_8229445C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294460) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,21092
	ctx.r4.s64 = ctx.r11.s64 + 21092;
	// b 0x822830e8
	sub_822830E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294460) {
	__imp__sub_82294460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294478) {
	__imp__sub_82294478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229447C) {
	__imp__sub_8229447C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82294488;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82294538
	if (!ctx.cr6.eq) goto loc_82294538;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,12184
	ctx.r10.s64 = ctx.r11.s64 + 12184;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x822a3628
	ctx.lr = 0x822944B8;
	sub_822A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822944d0
	if (ctx.cr6.eq) goto loc_822944D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,21124
	ctx.r4.s64 = ctx.r11.s64 + 21124;
	// bl 0x8229e338
	ctx.lr = 0x822944D0;
	sub_8229E338(ctx, base);
loc_822944D0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82294504
	if (!ctx.cr6.gt) goto loc_82294504;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_822944E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82294538
	if (ctx.cr6.eq) goto loc_82294538;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822944e4
	if (ctx.cr6.lt) goto loc_822944E4;
loc_82294504:
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x8229451c
	if (ctx.cr6.lt) goto loc_8229451C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,21092
	ctx.r4.s64 = ctx.r11.s64 + 21092;
	// bl 0x822830e8
	ctx.lr = 0x8229451C;
	sub_822830E8(ctx, base);
loc_8229451C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_82294538:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294480) {
	__imp__sub_82294480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294540) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82294574
	if (!ctx.cr6.eq) goto loc_82294574;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x82294570;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82294574:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82294584;
	sub_823DE1F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82294540) {
	__imp__sub_82294540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822945A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822945B0;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82294670
	if (ctx.cr6.eq) goto loc_82294670;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x822945f0
	if (!ctx.cr6.gt) goto loc_822945F0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822945D4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822945e8
	if (!ctx.cr6.lt) goto loc_822945E8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822945E8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822945d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822945D4;
loc_822945F0:
	// stw r29,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82294670
	if (!ctx.cr6.gt) goto loc_82294670;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82294604:
	// srawi r7,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 3;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// and r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82294664
	if (!ctx.cr6.eq) goto loc_82294664;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82294658
	if (!ctx.cr6.gt) goto loc_82294658;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82294630:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82294664
	if (ctx.cr6.eq) goto loc_82294664;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82294630
	if (ctx.cr6.lt) goto loc_82294630;
loc_82294658:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_82294664:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82294604
	if (ctx.cr6.lt) goto loc_82294604;
loc_82294670:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822945A8) {
	__imp__sub_822945A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294674) {
	__imp__sub_82294674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82294680;
	__savegprlr_27(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822947a0
	if (ctx.cr6.eq) goto loc_822947A0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822947a0
	if (!ctx.cr6.eq) goto loc_822947A0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822946b4
	if (!ctx.cr6.gt) goto loc_822946B4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_822946A8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// bdnz 0x822946a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822946A8;
loc_822946B4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822947a0
	if (!ctx.cr6.gt) goto loc_822947A0;
	// li r30,24
	ctx.r30.s64 = 24;
loc_822946CC:
	// lwz r31,12(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82294710
	if (!ctx.cr6.gt) goto loc_82294710;
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
loc_822946E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82294708
	if (ctx.cr6.eq) goto loc_82294708;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822946e4
	if (ctx.cr6.lt) goto loc_822946E4;
	// b 0x82294710
	goto loc_82294710;
loc_82294708:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82294788
	if (!ctx.cr6.lt) goto loc_82294788;
loc_82294710:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82294770
	if (!ctx.cr6.gt) goto loc_82294770;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_82294720:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82294788
	if (!ctx.cr6.gt) goto loc_82294788;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_82294738:
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82294758
	if (ctx.cr6.eq) goto loc_82294758;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82294738
	if (ctx.cr6.lt) goto loc_82294738;
	// b 0x82294788
	goto loc_82294788;
loc_82294758:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82294788
	if (ctx.cr6.lt) goto loc_82294788;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82294720
	if (ctx.cr6.lt) goto loc_82294720;
loc_82294770:
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
loc_82294788:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822946cc
	if (ctx.cr6.lt) goto loc_822946CC;
loc_822947A0:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294678) {
	__imp__sub_82294678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822947A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822947A4) {
	__imp__sub_822947A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822947A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822947B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822948c4
	if (ctx.cr6.eq) goto loc_822948C4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822948c4
	if (!ctx.cr6.eq) goto loc_822948C4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822948c4
	if (!ctx.cr6.gt) goto loc_822948C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r22,r11,21092
	ctx.r22.s64 = ctx.r11.s64 + 21092;
loc_822947E4:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822948b8
	if (!ctx.cr6.gt) goto loc_822948B8;
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// subf r26,r29,r25
	ctx.r26.s64 = ctx.r25.s64 - ctx.r29.s64;
loc_82294808:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwzx r27,r26,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82294850
	if (!ctx.cr6.lt) goto loc_82294850;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82294820:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82294844
	if (ctx.cr6.eq) goto loc_82294844;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82294820
	if (ctx.cr6.lt) goto loc_82294820;
	// b 0x82294850
	goto loc_82294850;
loc_82294844:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82294874
	if (!ctx.cr6.lt) goto loc_82294874;
loc_82294850:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x82294868
	if (ctx.cr6.lt) goto loc_82294868;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82294868;
	sub_822830E8(ctx, base);
loc_82294868:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82294874:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822948a0
	if (!ctx.cr6.gt) goto loc_822948A0;
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82294890:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82294890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82294890;
loc_822948A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82294808
	if (ctx.cr6.lt) goto loc_82294808;
loc_822948B8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x822947e4
	if (!ctx.cr0.eq) goto loc_822947E4;
loc_822948C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822947A8) {
	__imp__sub_822947A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822948CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822948CC) {
	__imp__sub_822948CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822948D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822948D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r4,24
	ctx.r27.s64 = ctx.r4.s64 + 24;
	// subf r25,r4,r3
	ctx.r25.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r23,r11,21092
	ctx.r23.s64 = ctx.r11.s64 + 21092;
loc_822948FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82294914
	if (ctx.cr6.lt) goto loc_82294914;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82294a04
	if (!ctx.cr6.lt) goto loc_82294A04;
loc_82294914:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwzx r28,r25,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8229495c
	if (!ctx.cr6.lt) goto loc_8229495C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8229492C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82294950
	if (ctx.cr6.eq) goto loc_82294950;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8229492c
	if (ctx.cr6.lt) goto loc_8229492C;
	// b 0x8229495c
	goto loc_8229495C;
loc_82294950:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82294980
	if (!ctx.cr6.lt) goto loc_82294980;
loc_8229495C:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x82294974
	if (ctx.cr6.lt) goto loc_82294974;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82294974;
	sub_822830E8(ctx, base);
loc_82294974:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82294980:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82294994
	if (ctx.cr6.lt) goto loc_82294994;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82294994:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822949c0
	if (!ctx.cr6.gt) goto loc_822949C0;
	// addi r11,r29,6
	ctx.r11.s64 = ctx.r29.s64 + 6;
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822949B0:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822949b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822949B0;
loc_822949C0:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// clrlwi r10,r30,29
	ctx.r10.u64 = ctx.r30.u32 & 0x7;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// slw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822949f8
	if (ctx.cr6.eq) goto loc_822949F8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
loc_822949F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x822948fc
	goto loc_822948FC;
loc_82294A04:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822948D0) {
	__imp__sub_822948D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294A18) {
	__imp__sub_82294A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294A1C) {
	__imp__sub_82294A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294A20) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294A20) {
	__imp__sub_82294A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294A34) {
	__imp__sub_82294A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294A38) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82296cf0
	ctx.lr = 0x82294A64;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294A70;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82294A78;
	sub_822A2830(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// bl 0x82293f00
	ctx.lr = 0x82294A94;
	sub_82293F00(ctx, base);
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

PPC_WEAK_FUNC(sub_82294A38) {
	__imp__sub_82294A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294AAC) {
	__imp__sub_82294AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294AB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294AB0) {
	__imp__sub_82294AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294AC4) {
	__imp__sub_82294AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294AC8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82296cf0
	ctx.lr = 0x82294AF4;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294B00;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82294B08;
	sub_822A2830(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// bl 0x82293f00
	ctx.lr = 0x82294B24;
	sub_82293F00(ctx, base);
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

PPC_WEAK_FUNC(sub_82294AC8) {
	__imp__sub_82294AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294B3C) {
	__imp__sub_82294B3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82294B48;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82296cf0
	ctx.lr = 0x82294B68;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294B74;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2840
	ctx.lr = 0x82294B7C;
	sub_822A2840(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
	// stb r11,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r11.u8);
	// li r31,3
	ctx.r31.s64 = 3;
	// lis r29,-31916
	ctx.r29.s64 = -2091646976;
loc_82294B90:
	// li r3,4
	ctx.r3.s64 = 4;
	// lfsu f31,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f31.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// bl 0x822a2840
	ctx.lr = 0x82294B9C;
	sub_822A2840(ctx, base);
	// stw r3,16344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16344, ctx.r3.u32);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82294b90
	if (!ctx.cr0.eq) goto loc_82294B90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3420
	ctx.lr = 0x82294BB4;
	sub_822A3420(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294B40) {
	__imp__sub_82294B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82294BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82296cf0
	ctx.lr = 0x82294BE4;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294BF0;
	sub_8229E1D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82294BF8;
	sub_822A2830(ctx, base);
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r8,r10,12184
	ctx.r8.s64 = ctx.r10.s64 + 12184;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82294c38
	if (ctx.cr6.eq) goto loc_82294C38;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82292e38
	ctx.lr = 0x82294C38;
	sub_82292E38(ctx, base);
loc_82294C38:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82294c4c
	if (!ctx.cr6.eq) goto loc_82294C4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2468
	ctx.lr = 0x82294C4C;
	sub_822A2468(ctx, base);
loc_82294C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294BC0) {
	__imp__sub_82294BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294C54) {
	__imp__sub_82294C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294C58) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82294dac
	if (ctx.cr6.gt) goto loc_82294DAC;
	// lis r12,-32215
	ctx.r12.s64 = -2111242240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19596
	ctx.r12.s64 = ctx.r12.s64 + 19596;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82294CCC;
	case 1:
		goto loc_82294DAC;
	case 2:
		goto loc_82294D40;
	case 3:
		goto loc_82294D60;
	case 4:
		goto loc_82294D80;
	case 5:
		goto loc_82294D20;
	case 6:
		goto loc_82294D00;
	case 7:
		goto loc_82294DAC;
	case 8:
		goto loc_82294DAC;
	case 9:
		goto loc_82294DAC;
	case 10:
		goto loc_82294DAC;
	case 11:
		goto loc_82294DAC;
	case 12:
		goto loc_82294DAC;
	case 13:
		goto loc_82294DAC;
	case 14:
		goto loc_82294DAC;
	case 15:
		goto loc_82294DA0;
	default:
		return;
	}
	// lwz r17,19660(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19660);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19776(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19776);
	// lwz r17,19808(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19808);
	// lwz r17,19840(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19840);
	// lwz r17,19744(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19744);
	// lwz r17,19712(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19712);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19884(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r17,19872(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19872);
loc_82294CCC:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82296cf0
	ctx.lr = 0x82294CE0;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82294CEC;
	sub_8229E1D0(ctx, base);
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
loc_82294D00:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822941b8
	ctx.lr = 0x82294D0C;
	sub_822941B8(ctx, base);
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
loc_82294D20:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82294360
	ctx.lr = 0x82294D2C;
	sub_82294360(ctx, base);
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
loc_82294D40:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82294a38
	ctx.lr = 0x82294D4C;
	sub_82294A38(ctx, base);
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
loc_82294D60:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82294ac8
	ctx.lr = 0x82294D6C;
	sub_82294AC8(ctx, base);
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
loc_82294D80:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82294b40
	ctx.lr = 0x82294D8C;
	sub_82294B40(ctx, base);
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
loc_82294DA0:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82294bc0
	ctx.lr = 0x82294DAC;
	sub_82294BC0(ctx, base);
loc_82294DAC:
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

PPC_WEAK_FUNC(sub_82294C58) {
	__imp__sub_82294C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31918
	ctx.r8.s64 = -2091778048;
	// lwz r11,12184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12184);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82294de0
	if (ctx.cr6.lt) goto loc_82294DE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,21168
	ctx.r4.s64 = ctx.r11.s64 + 21168;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
loc_82294DE0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-31916
	ctx.r6.s64 = -2091646976;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r6,16344
	ctx.r9.s64 = ctx.r6.s64 + 16344;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,92
	ctx.r9.s64 = ctx.r9.s64 + 92;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,12184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12184, ctx.r11.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294DC0) {
	__imp__sub_82294DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lwz r11,12184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12184);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12184, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294E20) {
	__imp__sub_82294E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294E34) {
	__imp__sub_82294E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294E38) {
	__imp__sub_82294E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294E3C) {
	__imp__sub_82294E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E40) {
	PPC_FUNC_PROLOGUE();
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294E40) {
	__imp__sub_82294E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294E54) {
	__imp__sub_82294E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,44
	ctx.r8.u64 = ctx.r10.u64 | 44;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21196
	ctx.r4.s64 = ctx.r11.s64 + 21196;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294E58) {
	__imp__sub_82294E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294E80) {
	__imp__sub_82294E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294E84) {
	__imp__sub_82294E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294E88) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a0a0
	ctx.lr = 0x82294EA0;
	sub_8229A0A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82294eb4
	if (ctx.cr6.eq) goto loc_82294EB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82294EB4;
	sub_82294C58(ctx, base);
loc_82294EB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294E88) {
	__imp__sub_82294E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294EC4) {
	__imp__sub_82294EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82294ED8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82294ed8
	if (!ctx.cr6.eq) goto loc_82294ED8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294EC8) {
	__imp__sub_82294EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294EEC) {
	__imp__sub_82294EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82294EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82294f48
	if (ctx.cr6.eq) goto loc_82294F48;
loc_82294F10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8229a4f0
	ctx.lr = 0x82294F24;
	sub_8229A4F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82294f38
	if (ctx.cr6.eq) goto loc_82294F38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82294F38;
	sub_82294C58(ctx, base);
loc_82294F38:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82294f10
	if (!ctx.cr6.eq) goto loc_82294F10;
loc_82294F48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294EF0) {
	__imp__sub_82294EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294F54) {
	__imp__sub_82294F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82294f6c
	if (!ctx.cr6.eq) goto loc_82294F6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82294F6C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294F58) {
	__imp__sub_82294F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82294F80) {
	__imp__sub_82294F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82294F84) {
	__imp__sub_82294F84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82294F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82294F90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x82294FAC;
	sub_822A1EE8(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82294fc8
	if (!ctx.cr6.eq) goto loc_82294FC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x82294FC8;
	sub_822A2468(ctx, base);
loc_82294FC8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stb r29,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82295040
	if (!ctx.cr6.eq) goto loc_82295040;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a6760
	ctx.lr = 0x8229500C;
	sub_822A6760(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c38
	ctx.lr = 0x8229501C;
	sub_822A3C38(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a6760
	ctx.lr = 0x8229502C;
	sub_822A6760(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c38
	ctx.lr = 0x8229503C;
	sub_822A3C38(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_82295040:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82294F88) {
	__imp__sub_82294F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82295050;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r27,r11,12184
	ctx.r27.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwzx r11,r27,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822950cc
	if (!ctx.cr6.eq) goto loc_822950CC;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82295098
	if (!ctx.cr6.eq) goto loc_82295098;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822a2468
	ctx.lr = 0x82295094;
	sub_822A2468(ctx, base);
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
loc_82295098:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// bne cr6,0x82295308
	if (!ctx.cr6.eq) goto loc_82295308;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822950b8
	if (!ctx.cr6.eq) goto loc_822950B8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a2468
	ctx.lr = 0x822950B8;
	sub_822A2468(ctx, base);
loc_822950B8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822950CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82295204
	if (ctx.cr6.eq) goto loc_82295204;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x822a13a0
	ctx.lr = 0x822950E4;
	sub_822A13A0(ctx, base);
	// bl 0x822a2400
	ctx.lr = 0x822950E8;
	sub_822A2400(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82295108
	if (!ctx.cr6.eq) goto loc_82295108;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a2468
	ctx.lr = 0x82295108;
	sub_822A2468(ctx, base);
loc_82295108:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x822a3628
	ctx.lr = 0x82295114;
	sub_822A3628(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a7160
	ctx.lr = 0x82295124;
	sub_822A7160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82294f88
	ctx.lr = 0x82295154;
	sub_82294F88(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293f00
	ctx.lr = 0x82295164;
	sub_82293F00(ctx, base);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82295228
	if (ctx.cr6.eq) goto loc_82295228;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3628
	ctx.lr = 0x82295180;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822951a4
	if (!ctx.cr6.eq) goto loc_822951A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,21308
	ctx.r4.s64 = ctx.r11.s64 + 21308;
	// bl 0x8229e338
	ctx.lr = 0x8229519C;
	sub_8229E338(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822951A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a7160
	ctx.lr = 0x822951AC;
	sub_822A7160(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822951d8
	if (!ctx.cr6.eq) goto loc_822951D8;
loc_822951BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x822951C4;
	sub_822A2830(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822951D8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 | 48;
	// lwzx r11,r27,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822951bc
	if (!ctx.cr6.eq) goto loc_822951BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,21240
	ctx.r4.s64 = ctx.r11.s64 + 21240;
	// bl 0x8229e338
	ctx.lr = 0x822951FC;
	sub_8229E338(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82295204:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82293f00
	ctx.lr = 0x82295224;
	sub_82293F00(ctx, base);
	// b 0x8229522c
	goto loc_8229522C;
loc_82295228:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8229522C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82295234;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// bl 0x822a6760
	ctx.lr = 0x8229524C;
	sub_822A6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3c38
	ctx.lr = 0x82295258;
	sub_822A3C38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a6760
	ctx.lr = 0x82295264;
	sub_822A6760(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a7160
	ctx.lr = 0x82295274;
	sub_822A7160(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// bne cr6,0x82295298
	if (!ctx.cr6.eq) goto loc_82295298;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82295298:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x822a67b8
	ctx.lr = 0x822952A8;
	sub_822A67B8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r11,r27,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x822a3898
	ctx.lr = 0x822952E0;
	sub_822A3898(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3878
	ctx.lr = 0x822952FC;
	sub_822A3878(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82295308;
	sub_8229E1D0(ctx, base);
loc_82295308:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295048) {
	__imp__sub_82295048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82295324
	if (ctx.cr6.eq) goto loc_82295324;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82295324:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295310) {
	__imp__sub_82295310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229532C) {
	__imp__sub_8229532C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
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

PPC_WEAK_FUNC(sub_82295330) {
	__imp__sub_82295330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295340) {
	__imp__sub_82295340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295354) {
	__imp__sub_82295354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295358) {
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
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,60
	ctx.r9.u64 = ctx.r10.u64 | 60;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bne cr6,0x822953a8
	if (!ctx.cr6.eq) goto loc_822953A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,21328
	ctx.r4.s64 = ctx.r11.s64 + 21328;
	// bl 0x822830e8
	ctx.lr = 0x8229539C;
	sub_822830E8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,60
	ctx.r9.u64 = ctx.r10.u64 | 60;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_822953A8:
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// ori r6,r9,60
	ctx.r6.u64 = ctx.r9.u64 | 60;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r5,60
	ctx.r4.u64 = ctx.r5.u64 | 60;
	// stwx r30,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82295358) {
	__imp__sub_82295358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822953EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822953EC) {
	__imp__sub_822953EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822953F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// ori r9,r10,60
	ctx.r9.u64 = ctx.r10.u64 | 60;
	// addi r11,r11,12184
	ctx.r11.s64 = ctx.r11.s64 + 12184;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82295434
	if (!ctx.cr6.gt) goto loc_82295434;
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_82295418:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8229543c
	if (ctx.cr6.eq) goto loc_8229543C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82295418
	if (ctx.cr6.lt) goto loc_82295418;
loc_82295434:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229543C:
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822953F0) {
	__imp__sub_822953F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295444) {
	__imp__sub_82295444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x8229545c
	if (ctx.cr6.eq) goto loc_8229545C;
loc_82295454:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229545C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x82295454
	if (!ctx.cr6.eq) goto loc_82295454;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295448) {
	__imp__sub_82295448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82295490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822954c8
	if (ctx.cr6.eq) goto loc_822954C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822954C8:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822954e4
	if (ctx.cr6.eq) goto loc_822954E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822954f4
	goto loc_822954F4;
loc_822954E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x822954EC;
	sub_822A2818(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_822954F4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295488) {
	__imp__sub_82295488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r7,r10,12184
	ctx.r7.s64 = ctx.r10.s64 + 12184;
	// ori r6,r8,48
	ctx.r6.u64 = ctx.r8.u64 | 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r5,6(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a2850
	sub_822A2850(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295510) {
	__imp__sub_82295510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295544) {
	__imp__sub_82295544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82295550;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x822a3628
	ctx.lr = 0x82295568;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295640
	if (ctx.cr6.eq) goto loc_82295640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7160
	ctx.lr = 0x8229557C;
	sub_822A7160(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82295634
	if (!ctx.cr6.gt) goto loc_82295634;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// li r31,1
	ctx.r31.s64 = 1;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 65536;
	// addi r27,r27,-28670
	ctx.r27.s64 = ctx.r27.s64 + -28670;
loc_822955A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3628
	ctx.lr = 0x822955B4;
	sub_822A3628(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822955C4;
	sub_822A38E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822955D4;
	sub_822A3DF8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x822955e8
	if (!ctx.cr6.eq) goto loc_822955E8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82295648
	if (ctx.cr6.eq) goto loc_82295648;
loc_822955E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295660
	if (ctx.cr6.eq) goto loc_82295660;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229560c
	if (!ctx.cr6.eq) goto loc_8229560C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82295678
	if (ctx.cr6.eq) goto loc_82295678;
loc_8229560C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822a6a50
	ctx.lr = 0x82295624;
	sub_822A6A50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822955a8
	if (ctx.cr6.lt) goto loc_822955A8;
loc_82295634:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a6a50
	ctx.lr = 0x82295640;
	sub_822A6A50(ctx, base);
loc_82295640:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82295648:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,21240
	ctx.r4.s64 = ctx.r11.s64 + 21240;
	// bl 0x8229e448
	ctx.lr = 0x82295658;
	sub_8229E448(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82295660:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,21308
	ctx.r4.s64 = ctx.r11.s64 + 21308;
	// bl 0x8229e448
	ctx.lr = 0x82295670;
	sub_8229E448(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82295678:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21308
	ctx.r4.s64 = ctx.r11.s64 + 21308;
	// bl 0x8229e448
	ctx.lr = 0x82295684;
	sub_8229E448(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295548) {
	__imp__sub_82295548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229568C) {
	__imp__sub_8229568C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82295698;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,0
	ctx.r9.s64 = 0;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// ori r8,r9,51201
	ctx.r8.u64 = ctx.r9.u64 | 51201;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r27,r7,1
	ctx.r27.s64 = ctx.r7.s64 + 65536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r27,-28670
	ctx.r27.s64 = ctx.r27.s64 + -28670;
	// bl 0x822a3a70
	ctx.lr = 0x822956D0;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229574c
	if (ctx.cr6.eq) goto loc_8229574C;
loc_822956DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822956E8;
	sub_822A3CF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3b78
	ctx.lr = 0x822956F8;
	sub_822A3B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3628
	ctx.lr = 0x82295704;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295724
	if (ctx.cr6.eq) goto loc_82295724;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a7160
	ctx.lr = 0x82295718;
	sub_822A7160(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x82295728
	goto loc_82295728;
loc_82295724:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82295728:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295548
	ctx.lr = 0x82295734;
	sub_82295548(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3a88
	ctx.lr = 0x82295740;
	sub_822A3A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822956dc
	if (!ctx.cr6.eq) goto loc_822956DC;
loc_8229574C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5f10
	ctx.lr = 0x82295754;
	sub_822A5F10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295690) {
	__imp__sub_82295690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229575C) {
	__imp__sub_8229575C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295760) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822a7160
	ctx.lr = 0x82295780;
	sub_822A7160(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822957ac
	if (ctx.cr6.eq) goto loc_822957AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82295798;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21360
	ctx.r4.s64 = ctx.r11.s64 + 21360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e338
	ctx.lr = 0x822957AC;
	sub_8229E338(ctx, base);
loc_822957AC:
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

PPC_WEAK_FUNC(sub_82295760) {
	__imp__sub_82295760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822957C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822957C4) {
	__imp__sub_822957C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822957C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822957D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x822a7160
	ctx.lr = 0x822957F8;
	sub_822A7160(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295824
	if (ctx.cr6.eq) goto loc_82295824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82295810;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21360
	ctx.r4.s64 = ctx.r11.s64 + 21360;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e338
	ctx.lr = 0x82295824;
	sub_8229E338(ctx, base);
loc_82295824:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a3898
	ctx.lr = 0x82295840;
	sub_822A3898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822957C8) {
	__imp__sub_822957C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229584C) {
	__imp__sub_8229584C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295850) {
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
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x822a38e0
	ctx.lr = 0x82295874;
	sub_822A38E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x82295880;
	sub_822A2818(ctx, base);
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

PPC_WEAK_FUNC(sub_82295850) {
	__imp__sub_82295850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21392
	ctx.r4.s64 = ctx.r11.s64 + 21392;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295898) {
	__imp__sub_82295898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822958A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822958A4) {
	__imp__sub_822958A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822958A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_822958C8:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x822958e0
	if (!ctx.cr6.eq) goto loc_822958E0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82295904
	goto loc_82295904;
loc_822958E0:
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x82295940
	if (!ctx.cr6.eq) goto loc_82295940;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82295904:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x822958c8
	if (ctx.cr6.lt) goto loc_822958C8;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822a33a8
	ctx.lr = 0x82295928;
	sub_822A33A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_82295940:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,14816
	ctx.r5.s64 = ctx.r9.s64 + 14816;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21416
	ctx.r4.s64 = ctx.r11.s64 + 21416;
	// lwzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8229e338
	ctx.lr = 0x82295970;
	sub_8229E338(ctx, base);
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

PPC_WEAK_FUNC(sub_822958A8) {
	__imp__sub_822958A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295984) {
	__imp__sub_82295984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82295990;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295ac4
	if (ctx.cr6.eq) goto loc_82295AC4;
loc_822959B0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822959b0
	if (!ctx.cr6.eq) goto loc_822959B0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82295a20
	if (!ctx.cr6.eq) goto loc_82295A20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82295a0c
	if (ctx.cr6.eq) goto loc_82295A0C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82295ac4
	if (ctx.cr6.eq) goto loc_82295AC4;
	// cmpwi cr6,r10,54
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 54, ctx.xer);
	// bne cr6,0x82295ac4
	if (!ctx.cr6.eq) goto loc_82295AC4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82295c98
	ctx.lr = 0x82295A04;
	sub_82295C98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82295A0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82295ad0
	ctx.lr = 0x82295A18;
	sub_82295AD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82295A20:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82295ac4
	if (!ctx.cr6.eq) goto loc_82295AC4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295aa8
	if (ctx.cr6.eq) goto loc_82295AA8;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_82295A38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82295a80
	if (ctx.cr6.eq) goto loc_82295A80;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82295a5c
	if (ctx.cr6.eq) goto loc_82295A5C;
	// cmpwi cr6,r10,54
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 54, ctx.xer);
	// beq cr6,0x82295a64
	if (ctx.cr6.eq) goto loc_82295A64;
loc_82295A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82295a8c
	goto loc_82295A8C;
loc_82295A64:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82295c98
	ctx.lr = 0x82295A7C;
	sub_82295C98(ctx, base);
	// b 0x82295a8c
	goto loc_82295A8C;
loc_82295A80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82295ad0
	ctx.lr = 0x82295A8C;
	sub_82295AD0(ctx, base);
loc_82295A8C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295ac4
	if (ctx.cr6.eq) goto loc_82295AC4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82295a38
	if (!ctx.cr6.eq) goto loc_82295A38;
loc_82295AA8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822958a8
	ctx.lr = 0x82295AB4;
	sub_822958A8(ctx, base);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82295AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295988) {
	__imp__sub_82295988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bgt cr6,0x82295bd8
	if (ctx.cr6.gt) goto loc_82295BD8;
	// beq cr6,0x82295bc0
	if (ctx.cr6.eq) goto loc_82295BC0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82295c30
	if (ctx.cr6.gt) goto loc_82295C30;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82295b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82295B18;
	// bdzf 4*cr6+eq,0x82295b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82295B38;
	// bdzf 4*cr6+eq,0x82295b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82295B5C;
	// bdzf 4*cr6+eq,0x82295b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82295B80;
	// bne cr6,0x82295ba0
	if (!ctx.cr6.eq) goto loc_82295BA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82295c40
	goto loc_82295C40;
loc_82295B18:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82295B38:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_82295B5C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82295B80:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82295BA0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82295BC0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82295BD8:
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// bgt cr6,0x82295c28
	if (ctx.cr6.gt) goto loc_82295C28;
	// beq cr6,0x82295c20
	if (ctx.cr6.eq) goto loc_82295C20;
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// beq cr6,0x82295c14
	if (ctx.cr6.eq) goto loc_82295C14;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x82295c30
	if (!ctx.cr6.eq) goto loc_82295C30;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82295C14:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82295988
	sub_82295988(ctx, base);
	return;
loc_82295C20:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82295c3c
	goto loc_82295C3C;
loc_82295C28:
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// beq cr6,0x82295c38
	if (ctx.cr6.eq) goto loc_82295C38;
loc_82295C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82295C38:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82295C3C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82295C40:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295AD0) {
	__imp__sub_82295AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295C58) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a1d0
	ctx.lr = 0x82295C70;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295c84
	if (ctx.cr6.eq) goto loc_82295C84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82295C84;
	sub_82294C58(ctx, base);
loc_82295C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295C58) {
	__imp__sub_82295C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295C94) {
	__imp__sub_82295C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82295CA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82295cf4
	if (ctx.cr6.eq) goto loc_82295CF4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82295cd0
	if (ctx.cr6.eq) goto loc_82295CD0;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x82295cd8
	if (ctx.cr6.eq) goto loc_82295CD8;
loc_82295CD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82295d00
	goto loc_82295D00;
loc_82295CD8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82295c98
	ctx.lr = 0x82295CF0;
	sub_82295C98(ctx, base);
	// b 0x82295d00
	goto loc_82295D00;
loc_82295CF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82295ad0
	ctx.lr = 0x82295D00;
	sub_82295AD0(ctx, base);
loc_82295D00:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295db0
	if (ctx.cr6.eq) goto loc_82295DB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82295d4c
	if (ctx.cr6.eq) goto loc_82295D4C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82295d28
	if (ctx.cr6.eq) goto loc_82295D28;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x82295d30
	if (ctx.cr6.eq) goto loc_82295D30;
loc_82295D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82295d58
	goto loc_82295D58;
loc_82295D30:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82295c98
	ctx.lr = 0x82295D48;
	sub_82295C98(ctx, base);
	// b 0x82295d58
	goto loc_82295D58;
loc_82295D4C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82295ad0
	ctx.lr = 0x82295D58;
	sub_82295AD0(ctx, base);
loc_82295D58:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295db0
	if (ctx.cr6.eq) goto loc_82295DB0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a3458
	ctx.lr = 0x82295D70;
	sub_822A3458(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822a3458
	ctx.lr = 0x82295D7C;
	sub_822A3458(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a98b8
	ctx.lr = 0x82295D8C;
	sub_822A98B8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82295dbc
	if (ctx.cr6.eq) goto loc_82295DBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// bl 0x8229e338
	ctx.lr = 0x82295DB0;
	sub_8229E338(ctx, base);
loc_82295DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82295DBC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295C98) {
	__imp__sub_82295C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295DD4) {
	__imp__sub_82295DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82295e14
	if (ctx.cr6.eq) goto loc_82295E14;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82295e0c
	if (ctx.cr6.eq) goto loc_82295E0C;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x82295e0c
	if (!ctx.cr6.eq) goto loc_82295E0C;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82295c98
	sub_82295C98(ctx, base);
	return;
loc_82295E0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82295E14:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82295ad0
	sub_82295AD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295DD8) {
	__imp__sub_82295DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295E1C) {
	__imp__sub_82295E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82295E30:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82295e5c
	if (ctx.cr6.eq) goto loc_82295E5C;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82295e30
	if (ctx.cr6.eq) goto loc_82295E30;
	// blr 
	return;
loc_82295E5C:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295E20) {
	__imp__sub_82295E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82295e90
	if (ctx.cr6.eq) goto loc_82295E90;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,21440
	ctx.r4.s64 = ctx.r11.s64 + 21440;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
loc_82295E90:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82299458
	sub_82299458(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295E68) {
	__imp__sub_82295E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295E9C) {
	__imp__sub_82295E9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295EA0) {
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
	// bl 0x822a2818
	ctx.lr = 0x82295EB4;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295ee4
	if (ctx.cr6.eq) goto loc_82295EE4;
loc_82295EC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82295ec8
	if (!ctx.cr6.eq) goto loc_82295EC8;
loc_82295EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295EA0) {
	__imp__sub_82295EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295EF4) {
	__imp__sub_82295EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295EF8) {
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
	// bl 0x822a2818
	ctx.lr = 0x82295F0C;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295f3c
	if (ctx.cr6.eq) goto loc_82295F3C;
loc_82295F20:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82295f20
	if (!ctx.cr6.eq) goto loc_82295F20;
loc_82295F3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295EF8) {
	__imp__sub_82295EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295F4C) {
	__imp__sub_82295F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-35
	ctx.r11.s64 = ctx.r11.s64 + -35;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295F50) {
	__imp__sub_82295F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295F64) {
	__imp__sub_82295F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82295f90
	if (!ctx.cr6.eq) goto loc_82295F90;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-35
	ctx.r10.s64 = ctx.r11.s64 + -35;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
loc_82295F90:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82295F68) {
	__imp__sub_82295F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82295F9C) {
	__imp__sub_82295F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82295FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82295FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82295fd0
	if (!ctx.cr6.eq) goto loc_82295FD0;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x82295FCC;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82295FD0:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82295FE0;
	sub_823DE1F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x82295FF8;
	sub_8229B680(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822947a8
	ctx.lr = 0x82296008;
	sub_822947A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82295FA0) {
	__imp__sub_82295FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82296018;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82296054
	if (!ctx.cr6.eq) goto loc_82296054;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x82296050;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82296054:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82296064;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x82296078;
	sub_8229B680(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8229609c
	if (ctx.cr6.gt) goto loc_8229609C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229609c
	if (!ctx.cr6.eq) goto loc_8229609C;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8229609C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822960b4
	if (!ctx.cr6.eq) goto loc_822960B4;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x822960B0;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_822960B4:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822960C4;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x822960D8;
	sub_8229B680(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82296104
	if (ctx.cr6.gt) goto loc_82296104;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82296104
	if (!ctx.cr6.eq) goto loc_82296104;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82296104:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82296114
	if (!ctx.cr6.eq) goto loc_82296114;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82296114:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294678
	ctx.lr = 0x82296124;
	sub_82294678(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822947a8
	ctx.lr = 0x8229612C;
	sub_822947A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296010) {
	__imp__sub_82296010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82296134) {
	__imp__sub_82296134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296138) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822961d0
	if (!ctx.cr6.eq) goto loc_822961D0;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822961d0
	if (ctx.cr6.eq) goto loc_822961D0;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r11,12184
	ctx.r8.s64 = ctx.r11.s64 + 12184;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822961d0
	if (ctx.cr6.eq) goto loc_822961D0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1024
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1024, ctx.xer);
	// blt cr6,0x822961b4
	if (ctx.cr6.lt) goto loc_822961B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,21064
	ctx.r4.s64 = ctx.r11.s64 + 21064;
	// bl 0x822830e8
	ctx.lr = 0x822961AC;
	sub_822830E8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_822961B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_822961D0:
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

PPC_WEAK_FUNC(sub_82296138) {
	__imp__sub_82296138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822961E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82296280
	if (!ctx.cr6.eq) goto loc_82296280;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82296280
	if (ctx.cr6.eq) goto loc_82296280;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r11,12184
	ctx.r8.s64 = ctx.r11.s64 + 12184;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82296280
	if (ctx.cr6.eq) goto loc_82296280;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1024
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1024, ctx.xer);
	// blt cr6,0x82296264
	if (ctx.cr6.lt) goto loc_82296264;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,21064
	ctx.r4.s64 = ctx.r11.s64 + 21064;
	// bl 0x822830e8
	ctx.lr = 0x8229625C;
	sub_822830E8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
loc_82296264:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82296280:
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

PPC_WEAK_FUNC(sub_822961E8) {
	__imp__sub_822961E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x822962A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822962f8
	if (ctx.cr6.eq) goto loc_822962F8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822962d4
	if (ctx.cr6.eq) goto loc_822962D4;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x822962dc
	if (ctx.cr6.eq) goto loc_822962DC;
loc_822962D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82296304
	goto loc_82296304;
loc_822962DC:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82295c98
	ctx.lr = 0x822962F4;
	sub_82295C98(ctx, base);
	// b 0x82296304
	goto loc_82296304;
loc_822962F8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82295ad0
	ctx.lr = 0x82296304;
	sub_82295AD0(ctx, base);
loc_82296304:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82296348
	if (ctx.cr6.eq) goto loc_82296348;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82296324
	if (ctx.cr6.eq) goto loc_82296324;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8229633c
	if (!ctx.cr6.eq) goto loc_8229633C;
loc_82296324:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822a7200
	ctx.lr = 0x8229632C;
	sub_822A7200(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229633c
	if (ctx.cr6.eq) goto loc_8229633C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8229633C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x822a34b8
	ctx.lr = 0x82296348;
	sub_822A34B8(ctx, base);
loc_82296348:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lwz r25,68(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r23,80(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r26,64(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r24,76(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x822db2b8
	ctx.lr = 0x82296370;
	sub_822DB2B8(ctx, base);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x822963a4
	if (ctx.cr6.eq) goto loc_822963A4;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x822db2b8
	ctx.lr = 0x82296394;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x822963a8
	goto loc_822963A8;
loc_822963A4:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_822963A8:
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822963c4
	if (!ctx.cr6.eq) goto loc_822963C4;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x822963C0;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r3.u32);
loc_822963C4:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822963D4;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x822963E8;
	sub_8229B680(ctx, base);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x822961e8
	ctx.lr = 0x822963F0;
	sub_822961E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82296420
	if (!ctx.cr6.gt) goto loc_82296420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82296400:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294678
	ctx.lr = 0x8229640C;
	sub_82294678(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82296400
	if (ctx.cr6.lt) goto loc_82296400;
loc_82296420:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82296438
	if (ctx.cr6.eq) goto loc_82296438;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82294678
	ctx.lr = 0x82296438;
	sub_82294678(ctx, base);
loc_82296438:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822947a8
	ctx.lr = 0x82296448;
	sub_822947A8(ctx, base);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r25,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r25.u32);
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296298) {
	__imp__sub_82296298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82296468;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x8229b680
	ctx.lr = 0x8229648C;
	sub_8229B680(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bne cr6,0x82296538
	if (!ctx.cr6.eq) goto loc_82296538;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x822964e4
	if (ctx.cr6.eq) goto loc_822964E4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x822964c0
	if (ctx.cr6.eq) goto loc_822964C0;
	// cmpwi cr6,r10,54
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 54, ctx.xer);
	// beq cr6,0x822964c8
	if (ctx.cr6.eq) goto loc_822964C8;
loc_822964C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x822964f0
	goto loc_822964F0;
loc_822964C8:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82295c98
	ctx.lr = 0x822964E0;
	sub_82295C98(ctx, base);
	// b 0x822964f0
	goto loc_822964F0;
loc_822964E4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82295ad0
	ctx.lr = 0x822964F0;
	sub_82295AD0(ctx, base);
loc_822964F0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229653c
	if (ctx.cr6.eq) goto loc_8229653C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82296510
	if (ctx.cr6.eq) goto loc_82296510;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82296528
	if (!ctx.cr6.eq) goto loc_82296528;
loc_82296510:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822a7200
	ctx.lr = 0x82296518;
	sub_822A7200(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296528
	if (ctx.cr6.eq) goto loc_82296528;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82296528:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x822a34b8
	ctx.lr = 0x82296534;
	sub_822A34B8(ctx, base);
	// b 0x8229653c
	goto loc_8229653C;
loc_82296538:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8229653C:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lwz r24,68(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r22,80(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r25,64(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r23,76(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x822db2b8
	ctx.lr = 0x82296564;
	sub_822DB2B8(ctx, base);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82296598
	if (ctx.cr6.eq) goto loc_82296598;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x822db2b8
	ctx.lr = 0x82296588;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8229659c
	goto loc_8229659C;
loc_82296598:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8229659C:
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822965b8
	if (!ctx.cr6.eq) goto loc_822965B8;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x822965B4;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
loc_822965B8:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822965C8;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822965e8
	if (!ctx.cr6.eq) goto loc_822965E8;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x822965E4;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
loc_822965E8:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822965F8;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x8229660C;
	sub_8229B680(ctx, base);
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x822961e8
	ctx.lr = 0x82296614;
	sub_822961E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82296644
	if (!ctx.cr6.gt) goto loc_82296644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82296624:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294678
	ctx.lr = 0x82296630;
	sub_82294678(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82296624
	if (ctx.cr6.lt) goto loc_82296624;
loc_82296644:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x82296650;
	sub_8229B680(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82294678
	ctx.lr = 0x82296660;
	sub_82294678(ctx, base);
	// bl 0x822947a8
	ctx.lr = 0x82296664;
	sub_822947A8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229667c
	if (ctx.cr6.eq) goto loc_8229667C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82294678
	ctx.lr = 0x8229667C;
	sub_82294678(ctx, base);
loc_8229667C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822947a8
	ctx.lr = 0x8229668C;
	sub_822947A8(ctx, base);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
	// stw r23,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r23.u32);
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296460) {
	__imp__sub_82296460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822966A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822966A4) {
	__imp__sub_822966A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822966A8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822966ec
	if (ctx.cr6.eq) goto loc_822966EC;
loc_822966CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82294480
	ctx.lr = 0x822966E0;
	sub_82294480(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822966cc
	if (!ctx.cr6.eq) goto loc_822966CC;
loc_822966EC:
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

PPC_WEAK_FUNC(sub_822966A8) {
	__imp__sub_822966A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82296704) {
	__imp__sub_82296704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822966a8
	sub_822966A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296708) {
	__imp__sub_82296708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82296714) {
	__imp__sub_82296714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82296730
	if (!ctx.cr6.gt) goto loc_82296730;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82296730:
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

PPC_WEAK_FUNC(sub_82296718) {
	__imp__sub_82296718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296740) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296780
	if (ctx.cr6.eq) goto loc_82296780;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82296764
	if (ctx.cr6.eq) goto loc_82296764;
loc_8229675C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82296764:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x8229675c
	if (!ctx.cr6.eq) goto loc_8229675C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296764
	if (!ctx.cr6.eq) goto loc_82296764;
loc_82296780:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82296740) {
	__imp__sub_82296740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82296790;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,3
	ctx.r25.s64 = 3;
	// lwz r18,68(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r19,64(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x822db2b8
	ctx.lr = 0x822967C0;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// bl 0x822db2b8
	ctx.lr = 0x822967E4;
	sub_822DB2B8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r20,r11,21064
	ctx.r20.s64 = ctx.r11.s64 + 21064;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822968cc
	if (ctx.cr6.eq) goto loc_822968CC;
	// addi r21,r3,-4
	ctx.r21.s64 = ctx.r3.s64 + -4;
loc_82296804:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x82296884
	if (ctx.cr6.eq) goto loc_82296884;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82296884
	if (ctx.cr6.eq) goto loc_82296884;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822968c0
	if (ctx.cr6.eq) goto loc_822968C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x82296830;
	sub_8229B680(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822968c0
	if (ctx.cr6.eq) goto loc_822968C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82296870
	if (!ctx.cr6.eq) goto loc_82296870;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// cmpwi cr6,r28,1024
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1024, ctx.xer);
	// blt cr6,0x82296860
	if (ctx.cr6.lt) goto loc_82296860;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82296860;
	sub_822830E8(ctx, base);
loc_82296860:
	// stwu r31,4(r21)
	ea = 4 + ctx.r21.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r21.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x822968c0
	goto loc_822968C0;
loc_82296870:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x8229687c
	if (ctx.cr6.gt) goto loc_8229687C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8229687C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x822968c0
	goto loc_822968C0;
loc_82296884:
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x8229688C;
	sub_822DB2B8(ctx, base);
	// li r5,280
	ctx.r5.s64 = 280;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8229689C;
	sub_823DE1F0(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,66
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 66, ctx.xer);
	// bne cr6,0x822968b8
	if (!ctx.cr6.eq) goto loc_822968B8;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// b 0x822968c0
	goto loc_822968C0;
loc_822968B8:
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r24,1
	ctx.r24.s64 = 1;
loc_822968C0:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82296804
	if (!ctx.cr6.eq) goto loc_82296804;
loc_822968CC:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82296934
	if (ctx.cr6.eq) goto loc_82296934;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82296908
	if (ctx.cr6.eq) goto loc_82296908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82296138
	ctx.lr = 0x822968E8;
	sub_82296138(ctx, base);
	// cmpwi cr6,r28,1024
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1024, ctx.xer);
	// blt cr6,0x822968fc
	if (ctx.cr6.lt) goto loc_822968FC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822968FC;
	sub_822830E8(ctx, base);
loc_822968FC:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r31,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r31.u32);
loc_82296908:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82296918
	if (!ctx.cr6.eq) goto loc_82296918;
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
loc_82296918:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82294678
	ctx.lr = 0x82296928;
	sub_82294678(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822947a8
	ctx.lr = 0x82296934;
	sub_822947A8(ctx, base);
loc_82296934:
	// stw r18,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r18.u32);
	// stw r19,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296788) {
	__imp__sub_82296788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82296944) {
	__imp__sub_82296944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82296950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 | 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822969ac
	if (ctx.cr6.eq) goto loc_822969AC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822db2b8
	ctx.lr = 0x82296980;
	sub_822DB2B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x822a2818
	ctx.lr = 0x82296990;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r31.u32);
loc_822969AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296948) {
	__imp__sub_82296948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822969B4) {
	__imp__sub_822969B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822969B8) {
	__imp__sub_822969B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822969BC) {
	__imp__sub_822969BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822a2468
	sub_822A2468(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822969C0) {
	__imp__sub_822969C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822969D8) {
	__imp__sub_822969D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822969DC) {
	__imp__sub_822969DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822a2468
	sub_822A2468(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822969E0) {
	__imp__sub_822969E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822969F8) {
	__imp__sub_822969F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822969FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822969FC) {
	__imp__sub_822969FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82296A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82296a30
	if (!ctx.cr6.eq) goto loc_82296A30;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822db2b8
	ctx.lr = 0x82296A2C;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82296A30:
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82296A40;
	sub_823DE1F0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82296a78
	if (ctx.cr6.eq) goto loc_82296A78;
loc_82296A60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x82296A6C;
	sub_8229B680(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82296a60
	if (!ctx.cr6.eq) goto loc_82296A60;
loc_82296A78:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822947a8
	ctx.lr = 0x82296A88;
	sub_822947A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296A00) {
	__imp__sub_82296A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822966a8
	sub_822966A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296A90) {
	__imp__sub_82296A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82296AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// beq cr6,0x82296b44
	if (ctx.cr6.eq) goto loc_82296B44;
	// cmpwi cr6,r11,74
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 74, ctx.xer);
	// beq cr6,0x82296b00
	if (ctx.cr6.eq) goto loc_82296B00;
	// cmpwi cr6,r11,75
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 75, ctx.xer);
	// bne cr6,0x82296bf4
	if (!ctx.cr6.eq) goto loc_82296BF4;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r11,r11,16344
	ctx.r11.s64 = ctx.r11.s64 + 16344;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82296af0
	if (!ctx.cr6.eq) goto loc_82296AF0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,21520
	ctx.r4.s64 = ctx.r11.s64 + 21520;
	// bl 0x8229e338
	ctx.lr = 0x82296AE8;
	sub_8229E338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82296AF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82296B00:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r11,r11,16344
	ctx.r11.s64 = ctx.r11.s64 + 16344;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82296b2c
	if (ctx.cr6.eq) goto loc_82296B2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,21500
	ctx.r4.s64 = ctx.r11.s64 + 21500;
	// bl 0x8229e338
	ctx.lr = 0x82296B24;
	sub_8229E338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82296B2C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82296B44:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x82296B4C;
	sub_822A13A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82225020
	ctx.lr = 0x82296B64;
	sub_82225020(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296be0
	if (!ctx.cr6.eq) goto loc_82296BE0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82225230
	ctx.lr = 0x82296B78;
	sub_82225230(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296be0
	if (!ctx.cr6.eq) goto loc_82296BE0;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r11,r11,16344
	ctx.r11.s64 = ctx.r11.s64 + 16344;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82296ba8
	if (ctx.cr6.eq) goto loc_82296BA8;
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// lbz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82296bf4
	if (ctx.cr6.eq) goto loc_82296BF4;
loc_82296BA8:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfe r29,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822a6760
	ctx.lr = 0x82296BC4;
	sub_822A6760(ctx, base);
	// clrlwi r11,r29,29
	ctx.r11.u64 = ctx.r29.u32 & 0x7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// bl 0x822957c8
	ctx.lr = 0x82296BD8;
	sub_822957C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82296BE0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,21456
	ctx.r4.s64 = ctx.r11.s64 + 21456;
	// bl 0x8229e338
	ctx.lr = 0x82296BF4;
	sub_8229E338(ctx, base);
loc_82296BF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296A98) {
	__imp__sub_82296A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82296BFC) {
	__imp__sub_82296BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296C00) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x82296C20;
	sub_822A13A0(ctx, base);
	// bl 0x822a2400
	ctx.lr = 0x82296C24;
	sub_822A2400(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82296c44
	if (!ctx.cr6.eq) goto loc_82296C44;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a2468
	ctx.lr = 0x82296C44;
	sub_822A2468(ctx, base);
loc_82296C44:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294f88
	ctx.lr = 0x82296C5C;
	sub_82294F88(ctx, base);
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

PPC_WEAK_FUNC(sub_82296C00) {
	__imp__sub_82296C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82296C74) {
	__imp__sub_82296C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82296C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82296ce8
	if (ctx.cr6.eq) goto loc_82296CE8;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r28,r11,16344
	ctx.r28.s64 = ctx.r11.s64 + 16344;
loc_82296C9C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x82296CA8;
	sub_822A13A0(ctx, base);
	// bl 0x822a2400
	ctx.lr = 0x82296CAC;
	sub_822A2400(ctx, base);
	// lbz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82296cc4
	if (!ctx.cr6.eq) goto loc_82296CC4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a2468
	ctx.lr = 0x82296CC4;
	sub_822A2468(ctx, base);
loc_82296CC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294f88
	ctx.lr = 0x82296CDC;
	sub_82294F88(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82296c9c
	if (!ctx.cr6.eq) goto loc_82296C9C;
loc_82296CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296C78) {
	__imp__sub_82296C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82296CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82296CF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,12184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12184);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r10,16344
	ctx.r30.s64 = ctx.r10.s64 + 16344;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296d50
	if (ctx.cr6.eq) goto loc_82296D50;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82296d50
	if (!ctx.cr6.gt) goto loc_82296D50;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r28,r30,92
	ctx.r28.s64 = ctx.r30.s64 + 92;
loc_82296D3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294c58
	ctx.lr = 0x82296D44;
	sub_82294C58(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x82296d3c
	if (!ctx.cr0.eq) goto loc_82296D3C;
loc_82296D50:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82296d74
	if (!ctx.cr6.lt) goto loc_82296D74;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82296D74:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82296d8c
	if (ctx.cr6.eq) goto loc_82296D8C;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82296d8c
	if (!ctx.cr6.lt) goto loc_82296D8C;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82296D8C:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r11,-6904
	ctx.r8.s64 = ctx.r11.s64 + -6904;
	// ori r7,r10,52
	ctx.r7.u64 = ctx.r10.u64 | 52;
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r6,r10,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r10,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r10.u32);
	// beq cr6,0x822972dc
	if (ctx.cr6.eq) goto loc_822972DC;
	// cmplwi cr6,r25,62
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 62, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x822970d8
	if (ctx.cr6.gt) goto loc_822970D8;
	// beq cr6,0x82296ff4
	if (ctx.cr6.eq) goto loc_82296FF4;
	// addi r10,r25,-35
	ctx.r10.s64 = ctx.r25.s64 + -35;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// bgt cr6,0x822972dc
	if (ctx.cr6.gt) goto loc_822972DC;
	// lis r12,-32215
	ctx.r12.s64 = -2111242240;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28144
	ctx.r12.s64 = ctx.r12.s64 + 28144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82296E50;
	case 1:
		goto loc_822972DC;
	case 2:
		goto loc_822972DC;
	case 3:
		goto loc_822972DC;
	case 4:
		goto loc_82296EB8;
	case 5:
		goto loc_822972DC;
	case 6:
		goto loc_822972DC;
	case 7:
		goto loc_822972DC;
	case 8:
		goto loc_822972DC;
	case 9:
		goto loc_822972DC;
	case 10:
		goto loc_822972DC;
	case 11:
		goto loc_82296F24;
	case 12:
		goto loc_822972DC;
	case 13:
		goto loc_822972DC;
	case 14:
		goto loc_822972DC;
	case 15:
		goto loc_82296F70;
	case 16:
		goto loc_822972DC;
	case 17:
		goto loc_822972DC;
	case 18:
		goto loc_82296FBC;
	case 19:
		goto loc_822972DC;
	case 20:
		goto loc_822972DC;
	case 21:
		goto loc_822972DC;
	case 22:
		goto loc_822972DC;
	case 23:
		goto loc_82296FD8;
	default:
		return;
	}
	// lwz r17,28240(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28240);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,28344(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28344);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,28452(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28452);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,28528(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28528);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,28604(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28604);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,28632(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28632);
loc_82296E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// bne cr6,0x82296e7c
	if (!ctx.cr6.eq) goto loc_82296E7C;
	// bl 0x8229e1d8
	ctx.lr = 0x82296E60;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,34
	ctx.r10.s64 = 34;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296E7C:
	// addi r29,r10,-27
	ctx.r29.s64 = ctx.r10.s64 + -27;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bgt cr6,0x822972dc
	if (ctx.cr6.gt) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x82296E8C;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,34
	ctx.r10.s64 = 34;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x822a2818
	ctx.lr = 0x82296EA8;
	sub_822A2818(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296EB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x82296ee4
	if (!ctx.cr6.eq) goto loc_82296EE4;
	// bl 0x8229e1d8
	ctx.lr = 0x82296EC8;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,38
	ctx.r10.s64 = 38;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296EE4:
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x82296f0c
	if (!ctx.cr6.eq) goto loc_82296F0C;
	// bl 0x8229e1d8
	ctx.lr = 0x82296EF0;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,36
	ctx.r10.s64 = 36;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296F0C:
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296F24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// bne cr6,0x82296f40
	if (!ctx.cr6.eq) goto loc_82296F40;
	// li r10,45
	ctx.r10.s64 = 45;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296F40:
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82296f58
	if (!ctx.cr6.eq) goto loc_82296F58;
	// li r10,43
	ctx.r10.s64 = 43;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296F58:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// li r10,44
	ctx.r10.s64 = 44;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296F70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// bne cr6,0x82296f8c
	if (!ctx.cr6.eq) goto loc_82296F8C;
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296F8C:
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82296fa4
	if (!ctx.cr6.eq) goto loc_82296FA4;
	// li r10,47
	ctx.r10.s64 = 47;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296FA4:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296FBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// li r10,52
	ctx.r10.s64 = 52;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296FD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// li r10,59
	ctx.r10.s64 = 59;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82296FF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x82297020
	if (!ctx.cr6.eq) goto loc_82297020;
	// bl 0x8229e1d8
	ctx.lr = 0x82297004;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,67
	ctx.r10.s64 = 67;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297020:
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x82297048
	if (!ctx.cr6.eq) goto loc_82297048;
	// bl 0x8229e1d8
	ctx.lr = 0x8229702C;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,65
	ctx.r10.s64 = 65;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297048:
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x82297060
	if (!ctx.cr6.eq) goto loc_82297060;
	// li r10,66
	ctx.r10.s64 = 66;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297060:
	// cmplwi cr6,r10,49
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 49, ctx.xer);
	// bne cr6,0x82297088
	if (!ctx.cr6.eq) goto loc_82297088;
	// bl 0x8229e1d8
	ctx.lr = 0x8229706C;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,64
	ctx.r10.s64 = 64;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297088:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x822970b0
	if (!ctx.cr6.eq) goto loc_822970B0;
	// bl 0x8229e1d8
	ctx.lr = 0x82297094;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,61
	ctx.r10.s64 = 61;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822970B0:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x822970BC;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,63
	ctx.r10.s64 = 63;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822970D8:
	// addi r10,r25,-86
	ctx.r10.s64 = ctx.r25.s64 + -86;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x822972dc
	if (ctx.cr6.gt) goto loc_822972DC;
	// lis r12,-32215
	ctx.r12.s64 = -2111242240;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28924
	ctx.r12.s64 = ctx.r12.s64 + 28924;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82297150;
	case 1:
		goto loc_822972DC;
	case 2:
		goto loc_8229717C;
	case 3:
		goto loc_822972DC;
	case 4:
		goto loc_822972DC;
	case 5:
		goto loc_822972DC;
	case 6:
		goto loc_822972DC;
	case 7:
		goto loc_822972DC;
	case 8:
		goto loc_82297210;
	case 9:
		goto loc_8229723C;
	case 10:
		goto loc_822972DC;
	case 11:
		goto loc_822972DC;
	case 12:
		goto loc_822972DC;
	case 13:
		goto loc_822972DC;
	case 14:
		goto loc_822972DC;
	case 15:
		goto loc_82297268;
	case 16:
		goto loc_822972DC;
	case 17:
		goto loc_822972DC;
	case 18:
		goto loc_822972DC;
	case 19:
		goto loc_822972DC;
	case 20:
		goto loc_822972B0;
	default:
		return;
	}
	// lwz r17,29008(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29008);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29052(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29052);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29200(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29200);
	// lwz r17,29244(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29244);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29288(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29288);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29404(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29404);
	// lwz r17,29360(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29360);
loc_82297150:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x82297160;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,85
	ctx.r10.s64 = 85;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8229717C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x8229718C;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,86
	ctx.r10.s64 = 86;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,84
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 84, ctx.xer);
	// bne cr6,0x82297308
	if (!ctx.cr6.eq) goto loc_82297308;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 | 52;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x822a2850
	ctx.lr = 0x822971C0;
	sub_822A2850(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,52
	ctx.r8.u64 = ctx.r9.u64 | 52;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,52
	ctx.r5.u64 = ctx.r7.u64 | 52;
	// ori r4,r6,45
	ctx.r4.u64 = ctx.r6.u64 | 45;
	// cntlzw r3,r10
	ctx.r3.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r9,85
	ctx.r9.s64 = 85;
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stbx r10,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297210:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x82297220;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,90
	ctx.r10.s64 = 90;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8229723C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x8229724C;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,91
	ctx.r10.s64 = 91;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297268:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// bne cr6,0x82297284
	if (!ctx.cr6.eq) goto loc_82297284;
	// li r10,102
	ctx.r10.s64 = 102;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82297284:
	// addi r29,r10,-27
	ctx.r29.s64 = ctx.r10.s64 + -27;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bgt cr6,0x822972dc
	if (ctx.cr6.gt) goto loc_822972DC;
	// li r10,102
	ctx.r10.s64 = 102;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x822a2818
	ctx.lr = 0x822972A0;
	sub_822A2818(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822972B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 104, ctx.xer);
	// bne cr6,0x822972dc
	if (!ctx.cr6.eq) goto loc_822972DC;
	// bl 0x8229e1d8
	ctx.lr = 0x822972C0;
	sub_8229E1D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,107
	ctx.r10.s64 = 107;
	// ori r9,r11,52
	ctx.r9.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822972DC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r8,r10,45
	ctx.r8.u64 = ctx.r10.u64 | 45;
	// stbx r9,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// bl 0x822a2818
	ctx.lr = 0x822972F4;
	sub_822A2818(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// ori r6,r7,52
	ctx.r6.u64 = ctx.r7.u64 | 52;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
loc_82297308:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82296CF0) {
	__imp__sub_82296CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297310) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82296cf0
	sub_82296CF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297310) {
	__imp__sub_82297310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297320) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82296cf0
	sub_82296CF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297320) {
	__imp__sub_82297320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297330) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x82296cf0
	ctx.lr = 0x82297354;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297360;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297330) {
	__imp__sub_82297330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297374) {
	__imp__sub_82297374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82297380;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82297430
	if (ctx.cr6.eq) goto loc_82297430;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,16344
	ctx.r29.s64 = ctx.r11.s64 + 16344;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82297418
	if (!ctx.cr6.gt) goto loc_82297418;
	// lbz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// addi r28,r6,24
	ctx.r28.s64 = ctx.r6.s64 + 24;
loc_822973BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822973f8
	if (!ctx.cr6.eq) goto loc_822973F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82296cf0
	ctx.lr = 0x822973E0;
	sub_82296CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// stb r11,32(r29)
	PPC_STORE_U8(ctx.r29.u32 + 32, ctx.r11.u8);
	// bl 0x82293e00
	ctx.lr = 0x822973F4;
	sub_82293E00(ctx, base);
	// stb r30,32(r29)
	PPC_STORE_U8(ctx.r29.u32 + 32, ctx.r30.u8);
loc_822973F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8229744c
	if (ctx.cr6.eq) goto loc_8229744C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822973bc
	if (ctx.cr6.lt) goto loc_822973BC;
loc_82297418:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822974c0
	if (ctx.cr6.eq) goto loc_822974C0;
	// lbz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822974c0
	if (!ctx.cr6.eq) goto loc_822974C0;
loc_82297430:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,21572
	ctx.r4.s64 = ctx.r11.s64 + 21572;
	// bl 0x8229e338
	ctx.lr = 0x82297440;
	sub_8229E338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8229744C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82297460
	if (!ctx.cr6.eq) goto loc_82297460;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2468
	ctx.lr = 0x82297460;
	sub_822A2468(ctx, base);
loc_82297460:
	// srawi r11,r27,3
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 3;
	// clrlwi r9,r27,29
	ctx.r9.u64 = ctx.r27.u32 & 0x7;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822974ac
	if (!ctx.cr6.eq) goto loc_822974AC;
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82297418
	if (ctx.cr6.eq) goto loc_82297418;
	// lbz r8,84(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82297418
	if (!ctx.cr6.eq) goto loc_82297418;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
loc_822974AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822974C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822974C8;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21544
	ctx.r4.s64 = ctx.r11.s64 + 21544;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8229e338
	ctx.lr = 0x822974DC;
	sub_8229E338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297378) {
	__imp__sub_82297378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822974E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822974F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82297560
	if (ctx.cr6.eq) goto loc_82297560;
	// bge cr6,0x82297558
	if (!ctx.cr6.lt) goto loc_82297558;
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
loc_82297520:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82296cf0
	ctx.lr = 0x82297530;
	sub_82296CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lbz r28,32(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// bl 0x82293e00
	ctx.lr = 0x82297544;
	sub_82293E00(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r28,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r28.u8);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82297520
	if (ctx.cr6.lt) goto loc_82297520;
loc_82297558:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82297560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822974E8) {
	__imp__sub_822974E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297568) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822975c8
	if (!ctx.cr6.eq) goto loc_822975C8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822975c8
	if (ctx.cr0.eq) goto loc_822975C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82296cf0
	ctx.lr = 0x822975AC;
	sub_82296CF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822975B4;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_822975C8:
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

PPC_WEAK_FUNC(sub_82297568) {
	__imp__sub_82297568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822975E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822975E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// beq cr6,0x82297634
	if (ctx.cr6.eq) goto loc_82297634;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x82297618;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297624;
	sub_8229E1D0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82297634:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82297568
	ctx.lr = 0x82297640;
	sub_82297568(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822975E0) {
	__imp__sub_822975E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297650) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82297378
	ctx.lr = 0x82297674;
	sub_82297378(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,53
	ctx.r3.s64 = ctx.r11.s64 + 53;
	// bl 0x82296cf0
	ctx.lr = 0x82297694;
	sub_82296CF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822976b0
	if (ctx.cr6.eq) goto loc_822976B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822976A4;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_822976B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822976BC;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297650) {
	__imp__sub_82297650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822976D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822976D4) {
	__imp__sub_822976D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822976D8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82297378
	ctx.lr = 0x822976FC;
	sub_82297378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x82296cf0
	ctx.lr = 0x82297710;
	sub_82296CF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82297718;
	sub_822A2818(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// bl 0x8229e1d0
	ctx.lr = 0x82297734;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822976D8) {
	__imp__sub_822976D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229774C) {
	__imp__sub_8229774C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297750) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,103
	ctx.r3.s64 = 103;
	// bl 0x82296cf0
	ctx.lr = 0x82297774;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297780;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297750) {
	__imp__sub_82297750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297794) {
	__imp__sub_82297794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297798) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82296cf0
	ctx.lr = 0x822977BC;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822977C8;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297798) {
	__imp__sub_82297798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822977DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822977DC) {
	__imp__sub_822977DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822977E0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,105
	ctx.r3.s64 = 105;
	// bl 0x82296cf0
	ctx.lr = 0x82297804;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297810;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822977E0) {
	__imp__sub_822977E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297824) {
	__imp__sub_82297824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297828) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a1d0
	ctx.lr = 0x82297844;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82297858
	if (ctx.cr6.eq) goto loc_82297858;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82297858;
	sub_82294C58(ctx, base);
loc_82297858:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x82296cf0
	ctx.lr = 0x82297868;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297874;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297828) {
	__imp__sub_82297828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297888) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82296cf0
	ctx.lr = 0x822978AC;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822978B8;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297888) {
	__imp__sub_82297888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822978CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822978CC) {
	__imp__sub_822978CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822978D0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82296cf0
	ctx.lr = 0x822978F4;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297900;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822978D0) {
	__imp__sub_822978D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297914) {
	__imp__sub_82297914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297918) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82296cf0
	ctx.lr = 0x8229793C;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297948;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297918) {
	__imp__sub_82297918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229795C) {
	__imp__sub_8229795C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297960) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82296cf0
	ctx.lr = 0x82297984;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297990;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297960) {
	__imp__sub_82297960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822979A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822979A4) {
	__imp__sub_822979A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822979A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82296cf0
	ctx.lr = 0x822979CC;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822979D8;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822979A8) {
	__imp__sub_822979A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822979EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822979EC) {
	__imp__sub_822979EC(ctx, base);
}

