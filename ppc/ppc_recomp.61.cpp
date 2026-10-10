#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8227DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227DC74) {
	__imp__sub_8227DC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DC78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17448
	ctx.r11.s64 = ctx.r10.s64 + -17448;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r11,-17448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17448);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-17448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17448, ctx.r11.u32);
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227DC78) {
	__imp__sub_8227DC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227DC9C) {
	__imp__sub_8227DC9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DCA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822e8068
	sub_822E8068(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227DCA0) {
	__imp__sub_8227DCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227DCAC) {
	__imp__sub_8227DCAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227DCB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-17440
	ctx.r28.s64 = ctx.r11.s64 + -17440;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8227dd18
	if (ctx.cr0.lt) goto loc_8227DD18;
loc_8227DCD8:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x822e8068
	ctx.lr = 0x8227DCF8;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8227dd08
	if (!ctx.cr6.lt) goto loc_8227DD08;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// b 0x8227dd10
	goto loc_8227DD10;
loc_8227DD08:
	// ble cr6,0x8227dd24
	if (!ctx.cr6.gt) goto loc_8227DD24;
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
loc_8227DD10:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8227dcd8
	if (!ctx.cr6.gt) goto loc_8227DCD8;
loc_8227DD18:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8227DD24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227DCB0) {
	__imp__sub_8227DCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DD30) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8227dd58
	if (ctx.cr6.lt) goto loc_8227DD58;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r11,r11,-17440
	ctx.r11.s64 = ctx.r11.s64 + -17440;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8227dd58
	if (!ctx.cr6.lt) goto loc_8227DD58;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8227DD58:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227DD30) {
	__imp__sub_8227DD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227DD64) {
	__imp__sub_8227DD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227DD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8227DD70;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r15,-9220
	ctx.r9.s64 = ctx.r15.s64 + -9220;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r15,-9228
	ctx.r8.s64 = ctx.r15.s64 + -9228;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r7,r15,-9236
	ctx.r7.s64 = ctx.r15.s64 + -9236;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r15,-29516
	ctx.r6.s64 = ctx.r15.s64 + -29516;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r15,-9248
	ctx.r5.s64 = ctx.r15.s64 + -9248;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r4,r15,-29532
	ctx.r4.s64 = ctx.r15.s64 + -29532;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r4,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r15,-9264
	ctx.r3.s64 = ctx.r15.s64 + -9264;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r31,r15,-29724
	ctx.r31.s64 = ctx.r15.s64 + -29724;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r30,r15,-9272
	ctx.r30.s64 = ctx.r15.s64 + -9272;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
	// lis r20,-32255
	ctx.r20.s64 = -2113863680;
	// lis r19,-32255
	ctx.r19.s64 = -2113863680;
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// lis r17,-32255
	ctx.r17.s64 = -2113863680;
	// lis r16,-32255
	ctx.r16.s64 = -2113863680;
	// addi r15,r15,-9280
	ctx.r15.s64 = ctx.r15.s64 + -9280;
	// lis r14,-32255
	ctx.r14.s64 = -2113863680;
	// addi r11,r11,-29488
	ctx.r11.s64 = ctx.r11.s64 + -29488;
	// stw r15,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r15.u32);
	// addi r10,r10,-8996
	ctx.r10.s64 = ctx.r10.s64 + -8996;
	// addi r9,r9,-9008
	ctx.r9.s64 = ctx.r9.s64 + -9008;
	// addi r8,r8,-9020
	ctx.r8.s64 = ctx.r8.s64 + -9020;
	// addi r7,r7,-9028
	ctx.r7.s64 = ctx.r7.s64 + -9028;
	// addi r6,r6,-9036
	ctx.r6.s64 = ctx.r6.s64 + -9036;
	// addi r5,r5,-9044
	ctx.r5.s64 = ctx.r5.s64 + -9044;
	// addi r4,r4,-9052
	ctx.r4.s64 = ctx.r4.s64 + -9052;
	// addi r3,r3,-9064
	ctx.r3.s64 = ctx.r3.s64 + -9064;
	// addi r31,r31,-9076
	ctx.r31.s64 = ctx.r31.s64 + -9076;
	// addi r30,r30,-9084
	ctx.r30.s64 = ctx.r30.s64 + -9084;
	// addi r29,r29,-9092
	ctx.r29.s64 = ctx.r29.s64 + -9092;
	// addi r28,r28,-9100
	ctx.r28.s64 = ctx.r28.s64 + -9100;
	// addi r27,r27,-9108
	ctx.r27.s64 = ctx.r27.s64 + -9108;
	// addi r26,r26,-9120
	ctx.r26.s64 = ctx.r26.s64 + -9120;
	// addi r25,r25,-9132
	ctx.r25.s64 = ctx.r25.s64 + -9132;
	// addi r24,r24,-9140
	ctx.r24.s64 = ctx.r24.s64 + -9140;
	// addi r23,r23,-9148
	ctx.r23.s64 = ctx.r23.s64 + -9148;
	// addi r22,r22,-9160
	ctx.r22.s64 = ctx.r22.s64 + -9160;
	// addi r21,r21,-9172
	ctx.r21.s64 = ctx.r21.s64 + -9172;
	// addi r20,r20,-9184
	ctx.r20.s64 = ctx.r20.s64 + -9184;
	// addi r19,r19,-9196
	ctx.r19.s64 = ctx.r19.s64 + -9196;
	// addi r18,r18,-9204
	ctx.r18.s64 = ctx.r18.s64 + -9204;
	// addi r17,r17,-9212
	ctx.r17.s64 = ctx.r17.s64 + -9212;
	// addi r16,r16,-9860
	ctx.r16.s64 = ctx.r16.s64 + -9860;
	// std r16,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r16.u64);
	// lis r16,-31937
	ctx.r16.s64 = -2093023232;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// std r18,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r18.u64);
	// std r17,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r17.u64);
	// addi r17,r16,-17440
	ctx.r17.s64 = ctx.r16.s64 + -17440;
	// addi r15,r15,-9288
	ctx.r15.s64 = ctx.r15.s64 + -9288;
	// stw r11,-17440(r16)
	PPC_STORE_U32(ctx.r16.u32 + -17440, ctx.r11.u32);
	// addi r11,r14,-9316
	ctx.r11.s64 = ctx.r14.s64 + -9316;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r14,-32255
	ctx.r14.s64 = -2113863680;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// addi r18,r15,-29548
	ctx.r18.s64 = ctx.r15.s64 + -29548;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// stw r9,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r9.u32);
	// addi r11,r11,-9324
	ctx.r11.s64 = ctx.r11.s64 + -9324;
	// addi r18,r15,-9304
	ctx.r18.s64 = ctx.r15.s64 + -9304;
	// stw r10,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r10.u32);
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r8,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r8.u32);
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r15,-29636
	ctx.r9.s64 = ctx.r15.s64 + -29636;
	// lwz r18,84(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r7.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r6,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r6.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r5,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r5.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r4,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r4.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,32(r17)
	PPC_STORE_U32(ctx.r17.u32 + 32, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r10,r10,-9332
	ctx.r10.s64 = ctx.r10.s64 + -9332;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r9,r9,-9344
	ctx.r9.s64 = ctx.r9.s64 + -9344;
	// stw r31,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r31.u32);
	// addi r8,r8,-9356
	ctx.r8.s64 = ctx.r8.s64 + -9356;
	// stw r30,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r30.u32);
	// addi r7,r15,-9368
	ctx.r7.s64 = ctx.r15.s64 + -9368;
	// stw r29,44(r17)
	PPC_STORE_U32(ctx.r17.u32 + 44, ctx.r29.u32);
	// addi r6,r14,-9380
	ctx.r6.s64 = ctx.r14.s64 + -9380;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r28,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r28.u32);
	// stw r27,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r27.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r26,56(r17)
	PPC_STORE_U32(ctx.r17.u32 + 56, ctx.r26.u32);
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// ld r18,216(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// stw r20,80(r17)
	PPC_STORE_U32(ctx.r17.u32 + 80, ctx.r20.u32);
	// lis r20,-32255
	ctx.r20.s64 = -2113863680;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r16,200(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r25,60(r17)
	PPC_STORE_U32(ctx.r17.u32 + 60, ctx.r25.u32);
	// stw r18,88(r17)
	PPC_STORE_U32(ctx.r17.u32 + 88, ctx.r18.u32);
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// std r18,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r18.u64);
	// stw r24,64(r17)
	PPC_STORE_U32(ctx.r17.u32 + 64, ctx.r24.u32);
	// stw r23,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r23.u32);
	// stw r22,72(r17)
	PPC_STORE_U32(ctx.r17.u32 + 72, ctx.r22.u32);
	// stw r21,76(r17)
	PPC_STORE_U32(ctx.r17.u32 + 76, ctx.r21.u32);
	// stw r19,84(r17)
	PPC_STORE_U32(ctx.r17.u32 + 84, ctx.r19.u32);
	// lis r19,-32255
	ctx.r19.s64 = -2113863680;
	// lwz r18,224(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r17,232(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// std r20,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r20.u64);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r20,116(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r29,r20,-9436
	ctx.r29.s64 = ctx.r20.s64 + -9436;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r28,r9,-9444
	ctx.r28.s64 = ctx.r9.s64 + -9444;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r27,r10,-9452
	ctx.r27.s64 = ctx.r10.s64 + -9452;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,208(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r26,r20,-9464
	ctx.r26.s64 = ctx.r20.s64 + -9464;
	// lwz r20,120(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r23,148(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// addi r25,r9,-9476
	ctx.r25.s64 = ctx.r9.s64 + -9476;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r24,r10,-9484
	ctx.r24.s64 = ctx.r10.s64 + -9484;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r23,r20,-9492
	ctx.r23.s64 = ctx.r20.s64 + -9492;
	// lwz r21,136(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r22,240(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r17,92(r5)
	PPC_STORE_U32(ctx.r5.u32 + 92, ctx.r17.u32);
	// lis r17,-32255
	ctx.r17.s64 = -2113863680;
	// lwz r20,108(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r3,-9392
	ctx.r5.s64 = ctx.r3.s64 + -9392;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r4,r4,-9404
	ctx.r4.s64 = ctx.r4.s64 + -9404;
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r3,r3,-9412
	ctx.r3.s64 = ctx.r3.s64 + -9412;
	// std r17,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r17.u64);
	// addi r31,r31,-9420
	ctx.r31.s64 = ctx.r31.s64 + -9420;
	// lwz r17,168(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r30,-9428
	ctx.r30.s64 = ctx.r30.s64 + -9428;
	// std r19,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r19.u64);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r22,r9,-9508
	ctx.r22.s64 = ctx.r9.s64 + -9508;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r21,r10,-9524
	ctx.r21.s64 = ctx.r10.s64 + -9524;
	// lwz r15,188(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r14,144(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r19,100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,172(r20)
	PPC_STORE_U32(ctx.r20.u32 + 172, ctx.r8.u32);
	// stw r7,176(r20)
	PPC_STORE_U32(ctx.r20.u32 + 176, ctx.r7.u32);
	// stw r6,180(r20)
	PPC_STORE_U32(ctx.r20.u32 + 180, ctx.r6.u32);
	// stw r15,100(r20)
	PPC_STORE_U32(ctx.r20.u32 + 100, ctx.r15.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r15,124(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// ld r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r16,248(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// stw r15,108(r20)
	PPC_STORE_U32(ctx.r20.u32 + 108, ctx.r15.u32);
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,164(r20)
	PPC_STORE_U32(ctx.r20.u32 + 164, ctx.r10.u32);
	// stw r9,168(r20)
	PPC_STORE_U32(ctx.r20.u32 + 168, ctx.r9.u32);
	// stw r11,160(r20)
	PPC_STORE_U32(ctx.r20.u32 + 160, ctx.r11.u32);
	// stw r5,184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 184, ctx.r5.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r15,112(r20)
	PPC_STORE_U32(ctx.r20.u32 + 112, ctx.r15.u32);
	// lwz r15,104(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r4,188(r20)
	PPC_STORE_U32(ctx.r20.u32 + 188, ctx.r4.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r3,192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 192, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r31,196(r20)
	PPC_STORE_U32(ctx.r20.u32 + 196, ctx.r31.u32);
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// stw r30,200(r20)
	PPC_STORE_U32(ctx.r20.u32 + 200, ctx.r30.u32);
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// stw r15,116(r20)
	PPC_STORE_U32(ctx.r20.u32 + 116, ctx.r15.u32);
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r17,148(r20)
	PPC_STORE_U32(ctx.r20.u32 + 148, ctx.r17.u32);
	// stw r18,152(r20)
	PPC_STORE_U32(ctx.r20.u32 + 152, ctx.r18.u32);
	// stw r19,156(r20)
	PPC_STORE_U32(ctx.r20.u32 + 156, ctx.r19.u32);
	// stw r16,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r16.u32);
	// stw r15,120(r20)
	PPC_STORE_U32(ctx.r20.u32 + 120, ctx.r15.u32);
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r14,104(r20)
	PPC_STORE_U32(ctx.r20.u32 + 104, ctx.r14.u32);
	// ld r19,168(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r18,200(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r17,136(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r15,124(r20)
	PPC_STORE_U32(ctx.r20.u32 + 124, ctx.r15.u32);
	// lwz r15,128(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r15,128(r20)
	PPC_STORE_U32(ctx.r20.u32 + 128, ctx.r15.u32);
	// lwz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r15,132(r20)
	PPC_STORE_U32(ctx.r20.u32 + 132, ctx.r15.u32);
	// lwz r15,92(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r29.u32);
	// addi r10,r19,-9564
	ctx.r10.s64 = ctx.r19.s64 + -9564;
	// stw r15,136(r20)
	PPC_STORE_U32(ctx.r20.u32 + 136, ctx.r15.u32);
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r28,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, ctx.r28.u32);
	// addi r9,r18,-29748
	ctx.r9.s64 = ctx.r18.s64 + -29748;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r10.u32);
	// addi r10,r8,-9580
	ctx.r10.s64 = ctx.r8.s64 + -9580;
	// stw r15,140(r20)
	PPC_STORE_U32(ctx.r20.u32 + 140, ctx.r15.u32);
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 248, ctx.r9.u32);
	// addi r9,r7,-9592
	ctx.r9.s64 = ctx.r7.s64 + -9592;
	// stw r10,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r10.u32);
	// addi r10,r5,-9612
	ctx.r10.s64 = ctx.r5.s64 + -9612;
	// stw r9,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r9.u32);
	// addi r9,r4,-29480
	ctx.r9.s64 = ctx.r4.s64 + -29480;
	// stw r10,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r10.u32);
	// addi r10,r31,-8696
	ctx.r10.s64 = ctx.r31.s64 + -8696;
	// stw r15,144(r20)
	PPC_STORE_U32(ctx.r20.u32 + 144, ctx.r15.u32);
	// ld r20,224(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// stw r9,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r9.u32);
	// addi r11,r20,-9544
	ctx.r11.s64 = ctx.r20.s64 + -9544;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r11.u32);
	// addi r11,r17,-29736
	ctx.r11.s64 = ctx.r17.s64 + -29736;
	// stw r11,252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 252, ctx.r11.u32);
	// addi r11,r6,-9600
	ctx.r11.s64 = ctx.r6.s64 + -9600;
	// stw r11,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r11.u32);
	// addi r11,r3,-9624
	ctx.r11.s64 = ctx.r3.s64 + -9624;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,83
	ctx.r4.s64 = 83;
	// stw r11,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r11.u32);
	// addi r11,r29,-8720
	ctx.r11.s64 = ctx.r29.s64 + -8720;
	// stw r10,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r10.u32);
	// addi r10,r28,-8736
	ctx.r10.s64 = ctx.r28.s64 + -8736;
	// stw r26,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r26.u32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stw r25,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r25.u32);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// stw r11,288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 288, ctx.r11.u32);
	// addi r11,r26,13068
	ctx.r11.s64 = ctx.r26.s64 + 13068;
	// stw r27,212(r9)
	PPC_STORE_U32(ctx.r9.u32 + 212, ctx.r27.u32);
	// addi r9,r30,-8704
	ctx.r9.s64 = ctx.r30.s64 + -8704;
	// stw r10,292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 292, ctx.r10.u32);
	// addi r10,r25,13056
	ctx.r10.s64 = ctx.r25.s64 + 13056;
	// stw r23,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r23.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// stw r9,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r9.u32);
	// stw r11,300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 300, ctx.r11.u32);
	// addi r9,r27,13076
	ctx.r9.s64 = ctx.r27.s64 + 13076;
	// stw r10,304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 304, ctx.r10.u32);
	// addi r11,r23,13036
	ctx.r11.s64 = ctx.r23.s64 + 13036;
	// stw r24,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r24.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// stw r9,296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 296, ctx.r9.u32);
	// stw r11,312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 312, ctx.r11.u32);
	// addi r11,r10,13024
	ctx.r11.s64 = ctx.r10.s64 + 13024;
	// addi r9,r24,13044
	ctx.r9.s64 = ctx.r24.s64 + 13044;
	// stw r22,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r22.u32);
	// stw r11,316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 316, ctx.r11.u32);
	// stw r9,308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 308, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r9,13012
	ctx.r10.s64 = ctx.r9.s64 + 13012;
	// stw r21,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r21.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// addi r10,r8,-3432
	ctx.r10.s64 = ctx.r8.s64 + -3432;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// li r9,83
	ctx.r9.s64 = 83;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r10,328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 328, ctx.r10.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r9,-8(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8, ctx.r9.u32);
	// addi r6,r11,-9056
	ctx.r6.s64 = ctx.r11.s64 + -9056;
	// bl 0x823def18
	ctx.lr = 0x8227E368;
	sub_823DEF18(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227DD68) {
	__imp__sub_8227DD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8227E378;
	__savegprlr_22(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r24,r11,-17440
	ctx.r24.s64 = ctx.r11.s64 + -17440;
	// lwz r23,-12(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + -12);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8227e550
	if (ctx.cr6.eq) goto loc_8227E550;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r10,-22504
	ctx.r29.s64 = ctx.r10.s64 + -22504;
	// addi r25,r11,-28736
	ctx.r25.s64 = ctx.r11.s64 + -28736;
	// addi r9,r29,68
	ctx.r9.s64 = ctx.r29.s64 + 68;
	// lwz r11,-22504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22504);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8227e3cc
	if (!ctx.cr6.gt) goto loc_8227E3CC;
	// addi r10,r29,100
	ctx.r10.s64 = ctx.r29.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8227e3d0
	goto loc_8227E3D0;
loc_8227E3CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8227E3D0:
	// bl 0x823deaf8
	ctx.lr = 0x8227E3D4;
	sub_823DEAF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8227e3fc
	if (ctx.cr6.lt) goto loc_8227E3FC;
	// lwz r11,-8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227e3fc
	if (!ctx.cr6.lt) goto loc_8227E3FC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// b 0x8227e400
	goto loc_8227E400;
loc_8227E3FC:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_8227E400:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r5,r11,-29844
	ctx.r5.s64 = ctx.r11.s64 + -29844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8227E414;
	sub_822E8368(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,68
	ctx.r9.s64 = ctx.r29.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,2
	ctx.r31.s64 = 2;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8227e4b0
	if (!ctx.cr6.gt) goto loc_8227E4B0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r27,r9,-29604
	ctx.r27.s64 = ctx.r9.s64 + -29604;
loc_8227E43C:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8227E440:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8227e440
	if (!ctx.cr6.eq) goto loc_8227E440;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bge cr6,0x8227e478
	if (!ctx.cr6.lt) goto loc_8227E478;
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// b 0x8227e47c
	goto loc_8227E47C;
loc_8227E478:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_8227E47C:
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r4,r30,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x8227E490;
	sub_822E8368(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,68
	ctx.r9.s64 = ctx.r29.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e43c
	if (ctx.cr6.lt) goto loc_8227E43C;
loc_8227E4B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1838
	ctx.lr = 0x8227E4B8;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227e508
	if (!ctx.cr6.eq) goto loc_8227E508;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8227e4e4
	if (ctx.cr6.lt) goto loc_8227E4E4;
	// lwz r11,-8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227e4e4
	if (!ctx.cr6.lt) goto loc_8227E4E4;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// b 0x8227e4e8
	goto loc_8227E4E8;
loc_8227E4E4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8227E4E8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x8227E4F4;
	sub_822E7E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1838
	ctx.lr = 0x8227E4FC;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227e550
	if (ctx.cr6.eq) goto loc_8227E550;
loc_8227E508:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8227e550
	if (ctx.cr6.eq) goto loc_8227E550;
	// addi r31,r24,10808
	ctx.r31.s64 = ctx.r24.s64 + 10808;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8227E518:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8227e52c
	if (ctx.cr6.eq) goto loc_8227E52C;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8227e544
	if (!ctx.cr6.eq) goto loc_8227E544;
loc_8227E52C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227e544
	if (!ctx.cr6.eq) goto loc_8227E544;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x821e9848
	ctx.lr = 0x8227E544;
	sub_821E9848(ctx, base);
loc_8227E544:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8227e518
	if (!ctx.cr0.eq) goto loc_8227E518;
loc_8227E550:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227E370) {
	__imp__sub_8227E370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8227E560;
	__savegprlr_23(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r24,r11,-6632
	ctx.r24.s64 = ctx.r11.s64 + -6632;
	// lwz r25,-10820(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10820);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8227e714
	if (ctx.cr6.eq) goto loc_8227E714;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r10,-22504
	ctx.r31.s64 = ctx.r10.s64 + -22504;
	// addi r26,r11,-28736
	ctx.r26.s64 = ctx.r11.s64 + -28736;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-22504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22504);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8227e5b8
	if (!ctx.cr6.gt) goto loc_8227E5B8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8227e5bc
	goto loc_8227E5BC;
loc_8227E5B8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_8227E5BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r5,r11,-29844
	ctx.r5.s64 = ctx.r11.s64 + -29844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8227E5D0;
	sub_822E8368(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8227e66c
	if (!ctx.cr6.gt) goto loc_8227E66C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r27,r9,-29604
	ctx.r27.s64 = ctx.r9.s64 + -29604;
loc_8227E5F8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8227E5FC:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8227e5fc
	if (!ctx.cr6.eq) goto loc_8227E5FC;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bge cr6,0x8227e634
	if (!ctx.cr6.lt) goto loc_8227E634;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// b 0x8227e638
	goto loc_8227E638;
loc_8227E634:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_8227E638:
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r4,r30,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x8227E64C;
	sub_822E8368(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e5f8
	if (ctx.cr6.lt) goto loc_8227E5F8;
loc_8227E66C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1838
	ctx.lr = 0x8227E674;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227e6cc
	if (!ctx.cr6.eq) goto loc_8227E6CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8227e6a8
	if (!ctx.cr6.gt) goto loc_8227E6A8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8227e6ac
	goto loc_8227E6AC;
loc_8227E6A8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8227E6AC:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x8227E6B8;
	sub_822E7E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1838
	ctx.lr = 0x8227E6C0;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227e714
	if (ctx.cr6.eq) goto loc_8227E714;
loc_8227E6CC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8227e714
	if (ctx.cr6.eq) goto loc_8227E714;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8227E6DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8227e6f0
	if (ctx.cr6.eq) goto loc_8227E6F0;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8227e708
	if (!ctx.cr6.eq) goto loc_8227E708;
loc_8227E6F0:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227e708
	if (!ctx.cr6.eq) goto loc_8227E708;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x821e9848
	ctx.lr = 0x8227E708;
	sub_821E9848(ctx, base);
loc_8227E708:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8227e6dc
	if (!ctx.cr0.eq) goto loc_8227E6DC;
loc_8227E714:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227E558) {
	__imp__sub_8227E558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227E71C) {
	__imp__sub_8227E71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8227E728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8227e75c
	if (!ctx.cr6.gt) goto loc_8227E75C;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8227e760
	goto loc_8227E760;
loc_8227E75C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8227E760:
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,-17456(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17456);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e7c0
	if (ctx.cr6.eq) goto loc_8227E7C0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-27340
	ctx.r29.s64 = ctx.r11.s64 + -27340;
loc_8227E77C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227e7a0
	if (ctx.cr6.eq) goto loc_8227E7A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dd2a8
	ctx.lr = 0x8227E794;
	sub_822DD2A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227e7b4
	if (ctx.cr6.eq) goto loc_8227E7B4;
loc_8227E7A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8227E7B0;
	sub_82280900(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8227E7B4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8227e77c
	if (!ctx.cr6.eq) goto loc_8227E77C;
loc_8227E7C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10012
	ctx.r4.s64 = ctx.r11.s64 + 10012;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8227E7D4;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227E720) {
	__imp__sub_8227E720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227E7DC) {
	__imp__sub_8227E7DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227E7E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// addi r31,r11,-16912
	ctx.r31.s64 = ctx.r11.s64 + -16912;
	// addi r30,r10,-22504
	ctx.r30.s64 = ctx.r10.s64 + -22504;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,10272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10272);
	// subfic r4,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r11.s64;
	// bl 0x8227d778
	ctx.lr = 0x8227E810;
	sub_8227D778(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8227e8a4
	if (ctx.cr6.eq) goto loc_8227E8A4;
	// ble cr6,0x8227e83c
	if (!ctx.cr6.gt) goto loc_8227E83C;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8227e844
	goto loc_8227E844;
loc_8227E83C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r27,r11,-28736
	ctx.r27.s64 = ctx.r11.s64 + -28736;
loc_8227E844:
	// lwz r11,-548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -548);
	// addi r28,r31,-548
	ctx.r28.s64 = ctx.r31.s64 + -548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227e8a4
	if (ctx.cr6.eq) goto loc_8227E8A4;
loc_8227E854:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822e8058
	ctx.lr = 0x8227E864;
	sub_822E8058(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227e880
	if (ctx.cr6.eq) goto loc_8227E880;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227e854
	if (!ctx.cr6.eq) goto loc_8227E854;
	// b 0x8227e8a4
	goto loc_8227E8A4;
loc_8227E880:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,-548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -548);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r29,-548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -548, ctx.r29.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227e8a4
	if (ctx.cr6.eq) goto loc_8227E8A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E8A4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// addi r7,r31,10240
	ctx.r7.s64 = ctx.r31.s64 + 10240;
	// lwz r9,10276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10276);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,10272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10272);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r11,10272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10272, ctx.r11.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r11,10276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10276, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227E7E0) {
	__imp__sub_8227E7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227E8F0;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4224(r1)
	ea = -4224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r28,r11,-16928
	ctx.r28.s64 = ctx.r11.s64 + -16928;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8227e9d0
	if (ctx.cr6.eq) goto loc_8227E9D0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8227E910:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8227e974
	if (!ctx.cr6.gt) goto loc_8227E974;
loc_8227E924:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x8227e938
	if (!ctx.cr6.eq) goto loc_8227E938;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8227E938:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8227e94c
	if (!ctx.cr6.eq) goto loc_8227E94C;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x8227e968
	if (ctx.cr6.eq) goto loc_8227E968;
loc_8227E94C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8227e968
	if (ctx.cr6.eq) goto loc_8227E968;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8227e968
	if (ctx.cr6.eq) goto loc_8227E968;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8227e924
	if (ctx.cr6.lt) goto loc_8227E924;
loc_8227E968:
	// cmpwi cr6,r31,4095
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4095, ctx.xer);
	// blt cr6,0x8227e974
	if (ctx.cr6.lt) goto loc_8227E974;
	// li r31,4095
	ctx.r31.s64 = 4095;
loc_8227E974:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x8227E984;
	sub_823DE1F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// stbx r27,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// bne cr6,0x8227e9a0
	if (!ctx.cr6.eq) goto loc_8227E9A0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// b 0x8227e9b8
	goto loc_8227E9B8;
loc_8227E9A0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r5.u32);
	// bl 0x823de130
	ctx.lr = 0x8227E9B8;
	sub_823DE130(ctx, base);
loc_8227E9B8:
	// bl 0x8233fb68
	ctx.lr = 0x8227E9BC;
	sub_8233FB68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227e7e0
	ctx.lr = 0x8227E9C4;
	sub_8227E7E0(ctx, base);
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8227e910
	if (!ctx.cr6.eq) goto loc_8227E910;
loc_8227E9D0:
	// addi r1,r1,4224
	ctx.r1.s64 = ctx.r1.s64 + 4224;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227E8E8) {
	__imp__sub_8227E8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227E9D8) {
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
	// bl 0x8227dc28
	ctx.lr = 0x8227E9E8;
	sub_8227DC28(ctx, base);
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r5,-31937
	ctx.r5.s64 = -2093023232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-22344
	ctx.r8.s64 = ctx.r9.s64 + -22344;
	// addi r7,r11,-16916
	ctx.r7.s64 = ctx.r11.s64 + -16916;
	// stb r10,-16916(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16916, ctx.r10.u8);
	// addi r4,r5,-16912
	ctx.r4.s64 = ctx.r5.s64 + -16912;
	// lis r6,-31937
	ctx.r6.s64 = -2093023232;
	// lis r3,-31936
	ctx.r3.s64 = -2092957696;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,10272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10272, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r10,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// stw r10,10276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10276, ctx.r10.u32);
	// stw r11,-17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + -17592, ctx.r11.u32);
	// stw r10,10272(r4)
	PPC_STORE_U32(ctx.r4.u32 + 10272, ctx.r10.u32);
	// stw r10,10276(r4)
	PPC_STORE_U32(ctx.r4.u32 + 10276, ctx.r10.u32);
	// stw r11,-22504(r3)
	PPC_STORE_U32(ctx.r3.u32 + -22504, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227E9D8) {
	__imp__sub_8227E9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227EA44) {
	__imp__sub_8227EA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227EA50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r10,-6632
	ctx.r28.s64 = ctx.r10.s64 + -6632;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,-10820(r28)
	PPC_STORE_U32(ctx.r28.u32 + -10820, ctx.r11.u32);
	// bl 0x822e4480
	ctx.lr = 0x8227EA74;
	sub_822E4480(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227ead4
	if (ctx.cr6.eq) goto loc_8227EAD4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r31,r28,-2
	ctx.r31.s64 = ctx.r28.s64 + -2;
loc_8227EA88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x8227EA98;
	sub_822E4480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2, ctx.r11.u32);
	// bl 0x822e4998
	ctx.lr = 0x8227EAA8;
	sub_822E4998(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d50
	ctx.lr = 0x8227EAB0;
	sub_822A1D50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// bl 0x822e4998
	ctx.lr = 0x8227EAC0;
	sub_822E4998(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d50
	ctx.lr = 0x8227EAC8;
	sub_822A1D50(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sthu r3,8(r31)
	ea = 8 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r31.u32 = ea;
	// bne 0x8227ea88
	if (!ctx.cr0.eq) goto loc_8227EA88;
loc_8227EAD4:
	// stw r27,-10820(r28)
	PPC_STORE_U32(ctx.r28.u32 + -10820, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227EA48) {
	__imp__sub_8227EA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227EAE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822a1e50
	ctx.lr = 0x8227EB00;
	sub_822A1E50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1d50
	ctx.lr = 0x8227EB10;
	sub_822A1D50(ctx, base);
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6632
	ctx.r31.s64 = ctx.r11.s64 + -6632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,-10820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10820);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227eb68
	if (ctx.cr6.eq) goto loc_8227EB68;
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
loc_8227EB34:
	// lwz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8227eb58
	if (!ctx.cr6.eq) goto loc_8227EB58;
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8227eb58
	if (!ctx.cr6.eq) goto loc_8227EB58;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8227ebbc
	if (ctx.cr6.eq) goto loc_8227EBBC;
loc_8227EB58:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227eb34
	if (ctx.cr6.lt) goto loc_8227EB34;
loc_8227EB68:
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x8227eb98
	if (!ctx.cr6.eq) goto loc_8227EB98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x8227EB78;
	sub_822A2468(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2468
	ctx.lr = 0x8227EB80;
	sub_822A2468(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,10028
	ctx.r3.s64 = ctx.r11.s64 + 10028;
	// bl 0x822e84f0
	ctx.lr = 0x8227EB90;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8227EB94;
	sub_822AD350(ctx, base);
	// lwz r10,-10820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10820);
loc_8227EB98:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,-10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10820, ctx.r10.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// sth r29,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8227EBBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x8227EBC4;
	sub_822A2468(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2468
	ctx.lr = 0x8227EBCC;
	sub_822A2468(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227EAE0) {
	__imp__sub_8227EAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227EBD4) {
	__imp__sub_8227EBD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8227EBE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r31,r11,-22344
	ctx.r31.s64 = ctx.r11.s64 + -22344;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r30,r10,-17592
	ctx.r30.s64 = ctx.r10.s64 + -17592;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,10272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10272);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subfic r4,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r11.s64;
	// bl 0x8227d778
	ctx.lr = 0x8227EC18;
	sub_8227D778(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8227ec54
	if (!ctx.cr6.eq) goto loc_8227EC54;
	// addi r8,r31,10240
	ctx.r8.s64 = ctx.r31.s64 + 10240;
	// lwz r9,10276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10276);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r11,10276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10276, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8227EC54:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u32);
	// bl 0x82133960
	ctx.lr = 0x8227EC74;
	sub_82133960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8227ec9c
	if (!ctx.cr6.gt) goto loc_8227EC9C;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8227eca4
	goto loc_8227ECA4;
loc_8227EC9C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r25,r11,-28736
	ctx.r25.s64 = ctx.r11.s64 + -28736;
loc_8227ECA4:
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r27,r11,-17456
	ctx.r27.s64 = ctx.r11.s64 + -17456;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,-17456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ece4
	if (ctx.cr6.eq) goto loc_8227ECE4;
loc_8227ECBC:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822e8058
	ctx.lr = 0x8227ECCC;
	sub_822E8058(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227ed64
	if (ctx.cr6.eq) goto loc_8227ED64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227ecbc
	if (!ctx.cr6.eq) goto loc_8227ECBC;
loc_8227ECE4:
	// bl 0x82284ef8
	ctx.lr = 0x8227ECE8;
	sub_82284EF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8227eda8
	if (!ctx.cr6.eq) goto loc_8227EDA8;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ed18
	if (ctx.cr6.eq) goto loc_8227ED18;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ed18
	if (ctx.cr6.eq) goto loc_8227ED18;
	// bl 0x8233db08
	ctx.lr = 0x8227ED10;
	sub_8233DB08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8227eda8
	if (!ctx.cr6.eq) goto loc_8227EDA8;
loc_8227ED18:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82131ab8
	ctx.lr = 0x8227ED24;
	sub_82131AB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// lwz r10,10272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10272);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,10276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r31,10240
	ctx.r6.s64 = ctx.r31.s64 + 10240;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r11,10272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10272, ctx.r11.u32);
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r11,10276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10276, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8227ED64:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ece4
	if (ctx.cr6.eq) goto loc_8227ECE4;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r9,r10,-11984
	ctx.r9.s64 = ctx.r10.s64 + -11984;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8227eda0
	if (!ctx.cr6.eq) goto loc_8227EDA0;
	// bl 0x8233fb68
	ctx.lr = 0x8227ED94;
	sub_8233FB68(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8227e7e0
	ctx.lr = 0x8227ED9C;
	sub_8227E7E0(ctx, base);
	// b 0x8227eda8
	goto loc_8227EDA8;
loc_8227EDA0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227EDA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// lwz r10,10272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10272);
	// addi r7,r31,10240
	ctx.r7.s64 = ctx.r31.s64 + 10240;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,10276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r11,10272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10272, ctx.r11.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r11,10276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10276, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227EBD8) {
	__imp__sub_8227EBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8227EDF0;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8227EE08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227ee08
	if (!ctx.cr6.eq) goto loc_8227EE08;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8227eed4
	if (ctx.cr6.eq) goto loc_8227EED4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8227EE30:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8227ee90
	if (!ctx.cr6.gt) goto loc_8227EE90;
loc_8227EE40:
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x8227ee54
	if (!ctx.cr6.eq) goto loc_8227EE54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8227EE54:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8227ee68
	if (!ctx.cr6.eq) goto loc_8227EE68;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x8227ee84
	if (ctx.cr6.eq) goto loc_8227EE84;
loc_8227EE68:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8227ee84
	if (ctx.cr6.eq) goto loc_8227EE84;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8227ee84
	if (ctx.cr6.eq) goto loc_8227EE84;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8227ee40
	if (ctx.cr6.lt) goto loc_8227EE40;
loc_8227EE84:
	// cmpwi cr6,r31,4095
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4095, ctx.xer);
	// blt cr6,0x8227ee90
	if (ctx.cr6.lt) goto loc_8227EE90;
	// li r31,4095
	ctx.r31.s64 = 4095;
loc_8227EE90:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x8227EEA0;
	sub_823DE1F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// beq cr6,0x8227eeb4
	if (ctx.cr6.eq) goto loc_8227EEB4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8227EEB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x8227ebd8
	ctx.lr = 0x8227EECC;
	sub_8227EBD8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8227ee30
	if (!ctx.cr6.eq) goto loc_8227EE30;
loc_8227EED4:
	// bl 0x822b8130
	ctx.lr = 0x8227EED8;
	sub_822B8130(ctx, base);
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227EDE8) {
	__imp__sub_8227EDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8227EEE8;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4256(r1)
	ea = -4256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x8227EF00;
	sub_822EC4E8(ctx, base);
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r10,r10,-22372
	ctx.r10.s64 = ctx.r10.s64 + -22372;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8227f028
	if (ctx.cr6.eq) goto loc_8227F028;
	// lis r24,-31937
	ctx.r24.s64 = -2093023232;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8227EF2C:
	// lwz r11,-17444(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227f020
	if (!ctx.cr6.eq) goto loc_8227F020;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8227efa4
	if (!ctx.cr6.gt) goto loc_8227EFA4;
loc_8227EF50:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x8227ef64
	if (!ctx.cr6.eq) goto loc_8227EF64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8227EF64:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8227ef78
	if (!ctx.cr6.eq) goto loc_8227EF78;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x8227ef98
	if (ctx.cr6.eq) goto loc_8227EF98;
loc_8227EF78:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8227ef98
	if (ctx.cr6.eq) goto loc_8227EF98;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8227ef98
	if (ctx.cr6.eq) goto loc_8227EF98;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ef50
	if (ctx.cr6.lt) goto loc_8227EF50;
loc_8227EF98:
	// cmpwi cr6,r31,4095
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4095, ctx.xer);
	// blt cr6,0x8227efa4
	if (ctx.cr6.lt) goto loc_8227EFA4;
	// li r31,4095
	ctx.r31.s64 = 4095;
loc_8227EFA4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x8227EFB4;
	sub_823DE1F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// stbx r27,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// bne cr6,0x8227efcc
	if (!ctx.cr6.eq) goto loc_8227EFCC;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x8227efe4
	goto loc_8227EFE4;
loc_8227EFCC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r5,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r5.u32);
	// bl 0x823de130
	ctx.lr = 0x8227EFE4;
	sub_823DE130(ctx, base);
loc_8227EFE4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822ec500
	ctx.lr = 0x8227EFEC;
	sub_822EC500(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8227EFFC;
	sub_8227EBD8(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822ec4e8
	ctx.lr = 0x8227F004;
	sub_822EC4E8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227ef2c
	if (!ctx.cr6.eq) goto loc_8227EF2C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822ec500
	ctx.lr = 0x8227F018;
	sub_822EC500(ctx, base);
	// addi r1,r1,4256
	ctx.r1.s64 = ctx.r1.s64 + 4256;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8227F020:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-17444(r24)
	PPC_STORE_U32(ctx.r24.u32 + -17444, ctx.r11.u32);
loc_8227F028:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822ec500
	ctx.lr = 0x8227F030;
	sub_822EC500(ctx, base);
	// addi r1,r1,4256
	ctx.r1.s64 = ctx.r1.s64 + 4256;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227EEE0) {
	__imp__sub_8227EEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F038) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,-16916
	ctx.r30.s64 = ctx.r11.s64 + -16916;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stbx r10,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r10.u8);
	// bl 0x8227eee0
	ctx.lr = 0x8227F064;
	sub_8227EEE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// bl 0x8227e8e8
	ctx.lr = 0x8227F070;
	sub_8227E8E8(ctx, base);
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

PPC_WEAK_FUNC(sub_8227F038) {
	__imp__sub_8227F038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8227F090;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822d3ae0
	ctx.lr = 0x8227F0AC;
	sub_822D3AE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227f0c4
	if (!ctx.cr6.eq) goto loc_8227F0C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8227F0C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,10080
	ctx.r4.s64 = ctx.r11.s64 + 10080;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8227F0D8;
	sub_82280900(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227ede8
	ctx.lr = 0x8227F0E8;
	sub_8227EDE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d3b90
	ctx.lr = 0x8227F0F0;
	sub_822D3B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227F088) {
	__imp__sub_8227F088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F0FC) {
	__imp__sub_8227F0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8227F108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822db808
	ctx.lr = 0x8227F128;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8227F130;
	sub_822DB8F0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821775a8
	ctx.lr = 0x8227F144;
	sub_821775A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227f164
	if (!ctx.cr6.eq) goto loc_8227F164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8227F158;
	sub_822DB8D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8227F164:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,10104
	ctx.r4.s64 = ctx.r11.s64 + 10104;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8227F178;
	sub_82280900(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227ede8
	ctx.lr = 0x8227F188;
	sub_8227EDE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8227F190;
	sub_822DB8D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227F100) {
	__imp__sub_8227F100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F19C) {
	__imp__sub_8227F19C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F1A0) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8227f1e8
	if (ctx.cr6.eq) goto loc_8227F1E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10160
	ctx.r4.s64 = ctx.r11.s64 + 10160;
	// bl 0x82280900
	ctx.lr = 0x8227F1E4;
	sub_82280900(ctx, base);
	// b 0x8227f2d4
	goto loc_8227F2D4;
loc_8227F1E8:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x8227F200;
	sub_822E7E98(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r8,10152
	ctx.r5.s64 = ctx.r8.s64 + 10152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ea348
	ctx.lr = 0x8227F214;
	sub_822EA348(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r5,9852
	ctx.r4.s64 = ctx.r5.s64 + 9852;
	// lwzx r30,r6,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x822e8058
	ctx.lr = 0x8227F234;
	sub_822E8058(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bne cr6,0x8227f25c
	if (!ctx.cr6.eq) goto loc_8227F25C;
	// bl 0x8227f088
	ctx.lr = 0x8227F258;
	sub_8227F088(ctx, base);
	// b 0x8227f2d4
	goto loc_8227F2D4;
loc_8227F25C:
	// bl 0x8227f100
	ctx.lr = 0x8227F260;
	sub_8227F100(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8227f2d4
	if (!ctx.cr6.eq) goto loc_8227F2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8227f088
	ctx.lr = 0x8227F288;
	sub_8227F088(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8227f2d4
	if (!ctx.cr6.eq) goto loc_8227F2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8227f2bc
	if (!ctx.cr6.gt) goto loc_8227F2BC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8227f2c4
	goto loc_8227F2C4;
loc_8227F2BC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_8227F2C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10132
	ctx.r4.s64 = ctx.r11.s64 + 10132;
	// bl 0x82280b08
	ctx.lr = 0x8227F2D4;
	sub_82280B08(ctx, base);
loc_8227F2D4:
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

PPC_WEAK_FUNC(sub_8227F1A0) {
	__imp__sub_8227F1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F2EC) {
	__imp__sub_8227F2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F2F0) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r6,-31937
	ctx.r6.s64 = -2093023232;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// addi r31,r11,-17456
	ctx.r31.s64 = ctx.r11.s64 + -17456;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r10,-22344
	ctx.r7.s64 = ctx.r10.s64 + -22344;
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// stw r11,-17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + -17592, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,10276(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10276, ctx.r9.u32);
	// stw r8,-22504(r5)
	PPC_STORE_U32(ctx.r5.u32 + -22504, ctx.r8.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r10,10272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10272, ctx.r10.u32);
	// stw r11,10816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10816, ctx.r11.u32);
	// addi r5,r9,10220
	ctx.r5.s64 = ctx.r9.s64 + 10220;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8227d9b0
	ctx.lr = 0x8227F358;
	sub_8227D9B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,9976
	ctx.r30.s64 = ctx.r11.s64 + 9976;
	// beq cr6,0x8227f388
	if (ctx.cr6.eq) goto loc_8227F388;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r11,-6368
	ctx.r10.s64 = ctx.r11.s64 + -6368;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227f3ac
	if (ctx.cr6.eq) goto loc_8227F3AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8227F384;
	sub_82280900(ctx, base);
	// b 0x8227f3ac
	goto loc_8227F3AC;
loc_8227F388:
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r8,r9,-12004
	ctx.r8.s64 = ctx.r9.s64 + -12004;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,-12004(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12004, ctx.r11.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
loc_8227F3AC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,10212
	ctx.r5.s64 = ctx.r11.s64 + 10212;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8227d9b0
	ctx.lr = 0x8227F3BC;
	sub_8227D9B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f3e4
	if (ctx.cr6.eq) goto loc_8227F3E4;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r11,-3680
	ctx.r10.s64 = ctx.r11.s64 + -3680;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227f408
	if (ctx.cr6.eq) goto loc_8227F408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8227F3E0;
	sub_82280900(ctx, base);
	// b 0x8227f408
	goto loc_8227F408;
loc_8227F3E4:
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r8,r9,-12024
	ctx.r8.s64 = ctx.r9.s64 + -12024;
	// addi r10,r10,-3680
	ctx.r10.s64 = ctx.r10.s64 + -3680;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,-12024(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12024, ctx.r11.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
loc_8227F408:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,10204
	ctx.r5.s64 = ctx.r11.s64 + 10204;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8227d9b0
	ctx.lr = 0x8227F418;
	sub_8227D9B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f440
	if (ctx.cr6.eq) goto loc_8227F440;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r11,-11792
	ctx.r10.s64 = ctx.r11.s64 + -11792;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227f464
	if (ctx.cr6.eq) goto loc_8227F464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8227F43C;
	sub_82280900(ctx, base);
	// b 0x8227f464
	goto loc_8227F464;
loc_8227F440:
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r8,r9,-12044
	ctx.r8.s64 = ctx.r9.s64 + -12044;
	// addi r10,r10,-11792
	ctx.r10.s64 = ctx.r10.s64 + -11792;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,-12044(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12044, ctx.r11.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
loc_8227F464:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10180
	ctx.r5.s64 = ctx.r11.s64 + -10180;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8227d9b0
	ctx.lr = 0x8227F474;
	sub_8227D9B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f49c
	if (ctx.cr6.eq) goto loc_8227F49C;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r11,-12856
	ctx.r10.s64 = ctx.r11.s64 + -12856;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227f4c4
	if (ctx.cr6.eq) goto loc_8227F4C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8227F498;
	sub_82280900(ctx, base);
	// b 0x8227f4c4
	goto loc_8227F4C4;
loc_8227F49C:
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r7,r8,-12064
	ctx.r7.s64 = ctx.r8.s64 + -12064;
	// addi r10,r10,-12856
	ctx.r10.s64 = ctx.r10.s64 + -12856;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r11,-12064(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12064, ctx.r11.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_8227F4C4:
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

PPC_WEAK_FUNC(sub_8227F2F0) {
	__imp__sub_8227F2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F4DC) {
	__imp__sub_8227F4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f11,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f8,f13,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// blt cr6,0x8227f528
	if (ctx.cr6.lt) goto loc_8227F528;
loc_8227F520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8227F528:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8227f59c
	if (ctx.cr6.eq) goto loc_8227F59C;
	// lfs f10,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x8227f59c
	if (!ctx.cr6.gt) goto loc_8227F59C;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f9,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f6,f12,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f12,f5,f11,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f4.f64));
	// bne cr6,0x8227f5a4
	if (!ctx.cr6.eq) goto loc_8227F5A4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8227F57C:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x8227f520
	if (!ctx.cr6.gt) goto loc_8227F520;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8227f5a0
	if (ctx.cr6.lt) goto loc_8227F5A0;
loc_8227F59C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227F5A0:
	// blr 
	return;
loc_8227F5A4:
	// fnmsubs f11,f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fnmsubs f7,f10,f10,f13
	ctx.f7.f64 = double(float(-(ctx.f10.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmsubs f0,f10,f0,f5
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x8227f57c
	if (ctx.cr6.gt) goto loc_8227F57C;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8227f5d8
	if (!ctx.cr6.gt) goto loc_8227F5D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8227F5D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227F4E0) {
	__imp__sub_8227F4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-11984
	ctx.r11.s64 = ctx.r11.s64 + -11984;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8227f768
	if (ctx.cr6.lt) goto loc_8227F768;
	// addi r8,r7,-5
	ctx.r8.s64 = ctx.r7.s64 + -5;
	// addi r11,r6,104
	ctx.r11.s64 = ctx.r6.s64 + 104;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8227F62C:
	// lbz r5,-36(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -36);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8227f678
	if (ctx.cr6.eq) goto loc_8227F678;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8227f678
	if (!ctx.cr6.lt) goto loc_8227F678;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8227F678:
	// lbz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8227f6c4
	if (ctx.cr6.eq) goto loc_8227F6C4;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8227f6c4
	if (!ctx.cr6.lt) goto loc_8227F6C4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
loc_8227F6C4:
	// lbz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8227f710
	if (ctx.cr6.eq) goto loc_8227F710;
	// lfs f13,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8227f710
	if (!ctx.cr6.lt) goto loc_8227F710;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
loc_8227F710:
	// lbz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8227f75c
	if (ctx.cr6.eq) goto loc_8227F75C;
	// lfs f13,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8227f75c
	if (!ctx.cr6.lt) goto loc_8227F75C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r10,3
	ctx.r3.s64 = ctx.r10.s64 + 3;
loc_8227F75C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// bdnz 0x8227f62c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227F62C;
loc_8227F768:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r10,68
	ctx.r11.s64 = ctx.r10.s64 * 68;
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8227F784:
	// lbz r7,-36(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -36);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8227f7d0
	if (ctx.cr6.eq) goto loc_8227F7D0;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8227f7d0
	if (!ctx.cr6.lt) goto loc_8227F7D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8227F7D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// bdnz 0x8227f784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227F784;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227F5E0) {
	__imp__sub_8227F5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F7E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227F7E0) {
	__imp__sub_8227F7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F7EC) {
	__imp__sub_8227F7EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F7F0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227F7F0) {
	__imp__sub_8227F7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F7FC) {
	__imp__sub_8227F7FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F800) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227F800) {
	__imp__sub_8227F800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227F80C) {
	__imp__sub_8227F80C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8227F818;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8236b1e0
	ctx.lr = 0x8227F830;
	sub_8236B1E0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8227f870
	if (!ctx.cr6.eq) goto loc_8227F870;
	// bl 0x82310110
	ctx.lr = 0x8227F83C;
	sub_82310110(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227f890
	if (ctx.cr6.eq) goto loc_8227F890;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// blt cr6,0x8227f87c
	if (ctx.cr6.lt) goto loc_8227F87C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r4,r11,10404
	ctx.r4.s64 = ctx.r11.s64 + 10404;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8227F870;
	sub_82280B08(ctx, base);
loc_8227F870:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8227F87C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227f870
	if (ctx.cr6.lt) goto loc_8227F870;
loc_8227F890:
	// li r11,256
	ctx.r11.s64 = 256;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r29,r31,548
	ctx.r29.s64 = ctx.r31.s64 + 548;
	// bl 0x8236b9d8
	ctx.lr = 0x8227F8B8;
	sub_8236B9D8(ctx, base);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82373178
	ctx.lr = 0x8227F8DC;
	sub_82373178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f914
	if (ctx.cr6.eq) goto loc_8227F914;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r11,10340
	ctx.r3.s64 = ctx.r11.s64 + 10340;
	// bl 0x822e84f0
	ctx.lr = 0x8227F8F8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360768
	ctx.lr = 0x8227F904;
	sub_82360768(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,10320
	ctx.r4.s64 = ctx.r10.s64 + 10320;
	// bl 0x822830e8
	ctx.lr = 0x8227F914;
	sub_822830E8(ctx, base);
loc_8227F914:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r26,r11,-11136
	ctx.r26.s64 = ctx.r11.s64 + -11136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822805e8
	ctx.lr = 0x8227F92C;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8227F930;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280760
	ctx.lr = 0x8227F940;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8227F948;
	sub_822807C8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,10280
	ctx.r4.s64 = ctx.r10.s64 + 10280;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8227F95C;
	sub_82280900(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227f96c
	if (ctx.cr6.eq) goto loc_8227F96C;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_8227F96C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372e98
	ctx.lr = 0x8227F98C;
	sub_82372E98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f9b4
	if (ctx.cr6.eq) goto loc_8227F9B4;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8227f9b4
	if (ctx.cr6.eq) goto loc_8227F9B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,10228
	ctx.r4.s64 = ctx.r11.s64 + 10228;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8227F9B4;
	sub_822830E8(ctx, base);
loc_8227F9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227F810) {
	__imp__sub_8227F810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227F9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227F9C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mulli r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 * 44;
	// addi r29,r11,-11136
	ctx.r29.s64 = ctx.r11.s64 + -11136;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8227F9E4;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8227fa00
	if (!ctx.cr6.eq) goto loc_8227FA00;
loc_8227F9F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8227FA00:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bad8
	ctx.lr = 0x8227FA10;
	sub_8236BAD8(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x8227f9f4
	if (ctx.cr6.eq) goto loc_8227F9F4;
	// addi r11,r29,41
	ctx.r11.s64 = ctx.r29.s64 + 41;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbzx r27,r31,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82280760
	ctx.lr = 0x8227FA2C;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8227FA30;
	sub_822807D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8227FA3C;
	sub_8236BAB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8227fb6c
	if (ctx.cr6.eq) goto loc_8227FB6C;
	// bl 0x82280760
	ctx.lr = 0x8227FA54;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8227FA58;
	sub_822805F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227faac
	if (ctx.cr6.eq) goto loc_8227FAAC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x8227faac
	if (ctx.cr6.lt) goto loc_8227FAAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8227FAAC:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227fb60
	if (ctx.cr6.eq) goto loc_8227FB60;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,10049
	ctx.r10.u64 = ctx.r11.u64 | 10049;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227fb60
	if (ctx.cr6.eq) goto loc_8227FB60;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,6146
	ctx.r10.u64 = ctx.r11.u64 | 6146;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227fb20
	if (ctx.cr6.eq) goto loc_8227FB20;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,1317
	ctx.r10.u64 = ctx.r11.u64 | 1317;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227fb20
	if (ctx.cr6.eq) goto loc_8227FB20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8227FAF4;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227fb60
	if (ctx.cr6.eq) goto loc_8227FB60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,10600
	ctx.r4.s64 = ctx.r11.s64 + 10600;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8227FB14;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8227FB20:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,122
	ctx.r10.u64 = ctx.r11.u64 | 122;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8227fb4c
	if (!ctx.cr6.eq) goto loc_8227FB4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10552
	ctx.r4.s64 = ctx.r11.s64 + 10552;
	// bl 0x822830e8
	ctx.lr = 0x8227FB40;
	sub_822830E8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8227FB4C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,10504
	ctx.r4.s64 = ctx.r11.s64 + 10504;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8227FB60;
	sub_82280B08(ctx, base);
loc_8227FB60:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8227FB6C:
	// bl 0x82280760
	ctx.lr = 0x8227FB70;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8227FB74;
	sub_822805F0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227fb84
	if (ctx.cr6.eq) goto loc_8227FB84;
	// bl 0x82280140
	ctx.lr = 0x8227FB84;
	sub_82280140(ctx, base);
loc_8227FB84:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r10,10484
	ctx.r4.s64 = ctx.r10.s64 + 10484;
	// bl 0x82280900
	ctx.lr = 0x8227FBA0;
	sub_82280900(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,10464
	ctx.r4.s64 = ctx.r9.s64 + 10464;
	// bl 0x822c3928
	ctx.lr = 0x8227FBB0;
	sub_822C3928(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227F9C0) {
	__imp__sub_8227F9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FBBC) {
	__imp__sub_8227FBBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FBC0) {
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
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8227fc04
	if (ctx.cr6.lt) goto loc_8227FC04;
	// beq cr6,0x8227fbfc
	if (ctx.cr6.eq) goto loc_8227FBFC;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8227fbf4
	if (ctx.cr6.lt) goto loc_8227FBF4;
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
loc_8227FBF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8227fc08
	goto loc_8227FC08;
loc_8227FBFC:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x8227fc08
	goto loc_8227FC08;
loc_8227FC04:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8227FC08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8236bdd0
	ctx.lr = 0x8227FC20;
	sub_8236BDD0(ctx, base);
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FBC0) {
	__imp__sub_8227FBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FC38) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236bed8
	ctx.lr = 0x8227FC60;
	sub_8236BED8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FC38) {
	__imp__sub_8227FC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FC74) {
	__imp__sub_8227FC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FC78) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FC78) {
	__imp__sub_8227FC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FC80) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// bl 0x8236bb70
	ctx.lr = 0x8227FCA8;
	sub_8236BB70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FC80) {
	__imp__sub_8227FC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FCCC) {
	__imp__sub_8227FCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FCD0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// bl 0x8236bb70
	ctx.lr = 0x8227FCF8;
	sub_8236BB70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FCD0) {
	__imp__sub_8227FCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FD1C) {
	__imp__sub_8227FD1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FD20) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x8236bb70
	ctx.lr = 0x8227FD48;
	sub_8236BB70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FD20) {
	__imp__sub_8227FD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FD6C) {
	__imp__sub_8227FD6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FD70) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x8236bb70
	ctx.lr = 0x8227FD98;
	sub_8236BB70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FD70) {
	__imp__sub_8227FD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FDBC) {
	__imp__sub_8227FDBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FDC0) {
	__imp__sub_8227FDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FDC8) {
	__imp__sub_8227FDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FDD0) {
	__imp__sub_8227FDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236b770
	sub_8236B770(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FDD8) {
	__imp__sub_8227FDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FDDC) {
	__imp__sub_8227FDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227fbc0
	sub_8227FBC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FDE0) {
	__imp__sub_8227FDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FDE4) {
	__imp__sub_8227FDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FDE8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8236bdd0
	ctx.lr = 0x8227FE10;
	sub_8236BDD0(ctx, base);
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
}

PPC_WEAK_FUNC(sub_8227FDE8) {
	__imp__sub_8227FDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FE24) {
	__imp__sub_8227FE24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FE28) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8236bd68
	sub_8236BD68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FE28) {
	__imp__sub_8227FE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8227FE38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82177148
	ctx.lr = 0x8227FE58;
	sub_82177148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x82172b20
	ctx.lr = 0x8227FE68;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227fe88
	if (ctx.cr6.eq) goto loc_8227FE88;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,10680
	ctx.r4.s64 = ctx.r11.s64 + 10680;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8227FE88;
	sub_822830E8(ctx, base);
loc_8227FE88:
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82177030
	ctx.lr = 0x8227FE98;
	sub_82177030(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8227FE9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227fe9c
	if (!ctx.cr6.eq) goto loc_8227FE9C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823e01e0
	ctx.lr = 0x8227FEC8;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227fee8
	if (ctx.cr6.eq) goto loc_8227FEE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,10648
	ctx.r4.s64 = ctx.r11.s64 + 10648;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8227FEE8;
	sub_822830E8(ctx, base);
loc_8227FEE8:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FE30) {
	__imp__sub_8227FE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FEF4) {
	__imp__sub_8227FEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8227FF00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8227fe30
	ctx.lr = 0x8227FF10;
	sub_8227FE30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e8bb8
	ctx.lr = 0x8227FF18;
	sub_822E8BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8227ff38
	if (!ctx.cr6.eq) goto loc_8227FF38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,10712
	ctx.r4.s64 = ctx.r11.s64 + 10712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8227FF38;
	sub_822830E8(ctx, base);
loc_8227FF38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FEF8) {
	__imp__sub_8227FEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FF44) {
	__imp__sub_8227FF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF48) {
	PPC_FUNC_PROLOGUE();
	// b 0x821775a8
	sub_821775A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FF48) {
	__imp__sub_8227FF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FF4C) {
	__imp__sub_8227FF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF50) {
	PPC_FUNC_PROLOGUE();
	// b 0x821775a8
	sub_821775A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8227FF50) {
	__imp__sub_8227FF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8227FF54) {
	__imp__sub_8227FF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF58) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r8,r9,-11960
	ctx.r8.s64 = ctx.r9.s64 + -11960;
	// addi r10,r11,-11408
	ctx.r10.s64 = ctx.r11.s64 + -11408;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r10,-11960(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11960, ctx.r10.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8227FF58) {
	__imp__sub_8227FF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8227FF78) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11960
	ctx.r31.s64 = ctx.r11.s64 + -11960;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227fff4
	if (!ctx.cr6.eq) goto loc_8227FFF4;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11136
	ctx.r3.s64 = ctx.r11.s64 + -11136;
	// bl 0x82280638
	ctx.lr = 0x8227FFB4;
	sub_82280638(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227fff4
	if (!ctx.cr6.eq) goto loc_8227FFF4;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822b7b18
	ctx.lr = 0x8227FFD0;
	sub_822B7B18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,10744
	ctx.r3.s64 = ctx.r10.s64 + 10744;
	// bl 0x822e84f0
	ctx.lr = 0x8227FFE0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227f810
	ctx.lr = 0x8227FFF4;
	sub_8227F810(ctx, base);
loc_8227FFF4:
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

PPC_WEAK_FUNC(sub_8227FF78) {
	__imp__sub_8227FF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228000C) {
	__imp__sub_8228000C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82280018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8227f9c0
	ctx.lr = 0x82280020;
	sub_8227F9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822800c0
	if (!ctx.cr6.eq) goto loc_822800C0;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r30,r11,-11960
	ctx.r30.s64 = ctx.r11.s64 + -11960;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280068
	if (ctx.cr6.eq) goto loc_82280068;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82280048:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x8228005c
	if (ctx.cr6.eq) goto loc_8228005C;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x82280068
	if (!ctx.cr6.eq) goto loc_82280068;
loc_8228005C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bne 0x82280048
	if (!ctx.cr0.eq) goto loc_82280048;
loc_82280068:
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stbx r31,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28812);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e8068
	ctx.lr = 0x82280084;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822800b4
	if (ctx.cr6.eq) goto loc_822800B4;
loc_8228008C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8213bee8
	ctx.lr = 0x82280098;
	sub_8213BEE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8228008c
	if (ctx.cr6.lt) goto loc_8228008C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// bl 0x822e2520
	ctx.lr = 0x822800B4;
	sub_822E2520(ctx, base);
loc_822800B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822800B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822800C0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x822800b8
	if (!ctx.cr6.eq) goto loc_822800B8;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-11960
	ctx.r9.s64 = ctx.r10.s64 + -11960;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,-11960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11960);
	// stb r11,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r11.u8);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82280010) {
	__imp__sub_82280010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822800F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x82280124;
	sub_823E06D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822800F0) {
	__imp__sub_822800F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280134) {
	__imp__sub_82280134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280138) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280138) {
	__imp__sub_82280138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280140) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280140) {
	__imp__sub_82280140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228015C) {
	__imp__sub_8228015C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280160) {
	__imp__sub_82280160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280164) {
	__imp__sub_82280164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280168) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// addi r4,r11,10760
	ctx.r4.s64 = ctx.r11.s64 + 10760;
	// addi r3,r10,-11136
	ctx.r3.s64 = ctx.r10.s64 + -11136;
	// bl 0x822801e0
	ctx.lr = 0x82280188;
	sub_822801E0(ctx, base);
	// bl 0x8227ff58
	ctx.lr = 0x8228018C;
	sub_8227FF58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280168) {
	__imp__sub_82280168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228019C) {
	__imp__sub_8228019C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r3,r11,-11136
	ctx.r3.s64 = ctx.r11.s64 + -11136;
	// b 0x82280470
	sub_82280470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822801A0) {
	__imp__sub_822801A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822801AC) {
	__imp__sub_822801AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822801B0) {
	__imp__sub_822801B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822801B4) {
	__imp__sub_822801B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822801B8) {
	__imp__sub_822801B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822801C0) {
	__imp__sub_822801C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801D0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822801D0) {
	__imp__sub_822801D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822801E0) {
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
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r31,r9,-9720
	ctx.r31.s64 = ctx.r9.s64 + -9720;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
loc_82280208:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82280248
	if (ctx.cr6.eq) goto loc_82280248;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82280208
	if (!ctx.cr6.eq) goto loc_82280208;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10780
	ctx.r4.s64 = ctx.r11.s64 + 10780;
	// bl 0x822830e8
	ctx.lr = 0x82280234;
	sub_822830E8(ctx, base);
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
loc_82280248:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r6,r31,132
	ctx.r6.s64 = ctx.r31.s64 + 132;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r8,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u32);
	// bl 0x823de090
	ctx.lr = 0x82280274;
	sub_823DE090(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822801E0) {
	__imp__sub_822801E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280294) {
	__imp__sub_82280294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280298) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82280308
	if (!ctx.cr6.eq) goto loc_82280308;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bad8
	ctx.lr = 0x822802D0;
	sub_8236BAD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// bne cr6,0x82280324
	if (!ctx.cr6.eq) goto loc_82280324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c058
	ctx.lr = 0x822802E4;
	sub_8236C058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82280348
	if (!ctx.cr6.eq) goto loc_82280348;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r3,r10,10928
	ctx.r3.s64 = ctx.r10.s64 + 10928;
	// bl 0x82280980
	ctx.lr = 0x82280308;
	sub_82280980(ctx, base);
loc_82280308:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228030C:
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
loc_82280324:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8228033c
	if (!ctx.cr6.eq) goto loc_8228033C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82280308
	goto loc_82280308;
loc_8228033C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,10840
	ctx.r3.s64 = ctx.r11.s64 + 10840;
	// bl 0x82280980
	ctx.lr = 0x82280348;
	sub_82280980(ctx, base);
loc_82280348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228030c
	goto loc_8228030C;
}

PPC_WEAK_FUNC(sub_82280298) {
	__imp__sub_82280298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82280358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_82280370:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822803a8
	if (ctx.cr6.eq) goto loc_822803A8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280394
	if (!ctx.cr6.eq) goto loc_82280394;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822803a8
	if (!ctx.cr6.eq) goto loc_822803A8;
loc_82280394:
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x82280298
	ctx.lr = 0x8228039C;
	sub_82280298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822803c4
	if (ctx.cr6.eq) goto loc_822803C4;
loc_822803A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x82280370
	if (ctx.cr6.lt) goto loc_82280370;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822803C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82280350) {
	__imp__sub_82280350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822803D0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82280350
	ctx.lr = 0x822803F0;
	sub_82280350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280414
	if (!ctx.cr6.eq) goto loc_82280414;
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
loc_82280414:
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823de090
	ctx.lr = 0x82280424;
	sub_823DE090(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,-9720
	ctx.r11.s64 = ctx.r9.s64 + -9720;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// stwx r10,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,-9720(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9720);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-9720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9720, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822803D0) {
	__imp__sub_822803D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228046C) {
	__imp__sub_8228046C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280470) {
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
	// bl 0x822803d0
	ctx.lr = 0x82280488;
	sub_822803D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822804b0
	if (!ctx.cr6.eq) goto loc_822804B0;
loc_82280494:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8228b0d8
	ctx.lr = 0x8228049C;
	sub_8228B0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822803d0
	ctx.lr = 0x822804A4;
	sub_822803D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280494
	if (ctx.cr6.eq) goto loc_82280494;
loc_822804B0:
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

PPC_WEAK_FUNC(sub_82280470) {
	__imp__sub_82280470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822804C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822804C4) {
	__imp__sub_822804C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822804C8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82280350
	sub_82280350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822804C8) {
	__imp__sub_822804C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822804D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822804D4) {
	__imp__sub_822804D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822804D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822804E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,-9720
	ctx.r11.s64 = ctx.r11.s64 + -9720;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_822804F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82280518
	if (ctx.cr6.eq) goto loc_82280518;
	// bl 0x822803d0
	ctx.lr = 0x82280508;
	sub_822803D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_82280518:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822804f8
	if (!ctx.cr0.eq) goto loc_822804F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822804D8) {
	__imp__sub_822804D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280530) {
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
	// bl 0x822804d8
	ctx.lr = 0x82280540;
	sub_822804D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280564
	if (!ctx.cr6.eq) goto loc_82280564;
loc_8228054C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8228b0d8
	ctx.lr = 0x82280554;
	sub_8228B0D8(ctx, base);
	// bl 0x822804d8
	ctx.lr = 0x82280558;
	sub_822804D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228054c
	if (ctx.cr6.eq) goto loc_8228054C;
loc_82280564:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280530) {
	__imp__sub_82280530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280574) {
	__imp__sub_82280574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,36
	ctx.r10.s64 = ctx.r9.s64 + 36;
loc_82280584:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822805a8
	if (ctx.cr6.eq) goto loc_822805A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82280584
	if (ctx.cr6.lt) goto loc_82280584;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822805A8:
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// li r10,7
	ctx.r10.s64 = 7;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822805C0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822805c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822805C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stb r4,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r4.u8);
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280578) {
	__imp__sub_82280578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822805E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82280578
	sub_82280578(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822805E0) {
	__imp__sub_822805E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822805E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822805E4) {
	__imp__sub_822805E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822805E8) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82280578
	sub_82280578(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822805E8) {
	__imp__sub_822805E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822805F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822805F0) {
	__imp__sub_822805F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280600) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
loc_8228060C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82280630
	if (!ctx.cr6.eq) goto loc_82280630;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8228060c
	if (ctx.cr6.lt) goto loc_8228060C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82280630:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280600) {
	__imp__sub_82280600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280638) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_82280644:
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8228065c
	if (ctx.cr6.eq) goto loc_8228065C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82280674
	if (ctx.cr6.eq) goto loc_82280674;
loc_8228065C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x82280644
	if (ctx.cr6.lt) goto loc_82280644;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82280674:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280638) {
	__imp__sub_82280638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228067C) {
	__imp__sub_8228067C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280680) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8228068C:
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822806b0
	if (ctx.cr6.eq) goto loc_822806B0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822806b0
	if (!ctx.cr6.eq) goto loc_822806B0;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x822806c8
	if (ctx.cr6.eq) goto loc_822806C8;
loc_822806B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8228068c
	if (ctx.cr6.lt) goto loc_8228068C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822806C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280680) {
	__imp__sub_82280680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822806D0) {
	PPC_FUNC_PROLOGUE();
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822806E4:
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82280700
	if (ctx.cr6.eq) goto loc_82280700;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82280700
	if (!ctx.cr6.eq) goto loc_82280700;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82280700:
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228071c
	if (ctx.cr6.eq) goto loc_8228071C;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8228071c
	if (!ctx.cr6.eq) goto loc_8228071C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8228071C:
	// lbz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82280738
	if (ctx.cr6.eq) goto loc_82280738;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82280738
	if (!ctx.cr6.eq) goto loc_82280738;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82280738:
	// lbz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82280754
	if (ctx.cr6.eq) goto loc_82280754;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82280754
	if (!ctx.cr6.eq) goto loc_82280754;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82280754:
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// bdnz 0x822806e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822806E4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822806D0) {
	__imp__sub_822806D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280760) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_8228076C:
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8228078c
	if (ctx.cr6.eq) goto loc_8228078C;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8228078c
	if (!ctx.cr6.eq) goto loc_8228078C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822807a4
	if (ctx.cr6.eq) goto loc_822807A4;
loc_8228078C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8228076c
	if (ctx.cr6.lt) goto loc_8228076C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822807A4:
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280760) {
	__imp__sub_82280760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822807B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822807bc
	if (!ctx.cr6.eq) goto loc_822807BC;
	// blr 
	return;
loc_822807BC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822807B0) {
	__imp__sub_822807B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822807C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822807C4) {
	__imp__sub_822807C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822807C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822807C8) {
	__imp__sub_822807C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822807D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822807D0) {
	__imp__sub_822807D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822807D8) {
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
	// bne cr6,0x8228080c
	if (!ctx.cr6.eq) goto loc_8228080C;
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
loc_8228080C:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,26852
	ctx.r4.s64 = ctx.r10.s64 + 26852;
	// lwz r11,-380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -380);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e7ee0
	ctx.lr = 0x82280828;
	sub_822E7EE0(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822807D8) {
	__imp__sub_822807D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280840) {
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
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82280880
	if (ctx.cr6.eq) goto loc_82280880;
	// rlwinm r8,r5,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82123ab0
	ctx.lr = 0x82280880;
	sub_82123AB0(ctx, base);
loc_82280880:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x8228089c
	if (!ctx.cr6.eq) goto loc_8228089C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228089c
	if (ctx.cr6.eq) goto loc_8228089C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_8228089C:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x822808e4
	if (ctx.cr6.eq) goto loc_822808E4;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822808dc
	if (ctx.cr6.eq) goto loc_822808DC;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822808dc
	if (ctx.cr6.eq) goto loc_822808DC;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82138ab0
	ctx.lr = 0x822808D0;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822808e4
	if (ctx.cr6.eq) goto loc_822808E4;
loc_822808DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230d838
	ctx.lr = 0x822808E4;
	sub_8230D838(ctx, base);
loc_822808E4:
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

PPC_WEAK_FUNC(sub_82280840) {
	__imp__sub_82280840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822808FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822808FC) {
	__imp__sub_822808FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,4240
	ctx.r10.s64 = ctx.r1.s64 + 4240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x82280950;
	sub_823E06D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,4191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4191, ctx.r9.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280840
	ctx.lr = 0x82280968;
	sub_82280840(ctx, base);
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280900) {
	__imp__sub_82280900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228097C) {
	__imp__sub_8228097C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280980) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,4232
	ctx.r10.s64 = ctx.r1.s64 + 4232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x822809D0;
	sub_823E06D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r9,4191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4191, ctx.r9.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// bl 0x82123ab0
	ctx.lr = 0x822809F8;
	sub_82123AB0(ctx, base);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,94
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 94, ctx.xer);
	// bne cr6,0x82280a14
	if (!ctx.cr6.eq) goto loc_82280A14;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280a14
	if (ctx.cr6.eq) goto loc_82280A14;
	// addi r31,r1,98
	ctx.r31.s64 = ctx.r1.s64 + 98;
loc_82280A14:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280a4c
	if (ctx.cr6.eq) goto loc_82280A4C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280a4c
	if (ctx.cr6.eq) goto loc_82280A4C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82138ab0
	ctx.lr = 0x82280A40;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280a54
	if (ctx.cr6.eq) goto loc_82280A54;
loc_82280A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230d838
	ctx.lr = 0x82280A54;
	sub_8230D838(ctx, base);
loc_82280A54:
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280980) {
	__imp__sub_82280980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-9456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280af0
	if (ctx.cr6.eq) goto loc_82280AF0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82280af0
	if (ctx.cr6.eq) goto loc_82280AF0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,4272
	ctx.r10.s64 = ctx.r1.s64 + 4272;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x823e06d0
	ctx.lr = 0x82280AD4;
	sub_823E06D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r9,4223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4223, ctx.r9.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r8,-29844
	ctx.r4.s64 = ctx.r8.s64 + -29844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x82280AF0;
	sub_82280900(ctx, base);
loc_82280AF0:
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280A68) {
	__imp__sub_82280A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280B04) {
	__imp__sub_82280B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280B08) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4224(r1)
	ea = -4224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,2164
	ctx.r4.s64 = ctx.r11.s64 + 2164;
	// bl 0x822e7fd0
	ctx.lr = 0x82280B50;
	sub_822E7FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82280b6c
	if (!ctx.cr6.eq) goto loc_82280B6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11400
	ctx.r4.s64 = ctx.r11.s64 + 11400;
	// b 0x82280b74
	goto loc_82280B74;
loc_82280B6C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,24900
	ctx.r4.s64 = ctx.r11.s64 + 24900;
loc_82280B74:
	// bl 0x822e7e98
	ctx.lr = 0x82280B78;
	sub_822E7E98(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82280B80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82280b80
	if (!ctx.cr6.eq) goto loc_82280B80;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r7,r1,4256
	ctx.r7.s64 = ctx.r1.s64 + 4256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subfic r4,r11,4096
	ctx.xer.ca = ctx.r11.u32 <= 4096;
	ctx.r4.s64 = 4096 - ctx.r11.s64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x82280BC0;
	sub_823E06D0(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// lwz r11,-9416(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9416);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,4191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4191, ctx.r5.u8);
	// stw r11,-9416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -9416, ctx.r11.u32);
	// bl 0x823617c0
	ctx.lr = 0x82280BE0;
	sub_823617C0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280840
	ctx.lr = 0x82280BF0;
	sub_82280840(ctx, base);
	// lis r4,-32165
	ctx.r4.s64 = -2107965440;
	// addi r3,r4,28832
	ctx.r3.s64 = ctx.r4.s64 + 28832;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82280c18
	if (ctx.cr6.eq) goto loc_82280C18;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82280c18
	if (!ctx.cr6.eq) goto loc_82280C18;
	// bl 0x82123b30
	ctx.lr = 0x82280C18;
	sub_82123B30(ctx, base);
loc_82280C18:
	// addi r1,r1,4224
	ctx.r1.s64 = ctx.r1.s64 + 4224;
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

PPC_WEAK_FUNC(sub_82280B08) {
	__imp__sub_82280B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280C30) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4224(r1)
	ea = -4224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r11,11412
	ctx.r4.s64 = ctx.r11.s64 + 11412;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e7e98
	ctx.lr = 0x82280C7C;
	sub_822E7E98(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82280C84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82280c84
	if (!ctx.cr6.eq) goto loc_82280C84;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r7,r1,4256
	ctx.r7.s64 = ctx.r1.s64 + 4256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subfic r4,r11,4096
	ctx.xer.ca = ctx.r11.u32 <= 4096;
	ctx.r4.s64 = 4096 - ctx.r11.s64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x82280CC4;
	sub_823E06D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,4191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4191, ctx.r6.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280840
	ctx.lr = 0x82280CDC;
	sub_82280840(ctx, base);
	// addi r1,r1,4224
	ctx.r1.s64 = ctx.r1.s64 + 4224;
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

PPC_WEAK_FUNC(sub_82280C30) {
	__imp__sub_82280C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280CF4) {
	__imp__sub_82280CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280CF8) {
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
	// bl 0x822db528
	ctx.lr = 0x82280D08;
	sub_822DB528(ctx, base);
	// bl 0x822db348
	ctx.lr = 0x82280D0C;
	sub_822DB348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280CF8) {
	__imp__sub_82280CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280D1C) {
	__imp__sub_82280D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// stfs f1,-9432(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -9432, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280D20) {
	__imp__sub_82280D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280D2C) {
	__imp__sub_82280D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82280D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,14312
	ctx.r30.s64 = ctx.r11.s64 + 14312;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,14312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14312);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280d90
	if (ctx.cr6.eq) goto loc_82280D90;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82280D60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82280D6C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82280d9c
	if (ctx.cr6.eq) goto loc_82280D9C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82280d60
	if (!ctx.cr6.eq) goto loc_82280D60;
loc_82280D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82280D9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82280D30) {
	__imp__sub_82280D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82280DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r10,11508
	ctx.r6.s64 = ctx.r10.s64 + 11508;
	// addi r3,r9,11488
	ctx.r3.s64 = ctx.r9.s64 + 11488;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e17e0
	ctx.lr = 0x82280DE0;
	sub_822E17E0(ctx, base);
	// lis r29,-31936
	ctx.r29.s64 = -2092957696;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r8,11448
	ctx.r6.s64 = ctx.r8.s64 + 11448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,-4804(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4804, ctx.r3.u32);
	// addi r3,r7,11432
	ctx.r3.s64 = ctx.r7.s64 + 11432;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e17e0
	ctx.lr = 0x82280E04;
	sub_822E17E0(ctx, base);
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,11416
	ctx.r4.s64 = ctx.r6.s64 + 11416;
	// stw r3,-9240(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9240, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b7268
	ctx.lr = 0x82280E24;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,-9240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9240);
	// bne cr6,0x82280e38
	if (!ctx.cr6.eq) goto loc_82280E38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82280E38:
	// bl 0x822e1fa8
	ctx.lr = 0x82280E3C;
	sub_822E1FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-4804(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4804);
	// bl 0x822e1fa8
	ctx.lr = 0x82280E48;
	sub_822E1FA8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82280E5C;
	sub_822E7E98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82280DA8) {
	__imp__sub_82280DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280E64) {
	__imp__sub_82280E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280E68) {
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
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x822ec4e8
	ctx.lr = 0x82280E88;
	sub_822EC4E8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// bl 0x822e8058
	ctx.lr = 0x82280E98;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82280f08
	if (ctx.cr6.eq) goto loc_82280F08;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9020);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82280ed0
	if (ctx.cr6.eq) goto loc_82280ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280d30
	ctx.lr = 0x82280EB8;
	sub_82280D30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280ed0
	if (!ctx.cr6.eq) goto loc_82280ED0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,11548
	ctx.r30.s64 = ctx.r11.s64 + 11548;
	// b 0x82280ed8
	goto loc_82280ED8;
loc_82280ED0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,11536
	ctx.r30.s64 = ctx.r11.s64 + 11536;
loc_82280ED8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b7268
	ctx.lr = 0x82280EEC;
	sub_822B7268(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82280ef8
	if (!ctx.cr6.eq) goto loc_82280EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82280EF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280da8
	ctx.lr = 0x82280F00;
	sub_82280DA8(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x822ec500
	ctx.lr = 0x82280F08;
	sub_822EC500(ctx, base);
loc_82280F08:
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

PPC_WEAK_FUNC(sub_82280E68) {
	__imp__sub_82280E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4832);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280F20) {
	__imp__sub_82280F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280F38) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r11,-9008
	ctx.r31.s64 = ctx.r11.s64 + -9008;
	// addi r3,r10,11560
	ctx.r3.s64 = ctx.r10.s64 + 11560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82280F60;
	sub_822E84F0(ctx, base);
	// bl 0x823617c0
	ctx.lr = 0x82280F64;
	sub_823617C0(ctx, base);
	// bl 0x82360830
	ctx.lr = 0x82280F68;
	sub_82360830(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r9,-29844
	ctx.r3.s64 = ctx.r9.s64 + -29844;
	// bl 0x8230d720
	ctx.lr = 0x82280F78;
	sub_8230D720(ctx, base);
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

PPC_WEAK_FUNC(sub_82280F38) {
	__imp__sub_82280F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82280F8C) {
	__imp__sub_82280F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280F90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82280F90) {
	__imp__sub_82280F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82280FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82280FA8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280fd0
	if (!ctx.cr6.eq) goto loc_82280FD0;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281134
	if (ctx.cr6.eq) goto loc_82281134;
loc_82280FD0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281024
	if (ctx.cr6.eq) goto loc_82281024;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281024
	if (ctx.cr6.eq) goto loc_82281024;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c3ce0
	ctx.lr = 0x82280FF0;
	sub_822C3CE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228100c
	if (ctx.cr6.eq) goto loc_8228100C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x822e8068
	ctx.lr = 0x82281004;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82281024
	if (ctx.cr6.eq) goto loc_82281024;
loc_8228100C:
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82281024:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82141340
	ctx.lr = 0x8228102C;
	sub_82141340(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_82281044:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82281060
	if (ctx.cr6.eq) goto loc_82281060;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82307ff8
	ctx.lr = 0x82281058;
	sub_82307FF8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8228112c
	if (ctx.cr6.eq) goto loc_8228112C;
loc_82281060:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82281044
	if (ctx.cr6.lt) goto loc_82281044;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82308060
	ctx.lr = 0x82281084;
	sub_82308060(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228110c
	if (ctx.cr6.eq) goto loc_8228110C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x822810b8
	if (!ctx.cr6.lt) goto loc_822810B8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8228110c
	if (!ctx.cr6.eq) goto loc_8228110C;
loc_822810B8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// beq cr6,0x822810d4
	if (ctx.cr6.eq) goto loc_822810D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822810D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822810D4:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822810e8
	if (ctx.cr6.eq) goto loc_822810E8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8227d040
	ctx.lr = 0x822810E8;
	sub_8227D040(ctx, base);
loc_822810E8:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82281134
	if (ctx.cr6.eq) goto loc_82281134;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823652d8
	ctx.lr = 0x82281100;
	sub_823652D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228110C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// lwz r11,340(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r11,400
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 400, ctx.xer);
	// ble cr6,0x82281134
	if (!ctx.cr6.gt) goto loc_82281134;
loc_8228112C:
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_82281134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82280FA0) {
	__imp__sub_82280FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r4,r11,14168
	ctx.r4.s64 = ctx.r11.s64 + 14168;
	// b 0x82280fa0
	sub_82280FA0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82281140) {
	__imp__sub_82281140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228115C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228115C) {
	__imp__sub_8228115C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-9012
	ctx.r8.s64 = ctx.r11.s64 + -9012;
	// stw r9,-9012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9012, ctx.r9.u32);
	// stw r3,-356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -356, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r8,-356
	ctx.r11.s64 = ctx.r8.s64 + -356;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8228118C:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,43
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 43, ctx.xer);
	// beq cr6,0x822811a4
	if (ctx.cr6.eq) goto loc_822811A4;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822811c8
	if (!ctx.cr6.eq) goto loc_822811C8;
loc_822811A4:
	// addi r10,r8,-356
	ctx.r10.s64 = ctx.r8.s64 + -356;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822811d4
	if (ctx.cr6.eq) goto loc_822811D4;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
loc_822811C8:
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228118c
	if (!ctx.cr6.eq) goto loc_8228118C;
loc_822811D4:
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82281160) {
	__imp__sub_82281160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822811DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822811DC) {
	__imp__sub_822811DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822811E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822811E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-4752
	ctx.r28.s64 = ctx.r11.s64 + -4752;
	// lwz r11,-4260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228127c
	if (!ctx.cr6.gt) goto loc_8228127C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r28,-4616
	ctx.r29.s64 = ctx.r28.s64 + -4616;
	// addi r26,r10,11584
	ctx.r26.s64 = ctx.r10.s64 + 11584;
	// addi r27,r11,11576
	ctx.r27.s64 = ctx.r11.s64 + 11576;
loc_82281218:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8227d8d0
	ctx.lr = 0x82281220;
	sub_8227D8D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e1ca0
	ctx.lr = 0x82281228;
	sub_820E1CA0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822e8058
	ctx.lr = 0x82281230;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82281254
	if (ctx.cr6.eq) goto loc_82281254;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e1ca0
	ctx.lr = 0x82281240;
	sub_820E1CA0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e8058
	ctx.lr = 0x82281248;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// bne cr6,0x82281258
	if (!ctx.cr6.eq) goto loc_82281258;
loc_82281254:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82281258:
	// bl 0x8227d8f0
	ctx.lr = 0x8228125C;
	sub_8227D8F0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281288
	if (!ctx.cr6.eq) goto loc_82281288;
	// lwz r11,-4260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82281218
	if (ctx.cr6.lt) goto loc_82281218;
loc_8228127C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82281288:
	// addi r11,r28,-4616
	ctx.r11.s64 = ctx.r28.s64 + -4616;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822811E0) {
	__imp__sub_822811E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822812A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4752, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822812A8) {
	__imp__sub_822812A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822812B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822812C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-9368
	ctx.r28.s64 = ctx.r11.s64 + -9368;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82281390
	if (!ctx.cr6.gt) goto loc_82281390;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r26,r10,-10692
	ctx.r26.s64 = ctx.r10.s64 + -10692;
	// addi r25,r11,-10684
	ctx.r25.s64 = ctx.r11.s64 + -10684;
loc_822812F4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8227d8d0
	ctx.lr = 0x822812FC;
	sub_8227D8D0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8228133c
	if (ctx.cr6.eq) goto loc_8228133C;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x820e1ca0
	ctx.lr = 0x82281310;
	sub_820E1CA0(ctx, base);
loc_82281310:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82281334
	if (ctx.cr6.eq) goto loc_82281334;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82281310
	if (ctx.cr6.eq) goto loc_82281310;
loc_82281334:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82281378
	if (!ctx.cr6.eq) goto loc_82281378;
loc_8228133C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e1ca0
	ctx.lr = 0x82281344;
	sub_820E1CA0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x8228134C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228135c
	if (!ctx.cr6.eq) goto loc_8228135C;
	// bl 0x82285548
	ctx.lr = 0x82281358;
	sub_82285548(ctx, base);
	// b 0x82281378
	goto loc_82281378;
loc_8228135C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e1ca0
	ctx.lr = 0x82281364;
	sub_820E1CA0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e8058
	ctx.lr = 0x8228136C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82281378
	if (!ctx.cr6.eq) goto loc_82281378;
	// bl 0x82285f50
	ctx.lr = 0x82281378;
	sub_82285F50(ctx, base);
loc_82281378:
	// bl 0x8227d8f0
	ctx.lr = 0x8228137C;
	sub_8227D8F0(ctx, base);
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822812f4
	if (ctx.cr6.lt) goto loc_822812F4;
loc_82281390:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822812B8) {
	__imp__sub_822812B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822813A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x822813b8
	if (!ctx.cr6.eq) goto loc_822813B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822813B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822814c8
	if (ctx.cr6.eq) goto loc_822814C8;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,-27340
	ctx.r29.s64 = ctx.r9.s64 + -27340;
	// addi r28,r8,-29844
	ctx.r28.s64 = ctx.r8.s64 + -29844;
loc_822813DC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82281408
	if (ctx.cr6.eq) goto loc_82281408;
loc_822813E8:
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x82281408
	if (ctx.cr6.eq) goto loc_82281408;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822813e8
	if (!ctx.cr6.eq) goto loc_822813E8;
loc_82281408:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x8228142c
	if (!ctx.cr6.lt) goto loc_8228142C;
	// subfic r5,r11,20
	ctx.xer.ca = ctx.r11.u32 <= 20;
	ctx.r5.s64 = 20 - ctx.r11.s64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x823de090
	ctx.lr = 0x82281424;
	sub_823DE090(ctx, base);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// b 0x82281430
	goto loc_82281430;
loc_8228142C:
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
loc_82281430:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82281440;
	sub_82280900(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822814b8
	if (ctx.cr6.eq) goto loc_822814B8;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82281480
	if (ctx.cr6.eq) goto loc_82281480;
loc_82281460:
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// beq cr6,0x82281480
	if (ctx.cr6.eq) goto loc_82281480;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82281460
	if (!ctx.cr6.eq) goto loc_82281460;
loc_82281480:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// beq cr6,0x82281490
	if (ctx.cr6.eq) goto loc_82281490;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82281490:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x822814A0;
	sub_82280900(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822813dc
	if (!ctx.cr6.eq) goto loc_822813DC;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822814B8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,11600
	ctx.r4.s64 = ctx.r11.s64 + 11600;
	// bl 0x82280900
	ctx.lr = 0x822814C8;
	sub_82280900(ctx, base);
loc_822814C8:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82281398) {
	__imp__sub_82281398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822814D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822814D0) {
	__imp__sub_822814D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822814D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822814D8) {
	__imp__sub_822814D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822814DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822814DC) {
	__imp__sub_822814DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822814E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822814E0) {
	__imp__sub_822814E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822814E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822814E4) {
	__imp__sub_822814E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822814E8) {
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
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db808
	ctx.lr = 0x82281504;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8228150C;
	sub_822DB8F0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822815c0
	if (ctx.cr6.eq) goto loc_822815C0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x8228152C;
	sub_82287B40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8228a2e8
	ctx.lr = 0x82281538;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82281568
	if (ctx.cr6.eq) goto loc_82281568;
loc_82281540:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233c500
	ctx.lr = 0x82281554;
	sub_8233C500(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8228a2e8
	ctx.lr = 0x82281560;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82281540
	if (!ctx.cr6.eq) goto loc_82281540;
loc_82281568:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a540
	ctx.lr = 0x82281578;
	sub_8228A540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822815c0
	if (ctx.cr6.eq) goto loc_822815C0;
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
loc_82281584:
	// lwz r11,-9384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9384);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822815a8
	if (ctx.cr6.eq) goto loc_822815A8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233c500
	ctx.lr = 0x822815A8;
	sub_8233C500(ctx, base);
loc_822815A8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a540
	ctx.lr = 0x822815B8;
	sub_8228A540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82281584
	if (!ctx.cr6.eq) goto loc_82281584;
loc_822815C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x822815C8;
	sub_822DB8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_822814E8) {
	__imp__sub_822814E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822815DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822815DC) {
	__imp__sub_822815DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822815E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228161c
	if (!ctx.cr6.eq) goto loc_8228161C;
loc_82281604:
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
loc_8228161C:
	// bl 0x82141b20
	ctx.lr = 0x82281620;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281604
	if (!ctx.cr6.eq) goto loc_82281604;
	// bl 0x82141c28
	ctx.lr = 0x82281630;
	sub_82141C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281604
	if (!ctx.cr6.eq) goto loc_82281604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x82281644;
	sub_82141280(ctx, base);
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

PPC_WEAK_FUNC(sub_822815E0) {
	__imp__sub_822815E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281658) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x822816a4
	if (ctx.cr6.eq) goto loc_822816A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11616
	ctx.r4.s64 = ctx.r11.s64 + 11616;
	// bl 0x82280900
	ctx.lr = 0x822816A0;
	sub_82280900(ctx, base);
	// b 0x822816ec
	goto loc_822816EC;
loc_822816A4:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x822816B4;
	sub_823DEC00(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x82310110
	ctx.lr = 0x822816BC;
	sub_82310110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f31,-12992(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -12992);
loc_822816C8:
	// bl 0x82310110
	ctx.lr = 0x822816CC;
	sub_82310110(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// ble cr6,0x822816c8
	if (!ctx.cr6.gt) goto loc_822816C8;
loc_822816EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82281658) {
	__imp__sub_82281658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4660
	ctx.r11.s64 = 305397760;
	// ori r11,r11,22136
	ctx.r11.u64 = ctx.r11.u64 | 22136;
	// stw r11,0(0)
	PPC_STORE_U32(0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82281708) {
	__imp__sub_82281708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82281718) {
	__imp__sub_82281718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228171C) {
	__imp__sub_8228171C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9456);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8228174c
	if (!ctx.cr6.eq) goto loc_8228174C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-9408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9408);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82281750
	if (ctx.cr6.eq) goto loc_82281750;
loc_8228174C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82281750:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82281768
	if (ctx.cr6.eq) goto loc_82281768;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822aaaa0
	sub_822AAAA0(ctx, base);
	return;
loc_82281768:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4840);
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x822aaaa0
	sub_822AAAA0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82281720) {
	__imp__sub_82281720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281778) {
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
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// lbz r11,905(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 905);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822817e4
	if (ctx.cr6.eq) goto loc_822817E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,11636
	ctx.r3.s64 = ctx.r11.s64 + 11636;
	// bl 0x822e20d0
	ctx.lr = 0x822817B0;
	sub_822E20D0(ctx, base);
	// lbz r11,905(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 905);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r4,r4,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r9,11156
	ctx.r3.s64 = ctx.r9.s64 + 11156;
	// stw r4,-16764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16764, ctx.r4.u32);
	// bl 0x822e2170
	ctx.lr = 0x822817D0;
	sub_822E2170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,905(r31)
	PPC_STORE_U8(ctx.r31.u32 + 905, ctx.r11.u8);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x822817E4;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_822817E4:
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

PPC_WEAK_FUNC(sub_82281778) {
	__imp__sub_82281778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822817F8) {
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
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// lbz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281880
	if (!ctx.cr6.eq) goto loc_82281880;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281880
	if (!ctx.cr6.eq) goto loc_82281880;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9452);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82281890
	if (ctx.cr6.eq) goto loc_82281890;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9028);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82281890
	if (ctx.cr6.eq) goto loc_82281890;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11676
	ctx.r4.s64 = ctx.r11.s64 + 11676;
	// bl 0x8227cf18
	ctx.lr = 0x8228185C;
	sub_8227CF18(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,11656
	ctx.r4.s64 = ctx.r9.s64 + 11656;
	// lwz r3,-9396(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9396);
	// bl 0x822e1fa8
	ctx.lr = 0x82281870;
	sub_822E1FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82281880:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stb r11,904(r3)
	PPC_STORE_U8(ctx.r3.u32 + 904, ctx.r11.u8);
	// bl 0x823f1114
	ctx.lr = 0x82281890;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_82281890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822817F8) {
	__imp__sub_822817F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822818A0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,12864
	ctx.r8.s64 = ctx.r11.s64 + 12864;
	// addi r3,r10,12852
	ctx.r3.s64 = ctx.r10.s64 + 12852;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x822e1618
	ctx.lr = 0x822818E0;
	sub_822E1618(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r31,r8,12844
	ctx.r31.s64 = ctx.r8.s64 + 12844;
	// stw r3,-4816(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4816, ctx.r3.u32);
	// addi r3,r5,12832
	ctx.r3.s64 = ctx.r5.s64 + 12832;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r7,12800
	ctx.r6.s64 = ctx.r7.s64 + 12800;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e17e0
	ctx.lr = 0x8228190C;
	sub_822E17E0(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r6,r4,12772
	ctx.r6.s64 = ctx.r4.s64 + 12772;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,12760
	ctx.r3.s64 = ctx.r3.s64 + 12760;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e17e0
	ctx.lr = 0x82281928;
	sub_822E17E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,22352
	ctx.r8.s64 = ctx.r11.s64 + 22352;
	// addi r3,r10,22340
	ctx.r3.s64 = ctx.r10.s64 + 22340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8228194C;
	sub_822E1618(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r8,12724
	ctx.r6.s64 = ctx.r8.s64 + 12724;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-9456(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9456, ctx.r3.u32);
	// addi r3,r7,12704
	ctx.r3.s64 = ctx.r7.s64 + 12704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82281970;
	sub_822E15D0(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r8,r5,12624
	ctx.r8.s64 = ctx.r5.s64 + 12624;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-4840(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4840, ctx.r3.u32);
	// addi r3,r4,12616
	ctx.r3.s64 = ctx.r4.s64 + 12616;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8228199C;
	sub_822E1618(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r6,r10,12596
	ctx.r6.s64 = ctx.r10.s64 + 12596;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-9408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9408, ctx.r3.u32);
	// addi r3,r9,12584
	ctx.r3.s64 = ctx.r9.s64 + 12584;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822819C0;
	sub_822E15D0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r6,12556
	ctx.r31.s64 = ctx.r6.s64 + 12556;
	// lfs f31,12240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lfs f30,5804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// stw r3,-9436(r7)
	PPC_STORE_U32(ctx.r7.u32 + -9436, ctx.r3.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r5,12540
	ctx.r3.s64 = ctx.r5.s64 + 12540;
	// lfs f29,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// li r7,8268
	ctx.r7.s64 = 8268;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x82281A08;
	sub_822E1660(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r9,12528
	ctx.r3.s64 = ctx.r9.s64 + 12528;
	// stw r11,-9400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9400, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// bl 0x822e1660
	ctx.lr = 0x82281A34;
	sub_822E1660(ctx, base);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r8,r6,12488
	ctx.r8.s64 = ctx.r6.s64 + 12488;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r3,-4828(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4828, ctx.r3.u32);
	// addi r3,r5,12476
	ctx.r3.s64 = ctx.r5.s64 + 12476;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82281A60;
	sub_822E1618(ctx, base);
	// lis r4,-31936
	ctx.r4.s64 = -2092957696;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,12408
	ctx.r8.s64 = ctx.r11.s64 + 12408;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-9412(r4)
	PPC_STORE_U32(ctx.r4.u32 + -9412, ctx.r3.u32);
	// addi r3,r10,12388
	ctx.r3.s64 = ctx.r10.s64 + 12388;
	// li r6,5000
	ctx.r6.s64 = 5000;
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822e1618
	ctx.lr = 0x82281A8C;
	sub_822E1618(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r8,r8,12368
	ctx.r8.s64 = ctx.r8.s64 + 12368;
	// stw r3,-9444(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9444, ctx.r3.u32);
	// addi r3,r7,22924
	ctx.r3.s64 = ctx.r7.s64 + 22924;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82281AB8;
	sub_822E1618(ctx, base);
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r4,12348
	ctx.r6.s64 = ctx.r4.s64 + 12348;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-9404(r5)
	PPC_STORE_U32(ctx.r5.u32 + -9404, ctx.r3.u32);
	// addi r3,r11,12336
	ctx.r3.s64 = ctx.r11.s64 + 12336;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e15d0
	ctx.lr = 0x82281ADC;
	sub_822E15D0(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r9,12292
	ctx.r6.s64 = ctx.r9.s64 + 12292;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-9384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9384, ctx.r3.u32);
	// addi r3,r8,12272
	ctx.r3.s64 = ctx.r8.s64 + 12272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82281B00;
	sub_822E15D0(ctx, base);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,12240
	ctx.r6.s64 = ctx.r6.s64 + 12240;
	// stw r3,-9428(r7)
	PPC_STORE_U32(ctx.r7.u32 + -9428, ctx.r3.u32);
	// addi r3,r5,12264
	ctx.r3.s64 = ctx.r5.s64 + 12264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82281B24;
	sub_822E15D0(ctx, base);
	// lis r4,-31936
	ctx.r4.s64 = -2092957696;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r11,12224
	ctx.r6.s64 = ctx.r11.s64 + 12224;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-9452(r4)
	PPC_STORE_U32(ctx.r4.u32 + -9452, ctx.r3.u32);
	// addi r3,r10,12208
	ctx.r3.s64 = ctx.r10.s64 + 12208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82281B48;
	sub_822E15D0(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r8,12160
	ctx.r6.s64 = ctx.r8.s64 + 12160;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r3,-4844(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4844, ctx.r3.u32);
	// addi r3,r7,12152
	ctx.r3.s64 = ctx.r7.s64 + 12152;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82281B6C;
	sub_822E15D0(ctx, base);
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r4,12088
	ctx.r6.s64 = ctx.r4.s64 + 12088;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-4848(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4848, ctx.r3.u32);
	// addi r3,r11,12076
	ctx.r3.s64 = ctx.r11.s64 + 12076;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e15d0
	ctx.lr = 0x82281B90;
	sub_822E15D0(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r9,12016
	ctx.r6.s64 = ctx.r9.s64 + 12016;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,-4784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4784, ctx.r3.u32);
	// addi r3,r8,11992
	ctx.r3.s64 = ctx.r8.s64 + 11992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82281BB4;
	sub_822E15D0(ctx, base);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r4,r5,-28736
	ctx.r4.s64 = ctx.r5.s64 + -28736;
	// stw r3,-9024(r7)
	PPC_STORE_U32(ctx.r7.u32 + -9024, ctx.r3.u32);
	// addi r6,r6,11920
	ctx.r6.s64 = ctx.r6.s64 + 11920;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e17e0
	ctx.lr = 0x82281BDC;
	sub_822E17E0(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r3,-4836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4836, ctx.r3.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,11904
	ctx.r3.s64 = ctx.r7.s64 + 11904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r8,11876
	ctx.r8.s64 = ctx.r8.s64 + 11876;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,64000
	ctx.r4.u64 = ctx.r4.u64 | 64000;
	// bl 0x822e1618
	ctx.lr = 0x82281C14;
	sub_822E1618(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r8,r5,11848
	ctx.r8.s64 = ctx.r5.s64 + 11848;
	// stw r3,-9016(r6)
	PPC_STORE_U32(ctx.r6.u32 + -9016, ctx.r3.u32);
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,62464
	ctx.r4.u64 = ctx.r4.u64 | 62464;
	// bl 0x822e1618
	ctx.lr = 0x82281C44;
	sub_822E1618(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r3,-4908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4908, ctx.r3.u32);
	// addi r3,r7,11816
	ctx.r3.s64 = ctx.r7.s64 + 11816;
	// addi r8,r9,11788
	ctx.r8.s64 = ctx.r9.s64 + 11788;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,59392
	ctx.r4.u64 = ctx.r4.u64 | 59392;
	// bl 0x822e1618
	ctx.lr = 0x82281C74;
	sub_822E1618(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r3,-4800(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4800, ctx.r3.u32);
	// addi r8,r5,11760
	ctx.r8.s64 = ctx.r5.s64 + 11760;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,56320
	ctx.r4.u64 = ctx.r4.u64 | 56320;
	// bl 0x822e1618
	ctx.lr = 0x82281CA4;
	sub_822E1618(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// addi r8,r9,11700
	ctx.r8.s64 = ctx.r9.s64 + 11700;
	// stw r3,-9376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9376, ctx.r3.u32);
	// addi r3,r7,11728
	ctx.r3.s64 = ctx.r7.s64 + 11728;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,55712
	ctx.r4.u64 = ctx.r4.u64 | 55712;
	// bl 0x822e1618
	ctx.lr = 0x82281CD4;
	sub_822E1618(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// stw r3,-9372(r6)
	PPC_STORE_U32(ctx.r6.u32 + -9372, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822818A0) {
	__imp__sub_822818A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82281CFC) {
	__imp__sub_82281CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82281D00) {
	__imp__sub_82281D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82281D04) {
	__imp__sub_82281D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281D08) {
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
	// bl 0x8238dee8
	ctx.lr = 0x82281D18;
	sub_8238DEE8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,-4848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4848);
	// beq cr6,0x82281d3c
	if (ctx.cr6.eq) goto loc_82281D3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e1f18
	ctx.lr = 0x82281D30;
	sub_822E1F18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12912
	ctx.r4.s64 = ctx.r10.s64 + 12912;
	// b 0x82281d4c
	goto loc_82281D4C;
loc_82281D3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f18
	ctx.lr = 0x82281D44;
	sub_822E1F18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
loc_82281D4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82281D54;
	sub_8227CF18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x82281D5C;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227f038
	ctx.lr = 0x82281D68;
	sub_8227F038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82281D08) {
	__imp__sub_82281D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281D78) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,12976
	ctx.r4.s64 = ctx.r11.s64 + 12976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82281DA0;
	sub_8227CF18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,12956
	ctx.r4.s64 = ctx.r10.s64 + 12956;
	// bl 0x8227cf18
	ctx.lr = 0x82281DB0;
	sub_8227CF18(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82281dd4
	if (ctx.cr6.eq) goto loc_82281DD4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,6656
	ctx.r3.s64 = ctx.r11.s64 + 6656;
	// bl 0x822e84f0
	ctx.lr = 0x82281DC8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82281DD4;
	sub_8227CF18(ctx, base);
loc_82281DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82281DDC;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x82281DE8;
	sub_8227F038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82281DF0;
	sub_82141340(ctx, base);
	// bl 0x822811e0
	ctx.lr = 0x82281DF4;
	sub_822811E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82281e0c
	if (ctx.cr6.eq) goto loc_82281E0C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12936
	ctx.r4.s64 = ctx.r11.s64 + 12936;
	// bl 0x8227cf18
	ctx.lr = 0x82281E0C;
	sub_8227CF18(ctx, base);
loc_82281E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82281E14;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x82281E20;
	sub_8227F038(ctx, base);
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

PPC_WEAK_FUNC(sub_82281D78) {
	__imp__sub_82281D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281E38) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,12976
	ctx.r4.s64 = ctx.r11.s64 + 12976;
	// bl 0x8227cf18
	ctx.lr = 0x82281E58;
	sub_8227CF18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,12956
	ctx.r4.s64 = ctx.r10.s64 + 12956;
	// bl 0x8227cf18
	ctx.lr = 0x82281E68;
	sub_8227CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82281E70;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x82281E7C;
	sub_8227F038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82281E84;
	sub_82141340(ctx, base);
	// bl 0x822811e0
	ctx.lr = 0x82281E88;
	sub_822811E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82281ea0
	if (ctx.cr6.eq) goto loc_82281EA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12936
	ctx.r4.s64 = ctx.r11.s64 + 12936;
	// bl 0x8227cf18
	ctx.lr = 0x82281EA0;
	sub_8227CF18(ctx, base);
loc_82281EA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82281EA8;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x82281EB4;
	sub_8227F038(ctx, base);
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

PPC_WEAK_FUNC(sub_82281E38) {
	__imp__sub_82281E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281EC8) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2052
	ctx.r9.s64 = ctx.r10.s64 + 2052;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82281f14
	if (ctx.cr6.eq) goto loc_82281F14;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r10,12996
	ctx.r9.s64 = ctx.r10.s64 + 12996;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_82281F14:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82176670
	ctx.lr = 0x82281F20;
	sub_82176670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82281EC8) {
	__imp__sub_82281EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281F30) {
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
	// bl 0x82176e20
	ctx.lr = 0x82281F48;
	sub_82176E20(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,13004
	ctx.r9.s64 = ctx.r11.s64 + 13004;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r8,r10,14536
	ctx.r8.s64 = ctx.r10.s64 + 14536;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82176670
	ctx.lr = 0x82281F88;
	sub_82176670(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r5,r7,2052
	ctx.r5.s64 = ctx.r7.s64 + 2052;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r4,r6,12996
	ctx.r4.s64 = ctx.r6.s64 + 12996;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82176670
	ctx.lr = 0x82281FC4;
	sub_82176670(ctx, base);
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

PPC_WEAK_FUNC(sub_82281F30) {
	__imp__sub_82281F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82281FDC) {
	__imp__sub_82281FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82281FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82281FE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822d3798
	ctx.lr = 0x82281FFC;
	sub_822D3798(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82282024
	if (!ctx.cr6.eq) goto loc_82282024;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,13080
	ctx.r4.s64 = ctx.r11.s64 + 13080;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8228201C;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82282024:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13032
	ctx.r4.s64 = ctx.r11.s64 + 13032;
	// bl 0x822d3ad0
	ctx.lr = 0x82282034;
	sub_822D3AD0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,13020
	ctx.r4.s64 = ctx.r10.s64 + 13020;
	// bl 0x822d3ad0
	ctx.lr = 0x82282044;
	sub_822D3AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212f4b8
	ctx.lr = 0x82282050;
	sub_8212F4B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128a98
	ctx.lr = 0x8228205C;
	sub_82128A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82286090
	ctx.lr = 0x82282064;
	sub_82286090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82138d98
	ctx.lr = 0x8228206C;
	sub_82138D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3788
	ctx.lr = 0x82282074;
	sub_822D3788(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82281FE0) {
	__imp__sub_82281FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228207C) {
	__imp__sub_8228207C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282080) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822d3798
	ctx.lr = 0x8228209C;
	sub_822D3798(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822820c0
	if (!ctx.cr6.eq) goto loc_822820C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,13080
	ctx.r4.s64 = ctx.r11.s64 + 13080;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822820BC;
	sub_82280900(ctx, base);
	// b 0x822820e0
	goto loc_822820E0;
loc_822820C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13032
	ctx.r4.s64 = ctx.r11.s64 + 13032;
	// bl 0x822d3ad0
	ctx.lr = 0x822820D0;
	sub_822D3AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82286148
	ctx.lr = 0x822820D8;
	sub_82286148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3788
	ctx.lr = 0x822820E0;
	sub_822D3788(ctx, base);
loc_822820E0:
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

PPC_WEAK_FUNC(sub_82282080) {
	__imp__sub_82282080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822820F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8228214c
	if (ctx.cr6.eq) goto loc_8228214C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13116
	ctx.r4.s64 = ctx.r11.s64 + 13116;
	// bl 0x82280900
	ctx.lr = 0x82282138;
	sub_82280900(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8228214C:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x82282164;
	sub_822E7E98(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r8,10152
	ctx.r5.s64 = ctx.r8.s64 + 10152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ea348
	ctx.lr = 0x82282178;
	sub_822EA348(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r7,13100
	ctx.r4.s64 = ctx.r7.s64 + 13100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8228218C;
	sub_82280900(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x82281fe0
	ctx.lr = 0x822821A4;
	sub_82281FE0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822820F8) {
	__imp__sub_822820F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822821B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82282204
	if (ctx.cr6.eq) goto loc_82282204;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13148
	ctx.r4.s64 = ctx.r11.s64 + 13148;
	// bl 0x82280900
	ctx.lr = 0x822821F4;
	sub_82280900(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82282204:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822e7e98
	ctx.lr = 0x8228221C;
	sub_822E7E98(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r9,10152
	ctx.r5.s64 = ctx.r9.s64 + 10152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ea348
	ctx.lr = 0x82282230;
	sub_822EA348(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r8,13100
	ctx.r4.s64 = ctx.r8.s64 + 13100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82282244;
	sub_82280900(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82282080
	ctx.lr = 0x8228224C;
	sub_82282080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822821B8) {
	__imp__sub_822821B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228225C) {
	__imp__sub_8228225C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9412);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228228c
	if (ctx.cr6.eq) goto loc_8228228C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
loc_8228228C:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r11,-4828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4828);
	// lwz r10,-9400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9400);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282260) {
	__imp__sub_82282260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822822AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822822AC) {
	__imp__sub_822822AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822822B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822822cc
	if (!ctx.cr6.eq) goto loc_822822CC;
	// li r11,5000
	ctx.r11.s64 = 5000;
	// b 0x822822d8
	goto loc_822822D8;
loc_822822CC:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9444);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_822822D8:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822822B0) {
	__imp__sub_822822B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822822E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// addi r5,r6,-4904
	ctx.r5.s64 = ctx.r6.s64 + -4904;
	// lwz r11,-9400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9400);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r4,-31936
	ctx.r4.s64 = -2092957696;
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f2,12(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fsubs f6,f1,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f2,40(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// fsubs f5,f2,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// stw r8,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r8.u32);
	// stb r9,-4904(r6)
	PPC_STORE_U8(ctx.r6.u32 + -4904, ctx.r9.u8);
	// stfs f1,8(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stb r7,28(r5)
	PPC_STORE_U8(ctx.r5.u32 + 28, ctx.r7.u8);
	// stfs f1,36(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lwz r11,-4812(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4812);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fdivs f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 / ctx.f13.f64));
	// fdivs f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// fdivs f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f13.f64));
	// fdivs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f8.u64);
	// fctiwz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r8,-4(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfd f7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f6.u64);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r9,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r9.u32);
	// stw r8,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r8.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822822E8) {
	__imp__sub_822822E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822823DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822823DC) {
	__imp__sub_822823DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822823E0) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r11,r11,-4904
	ctx.r11.s64 = ctx.r11.s64 + -4904;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228249c
	if (ctx.cr6.eq) goto loc_8228249C;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lwz r8,-9400(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9400);
	// beq cr6,0x82282488
	if (ctx.cr6.eq) goto loc_82282488;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fdivs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fadds f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// bge cr6,0x82282470
	if (!ctx.cr6.lt) goto loc_82282470;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82282488
	if (!ctx.cr6.lt) goto loc_82282488;
loc_82282470:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82282480
	if (!ctx.cr6.gt) goto loc_82282480;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82282488
	if (!ctx.cr6.gt) goto loc_82282488;
loc_82282480:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82282494
	if (!ctx.cr6.eq) goto loc_82282494;
loc_82282488:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82282494:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822e1f88
	ctx.lr = 0x8228249C;
	sub_822E1F88(ctx, base);
loc_8228249C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822823E0) {
	__imp__sub_822823E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822824AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822824AC) {
	__imp__sub_822824AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822824B0) {
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
	// bl 0x822823e0
	ctx.lr = 0x822824C8;
	sub_822823E0(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9412);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228252c
	if (ctx.cr6.eq) goto loc_8228252C;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// extsw r9,r31
	ctx.r9.s64 = ctx.r31.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// addi r6,r8,-9432
	ctx.r6.s64 = ctx.r8.s64 + -9432;
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + -8, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfs f0,14160(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 14160, temp.u32);
	// b 0x822825e0
	goto loc_822825E0;
loc_8228252C:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-9432
	ctx.r11.s64 = ctx.r11.s64 + -9432;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lwz r10,-9400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9400);
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,-4828(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4828);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82282588
	if (!ctx.cr6.eq) goto loc_82282588;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82282588
	if (!ctx.cr6.eq) goto loc_82282588;
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82282588
	if (!ctx.cr6.eq) goto loc_82282588;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,14160(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 14160, temp.u32);
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// b 0x822825e0
	goto loc_822825E0;
loc_82282588:
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,14160(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 14160, temp.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f0,f8,f0,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f7,f0
	ctx.f7.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
loc_822825E0:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x822825f0
	if (ctx.cr6.lt) goto loc_822825F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822825F0:
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

PPC_WEAK_FUNC(sub_822824B0) {
	__imp__sub_822824B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282604) {
	__imp__sub_82282604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282608) {
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
	// bl 0x8238f238
	ctx.lr = 0x82282618;
	sub_8238F238(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r11,r11,-4904
	ctx.r11.s64 = ctx.r11.s64 + -4904;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822826b0
	if (ctx.cr6.eq) goto loc_822826B0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8228269c
	if (ctx.cr6.eq) goto loc_8228269C;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bge cr6,0x82282684
	if (!ctx.cr6.lt) goto loc_82282684;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8228269c
	if (!ctx.cr6.lt) goto loc_8228269C;
loc_82282684:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82282694
	if (!ctx.cr6.gt) goto loc_82282694;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8228269c
	if (!ctx.cr6.gt) goto loc_8228269C;
loc_82282694:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x822826b4
	if (!ctx.cr6.eq) goto loc_822826B4;
loc_8228269C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// b 0x822826b4
	goto loc_822826B4;
loc_822826B0:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
loc_822826B4:
	// fmuls f13,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282608) {
	__imp__sub_82282608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822826D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822826E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8230be48
	ctx.lr = 0x822826EC;
	sub_8230BE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282888
	if (!ctx.cr6.eq) goto loc_82282888;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9028);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82282888
	if (ctx.cr6.eq) goto loc_82282888;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r29,r31,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r11,-30024
	ctx.r30.s64 = ctx.r11.s64 + -30024;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82282888
	if (!ctx.cr6.eq) goto loc_82282888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82125e58
	ctx.lr = 0x82282730;
	sub_82125E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282888
	if (!ctx.cr6.eq) goto loc_82282888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3ce0
	ctx.lr = 0x82282744;
	sub_822C3CE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82282888
	if (ctx.cr6.eq) goto loc_82282888;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,17888
	ctx.r9.s64 = ctx.r9.s64 + 17888;
loc_8228275C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x82282780
	if (ctx.cr6.eq) goto loc_82282780;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8228275c
	if (ctx.cr6.eq) goto loc_8228275C;
loc_82282780:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8228283c
	if (ctx.cr6.eq) goto loc_8228283C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,13212
	ctx.r9.s64 = ctx.r9.s64 + 13212;
loc_82282794:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822827b8
	if (ctx.cr6.eq) goto loc_822827B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82282794
	if (ctx.cr6.eq) goto loc_82282794;
loc_822827B8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8228283c
	if (ctx.cr6.eq) goto loc_8228283C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,13200
	ctx.r9.s64 = ctx.r9.s64 + 13200;
loc_822827CC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822827f0
	if (ctx.cr6.eq) goto loc_822827F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822827cc
	if (ctx.cr6.eq) goto loc_822827CC;
loc_822827F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82282800
	if (!ctx.cr6.eq) goto loc_82282800;
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x82282840
	goto loc_82282840;
loc_82282800:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,13184
	ctx.r10.s64 = ctx.r10.s64 + 13184;
loc_82282808:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8228282c
	if (ctx.cr6.eq) goto loc_8228282C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82282808
	if (ctx.cr6.eq) goto loc_82282808;
loc_8228282C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82282888
	if (!ctx.cr6.eq) goto loc_82282888;
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x82282840
	goto loc_82282840;
loc_8228283C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82282840:
	// bl 0x821285e0
	ctx.lr = 0x82282844;
	sub_821285E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82282888
	if (!ctx.cr6.gt) goto loc_82282888;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82282888
	if (!ctx.cr6.gt) goto loc_82282888;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r11,-9236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9236);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82282888
	if (!ctx.cr6.gt) goto loc_82282888;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stwx r31,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r31.u32);
	// bl 0x821285f0
	ctx.lr = 0x82282884;
	sub_821285F0(ctx, base);
	// bl 0x82121490
	ctx.lr = 0x82282888;
	sub_82121490(ctx, base);
loc_82282888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822826D8) {
	__imp__sub_822826D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82282898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// lwz r11,-9436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9436);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282924
	if (ctx.cr6.eq) goto loc_82282924;
	// lis r31,-31857
	ctx.r31.s64 = -2087780352;
	// lwz r11,15540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822828dc
	if (ctx.cr6.eq) goto loc_822828DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r5,r11,13248
	ctx.r5.s64 = ctx.r11.s64 + 13248;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228afc0
	ctx.lr = 0x822828D4;
	sub_8228AFC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15540, ctx.r11.u32);
loc_822828DC:
	// lis r29,-31936
	ctx.r29.s64 = -2092957696;
	// lwz r31,-4744(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4744);
	// bl 0x82310110
	ctx.lr = 0x822828E8;
	sub_82310110(ctx, base);
	// lwz r11,-9436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9436);
	// stw r3,-4744(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4744, ctx.r3.u32);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282924
	if (ctx.cr6.eq) goto loc_82282924;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// ble cr6,0x82282924
	if (!ctx.cr6.gt) goto loc_82282924;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82282924
	if (ctx.cr6.eq) goto loc_82282924;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r5,r11,13228
	ctx.r5.s64 = ctx.r11.s64 + 13228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228afc0
	ctx.lr = 0x82282924;
	sub_8228AFC0(ctx, base);
loc_82282924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82282890) {
	__imp__sub_82282890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228292C) {
	__imp__sub_8228292C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282930) {
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
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822829b4
	if (ctx.cr6.eq) goto loc_822829B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
	// bl 0x822b7268
	ctx.lr = 0x82282968;
	sub_822B7268(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82282974
	if (!ctx.cr6.eq) goto loc_82282974;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
loc_82282974:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x8228298c
	if (!ctx.cr6.eq) goto loc_8228298C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11536
	ctx.r4.s64 = ctx.r11.s64 + 11536;
	// b 0x82282994
	goto loc_82282994;
loc_8228298C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11548
	ctx.r4.s64 = ctx.r11.s64 + 11548;
loc_82282994:
	// bl 0x82280da8
	ctx.lr = 0x82282998;
	sub_82280DA8(ctx, base);
	// li r5,900
	ctx.r5.s64 = 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823de090
	ctx.lr = 0x822829A8;
	sub_823DE090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x822829B4;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_822829B4:
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

PPC_WEAK_FUNC(sub_82282930) {
	__imp__sub_82282930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822829C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,14160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,14000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82282a04
	if (!ctx.cr6.lt) goto loc_82282A04;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82282A04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82282a18
	if (ctx.cr6.eq) goto loc_82282A18;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82282A18:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822829C8) {
	__imp__sub_822829C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282A20) {
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
	// bl 0x821737f0
	ctx.lr = 0x82282A34;
	sub_821737F0(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82282a94
	if (!ctx.cr6.eq) goto loc_82282A94;
	// bl 0x82131c68
	ctx.lr = 0x82282A44;
	sub_82131C68(ctx, base);
	// bl 0x82173638
	ctx.lr = 0x82282A48;
	sub_82173638(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82176670
	ctx.lr = 0x82282A6C;
	sub_82176670(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r8,r10,2052
	ctx.r8.s64 = ctx.r10.s64 + 2052;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82176670
	ctx.lr = 0x82282A94;
	sub_82176670(ctx, base);
loc_82282A94:
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

PPC_WEAK_FUNC(sub_82282A20) {
	__imp__sub_82282A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282AA8) {
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
	// bl 0x82282a20
	ctx.lr = 0x82282AB8;
	sub_82282A20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x822c2b88
	ctx.lr = 0x82282AC4;
	sub_822C2B88(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x82282AC8;
	sub_82393CC8(ctx, base);
	// bl 0x82132118
	ctx.lr = 0x82282ACC;
	sub_82132118(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x82282AD0;
	sub_82393D48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282AA8) {
	__imp__sub_82282AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282AE0) {
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
	// bl 0x82310110
	ctx.lr = 0x82282AF0;
	sub_82310110(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4796
	ctx.r9.s64 = ctx.r10.s64 + -4796;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r3,-4812(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282AE0) {
	__imp__sub_82282AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282B30) {
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
	// bl 0x8233fcb0
	ctx.lr = 0x82282B40;
	sub_8233FCB0(ctx, base);
	// bl 0x82177500
	ctx.lr = 0x82282B44;
	sub_82177500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282B30) {
	__imp__sub_82282B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282B54) {
	__imp__sub_82282B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282B58) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x82282B6C;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282bcc
	if (ctx.cr6.eq) goto loc_82282BCC;
	// bl 0x82390f38
	ctx.lr = 0x82282B7C;
	sub_82390F38(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,13352
	ctx.r11.s64 = ctx.r11.s64 + 13352;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82282ba4
	if (ctx.cr6.eq) goto loc_82282BA4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82282BA4:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282bc0
	if (ctx.cr6.eq) goto loc_82282BC0;
	// bl 0x823ad840
	ctx.lr = 0x82282BB4;
	sub_823AD840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82282bc0
	if (!ctx.cr6.eq) goto loc_82282BC0;
	// bl 0x823aee78
	ctx.lr = 0x82282BC0;
	sub_823AEE78(ctx, base);
loc_82282BC0:
	// bl 0x82393ee8
	ctx.lr = 0x82282BC4;
	sub_82393EE8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// stw r3,-4824(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4824, ctx.r3.u32);
loc_82282BCC:
	// bl 0x82390b00
	ctx.lr = 0x82282BD0;
	sub_82390B00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ec4e8
	ctx.lr = 0x82282BDC;
	sub_822EC4E8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82282be8
	if (ctx.cr6.eq) goto loc_82282BE8;
	// bl 0x823aee78
	ctx.lr = 0x82282BE8;
	sub_823AEE78(ctx, base);
loc_82282BE8:
	// bl 0x8228bcc0
	ctx.lr = 0x82282BEC;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282bfc
	if (ctx.cr6.eq) goto loc_82282BFC;
	// bl 0x82390c00
	ctx.lr = 0x82282BFC;
	sub_82390C00(ctx, base);
loc_82282BFC:
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

PPC_WEAK_FUNC(sub_82282B58) {
	__imp__sub_82282B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282C10) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ec500
	ctx.lr = 0x82282C24;
	sub_822EC500(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x82282C28;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282c40
	if (ctx.cr6.eq) goto loc_82282C40;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r3,-4824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	// bl 0x82393e28
	ctx.lr = 0x82282C40;
	sub_82393E28(ctx, base);
loc_82282C40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282C10) {
	__imp__sub_82282C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282C50) {
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
	// bl 0x82131c68
	ctx.lr = 0x82282C60;
	sub_82131C68(ctx, base);
	// bl 0x82284c90
	ctx.lr = 0x82282C64;
	sub_82284C90(ctx, base);
	// bl 0x822ee2a8
	ctx.lr = 0x82282C68;
	sub_822EE2A8(ctx, base);
	// bl 0x822f26f8
	ctx.lr = 0x82282C6C;
	sub_822F26F8(ctx, base);
	// bl 0x82368538
	ctx.lr = 0x82282C70;
	sub_82368538(ctx, base);
	// bl 0x822547d8
	ctx.lr = 0x82282C74;
	sub_822547D8(ctx, base);
	// bl 0x822db1b8
	ctx.lr = 0x82282C78;
	sub_822DB1B8(ctx, base);
	// bl 0x822db948
	ctx.lr = 0x82282C7C;
	sub_822DB948(ctx, base);
	// bl 0x82176e78
	ctx.lr = 0x82282C80;
	sub_82176E78(ctx, base);
	// bl 0x822aaad0
	ctx.lr = 0x82282C84;
	sub_822AAAD0(ctx, base);
	// bl 0x8229e758
	ctx.lr = 0x82282C88;
	sub_8229E758(ctx, base);
	// bl 0x8229d0c0
	ctx.lr = 0x82282C8C;
	sub_8229D0C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282C50) {
	__imp__sub_82282C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282C9C) {
	__imp__sub_82282C9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282CA0) {
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x823de090
	ctx.lr = 0x82282CC4;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82282CA0) {
	__imp__sub_82282CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282CEC) {
	__imp__sub_82282CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282CF0) {
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
	// bl 0x82130f80
	ctx.lr = 0x82282D00;
	sub_82130F80(ctx, base);
	// bl 0x8233dcf0
	ctx.lr = 0x82282D04;
	sub_8233DCF0(ctx, base);
	// bl 0x82284c90
	ctx.lr = 0x82282D08;
	sub_82284C90(ctx, base);
	// bl 0x822ee2a8
	ctx.lr = 0x82282D0C;
	sub_822EE2A8(ctx, base);
	// bl 0x822f26f8
	ctx.lr = 0x82282D10;
	sub_822F26F8(ctx, base);
	// bl 0x82368538
	ctx.lr = 0x82282D14;
	sub_82368538(ctx, base);
	// bl 0x822db1b8
	ctx.lr = 0x82282D18;
	sub_822DB1B8(ctx, base);
	// bl 0x822db948
	ctx.lr = 0x82282D1C;
	sub_822DB948(ctx, base);
	// bl 0x82173cf8
	ctx.lr = 0x82282D20;
	sub_82173CF8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9456);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82282d4c
	if (!ctx.cr6.eq) goto loc_82282D4C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-9408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9408);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82282d50
	if (ctx.cr6.eq) goto loc_82282D50;
loc_82282D4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82282D50:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82282d68
	if (ctx.cr6.eq) goto loc_82282D68;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82282d74
	goto loc_82282D74;
loc_82282D68:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4840);
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
loc_82282D74:
	// bl 0x822aaaa0
	ctx.lr = 0x82282D78;
	sub_822AAAA0(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4912, ctx.r11.u32);
	// bl 0x82286978
	ctx.lr = 0x82282D88;
	sub_82286978(ctx, base);
	// bl 0x822f2658
	ctx.lr = 0x82282D8C;
	sub_822F2658(ctx, base);
	// bl 0x822ee258
	ctx.lr = 0x82282D90;
	sub_822EE258(ctx, base);
	// bl 0x82284c10
	ctx.lr = 0x82282D94;
	sub_82284C10(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-9432(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -9432, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282CF0) {
	__imp__sub_82282CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282DB4) {
	__imp__sub_82282DB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DB8) {
	PPC_FUNC_PROLOGUE();
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8229e0e8
	sub_8229E0E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82282DB8) {
	__imp__sub_82282DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,11704
	ctx.r4.s64 = ctx.r11.s64 + 11704;
	// b 0x822f28f8
	sub_822F28F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82282DC0) {
	__imp__sub_82282DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282DCC) {
	__imp__sub_82282DCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r4,r11,-7912
	ctx.r4.s64 = ctx.r11.s64 + -7912;
	// b 0x822f5a40
	sub_822F5A40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82282DD0) {
	__imp__sub_82282DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282DDC) {
	__imp__sub_82282DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// stw r3,-4748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4748, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282DE0) {
	__imp__sub_82282DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82282DEC) {
	__imp__sub_82282DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r10,-4748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4748);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-4748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4748, ctx.r10.u32);
	// b 0x82332950
	sub_82332950(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82282DF0) {
	__imp__sub_82282DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282E0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282E0C) {
	__imp__sub_82282E0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282E10) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,34
	ctx.r31.s64 = 34;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82282e7c
	if (ctx.cr6.eq) goto loc_82282E7C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82282e68
	if (ctx.cr6.eq) goto loc_82282E68;
	// subf. r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x82282e7c
	if (!ctx.cr0.gt) goto loc_82282E7C;
loc_82282E40:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82282e7c
	if (ctx.cr6.eq) goto loc_82282E7C;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x82282e68
	if (!ctx.cr6.gt) goto loc_82282E68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82282e40
	if (ctx.cr6.lt) goto loc_82282E40;
	// b 0x82282e7c
	goto loc_82282E7C;
loc_82282E68:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82282ea4
	if (!ctx.cr6.lt) goto loc_82282EA4;
	// stbx r31,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82282E7C:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82282ea4
	if (!ctx.cr6.lt) goto loc_82282EA4;
loc_82282E84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82282ea4
	if (ctx.cr6.eq) goto loc_82282EA4;
	// stbx r10,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82282e84
	if (ctx.cr6.lt) goto loc_82282E84;
loc_82282EA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82282ec4
	if (ctx.cr6.eq) goto loc_82282EC4;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82282ec4
	if (!ctx.cr6.lt) goto loc_82282EC4;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// stbx r31,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82282EC4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282E10) {
	__imp__sub_82282E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82282f18
	if (ctx.cr6.eq) goto loc_82282F18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82282f18
	if (ctx.cr6.eq) goto loc_82282F18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82282f18
	if (ctx.cr6.eq) goto loc_82282F18;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82282f18
	if (ctx.cr6.eq) goto loc_82282F18;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82282f18
	if (ctx.cr6.eq) goto loc_82282F18;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82282f18
	if (ctx.cr6.eq) goto loc_82282F18;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// li r3,46
	ctx.r3.s64 = 46;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82282F18:
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82282ED0) {
	__imp__sub_82282ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82282F20) {
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
	// stfd f1,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// addi r5,r11,13268
	ctx.r5.s64 = ctx.r11.s64 + 13268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb70
	ctx.lr = 0x82282F58;
	sub_823DFB70(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lwz r11,31492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31492);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82282fac
	if (ctx.cr6.eq) goto loc_82282FAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82282fac
	if (ctx.cr6.eq) goto loc_82282FAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82282fac
	if (ctx.cr6.eq) goto loc_82282FAC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82282fac
	if (ctx.cr6.eq) goto loc_82282FAC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82282fac
	if (ctx.cr6.eq) goto loc_82282FAC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82282fac
	if (ctx.cr6.eq) goto loc_82282FAC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// li r10,46
	ctx.r10.s64 = 46;
	// bne cr6,0x82282fb0
	if (!ctx.cr6.eq) goto loc_82282FB0;
loc_82282FAC:
	// li r10,44
	ctx.r10.s64 = 44;
loc_82282FB0:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82282fe8
	if (ctx.cr6.eq) goto loc_82282FE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82282fe8
	if (ctx.cr6.eq) goto loc_82282FE8;
loc_82282FC8:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// beq cr6,0x82282fe4
	if (ctx.cr6.eq) goto loc_82282FE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82282fc8
	if (ctx.cr6.lt) goto loc_82282FC8;
	// b 0x82282fe8
	goto loc_82282FE8;
loc_82282FE4:
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_82282FE8:
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

PPC_WEAK_FUNC(sub_82282F20) {
	__imp__sub_82282F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283000) {
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
	// bl 0x82390a98
	ctx.lr = 0x82283010;
	sub_82390A98(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82283028
	if (ctx.cr6.eq) goto loc_82283028;
	// bl 0x8233fb68
	ctx.lr = 0x82283028;
	sub_8233FB68(ctx, base);
loc_82283028:
	// bl 0x823b7e30
	ctx.lr = 0x8228302C;
	sub_823B7E30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82283000) {
	__imp__sub_82283000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228303C) {
	__imp__sub_8228303C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283040) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82283040) {
	__imp__sub_82283040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283048) {
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
loc_82283064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131a08
	ctx.lr = 0x8228306C;
	sub_82131A08(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82283064
	if (ctx.cr6.lt) goto loc_82283064;
	// bl 0x82133be0
	ctx.lr = 0x8228307C;
	sub_82133BE0(ctx, base);
	// bl 0x82287898
	ctx.lr = 0x82283080;
	sub_82287898(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e6f8
	ctx.lr = 0x82283088;
	sub_8233E6F8(ctx, base);
	// bl 0x82282cf0
	ctx.lr = 0x8228308C;
	sub_82282CF0(ctx, base);
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

PPC_WEAK_FUNC(sub_82283048) {
	__imp__sub_82283048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822830A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822830A4) {
	__imp__sub_822830A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822830A8) {
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
	// bl 0x82283048
	ctx.lr = 0x822830B8;
	sub_82283048(ctx, base);
	// bl 0x82131ff8
	ctx.lr = 0x822830BC;
	sub_82131FF8(ctx, base);
	// bl 0x82282a20
	ctx.lr = 0x822830C0;
	sub_82282A20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x822c2b88
	ctx.lr = 0x822830CC;
	sub_822C2B88(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x822830D0;
	sub_82393CC8(ctx, base);
	// bl 0x82132118
	ctx.lr = 0x822830D4;
	sub_82132118(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x822830D8;
	sub_82393D48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822830A8) {
	__imp__sub_822830A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822830E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822830F0;
	__savegprlr_28(ctx, base);
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82282b58
	ctx.lr = 0x82283118;
	sub_82282B58(ctx, base);
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r31,r11,-4824
	ctx.r31.s64 = ctx.r11.s64 + -4824;
	// lwz r11,-4832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228314c
	if (!ctx.cr6.gt) goto loc_8228314C;
	// addi r3,r31,-4184
	ctx.r3.s64 = ctx.r31.s64 + -4184;
	// bl 0x82280e68
	ctx.lr = 0x82283138;
	sub_82280E68(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4804);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8230d720
	ctx.lr = 0x82283148;
	sub_8230D720(ctx, base);
	// lwz r11,-4832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4832);
loc_8228314C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82283168
	if (!ctx.cr6.gt) goto loc_82283168;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,-4184
	ctx.r4.s64 = ctx.r31.s64 + -4184;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// bl 0x8230d720
	ctx.lr = 0x82283164;
	sub_8230D720(ctx, base);
	// lwz r11,-4832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4832);
loc_82283168:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bne cr6,0x822831a4
	if (!ctx.cr6.eq) goto loc_822831A4;
	// lbz r10,-4184(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822831a4
	if (ctx.cr6.eq) goto loc_822831A4;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82283180:
	// bl 0x822ec500
	ctx.lr = 0x82283184;
	sub_822EC500(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x82283188;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228319c
	if (ctx.cr6.eq) goto loc_8228319C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82393e28
	ctx.lr = 0x8228319C;
	sub_82393E28(ctx, base);
loc_8228319C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822831A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,-4832(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4832, ctx.r11.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r3,r31,-4184
	ctx.r3.s64 = ctx.r31.s64 + -4184;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x822831CC;
	sub_823E06D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-89(r31)
	PPC_STORE_U8(ctx.r31.u32 + -89, ctx.r11.u8);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x822831ec
	if (ctx.cr6.eq) goto loc_822831EC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822831ec
	if (ctx.cr6.eq) goto loc_822831EC;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82283210
	if (!ctx.cr6.eq) goto loc_82283210;
loc_822831EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,13292
	ctx.r3.s64 = ctx.r11.s64 + 13292;
	// bl 0x823617c0
	ctx.lr = 0x822831F8;
	sub_823617C0(ctx, base);
	// addi r3,r31,-4184
	ctx.r3.s64 = ctx.r31.s64 + -4184;
	// bl 0x823617c0
	ctx.lr = 0x82283200;
	sub_823617C0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,13276
	ctx.r3.s64 = ctx.r10.s64 + 13276;
	// bl 0x823617c0
	ctx.lr = 0x8228320C;
	sub_823617C0(ctx, base);
	// bl 0x82360830
	ctx.lr = 0x82283210;
	sub_82360830(ctx, base);
loc_82283210:
	// bl 0x8228bc88
	ctx.lr = 0x82283214;
	sub_8228BC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82283230
	if (ctx.cr6.eq) goto loc_82283230;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,-4184
	ctx.r4.s64 = ctx.r31.s64 + -4184;
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// bl 0x8230d720
	ctx.lr = 0x82283230;
	sub_8230D720(ctx, base);
loc_82283230:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x822832bc
	if (ctx.cr6.eq) goto loc_822832BC;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// beq cr6,0x822832bc
	if (ctx.cr6.eq) goto loc_822832BC;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x82283250
	if (!ctx.cr6.eq) goto loc_82283250;
	// bl 0x82123b30
	ctx.lr = 0x8228324C;
	sub_82123B30(ctx, base);
	// b 0x82283300
	goto loc_82283300;
loc_82283250:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// bne cr6,0x822832b0
	if (!ctx.cr6.eq) goto loc_822832B0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4912, ctx.r11.u32);
	// lwz r11,332(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82283304
	if (ctx.cr6.eq) goto loc_82283304;
	// bl 0x8228bcc0
	ctx.lr = 0x8228327C;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82283304
	if (ctx.cr6.eq) goto loc_82283304;
	// addi r3,r31,-4184
	ctx.r3.s64 = ctx.r31.s64 + -4184;
	// bl 0x82280e68
	ctx.lr = 0x82283290;
	sub_82280E68(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x8228329C;
	sub_822C4C00(ctx, base);
loc_8228329C:
	// lwz r11,-4832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4832);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-4832(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4832, ctx.r11.u32);
	// b 0x82283180
	goto loc_82283180;
loc_822832B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4912, ctx.r11.u32);
	// b 0x82283304
	goto loc_82283304;
loc_822832BC:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822832d0
	if (!ctx.cr6.eq) goto loc_822832D0;
	// bl 0x82123b30
	ctx.lr = 0x822832D0;
	sub_82123B30(ctx, base);
loc_822832D0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r29,r11,28832
	ctx.r29.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82283300
	if (ctx.cr6.eq) goto loc_82283300;
	// addi r3,r31,-4184
	ctx.r3.s64 = ctx.r31.s64 + -4184;
	// bl 0x82280e68
	ctx.lr = 0x822832EC;
	sub_82280E68(ctx, base);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r10.u32);
	// bne cr6,0x8228329c
	if (!ctx.cr6.eq) goto loc_8228329C;
loc_82283300:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82283304:
	// stw r29,-4196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4196, ctx.r29.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ec500
	ctx.lr = 0x82283310;
	sub_822EC500(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x82283314;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82283328
	if (ctx.cr6.eq) goto loc_82283328;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82393e28
	ctx.lr = 0x82283328;
	sub_82393E28(ctx, base);
loc_82283328:
	// bl 0x8233fd88
	ctx.lr = 0x8228332C;
	sub_8233FD88(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x82283334;
	sub_8228BD10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823e08c0
	ctx.lr = 0x8228333C;
	sub_823E08C0(ctx, base);
}

PPC_WEAK_FUNC(sub_822830E8) {
	__imp__sub_822830E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228333C) {
	__imp__sub_8228333C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283340) {
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
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822833a4
	if (ctx.cr6.eq) goto loc_822833A4;
	// bl 0x82282b58
	ctx.lr = 0x82283364;
	sub_82282B58(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r31,-4832(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// bl 0x822ec500
	ctx.lr = 0x82283370;
	sub_822EC500(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x82283374;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228338c
	if (ctx.cr6.eq) goto loc_8228338C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r3,-4824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	// bl 0x82393e28
	ctx.lr = 0x8228338C;
	sub_82393E28(ctx, base);
loc_8228338C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822833a4
	if (ctx.cr6.eq) goto loc_822833A4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x8228339C;
	sub_8228BD10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823e08c0
	ctx.lr = 0x822833A4;
	sub_823E08C0(ctx, base);
loc_822833A4:
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

PPC_WEAK_FUNC(sub_82283340) {
	__imp__sub_82283340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822833B8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13372
	ctx.r4.s64 = ctx.r11.s64 + 13372;
	// bl 0x82280900
	ctx.lr = 0x822833D8;
	sub_82280900(ctx, base);
	// bl 0x82393ee8
	ctx.lr = 0x822833DC;
	sub_82393EE8(ctx, base);
	// bl 0x82390a98
	ctx.lr = 0x822833E0;
	sub_82390A98(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r11,-9384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9384);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822833f8
	if (ctx.cr6.eq) goto loc_822833F8;
	// bl 0x8233fb68
	ctx.lr = 0x822833F8;
	sub_8233FB68(ctx, base);
loc_822833F8:
	// bl 0x823b7e30
	ctx.lr = 0x822833FC;
	sub_823B7E30(ctx, base);
	// bl 0x822aaa08
	ctx.lr = 0x82283400;
	sub_822AAA08(ctx, base);
	// bl 0x8221cdf8
	ctx.lr = 0x82283404;
	sub_8221CDF8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822834a8
	if (!ctx.cr6.eq) goto loc_822834A8;
	// bl 0x822dc088
	ctx.lr = 0x82283418;
	sub_822DC088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82283424
	if (!ctx.cr6.eq) goto loc_82283424;
	// bl 0x822dbe08
	ctx.lr = 0x82283424;
	sub_822DBE08(ctx, base);
loc_82283424:
	// bl 0x822db528
	ctx.lr = 0x82283428;
	sub_822DB528(ctx, base);
	// bl 0x822db348
	ctx.lr = 0x8228342C;
	sub_822DB348(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// bl 0x82142e90
	ctx.lr = 0x82283438;
	sub_82142E90(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8228343C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821333a0
	ctx.lr = 0x82283444;
	sub_821333A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8228343c
	if (ctx.cr6.lt) goto loc_8228343C;
	// bl 0x82133430
	ctx.lr = 0x82283454;
	sub_82133430(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235d1e8
	ctx.lr = 0x8228345C;
	sub_8235D1E8(ctx, base);
	// bl 0x82287898
	ctx.lr = 0x82283460;
	sub_82287898(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,13352
	ctx.r3.s64 = ctx.r11.s64 + 13352;
	// bl 0x8233e6f8
	ctx.lr = 0x8228346C;
	sub_8233E6F8(ctx, base);
	// bl 0x8230af50
	ctx.lr = 0x82283470;
	sub_8230AF50(ctx, base);
	// bl 0x82133e90
	ctx.lr = 0x82283474;
	sub_82133E90(ctx, base);
	// bl 0x82131c68
	ctx.lr = 0x82283478;
	sub_82131C68(ctx, base);
	// bl 0x82284c90
	ctx.lr = 0x8228347C;
	sub_82284C90(ctx, base);
	// bl 0x822ee2a8
	ctx.lr = 0x82283480;
	sub_822EE2A8(ctx, base);
	// bl 0x822f26f8
	ctx.lr = 0x82283484;
	sub_822F26F8(ctx, base);
	// bl 0x82368538
	ctx.lr = 0x82283488;
	sub_82368538(ctx, base);
	// bl 0x822547d8
	ctx.lr = 0x8228348C;
	sub_822547D8(ctx, base);
	// bl 0x822db1b8
	ctx.lr = 0x82283490;
	sub_822DB1B8(ctx, base);
	// bl 0x822db948
	ctx.lr = 0x82283494;
	sub_822DB948(ctx, base);
	// bl 0x82176e78
	ctx.lr = 0x82283498;
	sub_82176E78(ctx, base);
	// bl 0x822aaad0
	ctx.lr = 0x8228349C;
	sub_822AAAD0(ctx, base);
	// bl 0x8229e758
	ctx.lr = 0x822834A0;
	sub_8229E758(ctx, base);
	// bl 0x8229d0c0
	ctx.lr = 0x822834A4;
	sub_8229D0C0(ctx, base);
	// bl 0x822dbf48
	ctx.lr = 0x822834A8;
	sub_822DBF48(ctx, base);
loc_822834A8:
	// bl 0x8230def8
	ctx.lr = 0x822834AC;
	sub_8230DEF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822833B8) {
	__imp__sub_822833B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822834C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822834C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r30,-32191
	ctx.r30.s64 = -2109669376;
	// addi r29,r11,-27364
	ctx.r29.s64 = ctx.r11.s64 + -27364;
	// addi r31,r10,13388
	ctx.r31.s64 = ctx.r10.s64 + 13388;
loc_822834E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8230d980
	ctx.lr = 0x822834E8;
	sub_8230D980(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822834F8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822834f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822834F8;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x822835b4
	if (ctx.cr6.lt) goto loc_822835B4;
	// beq cr6,0x82283544
	if (ctx.cr6.eq) goto loc_82283544;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8228352c
	if (ctx.cr6.lt) goto loc_8228352C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822830e8
	ctx.lr = 0x82283528;
	sub_822830E8(ctx, base);
	// b 0x822834e0
	goto loc_822834E0;
loc_8228352C:
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8227cf18
	ctx.lr = 0x82283534;
	sub_8227CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82283540;
	sub_8227CF18(ctx, base);
	// b 0x822834e0
	goto loc_822834E0;
loc_82283544:
	// lwz r11,4688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82283560
	if (!ctx.cr6.eq) goto loc_82283560;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82130cf8
	ctx.lr = 0x8228355C;
	sub_82130CF8(ctx, base);
	// b 0x822834e0
	goto loc_822834E0;
loc_82283560:
	// bl 0x82141b20
	ctx.lr = 0x82283564;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82283580
	if (ctx.cr6.eq) goto loc_82283580;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82130cf8
	ctx.lr = 0x8228357C;
	sub_82130CF8(ctx, base);
	// b 0x822834e0
	goto loc_822834E0;
loc_82283580:
	// bl 0x82141c28
	ctx.lr = 0x82283584;
	sub_82141C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822835a0
	if (ctx.cr6.eq) goto loc_822835A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82130cf8
	ctx.lr = 0x8228359C;
	sub_82130CF8(ctx, base);
	// b 0x822834e0
	goto loc_822834E0;
loc_822835A0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82141280
	ctx.lr = 0x822835A8;
	sub_82141280(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82130cf8
	ctx.lr = 0x822835B0;
	sub_82130CF8(ctx, base);
	// b 0x822834e0
	goto loc_822834E0;
loc_822835B4:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822835cc
	if (!ctx.cr6.eq) goto loc_822835CC;
	// bl 0x822814e8
	ctx.lr = 0x822835CC;
	sub_822814E8(ctx, base);
loc_822835CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822834C0) {
	__imp__sub_822834C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822835D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822835D4) {
	__imp__sub_822835D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822835D8) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82283624
	if (!ctx.cr6.gt) goto loc_82283624;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,13448
	ctx.r4.s64 = ctx.r11.s64 + 13448;
	// bl 0x822830e8
	ctx.lr = 0x82283614;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82283624:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13424
	ctx.r4.s64 = ctx.r11.s64 + 13424;
	// bl 0x822830e8
	ctx.lr = 0x82283634;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822835D8) {
	__imp__sub_822835D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82283644) {
	__imp__sub_82283644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82283650;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r11,-10680
	ctx.r27.s64 = ctx.r11.s64 + -10680;
	// addi r26,r10,-10524
	ctx.r26.s64 = ctx.r10.s64 + -10524;
	// addi r25,r9,-10528
	ctx.r25.s64 = ctx.r9.s64 + -10528;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,2188
	ctx.r8.s64 = ctx.r11.s64 + 2188;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r10,13908
	ctx.r4.s64 = ctx.r10.s64 + 13908;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82283698;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281160
	ctx.lr = 0x822836A0;
	sub_82281160(ctx, base);
	// bl 0x822a1540
	ctx.lr = 0x822836A4;
	sub_822A1540(ctx, base);
	// bl 0x822e7be8
	ctx.lr = 0x822836A8;
	sub_822E7BE8(ctx, base);
	// bl 0x8227ce38
	ctx.lr = 0x822836AC;
	sub_8227CE38(ctx, base);
	// bl 0x8227f2f0
	ctx.lr = 0x822836B0;
	sub_8227F2F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822812b8
	ctx.lr = 0x822836B8;
	sub_822812B8(ctx, base);
	// bl 0x822818a0
	ctx.lr = 0x822836BC;
	sub_822818A0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r9,13900
	ctx.r31.s64 = ctx.r9.s64 + 13900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5020
	ctx.lr = 0x822836D0;
	sub_822E5020(ctx, base);
	// bl 0x822dadb8
	ctx.lr = 0x822836D4;
	sub_822DADB8(ctx, base);
	// bl 0x8229d080
	ctx.lr = 0x822836D8;
	sub_8229D080(ctx, base);
	// bl 0x8229e718
	ctx.lr = 0x822836DC;
	sub_8229E718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e50f0
	ctx.lr = 0x822836E8;
	sub_822E50F0(ctx, base);
	// bl 0x822dc2a8
	ctx.lr = 0x822836EC;
	sub_822DC2A8(ctx, base);
	// bl 0x82122da8
	ctx.lr = 0x822836F0;
	sub_82122DA8(ctx, base);
	// bl 0x8228b428
	ctx.lr = 0x822836F4;
	sub_8228B428(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r8,13884
	ctx.r4.s64 = ctx.r8.s64 + 13884;
	// bl 0x82280900
	ctx.lr = 0x82283704;
	sub_82280900(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82283708;
	sub_82310110(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r7,13876
	ctx.r30.s64 = ctx.r7.s64 + 13876;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5020
	ctx.lr = 0x82283720;
	sub_822E5020(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r6,13868
	ctx.r29.s64 = ctx.r6.s64 + 13868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e5020
	ctx.lr = 0x82283734;
	sub_822E5020(ctx, base);
	// bl 0x82132158
	ctx.lr = 0x82283738;
	sub_82132158(ctx, base);
	// bl 0x8238f0a8
	ctx.lr = 0x8228373C;
	sub_8238F0A8(ctx, base);
	// bl 0x82304010
	ctx.lr = 0x82283740;
	sub_82304010(ctx, base);
	// bl 0x822e5bc8
	ctx.lr = 0x82283744;
	sub_822E5BC8(ctx, base);
	// lis r5,-31810
	ctx.r5.s64 = -2084700160;
	// addi r3,r5,-360
	ctx.r3.s64 = ctx.r5.s64 + -360;
	// bl 0x821426f8
	ctx.lr = 0x82283750;
	sub_821426F8(ctx, base);
	// bl 0x822dcbb8
	ctx.lr = 0x82283754;
	sub_822DCBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e50f0
	ctx.lr = 0x82283760;
	sub_822E50F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e50f0
	ctx.lr = 0x8228376C;
	sub_822E50F0(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82283770;
	sub_82310110(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// subf r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r4,r4,13848
	ctx.r4.s64 = ctx.r4.s64 + 13848;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82283784;
	sub_82280900(ctx, base);
	// bl 0x823b7a40
	ctx.lr = 0x82283788;
	sub_823B7A40(ctx, base);
	// bl 0x8212f698
	ctx.lr = 0x8228378C;
	sub_8212F698(ctx, base);
	// bl 0x821293c0
	ctx.lr = 0x82283790;
	sub_821293C0(ctx, base);
	// bl 0x82128618
	ctx.lr = 0x82283794;
	sub_82128618(ctx, base);
	// bl 0x82139018
	ctx.lr = 0x82283798;
	sub_82139018(ctx, base);
	// bl 0x8230df88
	ctx.lr = 0x8228379C;
	sub_8230DF88(ctx, base);
	// bl 0x8223c780
	ctx.lr = 0x822837A0;
	sub_8223C780(ctx, base);
	// bl 0x82281f30
	ctx.lr = 0x822837A4;
	sub_82281F30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,12936
	ctx.r28.s64 = ctx.r11.s64 + 12936;
	// addi r30,r10,12956
	ctx.r30.s64 = ctx.r10.s64 + 12956;
	// addi r29,r9,12976
	ctx.r29.s64 = ctx.r9.s64 + 12976;
loc_822837C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227cf18
	ctx.lr = 0x822837CC;
	sub_8227CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227cf18
	ctx.lr = 0x822837D8;
	sub_8227CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x822837E0;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x822837EC;
	sub_8227F038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x822837F4;
	sub_82141340(ctx, base);
	// bl 0x822811e0
	ctx.lr = 0x822837F8;
	sub_822811E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228380c
	if (ctx.cr6.eq) goto loc_8228380C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227cf18
	ctx.lr = 0x8228380C;
	sub_8227CF18(ctx, base);
loc_8228380C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82283814;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x82283820;
	sub_8227F038(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x822837c0
	if (ctx.cr6.lt) goto loc_822837C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x82283834;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227f038
	ctx.lr = 0x82283840;
	sub_8227F038(ctx, base);
	// bl 0x822d3c48
	ctx.lr = 0x82283844;
	sub_822D3C48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822812b8
	ctx.lr = 0x8228384C;
	sub_822812B8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-4780
	ctx.r28.s64 = ctx.r11.s64 + -4780;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r9,13828
	ctx.r6.s64 = ctx.r9.s64 + 13828;
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r8,13812
	ctx.r3.s64 = ctx.r8.s64 + 13812;
	// stfs f31,-4652(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -4652, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8228387C;
	sub_822E15D0(ctx, base);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r8,r6,13748
	ctx.r8.s64 = ctx.r6.s64 + 13748;
	// li r6,120
	ctx.r6.s64 = 120;
	// stw r3,-9028(r7)
	PPC_STORE_U32(ctx.r7.u32 + -9028, ctx.r3.u32);
	// addi r3,r5,13724
	ctx.r3.s64 = ctx.r5.s64 + 13724;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x822e1618
	ctx.lr = 0x822838A8;
	sub_822E1618(ctx, base);
	// lis r4,-31936
	ctx.r4.s64 = -2092957696;
	// stw r3,-9236(r4)
	PPC_STORE_U32(ctx.r4.u32 + -9236, ctx.r3.u32);
	// bl 0x8230ac70
	ctx.lr = 0x822838B4;
	sub_8230AC70(ctx, base);
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
	// lwz r11,-9456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9456);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82283938
	if (ctx.cr6.eq) goto loc_82283938;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-4620
	ctx.r5.s64 = ctx.r11.s64 + -4620;
	// addi r3,r9,2164
	ctx.r3.s64 = ctx.r9.s64 + 2164;
	// addi r4,r10,13784
	ctx.r4.s64 = ctx.r10.s64 + 13784;
	// bl 0x8227da10
	ctx.lr = 0x822838E4;
	sub_8227DA10(ctx, base);
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,-4640
	ctx.r5.s64 = ctx.r8.s64 + -4640;
	// addi r3,r6,13716
	ctx.r3.s64 = ctx.r6.s64 + 13716;
	// addi r4,r7,5896
	ctx.r4.s64 = ctx.r7.s64 + 5896;
	// bl 0x8227da10
	ctx.lr = 0x82283900;
	sub_8227DA10(ctx, base);
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r5,-4660
	ctx.r5.s64 = ctx.r5.s64 + -4660;
	// addi r3,r3,13708
	ctx.r3.s64 = ctx.r3.s64 + 13708;
	// addi r4,r4,5720
	ctx.r4.s64 = ctx.r4.s64 + 5720;
	// bl 0x8227da10
	ctx.lr = 0x8228391C;
	sub_8227DA10(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-4680
	ctx.r5.s64 = ctx.r11.s64 + -4680;
	// addi r3,r9,24132
	ctx.r3.s64 = ctx.r9.s64 + 24132;
	// addi r4,r10,5912
	ctx.r4.s64 = ctx.r10.s64 + 5912;
	// bl 0x8227da10
	ctx.lr = 0x82283938;
	sub_8227DA10(ctx, base);
loc_82283938:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,-4700
	ctx.r5.s64 = ctx.r11.s64 + -4700;
	// addi r3,r9,13700
	ctx.r3.s64 = ctx.r9.s64 + 13700;
	// addi r4,r10,13240
	ctx.r4.s64 = ctx.r10.s64 + 13240;
	// bl 0x8227da10
	ctx.lr = 0x82283954;
	sub_8227DA10(ctx, base);
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,-4720
	ctx.r5.s64 = ctx.r8.s64 + -4720;
	// addi r3,r6,13688
	ctx.r3.s64 = ctx.r6.s64 + 13688;
	// addi r4,r7,8440
	ctx.r4.s64 = ctx.r7.s64 + 8440;
	// bl 0x8227da10
	ctx.lr = 0x82283970;
	sub_8227DA10(ctx, base);
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r5,-4740
	ctx.r5.s64 = ctx.r5.s64 + -4740;
	// addi r3,r3,13672
	ctx.r3.s64 = ctx.r3.s64 + 13672;
	// addi r4,r4,8632
	ctx.r4.s64 = ctx.r4.s64 + 8632;
	// bl 0x8227da10
	ctx.lr = 0x8228398C;
	sub_8227DA10(ctx, base);
	// bl 0x82272b50
	ctx.lr = 0x82283990;
	sub_82272B50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r11,13652
	ctx.r3.s64 = ctx.r11.s64 + 13652;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822839AC;
	sub_822E84F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r7,r10,13644
	ctx.r7.s64 = ctx.r10.s64 + 13644;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r9,13628
	ctx.r6.s64 = ctx.r9.s64 + 13628;
	// addi r4,r8,-28736
	ctx.r4.s64 = ctx.r8.s64 + -28736;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822e17e0
	ctx.lr = 0x822839D4;
	sub_822E17E0(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,-9388(r6)
	PPC_STORE_U32(ctx.r6.u32 + -9388, ctx.r3.u32);
	// bl 0x822e1fa8
	ctx.lr = 0x822839E4;
	sub_822E1FA8(ctx, base);
	// bl 0x8230da68
	ctx.lr = 0x822839E8;
	sub_8230DA68(ctx, base);
	// mftb r5
	ctx.r5.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// bl 0x822897b8
	ctx.lr = 0x822839F4;
	sub_822897B8(ctx, base);
	// bl 0x822a29c0
	ctx.lr = 0x822839F8;
	sub_822A29C0(ctx, base);
	// bl 0x822aaa20
	ctx.lr = 0x822839FC;
	sub_822AAA20(ctx, base);
	// lwz r11,-9456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9456);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82283a24
	if (!ctx.cr6.eq) goto loc_82283A24;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-9408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9408);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82283a28
	if (ctx.cr6.eq) goto loc_82283A28;
loc_82283A24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82283A28:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82283a40
	if (ctx.cr6.eq) goto loc_82283A40;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82283a4c
	goto loc_82283A4C;
loc_82283A40:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4840);
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
loc_82283A4C:
	// bl 0x822aaaa0
	ctx.lr = 0x82283A50;
	sub_822AAAA0(ctx, base);
	// bl 0x822f2658
	ctx.lr = 0x82283A54;
	sub_822F2658(ctx, base);
	// bl 0x822ee258
	ctx.lr = 0x82283A58;
	sub_822EE258(ctx, base);
	// bl 0x8233e430
	ctx.lr = 0x82283A5C;
	sub_8233E430(ctx, base);
	// bl 0x8230fd18
	ctx.lr = 0x82283A60;
	sub_8230FD18(ctx, base);
	// bl 0x822eb088
	ctx.lr = 0x82283A64;
	sub_822EB088(ctx, base);
	// bl 0x82140e60
	ctx.lr = 0x82283A68;
	sub_82140E60(ctx, base);
	// bl 0x821340c0
	ctx.lr = 0x82283A6C;
	sub_821340C0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82283A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133330
	ctx.lr = 0x82283A78;
	sub_82133330(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82283a70
	if (ctx.cr6.lt) goto loc_82283A70;
	// bl 0x82310110
	ctx.lr = 0x82283A88;
	sub_82310110(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// addi r7,r9,-4904
	ctx.r7.s64 = ctx.r9.s64 + -4904;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-4904(r9)
	PPC_STORE_U8(ctx.r9.u32 + -4904, ctx.r11.u8);
	// stw r3,-4812(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4812, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f31,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stb r10,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r10.u8);
	// bl 0x822812b8
	ctx.lr = 0x82283AB4;
	sub_822812B8(ctx, base);
	// bl 0x8238e980
	ctx.lr = 0x82283AB8;
	sub_8238E980(ctx, base);
	// bl 0x82131ff8
	ctx.lr = 0x82283ABC;
	sub_82131FF8(ctx, base);
	// bl 0x8238dee8
	ctx.lr = 0x82283AC0;
	sub_8238DEE8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,-4848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4848);
	// beq cr6,0x82283ae4
	if (ctx.cr6.eq) goto loc_82283AE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e1f18
	ctx.lr = 0x82283AD8;
	sub_822E1F18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12912
	ctx.r4.s64 = ctx.r10.s64 + 12912;
	// b 0x82283af4
	goto loc_82283AF4;
loc_82283AE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f18
	ctx.lr = 0x82283AEC;
	sub_822E1F18(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
loc_82283AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82283AFC;
	sub_8227CF18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x82283B04;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227f038
	ctx.lr = 0x82283B10;
	sub_8227F038(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,28832
	ctx.r9.s64 = ctx.r10.s64 + 28832;
	// stw r11,328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 328, ctx.r11.u32);
	// bl 0x8236abf0
	ctx.lr = 0x82283B24;
	sub_8236ABF0(ctx, base);
	// bl 0x82259f10
	ctx.lr = 0x82283B28;
	sub_82259F10(ctx, base);
	// bl 0x8230c150
	ctx.lr = 0x82283B2C;
	sub_8230C150(ctx, base);
	// bl 0x8233fa68
	ctx.lr = 0x82283B30;
	sub_8233FA68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r30,r11,11636
	ctx.r30.s64 = ctx.r11.s64 + 11636;
	// addi r6,r8,13544
	ctx.r6.s64 = ctx.r8.s64 + 13544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82283B50;
	sub_822E15D0(ctx, base);
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r29,r11,11156
	ctx.r29.s64 = ctx.r11.s64 + 11156;
	// addi r8,r6,13508
	ctx.r8.s64 = ctx.r6.s64 + 13508;
	// stw r3,3616(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3616, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82283B80;
	sub_822E1618(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r5,-31858
	ctx.r5.s64 = -2087845888;
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// stw r3,3548(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3548, ctx.r3.u32);
	// lbz r11,905(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 905);
	// rlwinm r4,r11,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82283bdc
	if (ctx.cr6.eq) goto loc_82283BDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e20d0
	ctx.lr = 0x82283BAC;
	sub_822E20D0(ctx, base);
	// lbz r11,905(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 905);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r4,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r4,-16764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16764, ctx.r4.u32);
	// bl 0x822e2170
	ctx.lr = 0x82283BC8;
	sub_822E2170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,905(r31)
	PPC_STORE_U8(ctx.r31.u32 + 905, ctx.r11.u8);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x82283BDC;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_82283BDC:
	// bl 0x822817f8
	ctx.lr = 0x82283BE0;
	sub_822817F8(ctx, base);
	// lwsync 
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r10,13468
	ctx.r4.s64 = ctx.r10.s64 + 13468;
	// bl 0x82280900
	ctx.lr = 0x82283BFC;
	sub_82280900(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82283648) {
	__imp__sub_82283648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283C08) {
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
	// bne cr6,0x82283c9c
	if (!ctx.cr6.eq) goto loc_82283C9C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x82283C30;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x82283C34;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82283c54
	if (ctx.cr6.eq) goto loc_82283C54;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-9008
	ctx.r4.s64 = ctx.r11.s64 + -9008;
	// addi r3,r10,13928
	ctx.r3.s64 = ctx.r10.s64 + 13928;
	// bl 0x822e84f0
	ctx.lr = 0x82283C50;
	sub_822E84F0(ctx, base);
	// bl 0x8230d720
	ctx.lr = 0x82283C54;
	sub_8230D720(ctx, base);
loc_82283C54:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82283c6c
	if (!ctx.cr6.eq) goto loc_82283C6C;
	// bl 0x82131ff8
	ctx.lr = 0x82283C6C;
	sub_82131FF8(ctx, base);
loc_82283C6C:
	// bl 0x82282a20
	ctx.lr = 0x82283C70;
	sub_82282A20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x822c2b88
	ctx.lr = 0x82283C7C;
	sub_822C2B88(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x82283C80;
	sub_82393CC8(ctx, base);
	// bl 0x82132118
	ctx.lr = 0x82283C84;
	sub_82132118(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x82283C88;
	sub_82393D48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82283C94;
	sub_822C4C00(ctx, base);
	// bl 0x82308a18
	ctx.lr = 0x82283C98;
	sub_82308A18(ctx, base);
	// bl 0x822834c0
	ctx.lr = 0x82283C9C;
	sub_822834C0(ctx, base);
loc_82283C9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82283C08) {
	__imp__sub_82283C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82283CAC) {
	__imp__sub_82283CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82283CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82283CB8;
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4844);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// bl 0x82292c58
	ctx.lr = 0x82283CD4;
	sub_82292C58(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,-4816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4816);
	// lfs f0,14160(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bge cr6,0x82283d34
	if (!ctx.cr6.lt) goto loc_82283D34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,14000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82283d20
	if (!ctx.cr6.lt) goto loc_82283D20;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82283D20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82283d30
	if (ctx.cr6.eq) goto loc_82283D30;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82283d34
	if (!ctx.cr6.gt) goto loc_82283D34;
loc_82283D30:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82283D34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82283d4c
	if (!ctx.cr6.gt) goto loc_82283D4C;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divw. r28,r10,r11
	ctx.r28.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82283d4c
	if (!ctx.cr0.eq) goto loc_82283D4C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82283D4C:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// addi r31,r11,-4796
	ctx.r31.s64 = ctx.r11.s64 + -4796;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// lis r27,-31936
	ctx.r27.s64 = -2092957696;
	// lwz r11,-4596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4596);
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r29,r8,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4596, ctx.r11.u32);
loc_82283D84:
	// bl 0x822834c0
	ctx.lr = 0x82283D88;
	sub_822834C0(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82283D8C;
	sub_82310110(ctx, base);
	// lwz r11,-4812(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4812);
	// subf. r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82283da0
	if (!ctx.cr0.lt) goto loc_82283DA0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,-4812(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4812, ctx.r3.u32);
loc_82283DA0:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82283db8
	if (!ctx.cr6.lt) goto loc_82283DB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x82283DB4;
	sub_8228B0D8(ctx, base);
	// b 0x82283d84
	goto loc_82283D84;
loc_82283DB8:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// stw r3,-4812(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4812, ctx.r3.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,-9384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9384);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82283ddc
	if (!ctx.cr6.eq) goto loc_82283DDC;
	// li r10,5000
	ctx.r10.s64 = 5000;
	// b 0x82283de8
	goto loc_82283DE8;
loc_82283DDC:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r10,-9444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9444);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82283DE8:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82283df4
	if (!ctx.cr6.gt) goto loc_82283DF4;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82283DF4:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f30,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x822824b0
	ctx.lr = 0x82283E1C;
	sub_822824B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82340388
	ctx.lr = 0x82283E24;
	sub_82340388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// bgt cr6,0x82283f2c
	if (ctx.cr6.gt) goto loc_82283F2C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82283e6c
	if (!ctx.cr6.lt) goto loc_82283E6C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82283E6C:
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// subf r4,r8,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r3,r6,r29
	ctx.r3.u64 = ctx.r6.u64 + ctx.r29.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,3
	ctx.r9.s64 = 3;
	// divw r8,r10,r5
	ctx.r8.s32 = ctx.r10.s32 / ctx.r5.s32;
	// divw. r30,r3,r9
	ctx.r30.s32 = ctx.r3.s32 / ctx.r9.s32;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// bne 0x82283ea0
	if (!ctx.cr0.eq) goto loc_82283EA0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82283EA0:
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfsx f4,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f11,7540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7540);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// lfs f10,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-3660(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -3660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,14216(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14216);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsel f2,f3,f4,f6
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f6.f64;
	// fadds f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f31,f2,f0
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmsubs f0,f5,f10,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f1.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// b 0x82283f98
	goto loc_82283F98;
loc_82283F2C:
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lfs f0,13952(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13952);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stfsx f10,r6,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// stwx r4,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u32);
loc_82283F98:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x82283FA0;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227f038
	ctx.lr = 0x82283FAC;
	sub_8227F038(ctx, base);
	// bl 0x8213d3a0
	ctx.lr = 0x82283FB0;
	sub_8213D3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340408
	ctx.lr = 0x82283FB8;
	sub_82340408(ctx, base);
	// lwz r3,-4812(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4812);
	// bl 0x82388b38
	ctx.lr = 0x82283FC0;
	sub_82388B38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82133b00
	ctx.lr = 0x82283FCC;
	sub_82133B00(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// addi r31,r11,11336
	ctx.r31.s64 = ctx.r11.s64 + 11336;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82284040
	if (ctx.cr6.eq) goto loc_82284040;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
	// bl 0x822b7268
	ctx.lr = 0x82283FF4;
	sub_822B7268(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82284000
	if (!ctx.cr6.eq) goto loc_82284000;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
loc_82284000:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82284018
	if (!ctx.cr6.eq) goto loc_82284018;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11536
	ctx.r4.s64 = ctx.r11.s64 + 11536;
	// b 0x82284020
	goto loc_82284020;
loc_82284018:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11548
	ctx.r4.s64 = ctx.r11.s64 + 11548;
loc_82284020:
	// bl 0x82280da8
	ctx.lr = 0x82284024;
	sub_82280DA8(ctx, base);
	// li r5,900
	ctx.r5.s64 = 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823de090
	ctx.lr = 0x82284034;
	sub_823DE090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x823f1114
	ctx.lr = 0x82284040;
	__imp__XamLoaderSetLaunchData(ctx, base);
loc_82284040:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821784d0
	ctx.lr = 0x82284048;
	sub_821784D0(ctx, base);
	// bl 0x822834c0
	ctx.lr = 0x8228404C;
	sub_822834C0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82284050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82284058;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f038
	ctx.lr = 0x82284064;
	sub_8227F038(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82284050
	if (ctx.cr6.lt) goto loc_82284050;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822826d8
	ctx.lr = 0x82284078;
	sub_822826D8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82284098
	if (!ctx.cr6.eq) goto loc_82284098;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14168
	ctx.r4.s64 = ctx.r11.s64 + 14168;
	// bl 0x82280fa0
	ctx.lr = 0x82284098;
	sub_82280FA0(ctx, base);
loc_82284098:
	// bl 0x822eb580
	ctx.lr = 0x8228409C;
	sub_822EB580(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822840A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131e20
	ctx.lr = 0x822840A8;
	sub_82131E20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x822840a0
	if (ctx.cr6.lt) goto loc_822840A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82291600
	ctx.lr = 0x822840BC;
	sub_82291600(ctx, base);
	// bl 0x82135a90
	ctx.lr = 0x822840C0;
	sub_82135A90(ctx, base);
	// bl 0x82135728
	ctx.lr = 0x822840C4;
	sub_82135728(ctx, base);
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// lwz r11,-9436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9436);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228414c
	if (ctx.cr6.eq) goto loc_8228414C;
	// lis r31,-31857
	ctx.r31.s64 = -2087780352;
	// lwz r11,15540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284104
	if (ctx.cr6.eq) goto loc_82284104;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r5,r11,13248
	ctx.r5.s64 = ctx.r11.s64 + 13248;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228afc0
	ctx.lr = 0x822840FC;
	sub_8228AFC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15540, ctx.r11.u32);
loc_82284104:
	// lis r29,-31936
	ctx.r29.s64 = -2092957696;
	// lwz r31,-4744(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4744);
	// bl 0x82310110
	ctx.lr = 0x82284110;
	sub_82310110(ctx, base);
	// lwz r11,-9436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9436);
	// stw r3,-4744(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4744, ctx.r3.u32);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228414c
	if (ctx.cr6.eq) goto loc_8228414C;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// ble cr6,0x8228414c
	if (!ctx.cr6.gt) goto loc_8228414C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8228414c
	if (ctx.cr6.eq) goto loc_8228414C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r5,r11,13228
	ctx.r5.s64 = ctx.r11.s64 + 13228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228afc0
	ctx.lr = 0x8228414C;
	sub_8228AFC0(ctx, base);
loc_8228414C:
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

PPC_WEAK_FUNC(sub_82283CB0) {
	__imp__sub_82283CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228415C) {
	__imp__sub_8228415C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82284168;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4256(r1)
	ea = -4256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82393ee8
	ctx.lr = 0x82284174;
	sub_82393EE8(ctx, base);
	// bl 0x82390a98
	ctx.lr = 0x82284178;
	sub_82390A98(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82284190
	if (ctx.cr6.eq) goto loc_82284190;
	// bl 0x8233fb68
	ctx.lr = 0x82284190;
	sub_8233FB68(ctx, base);
loc_82284190:
	// bl 0x823b7e30
	ctx.lr = 0x82284194;
	sub_823B7E30(ctx, base);
	// bl 0x822dba20
	ctx.lr = 0x82284198;
	sub_822DBA20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217a6e8
	ctx.lr = 0x822841A0;
	sub_8217A6E8(ctx, base);
	// bl 0x822dc088
	ctx.lr = 0x822841A4;
	sub_822DC088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822841b0
	if (!ctx.cr6.eq) goto loc_822841B0;
	// bl 0x822dbe08
	ctx.lr = 0x822841B0;
	sub_822DBE08(ctx, base);
loc_822841B0:
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x8238ef20
	ctx.lr = 0x822841C4;
	sub_8238EF20(ctx, base);
	// bl 0x8227e9d8
	ctx.lr = 0x822841C8;
	sub_8227E9D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822de320
	ctx.lr = 0x822841D0;
	sub_822DE320(ctx, base);
	// bl 0x821741c0
	ctx.lr = 0x822841D4;
	sub_821741C0(ctx, base);
	// bl 0x82141588
	ctx.lr = 0x822841D8;
	sub_82141588(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822841ec
	if (!ctx.cr6.eq) goto loc_822841EC;
	// bl 0x821414f0
	ctx.lr = 0x822841E8;
	sub_821414F0(ctx, base);
	// bl 0x8230d170
	ctx.lr = 0x822841EC;
	sub_8230D170(ctx, base);
loc_822841EC:
	// bl 0x822db528
	ctx.lr = 0x822841F0;
	sub_822DB528(ctx, base);
	// bl 0x822db348
	ctx.lr = 0x822841F4;
	sub_822DB348(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230df48
	ctx.lr = 0x822841FC;
	sub_8230DF48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x8228420C;
	sub_822E2170(ctx, base);
	// bl 0x822de2f0
	ctx.lr = 0x82284210;
	sub_822DE2F0(ctx, base);
	// bl 0x821a1168
	ctx.lr = 0x82284214;
	sub_821A1168(ctx, base);
	// bl 0x822e3fa8
	ctx.lr = 0x82284218;
	sub_822E3FA8(ctx, base);
	// bl 0x8223c980
	ctx.lr = 0x8228421C;
	sub_8223C980(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r31,r9,-9020
	ctx.r31.s64 = ctx.r9.s64 + -9020;
loc_8228422C:
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8228422c
	if (!ctx.cr6.eq) goto loc_8228422C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8228425c
	if (ctx.cr6.eq) goto loc_8228425C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82280e68
	ctx.lr = 0x82284258;
	sub_82280E68(ctx, base);
	// b 0x82284294
	goto loc_82284294;
loc_8228425C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82284294
	if (ctx.cr6.eq) goto loc_82284294;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b7268
	ctx.lr = 0x8228427C;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284294
	if (ctx.cr6.eq) goto loc_82284294;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x822e7e98
	ctx.lr = 0x82284294;
	sub_822E7E98(ctx, base);
loc_82284294:
	// bl 0x82368578
	ctx.lr = 0x82284298;
	sub_82368578(ctx, base);
	// bl 0x822e6008
	ctx.lr = 0x8228429C;
	sub_822E6008(ctx, base);
	// bl 0x82128478
	ctx.lr = 0x822842A0;
	sub_82128478(ctx, base);
	// bl 0x821284c8
	ctx.lr = 0x822842A4;
	sub_821284C8(ctx, base);
	// bl 0x8223c980
	ctx.lr = 0x822842A8;
	sub_8223C980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822842b8
	if (!ctx.cr6.eq) goto loc_822842B8;
	// bl 0x8227ce38
	ctx.lr = 0x822842B8;
	sub_8227CE38(ctx, base);
loc_822842B8:
	// bl 0x82310110
	ctx.lr = 0x822842BC;
	sub_82310110(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lwz r11,-4596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4596);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x822842f4
	if (!ctx.cr6.lt) goto loc_822842F4;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r11,-4600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4600);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4600, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82284300
	if (!ctx.cr6.gt) goto loc_82284300;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82284304
	goto loc_82284304;
loc_822842F4:
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-4600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4600, ctx.r10.u32);
loc_82284300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82284304:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r3,-4596(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4596, ctx.r3.u32);
	// beq cr6,0x82284334
	if (ctx.cr6.eq) goto loc_82284334;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82284334
	if (ctx.cr6.eq) goto loc_82284334;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82284334
	if (ctx.cr6.eq) goto loc_82284334;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// bl 0x8230d720
	ctx.lr = 0x82284330;
	sub_8230D720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82284334:
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r29,-31936
	ctx.r29.s64 = -2092957696;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r10,2904(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2904, ctx.r10.u8);
	// addi r30,r9,28832
	ctx.r30.s64 = ctx.r9.s64 + 28832;
	// bne cr6,0x82284364
	if (!ctx.cr6.eq) goto loc_82284364;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,14076
	ctx.r3.s64 = ctx.r11.s64 + 14076;
	// bl 0x82283048
	ctx.lr = 0x82284360;
	sub_82283048(ctx, base);
	// b 0x822843f4
	goto loc_822843F4;
loc_82284364:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// li r3,16
	ctx.r3.s64 = 16;
	// bne cr6,0x822843a0
	if (!ctx.cr6.eq) goto loc_822843A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14020
	ctx.r4.s64 = ctx.r11.s64 + 14020;
	// bl 0x82280b08
	ctx.lr = 0x82284380;
	sub_82280B08(ctx, base);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822843ac
	if (ctx.cr6.eq) goto loc_822843AC;
	// lwz r11,-4912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822843ac
	if (!ctx.cr6.eq) goto loc_822843AC;
	// bl 0x82123b30
	ctx.lr = 0x8228439C;
	sub_82123B30(ctx, base);
	// b 0x822843ac
	goto loc_822843AC;
loc_822843A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,13956
	ctx.r4.s64 = ctx.r11.s64 + 13956;
	// bl 0x82280900
	ctx.lr = 0x822843AC;
	sub_82280900(ctx, base);
loc_822843AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822843cc
	if (!ctx.cr6.eq) goto loc_822843CC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-3068
	ctx.r3.s64 = ctx.r10.s64 + -3068;
	// bl 0x822e2520
	ctx.lr = 0x822843CC;
	sub_822E2520(ctx, base);
loc_822843CC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82283048
	ctx.lr = 0x822843D4;
	sub_82283048(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822843f4
	if (!ctx.cr6.eq) goto loc_822843F4;
	// bl 0x822d2950
	ctx.lr = 0x822843E4;
	sub_822D2950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822843f4
	if (ctx.cr6.eq) goto loc_822843F4;
	// bl 0x822833b8
	ctx.lr = 0x822843F4;
	sub_822833B8(ctx, base);
loc_822843F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82284428
	if (ctx.cr6.eq) goto loc_82284428;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284428
	if (ctx.cr6.eq) goto loc_82284428;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82284434
	if (ctx.cr6.eq) goto loc_82284434;
	// bl 0x822cc308
	ctx.lr = 0x8228441C;
	sub_822CC308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82284428;
	sub_822C4C00(ctx, base);
loc_82284428:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82284450
	if (!ctx.cr6.eq) goto loc_82284450;
loc_82284434:
	// bl 0x8233b3a0
	ctx.lr = 0x82284438;
	sub_8233B3A0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-31520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284450
	if (ctx.cr6.eq) goto loc_82284450;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f80
	ctx.lr = 0x82284450;
	sub_822E1F80(ctx, base);
loc_82284450:
	// bl 0x8223e4d8
	ctx.lr = 0x82284454;
	sub_8223E4D8(ctx, base);
	// bl 0x8223def8
	ctx.lr = 0x82284458;
	sub_8223DEF8(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-4912(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4912, ctx.r11.u32);
	// stwx r9,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x822dbf48
	ctx.lr = 0x82284470;
	sub_822DBF48(ctx, base);
	// lwsync 
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lwz r11,-4832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4832);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-4832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4832, ctx.r11.u32);
	// addi r1,r1,4256
	ctx.r1.s64 = ctx.r1.s64 + 4256;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284160) {
	__imp__sub_82284160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228448C) {
	__imp__sub_8228448C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82284498;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x822844A4;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x822844A8;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822844c0
	if (ctx.cr6.eq) goto loc_822844C0;
	// bl 0x82284160
	ctx.lr = 0x822844B4;
	sub_82284160(ctx, base);
	// bl 0x82283c08
	ctx.lr = 0x822844B8;
	sub_82283C08(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822844C0:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-9368
	ctx.r29.s64 = ctx.r11.s64 + -9368;
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82284530
	if (!ctx.cr6.gt) goto loc_82284530;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r28,r10,-27340
	ctx.r28.s64 = ctx.r10.s64 + -27340;
loc_822844E4:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82284520
	if (ctx.cr6.eq) goto loc_82284520;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1025
	ctx.r4.s64 = 1025;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x82284504;
	sub_822E8368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8228450C;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8227ede8
	ctx.lr = 0x8228451C;
	sub_8227EDE8(ctx, base);
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
loc_82284520:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822844e4
	if (ctx.cr6.lt) goto loc_822844E4;
loc_82284530:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284490) {
	__imp__sub_82284490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284538) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x82284550;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x82284554;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82284568
	if (!ctx.cr6.eq) goto loc_82284568;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82283648
	ctx.lr = 0x82284564;
	sub_82283648(ctx, base);
	// b 0x82284580
	goto loc_82284580;
loc_82284568:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-9008
	ctx.r4.s64 = ctx.r11.s64 + -9008;
	// addi r3,r10,14112
	ctx.r3.s64 = ctx.r10.s64 + 14112;
	// bl 0x822e84f0
	ctx.lr = 0x8228457C;
	sub_822E84F0(ctx, base);
	// bl 0x8230d720
	ctx.lr = 0x82284580;
	sub_8230D720(ctx, base);
loc_82284580:
	// bl 0x82283c08
	ctx.lr = 0x82284584;
	sub_82283C08(ctx, base);
	// bl 0x82284490
	ctx.lr = 0x82284588;
	sub_82284490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284538) {
	__imp__sub_82284538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284598) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x822845B0;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x822845B4;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822845d8
	if (!ctx.cr6.eq) goto loc_822845D8;
	// bl 0x8233fcb0
	ctx.lr = 0x822845C0;
	sub_8233FCB0(ctx, base);
	// bl 0x82177500
	ctx.lr = 0x822845C4;
	sub_82177500(ctx, base);
	// bl 0x82283cb0
	ctx.lr = 0x822845C8;
	sub_82283CB0(ctx, base);
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r11,-4764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4764);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4764, ctx.r11.u32);
loc_822845D8:
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284624
	if (ctx.cr6.eq) goto loc_82284624;
	// bl 0x82282b58
	ctx.lr = 0x822845EC;
	sub_82282B58(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r31,-4832(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// bl 0x822ec500
	ctx.lr = 0x822845F8;
	sub_822EC500(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x822845FC;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82284614
	if (ctx.cr6.eq) goto loc_82284614;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r3,-4824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	// bl 0x82393e28
	ctx.lr = 0x82284614;
	sub_82393E28(ctx, base);
loc_82284614:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82284624
	if (ctx.cr6.eq) goto loc_82284624;
	// bl 0x82284160
	ctx.lr = 0x82284620;
	sub_82284160(ctx, base);
	// bl 0x82283c08
	ctx.lr = 0x82284624;
	sub_82283C08(ctx, base);
loc_82284624:
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

PPC_WEAK_FUNC(sub_82284598) {
	__imp__sub_82284598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lwz r3,-6632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6632);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284638) {
	__imp__sub_82284638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82284644) {
	__imp__sub_82284644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284648) {
	PPC_FUNC_PROLOGUE();
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284648) {
	__imp__sub_82284648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-2264
	ctx.r9.s64 = ctx.r11.s64 + -2264;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284680
	if (ctx.cr6.eq) goto loc_82284680;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// mulli r10,r11,156
	ctx.r10.s64 = ctx.r11.s64 * 156;
	// addi r11,r9,1560
	ctx.r11.s64 = ctx.r9.s64 + 1560;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82284680:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284650) {
	__imp__sub_82284650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1560
	ctx.r11.s64 = ctx.r11.s64 + 1560;
	// addi r9,r11,-6144
	ctx.r9.s64 = ctx.r11.s64 + -6144;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822846b4
	if (ctx.cr6.eq) goto loc_822846B4;
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_822846B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284688) {
	__imp__sub_82284688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822846BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822846BC) {
	__imp__sub_822846BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822846C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,624
	ctx.r10.s64 = 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r11,r11,1560
	ctx.r11.s64 = ctx.r11.s64 + 1560;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r6,r11,-6144
	ctx.r6.s64 = ctx.r11.s64 + -6144;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82284700
	if (ctx.cr6.eq) goto loc_82284700;
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82284700:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822846C0) {
	__imp__sub_822846C0(ctx, base);
}

