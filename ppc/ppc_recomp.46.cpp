#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821F4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F4640) {
	__imp__sub_821F4640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F468C) {
	__imp__sub_821F468C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F4690) {
	__imp__sub_821F4690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F475C) {
	__imp__sub_821F475C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4760) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,-17544
	ctx.r5.s64 = ctx.r11.s64 + -17544;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_821F4788:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f47c0
	if (ctx.cr6.eq) goto loc_821F47C0;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,172
	ctx.r9.s64 = ctx.r9.s64 + 172;
	// cmplwi cr6,r11,44032
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44032, ctx.xer);
	// blt cr6,0x821f4788
	if (ctx.cr6.lt) goto loc_821F4788;
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
loc_821F47C0:
	// mulli r4,r10,172
	ctx.r4.s64 = ctx.r10.s64 * 172;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bl 0x821f4690
	ctx.lr = 0x821F47CC;
	sub_821F4690(ctx, base);
	// addi r11,r5,168
	ctx.r11.s64 = ctx.r5.s64 + 168;
	// stwx r31,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_821F4760) {
	__imp__sub_821F4760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F47E8) {
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
	// bl 0x82229c68
	ctx.lr = 0x821F4800;
	sub_82229C68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

PPC_WEAK_FUNC(sub_821F47E8) {
	__imp__sub_821F47E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F481C) {
	__imp__sub_821F481C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F4828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r30,256
	ctx.r30.s64 = 256;
	// addi r29,r11,-17544
	ctx.r29.s64 = ctx.r11.s64 + -17544;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821F4840:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f4858
	if (ctx.cr6.eq) goto loc_821F4858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229c68
	ctx.lr = 0x821F4854;
	sub_82229C68(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821F4858:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// bne 0x821f4840
	if (!ctx.cr0.eq) goto loc_821F4840;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,44032
	ctx.r5.u64 = ctx.r5.u64 | 44032;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821F4878;
	sub_823DE090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4820) {
	__imp__sub_821F4820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821F4888;
	__savegprlr_23(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822b2288
	ctx.lr = 0x821F48A8;
	sub_822B2288(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821f48e4
	if (!ctx.cr6.gt) goto loc_821F48E4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_821F48C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x821F48CC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f4948
	if (ctx.cr6.eq) goto loc_821F4948;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821f48c0
	if (ctx.cr6.lt) goto loc_821F48C0;
loc_821F48E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-8840
	ctx.r4.s64 = ctx.r11.s64 + -8840;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x821F48FC;
	sub_823DF2B0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821f4938
	if (!ctx.cr6.gt) goto loc_821F4938;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r24,-4
	ctx.r30.s64 = ctx.r24.s64 + -4;
	// addi r29,r11,-29604
	ctx.r29.s64 = ctx.r11.s64 + -29604;
loc_821F4910:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822e84f0
	ctx.lr = 0x821F491C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// bl 0x823e03d0
	ctx.lr = 0x821F492C;
	sub_823E03D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stb r23,2127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2127, ctx.r23.u8);
	// bne 0x821f4910
	if (!ctx.cr0.eq) goto loc_821F4910;
loc_821F4938:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad350
	ctx.lr = 0x821F4940;
	sub_822AD350(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821F4948:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stwx r7,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r7.u32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// slw r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r5.u8 & 0x3F));
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stwx r3,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4880) {
	__imp__sub_821F4880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F497C) {
	__imp__sub_821F497C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// sraw r7,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4980) {
	__imp__sub_821F4980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F49A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F49A4) {
	__imp__sub_821F49A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F49A8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addi r5,r11,-8772
	ctx.r5.s64 = ctx.r11.s64 + -8772;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8221ee40
	ctx.lr = 0x821F49E0;
	sub_8221EE40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222df38
	ctx.lr = 0x821F49E8;
	sub_8222DF38(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mulli r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 * 28;
	// addi r11,r10,-9744
	ctx.r11.s64 = ctx.r10.s64 + -9744;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r3,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_821F49A8) {
	__imp__sub_821F49A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F4A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F4A48;
	sub_822B1C50(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// bne cr6,0x821f4a5c
	if (!ctx.cr6.eq) goto loc_821F4A5C;
	// andc r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r29.u64;
loc_821F4A5C:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4A18) {
	__imp__sub_821F4A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f4a80
	if (ctx.cr6.eq) goto loc_821F4A80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
loc_821F4A80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4A68) {
	__imp__sub_821F4A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4A88) {
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
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F4ABC;
	sub_822B1C50(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x821f4ad0
	if (!ctx.cr6.eq) goto loc_821F4AD0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_821F4AD0:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F4A88) {
	__imp__sub_821F4A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4AEC) {
	__imp__sub_821F4AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f4b08
	if (ctx.cr6.eq) goto loc_821F4B08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
loc_821F4B08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4AF0) {
	__imp__sub_821F4AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4B10) {
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
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F4B44;
	sub_822B1C50(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x821f4b58
	if (!ctx.cr6.eq) goto loc_821F4B58;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_821F4B58:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F4B10) {
	__imp__sub_821F4B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4B74) {
	__imp__sub_821F4B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f4b90
	if (ctx.cr6.eq) goto loc_821F4B90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
loc_821F4B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4B78) {
	__imp__sub_821F4B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4B98) {
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
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F4BCC;
	sub_822B1C50(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x821f4be0
	if (!ctx.cr6.eq) goto loc_821F4BE0;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_821F4BE0:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F4B98) {
	__imp__sub_821F4B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4BFC) {
	__imp__sub_821F4BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f4c18
	if (ctx.cr6.eq) goto loc_821F4C18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
loc_821F4C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4C00) {
	__imp__sub_821F4C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4C20) {
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
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F4C54;
	sub_822B1C50(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// bne cr6,0x821f4c68
	if (!ctx.cr6.eq) goto loc_821F4C68;
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_821F4C68:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F4C20) {
	__imp__sub_821F4C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4C84) {
	__imp__sub_821F4C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f4ca0
	if (ctx.cr6.eq) goto loc_821F4CA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
loc_821F4CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4C88) {
	__imp__sub_821F4C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4CA8) {
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
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F4CDC;
	sub_822B1C50(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// bne cr6,0x821f4cf0
	if (!ctx.cr6.eq) goto loc_821F4CF0;
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_821F4CF0:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F4CA8) {
	__imp__sub_821F4CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4D0C) {
	__imp__sub_821F4D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f4d28
	if (ctx.cr6.eq) goto loc_821F4D28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
loc_821F4D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acb78
	sub_822ACB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4D10) {
	__imp__sub_821F4D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4D30) {
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
	ctx.lr = 0x821F4D44;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821F4D58;
	sub_822B2498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f30,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fmadds f1,f10,f29,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F4D94;
	sub_823DDE20(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fsel f6,f8,f31,f0
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f30,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f30.f64 : ctx.f6.f64;
	// fmadds f1,f4,f29,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F4DC4;
	sub_823DDE20(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fsubs f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fsel f0,f2,f31,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r5,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r5.u8);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f30,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// fmadds f1,f12,f29,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F4DF4;
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
	// stb r3,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r3.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x821F4E14;
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

PPC_WEAK_FUNC(sub_821F4D30) {
	__imp__sub_821F4D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4E24) {
	__imp__sub_821F4E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4E28) {
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
	// lbz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r5,49(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r4,50(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lfs f0,6232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x821F4E9C;
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

PPC_WEAK_FUNC(sub_821F4E28) {
	__imp__sub_821F4E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4EAC) {
	__imp__sub_821F4EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4EB0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F4ECC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f11.f64 = double(temp.f32);
	// fsel f9,f10,f0,f1
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f13,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// fmadds f1,f7,f12,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F4F04;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821F4EB0) {
	__imp__sub_821F4EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4F2C) {
	__imp__sub_821F4F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4F30) {
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
	// lbz r9,51(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 51);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x821F4F60;
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

PPC_WEAK_FUNC(sub_821F4F30) {
	__imp__sub_821F4F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4F70) {
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
	ctx.lr = 0x821F4F84;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821F4F98;
	sub_822B2498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f30,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fmadds f1,f10,f29,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F4FD4;
	sub_823DDE20(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fsel f6,f8,f31,f0
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r7.u8);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f30,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f30.f64 : ctx.f6.f64;
	// fmadds f1,f4,f29,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F5004;
	sub_823DDE20(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fsubs f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fsel f0,f2,f31,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r5,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r5.u8);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f30,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// fmadds f1,f12,f29,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F5034;
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
	// stb r3,142(r31)
	PPC_STORE_U8(ctx.r31.u32 + 142, ctx.r3.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x821F5054;
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

PPC_WEAK_FUNC(sub_821F4F70) {
	__imp__sub_821F4F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F5064) {
	__imp__sub_821F5064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5068) {
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
	// lbz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r5,141(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 141);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r4,142(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 142);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lfs f0,6232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x821F50DC;
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

PPC_WEAK_FUNC(sub_821F5068) {
	__imp__sub_821F5068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F50EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F50EC) {
	__imp__sub_821F50EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F50F0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F510C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f11.f64 = double(temp.f32);
	// fsel f9,f10,f0,f1
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f13,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// fmadds f1,f7,f12,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F5144;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,143(r31)
	PPC_STORE_U8(ctx.r31.u32 + 143, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821F50F0) {
	__imp__sub_821F50F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F516C) {
	__imp__sub_821F516C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5170) {
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
	// lbz r9,143(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 143);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x821F51A0;
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

PPC_WEAK_FUNC(sub_821F5170) {
	__imp__sub_821F5170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F51B0) {
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
	ctx.lr = 0x821F51D0;
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
	// bgt cr6,0x821f51fc
	if (ctx.cr6.gt) goto loc_821F51FC;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8756
	ctx.r3.s64 = ctx.r11.s64 + -8756;
	// bl 0x822e84f0
	ctx.lr = 0x821F51F8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821F51FC;
	sub_822AD350(ctx, base);
loc_821F51FC:
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
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

PPC_WEAK_FUNC(sub_821F51B0) {
	__imp__sub_821F51B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r9,7944
	ctx.r5.s64 = ctx.r9.s64 + 7944;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f4880
	sub_821F4880(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5218) {
	__imp__sub_821F5218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,7944
	ctx.r8.s64 = ctx.r9.s64 + 7944;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sraw r3,r4,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5238) {
	__imp__sub_821F5238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F5274) {
	__imp__sub_821F5274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r9,7976
	ctx.r5.s64 = ctx.r9.s64 + 7976;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f4880
	sub_821F4880(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5278) {
	__imp__sub_821F5278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,7976
	ctx.r8.s64 = ctx.r9.s64 + 7976;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sraw r3,r4,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5298) {
	__imp__sub_821F5298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F52D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F52D4) {
	__imp__sub_821F52D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F52D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r9,7988
	ctx.r5.s64 = ctx.r9.s64 + 7988;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f4880
	sub_821F4880(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F52D8) {
	__imp__sub_821F52D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F52F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,7988
	ctx.r8.s64 = ctx.r9.s64 + 7988;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sraw r3,r4,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F52F8) {
	__imp__sub_821F52F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F5334) {
	__imp__sub_821F5334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r9,8000
	ctx.r5.s64 = ctx.r9.s64 + 8000;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f4880
	sub_821F4880(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5338) {
	__imp__sub_821F5338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,8000
	ctx.r8.s64 = ctx.r9.s64 + 8000;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sraw r3,r4,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5358) {
	__imp__sub_821F5358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F5394) {
	__imp__sub_821F5394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r9,8044
	ctx.r5.s64 = ctx.r9.s64 + 8044;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f4880
	sub_821F4880(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5398) {
	__imp__sub_821F5398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F53B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,8044
	ctx.r8.s64 = ctx.r9.s64 + 8044;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sraw r3,r4,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F53B8) {
	__imp__sub_821F53B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F53F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F53F4) {
	__imp__sub_821F53F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F53F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821F5400;
	__savegprlr_23(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// addi r31,r11,-17544
	ctx.r31.s64 = ctx.r11.s64 + -17544;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,256
	ctx.r23.s64 = 256;
	// addi r29,r6,8112
	ctx.r29.s64 = ctx.r6.s64 + 8112;
	// addi r28,r7,-27364
	ctx.r28.s64 = ctx.r7.s64 + -27364;
	// addi r27,r8,-8644
	ctx.r27.s64 = ctx.r8.s64 + -8644;
	// addi r26,r9,-8656
	ctx.r26.s64 = ctx.r9.s64 + -8656;
	// addi r25,r10,-8668
	ctx.r25.s64 = ctx.r10.s64 + -8668;
	// addi r24,r11,-8676
	ctx.r24.s64 = ctx.r11.s64 + -8676;
loc_821F5444:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f54c8
	if (ctx.cr6.eq) goto loc_821F54C8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82280900
	ctx.lr = 0x821F5464;
	sub_82280900(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x821F5470;
	sub_82280900(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8233dd38
	ctx.lr = 0x821F5488;
	sub_8233DD38(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x821F5498;
	sub_82280900(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// bl 0x8233dd38
	ctx.lr = 0x821F54AC;
	sub_8233DD38(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x821F54BC;
	sub_82280900(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x821F54C8;
	sub_82280900(ctx, base);
loc_821F54C8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// bne 0x821f5444
	if (!ctx.cr0.eq) goto loc_821F5444;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-8720
	ctx.r4.s64 = ctx.r11.s64 + -8720;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x821F54F0;
	sub_82280900(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F53F8) {
	__imp__sub_821F53F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F54F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,-17544
	ctx.r8.s64 = ctx.r9.s64 + -17544;
	// mulli r9,r3,172
	ctx.r9.s64 = ctx.r3.s64 * 172;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x821f552c
	if (ctx.cr6.eq) goto loc_821F552C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821F552C:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F54F8) {
	__imp__sub_821F54F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,-17544
	ctx.r8.s64 = ctx.r9.s64 + -17544;
	// mulli r9,r3,172
	ctx.r9.s64 = ctx.r3.s64 * 172;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x821f556c
	if (ctx.cr6.eq) goto loc_821F556C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821F556C:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222aa38
	sub_8222AA38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5538) {
	__imp__sub_821F5538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5578) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f55d4
	if (ctx.cr6.eq) goto loc_821F55D4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_821F55A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821f55c4
	if (!ctx.cr6.eq) goto loc_821F55C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x821F55C4;
	sub_822A24E0(ctx, base);
loc_821F55C4:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f55a8
	if (!ctx.cr6.eq) goto loc_821F55A8;
loc_821F55D4:
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

PPC_WEAK_FUNC(sub_821F5578) {
	__imp__sub_821F5578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F55EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F55EC) {
	__imp__sub_821F55EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F55F0) {
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
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x821f4760
	ctx.lr = 0x821F5608;
	sub_821F4760(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f5620
	if (!ctx.cr6.eq) goto loc_821F5620;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8628
	ctx.r3.s64 = ctx.r11.s64 + -8628;
	// bl 0x822ad350
	ctx.lr = 0x821F5620;
	sub_822AD350(ctx, base);
loc_821F5620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229ce0
	ctx.lr = 0x821F5628;
	sub_82229CE0(ctx, base);
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

PPC_WEAK_FUNC(sub_821F55F0) {
	__imp__sub_821F55F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F563C) {
	__imp__sub_821F563C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5640) {
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
	// bl 0x82229bf0
	ctx.lr = 0x821F5658;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f5678
	if (!ctx.cr6.eq) goto loc_821F5678;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-8612
	ctx.r4.s64 = ctx.r11.s64 + -8612;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5678;
	sub_822AD4E0(ctx, base);
loc_821F5678:
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x821f4760
	ctx.lr = 0x821F5680;
	sub_821F4760(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f5698
	if (!ctx.cr6.eq) goto loc_821F5698;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8628
	ctx.r3.s64 = ctx.r11.s64 + -8628;
	// bl 0x822ad350
	ctx.lr = 0x821F5698;
	sub_822AD350(ctx, base);
loc_821F5698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229ce0
	ctx.lr = 0x821F56A0;
	sub_82229CE0(ctx, base);
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

PPC_WEAK_FUNC(sub_821F5640) {
	__imp__sub_821F5640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F56B4) {
	__imp__sub_821F56B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F56B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F56C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-9744
	ctx.r30.s64 = ctx.r11.s64 + -9744;
	// lwz r4,-9744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f5700
	if (ctx.cr6.eq) goto loc_821F5700;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,28
	ctx.r29.s64 = 28;
loc_821F56E0:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822a8a78
	ctx.lr = 0x821F56F0;
	sub_822A8A78(ctx, base);
	// lwzu r4,28(r30)
	ea = 28 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f56e0
	if (!ctx.cr6.eq) goto loc_821F56E0;
loc_821F5700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F56B8) {
	__imp__sub_821F56B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5708) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5748
	if (!ctx.cr6.eq) goto loc_821F5748;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F5748:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5754;
	sub_822AD548(ctx, base);
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

PPC_WEAK_FUNC(sub_821F5708) {
	__imp__sub_821F5708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5768) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,1158(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1158);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f57a8
	if (!ctx.cr6.eq) goto loc_821F57A8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,1156(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1156);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f57b8
	goto loc_821F57B8;
loc_821F57A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F57B4;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821F57B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r7,1024
	ctx.r7.s64 = 1024;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r5,r10,-8772
	ctx.r5.s64 = ctx.r10.s64 + -8772;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x8221ee40
	ctx.lr = 0x821F5818;
	sub_8221EE40(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8222df38
	ctx.lr = 0x821F5828;
	sub_8222DF38(ctx, base);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_821F5768) {
	__imp__sub_821F5768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5850) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f588c
	if (!ctx.cr6.eq) goto loc_821F588C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f589c
	goto loc_821F589C;
loc_821F588C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5898;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F589C:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f58b4
	if (!ctx.cr6.eq) goto loc_821F58B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8576
	ctx.r3.s64 = ctx.r11.s64 + -8576;
	// bl 0x822ad350
	ctx.lr = 0x821F58B4;
	sub_822AD350(ctx, base);
loc_821F58B4:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1023
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1023, ctx.xer);
	// bge cr6,0x821f58e8
	if (!ctx.cr6.lt) goto loc_821F58E8;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,-28736
	ctx.r30.s64 = ctx.r11.s64 + -28736;
loc_821F58D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x821F58DC;
	sub_8233E7D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,1167
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1167, ctx.xer);
	// blt cr6,0x821f58d0
	if (ctx.cr6.lt) goto loc_821F58D0;
loc_821F58E8:
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

PPC_WEAK_FUNC(sub_821F5850) {
	__imp__sub_821F5850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F5908;
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5938
	if (!ctx.cr6.eq) goto loc_821F5938;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f5948
	goto loc_821F5948;
loc_821F5938:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5944;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821F5948:
	// bl 0x822acb68
	ctx.lr = 0x821F594C;
	sub_822ACB68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821f596c
	if (ctx.cr6.eq) goto loc_821F596C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821f596c
	if (ctx.cr6.eq) goto loc_821F596C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// bl 0x822ad350
	ctx.lr = 0x821F596C;
	sub_822AD350(ctx, base);
loc_821F596C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821F5974;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f5998
	if (!ctx.cr6.eq) goto loc_821F5998;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-8440
	ctx.r4.s64 = ctx.r11.s64 + -8440;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5990;
	sub_822AD4E0(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x821f59a0
	goto loc_821F59A0;
loc_821F5998:
	// bl 0x8222e138
	ctx.lr = 0x821F599C;
	sub_8222E138(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821F59A0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x821f59b4
	if (!ctx.cr6.eq) goto loc_821F59B4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x821f5a14
	goto loc_821F5A14;
loc_821F59B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821F59BC;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f59e4
	if (!ctx.cr6.lt) goto loc_821F59E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// bl 0x822e84f0
	ctx.lr = 0x821F59D8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x821F59E4;
	sub_822AD4E0(ctx, base);
loc_821F59E4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821F59EC;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f5a14
	if (!ctx.cr6.lt) goto loc_821F5A14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8472
	ctx.r3.s64 = ctx.r11.s64 + -8472;
	// bl 0x822e84f0
	ctx.lr = 0x821F5A08;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5A14;
	sub_822AD4E0(ctx, base);
loc_821F5A14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5900) {
	__imp__sub_821F5900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5A68) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5aa0
	if (!ctx.cr6.eq) goto loc_821F5AA0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f5ab0
	goto loc_821F5AB0;
loc_821F5AA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5AAC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F5AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821F5AB8;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r10,174(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 174);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_821F5A68) {
	__imp__sub_821F5A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5AE0) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5b28
	if (!ctx.cr6.eq) goto loc_821F5B28;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// li r9,2047
	ctx.r9.s64 = 2047;
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r8,172
	ctx.r10.s64 = ctx.r8.s64 * 172;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
loc_821F5B28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5B34;
	sub_822AD548(ctx, base);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(0)
	PPC_STORE_U32(16, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F5AE0) {
	__imp__sub_821F5AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F5B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5b90
	if (!ctx.cr6.eq) goto loc_821F5B90;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f5ba0
	goto loc_821F5BA0;
loc_821F5B90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5B9C;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821F5BA0:
	// bl 0x822acb68
	ctx.lr = 0x821F5BA4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821f5bc0
	if (ctx.cr6.eq) goto loc_821F5BC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-8288
	ctx.r3.s64 = ctx.r11.s64 + -8288;
	// bl 0x822e84f0
	ctx.lr = 0x821F5BBC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821F5BC0;
	sub_822AD350(ctx, base);
loc_821F5BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F5BC8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x823df940
	ctx.lr = 0x821F5BD8;
	sub_823DF940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x821f5c40
	if (ctx.cr6.gt) goto loc_821F5C40;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// beq cr6,0x821f5c40
	if (ctx.cr6.eq) goto loc_821F5C40;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// beq cr6,0x821f5c40
	if (ctx.cr6.eq) goto loc_821F5C40;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,-8312
	ctx.r3.s64 = ctx.r9.s64 + -8312;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F5C34;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5C40;
	sub_822AD4E0(ctx, base);
loc_821F5C40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// beq cr6,0x821f5cb4
	if (ctx.cr6.eq) goto loc_821F5CB4;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// beq cr6,0x821f5cb4
	if (ctx.cr6.eq) goto loc_821F5CB4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821F5CB4:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5B50) {
	__imp__sub_821F5B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821F5CC8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5d08
	if (!ctx.cr6.eq) goto loc_821F5D08;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f5d18
	goto loc_821F5D18;
loc_821F5D08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5D14;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821F5D18:
	// bl 0x822acb68
	ctx.lr = 0x821F5D1C;
	sub_822ACB68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821f5d44
	if (ctx.cr6.eq) goto loc_821F5D44;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x821f5d44
	if (ctx.cr6.eq) goto loc_821F5D44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-8216
	ctx.r3.s64 = ctx.r11.s64 + -8216;
	// bl 0x822e84f0
	ctx.lr = 0x821F5D40;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821F5D44;
	sub_822AD350(ctx, base);
loc_821F5D44:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F5D4C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x823df940
	ctx.lr = 0x821F5D5C;
	sub_823DF940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt cr6,0x821f5dbc
	if (ctx.cr6.gt) goto loc_821F5DBC;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 12, ctx.xer);
	// beq cr6,0x821f5dbc
	if (ctx.cr6.eq) goto loc_821F5DBC;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r10,-8312
	ctx.r3.s64 = ctx.r10.s64 + -8312;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F5DB0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5DBC;
	sub_822AD4E0(ctx, base);
loc_821F5DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821F5DC4;
	sub_822B1FB0(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x823df940
	ctx.lr = 0x821F5DCC;
	sub_823DF940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x821f5e1c
	if (ctx.cr6.gt) goto loc_821F5E1C;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r10,-8248
	ctx.r3.s64 = ctx.r10.s64 + -8248;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F5E10;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5E1C;
	sub_822AD4E0(ctx, base);
loc_821F5E1C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x821F5E24;
	sub_822B2288(ctx, base);
	// bl 0x8222e138
	ctx.lr = 0x821F5E28;
	sub_8222E138(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x821f5e40
	if (!ctx.cr6.eq) goto loc_821F5E40;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x821f5ea0
	goto loc_821F5EA0;
loc_821F5E40:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1c50
	ctx.lr = 0x821F5E48;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f5e70
	if (!ctx.cr6.lt) goto loc_821F5E70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// bl 0x822e84f0
	ctx.lr = 0x821F5E64;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5E70;
	sub_822AD4E0(ctx, base);
loc_821F5E70:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1c50
	ctx.lr = 0x821F5E78;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f5ea0
	if (!ctx.cr6.lt) goto loc_821F5EA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8472
	ctx.r3.s64 = ctx.r11.s64 + -8472;
	// bl 0x822e84f0
	ctx.lr = 0x821F5E94;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ad4e0
	ctx.lr = 0x821F5EA0;
	sub_822AD4E0(ctx, base);
loc_821F5EA0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r26.u32);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5CC0) {
	__imp__sub_821F5CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,-8116
	ctx.r5.s64 = ctx.r11.s64 + -8116;
	// b 0x821f5b50
	sub_821F5B50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F08) {
	__imp__sub_821F5F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,-8104
	ctx.r5.s64 = ctx.r11.s64 + -8104;
	// b 0x821f5b50
	sub_821F5B50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F18) {
	__imp__sub_821F5F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,-8092
	ctx.r5.s64 = ctx.r11.s64 + -8092;
	// b 0x821f5b50
	sub_821F5B50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F28) {
	__imp__sub_821F5F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-8076
	ctx.r5.s64 = ctx.r11.s64 + -8076;
	// b 0x821f5b50
	sub_821F5B50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F38) {
	__imp__sub_821F5F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r11,-8060
	ctx.r5.s64 = ctx.r11.s64 + -8060;
	// b 0x821f5b50
	sub_821F5B50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F48) {
	__imp__sub_821F5F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,-8092
	ctx.r5.s64 = ctx.r11.s64 + -8092;
	// b 0x821f5b50
	sub_821F5B50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F58) {
	__imp__sub_821F5F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,-8040
	ctx.r5.s64 = ctx.r11.s64 + -8040;
	// b 0x821f5cc0
	sub_821F5CC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F68) {
	__imp__sub_821F5F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// b 0x821f5cc0
	sub_821F5CC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F5F78) {
	__imp__sub_821F5F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F5F88) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f5fc8
	if (!ctx.cr6.eq) goto loc_821F5FC8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f5fd8
	goto loc_821F5FD8;
loc_821F5FC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F5FD4;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821F5FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F5FE0;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F5F88) {
	__imp__sub_821F5F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F6044) {
	__imp__sub_821F6044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6048) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6084
	if (!ctx.cr6.eq) goto loc_821F6084;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6094
	goto loc_821F6094;
loc_821F6084:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6090;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6094:
	// bl 0x822acb68
	ctx.lr = 0x821F6098;
	sub_822ACB68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821F60A4;
	sub_822B1C50(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r10,13
	ctx.r10.s64 = 13;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x821f60ec
	if (!ctx.cr6.gt) goto loc_821F60EC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821F60D4;
	sub_822B1C50(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// bne cr6,0x821f60e8
	if (!ctx.cr6.eq) goto loc_821F60E8;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_821F60E8:
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
loc_821F60EC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x821f6114
	if (!ctx.cr6.gt) goto loc_821F6114;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821F60FC;
	sub_822B1C50(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// bne cr6,0x821f6110
	if (!ctx.cr6.eq) goto loc_821F6110;
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_821F6110:
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
loc_821F6114:
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

PPC_WEAK_FUNC(sub_821F6048) {
	__imp__sub_821F6048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F612C) {
	__imp__sub_821F612C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6130) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6168
	if (!ctx.cr6.eq) goto loc_821F6168;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6178
	goto loc_821F6178;
loc_821F6168:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6174;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6178:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821f6190
	if (ctx.cr6.eq) goto loc_821F6190;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x822ad350
	ctx.lr = 0x821F6190;
	sub_822AD350(ctx, base);
loc_821F6190:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F6130) {
	__imp__sub_821F6130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F61B0) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f61e8
	if (!ctx.cr6.eq) goto loc_821F61E8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f61f8
	goto loc_821F61F8;
loc_821F61E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F61F4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F61F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821f6210
	if (ctx.cr6.eq) goto loc_821F6210;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x822ad350
	ctx.lr = 0x821F6210;
	sub_822AD350(ctx, base);
loc_821F6210:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F61B0) {
	__imp__sub_821F61B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6230) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6268
	if (!ctx.cr6.eq) goto loc_821F6268;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6278
	goto loc_821F6278;
loc_821F6268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6274;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821f6290
	if (ctx.cr6.eq) goto loc_821F6290;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x822ad350
	ctx.lr = 0x821F6290;
	sub_822AD350(ctx, base);
loc_821F6290:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821F6230) {
	__imp__sub_821F6230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F62B0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f62f0
	if (!ctx.cr6.eq) goto loc_821F62F0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6300
	goto loc_821F6300;
loc_821F62F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F62FC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6300:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F6308;
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
	// bgt cr6,0x821f6334
	if (ctx.cr6.gt) goto loc_821F6334;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7952
	ctx.r3.s64 = ctx.r11.s64 + -7952;
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F6330;
	sub_822E84F0(ctx, base);
	// b 0x821f635c
	goto loc_821F635C;
loc_821F6334:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821f6368
	if (!ctx.cr6.gt) goto loc_821F6368;
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-7972
	ctx.r3.s64 = ctx.r11.s64 + -7972;
	// bl 0x822e84f0
	ctx.lr = 0x821F635C;
	sub_822E84F0(ctx, base);
loc_821F635C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F6368;
	sub_822AD4E0(ctx, base);
loc_821F6368:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823215b8
	ctx.lr = 0x821F6380;
	sub_823215B8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F63A0;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r8,60
	ctx.r8.s64 = 60;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f13.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F62B0) {
	__imp__sub_821F62B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F63CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F63CC) {
	__imp__sub_821F63CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F63D0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6410
	if (!ctx.cr6.eq) goto loc_821F6410;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6420
	goto loc_821F6420;
loc_821F6410:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F641C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6420:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F6428;
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
	// bgt cr6,0x821f6454
	if (ctx.cr6.gt) goto loc_821F6454;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F6450;
	sub_822E84F0(ctx, base);
	// b 0x821f647c
	goto loc_821F647C;
loc_821F6454:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821f6488
	if (!ctx.cr6.gt) goto loc_821F6488;
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-7932
	ctx.r3.s64 = ctx.r11.s64 + -7932;
	// bl 0x822e84f0
	ctx.lr = 0x821F647C;
	sub_822E84F0(ctx, base);
loc_821F647C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F6488;
	sub_822AD4E0(ctx, base);
loc_821F6488:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82321540
	ctx.lr = 0x821F64A0;
	sub_82321540(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F64C0;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r8,32
	ctx.r8.s64 = 32;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f13.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F63D0) {
	__imp__sub_821F63D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F64EC) {
	__imp__sub_821F64EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F64F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F64F8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6528
	if (!ctx.cr6.eq) goto loc_821F6528;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6538
	goto loc_821F6538;
loc_821F6528:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6534;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6538:
	// bl 0x822acb68
	ctx.lr = 0x821F653C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821f6550
	if (ctx.cr6.eq) goto loc_821F6550;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7892
	ctx.r3.s64 = ctx.r11.s64 + -7892;
	// bl 0x822ad350
	ctx.lr = 0x821F6550;
	sub_822AD350(ctx, base);
loc_821F6550:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F6558;
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
	// bgt cr6,0x821f6584
	if (ctx.cr6.gt) goto loc_821F6584;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F6580;
	sub_822E84F0(ctx, base);
	// b 0x821f65ac
	goto loc_821F65AC;
loc_821F6584:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821f65b8
	if (!ctx.cr6.gt) goto loc_821F65B8;
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-7932
	ctx.r3.s64 = ctx.r11.s64 + -7932;
	// bl 0x822e84f0
	ctx.lr = 0x821F65AC;
	sub_822E84F0(ctx, base);
loc_821F65AC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F65B8;
	sub_822AD4E0(ctx, base);
loc_821F65B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821F65C0;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821F65CC;
	sub_822B1C50(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823dde20
	ctx.lr = 0x821F65F8;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,92
	ctx.r6.s64 = 92;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f13.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F64F0) {
	__imp__sub_821F64F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F662C) {
	__imp__sub_821F662C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6630) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f666c
	if (!ctx.cr6.eq) goto loc_821F666C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f667c
	goto loc_821F667C;
loc_821F666C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6678;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F667C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821F6684;
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
	// bgt cr6,0x821f66b0
	if (ctx.cr6.gt) goto loc_821F66B0;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x821F66AC;
	sub_822E84F0(ctx, base);
	// b 0x821f66d8
	goto loc_821F66D8;
loc_821F66B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821f66e4
	if (!ctx.cr6.gt) goto loc_821F66E4;
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-7828
	ctx.r3.s64 = ctx.r11.s64 + -7828;
	// bl 0x822e84f0
	ctx.lr = 0x821F66D8;
	sub_822E84F0(ctx, base);
loc_821F66D8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F66E4;
	sub_822AD4E0(ctx, base);
loc_821F66E4:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x823dde20
	ctx.lr = 0x821F670C;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,116
	ctx.r6.s64 = 116;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f11.u32);
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

PPC_WEAK_FUNC(sub_821F6630) {
	__imp__sub_821F6630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F6754) {
	__imp__sub_821F6754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6758) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f679c
	if (!ctx.cr6.eq) goto loc_821F679C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821f4690
	ctx.lr = 0x821F678C;
	sub_821F4690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F679C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F67A8;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f4690
	ctx.lr = 0x821F67B0;
	sub_821F4690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F6758) {
	__imp__sub_821F6758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F67C0) {
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
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f67f8
	if (!ctx.cr6.eq) goto loc_821F67F8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6808
	goto loc_821F6808;
loc_821F67F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6804;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F6808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229c68
	ctx.lr = 0x821F6810;
	sub_82229C68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

PPC_WEAK_FUNC(sub_821F67C0) {
	__imp__sub_821F67C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F682C) {
	__imp__sub_821F682C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6830) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6870
	if (!ctx.cr6.eq) goto loc_821F6870;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6880
	goto loc_821F6880;
loc_821F6870:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F687C;
	sub_822AD548(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821F6880:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821F6888;
	sub_82229BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f68a4
	if (!ctx.cr6.eq) goto loc_821F68A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-7704
	ctx.r4.s64 = ctx.r11.s64 + -7704;
	// bl 0x82280900
	ctx.lr = 0x821F68A0;
	sub_82280900(ctx, base);
	// b 0x821f692c
	goto loc_821F692C;
loc_821F68A4:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f68c4
	if (!ctx.cr6.eq) goto loc_821F68C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-7784
	ctx.r4.s64 = ctx.r11.s64 + -7784;
	// bl 0x82280900
	ctx.lr = 0x821F68C0;
	sub_82280900(ctx, base);
	// b 0x821f692c
	goto loc_821F692C;
loc_821F68C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_821F692C:
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

PPC_WEAK_FUNC(sub_821F6830) {
	__imp__sub_821F6830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F6944) {
	__imp__sub_821F6944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6948) {
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
	// bl 0x822b1c50
	ctx.lr = 0x821F6964;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f698c
	if (!ctx.cr6.lt) goto loc_821F698C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// bl 0x822e84f0
	ctx.lr = 0x821F6980;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x821F698C;
	sub_822AD4E0(ctx, base);
loc_821F698C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_821F6948) {
	__imp__sub_821F6948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F69A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F69B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x822acb68
	ctx.lr = 0x821F69BC;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821f69d0
	if (ctx.cr6.eq) goto loc_821F69D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7608
	ctx.r3.s64 = ctx.r11.s64 + -7608;
	// bl 0x822ad350
	ctx.lr = 0x821F69D0;
	sub_822AD350(ctx, base);
loc_821F69D0:
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f69f4
	if (!ctx.cr6.eq) goto loc_821F69F4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821f6a04
	goto loc_821F6A04;
loc_821F69F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// bl 0x822ad548
	ctx.lr = 0x821F6A00;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821F6A04:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r11.u32);
	// bl 0x822b1c50
	ctx.lr = 0x821F6A1C;
	sub_822B1C50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r11,-7648
	ctx.r28.s64 = ctx.r11.s64 + -7648;
	// bge cr6,0x821f6a48
	if (!ctx.cr6.lt) goto loc_821F6A48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821F6A3C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821F6A48;
	sub_822AD4E0(ctx, base);
loc_821F6A48:
	// stw r31,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821F6A54;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f6a78
	if (!ctx.cr6.lt) goto loc_821F6A78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821F6A6C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x821F6A78;
	sub_822AD4E0(ctx, base);
loc_821F6A78:
	// stw r31,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r31.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821F6A84;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f6aa8
	if (!ctx.cr6.lt) goto loc_821F6AA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821F6A9C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x821F6AA8;
	sub_822AD4E0(ctx, base);
loc_821F6AA8:
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// stw r31,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r31.u32);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// beq cr6,0x821f6b0c
	if (ctx.cr6.eq) goto loc_821F6B0C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r8,r9,45016
	ctx.r8.u64 = ctx.r9.u64 | 45016;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-20892
	ctx.r11.s64 = ctx.r11.s64 + -20892;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x821f6afc
	if (!ctx.cr0.eq) goto loc_821F6AFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821F6AFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821F6B0C:
	// lwz r11,16372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r11,16372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16372, ctx.r11.u32);
	// stw r7,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F69A8) {
	__imp__sub_821F69A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6B38) {
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
	// bne cr6,0x821f6b94
	if (!ctx.cr6.eq) goto loc_821F6B94;
	// addi r11,r11,-9152
	ctx.r11.s64 = ctx.r11.s64 + -9152;
	// li r30,26
	ctx.r30.s64 = 26;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_821F6B64:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x821F6B70;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821f6b64
	if (!ctx.cr0.eq) goto loc_821F6B64;
loc_821F6B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F6B7C:
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
loc_821F6B94:
	// addi r4,r11,-9152
	ctx.r4.s64 = ctx.r11.s64 + -9152;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821F6BA8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821F6BB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x821f6bd4
	if (ctx.cr6.eq) goto loc_821F6BD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f6bb0
	if (ctx.cr6.eq) goto loc_821F6BB0;
loc_821F6BD4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f6bf4
	if (ctx.cr6.eq) goto loc_821F6BF4;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,312
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 312, ctx.xer);
	// blt cr6,0x821f6ba8
	if (ctx.cr6.lt) goto loc_821F6BA8;
	// b 0x821f6b78
	goto loc_821F6B78;
loc_821F6BF4:
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
	// b 0x821f6b7c
	goto loc_821F6B7C;
}

PPC_WEAK_FUNC(sub_821F6B38) {
	__imp__sub_821F6B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F6C14) {
	__imp__sub_821F6C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F6C20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-17544
	ctx.r11.s64 = ctx.r11.s64 + -17544;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,1176
	ctx.r30.s64 = ctx.r3.s64 + 1176;
	// addi r31,r11,340
	ctx.r31.s64 = ctx.r11.s64 + 340;
	// li r27,64
	ctx.r27.s64 = 64;
loc_821F6C44:
	// lwz r11,-340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6c7c
	if (ctx.cr6.eq) goto loc_821F6C7C;
	// lwz r11,-172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -172);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821f6c64
	if (ctx.cr6.eq) goto loc_821F6C64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821f6c7c
	if (!ctx.cr6.eq) goto loc_821F6C7C;
loc_821F6C64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x821F6C7C;
	sub_823DE1F0(ctx, base);
loc_821F6C7C:
	// lwz r11,-168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6cb4
	if (ctx.cr6.eq) goto loc_821F6CB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821f6c9c
	if (ctx.cr6.eq) goto loc_821F6C9C;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821f6cb4
	if (!ctx.cr6.eq) goto loc_821F6CB4;
loc_821F6C9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x821F6CB4;
	sub_823DE1F0(ctx, base);
loc_821F6CB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6cec
	if (ctx.cr6.eq) goto loc_821F6CEC;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821f6cd4
	if (ctx.cr6.eq) goto loc_821F6CD4;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821f6cec
	if (!ctx.cr6.eq) goto loc_821F6CEC;
loc_821F6CD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x821F6CEC;
	sub_823DE1F0(ctx, base);
loc_821F6CEC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6d24
	if (ctx.cr6.eq) goto loc_821F6D24;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821f6d0c
	if (ctx.cr6.eq) goto loc_821F6D0C;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821f6d24
	if (!ctx.cr6.eq) goto loc_821F6D24;
loc_821F6D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// bl 0x823de1f0
	ctx.lr = 0x821F6D24;
	sub_823DE1F0(ctx, base);
loc_821F6D24:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,688
	ctx.r31.s64 = ctx.r31.s64 + 688;
	// bne 0x821f6c44
	if (!ctx.cr0.eq) goto loc_821F6C44;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// bge cr6,0x821f6d70
	if (!ctx.cr6.lt) goto loc_821F6D70;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// mulli r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 * 168;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_821F6D44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6d70
	if (ctx.cr6.eq) goto loc_821F6D70;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x821F6D60;
	sub_823DE090(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// blt cr6,0x821f6d44
	if (ctx.cr6.lt) goto loc_821F6D44;
loc_821F6D70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F6C18) {
	__imp__sub_821F6C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821F6D80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823319d8
	ctx.lr = 0x821F6D94;
	sub_823319D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821f6e70
	if (ctx.cr6.eq) goto loc_821F6E70;
	// bl 0x82332c40
	ctx.lr = 0x821F6DA4;
	sub_82332C40(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821f6e70
	if (!ctx.cr6.lt) goto loc_821F6E70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F6DB4;
	sub_82332AF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823340b0
	ctx.lr = 0x821F6DC4;
	sub_823340B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da648
	ctx.lr = 0x821F6DD4;
	sub_820DA648(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,728
	ctx.r11.s64 = ctx.r30.s64 + 728;
	// subfe r25,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r25.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821F6DE4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x821f6e00
	if (ctx.cr6.eq) goto loc_821F6E00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x821f6de4
	if (ctx.cr6.lt) goto loc_821F6DE4;
loc_821F6E00:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x821f6e70
	if (ctx.cr6.lt) goto loc_821F6E70;
loc_821F6E0C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821F6E1C;
	sub_820DA6B8(ctx, base);
	// subf r31,r3,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r3.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da730
	ctx.lr = 0x821F6E2C;
	sub_820DA730(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x821f6e38
	if (!ctx.cr6.gt) goto loc_821F6E38;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821F6E38:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821f6e64
	if (ctx.cr6.eq) goto loc_821F6E64;
	// neg r5,r31
	ctx.r5.s64 = -ctx.r31.s64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345c8
	ctx.lr = 0x821F6E50;
	sub_823345C8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,536(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 536);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331e00
	ctx.lr = 0x821F6E64;
	sub_82331E00(ctx, base);
loc_821F6E64:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x821f6e0c
	if (!ctx.cr6.gt) goto loc_821F6E0C;
loc_821F6E70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F6D78) {
	__imp__sub_821F6D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F6E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821F6E80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821F6E9C;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f6ebc
	if (!ctx.cr6.eq) goto loc_821F6EBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333e38
	ctx.lr = 0x821F6EB0;
	sub_82333E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6fe0
	if (ctx.cr6.eq) goto loc_821F6FE0;
loc_821F6EBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x821F6EC4;
	sub_82331A00(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F6ED0;
	sub_82332AF8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823319d8
	ctx.lr = 0x821F6EDC;
	sub_823319D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331a58
	ctx.lr = 0x821F6EF0;
	sub_82331A58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da730
	ctx.lr = 0x821F6F00;
	sub_820DA730(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823345c8
	ctx.lr = 0x821F6F14;
	sub_823345C8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
loc_821F6F2C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821F6F3C;
	sub_820DA6B8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x821f6f2c
	if (ctx.cr6.lt) goto loc_821F6F2C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x821f6f5c
	if (!ctx.cr6.eq) goto loc_821F6F5C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821f6fec
	if (ctx.cr6.eq) goto loc_821F6FEC;
loc_821F6F5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6d78
	ctx.lr = 0x821F6F68;
	sub_821F6D78(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821f6fec
	if (ctx.cr6.eq) goto loc_821F6FEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334578
	ctx.lr = 0x821F6F80;
	sub_82334578(ctx, base);
loc_821F6F80:
	// lwz r11,552(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821f7070
	if (ctx.cr6.lt) goto loc_821F7070;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823320a0
	ctx.lr = 0x821F6F98;
	sub_823320A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f7070
	if (!ctx.cr6.lt) goto loc_821F7070;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821f7040
	if (ctx.cr6.eq) goto loc_821F7040;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,536(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 536);
	// bl 0x82331e00
	ctx.lr = 0x821F6FBC;
	sub_82331E00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821F6FCC;
	sub_820DA6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x821f7070
	if (ctx.cr6.gt) goto loc_821F7070;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232598
	ctx.lr = 0x821F6FE0;
	sub_82232598(ctx, base);
loc_821F6FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821F6FEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da730
	ctx.lr = 0x821F6FF8;
	sub_820DA730(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x821f6f80
	if (!ctx.cr6.gt) goto loc_821F6F80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334578
	ctx.lr = 0x821F7010;
	sub_82334578(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da730
	ctx.lr = 0x821F701C;
	sub_820DA730(ctx, base);
	// subf r10,r23,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r23.s64;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821F7040:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823345c8
	ctx.lr = 0x821F704C;
	sub_823345C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da730
	ctx.lr = 0x821F7058;
	sub_820DA730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f7070
	if (!ctx.cr6.lt) goto loc_821F7070;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334578
	ctx.lr = 0x821F7070;
	sub_82334578(ctx, base);
loc_821F7070:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da730
	ctx.lr = 0x821F707C;
	sub_820DA730(ctx, base);
	// subf r10,r23,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r23.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r28,r31,848
	ctx.r28.s64 = ctx.r31.s64 + 848;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r31,0
	ctx.r31.s64 = 0;
	// and r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ctx.r10.u64;
loc_821F70A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F70A8;
	sub_82332AF8(ctx, base);
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821F70B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821f70fc
	if (ctx.cr6.eq) goto loc_821F70FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x821f70b4
	if (ctx.cr6.lt) goto loc_821F70B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F70D4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x821f70a0
	if (ctx.cr6.lt) goto loc_821F70A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821F70FC:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821f70d4
	goto loc_821F70D4;
}

PPC_WEAK_FUNC(sub_821F6E78) {
	__imp__sub_821F6E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F7110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f7130
	if (!ctx.cr6.eq) goto loc_821F7130;
loc_821F7124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F7130:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F7138;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821f7158
	if (!ctx.cr6.eq) goto loc_821F7158;
	// lwz r31,696(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F7154;
	sub_82332AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821F7158:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821F7164;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f7124
	if (ctx.cr6.eq) goto loc_821F7124;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7108) {
	__imp__sub_821F7108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7184) {
	__imp__sub_821F7184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7188) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1169
	ctx.r3.s64 = 1169;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F7188) {
	__imp__sub_821F7188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F719C) {
	__imp__sub_821F719C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F71A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,968(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 968);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f71d4
	if (ctx.cr6.eq) goto loc_821F71D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82255418
	ctx.lr = 0x821F71D0;
	sub_82255418(ctx, base);
	// b 0x821f7204
	goto loc_821F7204;
loc_821F71D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x821F71DC;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f71f0
	if (ctx.cr6.eq) goto loc_821F71F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82255468
	ctx.lr = 0x821F71EC;
	sub_82255468(ctx, base);
	// b 0x821f7204
	goto loc_821F7204;
loc_821F71F0:
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
loc_821F7204:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x821F7210;
	sub_822DA650(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f5,f13,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f10,f4,f13,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f9,f3,f13,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f2,f12,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f7,f1,f12,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f6,f0,f12,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_821F71A0) {
	__imp__sub_821F71A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F7290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82332b10
	ctx.lr = 0x821F72A4;
	sub_82332B10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x821F72B0;
	sub_82331A00(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72c8
	if (ctx.cr6.eq) goto loc_821F72C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7508
	ctx.r3.s64 = ctx.r11.s64 + -7508;
	// b 0x821f72d0
	goto loc_821F72D0;
loc_821F72C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7536
	ctx.r3.s64 = ctx.r11.s64 + -7536;
loc_821F72D0:
	// bl 0x822e84f0
	ctx.lr = 0x821F72D4;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821F72F0;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7288) {
	__imp__sub_821F7288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F72F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821F7300;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r31,r3,360
	ctx.r31.s64 = ctx.r3.s64 + 360;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r23,200
	ctx.r23.s64 = 200;
	// ori r26,r11,34079
	ctx.r26.u64 = ctx.r11.u64 | 34079;
	// lis r20,-32020
	ctx.r20.s64 = -2098462720;
loc_821F7334:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulhw r8,r9,r26
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32)) >> 32;
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,200
	ctx.r6.s64 = ctx.r7.s64 * 200;
	// subf. r29,r6,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x821f7430
	if (!ctx.cr0.gt) goto loc_821F7430;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F735C;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7374
	if (ctx.cr6.eq) goto loc_821F7374;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f7430
	if (!ctx.cr6.eq) goto loc_821F7430;
loc_821F7374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// divw r10,r11,r23
	ctx.r10.s32 = ctx.r11.s32 / ctx.r23.s32;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x821f739c
	if (ctx.cr6.eq) goto loc_821F739C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_821F739C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f6e78
	ctx.lr = 0x821F73AC;
	sub_821F6E78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f7430
	if (ctx.cr6.eq) goto loc_821F7430;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f73e4
	if (!ctx.cr6.eq) goto loc_821F73E4;
	// lwz r11,26008(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 26008);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f73e4
	if (ctx.cr6.eq) goto loc_821F73E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f7288
	ctx.lr = 0x821F73E4;
	sub_821F7288(ctx, base);
loc_821F73E4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821f7430
	if (!ctx.cr6.lt) goto loc_821F7430;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// stw r27,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r27.u32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821f7430
	if (!ctx.cr6.lt) goto loc_821F7430;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bge 0x821f7430
	if (!ctx.cr0.lt) goto loc_821F7430;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_821F7430:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x821f7334
	if (!ctx.cr0.eq) goto loc_821F7334;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f745c
	if (!ctx.cr6.eq) goto loc_821F745C;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f745c
	if (ctx.cr6.eq) goto loc_821F745C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_821F745C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821f7474
	if (ctx.cr6.eq) goto loc_821F7474;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7478
	if (!ctx.cr6.eq) goto loc_821F7478;
loc_821F7474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F7478:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F72F8) {
	__imp__sub_821F72F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x821F7488;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32032
	ctx.r22.s64 = -2099249152;
	// lwz r24,264(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r25,r3,364
	ctx.r25.s64 = ctx.r3.s64 + 364;
	// li r18,2
	ctx.r18.s64 = 2;
	// lwz r9,-5944(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5944);
	// li r19,200
	ctx.r19.s64 = 200;
	// ori r21,r11,34079
	ctx.r21.u64 = ctx.r11.u64 | 34079;
loc_821F74B0:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulhw r7,r8,r21
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// divw r6,r8,r19
	ctx.r6.s32 = ctx.r8.s32 / ctx.r19.s32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r23,r6,24
	ctx.r23.u64 = ctx.r6.u32 & 0xFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r4,r5,200
	ctx.r4.s64 = ctx.r5.s64 * 200;
	// subf. r29,r4,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x821f75d0
	if (!ctx.cr0.gt) goto loc_821F75D0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f74f4
	if (ctx.cr6.eq) goto loc_821F74F4;
	// lbz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f74f4
	if (ctx.cr6.eq) goto loc_821F74F4;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821f7524
	goto loc_821F7524;
loc_821F74F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r24,544
	ctx.r10.s64 = ctx.r24.s64 + 544;
loc_821F74FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821f751c
	if (ctx.cr6.eq) goto loc_821F751C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x821f74fc
	if (ctx.cr6.lt) goto loc_821F74FC;
	// b 0x821f75d0
	goto loc_821F75D0;
loc_821F751C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821f75d0
	if (ctx.cr6.lt) goto loc_821F75D0;
loc_821F7524:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f75d0
	if (ctx.cr6.eq) goto loc_821F75D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F7544;
	sub_82332AF8(ctx, base);
	// addi r26,r25,-8
	ctx.r26.s64 = ctx.r25.s64 + -8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_821F7554:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821f758c
	if (ctx.cr6.lt) goto loc_821F758C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823340b0
	ctx.lr = 0x821F756C;
	sub_823340B0(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x821f7578
	if (!ctx.cr6.lt) goto loc_821F7578;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821F7578:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,536(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82331e38
	ctx.lr = 0x821F758C;
	sub_82331E38(ctx, base);
loc_821F758C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f75a8
	if (ctx.cr6.eq) goto loc_821F75A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x821f7554
	if (ctx.cr6.lt) goto loc_821F7554;
loc_821F75A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-12(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x821f6e78
	ctx.lr = 0x821F75CC;
	sub_821F6E78(ctx, base);
	// lwz r9,-5944(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5944);
loc_821F75D0:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// bne 0x821f74b0
	if (!ctx.cr0.eq) goto loc_821F74B0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7480) {
	__imp__sub_821F7480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F75E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F75E4) {
	__imp__sub_821F75E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F75E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F75F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f761c
	if (ctx.cr6.eq) goto loc_821F761C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F7618;
	sub_82229B60(ctx, base);
	// b 0x821f7620
	goto loc_821F7620;
loc_821F761C:
	// bl 0x822acd78
	ctx.lr = 0x821F7620;
	sub_822ACD78(ctx, base);
loc_821F7620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F7628;
	sub_82229B60(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,266(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 266);
	// bl 0x82229da8
	ctx.lr = 0x821F7640;
	sub_82229DA8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7688
	if (ctx.cr6.eq) goto loc_821F7688;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7688
	if (ctx.cr6.eq) goto loc_821F7688;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821f766c
	if (ctx.cr6.eq) goto loc_821F766C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F7668;
	sub_82229B60(ctx, base);
	// b 0x821f7670
	goto loc_821F7670;
loc_821F766C:
	// bl 0x822acd78
	ctx.lr = 0x821F7670;
	sub_822ACD78(ctx, base);
loc_821F7670:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F7678;
	sub_82229B60(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,590(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 590);
	// bl 0x82229da8
	ctx.lr = 0x821F7688;
	sub_82229DA8(ctx, base);
loc_821F7688:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7472
	ctx.r3.s64 = ctx.r11.s64 + -7472;
	// bne cr6,0x821f76a4
	if (!ctx.cr6.eq) goto loc_821F76A4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_821F76A4:
	// bl 0x822e84f0
	ctx.lr = 0x821F76A8;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821F76C4;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F75E8) {
	__imp__sub_821F75E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F76CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F76CC) {
	__imp__sub_821F76CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F76D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821F76D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F76F4;
	sub_82332AF8(ctx, base);
	// lwz r28,264(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821F7708;
	sub_820DA5B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f7738
	if (!ctx.cr6.eq) goto loc_821F7738;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333e38
	ctx.lr = 0x821F7720;
	sub_82333E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7738
	if (!ctx.cr6.eq) goto loc_821F7738;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821F7738:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821f72f8
	ctx.lr = 0x821F7750;
	sub_821F72F8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f7778
	if (ctx.cr6.eq) goto loc_821F7778;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821f75e8
	ctx.lr = 0x821F7778;
	sub_821F75E8(ctx, base);
loc_821F7778:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F76D0) {
	__imp__sub_821F76D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F778C) {
	__imp__sub_821F778C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821F7798;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lfs f31,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r26,2660
	ctx.r29.s64 = ctx.r26.s64 + 2660;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// ori r25,r10,34079
	ctx.r25.u64 = ctx.r10.u64 | 34079;
loc_821F77CC:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f78cc
	if (ctx.cr6.eq) goto loc_821F78CC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -312);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f785c
	if (!ctx.cr6.eq) goto loc_821F785C;
	// lwz r9,-260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -260);
	// mulhw r8,r9,r25
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32)) >> 32;
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,200
	ctx.r6.s64 = ctx.r7.s64 * 200;
	// subf r3,r6,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r6.s64;
	// bl 0x82332af8
	ctx.lr = 0x821F7810;
	sub_82332AF8(ctx, base);
	// lbz r5,1625(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1625);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f785c
	if (!ctx.cr6.eq) goto loc_821F785C;
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -384);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -392);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,-388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -388);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f0,f8,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821f785c
	if (!ctx.cr6.gt) goto loc_821F785C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_821F785C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r26,2788
	ctx.r11.s64 = ctx.r26.s64 + 2788;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f77cc
	if (ctx.cr6.lt) goto loc_821F77CC;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x821f7890
	if (!ctx.cr6.eq) goto loc_821F7890;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,-7448
	ctx.r4.s64 = ctx.r11.s64 + -7448;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x821F788C;
	sub_82280C30(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_821F7890:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r26,2660
	ctx.r11.s64 = ctx.r26.s64 + 2660;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x8222f680
	ctx.lr = 0x821F78B0;
	sub_8222F680(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821F78BC;
	sub_821E2E18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821F78CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7790) {
	__imp__sub_821F7790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F78DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F78DC) {
	__imp__sub_821F78DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F78E0) {
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
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// mulhw r9,r3,r10
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,200
	ctx.r7.s64 = ctx.r8.s64 * 200;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// bl 0x82332b28
	ctx.lr = 0x821F7918;
	sub_82332B28(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,-7360
	ctx.r5.s64 = ctx.r5.s64 + -7360;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821F7930;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// bl 0x8222fc40
	ctx.lr = 0x821F793C;
	sub_8222FC40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x8222fc40
	ctx.lr = 0x821F7948;
	sub_8222FC40(ctx, base);
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

PPC_WEAK_FUNC(sub_821F78E0) {
	__imp__sub_821F78E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F795C) {
	__imp__sub_821F795C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F7968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222f3a8
	ctx.lr = 0x821F7974;
	sub_8222F3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f7790
	ctx.lr = 0x821F797C;
	sub_821F7790(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,2660
	ctx.r11.s64 = ctx.r11.s64 + 2660;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821F7998;
	sub_821E2E18(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r30,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r30.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f78e0
	ctx.lr = 0x821F79B0;
	sub_821F78E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// lis r6,16508
	ctx.r6.s64 = 1081868288;
	// lis r5,20971
	ctx.r5.s64 = 1374355456;
	// ori r4,r6,264
	ctx.r4.u64 = ctx.r6.u64 | 264;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r5,34079
	ctx.r3.u64 = ctx.r5.u64 | 34079;
	// lfs f13,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// li r10,200
	ctx.r10.s64 = 200;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// mulhw r9,r30,r3
	ctx.r9.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32)) >> 32;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// divw r8,r30,r10
	ctx.r8.s32 = ctx.r30.s32 / ctx.r10.s32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// mulli r6,r7,200
	ctx.r6.s64 = ctx.r7.s64 * 200;
	// subf r28,r6,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F7A20;
	sub_82332AF8(ctx, base);
	// lwz r5,472(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// rlwinm r27,r29,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r4,r5,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f7a64
	if (!ctx.cr6.eq) goto loc_821F7A64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332b28
	ctx.lr = 0x821F7A40;
	sub_82332B28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r4,r11,-7344
	ctx.r4.s64 = ctx.r11.s64 + -7344;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F7A64;
	sub_822830E8(ctx, base);
loc_821F7A64:
	// lwz r11,472(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 472);
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82300a60
	ctx.lr = 0x821F7A70;
	sub_82300A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb90
	ctx.lr = 0x821F7A7C;
	sub_8222EB90(ctx, base);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stb r10,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r10.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222feb8
	ctx.lr = 0x821F7A98;
	sub_8222FEB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x821F7AA0;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f7ab0
	if (ctx.cr6.eq) goto loc_821F7AB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82333f68
	ctx.lr = 0x821F7AB0;
	sub_82333F68(ctx, base);
loc_821F7AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7960) {
	__imp__sub_821F7960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7ABC) {
	__imp__sub_821F7ABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7AC0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x821F7B00;
	sub_822DA518(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-21308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21308);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8222fe68
	ctx.lr = 0x821F7B30;
	sub_8222FE68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// li r6,5
	ctx.r6.s64 = 5;
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r7,9624
	ctx.r5.s64 = ctx.r7.s64 + 9624;
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,26572(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26572);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f1,f0,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f0,13960(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,48(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821F7AC0) {
	__imp__sub_821F7AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7B8C) {
	__imp__sub_821F7B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7B90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8222fb90
	ctx.lr = 0x821F7BD8;
	sub_8222FB90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8222fbe8
	ctx.lr = 0x821F7BFC;
	sub_8222FBE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7ac0
	ctx.lr = 0x821F7C08;
	sub_821F7AC0(ctx, base);
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

PPC_WEAK_FUNC(sub_821F7B90) {
	__imp__sub_821F7B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F7C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f7d30
	if (ctx.cr6.eq) goto loc_821F7D30;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8222efb8
	ctx.lr = 0x821F7C48;
	sub_8222EFB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f7d30
	if (ctx.cr6.eq) goto loc_821F7D30;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
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
	// beq cr6,0x821f7ca0
	if (ctx.cr6.eq) goto loc_821F7CA0;
	// lwz r8,316(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821f7c98
	if (!ctx.cr6.eq) goto loc_821F7C98;
	// li r8,1169
	ctx.r8.s64 = 1169;
loc_821F7C98:
	// addi r6,r29,180
	ctx.r6.s64 = ctx.r29.s64 + 180;
	// b 0x821f7cd0
	goto loc_821F7CD0;
loc_821F7CA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,1169
	ctx.r8.s64 = 1169;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_821F7CD0:
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fe618
	ctx.lr = 0x821F7CE8;
	sub_821FE618(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmadds f6,f7,f0,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmadds f3,f4,f0,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F7D30:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,44(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821F7D64;
	sub_822DA650(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7C20) {
	__imp__sub_821F7C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7D6C) {
	__imp__sub_821F7D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7D70) {
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
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821f7c20
	ctx.lr = 0x821F7D8C;
	sub_821F7C20(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821F7D98;
	sub_8222FB90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7c78
	ctx.lr = 0x821F7DA4;
	sub_822D7C78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F7DB0;
	sub_8222FBE8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821F7D70) {
	__imp__sub_821F7D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7DDC) {
	__imp__sub_821F7DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7DE0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x821f7960
	sub_821F7960(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7DE0) {
	__imp__sub_821F7DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7DE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821f7960
	ctx.lr = 0x821F7E08;
	sub_821F7960(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lhz r4,228(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 228);
	// bl 0x821f7c20
	ctx.lr = 0x821F7E28;
	sub_821F7C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x8222fb90
	ctx.lr = 0x821F7E34;
	sub_8222FB90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7c78
	ctx.lr = 0x821F7E40;
	sub_822D7C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222fbe8
	ctx.lr = 0x821F7E4C;
	sub_8222FBE8(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r7,r9,9624
	ctx.r7.s64 = ctx.r9.s64 + 9624;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x821f7ac0
	ctx.lr = 0x821F7E70;
	sub_821F7AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_821F7DE8) {
	__imp__sub_821F7DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7E8C) {
	__imp__sub_821F7E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7E90) {
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
	// bl 0x823319d8
	ctx.lr = 0x821F7EB4;
	sub_823319D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82331a58
	ctx.lr = 0x821F7EC4;
	sub_82331A58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da730
	ctx.lr = 0x821F7ED4;
	sub_820DA730(ctx, base);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_821F7E90) {
	__imp__sub_821F7E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7EFC) {
	__imp__sub_821F7EFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7F00) {
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
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e77b8
	ctx.lr = 0x821F7F24;
	sub_821E77B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821f7f34
	if (!ctx.cr6.gt) goto loc_821F7F34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821f7f4c
	goto loc_821F7F4C;
loc_821F7F34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7e90
	ctx.lr = 0x821F7F40;
	sub_821F7E90(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// andc r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
loc_821F7F4C:
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

PPC_WEAK_FUNC(sub_821F7F00) {
	__imp__sub_821F7F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F7F64) {
	__imp__sub_821F7F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F7F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F7F70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r4,352
	ctx.r30.s64 = ctx.r4.s64 + 352;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
loc_821F7F88:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821f8068
	if (!ctx.cr6.gt) goto loc_821F8068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823319d8
	ctx.lr = 0x821F7F98;
	sub_823319D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// bl 0x82331a58
	ctx.lr = 0x821F7FA8;
	sub_82331A58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// bl 0x820da730
	ctx.lr = 0x821F7FB8;
	sub_820DA730(ctx, base);
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r29,264(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// beq cr6,0x821f8010
	if (ctx.cr6.eq) goto loc_821F8010;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820da4f0
	ctx.lr = 0x821F7FE8;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821f8010
	if (ctx.cr6.lt) goto loc_821F8010;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f8010
	if (ctx.cr6.eq) goto loc_821F8010;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// b 0x821f8014
	goto loc_821F8014;
loc_821F8010:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821F8014:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// lwz r3,264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// bl 0x820da6b8
	ctx.lr = 0x821F8030;
	sub_820DA6B8(ctx, base);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f8058
	if (ctx.cr6.eq) goto loc_821F8058;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821F8050;
	sub_820DA6B8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x821f805c
	goto loc_821F805C;
loc_821F8058:
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
loc_821F805C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x821F8064;
	sub_82332B10(ctx, base);
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_821F8068:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x821f7f88
	if (!ctx.cr0.eq) goto loc_821F7F88;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F7F68) {
	__imp__sub_821F7F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F807C) {
	__imp__sub_821F807C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F8088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823340b0
	ctx.lr = 0x821F809C;
	sub_823340B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F80A8;
	sub_82332AF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x821f80c0
	if (!ctx.cr6.eq) goto loc_821F80C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F80C0:
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r10,992(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821f80f4
	if (ctx.cr6.gt) goto loc_821F80F4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
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
	// lfs f0,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x821f8134
	goto loc_821F8134;
loc_821F80F4:
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8222fd60
	ctx.lr = 0x821F80FC;
	sub_8222FD60(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,992(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// divw r8,r3,r11
	ctx.r8.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lfs f0,11804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r7,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_821F8134:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8080) {
	__imp__sub_821F8080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821F8170;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r3,368
	ctx.r30.s64 = ctx.r3.s64 + 368;
	// li r23,1
	ctx.r23.s64 = 1;
loc_821F818C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821f82d8
	if (!ctx.cr6.gt) goto loc_821F82D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F819C;
	sub_82332AF8(ctx, base);
	// lbz r11,1643(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1643);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f81cc
	if (!ctx.cr6.eq) goto loc_821F81CC;
	// bl 0x823333f8
	ctx.lr = 0x821F81B0;
	sub_823333F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f81cc
	if (ctx.cr6.eq) goto loc_821F81CC;
	// lwz r11,308(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f81cc
	if (ctx.cr6.eq) goto loc_821F81CC;
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
loc_821F81CC:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821f81e0
	if (ctx.cr6.lt) goto loc_821F81E0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x821f82e8
	if (!ctx.cr6.eq) goto loc_821F82E8;
loc_821F81E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332b10
	ctx.lr = 0x821F81E8;
	sub_82332B10(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r31,988(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x821f8204
	if (!ctx.cr6.lt) goto loc_821F8204;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_821F8204:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x821f821c
	if (!ctx.cr6.lt) goto loc_821F821C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821f82a4
	goto loc_821F82A4;
loc_821F821C:
	// bl 0x8222fd60
	ctx.lr = 0x821F8220;
	sub_8222FD60(ctx, base);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt 0x821f824c
	if (ctx.cr0.gt) goto loc_821F824C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821f82a4
	goto loc_821F82A4;
loc_821F824C:
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subfe. r9,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x821f82a4
	if (ctx.cr0.lt) goto loc_821F82A4;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
loc_821F826C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f8080
	ctx.lr = 0x821F8274;
	sub_821F8080(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821f828c
	if (ctx.cr6.lt) goto loc_821F828C;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821f8290
	goto loc_821F8290;
loc_821F828C:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_821F8290:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x821f826c
	if (!ctx.cr0.eq) goto loc_821F826C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821F82A4:
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r31.u32);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// stw r11,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r11.u32);
	// bl 0x82332b10
	ctx.lr = 0x821F82BC;
	sub_82332B10(ctx, base);
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r9,-12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,64(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_821F82D8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// blt cr6,0x821f818c
	if (ctx.cr6.lt) goto loc_821F818C;
loc_821F82E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8168) {
	__imp__sub_821F8168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F82F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F82F4) {
	__imp__sub_821F82F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F82F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F8300;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F8318;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821f834c
	if (!ctx.cr6.eq) goto loc_821F834C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x821F832C;
	sub_82332B28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7256
	ctx.r4.s64 = ctx.r11.s64 + -7256;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280b08
	ctx.lr = 0x821F8340;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F834C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821f7960
	ctx.lr = 0x821F835C;
	sub_821F7960(ctx, base);
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f8394
	if (ctx.cr6.eq) goto loc_821F8394;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f7f68
	ctx.lr = 0x821F837C;
	sub_821F7F68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x82232598
	ctx.lr = 0x821F8388;
	sub_82232598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F8394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F839C;
	sub_82332AF8(ctx, base);
	// lbz r11,1643(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1643);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f83f8
	if (!ctx.cr6.eq) goto loc_821F83F8;
	// bl 0x823333f8
	ctx.lr = 0x821F83AC;
	sub_823333F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f83f8
	if (ctx.cr6.eq) goto loc_821F83F8;
	// bl 0x8222fd60
	ctx.lr = 0x821F83B8;
	sub_8222FD60(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// lwz r11,-5960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5960);
	// mulhw r8,r3,r9
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821f83f8
	if (!ctx.cr6.lt) goto loc_821F83F8;
	// lwz r11,308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r10.u32);
loc_821F83F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f8168
	ctx.lr = 0x821F8404;
	sub_821F8168(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F82F8) {
	__imp__sub_821F82F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F8418;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r10,291(r3)
	PPC_STORE_U8(ctx.r3.u32 + 291, ctx.r10.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f844c
	if (ctx.cr6.eq) goto loc_821F844C;
	// addi r4,r3,232
	ctx.r4.s64 = ctx.r3.s64 + 232;
	// bl 0x8222fb90
	ctx.lr = 0x821F8448;
	sub_8222FB90(ctx, base);
	// b 0x821f86bc
	goto loc_821F86BC;
loc_821F844C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,316(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bne cr6,0x821f8484
	if (!ctx.cr6.eq) goto loc_821F8484;
	// li r29,1169
	ctx.r29.s64 = 1169;
loc_821F8484:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f30,25520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25520);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fsubs f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// bl 0x821fe618
	ctx.lr = 0x821F84E0;
	sub_821FE618(ctx, base);
	// lbz r9,265(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 265);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f8548
	if (ctx.cr6.eq) goto loc_821F8548;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lfs f7,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821F8548;
	sub_821FE618(ctx, base);
loc_821F8548:
	// lbz r10,265(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 265);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f8580
	if (ctx.cr6.eq) goto loc_821F8580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8620
	ctx.lr = 0x821F855C;
	sub_822E8620(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821F8568;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7144
	ctx.r4.s64 = ctx.r11.s64 + -7144;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x821F8580;
	sub_82280900(ctx, base);
loc_821F8580:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82276090
	ctx.lr = 0x821F8588;
	sub_82276090(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// sth r3,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r3.u16);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// oris r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 2097152;
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,172(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// bl 0x8222fb90
	ctx.lr = 0x821F85F8;
	sub_8222FB90(ctx, base);
	// lfs f2,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bge cr6,0x821f86bc
	if (!ctx.cr6.lt) goto loc_821F86BC;
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f12,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x821F8630;
	sub_822DA518(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f11,f12,f11,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmsubs f10,f0,f10,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmsubs f9,f13,f9,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f2,f9,f13,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f1,f11,f12,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f4.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmsubs f0,f10,f0,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x821F869C;
	sub_822D7C78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x8222fbe8
	ctx.lr = 0x821F86BC;
	sub_8222FBE8(ctx, base);
loc_821F86BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821F86C4;
	sub_82340D30(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8410) {
	__imp__sub_821F8410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F86D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F86D4) {
	__imp__sub_821F86D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F86D8) {
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
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// stw r11,2924(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2924, ctx.r11.u32);
	// bl 0x82332c40
	ctx.lr = 0x821F86F8;
	sub_82332C40(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,13712
	ctx.r5.s64 = ctx.r8.s64 + 13712;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821F8710;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3016
	ctx.r3.s64 = 3016;
	// bl 0x8233e7d8
	ctx.lr = 0x821F871C;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F86D8) {
	__imp__sub_821F86D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F872C) {
	__imp__sub_821F872C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8730) {
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
	// lwz r3,1464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f8764
	if (ctx.cr6.eq) goto loc_821F8764;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f8764
	if (ctx.cr6.eq) goto loc_821F8764;
	// bl 0x8222e9c0
	ctx.lr = 0x821F8764;
	sub_8222E9C0(ctx, base);
loc_821F8764:
	// lwz r3,1468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f8780
	if (ctx.cr6.eq) goto loc_821F8780;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f8780
	if (ctx.cr6.eq) goto loc_821F8780;
	// bl 0x8222e9c0
	ctx.lr = 0x821F8780;
	sub_8222E9C0(ctx, base);
loc_821F8780:
	// lwz r3,1508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f879c
	if (ctx.cr6.eq) goto loc_821F879C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f879c
	if (ctx.cr6.eq) goto loc_821F879C;
	// bl 0x8222e9c0
	ctx.lr = 0x821F879C;
	sub_8222E9C0(ctx, base);
loc_821F879C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F87A0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f87d4
	if (ctx.cr6.eq) goto loc_821F87D4;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f87c8
	if (ctx.cr6.eq) goto loc_821F87C8;
	// bl 0x822a13a0
	ctx.lr = 0x821F87C4;
	sub_822A13A0(ctx, base);
	// bl 0x8222e9c0
	ctx.lr = 0x821F87C8;
	sub_8222E9C0(ctx, base);
loc_821F87C8:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x821f87a0
	if (ctx.cr6.lt) goto loc_821F87A0;
loc_821F87D4:
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

PPC_WEAK_FUNC(sub_821F8730) {
	__imp__sub_821F8730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F87EC) {
	__imp__sub_821F87EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F87F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F87F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// stw r11,2924(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2924, ctx.r11.u32);
	// bl 0x82332af8
	ctx.lr = 0x821F8810;
	sub_82332AF8(ctx, base);
	// lwz r4,1384(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7088
	ctx.r31.s64 = ctx.r11.s64 + -7088;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f884c
	if (ctx.cr6.eq) goto loc_821F884C;
	// addi r3,r3,1392
	ctx.r3.s64 = ctx.r3.s64 + 1392;
	// bl 0x82214a20
	ctx.lr = 0x821F8834;
	sub_82214A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f884c
	if (!ctx.cr6.eq) goto loc_821F884C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F884C;
	sub_822830E8(ctx, base);
loc_821F884C:
	// lwz r4,1388(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f887c
	if (ctx.cr6.eq) goto loc_821F887C;
	// addi r3,r30,1396
	ctx.r3.s64 = ctx.r30.s64 + 1396;
	// bl 0x82214a20
	ctx.lr = 0x821F8864;
	sub_82214A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f887c
	if (!ctx.cr6.eq) goto loc_821F887C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F887C;
	sub_822830E8(ctx, base);
loc_821F887C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,13500
	ctx.r27.s64 = ctx.r11.s64 + 13500;
loc_821F8888:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f88cc
	if (ctx.cr6.eq) goto loc_821F88CC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82300a60
	ctx.lr = 0x821F88A4;
	sub_82300A60(ctx, base);
	// bl 0x8222e230
	ctx.lr = 0x821F88A8;
	sub_8222E230(ctx, base);
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x822ff4e8
	ctx.lr = 0x821F88B8;
	sub_822FF4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f88cc
	if (ctx.cr6.eq) goto loc_821F88CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ebf0
	ctx.lr = 0x821F88CC;
	sub_8222EBF0(ctx, base);
loc_821F88CC:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821f8888
	if (ctx.cr6.lt) goto loc_821F8888;
	// lwz r3,1056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f88f4
	if (ctx.cr6.eq) goto loc_821F88F4;
	// bl 0x82300a60
	ctx.lr = 0x821F88F0;
	sub_82300A60(ctx, base);
	// bl 0x8222e230
	ctx.lr = 0x821F88F4;
	sub_8222E230(ctx, base);
loc_821F88F4:
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f8908
	if (ctx.cr6.eq) goto loc_821F8908;
	// bl 0x82300a60
	ctx.lr = 0x821F8904;
	sub_82300A60(ctx, base);
	// bl 0x8222e230
	ctx.lr = 0x821F8908;
	sub_8222E230(ctx, base);
loc_821F8908:
	// lwz r3,488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f891c
	if (ctx.cr6.eq) goto loc_821F891C;
	// bl 0x82300a60
	ctx.lr = 0x821F8918;
	sub_82300A60(ctx, base);
	// bl 0x8222e230
	ctx.lr = 0x821F891C;
	sub_8222E230(ctx, base);
loc_821F891C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8730
	ctx.lr = 0x821F8924;
	sub_821F8730(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F87F0) {
	__imp__sub_821F87F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F892C) {
	__imp__sub_821F892C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F8938;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// stw r4,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r4.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// ori r9,r11,34079
	ctx.r9.u64 = ctx.r11.u64 | 34079;
	// divw r8,r4,r10
	ctx.r8.s32 = ctx.r4.s32 / ctx.r10.s32;
	// mulhw r7,r4,r9
	ctx.r7.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// subf r30,r5,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F8978;
	sub_82332AF8(ctx, base);
	// lwz r4,472(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// rlwinm r28,r29,2,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r3,r28,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f89bc
	if (!ctx.cr6.eq) goto loc_821F89BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b28
	ctx.lr = 0x821F8998;
	sub_82332B28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r6,364(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r4,r11,-7344
	ctx.r4.s64 = ctx.r11.s64 + -7344;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F89BC;
	sub_822830E8(ctx, base);
loc_821F89BC:
	// lwz r11,472(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 472);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82300a60
	ctx.lr = 0x821F89C8;
	sub_82300A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb90
	ctx.lr = 0x821F89D4;
	sub_8222EB90(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,16508
	ctx.r8.s64 = 1081868288;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r6,r8,264
	ctx.r6.u64 = ctx.r8.u64 | 264;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// sth r5,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r5.u16);
	// bl 0x821f8168
	ctx.lr = 0x821F8A28;
	sub_821F8168(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// lbz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f8a6c
	if (ctx.cr6.eq) goto loc_821F8A6C;
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F8A54;
	sub_8222FBE8(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// stb r10,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r10.u8);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// b 0x821f8ab8
	goto loc_821F8AB8;
loc_821F8A6C:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r10,23
	ctx.r10.s64 = 23;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r10,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r10.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f8aa0
	if (!ctx.cr6.eq) goto loc_821F8AA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// sth r10,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r10.u16);
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,252(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
loc_821F8AA0:
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F8AAC;
	sub_8222FBE8(ctx, base);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821F8AB8;
	sub_8222FB90(ctx, base);
loc_821F8AB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222feb8
	ctx.lr = 0x821F8AC4;
	sub_8222FEB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x821F8ACC;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f8adc
	if (ctx.cr6.eq) goto loc_821F8ADC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82333f68
	ctx.lr = 0x821F8ADC;
	sub_82333F68(ctx, base);
loc_821F8ADC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8930) {
	__imp__sub_821F8930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F8AE4) {
	__imp__sub_821F8AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8AE8) {
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
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x821F8B28;
	sub_822DA518(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f11,f12,f11,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmsubs f10,f0,f10,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmsubs f9,f13,f9,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f2,f9,f13,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f11,f12,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f0,f10,f0,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x821F8B94;
	sub_822D7C78(ctx, base);
	// lhz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f8bb4
	if (ctx.cr6.eq) goto loc_821F8BB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821F8BB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F8BC0;
	sub_8222FBE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821F8AE8) {
	__imp__sub_821F8AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F8BD4) {
	__imp__sub_821F8BD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F8BE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x822846c0
	ctx.lr = 0x821F8BFC;
	sub_822846C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822ef020
	ctx.lr = 0x821F8C04;
	sub_822EF020(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f8c38
	if (!ctx.cr6.eq) goto loc_821F8C38;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821F8C38:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f12,12544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12544);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821f8c74
	if (ctx.cr6.gt) goto loc_821F8C74;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x821f8ca8
	goto loc_821F8CA8;
loc_821F8C74:
	// fsqrts f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,13960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13960);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821F8CA8:
	// bl 0x8225aa10
	ctx.lr = 0x821F8CAC;
	sub_8225AA10(ctx, base);
	// rotlwi r4,r3,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821f8d00
	if (!ctx.cr6.eq) goto loc_821F8D00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ef030
	ctx.lr = 0x821F8CC4;
	sub_822EF030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7000
	ctx.r4.s64 = ctx.r11.s64 + -7000;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280c30
	ctx.lr = 0x821F8CD8;
	sub_82280C30(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821F8D00:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821f8d28
	if (ctx.cr6.eq) goto loc_821F8D28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82258fc0
	ctx.lr = 0x821F8D20;
	sub_82258FC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821F8D28:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82259478
	ctx.lr = 0x821F8D3C;
	sub_82259478(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8BD8) {
	__imp__sub_821F8BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F8D44) {
	__imp__sub_821F8D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F8D50;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de024
	ctx.lr = 0x821F8D58;
	__savefpr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x821f7c20
	ctx.lr = 0x821F8D80;
	sub_821F7C20(ctx, base);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f11,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f8,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f31,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 + 36;
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822d6378
	ctx.lr = 0x821F8DD4;
	sub_822D6378(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d5c30
	ctx.lr = 0x821F8DE4;
	sub_822D5C30(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6f70
	ctx.lr = 0x821F8DF4;
	sub_822D6F70(ctx, base);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f8bd8
	ctx.lr = 0x821F8E38;
	sub_821F8BD8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8e4c
	if (ctx.cr6.eq) goto loc_821F8E4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82255570
	ctx.lr = 0x821F8E4C;
	sub_82255570(ctx, base);
loc_821F8E4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821F8E58;
	sub_8222FB90(ctx, base);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d7c78
	ctx.lr = 0x821F8E68;
	sub_822D7C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F8E74;
	sub_8222FBE8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,50
	ctx.r11.s64 = 50;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x822d7c78
	ctx.lr = 0x821F8EB8;
	sub_822D7C78(ctx, base);
	// lfs f11,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// lfs f30,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f9,f30
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fadds f1,f27,f29
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F8EE4;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f28,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f4,f27,f8
	ctx.f4.f64 = double(float(ctx.f27.f64 - ctx.f8.f64));
	// fmuls f27,f5,f30
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,76(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fadds f1,f27,f29
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F8F14;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f12,f27,f2
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fadds f1,f30,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F8F3C;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f7,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,76(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f5,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f4,80(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f3,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,84(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x821F8F7C;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8D48) {
	__imp__sub_821F8D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8F80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x821F8FA8;
	sub_822DA650(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8bd8
	ctx.lr = 0x821F8FCC;
	sub_821F8BD8(ctx, base);
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

PPC_WEAK_FUNC(sub_821F8F80) {
	__imp__sub_821F8F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F8FE4) {
	__imp__sub_821F8FE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F8FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F8FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821f90ec
	if (!ctx.cr6.eq) goto loc_821F90EC;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f90ec
	if (ctx.cr6.eq) goto loc_821F90EC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821f904c
	if (!ctx.cr6.eq) goto loc_821F904C;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r8,r11,50
	ctx.r8.s64 = ctx.r11.s64 + 50;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x821f904c
	if (ctx.cr6.gt) goto loc_821F904C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x821F9040;
	sub_821FD350(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F904C:
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822555d8
	ctx.lr = 0x821F905C;
	sub_822555D8(ctx, base);
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822d7c78
	ctx.lr = 0x821F906C;
	sub_822D7C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821F9078;
	sub_8222FB90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F9084;
	sub_8222FBE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821F908C;
	sub_82340D30(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x822578d0
	ctx.lr = 0x821F9094;
	sub_822578D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f90f8
	if (ctx.cr6.eq) goto loc_821F90F8;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82259630
	ctx.lr = 0x821F90AC;
	sub_82259630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342690
	ctx.lr = 0x821F90C4;
	sub_82342690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f90e0
	if (ctx.cr6.eq) goto loc_821F90E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x821F90D4;
	sub_8222F680(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F90E0:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
loc_821F90EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F90F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x821fd350
	ctx.lr = 0x821F910C;
	sub_821FD350(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F8FE8) {
	__imp__sub_821F8FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F9120;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f8fe8
	ctx.lr = 0x821F9138;
	sub_821F8FE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f9564
	if (!ctx.cr6.eq) goto loc_821F9564;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// lhz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// lfs f29,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x821f9178
	if (ctx.cr6.eq) goto loc_821F9178;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f91dc
	if (ctx.cr6.eq) goto loc_821F91DC;
loc_821F9178:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821f91dc
	if (ctx.cr6.eq) goto loc_821F91DC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821f91dc
	if (ctx.cr6.eq) goto loc_821F91DC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x821f91a8
	if (ctx.cr6.eq) goto loc_821F91A8;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f91dc
	if (!ctx.cr6.eq) goto loc_821F91DC;
loc_821F91A8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f29,40(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f29,44(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f29,48(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_821F91DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f955c
	if (ctx.cr6.eq) goto loc_821F955C;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f955c
	if (!ctx.cr6.eq) goto loc_821F955C;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,50
	ctx.r4.s64 = ctx.r11.s64 + 50;
	// bl 0x8231f840
	ctx.lr = 0x821F920C;
	sub_8231F840(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x821f9220
	if (!ctx.cr6.eq) goto loc_821F9220;
	// li r28,1169
	ctx.r28.s64 = 1169;
loc_821F9220:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f0,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x821f9274
	if (!ctx.cr6.lt) goto loc_821F9274;
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821F9274:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x821f9288
	if (!ctx.cr6.eq) goto loc_821F9288;
	// li r7,2047
	ctx.r7.s64 = 2047;
loc_821F9288:
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821fe618
	ctx.lr = 0x821F92A4;
	sub_821FE618(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f30,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f30.f64 = double(temp.f32);
	// bge cr6,0x821f9464
	if (!ctx.cr6.lt) goto loc_821F9464;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,153(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 153);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f13,f7,f0,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x821f93d0
	if (!ctx.cr6.eq) goto loc_821F93D0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821f93d0
	if (!ctx.cr6.lt) goto loc_821F93D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x821f93d0
	if (!ctx.cr6.lt) goto loc_821F93D0;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// fsubs f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmuls f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f2,f12,f6,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f1,f4,f0,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fsubs f11,f31,f1
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f10,f13,f11,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f9,f12,f11,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f8,f11,f0,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x821f9378
	if (!ctx.cr6.eq) goto loc_821F9378;
	// li r7,2047
	ctx.r7.s64 = 2047;
loc_821F9378:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821fe618
	ctx.lr = 0x821F9390;
	sub_821FE618(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f8,f0,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_821F93D0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,50
	ctx.r9.s64 = 50;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// lfs f0,5996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x821f947c
	goto loc_821F947C;
loc_821F9464:
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
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_821F947C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821F9484;
	sub_82340D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x821F948C;
	sub_821FD350(ctx, base);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9564
	if (ctx.cr6.eq) goto loc_821F9564;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821f9564
	if (!ctx.cr6.lt) goto loc_821F9564;
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x821f94cc
	if (ctx.cr6.gt) goto loc_821F94CC;
loc_821F94B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x821F94B8;
	sub_8222F680(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_821F94CC:
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342690
	ctx.lr = 0x821F94DC;
	sub_82342690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f94b0
	if (!ctx.cr6.eq) goto loc_821F94B0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821f9500
	if (!ctx.cr6.eq) goto loc_821F9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b8478
	ctx.lr = 0x821F94FC;
	sub_821B8478(ctx, base);
	// b 0x821f9508
	goto loc_821F9508;
loc_821F9500:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821f8ae8
	ctx.lr = 0x821F9508;
	sub_821F8AE8(ctx, base);
loc_821F9508:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821F9514;
	sub_8222FB90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82276090
	ctx.lr = 0x821F951C;
	sub_82276090(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r3.u16);
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// oris r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 2097152;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// bl 0x82340d30
	ctx.lr = 0x821F9548;
	sub_82340D30(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_821F955C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x821F9564;
	sub_821FD350(ctx, base);
loc_821F9564:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

PPC_WEAK_FUNC(sub_821F9118) {
	__imp__sub_821F9118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821F9580;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,264(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lbz r23,368(r30)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + 368);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F95A8;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f989c
	if (!ctx.cr6.eq) goto loc_821F989C;
	// lwz r4,692(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 692);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f95e0
	if (ctx.cr6.eq) goto loc_821F95E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821F95CC;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f95e0
	if (!ctx.cr6.eq) goto loc_821F95E0;
loc_821F95D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821F95E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333e00
	ctx.lr = 0x821F95E8;
	sub_82333E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f98a0
	if (ctx.cr6.eq) goto loc_821F98A0;
	// bl 0x821f7108
	ctx.lr = 0x821F95FC;
	sub_821F7108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f95d4
	if (ctx.cr6.eq) goto loc_821F95D4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333718
	ctx.lr = 0x821F9614;
	sub_82333718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f82f8
	ctx.lr = 0x821F9624;
	sub_821F82F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f9898
	if (ctx.cr6.eq) goto loc_821F9898;
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// stw r9,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r9.u32);
	// lhz r7,130(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 130);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r7,130(r3)
	PPC_STORE_U16(ctx.r3.u32 + 130, ctx.r7.u16);
	// beq cr6,0x821f9698
	if (ctx.cr6.eq) goto loc_821F9698;
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9698
	if (ctx.cr6.eq) goto loc_821F9698;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9698
	if (ctx.cr6.eq) goto loc_821F9698;
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// bl 0x8222fb90
	ctx.lr = 0x821F9674;
	sub_8222FB90(ctx, base);
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F9680;
	sub_8222FBE8(ctx, base);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82233ff0
	ctx.lr = 0x821F9694;
	sub_82233FF0(ctx, base);
	// b 0x821f9890
	goto loc_821F9890;
loc_821F9698:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F96A0;
	sub_82332AF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821F96B0;
	sub_8222FBE8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f71a0
	ctx.lr = 0x821F96C0;
	sub_821F71A0(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f11,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f71a0
	ctx.lr = 0x821F9700;
	sub_821F71A0(ctx, base);
	// lfs f5,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lfs f11,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x821f975c
	if (!ctx.cr6.eq) goto loc_821F975C;
	// li r28,1169
	ctx.r28.s64 = 1169;
loc_821F975C:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x821f9770
	if (!ctx.cr6.eq) goto loc_821F9770;
	// li r7,2047
	ctx.r7.s64 = 2047;
loc_821F9770:
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fe618
	ctx.lr = 0x821F978C;
	sub_821FE618(ctx, base);
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f984c
	if (!ctx.cr6.eq) goto loc_821F984C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f10,f0,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f8,f0,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x821f97ec
	if (!ctx.cr6.eq) goto loc_821F97EC;
	// li r7,2047
	ctx.r7.s64 = 2047;
loc_821F97EC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fe618
	ctx.lr = 0x821F9804;
	sub_821FE618(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821f9850
	goto loc_821F9850;
loc_821F984C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_821F9850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821F9858;
	sub_8222FB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x821F9860;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f9890
	if (ctx.cr6.eq) goto loc_821F9890;
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9884
	if (!ctx.cr6.eq) goto loc_821F9884;
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9890
	if (ctx.cr6.eq) goto loc_821F9890;
loc_821F9884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,968(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 968);
	// bl 0x821f8f80
	ctx.lr = 0x821F9890;
	sub_821F8F80(ctx, base);
loc_821F9890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821F9898;
	sub_82340D30(ctx, base);
loc_821F9898:
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
loc_821F989C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821F98A0:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822327b0
	ctx.lr = 0x821F98B0;
	sub_822327B0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9578) {
	__imp__sub_821F9578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F98B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F98C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// li r10,200
	ctx.r10.s64 = 200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// divw r8,r11,r10
	ctx.r8.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x82332af8
	ctx.lr = 0x821F98F4;
	sub_82332AF8(ctx, base);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x821f9954
	if (!ctx.cr6.eq) goto loc_821F9954;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821f9928
	if (!ctx.cr6.eq) goto loc_821F9928;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6e78
	ctx.lr = 0x821F9928;
	sub_821F6E78(ctx, base);
loc_821F9928:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f75e8
	ctx.lr = 0x821F9948;
	sub_821F75E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821F9954:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f9578
	ctx.lr = 0x821F9978;
	sub_821F9578(ctx, base);
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r8,r9,0,4,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r8,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
	// bne cr6,0x821f9998
	if (!ctx.cr6.eq) goto loc_821F9998;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821F9998:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7480
	ctx.lr = 0x821F99AC;
	sub_821F7480(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f99d0
	if (ctx.cr6.eq) goto loc_821F99D0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f72f8
	ctx.lr = 0x821F99D0;
	sub_821F72F8(ctx, base);
loc_821F99D0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f75e8
	ctx.lr = 0x821F99E8;
	sub_821F75E8(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f9a00
	if (!ctx.cr6.eq) goto loc_821F9A00;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f9a1c
	if (!ctx.cr6.eq) goto loc_821F9A1C;
loc_821F9A00:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,624
	ctx.r10.s64 = 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x82232128
	ctx.lr = 0x821F9A1C;
	sub_82232128(ctx, base);
loc_821F9A1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F98B8) {
	__imp__sub_821F98B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r8,132(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ori r7,r11,34079
	ctx.r7.u64 = ctx.r11.u64 | 34079;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mulhw r6,r8,r7
	ctx.r6.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r11,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 6;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r5,200
	ctx.r11.s64 = ctx.r5.s64 * 200;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// beq cr6,0x821f9a60
	if (ctx.cr6.eq) goto loc_821F9A60;
	// b 0x821f76d0
	sub_821F76D0(ctx, base);
	return;
loc_821F9A60:
	// b 0x821f98b8
	sub_821F98B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9A28) {
	__imp__sub_821F9A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F9A64) {
	__imp__sub_821F9A64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F9A70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,290(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 290);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9b80
	if (ctx.cr6.eq) goto loc_821F9B80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,290(r3)
	PPC_STORE_U8(ctx.r3.u32 + 290, ctx.r11.u8);
	// lwz r4,264(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821f9b80
	if (ctx.cr6.eq) goto loc_821F9B80;
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821f9b80
	if (ctx.cr6.lt) goto loc_821F9B80;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f9b80
	if (!ctx.cr6.eq) goto loc_821F9B80;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// ori r30,r11,34079
	ctx.r30.u64 = ctx.r11.u64 | 34079;
	// mulhw r8,r9,r30
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32)) >> 32;
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,200
	ctx.r6.s64 = ctx.r7.s64 * 200;
	// subf r27,r6,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r6.s64;
	// bl 0x8231f6f8
	ctx.lr = 0x821F9AEC;
	sub_8231F6F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9b80
	if (ctx.cr6.eq) goto loc_821F9B80;
	// lhz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulhw r8,r9,r30
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32)) >> 32;
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,200
	ctx.r6.s64 = ctx.r7.s64 * 200;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821f9b2c
	if (ctx.cr6.eq) goto loc_821F9B2C;
	// bl 0x821f76d0
	ctx.lr = 0x821F9B28;
	sub_821F76D0(ctx, base);
	// b 0x821f9b30
	goto loc_821F9B30;
loc_821F9B2C:
	// bl 0x821f98b8
	ctx.lr = 0x821F9B30;
	sub_821F98B8(ctx, base);
loc_821F9B30:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821f9b4c
	if (ctx.cr6.eq) goto loc_821F9B4C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f978
	ctx.lr = 0x821F9B4C;
	sub_8222F978(ctx, base);
loc_821F9B4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821f9b80
	if (ctx.cr6.eq) goto loc_821F9B80;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821f9b78
	if (!ctx.cr6.eq) goto loc_821F9B78;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,46(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x821F9B78;
	sub_82229DA8(ctx, base);
loc_821F9B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x821F9B80;
	sub_8222F680(ctx, base);
loc_821F9B80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9A68) {
	__imp__sub_821F9A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9B88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821f9bb0
	if (ctx.cr6.eq) goto loc_821F9BB0;
	// lwz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9bb0
	if (ctx.cr6.eq) goto loc_821F9BB0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44556
	ctx.r9.u64 = ctx.r10.u64 | 44556;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821F9BB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,290(r3)
	PPC_STORE_U8(ctx.r3.u32 + 290, ctx.r11.u8);
	// b 0x821f9a68
	sub_821F9A68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9B88) {
	__imp__sub_821F9B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F9BBC) {
	__imp__sub_821F9BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r3,26508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26508);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F9BC0) {
	__imp__sub_821F9BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F9BCC) {
	__imp__sub_821F9BCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9BD0) {
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
	// bl 0x82273138
	ctx.lr = 0x821F9BE0;
	sub_82273138(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26508
	ctx.r9.s64 = ctx.r10.s64 + 26508;
	// stw r11,26508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26508, ctx.r11.u32);
	// stw r3,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r3.u32);
	// stw r3,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F9BD0) {
	__imp__sub_821F9BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r3,26504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26504);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F9C08) {
	__imp__sub_821F9C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F9C14) {
	__imp__sub_821F9C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F9C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26504
	ctx.r31.s64 = ctx.r11.s64 + 26504;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x822e6d10
	ctx.lr = 0x821F9C3C;
	sub_822E6D10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x821F9C4C;
	sub_822E7E98(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9c68
	if (ctx.cr6.eq) goto loc_821F9C68;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F9C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9C18) {
	__imp__sub_821F9C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F9C74) {
	__imp__sub_821F9C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F9C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26504
	ctx.r31.s64 = ctx.r11.s64 + 26504;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x822e6d10
	ctx.lr = 0x821F9C9C;
	sub_822E6D10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x821F9CAC;
	sub_822E7E98(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9cc8
	if (ctx.cr6.eq) goto loc_821F9CC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821F9CC8:
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// lwz r11,23296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9d18
	if (ctx.cr6.eq) goto loc_821F9D18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f9d18
	if (ctx.cr6.eq) goto loc_821F9D18;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9d18
	if (!ctx.cr6.eq) goto loc_821F9D18;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x821f9c18
	ctx.lr = 0x821F9D0C;
	sub_821F9C18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821f9d1c
	if (!ctx.cr6.eq) goto loc_821F9D1C;
loc_821F9D18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F9D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9C78) {
	__imp__sub_821F9C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F9D24) {
	__imp__sub_821F9D24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F9D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821F9D40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f9d40
	if (!ctx.cr6.eq) goto loc_821F9D40;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,2048
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2048, ctx.xer);
	// ble cr6,0x821f9d80
	if (!ctx.cr6.gt) goto loc_821F9D80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6940
	ctx.r4.s64 = ctx.r11.s64 + -6940;
	// bl 0x822830e8
	ctx.lr = 0x821F9D80;
	sub_822830E8(ctx, base);
loc_821F9D80:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r29,r11,524
	ctx.r29.s64 = ctx.r11.s64 + 524;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821F9D9C;
	sub_823DE1F0(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9D28) {
	__imp__sub_821F9D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821F9DC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// bl 0x821f9c78
	ctx.lr = 0x821F9DE4;
	sub_821F9C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f9df4
	if (!ctx.cr6.eq) goto loc_821F9DF4;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821F9DF4:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x821f9e14
	if (ctx.cr6.eq) goto loc_821F9E14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6772
	ctx.r4.s64 = ctx.r11.s64 + -6772;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9E14;
	sub_822830E8(ctx, base);
loc_821F9E14:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r8,-6940
	ctx.r28.s64 = ctx.r8.s64 + -6940;
	// addi r26,r9,-6808
	ctx.r26.s64 = ctx.r9.s64 + -6808;
	// addi r25,r10,-6856
	ctx.r25.s64 = ctx.r10.s64 + -6856;
	// addi r27,r11,-6904
	ctx.r27.s64 = ctx.r11.s64 + -6904;
loc_821F9E34:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x821f9c78
	ctx.lr = 0x821F9E40;
	sub_821F9C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f9e54
	if (!ctx.cr6.eq) goto loc_821F9E54;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9E54;
	sub_822830E8(ctx, base);
loc_821F9E54:
	// lbz r11,1104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1104);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x821f9fc0
	if (ctx.cr6.eq) goto loc_821F9FC0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f9c78
	ctx.lr = 0x821F9E6C;
	sub_821F9C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f9e80
	if (!ctx.cr6.eq) goto loc_821F9E80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9E80;
	sub_822830E8(ctx, base);
loc_821F9E80:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x821f9e98
	if (!ctx.cr6.eq) goto loc_821F9E98;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9E98;
	sub_822830E8(ctx, base);
loc_821F9E98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x821f9eb0
	if (!ctx.cr6.eq) goto loc_821F9EB0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9EB0;
	sub_822830E8(ctx, base);
loc_821F9EB0:
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821F9EB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821f9eb8
	if (!ctx.cr6.eq) goto loc_821F9EB8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,2048
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2048, ctx.xer);
	// ble cr6,0x821f9ef4
	if (!ctx.cr6.gt) goto loc_821F9EF4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9EF4;
	sub_822830E8(ctx, base);
loc_821F9EF4:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,524
	ctx.r29.s64 = ctx.r11.s64 + 524;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821F9F10;
	sub_823DE1F0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r6,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r6.u32);
	// stwx r29,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r29.u32);
loc_821F9F38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f9f38
	if (!ctx.cr6.eq) goto loc_821F9F38;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,2048
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2048, ctx.xer);
	// ble cr6,0x821f9f74
	if (!ctx.cr6.gt) goto loc_821F9F74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F9F74;
	sub_822830E8(ctx, base);
loc_821F9F74:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,524
	ctx.r29.s64 = ctx.r11.s64 + 524;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821F9F90;
	sub_823DE1F0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r29,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x821f9e34
	goto loc_821F9E34;
loc_821F9FC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9DB8) {
	__imp__sub_821F9DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F9FD4) {
	__imp__sub_821F9FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F9FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F9FE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fa030
	if (!ctx.cr6.gt) goto loc_821FA030;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
loc_821FA008:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x821FA014;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa040
	if (ctx.cr6.eq) goto loc_821FA040;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fa008
	if (ctx.cr6.lt) goto loc_821FA008;
loc_821FA030:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821FA040:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F9FD8) {
	__imp__sub_821F9FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FA05C) {
	__imp__sub_821FA05C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FA060) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822a1d50
	sub_822A1D50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FA060) {
	__imp__sub_821FA060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FA068) {
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
	// bl 0x823de008
	ctx.lr = 0x821FA080;
	__savefpr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,2200
	ctx.r6.s64 = ctx.r11.s64 + 2200;
	// addi r4,r10,2188
	ctx.r4.s64 = ctx.r10.s64 + 2188;
	// addi r3,r9,2176
	ctx.r3.s64 = ctx.r9.s64 + 2176;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// bl 0x822e17e0
	ctx.lr = 0x821FA0A4;
	sub_822E17E0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r5,2164
	ctx.r3.s64 = ctx.r5.s64 + 2164;
	// addi r6,r8,2140
	ctx.r6.s64 = ctx.r8.s64 + 2140;
	// addi r4,r7,2128
	ctx.r4.s64 = ctx.r7.s64 + 2128;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e17e0
	ctx.lr = 0x821FA0C4;
	sub_822E17E0(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,5484(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r10,2056
	ctx.r8.s64 = ctx.r10.s64 + 2056;
	// lfs f30,6912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r9,12116
	ctx.r3.s64 = ctx.r9.s64 + 12116;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,12132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA0FC;
	sub_822E1660(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,2024
	ctx.r8.s64 = ctx.r6.s64 + 2024;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,27540(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27540, ctx.r3.u32);
	// addi r3,r5,-3672
	ctx.r3.s64 = ctx.r5.s64 + -3672;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FA128;
	sub_822E1618(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,2012
	ctx.r6.s64 = ctx.r11.s64 + 2012;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r3,13380(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13380, ctx.r3.u32);
	// addi r3,r10,2000
	ctx.r3.s64 = ctx.r10.s64 + 2000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FA14C;
	sub_822E15D0(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// ori r31,r8,65535
	ctx.r31.u64 = ctx.r8.u64 | 65535;
	// stw r3,-19084(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19084, ctx.r3.u32);
	// addi r8,r7,1980
	ctx.r8.s64 = ctx.r7.s64 + 1980;
	// addi r3,r6,1960
	ctx.r3.s64 = ctx.r6.s64 + 1960;
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FA180;
	sub_822E1618(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,1936
	ctx.r8.s64 = ctx.r4.s64 + 1936;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r3,5548(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5548, ctx.r3.u32);
	// addi r3,r11,1916
	ctx.r3.s64 = ctx.r11.s64 + 1916;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822e1618
	ctx.lr = 0x821FA1AC;
	sub_822E1618(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,-5900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5900, ctx.r3.u32);
	// lfs f29,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r6,1832
	ctx.r8.s64 = ctx.r6.s64 + 1832;
	// lfs f27,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r5,1804
	ctx.r3.s64 = ctx.r5.s64 + 1804;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA1E8;
	sub_822E1660(ctx, base);
	// lis r4,-32052
	ctx.r4.s64 = -2100559872;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,1704
	ctx.r8.s64 = ctx.r11.s64 + 1704;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,26536(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26536, ctx.r3.u32);
	// addi r3,r10,1668
	ctx.r3.s64 = ctx.r10.s64 + 1668;
	// bl 0x822e1660
	ctx.lr = 0x821FA214;
	sub_822E1660(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r8,1536
	ctx.r8.s64 = ctx.r8.s64 + 1536;
	// stw r3,26016(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26016, ctx.r3.u32);
	// addi r3,r7,1636
	ctx.r3.s64 = ctx.r7.s64 + 1636;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FA240;
	sub_822E1660(ctx, base);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,1456
	ctx.r8.s64 = ctx.r4.s64 + 1456;
	// stw r3,11280(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11280, ctx.r3.u32);
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// lfs f28,6012(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6012);
	ctx.f28.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA274;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,-6008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6008, ctx.r3.u32);
	// addi r3,r7,1392
	ctx.r3.s64 = ctx.r7.s64 + 1392;
	// addi r8,r8,1296
	ctx.r8.s64 = ctx.r8.s64 + 1296;
	// lfs f1,1420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1420);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FA2A4;
	sub_822E1660(ctx, base);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,1248
	ctx.r8.s64 = ctx.r5.s64 + 1248;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,-14936(r6)
	PPC_STORE_U32(ctx.r6.u32 + -14936, ctx.r3.u32);
	// addi r3,r4,1228
	ctx.r3.s64 = ctx.r4.s64 + 1228;
	// bl 0x822e1660
	ctx.lr = 0x821FA2D0;
	sub_822E1660(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,-6068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6068, ctx.r3.u32);
	// addi r3,r7,1208
	ctx.r3.s64 = ctx.r7.s64 + 1208;
	// lfs f28,3096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3096);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r10,1148
	ctx.r8.s64 = ctx.r10.s64 + 1148;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA304;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// stw r3,-6096(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6096, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,1048
	ctx.r8.s64 = ctx.r4.s64 + 1048;
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// lfs f24,11388(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11388);
	ctx.f24.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA338;
	sub_822E1660(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,11236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11236, ctx.r3.u32);
	// addi r3,r7,996
	ctx.r3.s64 = ctx.r7.s64 + 996;
	// addi r8,r8,920
	ctx.r8.s64 = ctx.r8.s64 + 920;
	// lfs f1,26832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FA368;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r5,908
	ctx.r3.s64 = ctx.r5.s64 + 908;
	// stw r11,-6196(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6196, ctx.r11.u32);
	// addi r8,r4,884
	ctx.r8.s64 = ctx.r4.s64 + 884;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,190
	ctx.r4.s64 = 190;
	// bl 0x822e1618
	ctx.lr = 0x821FA398;
	sub_822E1618(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r3,11272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11272, ctx.r3.u32);
	// addi r3,r7,872
	ctx.r3.s64 = ctx.r7.s64 + 872;
	// addi r8,r9,844
	ctx.r8.s64 = ctx.r9.s64 + 844;
	// lfs f2,6688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f2.f64 = double(temp.f32);
	// li r7,128
	ctx.r7.s64 = 128;
	// bl 0x822e1660
	ctx.lr = 0x821FA3C8;
	sub_822E1660(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,832
	ctx.r6.s64 = ctx.r4.s64 + 832;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-6028(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6028, ctx.r3.u32);
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x821FA3EC;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r10,804
	ctx.r6.s64 = ctx.r10.s64 + 804;
	// li r5,134
	ctx.r5.s64 = 134;
	// stw r3,-6112(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6112, ctx.r3.u32);
	// addi r3,r8,792
	ctx.r3.s64 = ctx.r8.s64 + 792;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FA410;
	sub_822E15D0(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,732
	ctx.r6.s64 = ctx.r6.s64 + 732;
	// stw r3,11220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11220, ctx.r3.u32);
	// addi r3,r5,776
	ctx.r3.s64 = ctx.r5.s64 + 776;
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x822e15d0
	ctx.lr = 0x821FA434;
	sub_822E15D0(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,700
	ctx.r8.s64 = ctx.r11.s64 + 700;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r3,13400(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13400, ctx.r3.u32);
	// addi r3,r10,684
	ctx.r3.s64 = ctx.r10.s64 + 684;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822e1618
	ctx.lr = 0x821FA460;
	sub_822E1618(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r8,r8,648
	ctx.r8.s64 = ctx.r8.s64 + 648;
	// stw r3,-5904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5904, ctx.r3.u32);
	// addi r3,r7,672
	ctx.r3.s64 = ctx.r7.s64 + 672;
	// li r7,196
	ctx.r7.s64 = 196;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x822e1618
	ctx.lr = 0x821FA48C;
	sub_822E1618(ctx, base);
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,620
	ctx.r6.s64 = ctx.r4.s64 + 620;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-19060(r5)
	PPC_STORE_U32(ctx.r5.u32 + -19060, ctx.r3.u32);
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x821FA4B0;
	sub_822E15D0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,-6124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6124, ctx.r3.u32);
	// addi r8,r6,512
	ctx.r8.s64 = ctx.r6.s64 + 512;
	// lfs f1,604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 604);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,492
	ctx.r3.s64 = ctx.r5.s64 + 492;
	// lfs f25,19444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19444);
	ctx.f25.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA4E8;
	sub_822E1660(ctx, base);
	// lis r4,-32021
	ctx.r4.s64 = -2098528256;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,360
	ctx.r8.s64 = ctx.r10.s64 + 360;
	// stw r3,-14884(r4)
	PPC_STORE_U32(ctx.r4.u32 + -14884, ctx.r3.u32);
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r3,r9,324
	ctx.r3.s64 = ctx.r9.s64 + 324;
	// lfs f1,-23464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FA518;
	sub_822E1660(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26004, ctx.r3.u32);
	// addi r8,r6,240
	ctx.r8.s64 = ctx.r6.s64 + 240;
	// lfs f26,-19192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19192);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r5,212
	ctx.r3.s64 = ctx.r5.s64 + 212;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA54C;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-5948(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5948, ctx.r3.u32);
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// li r6,200
	ctx.r6.s64 = 200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x822e1618
	ctx.lr = 0x821FA578;
	sub_822E1618(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r3,11232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11232, ctx.r3.u32);
	// lfs f23,8664(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8664);
	ctx.f23.f64 = double(temp.f32);
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// lfs f22,-21308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21308);
	ctx.f22.f64 = double(temp.f32);
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA5B4;
	sub_822E1660(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// addi r8,r10,-176
	ctx.r8.s64 = ctx.r10.s64 + -176;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,11224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11224, ctx.r3.u32);
	// addi r3,r9,-200
	ctx.r3.s64 = ctx.r9.s64 + -200;
	// bl 0x822e1660
	ctx.lr = 0x821FA5E0;
	sub_822E1660(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r3,-6156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6156, ctx.r3.u32);
	// addi r8,r5,-288
	ctx.r8.s64 = ctx.r5.s64 + -288;
	// lfs f3,-14540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14540);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r4,-312
	ctx.r3.s64 = ctx.r4.s64 + -312;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,13220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FA614;
	sub_822E1660(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-416
	ctx.r8.s64 = ctx.r10.s64 + -416;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,13344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13344, ctx.r3.u32);
	// addi r3,r9,-436
	ctx.r3.s64 = ctx.r9.s64 + -436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,750
	ctx.r4.s64 = 750;
	// bl 0x822e1618
	ctx.lr = 0x821FA640;
	sub_822E1618(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,10000
	ctx.r4.s64 = 10000;
	// stw r3,26012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26012, ctx.r3.u32);
	// addi r8,r7,-528
	ctx.r8.s64 = ctx.r7.s64 + -528;
	// addi r3,r5,-556
	ctx.r3.s64 = ctx.r5.s64 + -556;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FA66C;
	sub_822E1618(ctx, base);
	// lis r4,-32052
	ctx.r4.s64 = -2100559872;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,-608
	ctx.r6.s64 = ctx.r11.s64 + -608;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,26540(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26540, ctx.r3.u32);
	// addi r3,r10,-632
	ctx.r3.s64 = ctx.r10.s64 + -632;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FA690;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,-676
	ctx.r8.s64 = ctx.r6.s64 + -676;
	// stw r3,-6100(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6100, ctx.r3.u32);
	// addi r3,r5,-704
	ctx.r3.s64 = ctx.r5.s64 + -704;
	// lfs f23,10236(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10236);
	ctx.f23.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA6C4;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,-744
	ctx.r8.s64 = ctx.r11.s64 + -744;
	// stw r3,-5952(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5952, ctx.r3.u32);
	// addi r3,r10,-776
	ctx.r3.s64 = ctx.r10.s64 + -776;
	// li r7,196
	ctx.r7.s64 = 196;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x822e1618
	ctx.lr = 0x821FA6F0;
	sub_822E1618(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,-812
	ctx.r8.s64 = ctx.r6.s64 + -812;
	// stw r3,-19072(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19072, ctx.r3.u32);
	// addi r3,r5,-836
	ctx.r3.s64 = ctx.r5.s64 + -836;
	// lfs f1,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// li r7,128
	ctx.r7.s64 = 128;
	// bl 0x822e1660
	ctx.lr = 0x821FA720;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-880
	ctx.r8.s64 = ctx.r10.s64 + -880;
	// stw r3,-6160(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6160, ctx.r3.u32);
	// addi r3,r9,-900
	ctx.r3.s64 = ctx.r9.s64 + -900;
	// li r7,128
	ctx.r7.s64 = 128;
	// lfs f1,18652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FA750;
	sub_822E1660(ctx, base);
	// lis r7,-32052
	ctx.r7.s64 = -2100559872;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,26520(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26520, ctx.r3.u32);
	// addi r8,r8,-968
	ctx.r8.s64 = ctx.r8.s64 + -968;
	// lfs f20,6020(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6020);
	ctx.f20.f64 = double(temp.f32);
	// addi r3,r6,-924
	ctx.r3.s64 = ctx.r6.s64 + -924;
	// li r7,128
	ctx.r7.s64 = 128;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA784;
	sub_822E1660(ctx, base);
	// lis r4,-32021
	ctx.r4.s64 = -2098528256;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-1012
	ctx.r8.s64 = ctx.r10.s64 + -1012;
	// stw r3,-14924(r4)
	PPC_STORE_U32(ctx.r4.u32 + -14924, ctx.r3.u32);
	// addi r3,r9,-1032
	ctx.r3.s64 = ctx.r9.s64 + -1032;
	// li r7,128
	ctx.r7.s64 = 128;
	// lfs f1,26980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26980);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FA7B4;
	sub_822E1660(ctx, base);
	// lis r8,-32021
	ctx.r8.s64 = -2098528256;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,500
	ctx.r4.s64 = 500;
	// stw r3,-14908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14908, ctx.r3.u32);
	// addi r8,r7,-1084
	ctx.r8.s64 = ctx.r7.s64 + -1084;
	// addi r3,r5,-1108
	ctx.r3.s64 = ctx.r5.s64 + -1108;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FA7E0;
	sub_822E1618(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,-1172
	ctx.r8.s64 = ctx.r11.s64 + -1172;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,-5972(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5972, ctx.r3.u32);
	// addi r3,r10,-1200
	ctx.r3.s64 = ctx.r10.s64 + -1200;
	// bl 0x822e1660
	ctx.lr = 0x821FA80C;
	sub_822E1660(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r3,11176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11176, ctx.r3.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f1,-1204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -1204);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r6,-1236
	ctx.r8.s64 = ctx.r6.s64 + -1236;
	// addi r3,r5,-1260
	ctx.r3.s64 = ctx.r5.s64 + -1260;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FA83C;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,-1328
	ctx.r8.s64 = ctx.r11.s64 + -1328;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-6064(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6064, ctx.r3.u32);
	// addi r3,r10,-1352
	ctx.r3.s64 = ctx.r10.s64 + -1352;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x822e1618
	ctx.lr = 0x821FA868;
	sub_822E1618(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,11204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11204, ctx.r3.u32);
	// addi r3,r7,-1380
	ctx.r3.s64 = ctx.r7.s64 + -1380;
	// lfs f22,7652(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7652);
	ctx.f22.f64 = double(temp.f32);
	// addi r8,r8,-1424
	ctx.r8.s64 = ctx.r8.s64 + -1424;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA89C;
	sub_822E1660(ctx, base);
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,-1496
	ctx.r8.s64 = ctx.r4.s64 + -1496;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-18980(r5)
	PPC_STORE_U32(ctx.r5.u32 + -18980, ctx.r3.u32);
	// addi r3,r11,-1516
	ctx.r3.s64 = ctx.r11.s64 + -1516;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x822e1618
	ctx.lr = 0x821FA8C8;
	sub_822E1618(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// addi r8,r9,-1680
	ctx.r8.s64 = ctx.r9.s64 + -1680;
	// stw r3,-5960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5960, ctx.r3.u32);
	// addi r3,r7,-1548
	ctx.r3.s64 = ctx.r7.s64 + -1548;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FA8F4;
	sub_822E1660(ctx, base);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,-1792
	ctx.r8.s64 = ctx.r4.s64 + -1792;
	// stw r3,11228(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11228, ctx.r3.u32);
	// addi r3,r11,-1820
	ctx.r3.s64 = ctx.r11.s64 + -1820;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,6044(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6044);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FA924;
	sub_822E1660(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,11196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11196, ctx.r3.u32);
	// addi r3,r7,-1844
	ctx.r3.s64 = ctx.r7.s64 + -1844;
	// addi r8,r8,-1920
	ctx.r8.s64 = ctx.r8.s64 + -1920;
	// lfs f1,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FA954;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-6176(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6176, ctx.r3.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,6056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6056);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r4,-1988
	ctx.r8.s64 = ctx.r4.s64 + -1988;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,-2012
	ctx.r3.s64 = ctx.r11.s64 + -2012;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FA984;
	sub_822E1660(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r3,-18984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18984, ctx.r3.u32);
	// addi r3,r7,-2040
	ctx.r3.s64 = ctx.r7.s64 + -2040;
	// lfs f21,7540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7540);
	ctx.f21.f64 = double(temp.f32);
	// addi r8,r9,-2120
	ctx.r8.s64 = ctx.r9.s64 + -2120;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FA9B8;
	sub_822E1660(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r4,-2192
	ctx.r8.s64 = ctx.r4.s64 + -2192;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,11288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11288, ctx.r3.u32);
	// addi r3,r11,-2216
	ctx.r3.s64 = ctx.r11.s64 + -2216;
	// bl 0x822e1660
	ctx.lr = 0x821FA9E4;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,-5928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5928, ctx.r3.u32);
	// addi r3,r7,-2240
	ctx.r3.s64 = ctx.r7.s64 + -2240;
	// lfs f25,6016(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6016);
	ctx.f25.f64 = double(temp.f32);
	// addi r8,r8,-2312
	ctx.r8.s64 = ctx.r8.s64 + -2312;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FAA18;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,-2384
	ctx.r8.s64 = ctx.r5.s64 + -2384;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-6060(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6060, ctx.r3.u32);
	// addi r3,r4,-2412
	ctx.r3.s64 = ctx.r4.s64 + -2412;
	// bl 0x822e1660
	ctx.lr = 0x821FAA44;
	sub_822E1660(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,-2480
	ctx.r8.s64 = ctx.r10.s64 + -2480;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-14892(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14892, ctx.r3.u32);
	// addi r3,r9,-2504
	ctx.r3.s64 = ctx.r9.s64 + -2504;
	// bl 0x822e1660
	ctx.lr = 0x821FAA70;
	sub_822E1660(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,-2576
	ctx.r8.s64 = ctx.r6.s64 + -2576;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// stw r3,13412(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13412, ctx.r3.u32);
	// addi r3,r5,-2604
	ctx.r3.s64 = ctx.r5.s64 + -2604;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FAA9C;
	sub_822E1660(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// stw r3,13396(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13396, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-2672
	ctx.r8.s64 = ctx.r10.s64 + -2672;
	// addi r3,r9,-2700
	ctx.r3.s64 = ctx.r9.s64 + -2700;
	// li r7,196
	ctx.r7.s64 = 196;
	// lfs f2,17672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17672);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FAACC;
	sub_822E1660(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,-5984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5984, ctx.r3.u32);
	// addi r8,r6,-2800
	ctx.r8.s64 = ctx.r6.s64 + -2800;
	// lfs f1,8336(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8336);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-2840
	ctx.r3.s64 = ctx.r5.s64 + -2840;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAAFC;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r11,-2936
	ctx.r8.s64 = ctx.r11.s64 + -2936;
	// stw r3,-6000(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6000, ctx.r3.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// addi r3,r10,-2972
	ctx.r3.s64 = ctx.r10.s64 + -2972;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e1618
	ctx.lr = 0x821FAB28;
	sub_822E1618(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r8,-3032
	ctx.r8.s64 = ctx.r8.s64 + -3032;
	// stw r3,-19092(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19092, ctx.r3.u32);
	// addi r3,r7,-2992
	ctx.r3.s64 = ctx.r7.s64 + -2992;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x821FAB54;
	sub_822E1618(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,-3048
	ctx.r6.s64 = ctx.r4.s64 + -3048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6208(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6208, ctx.r3.u32);
	// addi r3,r11,-3064
	ctx.r3.s64 = ctx.r11.s64 + -3064;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x821FAB78;
	sub_822E15D0(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// addi r8,r9,-3116
	ctx.r8.s64 = ctx.r9.s64 + -3116;
	// stw r3,11244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11244, ctx.r3.u32);
	// addi r3,r7,-3084
	ctx.r3.s64 = ctx.r7.s64 + -3084;
	// li r7,128
	ctx.r7.s64 = 128;
	// bl 0x822e1660
	ctx.lr = 0x821FABA4;
	sub_822E1660(ctx, base);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,-3176
	ctx.r8.s64 = ctx.r5.s64 + -3176;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-18988(r6)
	PPC_STORE_U32(ctx.r6.u32 + -18988, ctx.r3.u32);
	// addi r3,r4,-3196
	ctx.r3.s64 = ctx.r4.s64 + -3196;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FABD0;
	sub_822E1618(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-3264
	ctx.r8.s64 = ctx.r10.s64 + -3264;
	// stw r3,-19088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19088, ctx.r3.u32);
	// addi r3,r9,-3284
	ctx.r3.s64 = ctx.r9.s64 + -3284;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FABFC;
	sub_822E1618(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,500
	ctx.r4.s64 = 500;
	// stw r3,-6116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6116, ctx.r3.u32);
	// addi r8,r7,-3324
	ctx.r8.s64 = ctx.r7.s64 + -3324;
	// addi r3,r5,-3344
	ctx.r3.s64 = ctx.r5.s64 + -3344;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FAC28;
	sub_822E1618(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-3432
	ctx.r8.s64 = ctx.r10.s64 + -3432;
	// stw r3,5544(r4)
	PPC_STORE_U32(ctx.r4.u32 + 5544, ctx.r3.u32);
	// addi r3,r9,-3456
	ctx.r3.s64 = ctx.r9.s64 + -3456;
	// lfs f25,-3348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3348);
	ctx.f25.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FAC5C;
	sub_822E1660(ctx, base);
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,11276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11276, ctx.r3.u32);
	// addi r8,r5,-3552
	ctx.r8.s64 = ctx.r5.s64 + -3552;
	// addi r3,r4,-3576
	ctx.r3.s64 = ctx.r4.s64 + -3576;
	// lfs f1,-3460(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -3460);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FAC8C;
	sub_822E1660(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,-3616
	ctx.r8.s64 = ctx.r10.s64 + -3616;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,-6120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6120, ctx.r3.u32);
	// addi r3,r9,-3644
	ctx.r3.s64 = ctx.r9.s64 + -3644;
	// bl 0x822e1660
	ctx.lr = 0x821FACB8;
	sub_822E1660(ctx, base);
	// lis r7,-32021
	ctx.r7.s64 = -2098528256;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,-3712
	ctx.r8.s64 = ctx.r6.s64 + -3712;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r3,-19080(r7)
	PPC_STORE_U32(ctx.r7.u32 + -19080, ctx.r3.u32);
	// addi r3,r5,-3732
	ctx.r3.s64 = ctx.r5.s64 + -3732;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,250
	ctx.r4.s64 = 250;
	// bl 0x822e1618
	ctx.lr = 0x821FACE4;
	sub_822E1618(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,-3808
	ctx.r6.s64 = ctx.r11.s64 + -3808;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,11260(r4)
	PPC_STORE_U32(ctx.r4.u32 + 11260, ctx.r3.u32);
	// addi r3,r10,-3840
	ctx.r3.s64 = ctx.r10.s64 + -3840;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FAD08;
	sub_822E15D0(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r9,-3920
	ctx.r6.s64 = ctx.r9.s64 + -3920;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,-6044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6044, ctx.r3.u32);
	// addi r3,r7,-3964
	ctx.r3.s64 = ctx.r7.s64 + -3964;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FAD2C;
	sub_822E15D0(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,-4008
	ctx.r6.s64 = ctx.r4.s64 + -4008;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-5968(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5968, ctx.r3.u32);
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x821FAD50;
	sub_822E15D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r7,-4032
	ctx.r3.s64 = ctx.r7.s64 + -4032;
	// addi r8,r9,-4304
	ctx.r8.s64 = ctx.r9.s64 + -4304;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,14264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14264);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FAD78;
	sub_822E1660(ctx, base);
	// lis r6,-32052
	ctx.r6.s64 = -2100559872;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r30,r5,-4332
	ctx.r30.s64 = ctx.r5.s64 + -4332;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,26512(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26512, ctx.r3.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f27,20476(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20476);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r3,-4356
	ctx.r3.s64 = ctx.r3.s64 + -4356;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FADB0;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r9,-4384
	ctx.r3.s64 = ctx.r9.s64 + -4384;
	// stw r11,-6108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6108, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FADDC;
	sub_822E1660(ctx, base);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// stw r3,13364(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13364, ctx.r3.u32);
	// addi r3,r5,-4412
	ctx.r3.s64 = ctx.r5.s64 + -4412;
	// bl 0x822e1660
	ctx.lr = 0x821FAE04;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// addi r3,r3,-4436
	ctx.r3.s64 = ctx.r3.s64 + -4436;
	// stw r11,-6212(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6212, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAE30;
	sub_822E1660(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// addi r3,r10,-4456
	ctx.r3.s64 = ctx.r10.s64 + -4456;
	// stw r11,13392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13392, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAE5C;
	sub_822E1660(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,-6148(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6148, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r6,-4476
	ctx.r3.s64 = ctx.r6.s64 + -4476;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAE88;
	sub_822E1660(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// addi r3,r4,-4500
	ctx.r3.s64 = ctx.r4.s64 + -4500;
	// stw r11,5536(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5536, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAEB4;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// addi r3,r9,-4524
	ctx.r3.s64 = ctx.r9.s64 + -4524;
	// stw r11,-5932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5932, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAEE0;
	sub_822E1660(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r6,-4548
	ctx.r3.s64 = ctx.r6.s64 + -4548;
	// stw r11,11292(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11292, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAF0C;
	sub_822E1660(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r4,-4568
	ctx.r3.s64 = ctx.r4.s64 + -4568;
	// stw r11,11200(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11200, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAF38;
	sub_822E1660(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// stw r3,-6216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6216, ctx.r3.u32);
	// addi r3,r10,-4592
	ctx.r3.s64 = ctx.r10.s64 + -4592;
	// bl 0x822e1660
	ctx.lr = 0x821FAF60;
	sub_822E1660(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r7,-4620
	ctx.r3.s64 = ctx.r7.s64 + -4620;
	// stw r11,-5956(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5956, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAF8C;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r3,-6132(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6132, ctx.r3.u32);
	// addi r3,r5,-4640
	ctx.r3.s64 = ctx.r5.s64 + -4640;
	// bl 0x822e1660
	ctx.lr = 0x821FAFB4;
	sub_822E1660(ctx, base);
	// lis r4,-32021
	ctx.r4.s64 = -2098528256;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r3,-4664
	ctx.r3.s64 = ctx.r3.s64 + -4664;
	// stw r11,-19096(r4)
	PPC_STORE_U32(ctx.r4.u32 + -19096, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FAFE0;
	sub_822E1660(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r9,-4688
	ctx.r3.s64 = ctx.r9.s64 + -4688;
	// stw r11,11160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11160, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB00C;
	sub_822E1660(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r6,-4716
	ctx.r3.s64 = ctx.r6.s64 + -4716;
	// stw r11,13372(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13372, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB038;
	sub_822E1660(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r4,-4748
	ctx.r3.s64 = ctx.r4.s64 + -4748;
	// stw r11,-5888(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5888, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB064;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r9,-4780
	ctx.r3.s64 = ctx.r9.s64 + -4780;
	// stw r11,-5996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5996, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB090;
	sub_822E1660(ctx, base);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stw r3,13376(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13376, ctx.r3.u32);
	// addi r3,r5,-4808
	ctx.r3.s64 = ctx.r5.s64 + -4808;
	// bl 0x822e1660
	ctx.lr = 0x821FB0B8;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stw r3,-5924(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5924, ctx.r3.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r3,r3,-4832
	ctx.r3.s64 = ctx.r3.s64 + -4832;
	// bl 0x822e1660
	ctx.lr = 0x821FB0E0;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,-5896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5896, ctx.r11.u32);
	// addi r3,r9,-4856
	ctx.r3.s64 = ctx.r9.s64 + -4856;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FB10C;
	sub_822E1660(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// addi r3,r6,-4884
	ctx.r3.s64 = ctx.r6.s64 + -4884;
	// stw r11,13408(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13408, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB138;
	sub_822E1660(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r4,-4912
	ctx.r3.s64 = ctx.r4.s64 + -4912;
	// stw r11,-6012(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6012, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB164;
	sub_822E1660(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r9,-4940
	ctx.r3.s64 = ctx.r9.s64 + -4940;
	// stw r11,-14900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14900, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB190;
	sub_822E1660(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// addi r3,r6,-4964
	ctx.r3.s64 = ctx.r6.s64 + -4964;
	// stw r11,13360(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13360, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB1BC;
	sub_822E1660(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r4,-4992
	ctx.r3.s64 = ctx.r4.s64 + -4992;
	// stw r11,-6016(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6016, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB1E8;
	sub_822E1660(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r3,-6168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6168, ctx.r3.u32);
	// addi r3,r10,-5024
	ctx.r3.s64 = ctx.r10.s64 + -5024;
	// bl 0x822e1660
	ctx.lr = 0x821FB210;
	sub_822E1660(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r7,-5048
	ctx.r3.s64 = ctx.r7.s64 + -5048;
	// stw r11,11268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11268, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB23C;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r5,-5076
	ctx.r3.s64 = ctx.r5.s64 + -5076;
	// stw r11,-6204(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6204, ctx.r11.u32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB268;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,-5096
	ctx.r6.s64 = ctx.r11.s64 + -5096;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,-5880(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5880, ctx.r3.u32);
	// addi r3,r10,-5116
	ctx.r3.s64 = ctx.r10.s64 + -5116;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FB28C;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r8,-5184
	ctx.r8.s64 = ctx.r8.s64 + -5184;
	// stw r3,-5936(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5936, ctx.r3.u32);
	// addi r3,r7,-5132
	ctx.r3.s64 = ctx.r7.s64 + -5132;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,150
	ctx.r4.s64 = 150;
	// bl 0x822e1618
	ctx.lr = 0x821FB2B8;
	sub_822E1618(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,-5204
	ctx.r6.s64 = ctx.r4.s64 + -5204;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,13388(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13388, ctx.r3.u32);
	// addi r3,r11,-5220
	ctx.r3.s64 = ctx.r11.s64 + -5220;
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x822e15d0
	ctx.lr = 0x821FB2DC;
	sub_822E15D0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,-6104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6104, ctx.r3.u32);
	// addi r3,r7,-5232
	ctx.r3.s64 = ctx.r7.s64 + -5232;
	// addi r8,r8,-5296
	ctx.r8.s64 = ctx.r8.s64 + -5296;
	// lfs f1,4672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4672);
	ctx.f1.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FB30C;
	sub_822E1660(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,-5360
	ctx.r6.s64 = ctx.r4.s64 + -5360;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,5540(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5540, ctx.r3.u32);
	// addi r3,r11,-5376
	ctx.r3.s64 = ctx.r11.s64 + -5376;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x821FB330;
	sub_822E15D0(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,26008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26008, ctx.r3.u32);
	// addi r3,r7,-5408
	ctx.r3.s64 = ctx.r7.s64 + -5408;
	// addi r8,r8,-5544
	ctx.r8.s64 = ctx.r8.s64 + -5544;
	// lfs f1,-9384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9384);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FB360;
	sub_822E1660(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,-5680
	ctx.r8.s64 = ctx.r4.s64 + -5680;
	// stw r3,-5964(r6)
	PPC_STORE_U32(ctx.r6.u32 + -5964, ctx.r3.u32);
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,6048(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// bl 0x822e1660
	ctx.lr = 0x821FB390;
	sub_822E1660(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,-6080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6080, ctx.r3.u32);
	// addi r3,r7,-5748
	ctx.r3.s64 = ctx.r7.s64 + -5748;
	// addi r8,r8,-5888
	ctx.r8.s64 = ctx.r8.s64 + -5888;
	// lfs f1,-5716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5716);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FB3C0;
	sub_822E1660(ctx, base);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,-6032
	ctx.r8.s64 = ctx.r4.s64 + -6032;
	// stw r3,11180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11180, ctx.r3.u32);
	// addi r3,r11,-6068
	ctx.r3.s64 = ctx.r11.s64 + -6068;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,8116(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FB3F0;
	sub_822E1660(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,11264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11264, ctx.r3.u32);
	// addi r8,r6,-6240
	ctx.r8.s64 = ctx.r6.s64 + -6240;
	// lfs f1,6024(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6024);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-6280
	ctx.r3.s64 = ctx.r5.s64 + -6280;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f3,5812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5812);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FB424;
	sub_822E1660(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,-6316
	ctx.r6.s64 = ctx.r11.s64 + -6316;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,11256(r4)
	PPC_STORE_U32(ctx.r4.u32 + 11256, ctx.r3.u32);
	// addi r3,r10,-6340
	ctx.r3.s64 = ctx.r10.s64 + -6340;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FB448;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// stw r3,-6032(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6032, ctx.r3.u32);
	// bl 0x82342990
	ctx.lr = 0x821FB454;
	sub_82342990(ctx, base);
	// bl 0x821ffa50
	ctx.lr = 0x821FB458;
	sub_821FFA50(ctx, base);
	// bl 0x8231da30
	ctx.lr = 0x821FB45C;
	sub_8231DA30(ctx, base);
	// bl 0x8235e088
	ctx.lr = 0x821FB460;
	sub_8235E088(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r8,-6360
	ctx.r6.s64 = ctx.r8.s64 + -6360;
	// addi r3,r7,-6372
	ctx.r3.s64 = ctx.r7.s64 + -6372;
	// li r5,8324
	ctx.r5.s64 = 8324;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB47C;
	sub_822E15D0(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,-28736
	ctx.r6.s64 = ctx.r4.s64 + -28736;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-5944(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5944, ctx.r3.u32);
	// addi r3,r11,-6388
	ctx.r3.s64 = ctx.r11.s64 + -6388;
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x822e15d0
	ctx.lr = 0x821FB4A0;
	sub_822E15D0(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,-6400
	ctx.r6.s64 = ctx.r9.s64 + -6400;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,11216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11216, ctx.r3.u32);
	// addi r3,r8,-6416
	ctx.r3.s64 = ctx.r8.s64 + -6416;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FB4C4;
	sub_822E15D0(ctx, base);
	// bl 0x821f3678
	ctx.lr = 0x821FB4C8;
	sub_821F3678(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de054
	ctx.lr = 0x821FB4D4;
	__restfpr_20(ctx, base);
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

PPC_WEAK_FUNC(sub_821FA068) {
	__imp__sub_821FA068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FB4E8) {
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
	ctx.lr = 0x821FB4FC;
	__savefpr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,7360
	ctx.r6.s64 = ctx.r11.s64 + 7360;
	// addi r3,r10,7348
	ctx.r3.s64 = ctx.r10.s64 + 7348;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FB51C;
	sub_822E15D0(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r8,7308
	ctx.r6.s64 = ctx.r8.s64 + 7308;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,11208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11208, ctx.r3.u32);
	// addi r3,r7,7292
	ctx.r3.s64 = ctx.r7.s64 + 7292;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB540;
	sub_822E15D0(ctx, base);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,7252
	ctx.r8.s64 = ctx.r5.s64 + 7252;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-14876(r6)
	PPC_STORE_U32(ctx.r6.u32 + -14876, ctx.r3.u32);
	// addi r3,r4,7236
	ctx.r3.s64 = ctx.r4.s64 + 7236;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,-3
	ctx.r5.s64 = -3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB56C;
	sub_822E1618(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,7200
	ctx.r6.s64 = ctx.r10.s64 + 7200;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6052(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6052, ctx.r3.u32);
	// addi r3,r9,7188
	ctx.r3.s64 = ctx.r9.s64 + 7188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB590;
	sub_822E15D0(ctx, base);
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r5,-28736
	ctx.r4.s64 = ctx.r5.s64 + -28736;
	// stw r3,11184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11184, ctx.r3.u32);
	// addi r6,r7,7144
	ctx.r6.s64 = ctx.r7.s64 + 7144;
	// addi r3,r11,7124
	ctx.r3.s64 = ctx.r11.s64 + 7124;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e17e0
	ctx.lr = 0x821FB5B8;
	sub_822E17E0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,7084
	ctx.r6.s64 = ctx.r9.s64 + 7084;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6092, ctx.r3.u32);
	// addi r3,r8,7068
	ctx.r3.s64 = ctx.r8.s64 + 7068;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB5DC;
	sub_822E15D0(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,7016
	ctx.r6.s64 = ctx.r6.s64 + 7016;
	// stw r3,-5884(r7)
	PPC_STORE_U32(ctx.r7.u32 + -5884, ctx.r3.u32);
	// addi r3,r5,7052
	ctx.r3.s64 = ctx.r5.s64 + 7052;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB600;
	sub_822E15D0(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,8168
	ctx.r31.s64 = ctx.r11.s64 + 8168;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r3,11188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 11188, ctx.r3.u32);
	// addi r7,r10,6988
	ctx.r7.s64 = ctx.r10.s64 + 6988;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r9,6976
	ctx.r3.s64 = ctx.r9.s64 + 6976;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x821FB630;
	sub_822E1828(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r7,r7,6936
	ctx.r7.s64 = ctx.r7.s64 + 6936;
	// stw r3,-5920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5920, ctx.r3.u32);
	// addi r3,r6,6920
	ctx.r3.s64 = ctx.r6.s64 + 6920;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x821FB658;
	sub_822E1828(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r4,6880
	ctx.r7.s64 = ctx.r4.s64 + 6880;
	// stw r3,-5872(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5872, ctx.r3.u32);
	// addi r4,r11,7200
	ctx.r4.s64 = ctx.r11.s64 + 7200;
	// addi r3,r10,6860
	ctx.r3.s64 = ctx.r10.s64 + 6860;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x821FB684;
	sub_822E1828(ctx, base);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26528, ctx.r3.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f29,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r5,6776
	ctx.r8.s64 = ctx.r5.s64 + 6776;
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r4,6756
	ctx.r3.s64 = ctx.r4.s64 + 6756;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,10236(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10236);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FB6C4;
	sub_822E1660(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,13356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13356, ctx.r3.u32);
	// addi r3,r7,6740
	ctx.r3.s64 = ctx.r7.s64 + 6740;
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,6700
	ctx.r8.s64 = ctx.r8.s64 + 6700;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FB6FC;
	sub_822E1660(ctx, base);
	// lis r6,-32052
	ctx.r6.s64 = -2100559872;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,6672
	ctx.r8.s64 = ctx.r5.s64 + 6672;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,26524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26524, ctx.r3.u32);
	// addi r3,r4,6656
	ctx.r3.s64 = ctx.r4.s64 + 6656;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB728;
	sub_822E1618(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r10,6620
	ctx.r8.s64 = ctx.r10.s64 + 6620;
	// stw r3,-6048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6048, ctx.r3.u32);
	// addi r3,r9,6600
	ctx.r3.s64 = ctx.r9.s64 + 6600;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB758;
	sub_822E1618(ctx, base);
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// stw r3,13352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13352, ctx.r3.u32);
	// addi r8,r7,6568
	ctx.r8.s64 = ctx.r7.s64 + 6568;
	// addi r3,r5,6552
	ctx.r3.s64 = ctx.r5.s64 + 6552;
	// li r7,64
	ctx.r7.s64 = 64;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB788;
	sub_822E1618(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,6524
	ctx.r7.s64 = ctx.r11.s64 + 6524;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,5556(r4)
	PPC_STORE_U32(ctx.r4.u32 + 5556, ctx.r3.u32);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addi r3,r10,6504
	ctx.r3.s64 = ctx.r10.s64 + 6504;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x821FB7B0;
	sub_822E1828(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r8,r8,6444
	ctx.r8.s64 = ctx.r8.s64 + 6444;
	// stw r3,-6056(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6056, ctx.r3.u32);
	// addi r3,r7,6488
	ctx.r3.s64 = ctx.r7.s64 + 6488;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB7DC;
	sub_822E1618(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,6380
	ctx.r8.s64 = ctx.r4.s64 + 6380;
	// stw r3,-6076(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6076, ctx.r3.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r11,6360
	ctx.r3.s64 = ctx.r11.s64 + 6360;
	// lfs f1,8664(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FB80C;
	sub_822E1660(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r8,r9,6320
	ctx.r8.s64 = ctx.r9.s64 + 6320;
	// stw r3,-14880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14880, ctx.r3.u32);
	// addi r3,r7,6340
	ctx.r3.s64 = ctx.r7.s64 + 6340;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB838;
	sub_822E1618(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,6296
	ctx.r6.s64 = ctx.r4.s64 + 6296;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-5892(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5892, ctx.r3.u32);
	// addi r3,r11,6276
	ctx.r3.s64 = ctx.r11.s64 + 6276;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FB85C;
	sub_822E15D0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,6240
	ctx.r6.s64 = ctx.r9.s64 + 6240;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6072, ctx.r3.u32);
	// addi r3,r8,6220
	ctx.r3.s64 = ctx.r8.s64 + 6220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB880;
	sub_822E15D0(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,6164
	ctx.r6.s64 = ctx.r6.s64 + 6164;
	// stw r3,11240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11240, ctx.r3.u32);
	// addi r3,r5,6192
	ctx.r3.s64 = ctx.r5.s64 + 6192;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FB8A4;
	sub_822E15D0(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,6120
	ctx.r6.s64 = ctx.r11.s64 + 6120;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-5876(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5876, ctx.r3.u32);
	// addi r3,r10,6092
	ctx.r3.s64 = ctx.r10.s64 + 6092;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB8C8;
	sub_822E15D0(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// stw r3,-14916(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14916, ctx.r3.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r7,6068
	ctx.r3.s64 = ctx.r7.s64 + 6068;
	// addi r8,r8,6020
	ctx.r8.s64 = ctx.r8.s64 + 6020;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB8F4;
	sub_822E1618(ctx, base);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,5972
	ctx.r8.s64 = ctx.r5.s64 + 5972;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,5528(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5528, ctx.r3.u32);
	// addi r3,r4,5956
	ctx.r3.s64 = ctx.r4.s64 + 5956;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FB920;
	sub_822E1618(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r3,11248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11248, ctx.r3.u32);
	// addi r3,r7,5936
	ctx.r3.s64 = ctx.r7.s64 + 5936;
	// addi r8,r9,5864
	ctx.r8.s64 = ctx.r9.s64 + 5864;
	// lfs f1,11388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11388);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x821FB950;
	sub_822E1660(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,5816
	ctx.r6.s64 = ctx.r4.s64 + 5816;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6180(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6180, ctx.r3.u32);
	// addi r3,r11,5796
	ctx.r3.s64 = ctx.r11.s64 + 5796;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FB974;
	sub_822E15D0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,5752
	ctx.r6.s64 = ctx.r9.s64 + 5752;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6172, ctx.r3.u32);
	// addi r3,r8,5736
	ctx.r3.s64 = ctx.r8.s64 + 5736;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB998;
	sub_822E15D0(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,5660
	ctx.r6.s64 = ctx.r6.s64 + 5660;
	// stw r3,-6188(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6188, ctx.r3.u32);
	// addi r3,r5,5720
	ctx.r3.s64 = ctx.r5.s64 + 5720;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FB9BC;
	sub_822E15D0(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,5620
	ctx.r6.s64 = ctx.r11.s64 + 5620;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6036(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6036, ctx.r3.u32);
	// addi r3,r10,5592
	ctx.r3.s64 = ctx.r10.s64 + 5592;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FB9E0;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r7,r8,5548
	ctx.r7.s64 = ctx.r8.s64 + 5548;
	// stw r3,-5868(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5868, ctx.r3.u32);
	// addi r3,r6,5572
	ctx.r3.s64 = ctx.r6.s64 + 5572;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x821FBA08;
	sub_822E1828(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r3,11284(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11284, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,5504
	ctx.r8.s64 = ctx.r4.s64 + 5504;
	// addi r3,r11,5484
	ctx.r3.s64 = ctx.r11.s64 + 5484;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FBA34;
	sub_822E1618(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,5432
	ctx.r6.s64 = ctx.r9.s64 + 5432;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6144, ctx.r3.u32);
	// addi r3,r8,5412
	ctx.r3.s64 = ctx.r8.s64 + 5412;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBA58;
	sub_822E15D0(ctx, base);
	// lis r7,-32021
	ctx.r7.s64 = -2098528256;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,5360
	ctx.r6.s64 = ctx.r6.s64 + 5360;
	// stw r3,-14920(r7)
	PPC_STORE_U32(ctx.r7.u32 + -14920, ctx.r3.u32);
	// addi r3,r5,5392
	ctx.r3.s64 = ctx.r5.s64 + 5392;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FBA7C;
	sub_822E15D0(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,5332
	ctx.r8.s64 = ctx.r11.s64 + 5332;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,11192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 11192, ctx.r3.u32);
	// addi r3,r10,5316
	ctx.r3.s64 = ctx.r10.s64 + 5316;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FBAA8;
	sub_822E1618(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r9,5276
	ctx.r6.s64 = ctx.r9.s64 + 5276;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6004, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,5252
	ctx.r3.s64 = ctx.r7.s64 + 5252;
	// bl 0x822e15d0
	ctx.lr = 0x821FBACC;
	sub_822E15D0(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,5204
	ctx.r8.s64 = ctx.r5.s64 + 5204;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-5988(r6)
	PPC_STORE_U32(ctx.r6.u32 + -5988, ctx.r3.u32);
	// addi r3,r4,5184
	ctx.r3.s64 = ctx.r4.s64 + 5184;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FBAF8;
	sub_822E1618(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,5132
	ctx.r6.s64 = ctx.r10.s64 + 5132;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-19068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19068, ctx.r3.u32);
	// addi r3,r9,5108
	ctx.r3.s64 = ctx.r9.s64 + 5108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBB1C;
	sub_822E15D0(ctx, base);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26516, ctx.r3.u32);
	// addi r8,r6,5072
	ctx.r8.s64 = ctx.r6.s64 + 5072;
	// lfs f2,6688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6688);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r5,5048
	ctx.r3.s64 = ctx.r5.s64 + 5048;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x821FBB4C;
	sub_822E1660(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,-6184(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6184, ctx.r3.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,5032
	ctx.r6.s64 = ctx.r11.s64 + 5032;
	// addi r3,r10,5008
	ctx.r3.s64 = ctx.r10.s64 + 5008;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBB70;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// addi r8,r8,4944
	ctx.r8.s64 = ctx.r8.s64 + 4944;
	// stw r3,-6084(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6084, ctx.r3.u32);
	// addi r3,r7,4988
	ctx.r3.s64 = ctx.r7.s64 + 4988;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x821FBB9C;
	sub_822E1618(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,4900
	ctx.r6.s64 = ctx.r4.s64 + 4900;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,13368(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13368, ctx.r3.u32);
	// addi r3,r11,4876
	ctx.r3.s64 = ctx.r11.s64 + 4876;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FBBC0;
	sub_822E15D0(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r3,11168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11168, ctx.r3.u32);
	// addi r3,r7,4852
	ctx.r3.s64 = ctx.r7.s64 + 4852;
	// lfs f27,5812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	ctx.f27.f64 = double(temp.f32);
	// addi r8,r8,4824
	ctx.r8.s64 = ctx.r8.s64 + 4824;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// lfs f1,-21308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FBBF8;
	sub_822E1660(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,4768
	ctx.r6.s64 = ctx.r4.s64 + 4768;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6040(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6040, ctx.r3.u32);
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBC1C;
	sub_822E15D0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r9,4728
	ctx.r3.s64 = ctx.r9.s64 + 4728;
	// stw r11,-6020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6020, ctx.r11.u32);
	// addi r6,r8,4680
	ctx.r6.s64 = ctx.r8.s64 + 4680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBC44;
	sub_822E15D0(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,4648
	ctx.r8.s64 = ctx.r6.s64 + 4648;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// stw r3,-6024(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6024, ctx.r3.u32);
	// addi r3,r5,4624
	ctx.r3.s64 = ctx.r5.s64 + 4624;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FBC70;
	sub_822E1618(ctx, base);
	// lis r4,-32021
	ctx.r4.s64 = -2098528256;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,4572
	ctx.r6.s64 = ctx.r11.s64 + 4572;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-14932(r4)
	PPC_STORE_U32(ctx.r4.u32 + -14932, ctx.r3.u32);
	// addi r3,r10,4548
	ctx.r3.s64 = ctx.r10.s64 + 4548;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBC94;
	sub_822E15D0(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// stw r3,-14912(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14912, ctx.r3.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r8,4492
	ctx.r6.s64 = ctx.r8.s64 + 4492;
	// addi r3,r7,4468
	ctx.r3.s64 = ctx.r7.s64 + 4468;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBCB8;
	sub_822E15D0(ctx, base);
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,4432
	ctx.r6.s64 = ctx.r4.s64 + 4432;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-19076(r5)
	PPC_STORE_U32(ctx.r5.u32 + -19076, ctx.r3.u32);
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FBCDC;
	sub_822E15D0(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,4364
	ctx.r6.s64 = ctx.r9.s64 + 4364;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6164, ctx.r3.u32);
	// addi r3,r8,4340
	ctx.r3.s64 = ctx.r8.s64 + 4340;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBD00;
	sub_822E15D0(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,4260
	ctx.r6.s64 = ctx.r6.s64 + 4260;
	// stw r3,-5912(r7)
	PPC_STORE_U32(ctx.r7.u32 + -5912, ctx.r3.u32);
	// addi r3,r5,4312
	ctx.r3.s64 = ctx.r5.s64 + 4312;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FBD24;
	sub_822E15D0(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,4216
	ctx.r6.s64 = ctx.r11.s64 + 4216;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-5976(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5976, ctx.r3.u32);
	// addi r3,r10,4196
	ctx.r3.s64 = ctx.r10.s64 + 4196;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBD48;
	sub_822E15D0(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// addi r8,r8,4160
	ctx.r8.s64 = ctx.r8.s64 + 4160;
	// stw r3,11164(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11164, ctx.r3.u32);
	// addi r3,r7,4180
	ctx.r3.s64 = ctx.r7.s64 + 4180;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FBD74;
	sub_822E1618(ctx, base);
	// lis r5,-32024
	ctx.r5.s64 = -2098724864;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,4112
	ctx.r6.s64 = ctx.r4.s64 + 4112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,11252(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11252, ctx.r3.u32);
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FBD98;
	sub_822E15D0(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r9,4040
	ctx.r8.s64 = ctx.r9.s64 + 4040;
	// stw r3,-14896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14896, ctx.r3.u32);
	// addi r3,r6,4076
	ctx.r3.s64 = ctx.r6.s64 + 4076;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FBDC4;
	sub_822E1618(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,4000
	ctx.r6.s64 = ctx.r4.s64 + 4000;
	// stw r3,-5908(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5908, ctx.r3.u32);
	// addi r3,r11,3980
	ctx.r3.s64 = ctx.r11.s64 + 3980;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBDE8;
	sub_822E15D0(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r9,3928
	ctx.r6.s64 = ctx.r9.s64 + 3928;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,13384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13384, ctx.r3.u32);
	// addi r3,r8,3908
	ctx.r3.s64 = ctx.r8.s64 + 3908;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBE0C;
	sub_822E15D0(ctx, base);
	// lis r7,-32052
	ctx.r7.s64 = -2100559872;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,3856
	ctx.r6.s64 = ctx.r6.s64 + 3856;
	// stw r3,26548(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26548, ctx.r3.u32);
	// addi r3,r5,3896
	ctx.r3.s64 = ctx.r5.s64 + 3896;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x821FBE30;
	sub_822E15D0(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,3808
	ctx.r6.s64 = ctx.r11.s64 + 3808;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-5916(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5916, ctx.r3.u32);
	// addi r3,r10,3788
	ctx.r3.s64 = ctx.r10.s64 + 3788;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBE54;
	sub_822E15D0(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,-6200(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6200, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f28,20560(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20560);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r5,-23040
	ctx.r8.s64 = ctx.r5.s64 + -23040;
	// lfs f25,11804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11804);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r4,-23060
	ctx.r3.s64 = ctx.r4.s64 + -23060;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,5808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FBE94;
	sub_822E1660(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// addi r31,r3,-23136
	ctx.r31.s64 = ctx.r3.s64 + -23136;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// lfs f26,-22488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22488);
	ctx.f26.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FBEC4;
	sub_822E1660(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// addi r3,r9,-23216
	ctx.r3.s64 = ctx.r9.s64 + -23216;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FBEE4;
	sub_822E1660(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// addi r3,r7,-23256
	ctx.r3.s64 = ctx.r7.s64 + -23256;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FBF04;
	sub_822E1660(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r3,r6,-23296
	ctx.r3.s64 = ctx.r6.s64 + -23296;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FBF24;
	sub_822E1660(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// addi r9,r5,3724
	ctx.r9.s64 = ctx.r5.s64 + 3724;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r4,3704
	ctx.r3.s64 = ctx.r4.s64 + 3704;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,8260
	ctx.r8.s64 = 8260;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1890
	ctx.lr = 0x821FBF4C;
	sub_822E1890(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r31,r11,3632
	ctx.r31.s64 = ctx.r11.s64 + 3632;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,8260
	ctx.r7.s64 = 8260;
	// stw r3,5552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5552, ctx.r3.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r9,3604
	ctx.r3.s64 = ctx.r9.s64 + 3604;
	// bl 0x822e1660
	ctx.lr = 0x821FBF7C;
	sub_822E1660(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,13404(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13404, ctx.r3.u32);
	// addi r3,r5,3580
	ctx.r3.s64 = ctx.r5.s64 + 3580;
	// li r7,8260
	ctx.r7.s64 = 8260;
	// lfs f1,6020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6020);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FBFA8;
	sub_822E1660(ctx, base);
	// lis r4,-32024
	ctx.r4.s64 = -2098724864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,3512
	ctx.r8.s64 = ctx.r11.s64 + 3512;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,8260
	ctx.r7.s64 = 8260;
	// stw r3,11212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 11212, ctx.r3.u32);
	// addi r3,r10,3488
	ctx.r3.s64 = ctx.r10.s64 + 3488;
	// bl 0x822e1660
	ctx.lr = 0x821FBFD4;
	sub_822E1660(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r8,3428
	ctx.r6.s64 = ctx.r8.s64 + 3428;
	// li r5,8260
	ctx.r5.s64 = 8260;
	// stw r3,-19064(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19064, ctx.r3.u32);
	// addi r3,r7,3404
	ctx.r3.s64 = ctx.r7.s64 + 3404;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FBFF8;
	sub_822E15D0(ctx, base);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r9,r5,3336
	ctx.r9.s64 = ctx.r5.s64 + 3336;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,8260
	ctx.r8.s64 = 8260;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,-18992(r6)
	PPC_STORE_U32(ctx.r6.u32 + -18992, ctx.r3.u32);
	// addi r3,r4,3312
	ctx.r3.s64 = ctx.r4.s64 + 3312;
	// bl 0x822e1890
	ctx.lr = 0x821FC028;
	sub_822E1890(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f30.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r10,r8,3240
	ctx.r10.s64 = ctx.r8.s64 + 3240;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,13348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13348, ctx.r3.u32);
	// addi r3,r7,3220
	ctx.r3.s64 = ctx.r7.s64 + 3220;
	// lfs f4,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f4.f64 = double(temp.f32);
	// li r9,8260
	ctx.r9.s64 = 8260;
	// bl 0x822e16f0
	ctx.lr = 0x821FC060;
	sub_822E16F0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// addi r8,r6,3096
	ctx.r8.s64 = ctx.r6.s64 + 3096;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,8260
	ctx.r7.s64 = 8260;
	// stw r3,-6192(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6192, ctx.r3.u32);
	// addi r3,r4,3060
	ctx.r3.s64 = ctx.r4.s64 + 3060;
	// bl 0x822e1660
	ctx.lr = 0x821FC08C;
	sub_822E1660(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,2936
	ctx.r8.s64 = ctx.r10.s64 + 2936;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// li r7,8260
	ctx.r7.s64 = 8260;
	// stw r3,-6140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// addi r3,r9,2900
	ctx.r3.s64 = ctx.r9.s64 + 2900;
	// bl 0x822e1660
	ctx.lr = 0x821FC0B8;
	sub_822E1660(ctx, base);
	// lis r8,-32021
	ctx.r8.s64 = -2098528256;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,-14928(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14928, ctx.r3.u32);
	// addi r8,r6,2808
	ctx.r8.s64 = ctx.r6.s64 + 2808;
	// lfs f3,-14540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14540);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r5,2784
	ctx.r3.s64 = ctx.r5.s64 + 2784;
	// li r7,8260
	ctx.r7.s64 = 8260;
	// bl 0x822e1660
	ctx.lr = 0x821FC0E8;
	sub_822E1660(ctx, base);
	// lis r4,-32021
	ctx.r4.s64 = -2098528256;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,2740
	ctx.r8.s64 = ctx.r11.s64 + 2740;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-14888(r4)
	PPC_STORE_U32(ctx.r4.u32 + -14888, ctx.r3.u32);
	// addi r3,r10,2728
	ctx.r3.s64 = ctx.r10.s64 + 2728;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FC114;
	sub_822E1618(ctx, base);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// addi r8,r8,2676
	ctx.r8.s64 = ctx.r8.s64 + 2676;
	// stw r3,-6152(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6152, ctx.r3.u32);
	// addi r3,r7,2716
	ctx.r3.s64 = ctx.r7.s64 + 2716;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FC140;
	sub_822E1618(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,2624
	ctx.r8.s64 = ctx.r5.s64 + 2624;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-5992(r6)
	PPC_STORE_U32(ctx.r6.u32 + -5992, ctx.r3.u32);
	// addi r3,r4,2604
	ctx.r3.s64 = ctx.r4.s64 + 2604;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FC16C;
	sub_822E1618(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,2520
	ctx.r6.s64 = ctx.r10.s64 + 2520;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6136, ctx.r3.u32);
	// addi r3,r9,2496
	ctx.r3.s64 = ctx.r9.s64 + 2496;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FC190;
	sub_822E15D0(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r8,r8,2452
	ctx.r8.s64 = ctx.r8.s64 + 2452;
	// stw r3,-6088(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6088, ctx.r3.u32);
	// addi r3,r6,2436
	ctx.r3.s64 = ctx.r6.s64 + 2436;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x821FC1BC;
	sub_822E1618(ctx, base);
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r3,-6128(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6128, ctx.r3.u32);
	// addi r8,r10,2400
	ctx.r8.s64 = ctx.r10.s64 + 2400;
	// lfs f31,5488(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r9,2388
	ctx.r3.s64 = ctx.r9.s64 + 2388;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f2,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FC1F4;
	sub_822E1660(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// addi r8,r6,2348
	ctx.r8.s64 = ctx.r6.s64 + 2348;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,-30256(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30256, ctx.r3.u32);
	// addi r3,r5,2328
	ctx.r3.s64 = ctx.r5.s64 + 2328;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x821FC220;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r11,2288
	ctx.r8.s64 = ctx.r11.s64 + 2288;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r3,-15688(r4)
	PPC_STORE_U32(ctx.r4.u32 + -15688, ctx.r3.u32);
	// addi r3,r10,2268
	ctx.r3.s64 = ctx.r10.s64 + 2268;
	// bl 0x822e1660
	ctx.lr = 0x821FC24C;
	sub_822E1660(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,2232
	ctx.r8.s64 = ctx.r6.s64 + 2232;
	// stw r3,-30076(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30076, ctx.r3.u32);
	// addi r3,r5,2220
	ctx.r3.s64 = ctx.r5.s64 + 2220;
	// lfs f3,3740(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3740);
	ctx.f3.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x821FC27C;
	sub_822E1660(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// stw r3,6212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6212, ctx.r3.u32);
	// bl 0x82200198
	ctx.lr = 0x821FC288;
	sub_82200198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de068
	ctx.lr = 0x821FC294;
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

PPC_WEAK_FUNC(sub_821FB4E8) {
	__imp__sub_821FB4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC2A4) {
	__imp__sub_821FC2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r3,-18976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18976);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC2A8) {
	__imp__sub_821FC2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC2B4) {
	__imp__sub_821FC2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC2B8) {
	__imp__sub_821FC2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC2C8) {
	__imp__sub_821FC2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC2D8) {
	__imp__sub_821FC2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC2EC) {
	__imp__sub_821FC2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC2F0) {
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
	// bl 0x820d8cd0
	ctx.lr = 0x821FC300;
	sub_820D8CD0(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// addi r3,r10,-18976
	ctx.r3.s64 = ctx.r10.s64 + -18976;
	// addi r4,r11,11256
	ctx.r4.s64 = ctx.r11.s64 + 11256;
	// li r5,4036
	ctx.r5.s64 = 4036;
	// bl 0x823de1f0
	ctx.lr = 0x821FC31C;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC2F0) {
	__imp__sub_821FC2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC32C) {
	__imp__sub_821FC32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC330) {
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
	// bl 0x821fa068
	ctx.lr = 0x821FC340;
	sub_821FA068(ctx, base);
	// bl 0x821fb4e8
	ctx.lr = 0x821FC344;
	sub_821FB4E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC330) {
	__imp__sub_821FC330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC354) {
	__imp__sub_821FC354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC358) {
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
	// bl 0x821fa068
	ctx.lr = 0x821FC368;
	sub_821FA068(ctx, base);
	// bl 0x821fb4e8
	ctx.lr = 0x821FC36C;
	sub_821FB4E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822e2e28
	ctx.lr = 0x821FC378;
	sub_822E2E28(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11208);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821fc390
	if (!ctx.cr6.eq) goto loc_821FC390;
	// bl 0x822e2920
	ctx.lr = 0x821FC390;
	sub_822E2920(ctx, base);
loc_821FC390:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-3004
	ctx.r6.s64 = ctx.r11.s64 + -3004;
	// addi r3,r10,-3016
	ctx.r3.s64 = ctx.r10.s64 + -3016;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FC3AC;
	sub_822E15D0(ctx, base);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r8,7464
	ctx.r6.s64 = ctx.r8.s64 + 7464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-14904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14904, ctx.r3.u32);
	// addi r3,r7,7444
	ctx.r3.s64 = ctx.r7.s64 + 7444;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FC3D0;
	sub_822E15D0(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// stw r3,-5980(r6)
	PPC_STORE_U32(ctx.r6.u32 + -5980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC358) {
	__imp__sub_821FC358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FC3F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// addi r28,r10,26552
	ctx.r28.s64 = ctx.r10.s64 + 26552;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r10,11296
	ctx.r27.s64 = ctx.r10.s64 + 11296;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fc448
	if (!ctx.cr6.gt) goto loc_821FC448;
loc_821FC420:
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fc438
	if (ctx.cr6.eq) goto loc_821FC438;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222f680
	ctx.lr = 0x821FC434;
	sub_8222F680(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_821FC438:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,624
	ctx.r29.s64 = ctx.r29.s64 + 624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fc420
	if (ctx.cr6.lt) goto loc_821FC420;
loc_821FC448:
	// lbz r11,2046(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2046);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fc460
	if (ctx.cr6.eq) goto loc_821FC460;
	// addis r11,r28,19
	ctx.r11.s64 = ctx.r28.s64 + 1245184;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
	// bl 0x8222f680
	ctx.lr = 0x821FC460;
	sub_8222F680(ctx, base);
loc_821FC460:
	// bl 0x8222f5b0
	ctx.lr = 0x821FC464;
	sub_8222F5B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC3E8) {
	__imp__sub_821FC3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC484) {
	__imp__sub_821FC484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC488) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc2a0
	sub_822DC2A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC488) {
	__imp__sub_821FC488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC48C) {
	__imp__sub_821FC48C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC490) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc2a0
	sub_822DC2A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC490) {
	__imp__sub_821FC490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC494) {
	__imp__sub_821FC494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC498) {
	PPC_FUNC_PROLOGUE();
	// b 0x82284688
	sub_82284688(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC498) {
	__imp__sub_821FC498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC49C) {
	__imp__sub_821FC49C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FC4A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r31,32
	ctx.r31.s64 = 32;
	// addi r28,r11,6688
	ctx.r28.s64 = ctx.r11.s64 + 6688;
	// addi r30,r28,7832
	ctx.r30.s64 = ctx.r28.s64 + 7832;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_821FC4C0:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-15224
	ctx.r4.s64 = ctx.r11.s64 + -15224;
	// bl 0x822f28f8
	ctx.lr = 0x821FC4D0;
	sub_822F28F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x821fc4c0
	if (!ctx.cr0.eq) goto loc_821FC4C0;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r30,r28,7936
	ctx.r30.s64 = ctx.r28.s64 + 7936;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_821FC4E8:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-15224
	ctx.r4.s64 = ctx.r11.s64 + -15224;
	// bl 0x822f28f8
	ctx.lr = 0x821FC4F8;
	sub_822F28F8(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r27,32(r30)
	ea = 32 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// bne 0x821fc4e8
	if (!ctx.cr0.eq) goto loc_821FC4E8;
	// li r31,64
	ctx.r31.s64 = 64;
	// addi r30,r28,8472
	ctx.r30.s64 = ctx.r28.s64 + 8472;
loc_821FC510:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-15224
	ctx.r4.s64 = ctx.r11.s64 + -15224;
	// bl 0x822f28f8
	ctx.lr = 0x821FC520;
	sub_822F28F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x821fc510
	if (!ctx.cr0.eq) goto loc_821FC510;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,8732
	ctx.r3.s64 = ctx.r28.s64 + 8732;
	// bl 0x823de090
	ctx.lr = 0x821FC53C;
	sub_823DE090(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,-5864
	ctx.r29.s64 = ctx.r10.s64 + -5864;
	// stw r11,8796(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8796, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// addi r30,r11,10592
	ctx.r30.s64 = ctx.r11.s64 + 10592;
loc_821FC558:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// ori r9,r11,10576
	ctx.r9.u64 = ctx.r11.u64 | 10576;
	// addi r4,r10,-15216
	ctx.r4.s64 = ctx.r10.s64 + -15216;
	// lwzx r3,r29,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// bl 0x822f28f8
	ctx.lr = 0x821FC570;
	sub_822F28F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,384(r30)
	ea = 384 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x821fc558
	if (!ctx.cr0.eq) goto loc_821FC558;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC4A0) {
	__imp__sub_821FC4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC584) {
	__imp__sub_821FC584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821FC590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r29,r11,6688
	ctx.r29.s64 = ctx.r11.s64 + 6688;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r29,7836
	ctx.r31.s64 = ctx.r29.s64 + 7836;
loc_821FC5A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fc5c0
	if (ctx.cr6.eq) goto loc_821FC5C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f5a40
	ctx.lr = 0x821FC5BC;
	sub_822F5A40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821FC5C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821fc5a8
	if (!ctx.cr0.eq) goto loc_821FC5A8;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r31,r29,7964
	ctx.r31.s64 = ctx.r29.s64 + 7964;
loc_821FC5D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fc5ec
	if (ctx.cr6.eq) goto loc_821FC5EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f5a40
	ctx.lr = 0x821FC5E8;
	sub_822F5A40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821FC5EC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x821fc5d4
	if (!ctx.cr0.eq) goto loc_821FC5D4;
	// li r30,64
	ctx.r30.s64 = 64;
	// addi r31,r29,8476
	ctx.r31.s64 = ctx.r29.s64 + 8476;
loc_821FC600:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fc618
	if (ctx.cr6.eq) goto loc_821FC618;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f5a40
	ctx.lr = 0x821FC614;
	sub_822F5A40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821FC618:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821fc600
	if (!ctx.cr0.eq) goto loc_821FC600;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r10,r11,-5864
	ctx.r10.s64 = ctx.r11.s64 + -5864;
	// addis r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 524288;
	// addi r31,r11,10976
	ctx.r31.s64 = ctx.r11.s64 + 10976;
loc_821FC638:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fc650
	if (ctx.cr6.eq) goto loc_821FC650;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f5a40
	ctx.lr = 0x821FC64C;
	sub_822F5A40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821FC650:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,384
	ctx.r31.s64 = ctx.r31.s64 + 384;
	// bne 0x821fc638
	if (!ctx.cr0.eq) goto loc_821FC638;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC588) {
	__imp__sub_821FC588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC664) {
	__imp__sub_821FC664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC668) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821fc690
	if (ctx.cr6.eq) goto loc_821FC690;
	// bl 0x821fc588
	ctx.lr = 0x821FC68C;
	sub_821FC588(ctx, base);
	// b 0x821fc694
	goto loc_821FC694;
loc_821FC690:
	// bl 0x822f28e8
	ctx.lr = 0x821FC694;
	sub_822F28E8(ctx, base);
loc_821FC694:
	// bl 0x8231c850
	ctx.lr = 0x821FC698;
	sub_8231C850(ctx, base);
	// bl 0x8220ecd0
	ctx.lr = 0x821FC69C;
	sub_8220ECD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8229d630
	ctx.lr = 0x821FC6A4;
	sub_8229D630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82282df0
	ctx.lr = 0x821FC6AC;
	sub_82282DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822db1a0
	ctx.lr = 0x821FC6B4;
	sub_822DB1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC668) {
	__imp__sub_821FC668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC6C4) {
	__imp__sub_821FC6C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC6C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC6C8) {
	__imp__sub_821FC6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC6D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC6D0) {
	__imp__sub_821FC6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC6D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FC6D8) {
	__imp__sub_821FC6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821FC6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82293cd0
	ctx.lr = 0x821FC6F8;
	sub_82293CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821fc720
	if (!ctx.cr6.eq) goto loc_821FC720;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821fc720
	if (ctx.cr6.eq) goto loc_821FC720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7556
	ctx.r4.s64 = ctx.r11.s64 + 7556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821FC720;
	sub_822830E8(ctx, base);
loc_821FC720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC6E0) {
	__imp__sub_821FC6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FC72C) {
	__imp__sub_821FC72C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC730) {
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
	// addi r30,r11,7592
	ctx.r30.s64 = ctx.r11.s64 + 7592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82293cd0
	ctx.lr = 0x821FC754;
	sub_82293CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821fc784
	if (!ctx.cr6.eq) goto loc_821FC784;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7556
	ctx.r4.s64 = ctx.r11.s64 + 7556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821FC774;
	sub_822830E8(ctx, base);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// addi r9,r10,6688
	ctx.r9.s64 = ctx.r10.s64 + 6688;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x821fc790
	goto loc_821FC790;
loc_821FC784:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
loc_821FC790:
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

PPC_WEAK_FUNC(sub_821FC730) {
	__imp__sub_821FC730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FC7B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,36864
	ctx.r4.u64 = ctx.r4.u64 | 36864;
	// bl 0x822db808
	ctx.lr = 0x821FC7C8;
	sub_822DB808(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db8f0
	ctx.lr = 0x821FC7D0;
	sub_822DB8F0(ctx, base);
	// li r11,320
	ctx.r11.s64 = 320;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -380);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8220eb68
	ctx.lr = 0x821FC804;
	sub_8220EB68(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82225718
	ctx.lr = 0x821FC818;
	sub_82225718(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821fc838
	if (ctx.cr6.eq) goto loc_821FC838;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,7608
	ctx.r4.s64 = ctx.r11.s64 + 7608;
	// bl 0x822830e8
	ctx.lr = 0x821FC838;
	sub_822830E8(ctx, base);
loc_821FC838:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// addi r27,r11,-5864
	ctx.r27.s64 = ctx.r11.s64 + -5864;
	// ori r5,r5,10576
	ctx.r5.u64 = ctx.r5.u64 | 10576;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823de090
	ctx.lr = 0x821FC854;
	sub_823DE090(ctx, base);
	// lwz r31,0(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	ctx.r30.s64 = 24;
	// stwx r27,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u32);
	// bl 0x8231b3b0
	ctx.lr = 0x821FC864;
	sub_8231B3B0(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82318370
	ctx.lr = 0x821FC878;
	sub_82318370(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,-15216
	ctx.r3.s64 = ctx.r10.s64 + -15216;
	// bl 0x8229d538
	ctx.lr = 0x821FC888;
	sub_8229D538(ctx, base);
	// bl 0x821fc730
	ctx.lr = 0x821FC88C;
	sub_821FC730(ctx, base);
	// bl 0x8231b4b0
	ctx.lr = 0x821FC890;
	sub_8231B4B0(ctx, base);
	// bl 0x8229d598
	ctx.lr = 0x821FC894;
	sub_8229D598(ctx, base);
	// bl 0x8231b5a8
	ctx.lr = 0x821FC898;
	sub_8231B5A8(ctx, base);
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// bl 0x821fc4a0
	ctx.lr = 0x821FC8A0;
	sub_821FC4A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db8d8
	ctx.lr = 0x821FC8A8;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC7A8) {
	__imp__sub_821FC7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FC8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821FC8B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822e7be8
	ctx.lr = 0x821FC8D8;
	sub_822E7BE8(ctx, base);
	// bl 0x821e2bc0
	ctx.lr = 0x821FC8DC;
	sub_821E2BC0(ctx, base);
	// bl 0x821e2c18
	ctx.lr = 0x821FC8E0;
	sub_821E2C18(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r5,16380
	ctx.r5.s64 = 16380;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x821FC8F8;
	sub_823DE090(ctx, base);
	// li r11,2047
	ctx.r11.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r11,2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2936, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r9,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,16320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16320, ctx.r10.u32);
	// bl 0x823428c0
	ctx.lr = 0x821FC924;
	sub_823428C0(ctx, base);
	// bl 0x8235f4f0
	ctx.lr = 0x821FC928;
	sub_8235F4F0(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,-19056(r10)
	PPC_STORE_U8(ctx.r10.u32 + -19056, ctx.r24.u8);
	// bl 0x821fc358
	ctx.lr = 0x821FC93C;
	sub_821FC358(ctx, base);
	// bl 0x82209540
	ctx.lr = 0x821FC940;
	sub_82209540(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13380(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13380);
	// bl 0x822e1f80
	ctx.lr = 0x821FC950;
	sub_822E1F80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234998
	ctx.lr = 0x821FC958;
	sub_82234998(ctx, base);
	// cntlzw r8,r25
	ctx.r8.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x8223e4d8
	ctx.lr = 0x821FC968;
	sub_8223E4D8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821fc98c
	if (ctx.cr6.eq) goto loc_821FC98C;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220ac48
	ctx.lr = 0x821FC988;
	sub_8220AC48(ctx, base);
	// b 0x821fc998
	goto loc_821FC998;
loc_821FC98C:
	// bl 0x8223def8
	ctx.lr = 0x821FC990;
	sub_8223DEF8(ctx, base);
	// bl 0x8223dec0
	ctx.lr = 0x821FC994;
	sub_8223DEC0(ctx, base);
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
loc_821FC998:
	// bl 0x8227b5e0
	ctx.lr = 0x821FC99C;
	sub_8227B5E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822305d0
	ctx.lr = 0x821FC9A4;
	sub_822305D0(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-32312(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32312, ctx.r11.u32);
	// bl 0x821417b0
	ctx.lr = 0x821FC9CC;
	sub_821417B0(ctx, base);
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,7772
	ctx.r25.s64 = ctx.r11.s64 + 7772;
	// lbz r6,29088(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 29088);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821fca18
	if (ctx.cr6.eq) goto loc_821FCA18;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// stw r11,-32312(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32312, ctx.r11.u32);
	// bl 0x823383c0
	ctx.lr = 0x821FC9F4;
	sub_823383C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1800
	ctx.r5.s64 = 1800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338468
	ctx.lr = 0x821FCA04;
	sub_82338468(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,7740
	ctx.r4.s64 = ctx.r10.s64 + 7740;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x821FCA18;
	sub_82280900(ctx, base);
loc_821FCA18:
	// bl 0x8223e510
	ctx.lr = 0x821FCA1C;
	sub_8223E510(ctx, base);
	// bl 0x82232a10
	ctx.lr = 0x821FCA20;
	sub_82232A10(ctx, base);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// sth r11,3052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3052, ctx.r11.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// sth r10,3054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3054, ctx.r10.u16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r11.u32);
	// beq cr6,0x821fcab8
	if (ctx.cr6.eq) goto loc_821FCAB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8223df40
	ctx.lr = 0x821FCA58;
	sub_8223DF40(ctx, base);
	// bl 0x822db190
	ctx.lr = 0x821FCA5C;
	sub_822DB190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8220ade8
	ctx.lr = 0x821FCA68;
	sub_8220ADE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fcab0
	if (!ctx.cr6.eq) goto loc_821FCAB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8223df40
	ctx.lr = 0x821FCA7C;
	sub_8223DF40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822db1a0
	ctx.lr = 0x821FCA84;
	sub_822DB1A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82282df0
	ctx.lr = 0x821FCA8C;
	sub_82282DF0(ctx, base);
	// bl 0x82232a10
	ctx.lr = 0x821FCA90;
	sub_82232A10(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8220ade8
	ctx.lr = 0x821FCA98;
	sub_8220ADE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fcab0
	if (!ctx.cr6.eq) goto loc_821FCAB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,7712
	ctx.r4.s64 = ctx.r11.s64 + 7712;
	// bl 0x822830e8
	ctx.lr = 0x821FCAB0;
	sub_822830E8(ctx, base);
loc_821FCAB0:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8220ab90
	ctx.lr = 0x821FCAB8;
	sub_8220AB90(ctx, base);
loc_821FCAB8:
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// ori r3,r7,10612
	ctx.r3.u64 = ctx.r7.u64 | 10612;
	// addi r4,r11,-5864
	ctx.r4.s64 = ctx.r11.s64 + -5864;
	// ori r7,r6,10616
	ctx.r7.u64 = ctx.r6.u64 | 10616;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// ori r6,r5,10608
	ctx.r6.u64 = ctx.r5.u64 | 10608;
	// addi r11,r11,-15208
	ctx.r11.s64 = ctx.r11.s64 + -15208;
	// addi r10,r10,-15216
	ctx.r10.s64 = ctx.r10.s64 + -15216;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r11,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r10,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stwx r9,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u32);
	// bne cr6,0x821fcb18
	if (!ctx.cr6.eq) goto loc_821FCB18;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r5,8800
	ctx.r5.s64 = 8800;
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821FCB18;
	sub_823DE090(ctx, base);
loc_821FCB18:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-15216
	ctx.r3.s64 = ctx.r11.s64 + -15216;
	// bl 0x8231c5a0
	ctx.lr = 0x821FCB24;
	sub_8231C5A0(ctx, base);
	// bl 0x82258760
	ctx.lr = 0x821FCB28;
	sub_82258760(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82343130
	ctx.lr = 0x821FCB30;
	sub_82343130(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,-5904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5904);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne cr6,0x821fcb54
	if (!ctx.cr6.eq) goto loc_821FCB54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fc7a8
	ctx.lr = 0x821FCB54;
	sub_821FC7A8(ctx, base);
loc_821FCB54:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822a4db8
	ctx.lr = 0x821FCB5C;
	sub_822A4DB8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1878
	ctx.r5.s64 = 1878;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82338468
	ctx.lr = 0x821FCB6C;
	sub_82338468(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1879
	ctx.r5.s64 = 1879;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82338468
	ctx.lr = 0x821FCB7C;
	sub_82338468(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1880
	ctx.r5.s64 = 1880;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82338468
	ctx.lr = 0x821FCB8C;
	sub_82338468(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r11,7684
	ctx.r4.s64 = ctx.r11.s64 + 7684;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82280900
	ctx.lr = 0x821FCBA8;
	sub_82280900(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821fcbf8
	if (ctx.cr6.eq) goto loc_821FCBF8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8223e0d0
	ctx.lr = 0x821FCBB8;
	sub_8223E0D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821fcbe8
	if (!ctx.cr6.eq) goto loc_821FCBE8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821fcbe8
	if (!ctx.cr6.eq) goto loc_821FCBE8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821fcbf8
	if (ctx.cr6.eq) goto loc_821FCBF8;
loc_821FCBE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,7640
	ctx.r4.s64 = ctx.r11.s64 + 7640;
	// bl 0x822830e8
	ctx.lr = 0x821FCBF8;
	sub_822830E8(ctx, base);
loc_821FCBF8:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r5,19
	ctx.r5.s64 = 1245184;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x821FCC14;
	sub_823DE090(ctx, base);
	// lis r10,19
	ctx.r10.s64 = 1245184;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// ori r9,r10,32456
	ctx.r9.u64 = ctx.r10.u64 | 32456;
	// lis r8,19
	ctx.r8.s64 = 1245184;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lis r7,-32021
	ctx.r7.s64 = -2098528256;
	// ori r6,r8,32456
	ctx.r6.u64 = ctx.r8.u64 | 32456;
	// addi r29,r7,-14872
	ctx.r29.s64 = ctx.r7.s64 + -14872;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,24496
	ctx.r5.u64 = ctx.r5.u64 | 24496;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stwx r11,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x821FCC58;
	sub_823DE090(ctx, base);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// addi r10,r10,5560
	ctx.r10.s64 = ctx.r10.s64 + 5560;
	// addi r9,r9,13416
	ctx.r9.s64 = ctx.r9.s64 + 13416;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bl 0x82240630
	ctx.lr = 0x821FCC7C;
	sub_82240630(ctx, base);
	// bl 0x821a97d0
	ctx.lr = 0x821FCC80;
	sub_821A97D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r6,r4,45016
	ctx.r6.u64 = ctx.r4.u64 | 45016;
	// ble cr6,0x821fccb0
	if (!ctx.cr6.gt) goto loc_821FCCB0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r11,r30,-360
	ctx.r11.s64 = ctx.r30.s64 + -360;
loc_821FCCA4:
	// stwu r10,624(r11)
	ea = 624 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x821fcca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FCCA4;
loc_821FCCB0:
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// sth r24,11296(r8)
	PPC_STORE_U16(ctx.r8.u32 + 11296, ctx.r24.u16);
	// bl 0x8233ce88
	ctx.lr = 0x821FCCDC;
	sub_8233CE88(ctx, base);
	// bl 0x821f0328
	ctx.lr = 0x821FCCE0;
	sub_821F0328(ctx, base);
	// bl 0x82332868
	ctx.lr = 0x821FCCE4;
	sub_82332868(ctx, base);
	// bl 0x82241ba0
	ctx.lr = 0x821FCCE8;
	sub_82241BA0(ctx, base);
	// bl 0x82235030
	ctx.lr = 0x821FCCEC;
	sub_82235030(ctx, base);
	// bl 0x8222ae70
	ctx.lr = 0x821FCCF0;
	sub_8222AE70(ctx, base);
	// bl 0x821f3760
	ctx.lr = 0x821FCCF4;
	sub_821F3760(ctx, base);
	// bl 0x821d9f18
	ctx.lr = 0x821FCCF8;
	sub_821D9F18(ctx, base);
	// bl 0x82343300
	ctx.lr = 0x821FCCFC;
	sub_82343300(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// stw r10,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r10.u32);
	// lfs f0,6912(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2872, temp.u32);
	// stfs f0,2876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2876, temp.u32);
	// bl 0x822280d8
	ctx.lr = 0x821FCD20;
	sub_822280D8(ctx, base);
	// bl 0x8222bae8
	ctx.lr = 0x821FCD24;
	sub_8222BAE8(ctx, base);
	// bl 0x82202dd0
	ctx.lr = 0x821FCD28;
	sub_82202DD0(ctx, base);
	// bl 0x82232300
	ctx.lr = 0x821FCD2C;
	sub_82232300(ctx, base);
	// bl 0x820d8278
	ctx.lr = 0x821FCD30;
	sub_820D8278(ctx, base);
	// bl 0x822a9be0
	ctx.lr = 0x821FCD34;
	sub_822A9BE0(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FC8B0) {
	__imp__sub_821FC8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FCD44) {
	__imp__sub_821FCD44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCD48) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,7940
	ctx.r4.s64 = ctx.r11.s64 + 7940;
	// bl 0x82280a68
	ctx.lr = 0x821FCD70;
	sub_82280A68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r10,7876
	ctx.r4.s64 = ctx.r10.s64 + 7876;
	// bl 0x82280a68
	ctx.lr = 0x821FCD80;
	sub_82280A68(ctx, base);
	// bl 0x8227dc28
	ctx.lr = 0x821FCD84;
	sub_8227DC28(ctx, base);
	// bl 0x8220bac8
	ctx.lr = 0x821FCD88;
	sub_8220BAC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fcdb4
	if (!ctx.cr6.eq) goto loc_821FCDB4;
	// bl 0x821fc3e8
	ctx.lr = 0x821FCD94;
	sub_821FC3E8(ctx, base);
	// bl 0x8235f560
	ctx.lr = 0x821FCD98;
	sub_8235F560(ctx, base);
	// bl 0x821f4820
	ctx.lr = 0x821FCD9C;
	sub_821F4820(ctx, base);
	// bl 0x82237f58
	ctx.lr = 0x821FCDA0;
	sub_82237F58(ctx, base);
	// bl 0x82343368
	ctx.lr = 0x821FCDA4;
	sub_82343368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82258848
	ctx.lr = 0x821FCDAC;
	sub_82258848(ctx, base);
	// bl 0x821f3800
	ctx.lr = 0x821FCDB0;
	sub_821F3800(ctx, base);
	// b 0x821fcdcc
	goto loc_821FCDCC;
loc_821FCDB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82258848
	ctx.lr = 0x821FCDBC;
	sub_82258848(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,7832
	ctx.r4.s64 = ctx.r11.s64 + 7832;
	// bl 0x82280900
	ctx.lr = 0x821FCDCC;
	sub_82280900(ctx, base);
loc_821FCDCC:
	// bl 0x821dda80
	ctx.lr = 0x821FCDD0;
	sub_821DDA80(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// addi r3,r31,2940
	ctx.r3.s64 = ctx.r31.s64 + 2940;
	// bl 0x822a24e0
	ctx.lr = 0x821FCDE4;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3000
	ctx.r3.s64 = ctx.r31.s64 + 3000;
	// bl 0x822a24e0
	ctx.lr = 0x821FCDF0;
	sub_822A24E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac738
	ctx.lr = 0x821FCDF8;
	sub_822AC738(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821fce14
	if (ctx.cr6.eq) goto loc_821FCE14;
	// lwz r11,2804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fce14
	if (ctx.cr6.eq) goto loc_821FCE14;
	// bl 0x822a4d70
	ctx.lr = 0x821FCE10;
	sub_822A4D70(ctx, base);
	// b 0x821fce18
	goto loc_821FCE18;
loc_821FCE14:
	// bl 0x822a8f48
	ctx.lr = 0x821FCE18;
	sub_822A8F48(ctx, base);
loc_821FCE18:
	// bl 0x822a89f0
	ctx.lr = 0x821FCE1C;
	sub_822A89F0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821FCE30;
	sub_823DE090(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r3,r10,-3584
	ctx.r3.s64 = ctx.r10.s64 + -3584;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821FCE44;
	sub_823DE090(ctx, base);
	// lis r9,-32076
	ctx.r9.s64 = -2102132736;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r3,r9,32576
	ctx.r3.s64 = ctx.r9.s64 + 32576;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821FCE58;
	sub_823DE090(ctx, base);
	// bl 0x82131840
	ctx.lr = 0x821FCE5C;
	sub_82131840(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821fce68
	if (ctx.cr6.eq) goto loc_821FCE68;
	// bl 0x821fc668
	ctx.lr = 0x821FCE68;
	sub_821FC668(ctx, base);
loc_821FCE68:
	// bl 0x8220bac8
	ctx.lr = 0x821FCE6C;
	sub_8220BAC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fce78
	if (!ctx.cr6.eq) goto loc_821FCE78;
	// bl 0x821e2c10
	ctx.lr = 0x821FCE78;
	sub_821E2C10(ctx, base);
loc_821FCE78:
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

PPC_WEAK_FUNC(sub_821FCD48) {
	__imp__sub_821FCD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821FCE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fcf7c
	if (!ctx.cr6.gt) goto loc_821FCF7C;
	// lis r30,-32024
	ctx.r30.s64 = -2098724864;
	// lwz r11,13380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13380);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fcf7c
	if (!ctx.cr6.eq) goto loc_821FCF7C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// addi r3,r10,7996
	ctx.r3.s64 = ctx.r10.s64 + 7996;
	// lwz r11,2800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,750
	ctx.r5.s64 = ctx.r11.s64 + 750;
	// addi r4,r10,250
	ctx.r4.s64 = ctx.r10.s64 + 250;
	// bl 0x822e84f0
	ctx.lr = 0x821FCEE8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821FCEF4;
	sub_8233CAE8(ctx, base);
	// lwz r11,2792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// beq cr6,0x821fcf40
	if (ctx.cr6.eq) goto loc_821FCF40;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25700
	ctx.r3.s64 = ctx.r10.s64 + -25700;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,2776
	ctx.r4.s64 = 2776;
	// addi r29,r11,1000
	ctx.r29.s64 = ctx.r11.s64 + 1000;
	// bl 0x8222de40
	ctx.lr = 0x821FCF24;
	sub_8222DE40(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r9,7972
	ctx.r3.s64 = ctx.r9.s64 + 7972;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821FCF3C;
	sub_822E84F0(ctx, base);
	// b 0x821fcf50
	goto loc_821FCF50;
loc_821FCF40:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// addi r3,r10,7956
	ctx.r3.s64 = ctx.r10.s64 + 7956;
	// bl 0x822e84f0
	ctx.lr = 0x821FCF50;
	sub_822E84F0(ctx, base);
loc_821FCF50:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821FCF5C;
	sub_8233CAE8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,2800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,13380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13380);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// bl 0x822e1f80
	ctx.lr = 0x821FCF7C;
	sub_822E1F80(ctx, base);
loc_821FCF7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FCE90) {
	__imp__sub_821FCE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FCF84) {
	__imp__sub_821FCF84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FCF88) {
	__imp__sub_821FCF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FCFA4) {
	__imp__sub_821FCFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,-19056
	ctx.r3.s64 = ctx.r11.s64 + -19056;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FCFA8) {
	__imp__sub_821FCFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FCFBC) {
	__imp__sub_821FCFBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FCFC0) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r11,-19056
	ctx.r4.s64 = ctx.r11.s64 + -19056;
	// lbz r11,-19056(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fd018
	if (!ctx.cr6.eq) goto loc_821FD018;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fd00c
	if (ctx.cr6.eq) goto loc_821FD00C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x8233b658
	ctx.lr = 0x821FCFFC;
	sub_8233B658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821FD00C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,8044
	ctx.r4.s64 = ctx.r11.s64 + 8044;
	// b 0x821fd048
	goto loc_821FD048;
loc_821FD018:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11208);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fd038
	if (ctx.cr6.eq) goto loc_821FD038;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,8028
	ctx.r3.s64 = ctx.r11.s64 + 8028;
	// b 0x821fd040
	goto loc_821FD040;
loc_821FD038:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,8016
	ctx.r3.s64 = ctx.r11.s64 + 8016;
loc_821FD040:
	// bl 0x822e84f0
	ctx.lr = 0x821FD044;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821FD048:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x821FD050;
	sub_8227CF18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FCFC0) {
	__imp__sub_821FCFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD060) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31520);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821fd18c
	if (ctx.cr6.eq) goto loc_821FD18C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fd0a8
	if (ctx.cr6.eq) goto loc_821FD0A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r11.u32);
	// bl 0x821fce90
	ctx.lr = 0x821FD0A8;
	sub_821FCE90(ctx, base);
loc_821FD0A8:
	// lwz r11,2652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2652);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r10,8072
	ctx.r30.s64 = ctx.r10.s64 + 8072;
	// beq cr6,0x821fd15c
	if (ctx.cr6.eq) goto loc_821FD15C;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821fd15c
	if (!ctx.cr6.lt) goto loc_821FD15C;
	// lwz r10,2792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2792);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821fd134
	if (ctx.cr6.eq) goto loc_821FD134;
	// lbz r11,2808(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2808);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd118
	if (ctx.cr6.eq) goto loc_821FD118;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,2808
	ctx.r4.s64 = ctx.r31.s64 + 2808;
	// addi r3,r11,8056
	ctx.r3.s64 = ctx.r11.s64 + 8056;
	// bl 0x822e84f0
	ctx.lr = 0x821FD100;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x821FD10C;
	sub_8227CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2808, ctx.r11.u8);
	// b 0x821fd15c
	goto loc_821FD15C;
loc_821FD118:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-25684
	ctx.r4.s64 = ctx.r11.s64 + -25684;
	// bl 0x8233cae8
	ctx.lr = 0x821FD128;
	sub_8233CAE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2808, ctx.r11.u8);
	// b 0x821fd15c
	goto loc_821FD15C;
loc_821FD134:
	// lwz r11,2796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fd158
	if (ctx.cr6.eq) goto loc_821FD158;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x821FD154;
	sub_8227CF18(ctx, base);
	// b 0x821fd15c
	goto loc_821FD15C;
loc_821FD158:
	// bl 0x821fcfc0
	ctx.lr = 0x821FD15C;
	sub_821FCFC0(ctx, base);
loc_821FD15C:
	// lwz r11,2656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fd18c
	if (ctx.cr6.eq) goto loc_821FD18C;
	// bl 0x82310110
	ctx.lr = 0x821FD16C;
	sub_82310110(ctx, base);
	// lwz r11,2656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2656);
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821fd18c
	if (!ctx.cr0.lt) goto loc_821FD18C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,2656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2656, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x821FD18C;
	sub_8227CF18(ctx, base);
loc_821FD18C:
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

PPC_WEAK_FUNC(sub_821FD060) {
	__imp__sub_821FD060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FD1A4) {
	__imp__sub_821FD1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD1A8) {
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
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-6104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6104);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fd334
	if (ctx.cr6.eq) goto loc_821FD334;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821fd334
	if (ctx.cr6.gt) goto loc_821FD334;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// bl 0x821e6bc0
	ctx.lr = 0x821FD1FC;
	sub_821E6BC0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// bl 0x8222f018
	ctx.lr = 0x821FD214;
	sub_8222F018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd234
	if (!ctx.cr6.eq) goto loc_821FD234;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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
loc_821FD234:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,5540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5540);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
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
	// ble cr6,0x821fd2a8
	if (!ctx.cr6.gt) goto loc_821FD2A8;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd298
	if (ctx.cr6.eq) goto loc_821FD298;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// b 0x821fd334
	goto loc_821FD334;
loc_821FD298:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x821fd334
	goto loc_821FD334;
loc_821FD2A8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82341f50
	ctx.lr = 0x821FD2C8;
	sub_82341F50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd2f8
	if (!ctx.cr6.eq) goto loc_821FD2F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd2ec
	if (ctx.cr6.eq) goto loc_821FD2EC;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// oris r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 33554432;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// b 0x821fd31c
	goto loc_821FD31C;
loc_821FD2EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// b 0x821fd318
	goto loc_821FD318;
loc_821FD2F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd310
	if (ctx.cr6.eq) goto loc_821FD310;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// b 0x821fd31c
	goto loc_821FD31C;
loc_821FD310:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_821FD318:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_821FD31C:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,13388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13388);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
loc_821FD334:
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

PPC_WEAK_FUNC(sub_821FD1A8) {
	__imp__sub_821FD1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FD34C) {
	__imp__sub_821FD34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD350) {
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
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fd3c8
	if (!ctx.cr6.gt) goto loc_821FD3C8;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821fd3c8
	if (ctx.cr6.gt) goto loc_821FD3C8;
	// lbz r11,291(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 291);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,8272
	ctx.r8.s64 = ctx.r10.s64 + 8272;
	// mulli r7,r11,44
	ctx.r7.s64 = ctx.r11.s64 * 44;
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// lwzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821fd3bc
	if (!ctx.cr6.eq) goto loc_821FD3BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,8108
	ctx.r4.s64 = ctx.r11.s64 + 8108;
	// bl 0x822830e8
	ctx.lr = 0x821FD3BC;
	sub_822830E8(ctx, base);
loc_821FD3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821FD3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FD3C8:
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

PPC_WEAK_FUNC(sub_821FD350) {
	__imp__sub_821FD350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FD3E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32032
	ctx.r29.s64 = -2099249152;
	// lwz r9,-6048(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6048);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fd51c
	if (ctx.cr6.eq) goto loc_821FD51C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ble cr6,0x821fd51c
	if (!ctx.cr6.gt) goto loc_821FD51C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r31,r10,240
	ctx.r31.s64 = ctx.r10.s64 + 240;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f31.f64 = double(temp.f32);
loc_821FD448:
	// lbz r10,-64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fd50c
	if (ctx.cr6.eq) goto loc_821FD50C;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821fd4e4
	if (ctx.cr6.lt) goto loc_821FD4E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x821fd4e4
	if (ctx.cr6.gt) goto loc_821FD4E4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821FD46C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfsx f11,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfsx f7,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fsubs f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// stfsx f5,r30,r10
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// stfsx f6,r30,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x821f2d08
	ctx.lr = 0x821FD4D4;
	sub_821F2D08(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,-6048(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6048);
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// blt cr6,0x821fd46c
	if (ctx.cr6.lt) goto loc_821FD46C;
loc_821FD4E4:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x821f2d40
	ctx.lr = 0x821FD504;
	sub_821F2D40(ctx, base);
	// lwz r9,-6048(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6048);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_821FD50C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fd448
	if (ctx.cr6.lt) goto loc_821FD448;
loc_821FD51C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FD3E0) {
	__imp__sub_821FD3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD528) {
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
	// lis r30,-32032
	ctx.r30.s64 = -2099249152;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// lwz r11,-6152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6152);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821fd584
	if (ctx.cr6.lt) goto loc_821FD584;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,8124
	ctx.r3.s64 = ctx.r11.s64 + 8124;
	// bl 0x822e84f0
	ctx.lr = 0x821FD568;
	sub_822E84F0(ctx, base);
	// lwz r11,-6152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6152);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233d310
	ctx.lr = 0x821FD584;
	sub_8233D310(ctx, base);
loc_821FD584:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,6676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6676);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821fd5a8
	if (!ctx.cr6.eq) goto loc_821FD5A8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x82280900
	ctx.lr = 0x821FD5A8;
	sub_82280900(ctx, base);
loc_821FD5A8:
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

PPC_WEAK_FUNC(sub_821FD528) {
	__imp__sub_821FD528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD5C0) {
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
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r3,-5992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5992);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821fd610
	if (ctx.cr6.lt) goto loc_821FD610;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1f80
	ctx.lr = 0x821FD5EC;
	sub_822E1F80(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r31,624
	ctx.r10.s64 = ctx.r31.s64 * 624;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822846c0
	ctx.lr = 0x821FD604;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd610
	if (ctx.cr6.eq) goto loc_821FD610;
	// bl 0x822f0510
	ctx.lr = 0x821FD610;
	sub_822F0510(ctx, base);
loc_821FD610:
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

PPC_WEAK_FUNC(sub_821FD5C0) {
	__imp__sub_821FD5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FD624) {
	__imp__sub_821FD624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821FD630;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de024
	ctx.lr = 0x821FD638;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r24,r11,9624
	ctx.r24.s64 = ctx.r11.s64 + 9624;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fd7ec
	if (!ctx.cr6.gt) goto loc_821FD7EC;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r11,240
	ctx.r30.s64 = ctx.r11.s64 + 240;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lfs f27,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// ori r23,r8,65535
	ctx.r23.u64 = ctx.r8.u64 | 65535;
	// lfs f28,20476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20476);
	ctx.f28.f64 = double(temp.f32);
	// addi r27,r11,-3456
	ctx.r27.s64 = ctx.r11.s64 + -3456;
loc_821FD688:
	// lbz r11,-64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd7d8
	if (ctx.cr6.eq) goto loc_821FD7D8;
	// lbz r11,-240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -240);
	// addi r3,r30,-240
	ctx.r3.s64 = ctx.r30.s64 + -240;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821fd720
	if (!ctx.cr6.eq) goto loc_821FD720;
	// lwz r11,-100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -100);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x821fd720
	if (!ctx.cr6.eq) goto loc_821FD720;
	// lhz r31,-108(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + -108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823862b0
	ctx.lr = 0x821FD6BC;
	sub_823862B0(ctx, base);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 196608;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r10,r31,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,6400
	ctx.r11.s64 = ctx.r11.s64 + 6400;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fadds f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fsubs f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsel f9,f10,f4,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f4.f64 : ctx.f11.f64;
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x821fd7d8
	goto loc_821FD7D8;
loc_821FD720:
	// bl 0x822846c0
	ctx.lr = 0x821FD724;
	sub_822846C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd7d8
	if (ctx.cr6.eq) goto loc_821FD7D8;
	// bl 0x822f19f0
	ctx.lr = 0x821FD734;
	sub_822F19F0(ctx, base);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f30,f3
	ctx.f30.f64 = double(float(sqrt(ctx.f3.f64)));
	// ble cr6,0x821fd77c
	if (!ctx.cr6.gt) goto loc_821FD77C;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x821fd780
	goto loc_821FD780;
loc_821FD77C:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_821FD780:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821fd7d8
	if (ctx.cr6.eq) goto loc_821FD7D8;
loc_821FD78C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x821FD798;
	sub_822F1EB8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x821742a0
	ctx.lr = 0x821FD7A0;
	sub_821742A0(ctx, base);
	// lfs f0,244(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// addis r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 196608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f8,f9,f12,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfsx f8,r10,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blt cr6,0x821fd78c
	if (ctx.cr6.lt) goto loc_821FD78C;
loc_821FD7D8:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fd688
	if (ctx.cr6.lt) goto loc_821FD688;
loc_821FD7EC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82179e80
	ctx.lr = 0x821FD7F8;
	sub_82179E80(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de070
	ctx.lr = 0x821FD804;
	__restfpr_27(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FD628) {
	__imp__sub_821FD628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821FD810;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82393ee8
	ctx.lr = 0x821FD81C;
	sub_82393EE8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r8,r10,9240
	ctx.r8.s64 = ctx.r10.s64 + 9240;
	// lbz r11,29088(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,-32312(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32312);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fd860
	if (!ctx.cr6.eq) goto loc_821FD860;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r5,r10,r11
	ctx.r5.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// b 0x821fd870
	goto loc_821FD870;
loc_821FD860:
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_821FD870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd880
	if (ctx.cr6.eq) goto loc_821FD880;
	// li r7,1
	ctx.r7.s64 = 1;
loc_821FD880:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821fd8a4
	if (!ctx.cr6.eq) goto loc_821FD8A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x821fd8b4
	goto loc_821FD8B4;
loc_821FD8A4:
	// lwz r11,9796(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9796);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821FD8B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd8c4
	if (ctx.cr6.eq) goto loc_821FD8C4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_821FD8C4:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x821fd8d8
	if (!ctx.cr6.gt) goto loc_821FD8D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821fd8e0
	goto loc_821FD8E0;
loc_821FD8D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_821FD8E0:
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r27,r11,30208
	ctx.r27.s64 = ctx.r11.s64 + 30208;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
loc_821FD8F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FD8F8:
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd910
	if (ctx.cr6.eq) goto loc_821FD910;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fd628
	ctx.lr = 0x821FD910;
	sub_821FD628(ctx, base);
loc_821FD910:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x821fd8f8
	if (ctx.cr6.lt) goto loc_821FD8F8;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x821fd8f4
	if (!ctx.cr0.eq) goto loc_821FD8F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r29,r27,84
	ctx.r29.s64 = ctx.r27.s64 + 84;
loc_821FD938:
	// addi r11,r27,80
	ctx.r11.s64 = ctx.r27.s64 + 80;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fd954
	if (ctx.cr6.eq) goto loc_821FD954;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fd628
	ctx.lr = 0x821FD954;
	sub_821FD628(ctx, base);
loc_821FD954:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x821fd938
	if (!ctx.cr0.eq) goto loc_821FD938;
	// bl 0x8217a648
	ctx.lr = 0x821FD968;
	sub_8217A648(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82393e28
	ctx.lr = 0x821FD970;
	sub_82393E28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FD808) {
	__imp__sub_821FD808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FD97C) {
	__imp__sub_821FD97C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FD980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821FD988;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,2892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821fd9b8
	if (!ctx.cr6.eq) goto loc_821FD9B8;
	// bl 0x8233ed30
	ctx.lr = 0x821FD9AC;
	sub_8233ED30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220b9a0
	ctx.lr = 0x821FD9B8;
	sub_8220B9A0(ctx, base);
loc_821FD9B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,8184
	ctx.r4.s64 = ctx.r11.s64 + 8184;
	// bl 0x8233cae8
	ctx.lr = 0x821FD9C8;
	sub_8233CAE8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r10,8168
	ctx.r4.s64 = ctx.r10.s64 + 8168;
	// bl 0x8233cae8
	ctx.lr = 0x821FD9D8;
	sub_8233CAE8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r9,-25816
	ctx.r4.s64 = ctx.r9.s64 + -25816;
	// bl 0x8233cae8
	ctx.lr = 0x821FD9E8;
	sub_8233CAE8(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r8,8152
	ctx.r4.s64 = ctx.r8.s64 + 8152;
	// bl 0x8233cae8
	ctx.lr = 0x821FD9F8;
	sub_8233CAE8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r7,-25664
	ctx.r4.s64 = ctx.r7.s64 + -25664;
	// bl 0x8233cae8
	ctx.lr = 0x821FDA08;
	sub_8233CAE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// stw r11,2656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2656, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13380(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13380);
	// bl 0x822e1f80
	ctx.lr = 0x821FDA20;
	sub_822E1F80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r11.u32);
	// bl 0x821fd808
	ctx.lr = 0x821FDA2C;
	sub_821FD808(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FD980) {
	__imp__sub_821FD980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FDA34) {
	__imp__sub_821FDA34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDA38) {
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
	// lbz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fda8c
	if (ctx.cr6.eq) goto loc_821FDA8C;
loc_821FDA58:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fda8c
	if (!ctx.cr6.eq) goto loc_821FDA8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ec70
	ctx.lr = 0x821FDA74;
	sub_8222EC70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fda8c
	if (ctx.cr6.eq) goto loc_821FDA8C;
	// bl 0x822b2a90
	ctx.lr = 0x821FDA80;
	sub_822B2A90(ctx, base);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fda58
	if (!ctx.cr6.eq) goto loc_821FDA58;
loc_821FDA8C:
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

PPC_WEAK_FUNC(sub_821FDA38) {
	__imp__sub_821FDA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDAA0) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821fdaf4
	if (ctx.cr6.eq) goto loc_821FDAF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bne cr6,0x821fdad8
	if (!ctx.cr6.eq) goto loc_821FDAD8;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_821FDAD8:
	// bl 0x82229da8
	ctx.lr = 0x821FDADC;
	sub_82229DA8(ctx, base);
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
loc_821FDAF4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
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

PPC_WEAK_FUNC(sub_821FDAA0) {
	__imp__sub_821FDAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FDB0C) {
	__imp__sub_821FDB0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821FDB18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
	// addi r30,r30,-20904
	ctx.r30.s64 = ctx.r30.s64 + -20904;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fdb64
	if (ctx.cr6.eq) goto loc_821FDB64;
	// bl 0x82332b28
	ctx.lr = 0x821FDB48;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821FDB4C;
	sub_822ACED0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,276(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 276);
	// bl 0x82229da8
	ctx.lr = 0x821FDB5C;
	sub_82229DA8(ctx, base);
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821FDB64:
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x821fdb90
	if (!ctx.cr6.eq) goto loc_821FDB90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x821fdb94
	if (ctx.cr6.lt) goto loc_821FDB94;
loc_821FDB90:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821FDB94:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r29,-20900
	ctx.r29.s64 = ctx.r29.s64 + -20900;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fdbd4
	if (ctx.cr6.eq) goto loc_821FDBD4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x821fdbc8
	if (ctx.cr6.eq) goto loc_821FDBC8;
	// lhz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// b 0x821fdbcc
	goto loc_821FDBCC;
loc_821FDBC8:
	// lhz r4,64(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 64);
loc_821FDBCC:
	// bl 0x82229da8
	ctx.lr = 0x821FDBD0;
	sub_82229DA8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821FDBD4:
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fdbf4
	if (ctx.cr6.eq) goto loc_821FDBF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x821fdbf8
	if (ctx.cr6.lt) goto loc_821FDBF8;
loc_821FDBF4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821FDBF8:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r29,-20899
	ctx.r29.s64 = ctx.r29.s64 + -20899;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fdc38
	if (ctx.cr6.eq) goto loc_821FDC38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x821fdc2c
	if (ctx.cr6.eq) goto loc_821FDC2C;
	// lhz r4,30(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// b 0x821fdc30
	goto loc_821FDC30;
loc_821FDC2C:
	// lhz r4,66(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 66);
loc_821FDC30:
	// bl 0x82229da8
	ctx.lr = 0x821FDC34;
	sub_82229DA8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821FDC38:
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// addi r11,r11,-20898
	ctx.r11.s64 = ctx.r11.s64 + -20898;
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// beq cr6,0x821fdc80
	if (ctx.cr6.eq) goto loc_821FDC80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821fdca0
	if (!ctx.cr6.eq) goto loc_821FDCA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,298(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 298);
	// bl 0x82229da8
	ctx.lr = 0x821FDC78;
	sub_82229DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821FDC80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fdca0
	if (ctx.cr6.eq) goto loc_821FDCA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,300(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 300);
	// bl 0x82229da8
	ctx.lr = 0x821FDCA0;
	sub_82229DA8(ctx, base);
loc_821FDCA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FDB10) {
	__imp__sub_821FDB10(ctx, base);
}

