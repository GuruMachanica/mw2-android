#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822379E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822379E4) {
	__imp__sub_822379E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822379E8) {
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
	// bl 0x822acb68
	ctx.lr = 0x822379F8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82237a1c
	if (ctx.cr6.eq) goto loc_82237A1C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6300
	ctx.r3.s64 = ctx.r11.s64 + -6300;
	// bl 0x822ad350
	ctx.lr = 0x82237A0C;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x82237A24;
	sub_82234810(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r3,r6,r8
	temp.u8 = (ctx.r6.u32 + ctx.r8.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822acb78
	ctx.lr = 0x82237A48;
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

PPC_WEAK_FUNC(sub_822379E8) {
	__imp__sub_822379E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237A58) {
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
	ctx.lr = 0x82237A70;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82237a88
	if (ctx.cr6.eq) goto loc_82237A88;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// bl 0x822ad350
	ctx.lr = 0x82237A84;
	sub_822AD350(ctx, base);
	// b 0x82237adc
	goto loc_82237ADC;
loc_82237A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x82237A90;
	sub_82234810(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82237ab0
	if (ctx.cr6.eq) goto loc_82237AB0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// bl 0x822ad350
	ctx.lr = 0x82237AAC;
	sub_822AD350(ctx, base);
	// b 0x82237adc
	goto loc_82237ADC;
loc_82237AB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x82237AB8;
	sub_82229BF0(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82237ad4
	if (!ctx.cr6.eq) goto loc_82237AD4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6264
	ctx.r3.s64 = ctx.r11.s64 + -6264;
	// bl 0x822ad350
	ctx.lr = 0x82237AD4;
	sub_822AD350(ctx, base);
loc_82237AD4:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// sth r11,104(r30)
	PPC_STORE_U16(ctx.r30.u32 + 104, ctx.r11.u16);
loc_82237ADC:
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

PPC_WEAK_FUNC(sub_82237A58) {
	__imp__sub_82237A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237AF4) {
	__imp__sub_82237AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237AF8) {
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
	ctx.lr = 0x82237B08;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82237b2c
	if (ctx.cr6.eq) goto loc_82237B2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6116
	ctx.r3.s64 = ctx.r11.s64 + -6116;
	// bl 0x822ad350
	ctx.lr = 0x82237B1C;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x82237B34;
	sub_82234810(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82237b5c
	if (ctx.cr6.eq) goto loc_82237B5C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6156
	ctx.r3.s64 = ctx.r11.s64 + -6156;
	// bl 0x822ad350
	ctx.lr = 0x82237B4C;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237B5C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,104(r3)
	PPC_STORE_U16(ctx.r3.u32 + 104, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82237AF8) {
	__imp__sub_82237AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237B74) {
	__imp__sub_82237B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// b 0x822ad738
	sub_822AD738(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237B78) {
	__imp__sub_82237B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237B9C) {
	__imp__sub_82237B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// b 0x822a88e0
	sub_822A88E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237BA0) {
	__imp__sub_82237BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// b 0x822ace70
	sub_822ACE70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237BC0) {
	__imp__sub_82237BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82237BE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82237BF4;
	sub_822B20B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82237C00;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a3ec0
	ctx.lr = 0x82237C0C;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82237cdc
	if (ctx.cr6.lt) goto loc_82237CDC;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,13680
	ctx.r11.s64 = ctx.r11.s64 + 13680;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82237c40
	if (ctx.cr6.eq) goto loc_82237C40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82237C40;
	sub_822AD4E0(ctx, base);
loc_82237C40:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r30,r10,18560
	ctx.r30.s64 = ctx.r10.s64 + 18560;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,16388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r9,r10,136
	ctx.r9.s64 = ctx.r10.s64 * 136;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82237cdc
	if (ctx.cr6.eq) goto loc_82237CDC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r28,r9,-6064
	ctx.r28.s64 = ctx.r9.s64 + -6064;
loc_82237C78:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82237cac
	if (ctx.cr6.eq) goto loc_82237CAC;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82237cac
	if (!ctx.cr6.eq) goto loc_82237CAC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82237ca8
	if (ctx.cr6.eq) goto loc_82237CA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ad350
	ctx.lr = 0x82237CA0;
	sub_822AD350(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,16388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
loc_82237CA8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82237CAC:
	// mulli r9,r10,136
	ctx.r9.s64 = ctx.r10.s64 * 136;
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82237c78
	if (!ctx.cr6.eq) goto loc_82237C78;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82237cdc
	if (ctx.cr6.eq) goto loc_82237CDC;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r10,136
	ctx.r10.s64 = 136;
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x822ace70
	ctx.lr = 0x82237CDC;
	sub_822ACE70(ctx, base);
loc_82237CDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237BE0) {
	__imp__sub_82237BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237CE4) {
	__imp__sub_82237CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82237CF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82237CFC;
	sub_822B20B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82237D08;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a3ec0
	ctx.lr = 0x82237D18;
	sub_822A3EC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82237d40
	if (!ctx.cr6.lt) goto loc_82237D40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-6024
	ctx.r3.s64 = ctx.r11.s64 + -6024;
	// bl 0x822e84f0
	ctx.lr = 0x82237D34;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x82237D40;
	sub_822AD4E0(ctx, base);
loc_82237D40:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,13680
	ctx.r11.s64 = ctx.r11.s64 + 13680;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82237d6c
	if (ctx.cr6.eq) goto loc_82237D6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82237D6C;
	sub_822AD4E0(ctx, base);
loc_82237D6C:
	// bl 0x822ad190
	ctx.lr = 0x82237D70;
	sub_822AD190(ctx, base);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r30,r10,18560
	ctx.r30.s64 = ctx.r10.s64 + 18560;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// lwz r10,16388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r9,r10,136
	ctx.r9.s64 = ctx.r10.s64 * 136;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82237de8
	if (ctx.cr6.eq) goto loc_82237DE8;
	// li r28,136
	ctx.r28.s64 = 136;
loc_82237DA0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82237dd4
	if (ctx.cr6.eq) goto loc_82237DD4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82237dd4
	if (!ctx.cr6.eq) goto loc_82237DD4;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r11,r28
	ctx.r3.s32 = ctx.r11.s32 / ctx.r28.s32;
	// bl 0x822ace70
	ctx.lr = 0x82237DC8;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82237DCC;
	sub_822AD208(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,16388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
loc_82237DD4:
	// mulli r9,r10,136
	ctx.r9.s64 = ctx.r10.s64 * 136;
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82237da0
	if (!ctx.cr6.eq) goto loc_82237DA0;
loc_82237DE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237CE8) {
	__imp__sub_82237CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82237DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822ad190
	ctx.lr = 0x82237E00;
	sub_822AD190(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,18560
	ctx.r29.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237e44
	if (ctx.cr6.eq) goto loc_82237E44;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,136
	ctx.r28.s64 = 136;
loc_82237E20:
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r30,r28
	ctx.r3.s32 = ctx.r30.s32 / ctx.r28.s32;
	// bl 0x822ace70
	ctx.lr = 0x82237E2C;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82237E30;
	sub_822AD208(ctx, base);
	// lwz r11,16388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16388);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82237e20
	if (ctx.cr6.lt) goto loc_82237E20;
loc_82237E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237DF0) {
	__imp__sub_82237DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237E4C) {
	__imp__sub_82237E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237E50) {
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
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82237f38
	if (!ctx.cr6.eq) goto loc_82237F38;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// mulli r11,r8,136
	ctx.r11.s64 = ctx.r8.s64 * 136;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82237f18
	if (ctx.cr6.eq) goto loc_82237F18;
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82237ef8
	if (ctx.cr6.eq) goto loc_82237EF8;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237ed8
	if (ctx.cr6.eq) goto loc_82237ED8;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r10,136
	ctx.r10.s64 = 136;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r3,r9,-5932
	ctx.r3.s64 = ctx.r9.s64 + -5932;
	// bl 0x822e84f0
	ctx.lr = 0x82237EC4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82237EC8;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237ED8:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,138(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 138);
	// bl 0x822acff0
	ctx.lr = 0x82237EE8;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237EF8:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,38(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 38);
	// bl 0x822acff0
	ctx.lr = 0x82237F08;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237F18:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,176(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// bl 0x822acff0
	ctx.lr = 0x82237F28;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237F38:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// bl 0x822ad350
	ctx.lr = 0x82237F44;
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

PPC_WEAK_FUNC(sub_82237E50) {
	__imp__sub_82237E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237F54) {
	__imp__sub_82237F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82237F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821b65a0
	ctx.lr = 0x82237F68;
	sub_821B65A0(ctx, base);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r30,r10,18560
	ctx.r30.s64 = ctx.r10.s64 + 18560;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// lwz r10,16388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82237fc4
	if (ctx.cr6.eq) goto loc_82237FC4;
	// li r28,136
	ctx.r28.s64 = 136;
loc_82237F98:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r11,r28
	ctx.r3.s32 = ctx.r11.s32 / ctx.r28.s32;
	// bl 0x822a88e0
	ctx.lr = 0x82237FA8;
	sub_822A88E0(ctx, base);
	// lwz r10,16388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82237f98
	if (!ctx.cr6.eq) goto loc_82237F98;
loc_82237FC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,17028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17028, ctx.r10.u32);
	// stw r11,16388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16388, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237F58) {
	__imp__sub_82237F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237FDC) {
	__imp__sub_82237FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82237FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82238058
	if (!ctx.cr6.gt) goto loc_82238058;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,11296
	ctx.r28.s64 = ctx.r11.s64 + 11296;
loc_82238010:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lbzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82238048
	if (ctx.cr6.eq) goto loc_82238048;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82238048
	if (ctx.cr6.eq) goto loc_82238048;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82238048
	if (ctx.cr6.eq) goto loc_82238048;
	// bl 0x82236bf0
	ctx.lr = 0x82238044;
	sub_82236BF0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82238048:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82238010
	if (ctx.cr6.lt) goto loc_82238010;
loc_82238058:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237FE0) {
	__imp__sub_82237FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82238068;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821201f0
	ctx.lr = 0x82238074;
	sub_821201F0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,292
	ctx.r4.s64 = 292;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r5,130(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 130);
	// bl 0x8222f160
	ctx.lr = 0x8223808C;
	sub_8222F160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// bl 0x8223fb90
	ctx.lr = 0x8223809C;
	sub_8223FB90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x822380B4;
	sub_82235A10(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r19,r11,18560
	ctx.r19.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r18,1
	ctx.r18.s64 = 1;
	// lis r27,-32032
	ctx.r27.s64 = -2099249152;
	// lis r20,-32024
	ctx.r20.s64 = -2098724864;
	// addi r24,r10,-2200
	ctx.r24.s64 = ctx.r10.s64 + -2200;
	// addi r23,r9,-2280
	ctx.r23.s64 = ctx.r9.s64 + -2280;
	// addi r22,r8,-2264
	ctx.r22.s64 = ctx.r8.s64 + -2264;
	// addi r26,r11,-18804
	ctx.r26.s64 = ctx.r11.s64 + -18804;
loc_822380FC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r31,r25,r11
	ctx.r31.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822381e8
	if (ctx.cr6.eq) goto loc_822381E8;
	// lwz r11,11248(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 11248);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82238138
	if (!ctx.cr6.eq) goto loc_82238138;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r10,r18,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822381e8
	if (ctx.cr6.eq) goto loc_822381E8;
loc_82238138:
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d48f0
	ctx.lr = 0x8223814C;
	sub_822D48F0(ctx, base);
	// lwz r11,-6180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6180);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822381e8
	if (ctx.cr6.gt) goto loc_822381E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82235f58
	ctx.lr = 0x82238168;
	sub_82235F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82238194
	if (ctx.cr6.eq) goto loc_82238194;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82235ec0
	ctx.lr = 0x8223817C;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82238194
	if (ctx.cr6.eq) goto loc_82238194;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x8223818C;
	sub_82235A10(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// b 0x822381d8
	goto loc_822381D8;
loc_82238194:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82235ec0
	ctx.lr = 0x822381A0;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822381b8
	if (ctx.cr6.eq) goto loc_822381B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x822381B0;
	sub_82235A10(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x822381d8
	goto loc_822381D8;
loc_822381B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82235f58
	ctx.lr = 0x822381C0;
	sub_82235F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822381e8
	if (ctx.cr6.eq) goto loc_822381E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x822381D4;
	sub_82235A10(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_822381D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2d08
	ctx.lr = 0x822381E8;
	sub_821F2D08(ctx, base);
loc_822381E8:
	// lwz r11,16388(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16388);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,136
	ctx.r25.s64 = ctx.r25.s64 + 136;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822380fc
	if (ctx.cr6.lt) goto loc_822380FC;
loc_822381FC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238060) {
	__imp__sub_82238060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82238204) {
	__imp__sub_82238204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238208) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822364c0
	sub_822364C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238208) {
	__imp__sub_82238208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238210) {
	PPC_FUNC_PROLOGUE();
	// li r4,5000
	ctx.r4.s64 = 5000;
	// b 0x822364c0
	sub_822364C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238210) {
	__imp__sub_82238210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82238220;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,5560
	ctx.r29.s64 = ctx.r10.s64 + 5560;
	// beq cr6,0x82238280
	if (ctx.cr6.eq) goto loc_82238280;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,-112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -112);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82238280
	if (!ctx.cr6.eq) goto loc_82238280;
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,-112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82238280
	if (ctx.cr6.eq) goto loc_82238280;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// bl 0x822364c0
	ctx.lr = 0x82238280;
	sub_822364C0(ctx, base);
loc_82238280:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r28,17
	ctx.r10.s64 = ctx.r28.s64 + 17;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// lhz r6,102(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82238340
	if (!ctx.cr6.eq) goto loc_82238340;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// addi r30,r11,-18804
	ctx.r30.s64 = ctx.r11.s64 + -18804;
loc_822382C8:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82238340
	if (ctx.cr6.lt) goto loc_82238340;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82238330
	if (!ctx.cr6.eq) goto loc_82238330;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82238330
	if (!ctx.cr6.lt) goto loc_82238330;
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223832c
	if (ctx.cr6.eq) goto loc_8223832C;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -112);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8223832c
	if (!ctx.cr6.eq) goto loc_8223832C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e2ec8
	ctx.lr = 0x8223832C;
	sub_821E2EC8(ctx, base);
loc_8223832C:
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
loc_82238330:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x822382c8
	if (ctx.cr6.lt) goto loc_822382C8;
loc_82238340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238218) {
	__imp__sub_82238218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238348) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r6,r11,9624
	ctx.r6.s64 = ctx.r11.s64 + 9624;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r31,r11,15000
	ctx.r31.s64 = ctx.r11.s64 + 15000;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-20536
	ctx.r30.s64 = ctx.r30.s64 + -20536;
	// ble cr6,0x82238384
	if (!ctx.cr6.gt) goto loc_82238384;
	// stwx r30,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u32);
	// b 0x82238388
	goto loc_82238388;
loc_82238384:
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
loc_82238388:
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822383ec
	if (ctx.cr6.eq) goto loc_822383EC;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-18804
	ctx.r5.s64 = ctx.r11.s64 + -18804;
loc_822383A4:
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,52(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lhz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// mulli r8,r8,136
	ctx.r8.s64 = ctx.r8.s64 * 136;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x822383d4
	if (!ctx.cr6.gt) goto loc_822383D4;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// b 0x822383d8
	goto loc_822383D8;
loc_822383D4:
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_822383D8:
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822383a4
	if (ctx.cr6.lt) goto loc_822383A4;
loc_822383EC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82238348) {
	__imp__sub_82238348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822383F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82238400;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822a47f0
	ctx.lr = 0x82238414;
	sub_822A47F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822384a8
	if (ctx.cr6.eq) goto loc_822384A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x822384a8
	if (ctx.cr6.gt) goto loc_822384A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822384a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822384A8;
	// bdzf 4*cr6+eq,0x82238478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82238478;
	// bdzf 4*cr6+eq,0x82238454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82238454;
	// bne cr6,0x82238468
	if (!ctx.cr6.eq) goto loc_82238468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aced0
	ctx.lr = 0x82238450;
	sub_822ACED0(ctx, base);
	// b 0x82238484
	goto loc_82238484;
loc_82238454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dec00
	ctx.lr = 0x8223845C;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82238464;
	sub_822ACC78(ctx, base);
	// b 0x82238484
	goto loc_82238484;
loc_82238468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82238470;
	sub_823DEAF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82238474;
	sub_822ACBF8(ctx, base);
	// b 0x82238484
	goto loc_82238484;
loc_82238478:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-5904
	ctx.r3.s64 = ctx.r11.s64 + -5904;
	// bl 0x822ad350
	ctx.lr = 0x82238484;
	sub_822AD350(ctx, base);
loc_82238484:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x822ad738
	ctx.lr = 0x822384A8;
	sub_822AD738(ctx, base);
loc_822384A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822383F8) {
	__imp__sub_822383F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822384B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822384B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,13680
	ctx.r31.s64 = ctx.r11.s64 + 13680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,13680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822384fc
	if (ctx.cr6.eq) goto loc_822384FC;
loc_822384DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822384E8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223850c
	if (ctx.cr6.eq) goto loc_8223850C;
	// lwzu r11,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822384dc
	if (!ctx.cr6.eq) goto loc_822384DC;
loc_822384FC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822383f8
	ctx.lr = 0x8223850C;
	sub_822383F8(ctx, base);
loc_8223850C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822384B0) {
	__imp__sub_822384B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82238514) {
	__imp__sub_82238514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82238520;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82238564
	if (!ctx.cr6.gt) goto loc_82238564;
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
loc_82238544:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822384b0
	ctx.lr = 0x82238554;
	sub_822384B0(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82238544
	if (ctx.cr6.lt) goto loc_82238544;
loc_82238564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238518) {
	__imp__sub_82238518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223856C) {
	__imp__sub_8223856C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238570) {
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
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11220);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82238688
	if (ctx.cr6.eq) goto loc_82238688;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r10,r11,18560
	ctx.r10.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// blt cr6,0x822385e4
	if (ctx.cr6.lt) goto loc_822385E4;
	// lis r9,-32017
	ctx.r9.s64 = -2098266112;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r8,-5812
	ctx.r4.s64 = ctx.r8.s64 + -5812;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r10,-28920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28920);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-28920(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28920, ctx.r10.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82280900
	ctx.lr = 0x822385D0;
	sub_82280900(ctx, base);
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
loc_822385E4:
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r8,r11,136
	ctx.r8.s64 = ctx.r11.s64 * 136;
	// addi r7,r9,-18804
	ctx.r7.s64 = ctx.r9.s64 + -18804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16388, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82238634
	if (!ctx.cr6.gt) goto loc_82238634;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823de090
	ctx.lr = 0x8223861C;
	sub_823DE090(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223862C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8223862c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223862C;
loc_82238634:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223864c
	if (ctx.cr6.eq) goto loc_8223864C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234270
	ctx.lr = 0x8223864C;
	sub_82234270(ctx, base);
loc_8223864C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238518
	ctx.lr = 0x82238654;
	sub_82238518(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d52c8
	ctx.lr = 0x82238664;
	sub_822D52C8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82238688
	if (!ctx.cr6.eq) goto loc_82238688;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r11.u16);
loc_82238688:
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

PPC_WEAK_FUNC(sub_82238570) {
	__imp__sub_82238570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223869C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223869C) {
	__imp__sub_8223869C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822386A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822386A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822360f8
	ctx.lr = 0x822386B8;
	sub_822360F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822386cc
	if (ctx.cr6.eq) goto loc_822386CC;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82238730
	if (ctx.cr6.eq) goto loc_82238730;
loc_822386CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82238764
	if (!ctx.cr6.gt) goto loc_82238764;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82238730
	if (ctx.cr6.gt) goto loc_82238730;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8223873c
	if (!ctx.cr6.eq) goto loc_8223873C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236278
	ctx.lr = 0x82238718;
	sub_82236278(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223873c
	if (ctx.cr6.eq) goto loc_8223873C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822364c0
	ctx.lr = 0x82238730;
	sub_822364C0(ctx, base);
loc_82238730:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223873C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82238764
	if (ctx.cr6.eq) goto loc_82238764;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236190
	ctx.lr = 0x82238758;
	sub_82236190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82238768
	if (!ctx.cr6.eq) goto loc_82238768;
loc_82238764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82238768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822386A0) {
	__imp__sub_822386A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82238778;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822387a4
	if (ctx.cr6.eq) goto loc_822387A4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822387a4
	if (ctx.cr6.eq) goto loc_822387A4;
	// li r4,5000
	ctx.r4.s64 = 5000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822364c0
	ctx.lr = 0x822387A4;
	sub_822364C0(ctx, base);
loc_822387A4:
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822387f0
	if (ctx.cr6.eq) goto loc_822387F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// addi r10,r10,5560
	ctx.r10.s64 = ctx.r10.s64 + 5560;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822387f0
	if (!ctx.cr6.eq) goto loc_822387F0;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822388c4
	if (ctx.cr6.eq) goto loc_822388C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822363b0
	ctx.lr = 0x822387E8;
	sub_822363B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822387F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236450
	ctx.lr = 0x822387FC;
	sub_82236450(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8223884c
	if (ctx.cr6.lt) goto loc_8223884C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82236450
	ctx.lr = 0x82238828;
	sub_82236450(ctx, base);
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8223884c
	if (ctx.cr6.lt) goto loc_8223884C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82236450
	ctx.lr = 0x8223884C;
	sub_82236450(ctx, base);
loc_8223884C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x822388c4
	if (ctx.cr6.eq) goto loc_822388C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e2ec8
	ctx.lr = 0x8223886C;
	sub_821E2EC8(ctx, base);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822388b0
	if (ctx.cr6.lt) goto loc_822388B0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82236360
	ctx.lr = 0x82238890;
	sub_82236360(ctx, base);
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822388b0
	if (ctx.cr6.lt) goto loc_822388B0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82236360
	ctx.lr = 0x822388B0;
	sub_82236360(ctx, base);
loc_822388B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// bl 0x822401e8
	ctx.lr = 0x822388C4;
	sub_822401E8(ctx, base);
loc_822388C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238770) {
	__imp__sub_82238770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822388CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822388CC) {
	__imp__sub_822388CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822388D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822388D8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x822388E0;
	__savefpr_28(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lfs f29,7652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7652);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822b2498
	ctx.lr = 0x82238900;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82238908;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82238914;
	sub_822B1FB0(ctx, base);
	// fmuls f28,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// bl 0x822acb68
	ctx.lr = 0x8223891C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82238930
	if (!ctx.cr6.gt) goto loc_82238930;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8223892C;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_82238930:
	// bl 0x822acb68
	ctx.lr = 0x82238934;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// ble cr6,0x822389b0
	if (!ctx.cr6.gt) goto loc_822389B0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b2288
	ctx.lr = 0x82238944;
	sub_822B2288(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5764
	ctx.r3.s64 = ctx.r11.s64 + -5764;
	// bl 0x822e8058
	ctx.lr = 0x82238958;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223896c
	if (!ctx.cr6.eq) goto loc_8223896C;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// ori r27,r27,7932
	ctx.r27.u64 = ctx.r27.u64 | 7932;
	// b 0x822389b0
	goto loc_822389B0;
loc_8223896C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,13600
	ctx.r29.s64 = ctx.r11.s64 + 13600;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8223897C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82238988;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822389a8
	if (ctx.cr6.eq) goto loc_822389A8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8223897c
	if (ctx.cr6.lt) goto loc_8223897C;
	// b 0x822389b0
	goto loc_822389B0;
loc_822389A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r27,r11,r30
	ctx.r27.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
loc_822389B0:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-18804
	ctx.r28.s64 = ctx.r11.s64 + -18804;
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822389d4
	if (!ctx.cr6.eq) goto loc_822389D4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82238a3c
	goto loc_82238A3C;
loc_822389D4:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// li r9,256
	ctx.r9.s64 = 256;
	// fmuls f10,f29,f29
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,16392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16392, temp.u32);
	// stw r11,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r11.u32);
	// stfs f13,16396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16396, temp.u32);
	// stw r27,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r27.u32);
	// stfs f12,16400(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16400, temp.u32);
	// stw r10,16432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16432, ctx.r10.u32);
	// stfs f30,16404(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16404, temp.u32);
	// stw r9,16436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16436, ctx.r9.u32);
	// stfs f30,16408(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16408, temp.u32);
	// stw r8,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r8.u32);
	// stfs f31,16416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16416, temp.u32);
	// stfs f11,16420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
	// stfs f10,16424(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// bl 0x822349f8
	ctx.lr = 0x82238A38;
	sub_822349F8(ctx, base);
	// lwz r31,16440(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
loc_82238A3C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82238a6c
	if (ctx.cr6.eq) goto loc_82238A6C;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r6,r8,18680
	ctx.r6.s64 = ctx.r8.s64 + 18680;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b7458
	ctx.lr = 0x82238A6C;
	sub_821B7458(ctx, base);
loc_82238A6C:
	// bl 0x822ad190
	ctx.lr = 0x82238A70;
	sub_822AD190(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82238ad4
	if (ctx.cr6.eq) goto loc_82238AD4;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// li r29,136
	ctx.r29.s64 = 136;
loc_82238A80:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// beq cr6,0x82238aa0
	if (ctx.cr6.eq) goto loc_82238AA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x822d4918
	ctx.lr = 0x82238A98;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f1.f64);
	// bgt cr6,0x82238ac8
	if (ctx.cr6.gt) goto loc_82238AC8;
loc_82238AA0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238ac8
	if (ctx.cr6.eq) goto loc_82238AC8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r11,r29
	ctx.r3.s32 = ctx.r11.s32 / ctx.r29.s32;
	// bl 0x822ace70
	ctx.lr = 0x82238AC4;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82238AC8;
	sub_822AD208(ctx, base);
loc_82238AC8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82238a80
	if (!ctx.cr0.eq) goto loc_82238A80;
loc_82238AD4:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x82238AE0;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822388D0) {
	__imp__sub_822388D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82238AE4) {
	__imp__sub_82238AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238AE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822388d0
	sub_822388D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238AE8) {
	__imp__sub_82238AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238AF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822388d0
	sub_822388D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238AF0) {
	__imp__sub_82238AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82238B00;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82238b30
	if (ctx.cr6.eq) goto loc_82238B30;
	// lwz r23,48(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// b 0x82238b34
	goto loc_82238B34;
loc_82238B30:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_82238B34:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82238b84
	if (!ctx.cr6.eq) goto loc_82238B84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f0,3628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3628);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f2,-5748(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5748);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82234bd8
	ctx.lr = 0x82238B80;
	sub_82234BD8(ctx, base);
	// b 0x82238b94
	goto loc_82238B94;
loc_82238B84:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234cb0
	ctx.lr = 0x82238B94;
	sub_82234CB0(ctx, base);
loc_82238B94:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subf r9,r31,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r31.s64;
	// addi r6,r10,18680
	ctx.r6.s64 = ctx.r10.s64 + 18680;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7458
	ctx.lr = 0x82238BB8;
	sub_821B7458(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82238BC8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82238bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82238BC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,1364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1364);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// ori r22,r8,21
	ctx.r22.u64 = ctx.r8.u64 | 21;
	// lfs f0,-5752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5752);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lfs f13,-5756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5756);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ble cr6,0x82238d38
	if (!ctx.cr6.gt) goto loc_82238D38;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,24524
	ctx.r28.s64 = ctx.r11.s64 + 24524;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82238C24:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238d9c
	if (ctx.cr6.eq) goto loc_82238D9C;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f13,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f9
	ctx.cr6.compare(ctx.f3.f64, ctx.f9.f64);
	// bgt cr6,0x82238cb0
	if (ctx.cr6.gt) goto loc_82238CB0;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x82238cb0
	if (ctx.cr6.gt) goto loc_82238CB0;
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82238da8
	if (!ctx.cr6.gt) goto loc_82238DA8;
loc_82238CB0:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82238cfc
	if (!ctx.cr6.gt) goto loc_82238CFC;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r21,32
	ctx.r10.s64 = ctx.r21.s64 + 32;
loc_82238CCC:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x82238d9c
	if (ctx.cr6.gt) goto loc_82238D9C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82238ccc
	if (ctx.cr6.lt) goto loc_82238CCC;
loc_82238CFC:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r8,2047
	ctx.r8.s64 = 2047;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82342160
	ctx.lr = 0x82238D1C;
	sub_82342160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82238da8
	if (ctx.cr6.eq) goto loc_82238DA8;
loc_82238D28:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82238c24
	if (ctx.cr6.lt) goto loc_82238C24;
loc_82238D38:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82238d8c
	if (!ctx.cr6.gt) goto loc_82238D8C;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_82238D48:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,2047
	ctx.r8.s64 = 2047;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82342160
	ctx.lr = 0x82238D70;
	sub_82342160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82238db8
	if (ctx.cr6.eq) goto loc_82238DB8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82238d48
	if (ctx.cr6.lt) goto loc_82238D48;
loc_82238D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82238D9C:
	// stwu r30,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r25.u32 = ea;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x82238d28
	goto loc_82238D28;
loc_82238DA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82238DB8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238AF8) {
	__imp__sub_82238AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82238DD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,24524
	ctx.r9.s64 = ctx.r10.s64 + 24524;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-14880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14880);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82238af8
	ctx.lr = 0x82238E14;
	sub_82238AF8(ctx, base);
	// lis r27,-32032
	ctx.r27.s64 = -2099249152;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-5892(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5892);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82238e78
	if (!ctx.cr6.gt) goto loc_82238E78;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82238eb0
	if (!ctx.cr6.gt) goto loc_82238EB0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
	// b 0x82238e4c
	goto loc_82238E4C;
loc_82238E48:
	// lwz r11,-5892(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5892);
loc_82238E4C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82238eb0
	if (!ctx.cr6.lt) goto loc_82238EB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82235a10
	ctx.lr = 0x82238E64;
	sub_82235A10(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82238e48
	if (ctx.cr6.lt) goto loc_82238E48;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82238E78:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82238eac
	if (!ctx.cr6.eq) goto loc_82238EAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-2280
	ctx.r5.s64 = ctx.r10.s64 + -2280;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,1420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f35e0
	ctx.lr = 0x82238EA4;
	sub_821F35E0(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82238EAC:
	// bl 0x82235a10
	ctx.lr = 0x82238EB0;
	sub_82235A10(ctx, base);
loc_82238EB0:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238DD0) {
	__imp__sub_82238DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238EB8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lis r7,-32017
	ctx.r7.s64 = -2098266112;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r10,24524
	ctx.r9.s64 = ctx.r10.s64 + 24524;
	// lfs f1,1420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r7,-30464
	ctx.r4.s64 = ctx.r7.s64 + -30464;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,-2
	ctx.r6.s64 = -2;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82238af8
	ctx.lr = 0x82238EF8;
	sub_82238AF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82238EB8) {
	__imp__sub_82238EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82238F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82238F10;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32021
	ctx.r22.s64 = -2098528256;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// lwz r3,-19068(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19068);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223938c
	if (ctx.cr6.eq) goto loc_8223938C;
	// lis r9,-32017
	ctx.r9.s64 = -2098266112;
	// lis r8,-32017
	ctx.r8.s64 = -2098266112;
	// lis r30,-32017
	ctx.r30.s64 = -2098266112;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r31,r9,-28888
	ctx.r31.s64 = ctx.r9.s64 + -28888;
	// addi r23,r8,-28900
	ctx.r23.s64 = ctx.r8.s64 + -28900;
	// beq cr6,0x82238fb8
	if (ctx.cr6.eq) goto loc_82238FB8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82238fb8
	if (ctx.cr6.eq) goto loc_82238FB8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82238fb8
	if (ctx.cr6.eq) goto loc_82238FB8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82238f94
	if (!ctx.cr6.eq) goto loc_82238F94;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-28904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28904);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82238fd8
	goto loc_82238FD8;
loc_82238F94:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82238fdc
	if (ctx.cr6.eq) goto loc_82238FDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f80
	ctx.lr = 0x82238FA4;
	sub_822E1F80(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-5736
	ctx.r4.s64 = ctx.r11.s64 + -5736;
	// bl 0x82280900
	ctx.lr = 0x82238FB4;
	sub_82280900(ctx, base);
	// b 0x82238fdc
	goto loc_82238FDC;
loc_82238FB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-28904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28904);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f0,4(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
loc_82238FD8:
	// stw r10,-28904(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28904, ctx.r10.u32);
loc_82238FDC:
	// lwz r11,-28904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28904);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82239398
	if (!ctx.cr6.eq) goto loc_82239398;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r30,r11,18560
	ctx.r30.s64 = ctx.r11.s64 + 18560;
	// addi r29,r9,24524
	ctx.r29.s64 = ctx.r9.s64 + 24524;
	// lfs f31,1420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1420);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,16512
	ctx.r4.s64 = ctx.r30.s64 + 16512;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-2
	ctx.r6.s64 = -2;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82238af8
	ctx.lr = 0x82239040;
	sub_82238AF8(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r30,16512
	ctx.r4.s64 = ctx.r30.s64 + 16512;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-2
	ctx.r6.s64 = -2;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82238af8
	ctx.lr = 0x82239070;
	sub_82238AF8(ctx, base);
	// addi r5,r30,17032
	ctx.r5.s64 = ctx.r30.s64 + 17032;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// bne cr6,0x822390b4
	if (!ctx.cr6.eq) goto loc_822390B4;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bne cr6,0x822390b4
	if (!ctx.cr6.eq) goto loc_822390B4;
	// lfs f10,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// beq cr6,0x82239398
	if (ctx.cr6.eq) goto loc_82239398;
loc_822390B4:
	// lwz r11,17028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822390f8
	if (!ctx.cr6.eq) goto loc_822390F8;
	// addi r11,r30,17032
	ctx.r11.s64 = ctx.r30.s64 + 17032;
	// addi r3,r30,17032
	ctx.r3.s64 = ctx.r30.s64 + 17032;
	// stw r11,17028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17028, ctx.r11.u32);
	// bl 0x821c6ec8
	ctx.lr = 0x822390D0;
	sub_821C6EC8(ctx, base);
	// lwz r11,17028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 980, ctx.r10.u32);
	// bl 0x821c8948
	ctx.lr = 0x822390E8;
	sub_821C8948(ctx, base);
	// lfs f13,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
loc_822390F8:
	// lwz r11,-19068(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19068);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82239324
	if (ctx.cr6.eq) goto loc_82239324;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r11,26516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26516);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82239278
	if (!ctx.cr6.eq) goto loc_82239278;
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r11,-28912
	ctx.r29.s64 = ctx.r11.s64 + -28912;
	// lis r28,-32017
	ctx.r28.s64 = -2098266112;
	// lwz r11,-6084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6084);
	// lfs f31,17968(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17968);
	ctx.f31.f64 = double(temp.f32);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822391a0
	if (!ctx.cr6.eq) goto loc_822391A0;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,-6184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6184);
	// lfs f13,-5744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsel f8,f10,f31,f0
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fsel f0,f9,f13,f8
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// stfs f0,-28916(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + -28916, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x82239184;
	sub_822D4AC8(ctx, base);
	// lfs f7,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f7
	ctx.f12.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_822391A0:
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r31,r11,-2136
	ctx.r31.s64 = ctx.r11.s64 + -2136;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f2d08
	ctx.lr = 0x822391CC;
	sub_821F2D08(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f12,-28916(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -28916);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsubs f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fadds f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fsubs f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f11,f1,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82239240;
	sub_821F2D08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,-28916(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -28916);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821cd218
	ctx.lr = 0x82239250;
	sub_821CD218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82239398
	if (ctx.cr6.eq) goto loc_82239398;
	// lwz r3,17028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// bl 0x821c6fc0
	ctx.lr = 0x82239260;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223929c
	if (!ctx.cr6.eq) goto loc_8223929C;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82239278:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821c8948
	ctx.lr = 0x82239280;
	sub_821C8948(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82239398
	if (ctx.cr6.eq) goto loc_82239398;
	// lwz r3,17028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// bl 0x821c6fc0
	ctx.lr = 0x82239290;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239398
	if (ctx.cr6.eq) goto loc_82239398;
loc_8223929C:
	// lwz r7,16388(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82239324
	if (ctx.cr6.eq) goto loc_82239324;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lfs f31,12168(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,-2072
	ctx.r27.s64 = ctx.r11.s64 + -2072;
	// addi r26,r10,13712
	ctx.r26.s64 = ctx.r10.s64 + 13712;
	// addi r25,r9,9624
	ctx.r25.s64 = ctx.r9.s64 + 9624;
	// addi r24,r8,-18804
	ctx.r24.s64 = ctx.r8.s64 + -18804;
loc_822392D8:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,2888(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2888);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82239314
	if (!ctx.cr6.eq) goto loc_82239314;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822392FC;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x821fe7d8
	ctx.lr = 0x82239310;
	sub_821FE7D8(ctx, base);
	// lwz r7,16388(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
loc_82239314:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,136
	ctx.r28.s64 = ctx.r28.s64 + 136;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822392d8
	if (ctx.cr6.lt) goto loc_822392D8;
loc_82239324:
	// lwz r11,-19068(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19068);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82239358
	if (ctx.cr6.eq) goto loc_82239358;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82239358
	if (ctx.cr6.eq) goto loc_82239358;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,17028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821c80f0
	ctx.lr = 0x8223934C;
	sub_821C80F0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82239358:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,17028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821c99e0
	ctx.lr = 0x82239370;
	sub_821C99E0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,17028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17028);
	// bl 0x821c80f0
	ctx.lr = 0x82239380;
	sub_821C80F0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8223938C:
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-28904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28904, ctx.r27.u32);
loc_82239398:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82238F08) {
	__imp__sub_82238F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822393A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822393A4) {
	__imp__sub_822393A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822393A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x822393B0;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r18,r11,9624
	ctx.r18.s64 = ctx.r11.s64 + 9624;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822395fc
	if (ctx.cr6.eq) goto loc_822395FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821201f0
	ctx.lr = 0x822393DC;
	sub_821201F0(ctx, base);
	// lis r20,-32032
	ctx.r20.s64 = -2099249152;
	// lwz r11,-6076(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6076);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82239550
	if (ctx.cr6.eq) goto loc_82239550;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r19,r11,18560
	ctx.r19.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239550
	if (ctx.cr6.eq) goto loc_82239550;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lfs f31,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,-32021
	ctx.r25.s64 = -2098528256;
	// addi r21,r11,-2280
	ctx.r21.s64 = ctx.r11.s64 + -2280;
	// addi r23,r10,-2072
	ctx.r23.s64 = ctx.r10.s64 + -2072;
	// addi r22,r9,13712
	ctx.r22.s64 = ctx.r9.s64 + 13712;
	// addi r26,r8,-18804
	ctx.r26.s64 = ctx.r8.s64 + -18804;
loc_82239440:
	// lwz r11,-14880(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14880);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r29,r27,r10
	ctx.r29.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82239488
	if (ctx.cr6.eq) goto loc_82239488;
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f7
	ctx.cr6.compare(ctx.f5.f64, ctx.f7.f64);
	// bgt cr6,0x8223953c
	if (ctx.cr6.gt) goto loc_8223953C;
loc_82239488:
	// lwz r11,-6076(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6076);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822394a0
	if (ctx.cr6.eq) goto loc_822394A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822394c0
	if (!ctx.cr6.eq) goto loc_822394C0;
loc_822394A0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822394AC;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x821fe7d8
	ctx.lr = 0x822394C0;
	sub_821FE7D8(ctx, base);
loc_822394C0:
	// lwz r10,-6076(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6076);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// adde r11,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822394f0
	if (ctx.cr6.eq) goto loc_822394F0;
	// lhz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 56);
	// b 0x822394f8
	goto loc_822394F8;
loc_822394F0:
	// lhz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 100);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
loc_822394F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82239514
	if (!ctx.cr6.eq) goto loc_82239514;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82235060
	ctx.lr = 0x82239510;
	sub_82235060(ctx, base);
	// b 0x8223953c
	goto loc_8223953C;
loc_82239514:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223953c
	if (ctx.cr6.eq) goto loc_8223953C;
loc_82239520:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82235150
	ctx.lr = 0x82239530;
	sub_82235150(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82239520
	if (ctx.cr6.lt) goto loc_82239520;
loc_8223953C:
	// lwz r11,16388(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16388);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,136
	ctx.r27.s64 = ctx.r27.s64 + 136;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82239440
	if (ctx.cr6.lt) goto loc_82239440;
loc_82239550:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5892);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223956c
	if (ctx.cr6.eq) goto loc_8223956C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82238dd0
	ctx.lr = 0x8223956C;
	sub_82238DD0(ctx, base);
loc_8223956C:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5988);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82239588
	if (ctx.cr6.eq) goto loc_82239588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235c20
	ctx.lr = 0x82239588;
	sub_82235C20(ctx, base);
loc_82239588:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6072);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822395a4
	if (ctx.cr6.eq) goto loc_822395A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235c98
	ctx.lr = 0x822395A4;
	sub_82235C98(ctx, base);
loc_822395A4:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5876);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822395c0
	if (ctx.cr6.eq) goto loc_822395C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235d28
	ctx.lr = 0x822395C0;
	sub_82235D28(ctx, base);
loc_822395C0:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-19068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19068);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822395e4
	if (ctx.cr6.eq) goto loc_822395E4;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82238f08
	ctx.lr = 0x822395E4;
	sub_82238F08(ctx, base);
loc_822395E4:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11248);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822395fc
	if (ctx.cr6.eq) goto loc_822395FC;
	// bl 0x82238060
	ctx.lr = 0x822395FC;
	sub_82238060(ctx, base);
loc_822395FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822393A8) {
	__imp__sub_822393A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223960C) {
	__imp__sub_8223960C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fabs f4,f6
	ctx.f4.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f1,f8,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fsel f10,f1,f13,f0
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f9,f12,f10,f0
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fsel f8,f11,f9,f0
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bne cr6,0x8223969c
	if (!ctx.cr6.eq) goto loc_8223969C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223969C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82239610) {
	__imp__sub_82239610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822396A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822396A4) {
	__imp__sub_822396A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822396A8) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82239758
	if (ctx.cr6.eq) goto loc_82239758;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82239758
	if (ctx.cr6.eq) goto loc_82239758;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x822396ec
	if (!ctx.cr6.eq) goto loc_822396EC;
	// lwz r4,272(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// bl 0x822401c8
	ctx.lr = 0x822396EC;
	sub_822401C8(ctx, base);
loc_822396EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82239710
	if (!ctx.cr6.eq) goto loc_82239710;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246238
	ctx.lr = 0x82239704;
	sub_82246238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822397b4
	if (ctx.cr6.eq) goto loc_822397B4;
loc_82239710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x82239718;
	sub_82229B60(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,266(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// bl 0x82229da8
	ctx.lr = 0x82239730;
	sub_82229DA8(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lbz r7,291(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r9,8272
	ctx.r11.s64 = ctx.r9.s64 + 8272;
	// mulli r6,r7,44
	ctx.r6.s64 = ctx.r7.s64 * 44;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822397b4
	if (ctx.cr6.eq) goto loc_822397B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x822397a4
	goto loc_822397A4;
loc_82239758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x82239760;
	sub_82229B60(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,264(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x82239778;
	sub_82229DA8(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lbz r6,291(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r9,8272
	ctx.r11.s64 = ctx.r9.s64 + 8272;
	// mulli r5,r6,44
	ctx.r5.s64 = ctx.r6.s64 * 44;
	// stb r8,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r8.u8);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822397b4
	if (ctx.cr6.eq) goto loc_822397B4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_822397A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822397B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822397B4:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-20992
	ctx.r3.s64 = ctx.r3.s64 + -20992;
	// bl 0x821e2e18
	ctx.lr = 0x822397C8;
	sub_821E2E18(ctx, base);
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

PPC_WEAK_FUNC(sub_822396A8) {
	__imp__sub_822396A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822397E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822397E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x822397F8;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223980c
	if (!ctx.cr6.eq) goto loc_8223980C;
loc_82239800:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223980C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r29,r11,44544
	ctx.r29.u64 = ctx.r11.u64 | 44544;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x821e2e18
	ctx.lr = 0x82239824;
	sub_821E2E18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348ac0
	ctx.lr = 0x8223982C;
	sub_82348AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223984c
	if (ctx.cr6.eq) goto loc_8223984C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822396a8
	ctx.lr = 0x82239840;
	sub_822396A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223984C:
	// lbz r11,290(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 290);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// beq cr6,0x82239894
	if (ctx.cr6.eq) goto loc_82239894;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82239938
	if (!ctx.cr6.eq) goto loc_82239938;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,290(r30)
	PPC_STORE_U8(ctx.r30.u32 + 290, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82239894:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82239938
	if (!ctx.cr6.eq) goto loc_82239938;
	// rlwinm r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82239938
	if (!ctx.cr6.eq) goto loc_82239938;
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x822398c4
	if (ctx.cr6.lt) goto loc_822398C4;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// blt cr6,0x82239938
	if (ctx.cr6.lt) goto loc_82239938;
loc_822398C4:
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82239800
	if (ctx.cr6.eq) goto loc_82239800;
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82239800
	if (ctx.cr6.eq) goto loc_82239800;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8223990c
	if (!ctx.cr6.eq) goto loc_8223990C;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82239900;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82239800
	if (!ctx.cr6.eq) goto loc_82239800;
loc_8223990C:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223991C;
	sub_821E2E18(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// ori r7,r9,44548
	ctx.r7.u64 = ctx.r9.u64 | 44548;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u32);
loc_82239938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822397E0) {
	__imp__sub_822397E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82239944) {
	__imp__sub_82239944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239948) {
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
	// bl 0x822ac8c0
	ctx.lr = 0x82239964;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822399d0
	if (ctx.cr6.eq) goto loc_822399D0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r9,r10,44544
	ctx.r9.u64 = ctx.r10.u64 | 44544;
	// lhzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822399d0
	if (ctx.cr6.eq) goto loc_822399D0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// ori r6,r9,44548
	ctx.r6.u64 = ctx.r9.u64 | 44548;
	// addi r5,r7,9624
	ctx.r5.s64 = ctx.r7.s64 + 9624;
	// lwz r9,11260(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11260);
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822399d0
	if (ctx.cr6.lt) goto loc_822399D0;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x822396a8
	ctx.lr = 0x822399D0;
	sub_822396A8(ctx, base);
loc_822399D0:
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

PPC_WEAK_FUNC(sub_82239948) {
	__imp__sub_82239948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822399E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822399E4) {
	__imp__sub_822399E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822399E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822399F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,44372
	ctx.r9.u64 = ctx.r10.u64 | 44372;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r8,700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r7.u32);
	// lwz r6,264(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r4,r5,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82239a98
	if (ctx.cr6.eq) goto loc_82239A98;
	// ori r9,r10,44380
	ctx.r9.u64 = ctx.r10.u64 | 44380;
	// lwzx r8,r6,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82239a68
	if (ctx.cr6.eq) goto loc_82239A68;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44376
	ctx.r9.u64 = ctx.r10.u64 | 44376;
	// lwzx r8,r6,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82239a68
	if (!ctx.cr6.eq) goto loc_82239A68;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
loc_82239A68:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-20992
	ctx.r3.s64 = ctx.r3.s64 + -20992;
	// bl 0x821e2e18
	ctx.lr = 0x82239A7C;
	sub_821E2E18(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,44552
	ctx.r8.u64 = ctx.r10.u64 | 44552;
	// stwx r9,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82239A98:
	// ori r30,r10,44544
	ctx.r30.u64 = ctx.r10.u64 | 44544;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r28,r9,44376
	ctx.r28.u64 = ctx.r9.u64 | 44376;
	// lhzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82239adc
	if (ctx.cr6.eq) goto loc_82239ADC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44380
	ctx.r9.u64 = ctx.r10.u64 | 44380;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82239adc
	if (ctx.cr6.eq) goto loc_82239ADC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82239b2c
	if (ctx.cr6.eq) goto loc_82239B2C;
loc_82239ADC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,44384
	ctx.r29.u64 = ctx.r10.u64 | 44384;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r8,r9,0,26,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x38;
	// rlwinm r8,r8,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82239b00
	if (ctx.cr6.eq) goto loc_82239B00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822397e0
	ctx.lr = 0x82239B00;
	sub_822397E0(ctx, base);
loc_82239B00:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82239b44
	if (!ctx.cr6.eq) goto loc_82239B44;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82239b44
	if (!ctx.cr6.eq) goto loc_82239B44;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82239b74
	if (ctx.cr6.eq) goto loc_82239B74;
loc_82239B2C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82239B44:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82239b60
	if (ctx.cr6.eq) goto loc_82239B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239948
	ctx.lr = 0x82239B60;
	sub_82239948(ctx, base);
loc_82239B60:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,44552
	ctx.r8.u64 = ctx.r11.u64 | 44552;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82239B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822399E8) {
	__imp__sub_822399E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82239B7C) {
	__imp__sub_82239B7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82239B80) {
	__imp__sub_82239B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82239B9C) {
	__imp__sub_82239B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239BA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82239bc0
	if (ctx.cr6.eq) goto loc_82239BC0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82239bc0
	if (ctx.cr6.eq) goto loc_82239BC0;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82239BC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82239BA0) {
	__imp__sub_82239BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239BC8) {
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
	// lhz r3,124(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x82239BEC;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82239c2c
	if (!ctx.cr6.eq) goto loc_82239C2C;
	// lhz r31,124(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820da5b0
	ctx.lr = 0x82239C08;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82239c2c
	if (ctx.cr6.eq) goto loc_82239C2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f4e0
	ctx.lr = 0x82239C1C;
	sub_8231F4E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82239c30
	if (!ctx.cr6.eq) goto loc_82239C30;
loc_82239C2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82239C30:
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

PPC_WEAK_FUNC(sub_82239BC8) {
	__imp__sub_82239BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82239C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82239C50;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de014
	ctx.lr = 0x82239C58;
	__savefpr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8768(r1)
	ea = -8768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32021
	ctx.r25.s64 = -2098528256;
	// lwz r16,264(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r27,-32032
	ctx.r27.s64 = -2099249152;
	// lis r24,-32032
	ctx.r24.s64 = -2099249152;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r11,-14936(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14936);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f27,1420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1420);
	ctx.f27.f64 = double(temp.f32);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// lwz r10,-6068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6068);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,-6096(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6096);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lfs f13,-5276(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5276);
	ctx.f13.f64 = double(temp.f32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r21,0
	ctx.r21.s64 = 0;
	// fsubs f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fsel f0,f12,f27,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f27.f64 : ctx.f0.f64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f10,f0,f11
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f0,f8,f0,f9
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821e6bc0
	ctx.lr = 0x82239CE4;
	sub_821E6BC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82321048
	ctx.lr = 0x82239CF8;
	sub_82321048(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f7,28(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// addi r11,r7,-27184
	ctx.r11.s64 = ctx.r7.s64 + -27184;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f0,-27184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27184);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f5,32(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f3,36(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x82239D60;
	sub_8227BFF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,692(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 692);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82332af8
	ctx.lr = 0x82239D70;
	sub_82332AF8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r15,r11,-25976
	ctx.r15.s64 = ctx.r11.s64 + -25976;
	// lfs f23,20560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20560);
	ctx.f23.f64 = double(temp.f32);
	// ble cr6,0x8223a10c
	if (!ctx.cr6.gt) goto loc_8223A10C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f24,7652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7652);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lfs f28,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r14,-4
	ctx.r30.s64 = ctx.r14.s64 + -4;
	// lfs f26,3096(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3096);
	ctx.f26.f64 = double(temp.f32);
	// addi r26,r1,352
	ctx.r26.s64 = ctx.r1.s64 + 352;
	// lfs f29,13216(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13216);
	ctx.f29.f64 = double(temp.f32);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// lfs f25,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// lis r19,-31834
	ctx.r19.s64 = -2086273024;
	// lis r20,-32032
	ctx.r20.s64 = -2099249152;
	// addi r23,r11,26552
	ctx.r23.s64 = ctx.r11.s64 + 26552;
loc_82239DD8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8223a100
	if (ctx.cr6.eq) goto loc_8223A100;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82239e20
	if (ctx.cr6.eq) goto loc_82239E20;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82239e20
	if (!ctx.cr6.eq) goto loc_82239E20;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a100
	if (ctx.cr6.eq) goto loc_8223A100;
	// lbz r11,5036(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a100
	if (ctx.cr6.eq) goto loc_8223A100;
loc_82239E20:
	// lhz r8,270(r15)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r15.u32 + 270);
	// lhz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82239e78
	if (!ctx.cr6.eq) goto loc_82239E78;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82239610
	ctx.lr = 0x82239E3C;
	sub_82239610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a100
	if (ctx.cr6.eq) goto loc_8223A100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233cbf8
	ctx.lr = 0x82239E54;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a100
	if (ctx.cr6.eq) goto loc_8223A100;
	// lwz r11,-6068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6068);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// b 0x8223a0fc
	goto loc_8223A0FC;
loc_82239E78:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82239f2c
	if (!ctx.cr6.eq) goto loc_82239F2C;
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82239eac
	if (ctx.cr6.eq) goto loc_82239EAC;
	// lwz r11,-6008(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6008);
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d4918
	ctx.lr = 0x82239EA0;
	sub_822D4918(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8223a100
	if (ctx.cr6.gt) goto loc_8223A100;
loc_82239EAC:
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82239EB4;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82239ef4
	if (!ctx.cr6.eq) goto loc_82239EF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f6f8
	ctx.lr = 0x82239ED0;
	sub_8231F6F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a100
	if (ctx.cr6.eq) goto loc_8223A100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x82239bc8
	ctx.lr = 0x82239EE4;
	sub_82239BC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82239f00
	if (!ctx.cr6.eq) goto loc_82239F00;
	// b 0x8223a100
	goto loc_8223A100;
loc_82239EF4:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223a100
	if (!ctx.cr6.eq) goto loc_8223A100;
loc_82239F00:
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16960(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16960);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f8,f12,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bgt cr6,0x8223a100
	if (ctx.cr6.gt) goto loc_8223A100;
loc_82239F2C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82239f60
	if (ctx.cr6.eq) goto loc_82239F60;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82239f58
	if (ctx.cr6.eq) goto loc_82239F58;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82239f50
	if (ctx.cr6.eq) goto loc_82239F50;
	// lwz r11,-6068(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6068);
	// b 0x82239f64
	goto loc_82239F64;
loc_82239F50:
	// fmr f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f26.f64;
	// b 0x82239f68
	goto loc_82239F68;
loc_82239F58:
	// lwz r11,-6096(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6096);
	// b 0x82239f64
	goto loc_82239F64;
loc_82239F60:
	// lwz r11,-14936(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14936);
loc_82239F64:
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82239F68:
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f31,f3
	ctx.f31.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f2,f31
	ctx.f2.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// fsel f1,f2,f30,f31
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// fdivs f12,f30,f1
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// bgt cr6,0x8223a100
	if (ctx.cr6.gt) goto loc_8223A100;
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lhz r9,268(r15)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r15.u32 + 268);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f8,f12,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// bne cr6,0x8223a040
	if (!ctx.cr6.eq) goto loc_8223A040;
	// lbz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a040
	if (ctx.cr6.eq) goto loc_8223A040;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x8223a100
	if (ctx.cr6.lt) goto loc_8223A100;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8223a040
	if (!ctx.cr6.gt) goto loc_8223A040;
	// lfs f13,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f10,f11,f13
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsel f6,f7,f9,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// fdivs f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f31.f64));
	// fmadds f4,f5,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f30.f64));
	// fdivs f3,f30,f4
	ctx.f3.f64 = double(float(ctx.f30.f64 / ctx.f4.f64));
	// fcmpu cr6,f12,f3
	ctx.cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// blt cr6,0x8223a100
	if (ctx.cr6.lt) goto loc_8223A100;
loc_8223A040:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f13,20476(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 20476);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f0,f28,f30
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f30.f64)));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8223a068
	if (!ctx.cr6.eq) goto loc_8223A068;
	// fsubs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8223A068:
	// lhz r9,268(r15)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r15.u32 + 268);
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8223a088
	if (!ctx.cr6.eq) goto loc_8223A088;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20476(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 20476);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8223A088:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8223a0a0
	if (!ctx.cr6.eq) goto loc_8223A0A0;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8223A0A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8223a0b8
	if (!ctx.cr6.eq) goto loc_8223A0B8;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8223A0B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8223a0ec
	if (!ctx.cr6.eq) goto loc_8223A0EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f6f8
	ctx.lr = 0x8223A0D4;
	sub_8231F6F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223a0ec
	if (!ctx.cr6.eq) goto loc_8223A0EC;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// fadds f13,f0,f23
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8223A0EC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsu f13,8(r30)
	ea = 8 + ctx.r30.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
loc_8223A0FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8223A100:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82239dd8
	if (!ctx.cr0.eq) goto loc_82239DD8;
loc_8223A10C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-25728
	ctx.r6.s64 = ctx.r11.s64 + -25728;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823def18
	ctx.lr = 0x8223A124;
	sub_823DEF18(ctx, base);
	// subf. r29,r21,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r21.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// ble 0x8223a400
	if (!ctx.cr0.gt) goto loc_8223A400;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r14,4
	ctx.r30.s64 = ctx.r14.s64 + 4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r27,r11,-9672
	ctx.r27.s64 = ctx.r11.s64 + -9672;
loc_8223A140:
	// lwz r31,-4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lhz r10,270(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 270);
	// lhz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223a3f4
	if (ctx.cr6.eq) goto loc_8223A3F4;
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8223a224
	if (!ctx.cr6.eq) goto loc_8223A224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8223A180;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a3c0
	if (ctx.cr6.eq) goto loc_8223A3C0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82255398
	ctx.lr = 0x8223A190;
	sub_82255398(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8223A19C;
	sub_822DA650(ctx, base);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f5,f13,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f9,f4,f13,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f8,f3,f13,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f11,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f2,f12,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f1,f12,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f11,f12,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f7,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f5,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f3,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8223a3c0
	goto loc_8223A3C0;
loc_8223A224:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8223a278
	if (!ctx.cr6.eq) goto loc_8223A278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8223A234;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a3c0
	if (ctx.cr6.eq) goto loc_8223A3C0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x822eee00
	ctx.lr = 0x8223A244;
	sub_822EEE00(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8223a3c0
	goto loc_8223A3C0;
loc_8223A278:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8223a294
	if (!ctx.cr6.eq) goto loc_8223A294;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,184(r15)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r15.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f0a8
	ctx.lr = 0x8223A290;
	sub_8222F0A8(ctx, base);
	// b 0x8223a3c0
	goto loc_8223A3C0;
loc_8223A294:
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8223a348
	if (!ctx.cr6.eq) goto loc_8223A348;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// bl 0x8222e320
	ctx.lr = 0x8223A2A8;
	sub_8222E320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a3c0
	if (ctx.cr6.eq) goto loc_8223A3C0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8223A2C0;
	sub_822DA650(ctx, base);
	// lfs f0,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f12,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f5,f12,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f9,f4,f0,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f8,f3,f0,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f2,f13,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f1,f12,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f11,f12,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f7,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f5,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f3,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8223a3c0
	goto loc_8223A3C0;
loc_8223A348:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8223a3c0
	if (!ctx.cr6.eq) goto loc_8223A3C0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a3c0
	if (ctx.cr6.eq) goto loc_8223A3C0;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x8223A364;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8223a3c0
	if (!ctx.cr6.eq) goto loc_8223A3C0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8223a398
	if (ctx.cr6.eq) goto loc_8223A398;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8223a398
	if (ctx.cr6.eq) goto loc_8223A398;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8223a39c
	if (!ctx.cr6.eq) goto loc_8223A39C;
loc_8223A398:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8223A39C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a3c0
	if (ctx.cr6.eq) goto loc_8223A3C0;
	// lfs f0,208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8223A3C0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r8,17
	ctx.r8.s64 = 17;
	// lwz r6,256(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 256);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fe678
	ctx.lr = 0x8223A3DC;
	sub_821FE678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223a3f4
	if (!ctx.cr6.eq) goto loc_8223A3F4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// fadds f13,f0,f23
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8223A3F4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8223a140
	if (!ctx.cr0.eq) goto loc_8223A140;
loc_8223A400:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-25728
	ctx.r6.s64 = ctx.r11.s64 + -25728;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823def18
	ctx.lr = 0x8223A418;
	sub_823DEF18(ctx, base);
	// subf r3,r26,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r26.s64;
	// addi r1,r1,8768
	ctx.r1.s64 = ctx.r1.s64 + 8768;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de060
	ctx.lr = 0x8223A428;
	__restfpr_23(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82239C48) {
	__imp__sub_82239C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223A42C) {
	__imp__sub_8223A42C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A430) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r9,264(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lhz r10,126(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// ori r8,r11,44444
	ctx.r8.u64 = ctx.r11.u64 | 44444;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a594
	if (ctx.cr6.eq) goto loc_8223A594;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-624
	ctx.r31.s64 = ctx.r11.s64 + -624;
	// lwz r11,-356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a4e8
	if (ctx.cr6.eq) goto loc_8223A4E8;
	// lhz r3,212(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a4e8
	if (ctx.cr6.eq) goto loc_8223A4E8;
	// bl 0x822a13a0
	ctx.lr = 0x8223A498;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// bl 0x822e84f0
	ctx.lr = 0x8223A4A8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8223A4B4;
	sub_8233E7D8(ctx, base);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lhz r3,214(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x8223A4C0;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x8223A4C4;
	sub_82232100(ctx, base);
	// bl 0x82332af8
	ctx.lr = 0x8223A4C8;
	sub_82332AF8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-29844
	ctx.r3.s64 = ctx.r8.s64 + -29844;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822e84f0
	ctx.lr = 0x8223A4DC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// b 0x8223a5b0
	goto loc_8223A5B0;
loc_8223A4E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8223a560
	if (!ctx.cr6.eq) goto loc_8223A560;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lhz r3,716(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a554
	if (ctx.cr6.eq) goto loc_8223A554;
	// bl 0x822a13a0
	ctx.lr = 0x8223A508;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// bl 0x822e84f0
	ctx.lr = 0x8223A518;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8223A524;
	sub_8233E7D8(ctx, base);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lhz r3,718(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 718);
loc_8223A52C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a544
	if (ctx.cr6.eq) goto loc_8223A544;
	// bl 0x822a13a0
	ctx.lr = 0x8223A538;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// b 0x8223a5b0
	goto loc_8223A5B0;
loc_8223A544:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// b 0x8223a5b0
	goto loc_8223A5B0;
loc_8223A554:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// b 0x8223a5ac
	goto loc_8223A5AC;
loc_8223A560:
	// lhz r3,456(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a594
	if (ctx.cr6.eq) goto loc_8223A594;
	// bl 0x822a13a0
	ctx.lr = 0x8223A570;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// bl 0x822e84f0
	ctx.lr = 0x8223A580;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8223A58C;
	sub_8233E7D8(ctx, base);
	// lhz r3,458(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 458);
	// b 0x8223a52c
	goto loc_8223A52C;
loc_8223A594:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// addi r3,r10,-29844
	ctx.r3.s64 = ctx.r10.s64 + -29844;
	// bl 0x822e84f0
	ctx.lr = 0x8223A5A8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8223A5AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8223A5B0:
	// bl 0x8233e7d8
	ctx.lr = 0x8223A5B4;
	sub_8233E7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8223A430) {
	__imp__sub_8223A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223A5CC) {
	__imp__sub_8223A5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223A5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,132(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// subf r30,r5,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r5.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8223A60C;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x8223A618;
	sub_82332AF8(ctx, base);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8223a634
	if (!ctx.cr6.eq) goto loc_8223A634;
loc_8223A628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223A634:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8223A640;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223a628
	if (!ctx.cr6.eq) goto loc_8223A628;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223a670
	if (ctx.cr6.eq) goto loc_8223A670;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223a670
	if (ctx.cr6.eq) goto loc_8223A670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333d90
	ctx.lr = 0x8223A664;
	sub_82333D90(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x8223a674
	if (!ctx.cr6.lt) goto loc_8223A674;
loc_8223A670:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
loc_8223A674:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223A5D0) {
	__imp__sub_8223A5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223A67C) {
	__imp__sub_8223A67C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A680) {
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
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r9,364(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x8223A6B8;
	sub_82332AF8(ctx, base);
	// lwz r8,1388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223a6f4
	if (ctx.cr6.eq) goto loc_8223A6F4;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lhz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x8223A6EC;
	sub_82332AF8(ctx, base);
	// lwz r8,1396(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// stw r8,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r8.u32);
loc_8223A6F4:
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

PPC_WEAK_FUNC(sub_8223A680) {
	__imp__sub_8223A680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223A70C) {
	__imp__sub_8223A70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A710) {
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
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x8223A72C;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8223a750
	if (ctx.cr6.eq) goto loc_8223A750;
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
loc_8223A750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c4250
	ctx.lr = 0x8223A758;
	sub_821C4250(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_8223A710) {
	__imp__sub_8223A710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223A774) {
	__imp__sub_8223A774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A778) {
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
	// bl 0x820da5b0
	ctx.lr = 0x8223A798;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223a7d0
	if (!ctx.cr6.eq) goto loc_8223A7D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334738
	ctx.lr = 0x8223A7AC;
	sub_82334738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223a7d0
	if (!ctx.cr6.eq) goto loc_8223A7D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-5264
	ctx.r4.s64 = ctx.r11.s64 + -5264;
	// bl 0x82280c30
	ctx.lr = 0x8223A7C8;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223a7d4
	goto loc_8223A7D4;
loc_8223A7D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223A7D4:
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

PPC_WEAK_FUNC(sub_8223A778) {
	__imp__sub_8223A778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223A7EC) {
	__imp__sub_8223A7EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223A7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8223A7F8;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16544(r1)
	ea = -16544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,264(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 416, ctx.r28.u32);
	// stw r28,428(r27)
	PPC_STORE_U32(ctx.r27.u32 + 428, ctx.r28.u32);
	// lwz r31,424(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 424);
	// bl 0x82333f48
	ctx.lr = 0x8223A82C;
	sub_82333F48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223a840
	if (!ctx.cr6.eq) goto loc_8223A840;
	// stw r28,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r28.u32);
	// stw r28,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r28.u32);
loc_8223A840:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r23,2047
	ctx.r23.s64 = 2047;
	// stw r25,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r25.u32);
	// stw r23,424(r27)
	PPC_STORE_U32(ctx.r27.u32 + 424, ctx.r23.u32);
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223a430
	ctx.lr = 0x8223A86C;
	sub_8223A430(ctx, base);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223aad8
	if (!ctx.cr6.gt) goto loc_8223AAD8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// ori r9,r11,44372
	ctx.r9.u64 = ctx.r11.u64 | 44372;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// lwz r11,172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// rlwinm r8,r11,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// lbz r8,290(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 290);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223a8ec
	if (ctx.cr6.eq) goto loc_8223A8EC;
	// rlwinm r11,r11,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223aad8
	if (ctx.cr6.eq) goto loc_8223AAD8;
	// lwz r11,700(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 700);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223a680
	ctx.lr = 0x8223A8E4;
	sub_8223A680(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8223A8EC:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// lwz r11,504(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 504);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8223a92c
	if (ctx.cr6.lt) goto loc_8223A92C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x8223aad8
	if (ctx.cr6.lt) goto loc_8223AAD8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8223a92c
	if (ctx.cr6.lt) goto loc_8223A92C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x8223aad8
	if (ctx.cr6.lt) goto loc_8223AAD8;
loc_8223A92C:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223aad8
	if (!ctx.cr6.eq) goto loc_8223AAD8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,45004
	ctx.r11.u64 = ctx.r11.u64 | 45004;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223a97c
	if (ctx.cr6.eq) goto loc_8223A97C;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,45008
	ctx.r8.u64 = ctx.r9.u64 | 45008;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r7,416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 416, ctx.r7.u32);
	// lwz r6,264(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r23,424(r27)
	PPC_STORE_U32(ctx.r27.u32 + 424, ctx.r23.u32);
	// stw r28,428(r27)
	PPC_STORE_U32(ctx.r27.u32 + 428, ctx.r28.u32);
	// stw r5,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r5.u32);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8223A97C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239c48
	ctx.lr = 0x8223A98C;
	sub_82239C48(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223aad8
	if (!ctx.cr6.gt) goto loc_8223AAD8;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_8223A9A0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8223aa88
	if (ctx.cr6.gt) goto loc_8223AA88;
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22072
	ctx.r12.s64 = ctx.r12.s64 + -22072;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8223AAE0;
	case 1:
		goto loc_8223AA88;
	case 2:
		goto loc_8223AA50;
	case 3:
		goto loc_8223AB34;
	case 4:
		goto loc_8223AA88;
	case 5:
		goto loc_8223AB04;
	case 6:
		goto loc_8223AA88;
	case 7:
		goto loc_8223AA88;
	case 8:
		goto loc_8223AA00;
	case 9:
		goto loc_8223AA70;
	case 10:
		goto loc_8223AA88;
	case 11:
		goto loc_8223AA88;
	case 12:
		goto loc_8223AA88;
	case 13:
		goto loc_8223AAA0;
	default:
		return;
	}
	// lwz r17,-21792(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21792);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-21936(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21936);
	// lwz r17,-21708(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21708);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-21756(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21756);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-22016(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22016);
	// lwz r17,-21904(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21904);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-21880(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21880);
	// lwz r17,-21856(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21856);
loc_8223AA00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246238
	ctx.lr = 0x8223AA0C;
	sub_82246238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223aa88
	if (ctx.cr6.eq) goto loc_8223AA88;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8223ab1c
	if (!ctx.cr6.eq) goto loc_8223AB1C;
	// bl 0x82332af8
	ctx.lr = 0x8223AA30;
	sub_82332AF8(ctx, base);
	// lwz r11,1384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223ab20
	if (ctx.cr6.eq) goto loc_8223AB20;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x8223AA48;
	sub_82332AF8(ctx, base);
	// lwz r25,1392(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// b 0x8223ab20
	goto loc_8223AB20;
loc_8223AA50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x8223a5d0
	ctx.lr = 0x8223AA5C;
	sub_8223A5D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223aa88
	if (ctx.cr6.eq) goto loc_8223AA88;
	// lbz r24,368(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8223ab20
	goto loc_8223AB20;
loc_8223AA70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348a48
	ctx.lr = 0x8223AA7C;
	sub_82348A48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223abfc
	if (!ctx.cr6.eq) goto loc_8223ABFC;
loc_8223AA88:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8223a9a0
	if (ctx.cr6.lt) goto loc_8223A9A0;
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8223AAA0:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,5032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8223aab8
	if (ctx.cr6.lt) goto loc_8223AAB8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8223AAB8:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stw r11,424(r27)
	PPC_STORE_U32(ctx.r27.u32 + 424, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 8388608;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// stw r30,416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 416, ctx.r30.u32);
	// stw r25,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r25.u32);
	// stw r24,428(r27)
	PPC_STORE_U32(ctx.r27.u32 + 428, ctx.r24.u32);
loc_8223AAD8:
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8223AAE0:
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
	// beq cr6,0x8223ab04
	if (ctx.cr6.eq) goto loc_8223AB04;
	// lhz r10,270(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 270);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223ab28
	if (!ctx.cr6.eq) goto loc_8223AB28;
loc_8223AB04:
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8223ab28
	if (ctx.cr6.eq) goto loc_8223AB28;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8223ab20
	if (ctx.cr6.eq) goto loc_8223AB20;
loc_8223AB1C:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8223AB20:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8223aab8
	if (!ctx.cr6.eq) goto loc_8223AAB8;
loc_8223AB28:
	// stw r23,424(r27)
	PPC_STORE_U32(ctx.r27.u32 + 424, ctx.r23.u32);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8223AB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223a710
	ctx.lr = 0x8223AB3C;
	sub_8223A710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223abb8
	if (ctx.cr6.eq) goto loc_8223ABB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x8223a778
	ctx.lr = 0x8223AB54;
	sub_8223A778(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ab28
	if (ctx.cr6.eq) goto loc_8223AB28;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// lis r7,20971
	ctx.r7.s64 = 1374355456;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r5,r11,9624
	ctx.r5.s64 = ctx.r11.s64 + 9624;
	// ori r4,r7,34079
	ctx.r4.u64 = ctx.r7.u64 | 34079;
	// mulhw r3,r8,r4
	ctx.r3.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32)) >> 32;
	// lwz r10,52(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// subf r7,r10,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// mulli r4,r6,200
	ctx.r4.s64 = ctx.r6.s64 * 200;
	// and r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 & ctx.r7.u64;
	// subf r11,r4,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// lhz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r10,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r10.u32);
	// b 0x8223ab20
	goto loc_8223AB20;
loc_8223ABB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x82239bc8
	ctx.lr = 0x8223ABC4;
	sub_82239BC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ab28
	if (ctx.cr6.eq) goto loc_8223AB28;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// b 0x8223ab20
	goto loc_8223AB20;
loc_8223ABFC:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r25,568(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// b 0x8223aab8
	goto loc_8223AAB8;
}

PPC_WEAK_FUNC(sub_8223A7F0) {
	__imp__sub_8223A7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223AC0C) {
	__imp__sub_8223AC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8223AC18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x821fe6a8
	ctx.lr = 0x8223AC2C;
	sub_821FE6A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82276090
	ctx.lr = 0x8223AC34;
	sub_82276090(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r28,2046
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2046, ctx.xer);
	// blt cr6,0x8223ac4c
	if (ctx.cr6.lt) goto loc_8223AC4C;
loc_8223AC40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223AC4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-3348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3348);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f12,f8,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f10,f8,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f3,f7,f8,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82338210
	ctx.lr = 0x8223AC98;
	sub_82338210(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8223ac40
	if (ctx.cr6.lt) goto loc_8223AC40;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r28,624
	ctx.r10.s64 = ctx.r28.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223AC10) {
	__imp__sub_8223AC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223ACC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223ACC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,264(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x822d4ac8
	ctx.lr = 0x8223ACEC;
	sub_822D4AC8(ctx, base);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r31,-20944
	ctx.r31.s64 = ctx.r31.s64 + -20944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4918
	ctx.lr = 0x8223AD04;
	sub_822D4918(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,44600
	ctx.r10.u64 = ctx.r10.u64 | 44600;
	// lwz r11,13344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13344);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x8223ade4
	if (ctx.cr6.gt) goto loc_8223ADE4;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lfsx f13,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-5156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5156);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x8223ade4
	if (ctx.cr6.lt) goto loc_8223ADE4;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// addi r6,r8,9624
	ctx.r6.s64 = ctx.r8.s64 + 9624;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// lfs f0,5880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-20928
	ctx.r10.s64 = ctx.r10.s64 + -20928;
	// lwz r9,26012(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26012);
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f6,f7,f0,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f2,f3,f0,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8223ae20
	if (ctx.cr6.gt) goto loc_8223AE20;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223ADE4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r7,r11,9624
	ctx.r7.s64 = ctx.r11.s64 + 9624;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// ori r6,r9,44608
	ctx.r6.u64 = ctx.r9.u64 | 44608;
	// stfsx f12,r29,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stwx r11,r29,r6
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r11.u32);
loc_8223AE20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223ACC0) {
	__imp__sub_8223ACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223AE2C) {
	__imp__sub_8223AE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223AE30) {
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
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13344);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f13,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822d4ed0
	ctx.lr = 0x8223AE94;
	sub_822D4ED0(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-2008
	ctx.r6.s64 = ctx.r7.s64 + -2008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x821f2d40
	ctx.lr = 0x8223AEB0;
	sub_821F2D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8223AE30) {
	__imp__sub_8223AE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223AEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8223AED0;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f1,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f1,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmadds f6,f9,f1,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d48f0
	ctx.lr = 0x8223AF20;
	sub_822D48F0(ctx, base);
	// lfs f2,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// ori r9,r9,7932
	ctx.r9.u64 = ctx.r9.u64 | 7932;
	// lfs f2,9868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82234bd8
	ctx.lr = 0x8223AF90;
	sub_82234BD8(ctx, base);
	// lis r25,-32052
	ctx.r25.s64 = -2100559872;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// li r8,50
	ctx.r8.s64 = 50;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,26548(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26548);
	// lwz r11,26012(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26012);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// divw r21,r6,r8
	ctx.r21.s32 = ctx.r6.s32 / ctx.r8.s32;
	// beq cr6,0x8223afd0
	if (ctx.cr6.eq) goto loc_8223AFD0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223ae30
	ctx.lr = 0x8223AFD0;
	sub_8223AE30(ctx, base);
loc_8223AFD0:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,13344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13344);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f0
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// ble cr6,0x8223b0f0
	if (!ctx.cr6.gt) goto loc_8223B0F0;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// addi r27,r11,5560
	ctx.r27.s64 = ctx.r11.s64 + 5560;
	// addi r23,r10,-2008
	ctx.r23.s64 = ctx.r10.s64 + -2008;
	// addi r26,r9,9624
	ctx.r26.s64 = ctx.r9.s64 + 9624;
loc_8223B008:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822d57d0
	ctx.lr = 0x8223B01C;
	sub_822D57D0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8223b0e4
	if (ctx.cr6.gt) goto loc_8223B0E4;
	// lhz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b0b8
	if (ctx.cr6.eq) goto loc_8223B0B8;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r31,r11,-112
	ctx.r31.s64 = ctx.r11.s64 + -112;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223b0b8
	if (ctx.cr6.eq) goto loc_8223B0B8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8223b0b8
	if (!ctx.cr6.eq) goto loc_8223B0B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad88
	ctx.lr = 0x8223B060;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223b0e4
	if (!ctx.cr6.eq) goto loc_8223B0E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,268(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223b0e4
	if (ctx.cr6.eq) goto loc_8223B0E4;
	// lwz r11,272(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 272);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8223b0e4
	if (!ctx.cr6.eq) goto loc_8223B0E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ae080
	ctx.lr = 0x8223B098;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223b0e4
	if (!ctx.cr6.eq) goto loc_8223B0E4;
	// lwz r11,704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8223b0b8
	if (!ctx.cr6.gt) goto loc_8223B0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238210
	ctx.lr = 0x8223B0B8;
	sub_82238210(ctx, base);
loc_8223B0B8:
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r11,r11,1500
	ctx.r11.s64 = ctx.r11.s64 + 1500;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// lwz r11,26548(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26548);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b0e4
	if (ctx.cr6.eq) goto loc_8223B0E4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235060
	ctx.lr = 0x8223B0E4;
	sub_82235060(ctx, base);
loc_8223B0E4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bne 0x8223b008
	if (!ctx.cr0.eq) goto loc_8223B008;
loc_8223B0F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223AEC8) {
	__imp__sub_8223AEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223B0FC) {
	__imp__sub_8223B0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8223B108;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821351e8
	ctx.lr = 0x8223B124;
	sub_821351E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b230
	if (ctx.cr6.eq) goto loc_8223B230;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820d8d98
	ctx.lr = 0x8223B140;
	sub_820D8D98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2047
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2047, ctx.xer);
	// bne cr6,0x8223b184
	if (!ctx.cr6.eq) goto loc_8223B184;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,9624
	ctx.r6.s64 = ctx.r8.s64 + 9624;
	// ori r5,r7,44612
	ctx.r5.u64 = ctx.r7.u64 | 44612;
	// lwz r11,26540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26540);
	// lwz r10,52(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwzx r4,r9,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8223b230
	if (ctx.cr6.gt) goto loc_8223B230;
	// b 0x8223b1a0
	goto loc_8223B1A0;
loc_8223B184:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// ori r7,r9,44612
	ctx.r7.u64 = ctx.r9.u64 | 44612;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
loc_8223B1A0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f31,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f31,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f10.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmadds f6,f9,f31,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// bl 0x821be3c0
	ctx.lr = 0x8223B1F4;
	sub_821BE3C0(ctx, base);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lwz r11,26548(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26548);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223b230
	if (ctx.cr6.eq) goto loc_8223B230;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r28,624
	ctx.r10.s64 = ctx.r28.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// addi r5,r9,-2136
	ctx.r5.s64 = ctx.r9.s64 + -2136;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x821f2d08
	ctx.lr = 0x8223B230;
	sub_821F2D08(ctx, base);
loc_8223B230:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223B100) {
	__imp__sub_8223B100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223B23C) {
	__imp__sub_8223B23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B240) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8223b2b0
	if (ctx.cr6.eq) goto loc_8223B2B0;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f1,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f1,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// fmadds f6,f9,f1,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// bl 0x821be3c0
	ctx.lr = 0x8223B2B0;
	sub_821BE3C0(ctx, base);
loc_8223B2B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223B240) {
	__imp__sub_8223B240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8223B2C8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,264(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r22,r11,44444
	ctx.r22.u64 = ctx.r11.u64 | 44444;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,700(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 700);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// rlwinm r9,r9,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r9,700(r23)
	PPC_STORE_U32(ctx.r23.u32 + 700, ctx.r9.u32);
	// lwz r8,264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// add r3,r8,r22
	ctx.r3.u64 = ctx.r8.u64 + ctx.r22.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223B300;
	sub_821E2E18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821e6bc0
	ctx.lr = 0x8223B30C;
	sub_821E6BC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6c48
	ctx.lr = 0x8223B320;
	sub_821E6C48(ctx, base);
	// lwz r7,172(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 172);
	// rlwinm r6,r7,0,11,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r6,r6,0,20,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8223b350
	if (ctx.cr6.eq) goto loc_8223B350;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r10,364(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 364);
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// addi r8,r11,124
	ctx.r8.s64 = ctx.r11.s64 + 124;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// b 0x8223b358
	goto loc_8223B358;
loc_8223B350:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r3,692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
loc_8223B358:
	// bl 0x82332af8
	ctx.lr = 0x8223B35C;
	sub_82332AF8(ctx, base);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b388
	if (ctx.cr6.eq) goto loc_8223B388;
	// lbz r11,1628(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b388
	if (ctx.cr6.eq) goto loc_8223B388;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r8,r11,7836
	ctx.r8.s64 = ctx.r11.s64 + 7836;
	// b 0x8223b390
	goto loc_8223B390;
loc_8223B388:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r8,r11,7816
	ctx.r8.s64 = ctx.r11.s64 + 7816;
loc_8223B390:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,640
	ctx.r7.s64 = 41943040;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// ori r7,r7,59393
	ctx.r7.u64 = ctx.r7.u64 | 59393;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f31,-3348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3348);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f31,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f7,f11,f31,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f6,f9,f31,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lhz r6,126(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x8223ac10
	ctx.lr = 0x8223B3E8;
	sub_8223AC10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223acc0
	ctx.lr = 0x8223B3F8;
	sub_8223ACC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r30,-32032
	ctx.r30.s64 = -2099249152;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b430
	if (ctx.cr6.eq) goto loc_8223B430;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6156);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f1,f11,f12,f13
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// bl 0x8223aec8
	ctx.lr = 0x8223B430;
	sub_8223AEC8(ctx, base);
loc_8223B430:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8223b484
	if (ctx.cr6.eq) goto loc_8223B484;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8223b484
	if (!ctx.cr6.eq) goto loc_8223B484;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,11224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11224);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8223b484
	if (ctx.cr6.eq) goto loc_8223B484;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223b100
	ctx.lr = 0x8223B484;
	sub_8223B100(ctx, base);
loc_8223B484:
	// lwz r11,-6156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6156);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8223b240
	ctx.lr = 0x8223B49C;
	sub_8223B240(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223b79c
	if (ctx.cr6.eq) goto loc_8223B79C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lis r21,-32032
	ctx.r21.s64 = -2099249152;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// lis r24,-32024
	ctx.r24.s64 = -2098724864;
	// li r25,12
	ctx.r25.s64 = 12;
	// li r26,10
	ctx.r26.s64 = 10;
	// li r27,6
	ctx.r27.s64 = 6;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b624
	if (ctx.cr6.eq) goto loc_8223B624;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8223b79c
	if (!ctx.cr6.eq) goto loc_8223B79C;
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8223b5ac
	if (!ctx.cr6.eq) goto loc_8223B5AC;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lwz r11,11276(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11276);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f12,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f31,f0,f0,f9
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(ctx.f31.f64, ctx.f10.f64);
	// bge cr6,0x8223b558
	if (!ctx.cr6.lt) goto loc_8223B558;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223b558
	if (!ctx.cr6.eq) goto loc_8223B558;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223B558;
	sub_821E2E18(ctx, base);
loc_8223B558:
	// lwz r11,-6120(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -6120);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8223b624
	if (!ctx.cr6.lt) goto loc_8223B624;
	// lwz r11,700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 700);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,700(r23)
	PPC_STORE_U32(ctx.r23.u32 + 700, ctx.r10.u32);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b624
	if (ctx.cr6.eq) goto loc_8223B624;
	// lwz r9,4776(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4776);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8223b5a0
	if (!ctx.cr6.eq) goto loc_8223B5A0;
	// lwz r11,3528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3528);
	// rlwinm r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8223b624
	if (!ctx.cr6.eq) goto loc_8223B624;
loc_8223B5A0:
	// ori r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 16384;
	// stw r11,700(r23)
	PPC_STORE_U32(ctx.r23.u32 + 700, ctx.r11.u32);
	// b 0x8223b624
	goto loc_8223B624;
loc_8223B5AC:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// slw r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8223b624
	if (ctx.cr6.eq) goto loc_8223B624;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,752(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 752);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f12,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bge cr6,0x8223b624
	if (!ctx.cr6.lt) goto loc_8223B624;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223b618
	if (!ctx.cr6.eq) goto loc_8223B618;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223B618;
	sub_821E2E18(ctx, base);
loc_8223B618:
	// lwz r11,700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 700);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,700(r23)
	PPC_STORE_U32(ctx.r23.u32 + 700, ctx.r10.u32);
loc_8223B624:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8223b704
	if (!ctx.cr6.eq) goto loc_8223B704;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223b704
	if (!ctx.cr6.eq) goto loc_8223B704;
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,11276(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11276);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f31,f6,f6,f2
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f31,f4
	ctx.cr6.compare(ctx.f31.f64, ctx.f4.f64);
	// bge cr6,0x8223b690
	if (!ctx.cr6.lt) goto loc_8223B690;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223B690;
	sub_821E2E18(ctx, base);
loc_8223B690:
	// lfs f0,752(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 752);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8223b704
	if (!ctx.cr6.lt) goto loc_8223B704;
	// lwz r11,172(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b704
	if (ctx.cr6.eq) goto loc_8223B704;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lwz r10,272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,564(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 564);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r28,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r11,700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 700);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223b700
	if (!ctx.cr6.eq) goto loc_8223B700;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
loc_8223B700:
	// stw r10,700(r23)
	PPC_STORE_U32(ctx.r23.u32 + 700, ctx.r10.u32);
loc_8223B704:
	// lhz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b79c
	if (ctx.cr6.eq) goto loc_8223B79C;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223b79c
	if (!ctx.cr6.eq) goto loc_8223B79C;
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,11276(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11276);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f31,f6,f6,f2
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f31,f4
	ctx.cr6.compare(ctx.f31.f64, ctx.f4.f64);
	// bge cr6,0x8223b770
	if (!ctx.cr6.lt) goto loc_8223B770;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223B770;
	sub_821E2E18(ctx, base);
loc_8223B770:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8223b79c
	if (!ctx.cr6.eq) goto loc_8223B79C;
	// lwz r11,-6120(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -6120);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8223b79c
	if (!ctx.cr6.lt) goto loc_8223B79C;
	// lwz r11,700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 700);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,700(r23)
	PPC_STORE_U32(ctx.r23.u32 + 700, ctx.r10.u32);
loc_8223B79C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223B2C0) {
	__imp__sub_8223B2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8223B7B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r28,r4,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a9b38
	ctx.lr = 0x8223B800;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b868
	if (ctx.cr6.eq) goto loc_8223B868;
loc_8223B80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x8223B814;
	sub_821AA3A0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8223b848
	if (!ctx.cr6.eq) goto loc_8223B848;
	// lwz r5,764(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r5,250
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 250, ctx.xer);
	// bge cr6,0x8223b82c
	if (!ctx.cr6.lt) goto loc_8223B82C;
	// li r5,250
	ctx.r5.s64 = 250;
loc_8223B82C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// bl 0x821d9170
	ctx.lr = 0x8223B838;
	sub_821D9170(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b848
	if (ctx.cr6.eq) goto loc_8223B848;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8223B848:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x8223B854;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223b80c
	if (!ctx.cr6.eq) goto loc_8223B80C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bgt cr6,0x8223b89c
	if (ctx.cr6.gt) goto loc_8223B89C;
loc_8223B868:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r11,44576
	ctx.r7.u64 = ctx.r11.u64 | 44576;
	// ori r6,r8,44575
	ctx.r6.u64 = ctx.r8.u64 | 44575;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// stbx r5,r4,r6
	PPC_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223B89C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// ori r8,r11,44575
	ctx.r8.u64 = ctx.r11.u64 | 44575;
	// stbx r30,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r30.u8);
	// lwz r11,-19092(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19092);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8223b8c4
	if (ctx.cr6.lt) goto loc_8223B8C4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8223B8C4:
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,-6000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6000);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bge 0x8223b8e0
	if (!ctx.cr0.lt) goto loc_8223B8E0;
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
loc_8223B8E0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8223B8EC:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223b8fc
	if (ctx.cr6.eq) goto loc_8223B8FC;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8223B8FC:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b910
	if (ctx.cr6.eq) goto loc_8223B910;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x8223b8ec
	goto loc_8223B8EC;
loc_8223B910:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8223b91c
	if (!ctx.cr6.lt) goto loc_8223B91C;
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_8223B91C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// ori r9,r11,44576
	ctx.r9.u64 = ctx.r11.u64 | 44576;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223B7A8) {
	__imp__sub_8223B7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223B934) {
	__imp__sub_8223B934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8223b948
	if (!ctx.cr6.lt) goto loc_8223B948;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_8223B948:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8223B954:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b964
	if (ctx.cr6.eq) goto loc_8223B964;
	// fmuls f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_8223B964:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b978
	if (ctx.cr6.eq) goto loc_8223B978;
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// b 0x8223b954
	goto loc_8223B954;
loc_8223B978:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8223b988
	if (!ctx.cr6.lt) goto loc_8223B988;
	// fdivs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
loc_8223B988:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223B938) {
	__imp__sub_8223B938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223B990) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x8223B998;
	__savegprlr_16(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8223B9AC:
	// dcbt r9,r3
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8223b9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223B9AC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223c038
	if (ctx.cr6.eq) goto loc_8223C038;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r16,r9,32881
	ctx.r16.u64 = ctx.r9.u64 | 32881;
	// ori r17,r8,65521
	ctx.r17.u64 = ctx.r8.u64 | 65521;
loc_8223B9D0:
	// cmplwi cr6,r4,5504
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5504, ctx.xer);
	// ble cr6,0x8223bff8
	if (!ctx.cr6.gt) goto loc_8223BFF8;
	// li r9,43
	ctx.r9.s64 = 43;
	// addi r4,r4,-5504
	ctx.r4.s64 = ctx.r4.s64 + -5504;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223B9E4:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// dcbt r9,r3
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r31,3(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r6,5(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r19,9(r3)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r20,10(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r21,11(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r22,12(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r23,13(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r24,14(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r25,15(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r27,17(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lbz r28,18(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r29,19(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r31,21(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,22(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r6,23(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,25(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,26(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,27(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// lbz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,29(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r5,30(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lbz r6,31(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,33(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// lbz r9,34(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r18,35(r3)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r19,36(r3)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// lbz r20,37(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r21,38(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r22,39(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// lbz r23,40(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r24,41(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r25,42(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lbz r26,43(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,44(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r28,45(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// lbz r29,46(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,47(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// lbz r5,49(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,50(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,51(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 51);
	// lbz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,53(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,54(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// lbz r9,55(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r5,57(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// lbz r6,58(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,59(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 59);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// lbz r9,61(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r18,62(r3)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r3.u32 + 62);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r19,63(r3)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + 63);
	// lbz r20,64(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r21,65(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r22,66(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// lbz r23,67(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 67);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r24,68(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r25,69(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// lbz r26,70(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,71(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lbz r29,73(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,74(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r31,75(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// lbz r5,76(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,77(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,78(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 78);
	// lbz r8,79(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 79);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,81(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// lbz r9,82(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,83(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 83);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r5,84(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// lbz r6,85(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,86(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 86);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,87(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 87);
	// lbz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r18,89(r3)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r19,90(r3)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + 90);
	// lbz r20,91(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r21,92(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r22,93(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 93);
	// lbz r23,94(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 94);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r24,95(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 95);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r25,96(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// lbz r26,97(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,98(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 98);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r28,99(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// lbz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,101(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 101);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r31,102(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 102);
	// lbz r5,103(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 103);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,104(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,105(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// lbz r8,106(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 106);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,107(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 107);
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lbz r5,109(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 109);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,110(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 110);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,111(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 111);
	// lbz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,113(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r23,114(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 114);
	// lbz r24,115(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 115);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r25,116(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,117(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 117);
	// lbz r27,118(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 118);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,119(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 119);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,120(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// lbz r30,121(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,122(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r5,123(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 123);
	// lbz r6,124(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,125(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 125);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,126(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 126);
	// lbz r9,127(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 127);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8223b9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223B9E4;
	// b 0x8223c010
	goto loc_8223C010;
loc_8223BFF8:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x8223bff8
	if (!ctx.cr0.eq) goto loc_8223BFF8;
loc_8223C010:
	// mulhwu r9,r11,r16
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r16.u32)) >> 32;
	// mulhwu r8,r10,r16
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r16.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r7,r17
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r17.s32);
	// mullw r9,r6,r17
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r17.s32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8223b9d0
	if (!ctx.cr6.eq) goto loc_8223B9D0;
loc_8223C038:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223B990) {
	__imp__sub_8223B990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C044) {
	__imp__sub_8223C044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8223C050;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,144
	ctx.r11.s64 = 144;
	// lwz r31,228(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_8223C07C:
	// stdu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8223c07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223C07C;
	// li r11,460
	ctx.r11.s64 = 460;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r11,-380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -380);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e7e98
	ctx.lr = 0x8223C0AC;
	sub_822E7E98(ctx, base);
	// bl 0x82272b50
	ctx.lr = 0x8223C0B0;
	sub_82272B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x822e7e98
	ctx.lr = 0x8223C0C0;
	sub_822E7E98(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8223b990
	ctx.lr = 0x8223C0D4;
	sub_8223B990(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822a4db8
	ctx.lr = 0x8223C0E0;
	sub_822A4DB8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r9,2140
	ctx.r6.s64 = ctx.r9.s64 + 2140;
	// addi r4,r8,2128
	ctx.r4.s64 = ctx.r8.s64 + 2128;
	// addi r3,r7,2164
	ctx.r3.s64 = ctx.r7.s64 + 2164;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e17e0
	ctx.lr = 0x8223C100;
	sub_822E17E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x822e7e98
	ctx.lr = 0x8223C114;
	sub_822E7E98(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223c130
	if (ctx.cr6.eq) goto loc_8223C130;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x822e7e98
	ctx.lr = 0x8223C12C;
	sub_822E7E98(ctx, base);
	// b 0x8223c134
	goto loc_8223C134;
loc_8223C130:
	// stb r26,672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 672, ctx.r26.u8);
loc_8223C134:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x822e7e98
	ctx.lr = 0x8223C144;
	sub_822E7E98(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8223c160
	if (ctx.cr6.eq) goto loc_8223C160;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// bl 0x822e7e98
	ctx.lr = 0x8223C15C;
	sub_822E7E98(ctx, base);
	// b 0x8223c164
	goto loc_8223C164;
loc_8223C160:
	// stb r26,736(r31)
	PPC_STORE_U8(ctx.r31.u32 + 736, ctx.r26.u8);
loc_8223C164:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223c1e4
	if (ctx.cr6.eq) goto loc_8223C1E4;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// ori r8,r9,44328
	ctx.r8.u64 = ctx.r9.u64 | 44328;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223c1e4
	if (ctx.cr6.eq) goto loc_8223C1E4;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8223c1e4
	if (ctx.cr6.lt) goto loc_8223C1E4;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x8223c1e8
	if (!ctx.cr6.gt) goto loc_8223C1E8;
	// li r11,100
	ctx.r11.s64 = 100;
	// b 0x8223c1e8
	goto loc_8223C1E8;
loc_8223C1E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8223C1E8:
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// addi r3,r31,1064
	ctx.r3.s64 = ctx.r31.s64 + 1064;
	// bl 0x822dd6b0
	ctx.lr = 0x8223C1F4;
	sub_822DD6B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e3f30
	ctx.lr = 0x8223C204;
	sub_822E3F30(ctx, base);
	// stw r3,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r3.u32);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r10,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C048) {
	__imp__sub_8223C048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223C228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,736
	ctx.r30.s64 = ctx.r3.s64 + 736;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r3,992
	ctx.r6.s64 = ctx.r3.s64 + 992;
	// addi r4,r11,-5040
	ctx.r4.s64 = ctx.r11.s64 + -5040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223C24C;
	sub_82280900(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8223C250;
	sub_82310110(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ced8
	ctx.lr = 0x8223C25C;
	sub_8223CED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x8223C264;
	sub_82310110(ctx, base);
	// subf r6,r29,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r29.s64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// beq cr6,0x8223c290
	if (ctx.cr6.eq) goto loc_8223C290;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5100
	ctx.r4.s64 = ctx.r11.s64 + -5100;
	// bl 0x82280900
	ctx.lr = 0x8223C284;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223C290:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5152
	ctx.r4.s64 = ctx.r11.s64 + -5152;
	// bl 0x82280900
	ctx.lr = 0x8223C29C;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C220) {
	__imp__sub_8223C220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C2A8) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x8223C2F4;
	sub_823E06D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,607(r1)
	PPC_STORE_U8(ctx.r1.u32 + 607, ctx.r9.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280b08
	ctx.lr = 0x8223C308;
	sub_82280B08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8223c320
	if (!ctx.cr6.eq) goto loc_8223C320;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-4964
	ctx.r3.s64 = ctx.r11.s64 + -4964;
	// bl 0x822b6ff0
	ctx.lr = 0x8223C31C;
	sub_822B6FF0(ctx, base);
	// bl 0x8230d720
	ctx.lr = 0x8223C320;
	sub_8230D720(ctx, base);
loc_8223C320:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-5000
	ctx.r4.s64 = ctx.r11.s64 + -5000;
	// bl 0x822830e8
	ctx.lr = 0x8223C330;
	sub_822830E8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223C2A8) {
	__imp__sub_8223C2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C344) {
	__imp__sub_8223C344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C348) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8230df48
	ctx.lr = 0x8223C36C;
	sub_8230DF48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cc48
	ctx.lr = 0x8223C378;
	sub_8223CC48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8223c3bc
	if (!ctx.cr6.lt) goto loc_8223C3BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230df48
	ctx.lr = 0x8223C388;
	sub_8230DF48(ctx, base);
	// bl 0x8230e690
	ctx.lr = 0x8223C38C;
	sub_8230E690(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// bl 0x82280b08
	ctx.lr = 0x8223C3A0;
	sub_82280B08(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-4884
	ctx.r4.s64 = ctx.r10.s64 + -4884;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8223C3B4;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223c42c
	goto loc_8223C42C;
loc_8223C3BC:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223cbd8
	ctx.lr = 0x8223C3CC;
	sub_8223CBD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8223ccb8
	ctx.lr = 0x8223C3D8;
	sub_8223CCB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230df48
	ctx.lr = 0x8223C3E0;
	sub_8230DF48(ctx, base);
	// cmplwi cr6,r31,1152
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1152, ctx.xer);
	// beq cr6,0x8223c400
	if (ctx.cr6.eq) goto loc_8223C400;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-4900
	ctx.r4.s64 = ctx.r11.s64 + -4900;
	// bl 0x82280900
	ctx.lr = 0x8223C3F8;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223c42c
	goto loc_8223C42C;
loc_8223C400:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r5,460
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 460, ctx.xer);
	// beq cr6,0x8223c428
	if (ctx.cr6.eq) goto loc_8223C428;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,460
	ctx.r6.s64 = 460;
	// addi r4,r11,-4936
	ctx.r4.s64 = ctx.r11.s64 + -4936;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8223C420;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223c42c
	goto loc_8223C42C;
loc_8223C428:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223C42C:
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

PPC_WEAK_FUNC(sub_8223C348) {
	__imp__sub_8223C348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C444) {
	__imp__sub_8223C444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C448) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,1100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// lwz r3,1152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// b 0x8223b990
	sub_8223B990(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C448) {
	__imp__sub_8223C448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C454) {
	__imp__sub_8223C454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C458) {
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
	// li r10,160
	ctx.r10.s64 = 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223C484:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8223c484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223C484;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e4ab8
	ctx.lr = 0x8223C4A0;
	sub_822E4AB8(ctx, base);
	// stw r30,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x8223b990
	ctx.lr = 0x8223C4B0;
	sub_8223B990(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8223C458) {
	__imp__sub_8223C458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C4D4) {
	__imp__sub_8223C4D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C4D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1152
	ctx.r3.s64 = ctx.r3.s64 + 1152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223C4D8) {
	__imp__sub_8223C4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8223C4E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r27,r10,-4852
	ctx.r27.s64 = ctx.r10.s64 + -4852;
	// addi r29,r11,-4860
	ctx.r29.s64 = ctx.r11.s64 + -4860;
loc_8223C50C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8223c51c
	if (ctx.cr6.eq) goto loc_8223C51C;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8223c570
	if (!ctx.cr6.lt) goto loc_8223C570;
loc_8223C51C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x8223C534;
	sub_822E8368(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822800f0
	ctx.lr = 0x8223C548;
	sub_822800F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3a38
	ctx.lr = 0x8223C554;
	sub_822D3A38(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d3788
	ctx.lr = 0x8223C560;
	sub_822D3788(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8223c574
	if (!ctx.cr6.gt) goto loc_8223C574;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8223c50c
	goto loc_8223C50C;
loc_8223C570:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8223C574:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8223c5d4
	if (ctx.cr6.eq) goto loc_8223C5D4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// divw r10,r11,r26
	ctx.r10.s32 = ctx.r11.s32 / ctx.r26.s32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x8223C5A0;
	sub_822E8368(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822800f0
	ctx.lr = 0x8223C5B4;
	sub_822800F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3aa8
	ctx.lr = 0x8223C5BC;
	sub_822D3AA8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x8223C5D4;
	sub_822E8368(ctx, base);
loc_8223C5D4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C4E0) {
	__imp__sub_8223C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C5DC) {
	__imp__sub_8223C5DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8223C5E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4508
	ctx.r4.s64 = ctx.r11.s64 + -4508;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82280900
	ctx.lr = 0x8223C610;
	sub_82280900(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223cc48
	ctx.lr = 0x8223C61C;
	sub_8223CC48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8223c640
	if (!ctx.cr6.lt) goto loc_8223C640;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8223ccb8
	ctx.lr = 0x8223C62C;
	sub_8223CCB8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4548
	ctx.r4.s64 = ctx.r11.s64 + -4548;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223c2a8
	ctx.lr = 0x8223C640;
	sub_8223C2A8(ctx, base);
loc_8223C640:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cbd8
	ctx.lr = 0x8223C650;
	sub_8223CBD8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r3,1152
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1152, ctx.xer);
	// addi r29,r11,-4572
	ctx.r29.s64 = ctx.r11.s64 + -4572;
	// beq cr6,0x8223c674
	if (ctx.cr6.eq) goto loc_8223C674;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8223ccb8
	ctx.lr = 0x8223C668;
	sub_8223CCB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223c2a8
	ctx.lr = 0x8223C674;
	sub_8223C2A8(ctx, base);
loc_8223C674:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,460
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 460, ctx.xer);
	// beq cr6,0x8223c6a8
	if (ctx.cr6.eq) goto loc_8223C6A8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8223ccb8
	ctx.lr = 0x8223C688;
	sub_8223CCB8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,288
	ctx.r8.s64 = ctx.r31.s64 + 288;
	// addi r4,r11,-4640
	ctx.r4.s64 = ctx.r11.s64 + -4640;
	// li r7,460
	ctx.r7.s64 = 460;
	// addi r5,r31,992
	ctx.r5.s64 = ctx.r31.s64 + 992;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223c2a8
	ctx.lr = 0x8223C6A8;
	sub_8223C2A8(ctx, base);
loc_8223C6A8:
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// lis r10,28
	ctx.r10.s64 = 1835008;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8223c6dc
	if (!ctx.cr6.gt) goto loc_8223C6DC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8223ccb8
	ctx.lr = 0x8223C6C0;
	sub_8223CCB8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,1100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// lis r7,28
	ctx.r7.s64 = 1835008;
	// addi r4,r11,-4744
	ctx.r4.s64 = ctx.r11.s64 + -4744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223c2a8
	ctx.lr = 0x8223C6DC;
	sub_8223C2A8(ctx, base);
loc_8223C6DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,1100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// bl 0x8223cbd8
	ctx.lr = 0x8223C6EC;
	sub_8223CBD8(ctx, base);
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8223c70c
	if (ctx.cr6.eq) goto loc_8223C70C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8223ccb8
	ctx.lr = 0x8223C700;
	sub_8223CCB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223c2a8
	ctx.lr = 0x8223C70C;
	sub_8223C2A8(ctx, base);
loc_8223C70C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,2140
	ctx.r6.s64 = ctx.r11.s64 + 2140;
	// addi r4,r10,2128
	ctx.r4.s64 = ctx.r10.s64 + 2128;
	// addi r3,r9,2164
	ctx.r3.s64 = ctx.r9.s64 + 2164;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e17e0
	ctx.lr = 0x8223C72C;
	sub_822E17E0(ctx, base);
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// bl 0x822e1fa8
	ctx.lr = 0x8223C734;
	sub_822E1FA8(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// addi r4,r8,-4772
	ctx.r4.s64 = ctx.r8.s64 + -4772;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223C74C;
	sub_82280900(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8223c778
	if (ctx.cr6.eq) goto loc_8223C778;
	// bl 0x8223ccb8
	ctx.lr = 0x8223C760;
	sub_8223CCB8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4840
	ctx.r4.s64 = ctx.r11.s64 + -4840;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223c2a8
	ctx.lr = 0x8223C774;
	sub_8223C2A8(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8223C778:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C5E0) {
	__imp__sub_8223C5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C780) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28868
	ctx.r9.s64 = ctx.r10.s64 + -28868;
	// stw r11,-28868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28868, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223C780) {
	__imp__sub_8223C780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C798) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223C798) {
	__imp__sub_8223C798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C7A0) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r11,-4436
	ctx.r4.s64 = ctx.r11.s64 + -4436;
	// bl 0x82280b08
	ctx.lr = 0x8223C7BC;
	sub_82280B08(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r10,-25716
	ctx.r4.s64 = ctx.r10.s64 + -25716;
	// bl 0x8233cae8
	ctx.lr = 0x8223C7CC;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223C7A0) {
	__imp__sub_8223C7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C7DC) {
	__imp__sub_8223C7DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8223C7E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8223c82c
	if (!ctx.cr6.eq) goto loc_8223C82C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r11,13960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13960);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_8223C810:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bne cr6,0x8223c810
	if (!ctx.cr6.eq) goto loc_8223C810;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8223C82C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8223C830:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223c830
	if (!ctx.cr6.eq) goto loc_8223C830;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8223c94c
	if (!ctx.cr6.lt) goto loc_8223C94C;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// bge cr6,0x8223c94c
	if (!ctx.cr6.lt) goto loc_8223C94C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223c8f8
	if (ctx.cr6.eq) goto loc_8223C8F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r26,45
	ctx.r26.s64 = 45;
	// li r27,47
	ctx.r27.s64 = 47;
	// addi r28,r11,-4288
	ctx.r28.s64 = ctx.r11.s64 + -4288;
loc_8223C878:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,47
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 47, ctx.xer);
	// beq cr6,0x8223c8b0
	if (ctx.cr6.eq) goto loc_8223C8B0;
	// cmpwi cr6,r3,92
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 92, ctx.xer);
	// beq cr6,0x8223c8b0
	if (ctx.cr6.eq) goto loc_8223C8B0;
	// bl 0x822e7e08
	ctx.lr = 0x8223C894;
	sub_822E7E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// beq cr6,0x8223c928
	if (ctx.cr6.eq) goto loc_8223C928;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x8223c8ec
	goto loc_8223C8EC;
loc_8223C8B0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8223c8e4
	if (ctx.cr6.eq) goto loc_8223C8E4;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bne cr6,0x8223c8d8
	if (!ctx.cr6.eq) goto loc_8223C8D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x8223C8D0;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223c8e4
	if (ctx.cr6.eq) goto loc_8223C8E4;
loc_8223C8D8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r26,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x8223c8ec
	goto loc_8223C8EC;
loc_8223C8E4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r27,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
loc_8223C8EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8223c878
	if (ctx.cr6.lt) goto loc_8223C878;
loc_8223C8F8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-4852
	ctx.r5.s64 = ctx.r9.s64 + -4852;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e8368
	ctx.lr = 0x8223C91C;
	sub_822E8368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8223C928:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-4384
	ctx.r4.s64 = ctx.r10.s64 + -4384;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223C940;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8223C94C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4416
	ctx.r4.s64 = ctx.r11.s64 + -4416;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223C960;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C7E0) {
	__imp__sub_8223C7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C96C) {
	__imp__sub_8223C96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r10,r11,-28868
	ctx.r10.s64 = ctx.r11.s64 + -28868;
	// lbz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223C970) {
	__imp__sub_8223C970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C980) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// bl 0x82280900
	ctx.lr = 0x8223C9A4;
	sub_82280900(ctx, base);
	// lis r31,-32017
	ctx.r31.s64 = -2098266112;
	// addi r30,r31,-28868
	ctx.r30.s64 = ctx.r31.s64 + -28868;
	// lwz r3,-28868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28868);
	// bl 0x8230eb28
	ctx.lr = 0x8223C9B4;
	sub_8230EB28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-28868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28868, ctx.r11.u32);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_8223C980) {
	__imp__sub_8223C980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223C9DC) {
	__imp__sub_8223C9DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223C9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8223C9E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r28,1152(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// bl 0x82141340
	ctx.lr = 0x8223C9FC;
	sub_82141340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8230df58
	ctx.lr = 0x8223CA04;
	sub_8230DF58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223ca24
	if (!ctx.cr6.eq) goto loc_8223CA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213af90
	ctx.lr = 0x8223CA18;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223cbbc
	if (ctx.cr6.eq) goto loc_8223CBBC;
loc_8223CA24:
	// bl 0x82310110
	ctx.lr = 0x8223CA28;
	sub_82310110(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r30,992
	ctx.r25.s64 = ctx.r30.s64 + 992;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r11,-4460
	ctx.r4.s64 = ctx.r11.s64 + -4460;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8230e6a0
	ctx.lr = 0x8223CA48;
	sub_8230E6A0(ctx, base);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r31,r11,-28868
	ctx.r31.s64 = ctx.r11.s64 + -28868;
	// stw r3,-28868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28868, ctx.r3.u32);
	// bl 0x8230e690
	ctx.lr = 0x8223CA58;
	sub_8230E690(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223ca70
	if (ctx.cr6.eq) goto loc_8223CA70;
loc_8223CA64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8223CA70:
	// bl 0x82310110
	ctx.lr = 0x8223CA74;
	sub_82310110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8230ea68
	ctx.lr = 0x8223CA8C;
	sub_8230EA68(ctx, base);
	// bl 0x8230ea58
	ctx.lr = 0x8223CA90;
	sub_8230EA58(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223ca64
	if (!ctx.cr6.eq) goto loc_8223CA64;
	// bl 0x82310110
	ctx.lr = 0x8223CAA0;
	sub_82310110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,1100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8230ea68
	ctx.lr = 0x8223CAB8;
	sub_8230EA68(ctx, base);
	// bl 0x8230ea58
	ctx.lr = 0x8223CABC;
	sub_8230EA58(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223ca64
	if (!ctx.cr6.eq) goto loc_8223CA64;
	// bl 0x82310110
	ctx.lr = 0x8223CACC;
	sub_82310110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8229ffe0
	ctx.lr = 0x8223CAE0;
	sub_8229FFE0(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8223CAE4;
	sub_82310110(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8230ea58
	ctx.lr = 0x8223CAEC;
	sub_8230EA58(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223ca64
	if (!ctx.cr6.eq) goto loc_8223CA64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-4016
	ctx.r4.s64 = ctx.r11.s64 + -4016;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB0C;
	sub_82280900(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,-4044
	ctx.r4.s64 = ctx.r10.s64 + -4044;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB20;
	sub_82280900(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-4072
	ctx.r4.s64 = ctx.r9.s64 + -4072;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB34;
	sub_82280900(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r8,-4100
	ctx.r4.s64 = ctx.r8.s64 + -4100;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB48;
	sub_82280900(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r7,-4128
	ctx.r4.s64 = ctx.r7.s64 + -4128;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB5C;
	sub_82280900(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// subf r5,r26,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r26.s64;
	// addi r4,r6,-4152
	ctx.r4.s64 = ctx.r6.s64 + -4152;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB70;
	sub_82280900(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// subf r5,r27,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r27.s64;
	// addi r4,r4,-4184
	ctx.r4.s64 = ctx.r4.s64 + -4184;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB84;
	sub_82280900(ctx, base);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// addi r4,r3,-4212
	ctx.r4.s64 = ctx.r3.s64 + -4212;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CB98;
	sub_82280900(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// subf r5,r30,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r30.s64;
	// addi r4,r11,-4244
	ctx.r4.s64 = ctx.r11.s64 + -4244;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223CBAC;
	sub_82280900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// bl 0x8233edf8
	ctx.lr = 0x8223CBBC;
	sub_8233EDF8(ctx, base);
loc_8223CBBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223C9E0) {
	__imp__sub_8223C9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r10,r11,-28868
	ctx.r10.s64 = ctx.r11.s64 + -28868;
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223CBC8) {
	__imp__sub_8223CBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CBD8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230e8b0
	ctx.lr = 0x8223CC04;
	sub_8230E8B0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223cc28
	if (ctx.cr6.eq) goto loc_8223CC28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230eb28
	ctx.lr = 0x8223CC1C;
	sub_8230EB28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822830e8
	ctx.lr = 0x8223CC28;
	sub_822830E8(ctx, base);
loc_8223CC28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_8223CBD8) {
	__imp__sub_8223CBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223CC44) {
	__imp__sub_8223CC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CC48) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82141340
	ctx.lr = 0x8223CC6C;
	sub_82141340(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4460
	ctx.r4.s64 = ctx.r11.s64 + -4460;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230e6a0
	ctx.lr = 0x8223CC84;
	sub_8230E6A0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223cc98
	if (ctx.cr6.eq) goto loc_8223CC98;
	// bl 0x8230df68
	ctx.lr = 0x8223CC94;
	sub_8230DF68(ctx, base);
	// b 0x8223cc9c
	goto loc_8223CC9C;
loc_8223CC98:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8223CC9C:
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

PPC_WEAK_FUNC(sub_8223CC48) {
	__imp__sub_8223CC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223CCB4) {
	__imp__sub_8223CCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CCB8) {
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
	// bl 0x82393cc8
	ctx.lr = 0x8223CCD0;
	sub_82393CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230eb28
	ctx.lr = 0x8223CCD8;
	sub_8230EB28(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8223CCDC;
	sub_82393D48(ctx, base);
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

PPC_WEAK_FUNC(sub_8223CCB8) {
	__imp__sub_8223CCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CCF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393cc8
	sub_82393CC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223CCF0) {
	__imp__sub_8223CCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223CCF4) {
	__imp__sub_8223CCF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393d48
	sub_82393D48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223CCF8) {
	__imp__sub_8223CCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223CCFC) {
	__imp__sub_8223CCFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CD00) {
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
	// bl 0x82393cc8
	ctx.lr = 0x8223CD18;
	sub_82393CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8223CD20;
	sub_82141340(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4460
	ctx.r4.s64 = ctx.r11.s64 + -4460;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230e6a0
	ctx.lr = 0x8223CD38;
	sub_8230E6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82393d48
	ctx.lr = 0x8223CD40;
	sub_82393D48(ctx, base);
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

PPC_WEAK_FUNC(sub_8223CD00) {
	__imp__sub_8223CD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CD58) {
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
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223cd98
	if (!ctx.cr6.eq) goto loc_8223CD98;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3684
	ctx.r4.s64 = ctx.r11.s64 + -3684;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8223CD90;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223cebc
	goto loc_8223CEBC;
loc_8223CD98:
	// bl 0x82393cc8
	ctx.lr = 0x8223CD9C;
	sub_82393CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8223CDA4;
	sub_82141340(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4460
	ctx.r4.s64 = ctx.r11.s64 + -4460;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230e6a0
	ctx.lr = 0x8223CDBC;
	sub_8230E6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82393d48
	ctx.lr = 0x8223CDC4;
	sub_82393D48(ctx, base);
	// bl 0x8230e690
	ctx.lr = 0x8223CDC8;
	sub_8230E690(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223ce18
	if (ctx.cr6.eq) goto loc_8223CE18;
	// bl 0x82393cc8
	ctx.lr = 0x8223CDD8;
	sub_82393CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230eb28
	ctx.lr = 0x8223CDE0;
	sub_8230EB28(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8223CDE4;
	sub_82393D48(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-3752
	ctx.r4.s64 = ctx.r11.s64 + -3752;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8223CDF8;
	sub_82280900(ctx, base);
	// bl 0x8230e690
	ctx.lr = 0x8223CDFC;
	sub_8230E690(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-3776
	ctx.r4.s64 = ctx.r10.s64 + -3776;
	// bl 0x82280900
	ctx.lr = 0x8223CE10;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223cebc
	goto loc_8223CEBC;
loc_8223CE18:
	// bl 0x82393cc8
	ctx.lr = 0x8223CE1C;
	sub_82393CC8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230e8b0
	ctx.lr = 0x8223CE30;
	sub_8230E8B0(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x8223CE34;
	sub_82393CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230eb28
	ctx.lr = 0x8223CE3C;
	sub_8230EB28(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8223CE40;
	sub_82393D48(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8223CE44;
	sub_82393D48(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223ce6c
	if (ctx.cr6.eq) goto loc_8223CE6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-3828
	ctx.r4.s64 = ctx.r11.s64 + -3828;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8223CE64;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223cebc
	goto loc_8223CEBC;
loc_8223CE6C:
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r6,460
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 460, ctx.xer);
	// beq cr6,0x8223ceb8
	if (ctx.cr6.eq) goto loc_8223CEB8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8223cea0
	if (!ctx.cr6.eq) goto loc_8223CEA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3912
	ctx.r4.s64 = ctx.r11.s64 + -3912;
	// bl 0x82280900
	ctx.lr = 0x8223CE98;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223cebc
	goto loc_8223CEBC;
loc_8223CEA0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,460
	ctx.r7.s64 = 460;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// bl 0x82280900
	ctx.lr = 0x8223CEB0;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223cebc
	goto loc_8223CEBC;
loc_8223CEB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223CEBC:
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
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

PPC_WEAK_FUNC(sub_8223CD58) {
	__imp__sub_8223CD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223CED4) {
	__imp__sub_8223CED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223CEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32017
	ctx.r31.s64 = -2098266112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,-28868
	ctx.r30.s64 = ctx.r31.s64 + -28868;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// bl 0x8223c9e0
	ctx.lr = 0x8223CF00;
	sub_8223C9E0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8223CF14;
	sub_82280900(ctx, base);
	// lwz r3,-28868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28868);
	// bl 0x8230eb28
	ctx.lr = 0x8223CF1C;
	sub_8230EB28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-28868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28868, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223CED8) {
	__imp__sub_8223CED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223CF40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8223CF50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223cf50
	if (!ctx.cr6.eq) goto loc_8223CF50;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bgt cr6,0x8223cf88
	if (ctx.cr6.gt) goto loc_8223CF88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8223cf94
	goto loc_8223CF94;
loc_8223CF88:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// li r4,2
	ctx.r4.s64 = 2;
loc_8223CF94:
	// bl 0x822e40f0
	ctx.lr = 0x8223CF98;
	sub_822E40F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8223CFA8;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223CF38) {
	__imp__sub_8223CF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8223CFB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bgt cr6,0x8223cfe8
	if (ctx.cr6.gt) goto loc_8223CFE8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e4480
	ctx.lr = 0x8223CFE0;
	sub_822E4480(ctx, base);
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x8223cff8
	goto loc_8223CFF8;
loc_8223CFE8:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e4480
	ctx.lr = 0x8223CFF4;
	sub_822E4480(ctx, base);
	// lhz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
loc_8223CFF8:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8223d00c
	if (ctx.cr6.lt) goto loc_8223D00C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-5628
	ctx.r3.s64 = ctx.r11.s64 + -5628;
	// bl 0x8230d720
	ctx.lr = 0x8223D00C;
	sub_8230D720(ctx, base);
loc_8223D00C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x8223D01C;
	sub_822E4480(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223CFB0) {
	__imp__sub_8223CFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223D02C) {
	__imp__sub_8223D02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D030) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223d0c4
	if (ctx.cr6.eq) goto loc_8223D0C4;
loc_8223D05C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223d0a0
	if (ctx.cr6.eq) goto loc_8223D0A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8223d08c
	if (ctx.cr6.eq) goto loc_8223D08C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8223d0b0
	if (!ctx.cr6.eq) goto loc_8223D0B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821e2ec8
	ctx.lr = 0x8223D088;
	sub_821E2EC8(ctx, base);
	// b 0x8223d0b0
	goto loc_8223D0B0;
loc_8223D08C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223D09C;
	sub_821E2E18(ctx, base);
	// b 0x8223d0b0
	goto loc_8223D0B0;
loc_8223D0A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x8223D0B0;
	sub_822A24E0(ctx, base);
loc_8223D0B0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8223d05c
	if (!ctx.cr6.eq) goto loc_8223D05C;
loc_8223D0C4:
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

PPC_WEAK_FUNC(sub_8223D030) {
	__imp__sub_8223D030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223D0DC) {
	__imp__sub_8223D0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223D0E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8223d5e4
	if (ctx.cr6.gt) goto loc_8223D5E4;
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12004
	ctx.r12.s64 = ctx.r12.s64 + -12004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8223D16C;
	case 1:
		goto loc_8223D188;
	case 2:
		goto loc_8223D1A4;
	case 3:
		goto loc_8223D208;
	case 4:
		goto loc_8223D258;
	case 5:
		goto loc_8223D2C0;
	case 6:
		goto loc_8223D328;
	case 7:
		goto loc_8223D390;
	case 8:
		goto loc_8223D40C;
	case 9:
		goto loc_8223D474;
	case 10:
		goto loc_8223D504;
	case 11:
		goto loc_8223D4D4;
	case 12:
		goto loc_8223D518;
	case 13:
		goto loc_8223D574;
	case 14:
		goto loc_8223D588;
	case 15:
		goto loc_8223D59C;
	case 16:
		goto loc_8223D5CC;
	case 17:
		goto loc_8223D5CC;
	case 18:
		goto loc_8223D5F4;
	case 19:
		goto loc_8223D5F4;
	default:
		return;
	}
	// lwz r17,-11924(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11924);
	// lwz r17,-11896(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11896);
	// lwz r17,-11868(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11868);
	// lwz r17,-11768(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11768);
	// lwz r17,-11688(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11688);
	// lwz r17,-11584(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11584);
	// lwz r17,-11480(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11480);
	// lwz r17,-11376(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11376);
	// lwz r17,-11252(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11252);
	// lwz r17,-11148(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11148);
	// lwz r17,-11004(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11004);
	// lwz r17,-11052(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11052);
	// lwz r17,-10984(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10984);
	// lwz r17,-10892(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10892);
	// lwz r17,-10872(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10872);
	// lwz r17,-10852(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10852);
	// lwz r17,-10804(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10804);
	// lwz r17,-10804(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10804);
	// lwz r17,-10764(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10764);
	// lwz r17,-10764(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10764);
loc_8223D16C:
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d5f4
	if (ctx.cr6.eq) goto loc_8223D5F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// sthx r11,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D188:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d5f4
	if (ctx.cr6.eq) goto loc_8223D5F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D1A4:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d1c0
	if (!ctx.cr6.eq) goto loc_8223D1C0;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D1C0:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2048, ctx.xer);
	// bgt cr6,0x8223d1e8
	if (ctx.cr6.gt) goto loc_8223D1E8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223d1fc
	if (!ctx.cr6.lt) goto loc_8223D1FC;
loc_8223D1E8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3352
	ctx.r4.s64 = ctx.r11.s64 + -3352;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D1FC;
	sub_822830E8(ctx, base);
loc_8223D1FC:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D208:
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d224
	if (!ctx.cr6.eq) goto loc_8223D224;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D224:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bgt cr6,0x8223d238
	if (ctx.cr6.gt) goto loc_8223D238;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8223d24c
	if (!ctx.cr6.lt) goto loc_8223D24C;
loc_8223D238:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3352
	ctx.r4.s64 = ctx.r11.s64 + -3352;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D24C;
	sub_822830E8(ctx, base);
loc_8223D24C:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D258:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d274
	if (!ctx.cr6.eq) goto loc_8223D274;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D274:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,45016
	ctx.r8.u64 = ctx.r9.u64 | 45016;
	// lwz r10,9624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9624);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r8
	ctx.r11.s32 = ctx.r7.s32 / ctx.r8.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bgt cr6,0x8223d2a0
	if (ctx.cr6.gt) goto loc_8223D2A0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223d2b4
	if (!ctx.cr6.lt) goto loc_8223D2B4;
loc_8223D2A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3392
	ctx.r4.s64 = ctx.r11.s64 + -3392;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D2B4;
	sub_822830E8(ctx, base);
loc_8223D2B4:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D2C0:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d2dc
	if (!ctx.cr6.eq) goto loc_8223D2DC;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D2DC:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r9,5128
	ctx.r9.s64 = 5128;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bgt cr6,0x8223d308
	if (ctx.cr6.gt) goto loc_8223D308;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223d31c
	if (!ctx.cr6.lt) goto loc_8223D31C;
loc_8223D308:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3432
	ctx.r4.s64 = ctx.r11.s64 + -3432;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D31C;
	sub_822830E8(ctx, base);
loc_8223D31C:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D328:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d344
	if (!ctx.cr6.eq) goto loc_8223D344;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D344:
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
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,50
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 50, ctx.xer);
	// bgt cr6,0x8223d370
	if (ctx.cr6.gt) goto loc_8223D370;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223d384
	if (!ctx.cr6.lt) goto loc_8223D384;
loc_8223D370:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3476
	ctx.r4.s64 = ctx.r11.s64 + -3476;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D384;
	sub_822830E8(ctx, base);
loc_8223D384:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D390:
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d3ac
	if (!ctx.cr6.eq) goto loc_8223D3AC;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D3AC:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// mulli r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 * 112;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// li r6,112
	ctx.r6.s64 = 112;
	// addi r10,r7,5560
	ctx.r10.s64 = ctx.r7.s64 + 5560;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,-112
	ctx.r5.s64 = ctx.r11.s64 + -112;
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,50
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 50, ctx.xer);
	// bgt cr6,0x8223d3ec
	if (ctx.cr6.gt) goto loc_8223D3EC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223d400
	if (!ctx.cr6.lt) goto loc_8223D400;
loc_8223D3EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3476
	ctx.r4.s64 = ctx.r11.s64 + -3476;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D400;
	sub_822830E8(ctx, base);
loc_8223D400:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D40C:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d428
	if (!ctx.cr6.eq) goto loc_8223D428;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D428:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r9,972
	ctx.r9.s64 = 972;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// bgt cr6,0x8223d454
	if (ctx.cr6.gt) goto loc_8223D454;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223d468
	if (!ctx.cr6.lt) goto loc_8223D468;
loc_8223D454:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3516
	ctx.r4.s64 = ctx.r11.s64 + -3516;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D468;
	sub_822830E8(ctx, base);
loc_8223D468:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D474:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d490
	if (!ctx.cr6.eq) goto loc_8223D490;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D490:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r9,252
	ctx.r9.s64 = 252;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// ble cr6,0x8223d4c8
	if (!ctx.cr6.gt) goto loc_8223D4C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-3556
	ctx.r4.s64 = ctx.r11.s64 + -3556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D4C8;
	sub_822830E8(ctx, base);
loc_8223D4C8:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D4D4:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223d4f0
	if (!ctx.cr6.eq) goto loc_8223D4F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D4F0:
	// bl 0x82257bd0
	ctx.lr = 0x8223D4F4;
	sub_82257BD0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D504:
	// lhzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x822a08f8
	ctx.lr = 0x8223D50C;
	sub_822A08F8(ctx, base);
	// sthx r3,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D518:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d530
	if (!ctx.cr6.eq) goto loc_8223D530;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D530:
	// addi r10,r5,3388
	ctx.r10.s64 = ctx.r5.s64 + 3388;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223d54c
	if (!ctx.cr6.eq) goto loc_8223D54C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D54C:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r10,6688
	ctx.r10.s64 = ctx.r10.s64 + 6688;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D574:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x822366c8
	ctx.lr = 0x8223D57C;
	sub_822366C8(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D588:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x82359fa0
	ctx.lr = 0x8223D590;
	sub_82359FA0(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D59C:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d5bc
	if (ctx.cr6.eq) goto loc_8223D5BC;
	// bl 0x822f29c8
	ctx.lr = 0x8223D5AC;
	sub_822F29C8(ctx, base);
	// bl 0x82293508
	ctx.lr = 0x8223D5B0;
	sub_82293508(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D5BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D5CC:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r9,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D5E4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-3592
	ctx.r4.s64 = ctx.r11.s64 + -3592;
	// bl 0x822830e8
	ctx.lr = 0x8223D5F4;
	sub_822830E8(ctx, base);
loc_8223D5F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223D0E0) {
	__imp__sub_8223D0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223D5FC) {
	__imp__sub_8223D5FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223D608;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bgt cr6,0x8223d6bc
	if (ctx.cr6.gt) goto loc_8223D6BC;
	// beq cr6,0x8223d680
	if (ctx.cr6.eq) goto loc_8223D680;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223d65c
	if (ctx.cr6.eq) goto loc_8223D65C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223d6fc
	if (!ctx.cr6.eq) goto loc_8223D6FC;
	// lwzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d6fc
	if (ctx.cr6.eq) goto loc_8223D6FC;
	// bl 0x82300a60
	ctx.lr = 0x8223D648;
	sub_82300A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e42f8
	ctx.lr = 0x8223D654;
	sub_822E42F8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D65C:
	// lhzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d6fc
	if (ctx.cr6.eq) goto loc_8223D6FC;
	// bl 0x822a13a0
	ctx.lr = 0x8223D66C;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e42f8
	ctx.lr = 0x8223D678;
	sub_822E42F8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D680:
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223d6fc
	if (ctx.cr6.eq) goto loc_8223D6FC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823de1f0
	ctx.lr = 0x8223D698;
	sub_823DE1F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,116
	ctx.r6.s64 = 116;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8223dc88
	ctx.lr = 0x8223D6B4;
	sub_8223DC88(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8223D6BC:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8223d6fc
	if (!ctx.cr6.eq) goto loc_8223D6FC;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223d6fc
	if (ctx.cr6.eq) goto loc_8223D6FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x823de1f0
	ctx.lr = 0x8223D6DC;
	sub_823DE1F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,96
	ctx.r6.s64 = 96;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r11,r11,-3632
	ctx.r11.s64 = ctx.r11.s64 + -3632;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8223dc88
	ctx.lr = 0x8223D6FC;
	sub_8223DC88(ctx, base);
loc_8223D6FC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223D600) {
	__imp__sub_8223D600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223D704) {
	__imp__sub_8223D704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223D708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8223D710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8223dc70
	if (ctx.cr6.gt) goto loc_8223DC70;
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10420
	ctx.r12.s64 = ctx.r12.s64 + -10420;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8223D79C;
	case 1:
		goto loc_8223D7C8;
	case 2:
		goto loc_8223D7F0;
	case 3:
		goto loc_8223D840;
	case 4:
		goto loc_8223D89C;
	case 5:
		goto loc_8223D8F8;
	case 6:
		goto loc_8223D94C;
	case 7:
		goto loc_8223D9A0;
	case 8:
		goto loc_8223DA00;
	case 9:
		goto loc_8223DA54;
	case 10:
		goto loc_8223DAC4;
	case 11:
		goto loc_8223DAA0;
	case 12:
		goto loc_8223DAD8;
	case 13:
		goto loc_8223DB44;
	case 14:
		goto loc_8223DB58;
	case 15:
		goto loc_8223DB6C;
	case 16:
		goto loc_8223DB9C;
	case 17:
		goto loc_8223DBF8;
	case 18:
		goto loc_8223DC28;
	case 19:
		goto loc_8223DC4C;
	default:
		return;
	}
	// lwz r17,-10340(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10340);
	// lwz r17,-10296(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10296);
	// lwz r17,-10256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10256);
	// lwz r17,-10176(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10176);
	// lwz r17,-10084(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10084);
	// lwz r17,-9992(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9992);
	// lwz r17,-9908(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9908);
	// lwz r17,-9824(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9824);
	// lwz r17,-9728(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9728);
	// lwz r17,-9644(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9644);
	// lwz r17,-9532(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9532);
	// lwz r17,-9568(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9568);
	// lwz r17,-9512(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9512);
	// lwz r17,-9404(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9404);
	// lwz r17,-9384(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9384);
	// lwz r17,-9364(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9364);
	// lwz r17,-9316(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9316);
	// lwz r17,-9224(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9224);
	// lwz r17,-9176(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9176);
	// lwz r17,-9140(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9140);
loc_8223D79C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223dc80
	if (ctx.cr6.eq) goto loc_8223DC80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8223D7B0;
	sub_8223C4D8(ctx, base);
	// bl 0x822e4998
	ctx.lr = 0x8223D7B4;
	sub_822E4998(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d50
	ctx.lr = 0x8223D7BC;
	sub_822A1D50(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D7C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223dc80
	if (ctx.cr6.eq) goto loc_8223DC80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8223D7DC;
	sub_8223C4D8(ctx, base);
	// bl 0x822e4998
	ctx.lr = 0x8223D7E0;
	sub_822E4998(ctx, base);
	// bl 0x8233cf00
	ctx.lr = 0x8223D7E4;
	sub_8233CF00(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D7F0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,2048
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2048, ctx.xer);
	// bgt cr6,0x8223d804
	if (ctx.cr6.gt) goto loc_8223D804;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223d81c
	if (!ctx.cr6.lt) goto loc_8223D81C;
loc_8223D804:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3040
	ctx.r4.s64 = ctx.r11.s64 + -3040;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D818;
	sub_822830E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8223D81C:
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D840:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,2048
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2048, ctx.xer);
	// bgt cr6,0x8223d854
	if (ctx.cr6.gt) goto loc_8223D854;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223d868
	if (!ctx.cr6.lt) goto loc_8223D868;
loc_8223D854:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3040
	ctx.r4.s64 = ctx.r11.s64 + -3040;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D868;
	sub_822830E8(ctx, base);
loc_8223D868:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8223dc80
	if (ctx.cr6.eq) goto loc_8223DC80;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x821e2e18
	ctx.lr = 0x8223D894;
	sub_821E2E18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D89C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bgt cr6,0x8223d8b0
	if (ctx.cr6.gt) goto loc_8223D8B0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223d8c8
	if (!ctx.cr6.lt) goto loc_8223D8C8;
loc_8223D8B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3080
	ctx.r4.s64 = ctx.r11.s64 + -3080;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D8C4;
	sub_822830E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8223D8C8:
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// ori r11,r11,45016
	ctx.r11.u64 = ctx.r11.u64 | 45016;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lwz r11,9624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9624);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D8F8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// bgt cr6,0x8223d90c
	if (ctx.cr6.gt) goto loc_8223D90C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223d924
	if (!ctx.cr6.lt) goto loc_8223D924;
loc_8223D90C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3116
	ctx.r4.s64 = ctx.r11.s64 + -3116;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D920;
	sub_822830E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8223D924:
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r30,5128
	ctx.r10.s64 = ctx.r30.s64 * 5128;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-5128
	ctx.r8.s64 = ctx.r11.s64 + -5128;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D94C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,50
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 50, ctx.xer);
	// bgt cr6,0x8223d960
	if (ctx.cr6.gt) goto loc_8223D960;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223d978
	if (!ctx.cr6.lt) goto loc_8223D978;
loc_8223D960:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3156
	ctx.r4.s64 = ctx.r11.s64 + -3156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D974;
	sub_822830E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8223D978:
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 * 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223D9A0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,50
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 50, ctx.xer);
	// bgt cr6,0x8223d9b4
	if (ctx.cr6.gt) goto loc_8223D9B4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223d9c8
	if (!ctx.cr6.lt) goto loc_8223D9C8;
loc_8223D9B4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3156
	ctx.r4.s64 = ctx.r11.s64 + -3156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223D9C8;
	sub_822830E8(ctx, base);
loc_8223D9C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8223dc80
	if (ctx.cr6.eq) goto loc_8223DC80;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 * 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x821e2ec8
	ctx.lr = 0x8223D9F8;
	sub_821E2EC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DA00:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// bgt cr6,0x8223da14
	if (ctx.cr6.gt) goto loc_8223DA14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223da2c
	if (!ctx.cr6.lt) goto loc_8223DA2C;
loc_8223DA14:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3196
	ctx.r4.s64 = ctx.r11.s64 + -3196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223DA28;
	sub_822830E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8223DA2C:
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r30,972
	ctx.r10.s64 = ctx.r30.s64 * 972;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-972
	ctx.r8.s64 = ctx.r11.s64 + -972;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DA54:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x8223da74
	if (!ctx.cr6.gt) goto loc_8223DA74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3236
	ctx.r4.s64 = ctx.r11.s64 + -3236;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223DA74;
	sub_822830E8(ctx, base);
loc_8223DA74:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r30,252
	ctx.r10.s64 = ctx.r30.s64 * 252;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-252
	ctx.r8.s64 = ctx.r11.s64 + -252;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DAA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82257c08
	ctx.lr = 0x8223DAB8;
	sub_82257C08(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DAC4:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8229f6d0
	ctx.lr = 0x8223DACC;
	sub_8229F6D0(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DAD8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,651
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 651, ctx.xer);
	// bgt cr6,0x8223daec
	if (ctx.cr6.gt) goto loc_8223DAEC;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bge cr6,0x8223db00
	if (!ctx.cr6.lt) goto loc_8223DB00;
loc_8223DAEC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3280
	ctx.r4.s64 = ctx.r11.s64 + -3280;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8223DB00;
	sub_822830E8(ctx, base);
loc_8223DB00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8223db20
	if (!ctx.cr6.eq) goto loc_8223DB20;
	// addi r11,r28,3388
	ctx.r11.s64 = ctx.r28.s64 + 3388;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DB20:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r10,6688
	ctx.r11.s64 = ctx.r10.s64 + 6688;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DB44:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822366f8
	ctx.lr = 0x8223DB4C;
	sub_822366F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DB58:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82359fd0
	ctx.lr = 0x8223DB60;
	sub_82359FD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DB6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223db8c
	if (ctx.cr6.eq) goto loc_8223DB8C;
	// bl 0x82293548
	ctx.lr = 0x8223DB7C;
	sub_82293548(ctx, base);
	// bl 0x82282dc0
	ctx.lr = 0x8223DB80;
	sub_82282DC0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DB8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DB9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223dc80
	if (ctx.cr6.eq) goto loc_8223DC80;
	// li r4,18
	ctx.r4.s64 = 18;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8229e0e8
	ctx.lr = 0x8223DBB4;
	sub_8229E0E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8223e078
	ctx.lr = 0x8223DBC8;
	sub_8223E078(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,-3632
	ctx.r31.s64 = ctx.r11.s64 + -3632;
loc_8223DBD0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d708
	ctx.lr = 0x8223DBE0;
	sub_8223D708(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223dbd0
	if (!ctx.cr6.eq) goto loc_8223DBD0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DBF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223dc80
	if (ctx.cr6.eq) goto loc_8223DC80;
	// li r4,18
	ctx.r4.s64 = 18;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8229e0e8
	ctx.lr = 0x8223DC10;
	sub_8229E0E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8223e078
	ctx.lr = 0x8223DC20;
	sub_8223E078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DC28:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r8,r11,15292
	ctx.r8.s64 = ctx.r11.s64 + 15292;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// sth r7,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DC4C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,15292
	ctx.r8.s64 = ctx.r11.s64 + 15292;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223DC70:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-3312
	ctx.r4.s64 = ctx.r11.s64 + -3312;
	// bl 0x822830e8
	ctx.lr = 0x8223DC80;
	sub_822830E8(ctx, base);
loc_8223DC80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223D708) {
	__imp__sub_8223D708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8223DC90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223dcd8
	if (ctx.cr6.eq) goto loc_8223DCD8;
loc_8223DCB8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d0e0
	ctx.lr = 0x8223DCC8;
	sub_8223D0E0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223dcb8
	if (!ctx.cr6.eq) goto loc_8223DCB8;
loc_8223DCD8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8223DCE8;
	sub_822E40F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223dd18
	if (ctx.cr6.eq) goto loc_8223DD18;
loc_8223DCF8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d600
	ctx.lr = 0x8223DD08;
	sub_8223D600(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223dcf8
	if (!ctx.cr6.eq) goto loc_8223DCF8;
loc_8223DD18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223DC88) {
	__imp__sub_8223DC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223DD28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8223e078
	ctx.lr = 0x8223DD48;
	sub_8223E078(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223dd74
	if (ctx.cr6.eq) goto loc_8223DD74;
loc_8223DD54:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d708
	ctx.lr = 0x8223DD64;
	sub_8223D708(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223dd54
	if (!ctx.cr6.eq) goto loc_8223DD54;
loc_8223DD74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223DD20) {
	__imp__sub_8223DD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DD7C) {
	__imp__sub_8223DD7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DD80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8223dda8
	if (ctx.cr6.lt) goto loc_8223DDA8;
	// beq cr6,0x8223dd94
	if (ctx.cr6.eq) goto loc_8223DD94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223DD94:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
loc_8223DDA8:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DD80) {
	__imp__sub_8223DD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,160
	ctx.r10.s64 = 160;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223DDD0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8223ddd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DDD0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DDC0) {
	__imp__sub_8223DDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DDDC) {
	__imp__sub_8223DDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// lis r9,56
	ctx.r9.s64 = 3670016;
	// addi r8,r11,-28800
	ctx.r8.s64 = ctx.r11.s64 + -28800;
	// ori r7,r10,1280
	ctx.r7.u64 = ctx.r10.u64 | 1280;
	// ori r6,r9,2560
	ctx.r6.u64 = ctx.r9.u64 | 2560;
	// addis r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 + 1835008;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r8,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r8.u32);
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DDE0) {
	__imp__sub_8223DDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DE0C) {
	__imp__sub_8223DE0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// li r9,160
	ctx.r9.s64 = 160;
	// addi r11,r11,-28800
	ctx.r11.s64 = ctx.r11.s64 + -28800;
	// li r8,0
	ctx.r8.s64 = 0;
	// addis r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 3670016;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223DE30:
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8223de30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DE30;
	// li r9,160
	ctx.r9.s64 = 160;
	// addis r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 3670016;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1400
	ctx.r10.s64 = ctx.r10.s64 + 1400;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223DE4C:
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8223de4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DE4C;
	// lis r9,56
	ctx.r9.s64 = 3670016;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// ori r5,r9,1284
	ctx.r5.u64 = ctx.r9.u64 | 1284;
	// lis r9,28
	ctx.r9.s64 = 1835008;
	// lis r4,56
	ctx.r4.s64 = 3670016;
	// ori r8,r10,2560
	ctx.r8.u64 = ctx.r10.u64 | 2560;
	// lis r3,56
	ctx.r3.s64 = 3670016;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// ori r9,r4,1280
	ctx.r9.u64 = ctx.r4.u64 | 1280;
	// lis r31,56
	ctx.r31.s64 = 3670016;
	// addis r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 1835008;
	// ori r5,r3,2564
	ctx.r5.u64 = ctx.r3.u64 | 2564;
	// addis r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 3670016;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addis r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 3670016;
	// stwx r11,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r4,56
	ctx.r4.s64 = 3670016;
	// ori r3,r31,4
	ctx.r3.u64 = ctx.r31.u64 | 4;
	// lis r8,28
	ctx.r8.s64 = 1835008;
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// addi r9,r7,1408
	ctx.r9.s64 = ctx.r7.s64 + 1408;
	// stwx r8,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DE10) {
	__imp__sub_8223DE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DEBC) {
	__imp__sub_8223DEBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DEC0) {
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
	// bl 0x8223de10
	ctx.lr = 0x8223DED0;
	sub_8223DE10(ctx, base);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,2688
	ctx.r8.u64 = ctx.r10.u64 | 2688;
	// li r11,-3000
	ctx.r11.s64 = -3000;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DEC0) {
	__imp__sub_8223DEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// lis r8,56
	ctx.r8.s64 = 3670016;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DEF8) {
	__imp__sub_8223DEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r11,-25984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25984);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,-25984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25984, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DF20) {
	__imp__sub_8223DF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DF34) {
	__imp__sub_8223DF34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DF38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1152
	ctx.r3.s64 = ctx.r3.s64 + 1152;
	// b 0x822e4b00
	sub_822E4B00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223DF38) {
	__imp__sub_8223DF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DF40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1152
	ctx.r3.s64 = ctx.r3.s64 + 1152;
	// b 0x822e4808
	sub_822E4808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223DF40) {
	__imp__sub_8223DF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DF48) {
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
	// addi r3,r3,1152
	ctx.r3.s64 = ctx.r3.s64 + 1152;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// lwz r5,1152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x822e4c28
	ctx.lr = 0x8223DF74;
	sub_822E4C28(ctx, base);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,2688
	ctx.r8.u64 = ctx.r10.u64 | 2688;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,-3000
	ctx.r11.s64 = -3000;
	// stw r7,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r7.u32);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8223DF48) {
	__imp__sub_8223DF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DFA8) {
	__imp__sub_8223DFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DFB4) {
	__imp__sub_8223DFB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DFB8) {
	__imp__sub_8223DFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DFC4) {
	__imp__sub_8223DFC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// lis r9,56
	ctx.r9.s64 = 3670016;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// addi r7,r10,-28800
	ctx.r7.s64 = ctx.r10.s64 + -28800;
	// ori r6,r9,2688
	ctx.r6.u64 = ctx.r9.u64 | 2688;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r5.u32);
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DFC8) {
	__imp__sub_8223DFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223DFF4) {
	__imp__sub_8223DFF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223DFF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223DFF8) {
	__imp__sub_8223DFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E004) {
	__imp__sub_8223E004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E008) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1181(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1181);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E008) {
	__imp__sub_8223E008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223e030
	if (ctx.cr6.eq) goto loc_8223E030;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8223e034
	if (!ctx.cr6.eq) goto loc_8223E034;
loc_8223E030:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8223E034:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E018) {
	__imp__sub_8223E018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E03C) {
	__imp__sub_8223E03C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E040) {
	__imp__sub_8223E040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E054) {
	__imp__sub_8223E054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E058) {
	__imp__sub_8223E058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E06C) {
	__imp__sub_8223E06C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E070) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E070) {
	__imp__sub_8223E070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E078) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// b 0x822e4480
	sub_822E4480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223E078) {
	__imp__sub_8223E078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E088) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E088) {
	__imp__sub_8223E088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E090) {
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
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r11,1152
	ctx.r31.s64 = ctx.r11.s64 + 1152;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r8,1192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1192, ctx.r8.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8223c048
	ctx.lr = 0x8223E0B8;
	sub_8223C048(ctx, base);
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

PPC_WEAK_FUNC(sub_8223E090) {
	__imp__sub_8223E090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E0CC) {
	__imp__sub_8223E0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E0D0) {
	__imp__sub_8223E0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E0D4) {
	__imp__sub_8223E0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223E0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8223de10
	ctx.lr = 0x8223E0F4;
	sub_8223DE10(ctx, base);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// lis r8,56
	ctx.r8.s64 = 3670016;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r5,1152(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1152);
	// bl 0x8223c5e0
	ctx.lr = 0x8223E120;
	sub_8223C5E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223E0D8) {
	__imp__sub_8223E0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// ori r7,r10,2688
	ctx.r7.u64 = ctx.r10.u64 | 2688;
	// addi r8,r11,-28800
	ctx.r8.s64 = ctx.r11.s64 + -28800;
	// addi r6,r9,9624
	ctx.r6.s64 = ctx.r9.s64 + 9624;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r10,52(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfc r3,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E128) {
	__imp__sub_8223E128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2968
	ctx.r4.s64 = ctx.r11.s64 + -2968;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223E160) {
	__imp__sub_8223E160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E174) {
	__imp__sub_8223E174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8223E180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r10,27120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223e1a8
	if (ctx.cr6.eq) goto loc_8223E1A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2720
	ctx.r5.s64 = ctx.r11.s64 + -2720;
	// b 0x8223e29c
	goto loc_8223E29C;
loc_8223E1A8:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8223e1cc
	if (!ctx.cr6.eq) goto loc_8223E1CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2752
	ctx.r5.s64 = ctx.r11.s64 + -2752;
	// b 0x8223e29c
	goto loc_8223E29C;
loc_8223E1CC:
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223e218
	if (ctx.cr6.eq) goto loc_8223E218;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,13964
	ctx.r8.s64 = ctx.r10.s64 + 13964;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2800
	ctx.r3.s64 = ctx.r7.s64 + -2800;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8223E1F8;
	sub_822E84F0(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r6,-2968
	ctx.r4.s64 = ctx.r6.s64 + -2968;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8223E20C;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223E218:
	// lbz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 992);
	// addi r31,r30,992
	ctx.r31.s64 = ctx.r30.s64 + 992;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223e284
	if (ctx.cr6.eq) goto loc_8223E284;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8223E22C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223e22c
	if (!ctx.cr6.eq) goto loc_8223E22C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x823e01e0
	ctx.lr = 0x8223E254;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223e284
	if (!ctx.cr6.eq) goto loc_8223E284;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8223e278
	if (ctx.cr6.eq) goto loc_8223E278;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-2864
	ctx.r3.s64 = ctx.r11.s64 + -2864;
	// b 0x8223e294
	goto loc_8223E294;
loc_8223E278:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223E284:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,-2924
	ctx.r3.s64 = ctx.r11.s64 + -2924;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8223E294:
	// bl 0x822e84f0
	ctx.lr = 0x8223E298;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8223E29C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r10,-2968
	ctx.r4.s64 = ctx.r10.s64 + -2968;
	// bl 0x82280900
	ctx.lr = 0x8223E2AC;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223E178) {
	__imp__sub_8223E178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223e2d8
	if (!ctx.cr6.eq) goto loc_8223E2D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223E2D8:
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E2B8) {
	__imp__sub_8223E2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E2EC) {
	__imp__sub_8223E2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E2F0) {
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
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8223e338
	if (ctx.cr6.eq) goto loc_8223E338;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r11,-2696
	ctx.r4.s64 = ctx.r11.s64 + -2696;
	// bl 0x82280900
	ctx.lr = 0x8223E320;
	sub_82280900(ctx, base);
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
loc_8223E338:
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// addi r3,r11,-3584
	ctx.r3.s64 = ctx.r11.s64 + -3584;
	// addi r4,r10,32576
	ctx.r4.s64 = ctx.r10.s64 + 32576;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x823de1f0
	ctx.lr = 0x8223E350;
	sub_823DE1F0(ctx, base);
	// lis r9,-32017
	ctx.r9.s64 = -2098266112;
	// lis r8,56
	ctx.r8.s64 = 3670016;
	// addi r7,r9,-28800
	ctx.r7.s64 = ctx.r9.s64 + -28800;
	// ori r5,r8,4
	ctx.r5.u64 = ctx.r8.u64 | 4;
	// lis r6,56
	ctx.r6.s64 = 3670016;
	// lis r4,56
	ctx.r4.s64 = 3670016;
	// lis r9,56
	ctx.r9.s64 = 3670016;
	// ori r8,r4,4
	ctx.r8.u64 = ctx.r4.u64 | 4;
	// lwzx r11,r7,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r6,1188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1188, ctx.r6.u32);
	// bl 0x8233edf8
	ctx.lr = 0x8223E390;
	sub_8233EDF8(ctx, base);
	// lbz r5,1192(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1192);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8223e3ac
	if (!ctx.cr6.eq) goto loc_8223E3AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-25736
	ctx.r4.s64 = ctx.r11.s64 + -25736;
	// bl 0x8233cae8
	ctx.lr = 0x8223E3AC;
	sub_8233CAE8(ctx, base);
loc_8223E3AC:
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

PPC_WEAK_FUNC(sub_8223E2F0) {
	__imp__sub_8223E2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E3C4) {
	__imp__sub_8223E3C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E3C8) {
	__imp__sub_8223E3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,1060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E3E0) {
	__imp__sub_8223E3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E408) {
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
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8223e458
	if (ctx.cr6.eq) goto loc_8223E458;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223e458
	if (ctx.cr6.eq) goto loc_8223E458;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r11,-2648
	ctx.r4.s64 = ctx.r11.s64 + -2648;
	// bl 0x82280900
	ctx.lr = 0x8223E440;
	sub_82280900(ctx, base);
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
loc_8223E458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c220
	ctx.lr = 0x8223E460;
	sub_8223C220(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8223E408) {
	__imp__sub_8223E408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E47C) {
	__imp__sub_8223E47C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,2692
	ctx.r8.u64 = ctx.r10.u64 | 2692;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8223e2f0
	sub_8223E2F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223E480) {
	__imp__sub_8223E480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,2692
	ctx.r8.u64 = ctx.r10.u64 | 2692;
	// lbzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E4A0) {
	__imp__sub_8223E4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,2692
	ctx.r8.u64 = ctx.r10.u64 | 2692;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E4B8) {
	__imp__sub_8223E4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E4D4) {
	__imp__sub_8223E4D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,1188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1188, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223E4D8) {
	__imp__sub_8223E4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223E50C) {
	__imp__sub_8223E50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223E510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223E518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x8220ec38
	ctx.lr = 0x8223E528;
	sub_8220EC38(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r31,r10,-25976
	ctx.r31.s64 = ctx.r10.s64 + -25976;
	// addi r3,r9,1196
	ctx.r3.s64 = ctx.r9.s64 + 1196;
	// sth r11,-25976(r10)
	PPC_STORE_U16(ctx.r10.u32 + -25976, ctx.r11.u16);
	// bl 0x8220ec38
	ctx.lr = 0x8223E544;
	sub_8220EC38(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,1184
	ctx.r3.s64 = ctx.r8.s64 + 1184;
	// bl 0x8220ec38
	ctx.lr = 0x8223E554;
	sub_8220EC38(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,1172
	ctx.r3.s64 = ctx.r7.s64 + 1172;
	// bl 0x8220ec38
	ctx.lr = 0x8223E564;
	sub_8220EC38(ctx, base);
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r30,r6,1164
	ctx.r30.s64 = ctx.r6.s64 + 1164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ec38
	ctx.lr = 0x8223E578;
	sub_8220EC38(ctx, base);
	// sth r3,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r3.u16);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,24440
	ctx.r3.s64 = ctx.r5.s64 + 24440;
	// bl 0x8220ec38
	ctx.lr = 0x8223E588;
	sub_8220EC38(ctx, base);
	// sth r3,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r3.u16);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r4,-10220
	ctx.r3.s64 = ctx.r4.s64 + -10220;
	// bl 0x8220ec38
	ctx.lr = 0x8223E598;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r3,r3,-12028
	ctx.r3.s64 = ctx.r3.s64 + -12028;
	// bl 0x8220ec38
	ctx.lr = 0x8223E5AC;
	sub_8220EC38(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,1156
	ctx.r3.s64 = ctx.r10.s64 + 1156;
	// bl 0x8220ec38
	ctx.lr = 0x8223E5BC;
	sub_8220EC38(ctx, base);
	// sth r3,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,1144
	ctx.r3.s64 = ctx.r9.s64 + 1144;
	// bl 0x8220ec38
	ctx.lr = 0x8223E5CC;
	sub_8220EC38(ctx, base);
	// sth r3,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,-10212
	ctx.r3.s64 = ctx.r8.s64 + -10212;
	// bl 0x8220ec38
	ctx.lr = 0x8223E5DC;
	sub_8220EC38(ctx, base);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,1136
	ctx.r3.s64 = ctx.r7.s64 + 1136;
	// bl 0x8220ec38
	ctx.lr = 0x8223E5EC;
	sub_8220EC38(ctx, base);
	// sth r3,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,1124
	ctx.r3.s64 = ctx.r6.s64 + 1124;
	// bl 0x8220ec38
	ctx.lr = 0x8223E5FC;
	sub_8220EC38(ctx, base);
	// sth r3,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,1112
	ctx.r3.s64 = ctx.r5.s64 + 1112;
	// bl 0x8220ec38
	ctx.lr = 0x8223E60C;
	sub_8220EC38(ctx, base);
	// sth r3,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,1096
	ctx.r3.s64 = ctx.r4.s64 + 1096;
	// bl 0x8220ec38
	ctx.lr = 0x8223E61C;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// addi r3,r3,1076
	ctx.r3.s64 = ctx.r3.s64 + 1076;
	// bl 0x8220ec38
	ctx.lr = 0x8223E630;
	sub_8220EC38(ctx, base);
	// sth r3,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,1060
	ctx.r3.s64 = ctx.r10.s64 + 1060;
	// bl 0x8220ec38
	ctx.lr = 0x8223E640;
	sub_8220EC38(ctx, base);
	// sth r3,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,1052
	ctx.r3.s64 = ctx.r9.s64 + 1052;
	// bl 0x8220ec38
	ctx.lr = 0x8223E650;
	sub_8220EC38(ctx, base);
	// sth r3,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,1032
	ctx.r3.s64 = ctx.r8.s64 + 1032;
	// bl 0x8220ec38
	ctx.lr = 0x8223E660;
	sub_8220EC38(ctx, base);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,1024
	ctx.r3.s64 = ctx.r7.s64 + 1024;
	// bl 0x8220ec38
	ctx.lr = 0x8223E670;
	sub_8220EC38(ctx, base);
	// sth r3,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,1016
	ctx.r3.s64 = ctx.r6.s64 + 1016;
	// bl 0x8220ec38
	ctx.lr = 0x8223E680;
	sub_8220EC38(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,1008
	ctx.r3.s64 = ctx.r5.s64 + 1008;
	// bl 0x8220ec38
	ctx.lr = 0x8223E690;
	sub_8220EC38(ctx, base);
	// sth r3,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r3.u16);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r4,-10244
	ctx.r3.s64 = ctx.r4.s64 + -10244;
	// bl 0x8220ec38
	ctx.lr = 0x8223E6A0;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// addi r3,r3,26108
	ctx.r3.s64 = ctx.r3.s64 + 26108;
	// bl 0x8220ec38
	ctx.lr = 0x8223E6B4;
	sub_8220EC38(ctx, base);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,996
	ctx.r3.s64 = ctx.r10.s64 + 996;
	// bl 0x8220ec38
	ctx.lr = 0x8223E6C4;
	sub_8220EC38(ctx, base);
	// sth r3,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r3.u16);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,19728
	ctx.r3.s64 = ctx.r9.s64 + 19728;
	// bl 0x8220ec38
	ctx.lr = 0x8223E6D4;
	sub_8220EC38(ctx, base);
	// sth r3,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,988
	ctx.r3.s64 = ctx.r8.s64 + 988;
	// bl 0x8220ec38
	ctx.lr = 0x8223E6E4;
	sub_8220EC38(ctx, base);
	// sth r3,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,980
	ctx.r3.s64 = ctx.r7.s64 + 980;
	// bl 0x8220ec38
	ctx.lr = 0x8223E6F4;
	sub_8220EC38(ctx, base);
	// sth r3,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,972
	ctx.r3.s64 = ctx.r6.s64 + 972;
	// bl 0x8220ec38
	ctx.lr = 0x8223E704;
	sub_8220EC38(ctx, base);
	// sth r3,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,964
	ctx.r3.s64 = ctx.r5.s64 + 964;
	// bl 0x8220ec38
	ctx.lr = 0x8223E714;
	sub_8220EC38(ctx, base);
	// sth r3,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,948
	ctx.r3.s64 = ctx.r4.s64 + 948;
	// bl 0x8220ec38
	ctx.lr = 0x8223E724;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// addi r3,r3,936
	ctx.r3.s64 = ctx.r3.s64 + 936;
	// bl 0x8220ec38
	ctx.lr = 0x8223E738;
	sub_8220EC38(ctx, base);
	// sth r3,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r3.u16);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,924
	ctx.r3.s64 = ctx.r11.s64 + 924;
	// bl 0x8220ec38
	ctx.lr = 0x8223E748;
	sub_8220EC38(ctx, base);
	// sth r3,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,908
	ctx.r3.s64 = ctx.r10.s64 + 908;
	// bl 0x8220ec38
	ctx.lr = 0x8223E758;
	sub_8220EC38(ctx, base);
	// sth r3,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,900
	ctx.r3.s64 = ctx.r9.s64 + 900;
	// bl 0x8220ec38
	ctx.lr = 0x8223E768;
	sub_8220EC38(ctx, base);
	// sth r3,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,892
	ctx.r3.s64 = ctx.r8.s64 + 892;
	// bl 0x8220ec38
	ctx.lr = 0x8223E778;
	sub_8220EC38(ctx, base);
	// sth r3,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,884
	ctx.r3.s64 = ctx.r7.s64 + 884;
	// bl 0x8220ec38
	ctx.lr = 0x8223E788;
	sub_8220EC38(ctx, base);
	// sth r3,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,868
	ctx.r3.s64 = ctx.r6.s64 + 868;
	// bl 0x8220ec38
	ctx.lr = 0x8223E798;
	sub_8220EC38(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// sth r3,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r3.u16);
	// addi r3,r5,860
	ctx.r3.s64 = ctx.r5.s64 + 860;
	// bl 0x8220ec38
	ctx.lr = 0x8223E7A8;
	sub_8220EC38(ctx, base);
	// sth r3,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,848
	ctx.r3.s64 = ctx.r4.s64 + 848;
	// bl 0x8220ec38
	ctx.lr = 0x8223E7B8;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// sth r11,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r11.u16);
	// addi r3,r3,-10252
	ctx.r3.s64 = ctx.r3.s64 + -10252;
	// bl 0x8220ec38
	ctx.lr = 0x8223E7CC;
	sub_8220EC38(ctx, base);
	// sth r3,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r3.u16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,24360
	ctx.r3.s64 = ctx.r10.s64 + 24360;
	// bl 0x8220ec38
	ctx.lr = 0x8223E7DC;
	sub_8220EC38(ctx, base);
	// sth r3,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,832
	ctx.r3.s64 = ctx.r9.s64 + 832;
	// bl 0x8220ec38
	ctx.lr = 0x8223E7EC;
	sub_8220EC38(ctx, base);
	// sth r3,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,820
	ctx.r3.s64 = ctx.r8.s64 + 820;
	// bl 0x8220ec38
	ctx.lr = 0x8223E7FC;
	sub_8220EC38(ctx, base);
	// sth r3,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r3.u16);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,28604
	ctx.r3.s64 = ctx.r7.s64 + 28604;
	// bl 0x8220ec38
	ctx.lr = 0x8223E80C;
	sub_8220EC38(ctx, base);
	// sth r3,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,804
	ctx.r3.s64 = ctx.r6.s64 + 804;
	// bl 0x8220ec38
	ctx.lr = 0x8223E81C;
	sub_8220EC38(ctx, base);
	// sth r3,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,788
	ctx.r3.s64 = ctx.r5.s64 + 788;
	// bl 0x8220ec38
	ctx.lr = 0x8223E82C;
	sub_8220EC38(ctx, base);
	// sth r3,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,772
	ctx.r3.s64 = ctx.r4.s64 + 772;
	// bl 0x8220ec38
	ctx.lr = 0x8223E83C;
	sub_8220EC38(ctx, base);
	// sth r3,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r3.u16);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x8220ec38
	ctx.lr = 0x8223E84C;
	sub_8220EC38(ctx, base);
	// sth r3,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,736
	ctx.r3.s64 = ctx.r10.s64 + 736;
	// bl 0x8220ec38
	ctx.lr = 0x8223E85C;
	sub_8220EC38(ctx, base);
	// sth r3,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,720
	ctx.r3.s64 = ctx.r9.s64 + 720;
	// bl 0x8220ec38
	ctx.lr = 0x8223E86C;
	sub_8220EC38(ctx, base);
	// sth r3,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-12364
	ctx.r3.s64 = ctx.r8.s64 + -12364;
	// bl 0x8220ec38
	ctx.lr = 0x8223E87C;
	sub_8220EC38(ctx, base);
	// sth r3,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,708
	ctx.r3.s64 = ctx.r7.s64 + 708;
	// bl 0x8220ec38
	ctx.lr = 0x8223E88C;
	sub_8220EC38(ctx, base);
	// sth r3,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,700
	ctx.r3.s64 = ctx.r6.s64 + 700;
	// bl 0x8220ec38
	ctx.lr = 0x8223E89C;
	sub_8220EC38(ctx, base);
	// sth r3,106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 106, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,692
	ctx.r3.s64 = ctx.r5.s64 + 692;
	// bl 0x8220ec38
	ctx.lr = 0x8223E8AC;
	sub_8220EC38(ctx, base);
	// sth r3,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,676
	ctx.r3.s64 = ctx.r4.s64 + 676;
	// bl 0x8220ec38
	ctx.lr = 0x8223E8BC;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// sth r11,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r11.u16);
	// addi r3,r3,-14872
	ctx.r3.s64 = ctx.r3.s64 + -14872;
	// bl 0x8220ec38
	ctx.lr = 0x8223E8D0;
	sub_8220EC38(ctx, base);
	// sth r3,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-12252
	ctx.r3.s64 = ctx.r10.s64 + -12252;
	// bl 0x8220ec38
	ctx.lr = 0x8223E8E0;
	sub_8220EC38(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r3,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r3.u16);
	// addi r3,r9,668
	ctx.r3.s64 = ctx.r9.s64 + 668;
	// bl 0x8220ec38
	ctx.lr = 0x8223E8F0;
	sub_8220EC38(ctx, base);
	// sth r3,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,656
	ctx.r3.s64 = ctx.r8.s64 + 656;
	// bl 0x8220ec38
	ctx.lr = 0x8223E900;
	sub_8220EC38(ctx, base);
	// sth r3,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,644
	ctx.r3.s64 = ctx.r7.s64 + 644;
	// bl 0x8220ec38
	ctx.lr = 0x8223E910;
	sub_8220EC38(ctx, base);
	// sth r3,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r3.u16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r6,13236
	ctx.r3.s64 = ctx.r6.s64 + 13236;
	// bl 0x8220ec38
	ctx.lr = 0x8223E920;
	sub_8220EC38(ctx, base);
	// sth r3,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,636
	ctx.r3.s64 = ctx.r5.s64 + 636;
	// bl 0x8220ec38
	ctx.lr = 0x8223E930;
	sub_8220EC38(ctx, base);
	// sth r3,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-12008
	ctx.r3.s64 = ctx.r4.s64 + -12008;
	// bl 0x8220ec38
	ctx.lr = 0x8223E940;
	sub_8220EC38(ctx, base);
	// sth r3,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r3.u16);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,628
	ctx.r3.s64 = ctx.r3.s64 + 628;
	// bl 0x8220ec38
	ctx.lr = 0x8223E950;
	sub_8220EC38(ctx, base);
	// sth r3,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,620
	ctx.r3.s64 = ctx.r10.s64 + 620;
	// bl 0x8220ec38
	ctx.lr = 0x8223E960;
	sub_8220EC38(ctx, base);
	// sth r3,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,600
	ctx.r3.s64 = ctx.r9.s64 + 600;
	// bl 0x8220ec38
	ctx.lr = 0x8223E970;
	sub_8220EC38(ctx, base);
	// sth r3,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,588
	ctx.r3.s64 = ctx.r8.s64 + 588;
	// bl 0x8220ec38
	ctx.lr = 0x8223E980;
	sub_8220EC38(ctx, base);
	// sth r3,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r3.u16);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,26236
	ctx.r3.s64 = ctx.r7.s64 + 26236;
	// bl 0x8220ec38
	ctx.lr = 0x8223E990;
	sub_8220EC38(ctx, base);
	// sth r3,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,580
	ctx.r3.s64 = ctx.r6.s64 + 580;
	// bl 0x8220ec38
	ctx.lr = 0x8223E9A0;
	sub_8220EC38(ctx, base);
	// sth r3,138(r31)
	PPC_STORE_U16(ctx.r31.u32 + 138, ctx.r3.u16);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-14880
	ctx.r3.s64 = ctx.r5.s64 + -14880;
	// bl 0x8220ec38
	ctx.lr = 0x8223E9B0;
	sub_8220EC38(ctx, base);
	// sth r3,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r3.u16);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r4,-12516
	ctx.r3.s64 = ctx.r4.s64 + -12516;
	// bl 0x8220ec38
	ctx.lr = 0x8223E9C0;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,142(r31)
	PPC_STORE_U16(ctx.r31.u32 + 142, ctx.r11.u16);
	// addi r3,r3,564
	ctx.r3.s64 = ctx.r3.s64 + 564;
	// bl 0x8220ec38
	ctx.lr = 0x8223E9D4;
	sub_8220EC38(ctx, base);
	// sth r3,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,556
	ctx.r3.s64 = ctx.r10.s64 + 556;
	// bl 0x8220ec38
	ctx.lr = 0x8223E9E4;
	sub_8220EC38(ctx, base);
	// sth r3,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,548
	ctx.r3.s64 = ctx.r9.s64 + 548;
	// bl 0x8220ec38
	ctx.lr = 0x8223E9F4;
	sub_8220EC38(ctx, base);
	// sth r3,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,540
	ctx.r3.s64 = ctx.r8.s64 + 540;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA04;
	sub_8220EC38(ctx, base);
	// sth r3,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,528
	ctx.r3.s64 = ctx.r7.s64 + 528;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA14;
	sub_8220EC38(ctx, base);
	// sth r3,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-12296
	ctx.r3.s64 = ctx.r6.s64 + -12296;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA24;
	sub_8220EC38(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// sth r3,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r3.u16);
	// addi r3,r5,-12420
	ctx.r3.s64 = ctx.r5.s64 + -12420;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA34;
	sub_8220EC38(ctx, base);
	// sth r3,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-12436
	ctx.r3.s64 = ctx.r4.s64 + -12436;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA44;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r11.u16);
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA58;
	sub_8220EC38(ctx, base);
	// sth r3,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,504
	ctx.r3.s64 = ctx.r10.s64 + 504;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA68;
	sub_8220EC38(ctx, base);
	// sth r3,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,476
	ctx.r3.s64 = ctx.r9.s64 + 476;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA78;
	sub_8220EC38(ctx, base);
	// sth r3,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,444
	ctx.r3.s64 = ctx.r8.s64 + 444;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA88;
	sub_8220EC38(ctx, base);
	// sth r3,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,412
	ctx.r3.s64 = ctx.r7.s64 + 412;
	// bl 0x8220ec38
	ctx.lr = 0x8223EA98;
	sub_8220EC38(ctx, base);
	// sth r3,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,388
	ctx.r3.s64 = ctx.r6.s64 + 388;
	// bl 0x8220ec38
	ctx.lr = 0x8223EAA8;
	sub_8220EC38(ctx, base);
	// sth r3,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,356
	ctx.r3.s64 = ctx.r5.s64 + 356;
	// bl 0x8220ec38
	ctx.lr = 0x8223EAB8;
	sub_8220EC38(ctx, base);
	// sth r3,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,348
	ctx.r3.s64 = ctx.r4.s64 + 348;
	// bl 0x8220ec38
	ctx.lr = 0x8223EAC8;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r11.u16);
	// addi r3,r3,340
	ctx.r3.s64 = ctx.r3.s64 + 340;
	// bl 0x8220ec38
	ctx.lr = 0x8223EADC;
	sub_8220EC38(ctx, base);
	// sth r3,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,328
	ctx.r3.s64 = ctx.r10.s64 + 328;
	// bl 0x8220ec38
	ctx.lr = 0x8223EAEC;
	sub_8220EC38(ctx, base);
	// sth r3,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,312
	ctx.r3.s64 = ctx.r9.s64 + 312;
	// bl 0x8220ec38
	ctx.lr = 0x8223EAFC;
	sub_8220EC38(ctx, base);
	// sth r3,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,300
	ctx.r3.s64 = ctx.r8.s64 + 300;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB0C;
	sub_8220EC38(ctx, base);
	// sth r3,182(r31)
	PPC_STORE_U16(ctx.r31.u32 + 182, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,292
	ctx.r3.s64 = ctx.r7.s64 + 292;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB1C;
	sub_8220EC38(ctx, base);
	// sth r3,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,272
	ctx.r3.s64 = ctx.r6.s64 + 272;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB2C;
	sub_8220EC38(ctx, base);
	// sth r3,186(r31)
	PPC_STORE_U16(ctx.r31.u32 + 186, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,256
	ctx.r3.s64 = ctx.r5.s64 + 256;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB3C;
	sub_8220EC38(ctx, base);
	// sth r3,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,244
	ctx.r3.s64 = ctx.r4.s64 + 244;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB4C;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,190(r31)
	PPC_STORE_U16(ctx.r31.u32 + 190, ctx.r11.u16);
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB60;
	sub_8220EC38(ctx, base);
	// sth r3,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,220
	ctx.r3.s64 = ctx.r10.s64 + 220;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB70;
	sub_8220EC38(ctx, base);
	// sth r3,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,212
	ctx.r3.s64 = ctx.r9.s64 + 212;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB80;
	sub_8220EC38(ctx, base);
	// sth r3,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,200
	ctx.r3.s64 = ctx.r8.s64 + 200;
	// bl 0x8220ec38
	ctx.lr = 0x8223EB90;
	sub_8220EC38(ctx, base);
	// sth r3,198(r31)
	PPC_STORE_U16(ctx.r31.u32 + 198, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,180
	ctx.r3.s64 = ctx.r7.s64 + 180;
	// bl 0x8220ec38
	ctx.lr = 0x8223EBA0;
	sub_8220EC38(ctx, base);
	// sth r3,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,164
	ctx.r3.s64 = ctx.r6.s64 + 164;
	// bl 0x8220ec38
	ctx.lr = 0x8223EBB0;
	sub_8220EC38(ctx, base);
	// sth r3,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,152
	ctx.r3.s64 = ctx.r5.s64 + 152;
	// bl 0x8220ec38
	ctx.lr = 0x8223EBC0;
	sub_8220EC38(ctx, base);
	// sth r3,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,136
	ctx.r3.s64 = ctx.r4.s64 + 136;
	// bl 0x8220ec38
	ctx.lr = 0x8223EBD0;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,206(r31)
	PPC_STORE_U16(ctx.r31.u32 + 206, ctx.r11.u16);
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// bl 0x8220ec38
	ctx.lr = 0x8223EBE4;
	sub_8220EC38(ctx, base);
	// sth r3,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,116
	ctx.r3.s64 = ctx.r10.s64 + 116;
	// bl 0x8220ec38
	ctx.lr = 0x8223EBF4;
	sub_8220EC38(ctx, base);
	// sth r3,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r29,r9,104
	ctx.r29.s64 = ctx.r9.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC08;
	sub_8220EC38(ctx, base);
	// sth r3,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,88
	ctx.r3.s64 = ctx.r8.s64 + 88;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC18;
	sub_8220EC38(ctx, base);
	// sth r3,214(r31)
	PPC_STORE_U16(ctx.r31.u32 + 214, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,76
	ctx.r3.s64 = ctx.r7.s64 + 76;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC28;
	sub_8220EC38(ctx, base);
	// sth r3,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,64
	ctx.r3.s64 = ctx.r6.s64 + 64;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC38;
	sub_8220EC38(ctx, base);
	// sth r3,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,52
	ctx.r3.s64 = ctx.r5.s64 + 52;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC48;
	sub_8220EC38(ctx, base);
	// sth r3,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,40
	ctx.r3.s64 = ctx.r4.s64 + 40;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC58;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,222(r31)
	PPC_STORE_U16(ctx.r31.u32 + 222, ctx.r11.u16);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC6C;
	sub_8220EC38(ctx, base);
	// sth r3,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC7C;
	sub_8220EC38(ctx, base);
	// sth r3,230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 230, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-8
	ctx.r3.s64 = ctx.r9.s64 + -8;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC8C;
	sub_8220EC38(ctx, base);
	// sth r3,226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 226, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-28
	ctx.r3.s64 = ctx.r8.s64 + -28;
	// bl 0x8220ec38
	ctx.lr = 0x8223EC9C;
	sub_8220EC38(ctx, base);
	// sth r3,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-44
	ctx.r3.s64 = ctx.r7.s64 + -44;
	// bl 0x8220ec38
	ctx.lr = 0x8223ECAC;
	sub_8220EC38(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// sth r3,232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 232, ctx.r3.u16);
	// addi r3,r6,-56
	ctx.r3.s64 = ctx.r6.s64 + -56;
	// bl 0x8220ec38
	ctx.lr = 0x8223ECBC;
	sub_8220EC38(ctx, base);
	// sth r3,234(r31)
	PPC_STORE_U16(ctx.r31.u32 + 234, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-72
	ctx.r3.s64 = ctx.r5.s64 + -72;
	// bl 0x8220ec38
	ctx.lr = 0x8223ECCC;
	sub_8220EC38(ctx, base);
	// sth r3,236(r31)
	PPC_STORE_U16(ctx.r31.u32 + 236, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-84
	ctx.r3.s64 = ctx.r4.s64 + -84;
	// bl 0x8220ec38
	ctx.lr = 0x8223ECDC;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,238(r31)
	PPC_STORE_U16(ctx.r31.u32 + 238, ctx.r11.u16);
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// bl 0x8220ec38
	ctx.lr = 0x8223ECF0;
	sub_8220EC38(ctx, base);
	// sth r3,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-116
	ctx.r3.s64 = ctx.r10.s64 + -116;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED00;
	sub_8220EC38(ctx, base);
	// sth r3,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-132
	ctx.r3.s64 = ctx.r9.s64 + -132;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED10;
	sub_8220EC38(ctx, base);
	// sth r3,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-156
	ctx.r3.s64 = ctx.r8.s64 + -156;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED20;
	sub_8220EC38(ctx, base);
	// sth r3,246(r31)
	PPC_STORE_U16(ctx.r31.u32 + 246, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-176
	ctx.r3.s64 = ctx.r7.s64 + -176;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED30;
	sub_8220EC38(ctx, base);
	// sth r3,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-196
	ctx.r3.s64 = ctx.r6.s64 + -196;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED40;
	sub_8220EC38(ctx, base);
	// sth r3,250(r31)
	PPC_STORE_U16(ctx.r31.u32 + 250, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-220
	ctx.r3.s64 = ctx.r5.s64 + -220;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED50;
	sub_8220EC38(ctx, base);
	// sth r3,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-248
	ctx.r3.s64 = ctx.r4.s64 + -248;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED60;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 254, ctx.r11.u16);
	// addi r3,r3,-268
	ctx.r3.s64 = ctx.r3.s64 + -268;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED74;
	sub_8220EC38(ctx, base);
	// sth r3,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-292
	ctx.r3.s64 = ctx.r10.s64 + -292;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED84;
	sub_8220EC38(ctx, base);
	// sth r3,258(r31)
	PPC_STORE_U16(ctx.r31.u32 + 258, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-308
	ctx.r3.s64 = ctx.r9.s64 + -308;
	// bl 0x8220ec38
	ctx.lr = 0x8223ED94;
	sub_8220EC38(ctx, base);
	// sth r3,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r3.u16);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,-10000
	ctx.r3.s64 = ctx.r8.s64 + -10000;
	// bl 0x8220ec38
	ctx.lr = 0x8223EDA4;
	sub_8220EC38(ctx, base);
	// sth r3,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-316
	ctx.r3.s64 = ctx.r7.s64 + -316;
	// bl 0x8220ec38
	ctx.lr = 0x8223EDB4;
	sub_8220EC38(ctx, base);
	// sth r3,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-324
	ctx.r3.s64 = ctx.r6.s64 + -324;
	// bl 0x8220ec38
	ctx.lr = 0x8223EDC4;
	sub_8220EC38(ctx, base);
	// sth r3,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-12160
	ctx.r3.s64 = ctx.r5.s64 + -12160;
	// bl 0x8220ec38
	ctx.lr = 0x8223EDD4;
	sub_8220EC38(ctx, base);
	// sth r3,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-12148
	ctx.r3.s64 = ctx.r4.s64 + -12148;
	// bl 0x8220ec38
	ctx.lr = 0x8223EDE4;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,270(r31)
	PPC_STORE_U16(ctx.r31.u32 + 270, ctx.r11.u16);
	// addi r3,r3,-12244
	ctx.r3.s64 = ctx.r3.s64 + -12244;
	// bl 0x8220ec38
	ctx.lr = 0x8223EDF8;
	sub_8220EC38(ctx, base);
	// sth r3,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-336
	ctx.r3.s64 = ctx.r10.s64 + -336;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE08;
	sub_8220EC38(ctx, base);
	// sth r3,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-352
	ctx.r3.s64 = ctx.r9.s64 + -352;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE18;
	sub_8220EC38(ctx, base);
	// sth r3,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-368
	ctx.r3.s64 = ctx.r8.s64 + -368;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE28;
	sub_8220EC38(ctx, base);
	// sth r3,278(r31)
	PPC_STORE_U16(ctx.r31.u32 + 278, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-392
	ctx.r3.s64 = ctx.r7.s64 + -392;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE38;
	sub_8220EC38(ctx, base);
	// sth r3,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-408
	ctx.r3.s64 = ctx.r6.s64 + -408;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE48;
	sub_8220EC38(ctx, base);
	// sth r3,282(r31)
	PPC_STORE_U16(ctx.r31.u32 + 282, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-424
	ctx.r3.s64 = ctx.r5.s64 + -424;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE58;
	sub_8220EC38(ctx, base);
	// sth r3,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-10696
	ctx.r3.s64 = ctx.r4.s64 + -10696;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE68;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,286(r31)
	PPC_STORE_U16(ctx.r31.u32 + 286, ctx.r11.u16);
	// addi r3,r3,-436
	ctx.r3.s64 = ctx.r3.s64 + -436;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE7C;
	sub_8220EC38(ctx, base);
	// sth r3,288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 288, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-444
	ctx.r3.s64 = ctx.r10.s64 + -444;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE8C;
	sub_8220EC38(ctx, base);
	// sth r3,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-452
	ctx.r3.s64 = ctx.r9.s64 + -452;
	// bl 0x8220ec38
	ctx.lr = 0x8223EE9C;
	sub_8220EC38(ctx, base);
	// sth r3,292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 292, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-460
	ctx.r3.s64 = ctx.r8.s64 + -460;
	// bl 0x8220ec38
	ctx.lr = 0x8223EEAC;
	sub_8220EC38(ctx, base);
	// sth r3,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-476
	ctx.r3.s64 = ctx.r7.s64 + -476;
	// bl 0x8220ec38
	ctx.lr = 0x8223EEBC;
	sub_8220EC38(ctx, base);
	// sth r3,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-492
	ctx.r3.s64 = ctx.r6.s64 + -492;
	// bl 0x8220ec38
	ctx.lr = 0x8223EECC;
	sub_8220EC38(ctx, base);
	// sth r3,298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 298, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-512
	ctx.r3.s64 = ctx.r5.s64 + -512;
	// bl 0x8220ec38
	ctx.lr = 0x8223EEDC;
	sub_8220EC38(ctx, base);
	// sth r3,300(r31)
	PPC_STORE_U16(ctx.r31.u32 + 300, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-524
	ctx.r3.s64 = ctx.r4.s64 + -524;
	// bl 0x8220ec38
	ctx.lr = 0x8223EEEC;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,302(r31)
	PPC_STORE_U16(ctx.r31.u32 + 302, ctx.r11.u16);
	// addi r3,r3,-544
	ctx.r3.s64 = ctx.r3.s64 + -544;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF00;
	sub_8220EC38(ctx, base);
	// sth r3,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-564
	ctx.r3.s64 = ctx.r10.s64 + -564;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF10;
	sub_8220EC38(ctx, base);
	// sth r3,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-588
	ctx.r3.s64 = ctx.r9.s64 + -588;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF20;
	sub_8220EC38(ctx, base);
	// sth r3,308(r31)
	PPC_STORE_U16(ctx.r31.u32 + 308, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-600
	ctx.r3.s64 = ctx.r8.s64 + -600;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF30;
	sub_8220EC38(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// sth r3,310(r31)
	PPC_STORE_U16(ctx.r31.u32 + 310, ctx.r3.u16);
	// addi r3,r7,-620
	ctx.r3.s64 = ctx.r7.s64 + -620;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF40;
	sub_8220EC38(ctx, base);
	// sth r3,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-636
	ctx.r3.s64 = ctx.r6.s64 + -636;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF50;
	sub_8220EC38(ctx, base);
	// sth r3,314(r31)
	PPC_STORE_U16(ctx.r31.u32 + 314, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-660
	ctx.r3.s64 = ctx.r5.s64 + -660;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF60;
	sub_8220EC38(ctx, base);
	// sth r3,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-672
	ctx.r3.s64 = ctx.r4.s64 + -672;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF70;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,318(r31)
	PPC_STORE_U16(ctx.r31.u32 + 318, ctx.r11.u16);
	// addi r3,r3,-688
	ctx.r3.s64 = ctx.r3.s64 + -688;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF84;
	sub_8220EC38(ctx, base);
	// sth r3,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r3.u16);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-700
	ctx.r3.s64 = ctx.r11.s64 + -700;
	// bl 0x8220ec38
	ctx.lr = 0x8223EF94;
	sub_8220EC38(ctx, base);
	// sth r3,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-712
	ctx.r3.s64 = ctx.r10.s64 + -712;
	// bl 0x8220ec38
	ctx.lr = 0x8223EFA4;
	sub_8220EC38(ctx, base);
	// sth r3,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-724
	ctx.r3.s64 = ctx.r9.s64 + -724;
	// bl 0x8220ec38
	ctx.lr = 0x8223EFB4;
	sub_8220EC38(ctx, base);
	// sth r3,326(r31)
	PPC_STORE_U16(ctx.r31.u32 + 326, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-744
	ctx.r3.s64 = ctx.r8.s64 + -744;
	// bl 0x8220ec38
	ctx.lr = 0x8223EFC4;
	sub_8220EC38(ctx, base);
	// sth r3,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-760
	ctx.r3.s64 = ctx.r7.s64 + -760;
	// bl 0x8220ec38
	ctx.lr = 0x8223EFD4;
	sub_8220EC38(ctx, base);
	// sth r3,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-772
	ctx.r3.s64 = ctx.r6.s64 + -772;
	// bl 0x8220ec38
	ctx.lr = 0x8223EFE4;
	sub_8220EC38(ctx, base);
	// sth r3,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-12328
	ctx.r3.s64 = ctx.r5.s64 + -12328;
	// bl 0x8220ec38
	ctx.lr = 0x8223EFF4;
	sub_8220EC38(ctx, base);
	// sth r3,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-800
	ctx.r3.s64 = ctx.r4.s64 + -800;
	// bl 0x8220ec38
	ctx.lr = 0x8223F004;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// addi r3,r3,-12460
	ctx.r3.s64 = ctx.r3.s64 + -12460;
	// bl 0x8220ec38
	ctx.lr = 0x8223F018;
	sub_8220EC38(ctx, base);
	// sth r3,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-824
	ctx.r3.s64 = ctx.r10.s64 + -824;
	// bl 0x8220ec38
	ctx.lr = 0x8223F028;
	sub_8220EC38(ctx, base);
	// sth r3,340(r31)
	PPC_STORE_U16(ctx.r31.u32 + 340, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-844
	ctx.r3.s64 = ctx.r9.s64 + -844;
	// bl 0x8220ec38
	ctx.lr = 0x8223F038;
	sub_8220EC38(ctx, base);
	// sth r3,342(r31)
	PPC_STORE_U16(ctx.r31.u32 + 342, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-856
	ctx.r3.s64 = ctx.r8.s64 + -856;
	// bl 0x8220ec38
	ctx.lr = 0x8223F048;
	sub_8220EC38(ctx, base);
	// sth r3,344(r31)
	PPC_STORE_U16(ctx.r31.u32 + 344, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-872
	ctx.r3.s64 = ctx.r7.s64 + -872;
	// bl 0x8220ec38
	ctx.lr = 0x8223F058;
	sub_8220EC38(ctx, base);
	// sth r3,346(r31)
	PPC_STORE_U16(ctx.r31.u32 + 346, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-896
	ctx.r3.s64 = ctx.r6.s64 + -896;
	// bl 0x8220ec38
	ctx.lr = 0x8223F068;
	sub_8220EC38(ctx, base);
	// sth r3,348(r31)
	PPC_STORE_U16(ctx.r31.u32 + 348, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-916
	ctx.r3.s64 = ctx.r5.s64 + -916;
	// bl 0x8220ec38
	ctx.lr = 0x8223F078;
	sub_8220EC38(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// sth r3,350(r31)
	PPC_STORE_U16(ctx.r31.u32 + 350, ctx.r3.u16);
	// addi r3,r4,-936
	ctx.r3.s64 = ctx.r4.s64 + -936;
	// bl 0x8220ec38
	ctx.lr = 0x8223F088;
	sub_8220EC38(ctx, base);
	// sth r3,352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 352, ctx.r3.u16);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,-960
	ctx.r3.s64 = ctx.r3.s64 + -960;
	// bl 0x8220ec38
	ctx.lr = 0x8223F098;
	sub_8220EC38(ctx, base);
	// sth r3,354(r31)
	PPC_STORE_U16(ctx.r31.u32 + 354, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-984
	ctx.r3.s64 = ctx.r10.s64 + -984;
	// bl 0x8220ec38
	ctx.lr = 0x8223F0A8;
	sub_8220EC38(ctx, base);
	// sth r3,356(r31)
	PPC_STORE_U16(ctx.r31.u32 + 356, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1004
	ctx.r3.s64 = ctx.r9.s64 + -1004;
	// bl 0x8220ec38
	ctx.lr = 0x8223F0B8;
	sub_8220EC38(ctx, base);
	// sth r3,358(r31)
	PPC_STORE_U16(ctx.r31.u32 + 358, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1024
	ctx.r3.s64 = ctx.r8.s64 + -1024;
	// bl 0x8220ec38
	ctx.lr = 0x8223F0C8;
	sub_8220EC38(ctx, base);
	// sth r3,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1044
	ctx.r3.s64 = ctx.r7.s64 + -1044;
	// bl 0x8220ec38
	ctx.lr = 0x8223F0D8;
	sub_8220EC38(ctx, base);
	// sth r3,362(r31)
	PPC_STORE_U16(ctx.r31.u32 + 362, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1064
	ctx.r3.s64 = ctx.r6.s64 + -1064;
	// bl 0x8220ec38
	ctx.lr = 0x8223F0E8;
	sub_8220EC38(ctx, base);
	// sth r3,364(r31)
	PPC_STORE_U16(ctx.r31.u32 + 364, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1084
	ctx.r3.s64 = ctx.r5.s64 + -1084;
	// bl 0x8220ec38
	ctx.lr = 0x8223F0F8;
	sub_8220EC38(ctx, base);
	// sth r3,366(r31)
	PPC_STORE_U16(ctx.r31.u32 + 366, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1104
	ctx.r3.s64 = ctx.r4.s64 + -1104;
	// bl 0x8220ec38
	ctx.lr = 0x8223F108;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// addi r3,r3,-1116
	ctx.r3.s64 = ctx.r3.s64 + -1116;
	// bl 0x8220ec38
	ctx.lr = 0x8223F11C;
	sub_8220EC38(ctx, base);
	// sth r3,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1140
	ctx.r3.s64 = ctx.r10.s64 + -1140;
	// bl 0x8220ec38
	ctx.lr = 0x8223F12C;
	sub_8220EC38(ctx, base);
	// sth r3,372(r31)
	PPC_STORE_U16(ctx.r31.u32 + 372, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1164
	ctx.r3.s64 = ctx.r9.s64 + -1164;
	// bl 0x8220ec38
	ctx.lr = 0x8223F13C;
	sub_8220EC38(ctx, base);
	// sth r3,374(r31)
	PPC_STORE_U16(ctx.r31.u32 + 374, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1184
	ctx.r3.s64 = ctx.r8.s64 + -1184;
	// bl 0x8220ec38
	ctx.lr = 0x8223F14C;
	sub_8220EC38(ctx, base);
	// sth r3,376(r31)
	PPC_STORE_U16(ctx.r31.u32 + 376, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1208
	ctx.r3.s64 = ctx.r7.s64 + -1208;
	// bl 0x8220ec38
	ctx.lr = 0x8223F15C;
	sub_8220EC38(ctx, base);
	// sth r3,378(r31)
	PPC_STORE_U16(ctx.r31.u32 + 378, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1232
	ctx.r3.s64 = ctx.r6.s64 + -1232;
	// bl 0x8220ec38
	ctx.lr = 0x8223F16C;
	sub_8220EC38(ctx, base);
	// sth r3,380(r31)
	PPC_STORE_U16(ctx.r31.u32 + 380, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1256
	ctx.r3.s64 = ctx.r5.s64 + -1256;
	// bl 0x8220ec38
	ctx.lr = 0x8223F17C;
	sub_8220EC38(ctx, base);
	// sth r3,382(r31)
	PPC_STORE_U16(ctx.r31.u32 + 382, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1268
	ctx.r3.s64 = ctx.r4.s64 + -1268;
	// bl 0x8220ec38
	ctx.lr = 0x8223F18C;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,384(r31)
	PPC_STORE_U16(ctx.r31.u32 + 384, ctx.r11.u16);
	// addi r3,r3,-1280
	ctx.r3.s64 = ctx.r3.s64 + -1280;
	// bl 0x8220ec38
	ctx.lr = 0x8223F1A0;
	sub_8220EC38(ctx, base);
	// sth r3,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1292
	ctx.r3.s64 = ctx.r10.s64 + -1292;
	// bl 0x8220ec38
	ctx.lr = 0x8223F1B0;
	sub_8220EC38(ctx, base);
	// sth r3,388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 388, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1304
	ctx.r3.s64 = ctx.r9.s64 + -1304;
	// bl 0x8220ec38
	ctx.lr = 0x8223F1C0;
	sub_8220EC38(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// sth r3,390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 390, ctx.r3.u16);
	// addi r3,r8,-1320
	ctx.r3.s64 = ctx.r8.s64 + -1320;
	// bl 0x8220ec38
	ctx.lr = 0x8223F1D0;
	sub_8220EC38(ctx, base);
	// sth r3,392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 392, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1332
	ctx.r3.s64 = ctx.r7.s64 + -1332;
	// bl 0x8220ec38
	ctx.lr = 0x8223F1E0;
	sub_8220EC38(ctx, base);
	// sth r3,394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 394, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1344
	ctx.r3.s64 = ctx.r6.s64 + -1344;
	// bl 0x8220ec38
	ctx.lr = 0x8223F1F0;
	sub_8220EC38(ctx, base);
	// sth r3,396(r31)
	PPC_STORE_U16(ctx.r31.u32 + 396, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1356
	ctx.r3.s64 = ctx.r5.s64 + -1356;
	// bl 0x8220ec38
	ctx.lr = 0x8223F200;
	sub_8220EC38(ctx, base);
	// sth r3,398(r31)
	PPC_STORE_U16(ctx.r31.u32 + 398, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1368
	ctx.r3.s64 = ctx.r4.s64 + -1368;
	// bl 0x8220ec38
	ctx.lr = 0x8223F210;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// addi r3,r3,-1380
	ctx.r3.s64 = ctx.r3.s64 + -1380;
	// bl 0x8220ec38
	ctx.lr = 0x8223F224;
	sub_8220EC38(ctx, base);
	// sth r3,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1392
	ctx.r3.s64 = ctx.r10.s64 + -1392;
	// bl 0x8220ec38
	ctx.lr = 0x8223F234;
	sub_8220EC38(ctx, base);
	// sth r3,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1408
	ctx.r3.s64 = ctx.r9.s64 + -1408;
	// bl 0x8220ec38
	ctx.lr = 0x8223F244;
	sub_8220EC38(ctx, base);
	// sth r3,406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 406, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1424
	ctx.r3.s64 = ctx.r8.s64 + -1424;
	// bl 0x8220ec38
	ctx.lr = 0x8223F254;
	sub_8220EC38(ctx, base);
	// sth r3,408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 408, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1440
	ctx.r3.s64 = ctx.r7.s64 + -1440;
	// bl 0x8220ec38
	ctx.lr = 0x8223F264;
	sub_8220EC38(ctx, base);
	// sth r3,410(r31)
	PPC_STORE_U16(ctx.r31.u32 + 410, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1464
	ctx.r3.s64 = ctx.r6.s64 + -1464;
	// bl 0x8220ec38
	ctx.lr = 0x8223F274;
	sub_8220EC38(ctx, base);
	// sth r3,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1480
	ctx.r3.s64 = ctx.r5.s64 + -1480;
	// bl 0x8220ec38
	ctx.lr = 0x8223F284;
	sub_8220EC38(ctx, base);
	// sth r3,414(r31)
	PPC_STORE_U16(ctx.r31.u32 + 414, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1492
	ctx.r3.s64 = ctx.r4.s64 + -1492;
	// bl 0x8220ec38
	ctx.lr = 0x8223F294;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,416(r31)
	PPC_STORE_U16(ctx.r31.u32 + 416, ctx.r11.u16);
	// addi r3,r3,-1504
	ctx.r3.s64 = ctx.r3.s64 + -1504;
	// bl 0x8220ec38
	ctx.lr = 0x8223F2A8;
	sub_8220EC38(ctx, base);
	// sth r3,418(r31)
	PPC_STORE_U16(ctx.r31.u32 + 418, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1520
	ctx.r3.s64 = ctx.r10.s64 + -1520;
	// bl 0x8220ec38
	ctx.lr = 0x8223F2B8;
	sub_8220EC38(ctx, base);
	// sth r3,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1540
	ctx.r3.s64 = ctx.r9.s64 + -1540;
	// bl 0x8220ec38
	ctx.lr = 0x8223F2C8;
	sub_8220EC38(ctx, base);
	// sth r3,422(r31)
	PPC_STORE_U16(ctx.r31.u32 + 422, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1552
	ctx.r3.s64 = ctx.r8.s64 + -1552;
	// bl 0x8220ec38
	ctx.lr = 0x8223F2D8;
	sub_8220EC38(ctx, base);
	// sth r3,424(r31)
	PPC_STORE_U16(ctx.r31.u32 + 424, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1560
	ctx.r3.s64 = ctx.r7.s64 + -1560;
	// bl 0x8220ec38
	ctx.lr = 0x8223F2E8;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,426(r31)
	PPC_STORE_U16(ctx.r31.u32 + 426, ctx.r11.u16);
	// bl 0x8220ec38
	ctx.lr = 0x8223F2F8;
	sub_8220EC38(ctx, base);
	// sth r3,428(r31)
	PPC_STORE_U16(ctx.r31.u32 + 428, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1568
	ctx.r3.s64 = ctx.r6.s64 + -1568;
	// bl 0x8220ec38
	ctx.lr = 0x8223F308;
	sub_8220EC38(ctx, base);
	// sth r3,430(r31)
	PPC_STORE_U16(ctx.r31.u32 + 430, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1576
	ctx.r3.s64 = ctx.r5.s64 + -1576;
	// bl 0x8220ec38
	ctx.lr = 0x8223F318;
	sub_8220EC38(ctx, base);
	// sth r3,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1584
	ctx.r3.s64 = ctx.r4.s64 + -1584;
	// bl 0x8220ec38
	ctx.lr = 0x8223F328;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// sth r11,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r11.u16);
	// addi r3,r3,-26052
	ctx.r3.s64 = ctx.r3.s64 + -26052;
	// bl 0x8220ec38
	ctx.lr = 0x8223F33C;
	sub_8220EC38(ctx, base);
	// sth r3,436(r31)
	PPC_STORE_U16(ctx.r31.u32 + 436, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1592
	ctx.r3.s64 = ctx.r10.s64 + -1592;
	// bl 0x8220ec38
	ctx.lr = 0x8223F34C;
	sub_8220EC38(ctx, base);
	// sth r3,438(r31)
	PPC_STORE_U16(ctx.r31.u32 + 438, ctx.r3.u16);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-14792
	ctx.r3.s64 = ctx.r9.s64 + -14792;
	// bl 0x8220ec38
	ctx.lr = 0x8223F35C;
	sub_8220EC38(ctx, base);
	// sth r3,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1604
	ctx.r3.s64 = ctx.r8.s64 + -1604;
	// bl 0x8220ec38
	ctx.lr = 0x8223F36C;
	sub_8220EC38(ctx, base);
	// sth r3,442(r31)
	PPC_STORE_U16(ctx.r31.u32 + 442, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1616
	ctx.r3.s64 = ctx.r7.s64 + -1616;
	// bl 0x8220ec38
	ctx.lr = 0x8223F37C;
	sub_8220EC38(ctx, base);
	// sth r3,444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 444, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1632
	ctx.r3.s64 = ctx.r6.s64 + -1632;
	// bl 0x8220ec38
	ctx.lr = 0x8223F38C;
	sub_8220EC38(ctx, base);
	// sth r3,446(r31)
	PPC_STORE_U16(ctx.r31.u32 + 446, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1652
	ctx.r3.s64 = ctx.r5.s64 + -1652;
	// bl 0x8220ec38
	ctx.lr = 0x8223F39C;
	sub_8220EC38(ctx, base);
	// sth r3,448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 448, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1664
	ctx.r3.s64 = ctx.r4.s64 + -1664;
	// bl 0x8220ec38
	ctx.lr = 0x8223F3AC;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 450, ctx.r11.u16);
	// addi r3,r3,-1676
	ctx.r3.s64 = ctx.r3.s64 + -1676;
	// bl 0x8220ec38
	ctx.lr = 0x8223F3C0;
	sub_8220EC38(ctx, base);
	// sth r3,452(r31)
	PPC_STORE_U16(ctx.r31.u32 + 452, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1688
	ctx.r3.s64 = ctx.r10.s64 + -1688;
	// bl 0x8220ec38
	ctx.lr = 0x8223F3D0;
	sub_8220EC38(ctx, base);
	// sth r3,454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 454, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1700
	ctx.r3.s64 = ctx.r9.s64 + -1700;
	// bl 0x8220ec38
	ctx.lr = 0x8223F3E0;
	sub_8220EC38(ctx, base);
	// sth r3,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1716
	ctx.r3.s64 = ctx.r8.s64 + -1716;
	// bl 0x8220ec38
	ctx.lr = 0x8223F3F0;
	sub_8220EC38(ctx, base);
	// sth r3,458(r31)
	PPC_STORE_U16(ctx.r31.u32 + 458, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1732
	ctx.r3.s64 = ctx.r7.s64 + -1732;
	// bl 0x8220ec38
	ctx.lr = 0x8223F400;
	sub_8220EC38(ctx, base);
	// sth r3,460(r31)
	PPC_STORE_U16(ctx.r31.u32 + 460, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1744
	ctx.r3.s64 = ctx.r6.s64 + -1744;
	// bl 0x8220ec38
	ctx.lr = 0x8223F410;
	sub_8220EC38(ctx, base);
	// sth r3,462(r31)
	PPC_STORE_U16(ctx.r31.u32 + 462, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1756
	ctx.r3.s64 = ctx.r5.s64 + -1756;
	// bl 0x8220ec38
	ctx.lr = 0x8223F420;
	sub_8220EC38(ctx, base);
	// sth r3,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1764
	ctx.r3.s64 = ctx.r4.s64 + -1764;
	// bl 0x8220ec38
	ctx.lr = 0x8223F430;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r11.u16);
	// addi r3,r3,-1772
	ctx.r3.s64 = ctx.r3.s64 + -1772;
	// bl 0x8220ec38
	ctx.lr = 0x8223F444;
	sub_8220EC38(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// sth r3,468(r31)
	PPC_STORE_U16(ctx.r31.u32 + 468, ctx.r3.u16);
	// addi r3,r10,-1784
	ctx.r3.s64 = ctx.r10.s64 + -1784;
	// bl 0x8220ec38
	ctx.lr = 0x8223F454;
	sub_8220EC38(ctx, base);
	// sth r3,470(r31)
	PPC_STORE_U16(ctx.r31.u32 + 470, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1796
	ctx.r3.s64 = ctx.r9.s64 + -1796;
	// bl 0x8220ec38
	ctx.lr = 0x8223F464;
	sub_8220EC38(ctx, base);
	// sth r3,472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 472, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1804
	ctx.r3.s64 = ctx.r8.s64 + -1804;
	// bl 0x8220ec38
	ctx.lr = 0x8223F474;
	sub_8220EC38(ctx, base);
	// sth r3,474(r31)
	PPC_STORE_U16(ctx.r31.u32 + 474, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1812
	ctx.r3.s64 = ctx.r7.s64 + -1812;
	// bl 0x8220ec38
	ctx.lr = 0x8223F484;
	sub_8220EC38(ctx, base);
	// sth r3,476(r31)
	PPC_STORE_U16(ctx.r31.u32 + 476, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-1820
	ctx.r3.s64 = ctx.r6.s64 + -1820;
	// bl 0x8220ec38
	ctx.lr = 0x8223F494;
	sub_8220EC38(ctx, base);
	// sth r3,478(r31)
	PPC_STORE_U16(ctx.r31.u32 + 478, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-1840
	ctx.r3.s64 = ctx.r5.s64 + -1840;
	// bl 0x8220ec38
	ctx.lr = 0x8223F4A4;
	sub_8220EC38(ctx, base);
	// sth r3,480(r31)
	PPC_STORE_U16(ctx.r31.u32 + 480, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1856
	ctx.r3.s64 = ctx.r4.s64 + -1856;
	// bl 0x8220ec38
	ctx.lr = 0x8223F4B4;
	sub_8220EC38(ctx, base);
	// sth r3,482(r31)
	PPC_STORE_U16(ctx.r31.u32 + 482, ctx.r3.u16);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,-1864
	ctx.r3.s64 = ctx.r3.s64 + -1864;
	// bl 0x8220ec38
	ctx.lr = 0x8223F4C4;
	sub_8220EC38(ctx, base);
	// sth r3,484(r31)
	PPC_STORE_U16(ctx.r31.u32 + 484, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1884
	ctx.r3.s64 = ctx.r10.s64 + -1884;
	// bl 0x8220ec38
	ctx.lr = 0x8223F4D4;
	sub_8220EC38(ctx, base);
	// sth r3,486(r31)
	PPC_STORE_U16(ctx.r31.u32 + 486, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1896
	ctx.r3.s64 = ctx.r9.s64 + -1896;
	// bl 0x8220ec38
	ctx.lr = 0x8223F4E4;
	sub_8220EC38(ctx, base);
	// sth r3,488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 488, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-1912
	ctx.r3.s64 = ctx.r8.s64 + -1912;
	// bl 0x8220ec38
	ctx.lr = 0x8223F4F4;
	sub_8220EC38(ctx, base);
	// sth r3,490(r31)
	PPC_STORE_U16(ctx.r31.u32 + 490, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-1932
	ctx.r3.s64 = ctx.r7.s64 + -1932;
	// bl 0x8220ec38
	ctx.lr = 0x8223F504;
	sub_8220EC38(ctx, base);
	// sth r3,492(r31)
	PPC_STORE_U16(ctx.r31.u32 + 492, ctx.r3.u16);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,24424
	ctx.r3.s64 = ctx.r6.s64 + 24424;
	// bl 0x8220ec38
	ctx.lr = 0x8223F514;
	sub_8220EC38(ctx, base);
	// sth r3,494(r31)
	PPC_STORE_U16(ctx.r31.u32 + 494, ctx.r3.u16);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r3,r5,-23900
	ctx.r3.s64 = ctx.r5.s64 + -23900;
	// bl 0x8220ec38
	ctx.lr = 0x8223F524;
	sub_8220EC38(ctx, base);
	// sth r3,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-1940
	ctx.r3.s64 = ctx.r4.s64 + -1940;
	// bl 0x8220ec38
	ctx.lr = 0x8223F534;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 498, ctx.r11.u16);
	// addi r3,r3,-1956
	ctx.r3.s64 = ctx.r3.s64 + -1956;
	// bl 0x8220ec38
	ctx.lr = 0x8223F548;
	sub_8220EC38(ctx, base);
	// sth r3,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-1972
	ctx.r3.s64 = ctx.r10.s64 + -1972;
	// bl 0x8220ec38
	ctx.lr = 0x8223F558;
	sub_8220EC38(ctx, base);
	// sth r3,502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 502, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-1984
	ctx.r3.s64 = ctx.r9.s64 + -1984;
	// bl 0x8220ec38
	ctx.lr = 0x8223F568;
	sub_8220EC38(ctx, base);
	// sth r3,504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 504, ctx.r3.u16);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,24384
	ctx.r3.s64 = ctx.r8.s64 + 24384;
	// bl 0x8220ec38
	ctx.lr = 0x8223F578;
	sub_8220EC38(ctx, base);
	// sth r3,506(r31)
	PPC_STORE_U16(ctx.r31.u32 + 506, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2000
	ctx.r3.s64 = ctx.r7.s64 + -2000;
	// bl 0x8220ec38
	ctx.lr = 0x8223F588;
	sub_8220EC38(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// sth r3,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r3.u16);
	// addi r3,r6,-2012
	ctx.r3.s64 = ctx.r6.s64 + -2012;
	// bl 0x8220ec38
	ctx.lr = 0x8223F598;
	sub_8220EC38(ctx, base);
	// sth r3,510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 510, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2028
	ctx.r3.s64 = ctx.r5.s64 + -2028;
	// bl 0x8220ec38
	ctx.lr = 0x8223F5A8;
	sub_8220EC38(ctx, base);
	// sth r3,512(r31)
	PPC_STORE_U16(ctx.r31.u32 + 512, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-2044
	ctx.r3.s64 = ctx.r4.s64 + -2044;
	// bl 0x8220ec38
	ctx.lr = 0x8223F5B8;
	sub_8220EC38(ctx, base);
	// sth r3,514(r31)
	PPC_STORE_U16(ctx.r31.u32 + 514, ctx.r3.u16);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,-2060
	ctx.r3.s64 = ctx.r3.s64 + -2060;
	// bl 0x8220ec38
	ctx.lr = 0x8223F5C8;
	sub_8220EC38(ctx, base);
	// sth r3,516(r31)
	PPC_STORE_U16(ctx.r31.u32 + 516, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-2072
	ctx.r3.s64 = ctx.r10.s64 + -2072;
	// bl 0x8220ec38
	ctx.lr = 0x8223F5D8;
	sub_8220EC38(ctx, base);
	// sth r3,518(r31)
	PPC_STORE_U16(ctx.r31.u32 + 518, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-2096
	ctx.r3.s64 = ctx.r9.s64 + -2096;
	// bl 0x8220ec38
	ctx.lr = 0x8223F5E8;
	sub_8220EC38(ctx, base);
	// sth r3,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-2108
	ctx.r3.s64 = ctx.r8.s64 + -2108;
	// bl 0x8220ec38
	ctx.lr = 0x8223F5F8;
	sub_8220EC38(ctx, base);
	// sth r3,522(r31)
	PPC_STORE_U16(ctx.r31.u32 + 522, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2120
	ctx.r3.s64 = ctx.r7.s64 + -2120;
	// bl 0x8220ec38
	ctx.lr = 0x8223F608;
	sub_8220EC38(ctx, base);
	// sth r3,524(r31)
	PPC_STORE_U16(ctx.r31.u32 + 524, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2132
	ctx.r3.s64 = ctx.r6.s64 + -2132;
	// bl 0x8220ec38
	ctx.lr = 0x8223F618;
	sub_8220EC38(ctx, base);
	// sth r3,526(r31)
	PPC_STORE_U16(ctx.r31.u32 + 526, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-10792
	ctx.r3.s64 = ctx.r5.s64 + -10792;
	// bl 0x8220ec38
	ctx.lr = 0x8223F628;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// bl 0x8220ec38
	ctx.lr = 0x8223F638;
	sub_8220EC38(ctx, base);
	// sth r3,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-2152
	ctx.r3.s64 = ctx.r4.s64 + -2152;
	// bl 0x8220ec38
	ctx.lr = 0x8223F648;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// sth r11,532(r31)
	PPC_STORE_U16(ctx.r31.u32 + 532, ctx.r11.u16);
	// addi r3,r3,26296
	ctx.r3.s64 = ctx.r3.s64 + 26296;
	// bl 0x8220ec38
	ctx.lr = 0x8223F65C;
	sub_8220EC38(ctx, base);
	// sth r3,534(r31)
	PPC_STORE_U16(ctx.r31.u32 + 534, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-2172
	ctx.r3.s64 = ctx.r10.s64 + -2172;
	// bl 0x8220ec38
	ctx.lr = 0x8223F66C;
	sub_8220EC38(ctx, base);
	// sth r3,536(r31)
	PPC_STORE_U16(ctx.r31.u32 + 536, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-2188
	ctx.r3.s64 = ctx.r9.s64 + -2188;
	// bl 0x8220ec38
	ctx.lr = 0x8223F67C;
	sub_8220EC38(ctx, base);
	// sth r3,538(r31)
	PPC_STORE_U16(ctx.r31.u32 + 538, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-12348
	ctx.r3.s64 = ctx.r8.s64 + -12348;
	// bl 0x8220ec38
	ctx.lr = 0x8223F68C;
	sub_8220EC38(ctx, base);
	// sth r3,540(r31)
	PPC_STORE_U16(ctx.r31.u32 + 540, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2204
	ctx.r3.s64 = ctx.r7.s64 + -2204;
	// bl 0x8220ec38
	ctx.lr = 0x8223F69C;
	sub_8220EC38(ctx, base);
	// sth r3,542(r31)
	PPC_STORE_U16(ctx.r31.u32 + 542, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2220
	ctx.r3.s64 = ctx.r6.s64 + -2220;
	// bl 0x8220ec38
	ctx.lr = 0x8223F6AC;
	sub_8220EC38(ctx, base);
	// sth r3,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2232
	ctx.r3.s64 = ctx.r5.s64 + -2232;
	// bl 0x8220ec38
	ctx.lr = 0x8223F6BC;
	sub_8220EC38(ctx, base);
	// sth r3,546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 546, ctx.r3.u16);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r4,-10228
	ctx.r3.s64 = ctx.r4.s64 + -10228;
	// bl 0x8220ec38
	ctx.lr = 0x8223F6CC;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,548(r31)
	PPC_STORE_U16(ctx.r31.u32 + 548, ctx.r11.u16);
	// addi r3,r3,-2240
	ctx.r3.s64 = ctx.r3.s64 + -2240;
	// bl 0x8220ec38
	ctx.lr = 0x8223F6E0;
	sub_8220EC38(ctx, base);
	// sth r3,550(r31)
	PPC_STORE_U16(ctx.r31.u32 + 550, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-2256
	ctx.r3.s64 = ctx.r10.s64 + -2256;
	// bl 0x8220ec38
	ctx.lr = 0x8223F6F0;
	sub_8220EC38(ctx, base);
	// sth r3,552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 552, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-2272
	ctx.r3.s64 = ctx.r9.s64 + -2272;
	// bl 0x8220ec38
	ctx.lr = 0x8223F700;
	sub_8220EC38(ctx, base);
	// sth r3,554(r31)
	PPC_STORE_U16(ctx.r31.u32 + 554, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-2284
	ctx.r3.s64 = ctx.r8.s64 + -2284;
	// bl 0x8220ec38
	ctx.lr = 0x8223F710;
	sub_8220EC38(ctx, base);
	// sth r3,556(r31)
	PPC_STORE_U16(ctx.r31.u32 + 556, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2300
	ctx.r3.s64 = ctx.r7.s64 + -2300;
	// bl 0x8220ec38
	ctx.lr = 0x8223F720;
	sub_8220EC38(ctx, base);
	// sth r3,558(r31)
	PPC_STORE_U16(ctx.r31.u32 + 558, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2312
	ctx.r3.s64 = ctx.r6.s64 + -2312;
	// bl 0x8220ec38
	ctx.lr = 0x8223F730;
	sub_8220EC38(ctx, base);
	// sth r3,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2324
	ctx.r3.s64 = ctx.r5.s64 + -2324;
	// bl 0x8220ec38
	ctx.lr = 0x8223F740;
	sub_8220EC38(ctx, base);
	// sth r3,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r3.u16);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,28028
	ctx.r3.s64 = ctx.r4.s64 + 28028;
	// bl 0x8220ec38
	ctx.lr = 0x8223F750;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// sth r11,564(r31)
	PPC_STORE_U16(ctx.r31.u32 + 564, ctx.r11.u16);
	// addi r3,r3,-10236
	ctx.r3.s64 = ctx.r3.s64 + -10236;
	// bl 0x8220ec38
	ctx.lr = 0x8223F764;
	sub_8220EC38(ctx, base);
	// sth r3,566(r31)
	PPC_STORE_U16(ctx.r31.u32 + 566, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-2332
	ctx.r3.s64 = ctx.r10.s64 + -2332;
	// bl 0x8220ec38
	ctx.lr = 0x8223F774;
	sub_8220EC38(ctx, base);
	// sth r3,568(r31)
	PPC_STORE_U16(ctx.r31.u32 + 568, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-2344
	ctx.r3.s64 = ctx.r9.s64 + -2344;
	// bl 0x8220ec38
	ctx.lr = 0x8223F784;
	sub_8220EC38(ctx, base);
	// sth r3,570(r31)
	PPC_STORE_U16(ctx.r31.u32 + 570, ctx.r3.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r8,12872
	ctx.r3.s64 = ctx.r8.s64 + 12872;
	// bl 0x8220ec38
	ctx.lr = 0x8223F794;
	sub_8220EC38(ctx, base);
	// sth r3,572(r31)
	PPC_STORE_U16(ctx.r31.u32 + 572, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2364
	ctx.r3.s64 = ctx.r7.s64 + -2364;
	// bl 0x8220ec38
	ctx.lr = 0x8223F7A4;
	sub_8220EC38(ctx, base);
	// sth r3,574(r31)
	PPC_STORE_U16(ctx.r31.u32 + 574, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2384
	ctx.r3.s64 = ctx.r6.s64 + -2384;
	// bl 0x8220ec38
	ctx.lr = 0x8223F7B4;
	sub_8220EC38(ctx, base);
	// sth r3,576(r31)
	PPC_STORE_U16(ctx.r31.u32 + 576, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2396
	ctx.r3.s64 = ctx.r5.s64 + -2396;
	// bl 0x8220ec38
	ctx.lr = 0x8223F7C4;
	sub_8220EC38(ctx, base);
	// sth r3,578(r31)
	PPC_STORE_U16(ctx.r31.u32 + 578, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-2412
	ctx.r3.s64 = ctx.r4.s64 + -2412;
	// bl 0x8220ec38
	ctx.lr = 0x8223F7D4;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,580(r31)
	PPC_STORE_U16(ctx.r31.u32 + 580, ctx.r11.u16);
	// addi r3,r3,-2424
	ctx.r3.s64 = ctx.r3.s64 + -2424;
	// bl 0x8220ec38
	ctx.lr = 0x8223F7E8;
	sub_8220EC38(ctx, base);
	// sth r3,582(r31)
	PPC_STORE_U16(ctx.r31.u32 + 582, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-2436
	ctx.r3.s64 = ctx.r10.s64 + -2436;
	// bl 0x8220ec38
	ctx.lr = 0x8223F7F8;
	sub_8220EC38(ctx, base);
	// sth r3,584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 584, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-2448
	ctx.r3.s64 = ctx.r9.s64 + -2448;
	// bl 0x8220ec38
	ctx.lr = 0x8223F808;
	sub_8220EC38(ctx, base);
	// sth r3,586(r31)
	PPC_STORE_U16(ctx.r31.u32 + 586, ctx.r3.u16);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,26348
	ctx.r3.s64 = ctx.r8.s64 + 26348;
	// bl 0x8220ec38
	ctx.lr = 0x8223F818;
	sub_8220EC38(ctx, base);
	// sth r3,588(r31)
	PPC_STORE_U16(ctx.r31.u32 + 588, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2456
	ctx.r3.s64 = ctx.r7.s64 + -2456;
	// bl 0x8220ec38
	ctx.lr = 0x8223F828;
	sub_8220EC38(ctx, base);
	// sth r3,590(r31)
	PPC_STORE_U16(ctx.r31.u32 + 590, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2468
	ctx.r3.s64 = ctx.r6.s64 + -2468;
	// bl 0x8220ec38
	ctx.lr = 0x8223F838;
	sub_8220EC38(ctx, base);
	// sth r3,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2472
	ctx.r3.s64 = ctx.r5.s64 + -2472;
	// bl 0x8220ec38
	ctx.lr = 0x8223F848;
	sub_8220EC38(ctx, base);
	// sth r3,594(r31)
	PPC_STORE_U16(ctx.r31.u32 + 594, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-2488
	ctx.r3.s64 = ctx.r4.s64 + -2488;
	// bl 0x8220ec38
	ctx.lr = 0x8223F858;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// sth r11,596(r31)
	PPC_STORE_U16(ctx.r31.u32 + 596, ctx.r11.u16);
	// addi r3,r3,26264
	ctx.r3.s64 = ctx.r3.s64 + 26264;
	// bl 0x8220ec38
	ctx.lr = 0x8223F86C;
	sub_8220EC38(ctx, base);
	// sth r3,598(r31)
	PPC_STORE_U16(ctx.r31.u32 + 598, ctx.r3.u16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-12404
	ctx.r3.s64 = ctx.r10.s64 + -12404;
	// bl 0x8220ec38
	ctx.lr = 0x8223F87C;
	sub_8220EC38(ctx, base);
	// sth r3,600(r31)
	PPC_STORE_U16(ctx.r31.u32 + 600, ctx.r3.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-2500
	ctx.r3.s64 = ctx.r9.s64 + -2500;
	// bl 0x8220ec38
	ctx.lr = 0x8223F88C;
	sub_8220EC38(ctx, base);
	// sth r3,602(r31)
	PPC_STORE_U16(ctx.r31.u32 + 602, ctx.r3.u16);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,17976
	ctx.r3.s64 = ctx.r8.s64 + 17976;
	// bl 0x8220ec38
	ctx.lr = 0x8223F89C;
	sub_8220EC38(ctx, base);
	// sth r3,604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 604, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2512
	ctx.r3.s64 = ctx.r7.s64 + -2512;
	// bl 0x8220ec38
	ctx.lr = 0x8223F8AC;
	sub_8220EC38(ctx, base);
	// sth r3,606(r31)
	PPC_STORE_U16(ctx.r31.u32 + 606, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2520
	ctx.r3.s64 = ctx.r6.s64 + -2520;
	// bl 0x8220ec38
	ctx.lr = 0x8223F8BC;
	sub_8220EC38(ctx, base);
	// sth r3,608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 608, ctx.r3.u16);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,21016
	ctx.r3.s64 = ctx.r5.s64 + 21016;
	// bl 0x8220ec38
	ctx.lr = 0x8223F8CC;
	sub_8220EC38(ctx, base);
	// sth r3,610(r31)
	PPC_STORE_U16(ctx.r31.u32 + 610, ctx.r3.u16);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-2536
	ctx.r3.s64 = ctx.r4.s64 + -2536;
	// bl 0x8220ec38
	ctx.lr = 0x8223F8DC;
	sub_8220EC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// sth r11,612(r31)
	PPC_STORE_U16(ctx.r31.u32 + 612, ctx.r11.u16);
	// addi r3,r3,-2544
	ctx.r3.s64 = ctx.r3.s64 + -2544;
	// bl 0x8220ec38
	ctx.lr = 0x8223F8F0;
	sub_8220EC38(ctx, base);
	// sth r3,614(r31)
	PPC_STORE_U16(ctx.r31.u32 + 614, ctx.r3.u16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,18216
	ctx.r3.s64 = ctx.r10.s64 + 18216;
	// bl 0x8220ec38
	ctx.lr = 0x8223F900;
	sub_8220EC38(ctx, base);
	// sth r3,616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 616, ctx.r3.u16);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,18544
	ctx.r3.s64 = ctx.r9.s64 + 18544;
	// bl 0x8220ec38
	ctx.lr = 0x8223F910;
	sub_8220EC38(ctx, base);
	// sth r3,618(r31)
	PPC_STORE_U16(ctx.r31.u32 + 618, ctx.r3.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-2560
	ctx.r3.s64 = ctx.r8.s64 + -2560;
	// bl 0x8220ec38
	ctx.lr = 0x8223F920;
	sub_8220EC38(ctx, base);
	// sth r3,620(r31)
	PPC_STORE_U16(ctx.r31.u32 + 620, ctx.r3.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-2564
	ctx.r3.s64 = ctx.r7.s64 + -2564;
	// bl 0x8220ec38
	ctx.lr = 0x8223F930;
	sub_8220EC38(ctx, base);
	// sth r3,622(r31)
	PPC_STORE_U16(ctx.r31.u32 + 622, ctx.r3.u16);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-2572
	ctx.r3.s64 = ctx.r6.s64 + -2572;
	// bl 0x8220ec38
	ctx.lr = 0x8223F940;
	sub_8220EC38(ctx, base);
	// sth r3,624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 624, ctx.r3.u16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2588
	ctx.r3.s64 = ctx.r5.s64 + -2588;
	// bl 0x8220ec38
	ctx.lr = 0x8223F950;
	sub_8220EC38(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// sth r3,626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 626, ctx.r3.u16);
	// addi r3,r4,-2604
	ctx.r3.s64 = ctx.r4.s64 + -2604;
	// bl 0x8220ec38
	ctx.lr = 0x8223F960;
	sub_8220EC38(ctx, base);
	// sth r3,628(r31)
	PPC_STORE_U16(ctx.r31.u32 + 628, ctx.r3.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223E510) {
	__imp__sub_8223E510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223F96C) {
	__imp__sub_8223F96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223F970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8223F978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,268(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223f99c
	if (ctx.cr6.eq) goto loc_8223F99C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ade70
	ctx.lr = 0x8223F99C;
	sub_821ADE70(ctx, base);
loc_8223F99C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f9c8
	if (ctx.cr6.eq) goto loc_8223F9C8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r8,126(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8223f9c8
	if (!ctx.cr6.eq) goto loc_8223F9C8;
	// li r10,2046
	ctx.r10.s64 = 2046;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8223F9C8:
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fa04
	if (ctx.cr6.eq) goto loc_8223FA04;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,-624(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -624);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8223fa04
	if (!ctx.cr6.eq) goto loc_8223FA04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223fa04
	if (ctx.cr6.eq) goto loc_8223FA04;
	// stb r9,769(r30)
	PPC_STORE_U8(ctx.r30.u32 + 769, ctx.r9.u8);
loc_8223FA04:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8223FA10:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fa30
	if (ctx.cr6.eq) goto loc_8223FA30;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r7,126(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8223fa30
	if (!ctx.cr6.eq) goto loc_8223FA30;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8223FA30:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223fa10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223FA10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223F970) {
	__imp__sub_8223F970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FA40) {
	__imp__sub_8223FA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d52c8
	sub_822D52C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223FA60) {
	__imp__sub_8223FA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fa9c
	if (ctx.cr6.eq) goto loc_8223FA9C;
	// lfs f0,3436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,3440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3440);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,3444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_8223FA9C:
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fac4
	if (ctx.cr6.eq) goto loc_8223FAC4;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_8223FAC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FA70) {
	__imp__sub_8223FA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223FADC) {
	__imp__sub_8223FADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223faf4
	if (ctx.cr6.eq) goto loc_8223FAF4;
	// b 0x821d8670
	sub_821D8670(ctx, base);
	return;
loc_8223FAF4:
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fb04
	if (ctx.cr6.eq) goto loc_8223FB04;
	// b 0x821e6bc0
	sub_821E6BC0(ctx, base);
	return;
loc_8223FB04:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8222e490
	sub_8222E490(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223FAE0) {
	__imp__sub_8223FAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223FB0C) {
	__imp__sub_8223FB0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fb24
	if (ctx.cr6.eq) goto loc_8223FB24;
	// b 0x821e6bc0
	sub_821E6BC0(ctx, base);
	return;
loc_8223FB24:
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,16228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FB10) {
	__imp__sub_8223FB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223FB4C) {
	__imp__sub_8223FB4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223fb6c
	if (ctx.cr6.eq) goto loc_8223FB6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8223FB6C:
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fb84
	if (ctx.cr6.eq) goto loc_8223FB84;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,1204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8223FB84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FB50) {
	__imp__sub_8223FB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223fc38
	if (!ctx.cr6.eq) goto loc_8223FC38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r6,24524
	ctx.r9.s64 = ctx.r6.s64 + 24524;
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r6,-2
	ctx.r6.s64 = -2;
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f1,1420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1420);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82238af8
	ctx.lr = 0x8223FC00;
	sub_82238AF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fc1c
	if (ctx.cr6.eq) goto loc_8223FC1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stb r10,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r10.u8);
	// b 0x8223fc34
	goto loc_8223FC34;
loc_8223FC1C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223fc30
	if (ctx.cr6.eq) goto loc_8223FC30;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
loc_8223FC30:
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
loc_8223FC34:
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_8223FC38:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FB90) {
	__imp__sub_8223FB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FC50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223fc70
	if (ctx.cr6.eq) goto loc_8223FC70;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fc70
	if (ctx.cr6.eq) goto loc_8223FC70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// b 0x82238eb8
	sub_82238EB8(ctx, base);
	return;
loc_8223FC70:
	// b 0x8223fb90
	sub_8223FB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223FC50) {
	__imp__sub_8223FC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223FC74) {
	__imp__sub_8223FC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FC78) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fca8
	if (ctx.cr6.eq) goto loc_8223FCA8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-624(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fca8
	if (ctx.cr6.eq) goto loc_8223FCA8;
	// b 0x8223fb90
	sub_8223FB90(ctx, base);
	return;
loc_8223FCA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FC78) {
	__imp__sub_8223FC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FCB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FCB0) {
	__imp__sub_8223FCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223FCBC) {
	__imp__sub_8223FCBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8223FCC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,268(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// addi r25,r3,56
	ctx.r25.s64 = ctx.r3.s64 + 56;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fdbc
	if (ctx.cr6.eq) goto loc_8223FDBC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r24,r11,-624
	ctx.r24.s64 = ctx.r11.s64 + -624;
	// lwz r28,-352(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// beq cr6,0x8223fd48
	if (ctx.cr6.eq) goto loc_8223FD48;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fd48
	if (ctx.cr6.eq) goto loc_8223FD48;
	// lwz r10,52(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8223fd48
	if (ctx.cr6.lt) goto loc_8223FD48;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821bebf8
	ctx.lr = 0x8223FD44;
	sub_821BEBF8(ctx, base);
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
loc_8223FD48:
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8223ff78
	if (ctx.cr6.eq) goto loc_8223FF78;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8223fd88
	if (ctx.cr6.eq) goto loc_8223FD88;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8223fd7c
	if (ctx.cr6.eq) goto loc_8223FD7C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fd7c
	if (ctx.cr6.eq) goto loc_8223FD7C;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bebf8
	ctx.lr = 0x8223FD78;
	sub_821BEBF8(ctx, base);
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
loc_8223FD7C:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
loc_8223FD88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223fdd8
	if (ctx.cr6.eq) goto loc_8223FDD8;
loc_8223FD90:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fdd8
	if (ctx.cr6.eq) goto loc_8223FDD8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r9,r11,1000
	ctx.r9.s64 = ctx.r11.s64 + 1000;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x8223fddc
	goto loc_8223FDDC;
loc_8223FDBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8223fd90
	if (!ctx.cr6.eq) goto loc_8223FD90;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223ff78
	if (ctx.cr6.eq) goto loc_8223FF78;
	// stb r23,3174(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3174, ctx.r23.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8223FDD8:
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
loc_8223FDDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8223FDE8;
	sub_821E2E18(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8223fe18
	if (ctx.cr6.eq) goto loc_8223FE18;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x8223FDF8;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223fe18
	if (ctx.cr6.eq) goto loc_8223FE18;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,506(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 506);
	// bl 0x82229da8
	ctx.lr = 0x8223FE18;
	sub_82229DA8(ctx, base);
loc_8223FE18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223ff78
	if (ctx.cr6.eq) goto loc_8223FF78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223fe34
	if (ctx.cr6.eq) goto loc_8223FE34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dee70
	ctx.lr = 0x8223FE30;
	sub_821DEE70(ctx, base);
	// b 0x8223fe38
	goto loc_8223FE38;
loc_8223FE34:
	// stb r23,3174(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3174, ctx.r23.u8);
loc_8223FE38:
	// lbz r11,5000(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223fe4c
	if (ctx.cr6.eq) goto loc_8223FE4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b0768
	ctx.lr = 0x8223FE4C;
	sub_821B0768(ctx, base);
loc_8223FE4C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8223fe68
	if (ctx.cr6.eq) goto loc_8223FE68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8223fe68
	if (!ctx.cr6.eq) goto loc_8223FE68;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8223fe68
	if (ctx.cr6.eq) goto loc_8223FE68;
	// stw r23,3196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3196, ctx.r23.u32);
loc_8223FE68:
	// stw r23,804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 804, ctx.r23.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r23,800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 800, ctx.r23.u32);
	// stw r23,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r23.u32);
	// beq cr6,0x8223fea0
	if (ctx.cr6.eq) goto loc_8223FEA0;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223fea0
	if (ctx.cr6.eq) goto loc_8223FEA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a9530
	ctx.lr = 0x8223FE90;
	sub_821A9530(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223fea0
	if (!ctx.cr6.eq) goto loc_8223FEA0;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
loc_8223FEA0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8223fef0
	if (ctx.cr6.eq) goto loc_8223FEF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223fef8
	if (ctx.cr6.eq) goto loc_8223FEF8;
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,232(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,20420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8223fef8
	if (!ctx.cr6.gt) goto loc_8223FEF8;
loc_8223FEF0:
	// stw r23,708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 708, ctx.r23.u32);
	// stw r23,712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 712, ctx.r23.u32);
loc_8223FEF8:
	// lbz r11,3152(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ff6c
	if (ctx.cr6.eq) goto loc_8223FF6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223ff6c
	if (ctx.cr6.eq) goto loc_8223FF6C;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ff6c
	if (ctx.cr6.eq) goto loc_8223FF6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r29,772
	ctx.r4.s64 = ctx.r29.s64 + 772;
	// stb r11,769(r29)
	PPC_STORE_U8(ctx.r29.u32 + 769, ctx.r11.u8);
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ff44
	if (ctx.cr6.eq) goto loc_8223FF44;
	// bl 0x821d8670
	ctx.lr = 0x8223FF3C;
	sub_821D8670(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8223FF44:
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ff5c
	if (ctx.cr6.eq) goto loc_8223FF5C;
	// bl 0x821e6bc0
	ctx.lr = 0x8223FF54;
	sub_821E6BC0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8223FF5C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222e490
	ctx.lr = 0x8223FF64;
	sub_8222E490(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8223FF6C:
	// stb r23,769(r29)
	PPC_STORE_U8(ctx.r29.u32 + 769, ctx.r23.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d83e0
	ctx.lr = 0x8223FF78;
	sub_821D83E0(ctx, base);
loc_8223FF78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8223FCC0) {
	__imp__sub_8223FCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_8223FF98:
	// lbz r6,102(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 102);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223ffb8
	if (ctx.cr6.eq) goto loc_8223FFB8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8223ffd0
	if (!ctx.cr6.eq) goto loc_8223FFD0;
loc_8223FFB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x8223ff98
	if (ctx.cr6.lt) goto loc_8223FF98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223FFD0:
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FF80) {
	__imp__sub_8223FF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223FFDC) {
	__imp__sub_8223FFDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223FFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bge cr6,0x82240044
	if (!ctx.cr6.lt) goto loc_82240044;
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82240014:
	// lbz r6,102(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 102);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82240034
	if (ctx.cr6.eq) goto loc_82240034;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8224004c
	if (!ctx.cr6.eq) goto loc_8224004C;
loc_82240034:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x82240014
	if (ctx.cr6.lt) goto loc_82240014;
loc_82240044:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8224004C:
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8223FFE0) {
	__imp__sub_8223FFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13976
	ctx.r9.s64 = ctx.r11.s64 + 13976;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82240058) {
	__imp__sub_82240058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8224006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8224006C) {
	__imp__sub_8224006C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,4692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4692, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82240070) {
	__imp__sub_82240070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82240094) {
	__imp__sub_82240094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822400A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,13976
	ctx.r29.s64 = ctx.r11.s64 + 13976;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822400B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822400C4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822400ec
	if (ctx.cr6.eq) goto loc_822400EC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822400b8
	if (ctx.cr6.lt) goto loc_822400B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822400EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240098) {
	__imp__sub_82240098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822400F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822400F8) {
	__imp__sub_822400F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82240104) {
	__imp__sub_82240104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240108) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82240198
	if (ctx.cr6.eq) goto loc_82240198;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240140
	if (ctx.cr6.eq) goto loc_82240140;
	// bl 0x82238208
	ctx.lr = 0x82240140;
	sub_82238208(ctx, base);
loc_82240140:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240198
	if (ctx.cr6.eq) goto loc_82240198;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240174
	if (ctx.cr6.eq) goto loc_82240174;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82240178
	if (!ctx.cr6.gt) goto loc_82240178;
loc_82240174:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82240178:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82240194
	if (ctx.cr6.eq) goto loc_82240194;
	// bl 0x82238770
	ctx.lr = 0x82240190;
	sub_82238770(ctx, base);
	// b 0x82240198
	goto loc_82240198;
loc_82240194:
	// bl 0x822363b0
	ctx.lr = 0x82240198;
	sub_822363B0(ctx, base);
loc_82240198:
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

PPC_WEAK_FUNC(sub_82240108) {
	__imp__sub_82240108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822401B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,3000
	ctx.r5.s64 = 3000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82238218
	sub_82238218(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822401B0) {
	__imp__sub_822401B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822401C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822401C4) {
	__imp__sub_822401C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822401C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82238770
	sub_82238770(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822401C8) {
	__imp__sub_822401C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822401E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822401E0) {
	__imp__sub_822401E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822401E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822401E4) {
	__imp__sub_822401E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822401E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822401F0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x822401F8;
	__savefpr_26(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf. r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8224032c
	if (ctx.cr0.lt) goto loc_8224032C;
	// lwz r31,92(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r11,2450
	ctx.r11.s64 = ctx.r11.s64 + 2450;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// beq cr6,0x8224032c
	if (ctx.cr6.eq) goto loc_8224032C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224032c
	if (ctx.cr6.eq) goto loc_8224032C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r8,64
	ctx.r8.s64 = 64;
	// ori r9,r9,7932
	ctx.r9.u64 = ctx.r9.u64 | 7932;
	// lfs f2,9868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9868);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82234bd8
	ctx.lr = 0x82240264;
	sub_82234BD8(ctx, base);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f30,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// ble cr6,0x8224032c
	if (!ctx.cr6.gt) goto loc_8224032C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f26,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f26.f64 = double(temp.f32);
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// lfs f27,6004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f27.f64 = double(temp.f32);
loc_822402A0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240320
	if (ctx.cr6.eq) goto loc_82240320;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82240320
	if (ctx.cr6.eq) goto loc_82240320;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x822402E0;
	sub_822D4AC8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f31,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// bgt cr6,0x82240320
	if (ctx.cr6.gt) goto loc_82240320;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f9,f26
	ctx.cr6.compare(ctx.f9.f64, ctx.f26.f64);
	// blt cr6,0x82240320
	if (ctx.cr6.lt) goto loc_82240320;
	// li r5,2500
	ctx.r5.s64 = 2500;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238218
	ctx.lr = 0x82240320;
	sub_82238218(ctx, base);
loc_82240320:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x822402a0
	if (!ctx.cr0.eq) goto loc_822402A0;
loc_8224032C:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x82240338;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822401E8) {
	__imp__sub_822401E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8224033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8224033C) {
	__imp__sub_8224033C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82240348;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf. r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8224042c
	if (ctx.cr0.lt) goto loc_8224042C;
	// addi r10,r11,2450
	ctx.r10.s64 = ctx.r11.s64 + 2450;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r8,64
	ctx.r8.s64 = 64;
	// ori r9,r9,7932
	ctx.r9.u64 = ctx.r9.u64 | 7932;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,9868(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9868);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x82234bd8
	ctx.lr = 0x8224039C;
	sub_82234BD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d52c8
	ctx.lr = 0x822403B8;
	sub_822D52C8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8224042c
	if (!ctx.cr6.gt) goto loc_8224042C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_822403D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240420
	if (ctx.cr6.eq) goto loc_82240420;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82240420
	if (ctx.cr6.eq) goto loc_82240420;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// blt cr6,0x82240420
	if (ctx.cr6.lt) goto loc_82240420;
	// li r5,2500
	ctx.r5.s64 = 2500;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82238218
	ctx.lr = 0x82240420;
	sub_82238218(ctx, base);
loc_82240420:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x822403d4
	if (!ctx.cr0.eq) goto loc_822403D4;
loc_8224042C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240340) {
	__imp__sub_82240340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240438) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// addi r31,r11,-25344
	ctx.r31.s64 = ctx.r11.s64 + -25344;
	// addi r30,r10,9624
	ctx.r30.s64 = ctx.r10.s64 + 9624;
	// lwz r11,-6208(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6208);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8224051c
	if (!ctx.cr6.gt) goto loc_8224051C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r7,272(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822404bc
	if (ctx.cr6.eq) goto loc_822404BC;
	// bl 0x821d8670
	ctx.lr = 0x822404B8;
	sub_821D8670(ctx, base);
	// b 0x822404d8
	goto loc_822404D8;
loc_822404BC:
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822404d0
	if (ctx.cr6.eq) goto loc_822404D0;
	// bl 0x821e6bc0
	ctx.lr = 0x822404CC;
	sub_821E6BC0(ctx, base);
	// b 0x822404d8
	goto loc_822404D8;
loc_822404D0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222e490
	ctx.lr = 0x822404D8;
	sub_8222E490(ctx, base);
loc_822404D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r10.u32);
loc_8224051C:
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

PPC_WEAK_FUNC(sub_82240438) {
	__imp__sub_82240438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82240534) {
	__imp__sub_82240534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r5,r11,-25344
	ctx.r5.s64 = ctx.r11.s64 + -25344;
	// b 0x822e40f0
	sub_822E40F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240538) {
	__imp__sub_82240538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r11,-25344
	ctx.r3.s64 = ctx.r11.s64 + -25344;
	// b 0x8223e078
	sub_8223E078(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240548) {
	__imp__sub_82240548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8224055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8224055C) {
	__imp__sub_8224055C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240560) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822405ec
	if (ctx.cr6.eq) goto loc_822405EC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25344
	ctx.r10.s64 = ctx.r11.s64 + -25344;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8224059c
	if (!ctx.cr0.lt) goto loc_8224059C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8224059C:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,32
	ctx.r5.s64 = ctx.r10.s64 + 32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
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
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwzx r4,r7,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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
loc_822405EC:
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240600
	if (ctx.cr6.eq) goto loc_82240600;
	// bl 0x821d8670
	ctx.lr = 0x822405FC;
	sub_821D8670(ctx, base);
	// b 0x82240608
	goto loc_82240608;
loc_82240600:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222e490
	ctx.lr = 0x82240608;
	sub_8222E490(ctx, base);
loc_82240608:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
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

PPC_WEAK_FUNC(sub_82240560) {
	__imp__sub_82240560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8224062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8224062C) {
	__imp__sub_8224062C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8224064C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8224064c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224064C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82240670:
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r8,106(r10)
	PPC_STORE_U8(ctx.r10.u32 + 106, ctx.r8.u8);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x82240670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240670;
	// b 0x821dda20
	sub_821DDA20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240630) {
	__imp__sub_82240630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240688) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822406a0
	if (ctx.cr6.eq) goto loc_822406A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
loc_822406A0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r8,4194
	ctx.r8.s64 = 274857984;
	// addi r7,r10,9624
	ctx.r7.s64 = ctx.r10.s64 + 9624;
	// ori r6,r8,19923
	ctx.r6.u64 = ctx.r8.u64 | 19923;
	// lhz r5,126(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mulli r10,r5,50
	ctx.r10.s64 = ctx.r5.s64 * 50;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhw r4,r11,r6
	ctx.r4.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r10,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 6;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r10,r3,1000
	ctx.r10.s64 = ctx.r3.s64 * 1000;
	// subf. r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822406e8
	if (ctx.cr0.eq) goto loc_822406E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822406E8:
	// lbz r11,18(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240704
	if (ctx.cr6.eq) goto loc_82240704;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r11.u8);
	// blr 
	return;
loc_82240704:
	// lwz r11,100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240720
	if (ctx.cr6.eq) goto loc_82240720;
	// lhz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82240724
	if (!ctx.cr6.eq) goto loc_82240724;
loc_82240720:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82240724:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82240688) {
	__imp__sub_82240688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8224072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8224072C) {
	__imp__sub_8224072C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240730) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224075c
	if (ctx.cr6.eq) goto loc_8224075C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224075c
	if (ctx.cr6.eq) goto loc_8224075C;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8224075C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82240730) {
	__imp__sub_82240730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82240764) {
	__imp__sub_82240764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240768) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822407c0
	if (ctx.cr6.eq) goto loc_822407C0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r11,-352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822407c0
	if (ctx.cr6.eq) goto loc_822407C0;
	// lbz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822407c0
	if (ctx.cr6.eq) goto loc_822407C0;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822407c0
	if (ctx.cr6.eq) goto loc_822407C0;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822407C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82240768) {
	__imp__sub_82240768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822407C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822407D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,268(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// beq cr6,0x8224086c
	if (ctx.cr6.eq) goto loc_8224086C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r11,-352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224081c
	if (ctx.cr6.eq) goto loc_8224081C;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_8224081C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// bl 0x821e2e18
	ctx.lr = 0x8224082C;
	sub_821E2E18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8224087c
	if (ctx.cr6.eq) goto loc_8224087C;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// stb r29,3174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3174, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224084c
	if (ctx.cr6.eq) goto loc_8224084C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0768
	ctx.lr = 0x8224084C;
	sub_821B0768(ctx, base);
loc_8224084C:
	// stw r29,3196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3196, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r29.u32);
	// stw r29,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r29.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// stb r29,769(r31)
	PPC_STORE_U8(ctx.r31.u32 + 769, ctx.r29.u8);
	// bl 0x821d83e0
	ctx.lr = 0x82240868;
	sub_821D83E0(ctx, base);
	// b 0x8224087c
	goto loc_8224087C;
loc_8224086C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8224087c
	if (ctx.cr6.eq) goto loc_8224087C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3174, ctx.r11.u8);
loc_8224087C:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240890
	if (ctx.cr6.eq) goto loc_82240890;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238208
	ctx.lr = 0x82240890;
	sub_82238208(ctx, base);
loc_82240890:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x8223ff80
	ctx.lr = 0x822408A4;
	sub_8223FF80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822408e0
	if (ctx.cr6.eq) goto loc_822408E0;
loc_822408B0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822408c8
	if (ctx.cr6.eq) goto loc_822408C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f970
	ctx.lr = 0x822408C8;
	sub_8223F970(ctx, base);
loc_822408C8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ffe0
	ctx.lr = 0x822408D4;
	sub_8223FFE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822408b0
	if (!ctx.cr6.eq) goto loc_822408B0;
loc_822408E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822407C8) {
	__imp__sub_822407C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822408E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// beq cr6,0x82240908
	if (ctx.cr6.eq) goto loc_82240908;
	// lwz r11,268(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240908
	if (ctx.cr6.eq) goto loc_82240908;
	// stw r5,4692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4692, ctx.r5.u32);
loc_82240908:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,-21924(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21924);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822408E8) {
	__imp__sub_822408E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8224094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8224094C) {
	__imp__sub_8224094C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82240958;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82240998
	if (!ctx.cr6.eq) goto loc_82240998;
	// lhz r11,126(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r8,r9,-5864
	ctx.r8.s64 = ctx.r9.s64 + -5864;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 524288;
	// rlwinm r6,r7,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r5,r9,10976
	ctx.r5.s64 = ctx.r9.s64 + 10976;
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x822f4f68
	ctx.lr = 0x82240998;
	sub_822F4F68(ctx, base);
loc_82240998:
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// ori r29,r10,33024
	ctx.r29.u64 = ctx.r10.u64 | 33024;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
loc_822409B0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,5039(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822409d4
	if (ctx.cr6.eq) goto loc_822409D4;
	// lwz r11,4772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4772);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822409d4
	if (!ctx.cr6.eq) goto loc_822409D4;
	// bl 0x821ac678
	ctx.lr = 0x822409D4;
	sub_821AC678(ctx, base);
loc_822409D4:
	// addi r31,r31,5128
	ctx.r31.s64 = ctx.r31.s64 + 5128;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822409b0
	if (ctx.cr6.lt) goto loc_822409B0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8222f490
	ctx.lr = 0x822409E8;
	sub_8222F490(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822407c8
	ctx.lr = 0x822409F0;
	sub_822407C8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r26.u32);
	// bl 0x821e2cc0
	ctx.lr = 0x82240A00;
	sub_821E2CC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822085f8
	ctx.lr = 0x82240A08;
	sub_822085F8(ctx, base);
	// stb r26,106(r27)
	PPC_STORE_U8(ctx.r27.u32 + 106, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240950) {
	__imp__sub_82240950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82240A14) {
	__imp__sub_82240A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240A18) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r11,107
	ctx.r11.s64 = ctx.r11.s64 + 107;
loc_82240A38:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r3,r11,-107
	ctx.r3.s64 = ctx.r11.s64 + -107;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82240a54
	if (ctx.cr6.eq) goto loc_82240A54;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82240a78
	if (!ctx.cr6.eq) goto loc_82240A78;
loc_82240A54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x82240a38
	if (ctx.cr6.lt) goto loc_82240A38;
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
loc_82240A78:
	// bl 0x82240950
	ctx.lr = 0x82240A7C;
	sub_82240950(ctx, base);
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

PPC_WEAK_FUNC(sub_82240A18) {
	__imp__sub_82240A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82240A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// beq cr6,0x82240ab8
	if (ctx.cr6.eq) goto loc_82240AB8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82240bc8
	if (!ctx.cr6.eq) goto loc_82240BC8;
loc_82240AB8:
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,330
	ctx.r11.s64 = ctx.r31.s64 + 330;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82240ACC:
	// lbz r8,-224(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -224);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82240af8
	if (ctx.cr6.eq) goto loc_82240AF8;
	// lwz r10,-330(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -330);
	// lwz r8,268(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82240af8
	if (!ctx.cr6.eq) goto loc_82240AF8;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240af8
	if (!ctx.cr6.eq) goto loc_82240AF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82240AF8:
	// lbz r8,-112(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -112);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82240b24
	if (ctx.cr6.eq) goto loc_82240B24;
	// lwz r10,-218(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -218);
	// lwz r8,268(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82240b24
	if (!ctx.cr6.eq) goto loc_82240B24;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240b24
	if (!ctx.cr6.eq) goto loc_82240B24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82240B24:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82240b50
	if (ctx.cr6.eq) goto loc_82240B50;
	// lwz r10,-106(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -106);
	// lwz r8,268(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82240b50
	if (!ctx.cr6.eq) goto loc_82240B50;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240b50
	if (!ctx.cr6.eq) goto loc_82240B50;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82240B50:
	// lbz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82240b7c
	if (ctx.cr6.eq) goto loc_82240B7C;
	// lwz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6);
	// lwz r8,268(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82240b7c
	if (!ctx.cr6.eq) goto loc_82240B7C;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240b7c
	if (!ctx.cr6.eq) goto loc_82240B7C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82240B7C:
	// lbz r8,224(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 224);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82240ba8
	if (ctx.cr6.eq) goto loc_82240BA8;
	// lwz r10,118(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 118);
	// lwz r8,268(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82240ba8
	if (!ctx.cr6.eq) goto loc_82240BA8;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240ba8
	if (!ctx.cr6.eq) goto loc_82240BA8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82240BA8:
	// addi r11,r11,560
	ctx.r11.s64 = ctx.r11.s64 + 560;
	// bdnz 0x82240acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240ACC;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x82240bcc
	if (ctx.cr6.lt) goto loc_82240BCC;
	// bl 0x82240a18
	ctx.lr = 0x82240BBC;
	sub_82240A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240bfc
	if (ctx.cr6.eq) goto loc_82240BFC;
loc_82240BC8:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_82240BCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82240BD0:
	// lbz r10,106(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240c08
	if (ctx.cr6.eq) goto loc_82240C08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x82240bd0
	if (ctx.cr6.lt) goto loc_82240BD0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,1208
	ctx.r4.s64 = ctx.r11.s64 + 1208;
	// bl 0x82280a68
	ctx.lr = 0x82240BFC;
	sub_82280A68(ctx, base);
loc_82240BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82240C08:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x82240C18;
	sub_823DE090(ctx, base);
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r10,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82240A90) {
	__imp__sub_82240A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82240C3C) {
	__imp__sub_82240C3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240C40) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,1660
	ctx.r3.s64 = ctx.r11.s64 + 1660;
	// bl 0x822e84f0
	ctx.lr = 0x82240C5C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82240C60;
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

PPC_WEAK_FUNC(sub_82240C40) {
	__imp__sub_82240C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82240C70) {
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
	ctx.lr = 0x82240C8C;
	sub_822B20B8(ctx, base);
	// bl 0x8222fca8
	ctx.lr = 0x82240C90;
	sub_8222FCA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240070
	ctx.lr = 0x82240C9C;
	sub_82240070(ctx, base);
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

PPC_WEAK_FUNC(sub_82240C70) {
	__imp__sub_82240C70(ctx, base);
}

