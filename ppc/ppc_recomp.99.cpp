#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823B1AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6160
	ctx.r8.u64 = ctx.r10.u64 | 6160;
	// lis r6,-31775
	ctx.r6.s64 = -2082406400;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r5,r6,-24112
	ctx.r5.s64 = ctx.r6.s64 + -24112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r7,6164
	ctx.r7.u64 = ctx.r7.u64 | 6164;
	// addi r6,r4,3
	ctx.r6.s64 = ctx.r4.s64 + 3;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,188(r5)
	PPC_STORE_U32(ctx.r5.u32 + 188, ctx.r3.u32);
	// stw r4,192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 192, ctx.r4.u32);
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r11,152(r5)
	PPC_STORE_U32(ctx.r5.u32 + 152, ctx.r11.u32);
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1AC8) {
	__imp__sub_823B1AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1B20) {
	__imp__sub_823B1B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1B24) {
	__imp__sub_823B1B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1B28) {
	__imp__sub_823B1B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1B2C) {
	__imp__sub_823B1B2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1B30) {
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
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r10,-29904
	ctx.r31.s64 = ctx.r10.s64 + -29904;
	// addi r30,r11,-24112
	ctx.r30.s64 = ctx.r11.s64 + -24112;
	// lbz r11,5772(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1b84
	if (ctx.cr6.eq) goto loc_823B1B84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823c8a38
	ctx.lr = 0x823B1B6C;
	sub_823C8A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823c8c38
	ctx.lr = 0x823B1B78;
	sub_823C8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823c8e00
	ctx.lr = 0x823B1B84;
	sub_823C8E00(ctx, base);
loc_823B1B84:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r7,r9,6156
	ctx.r7.u64 = ctx.r9.u64 | 6156;
	// ori r6,r8,6152
	ctx.r6.u64 = ctx.r8.u64 | 6152;
	// stw r31,2792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2792, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r5,3
	ctx.r5.s64 = 3;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stw r9,2788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2788, ctx.r9.u32);
	// divwu r4,r10,r5
	ctx.r4.u32 = ctx.r10.u32 / ctx.r5.u32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x823b1be0
	if (ctx.cr6.eq) goto loc_823B1BE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// bl 0x820c0f58
	ctx.lr = 0x823B1BE0;
	sub_820C0F58(ctx, base);
loc_823B1BE0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,-16268(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16268);
	// bl 0x823b1a38
	ctx.lr = 0x823B1BF0;
	sub_823B1A38(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// ori r7,r9,6156
	ctx.r7.u64 = ctx.r9.u64 | 6156;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_823B1B30) {
	__imp__sub_823B1B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b1b30
	sub_823B1B30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1C28) {
	__imp__sub_823B1C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1C2C) {
	__imp__sub_823B1C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1C30) {
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
	// bl 0x823b1b30
	ctx.lr = 0x823B1C40;
	sub_823B1B30(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// addi r8,r11,-15488
	ctx.r8.s64 = ctx.r11.s64 + -15488;
	// ori r7,r10,6160
	ctx.r7.u64 = ctx.r10.u64 | 6160;
	// addi r6,r9,-24112
	ctx.r6.s64 = ctx.r9.s64 + -24112;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r5,6164
	ctx.r4.u64 = ctx.r5.u64 | 6164;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 152, ctx.r9.u32);
	// stwx r10,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r11,192(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// lwz r10,188(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 188);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1C30) {
	__imp__sub_823B1C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B1CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-24112
	ctx.r31.s64 = ctx.r11.s64 + -24112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823b1cdc
	if (!ctx.cr6.eq) goto loc_823B1CDC;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x823b1d40
	if (ctx.cr6.eq) goto loc_823B1D40;
loc_823B1CDC:
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1cfc
	if (ctx.cr6.eq) goto loc_823B1CFC;
	// bl 0x823b1b30
	ctx.lr = 0x823B1CFC;
	sub_823B1B30(ctx, base);
loc_823B1CFC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// ori r9,r11,6160
	ctx.r9.u64 = ctx.r11.u64 | 6160;
	// ori r8,r10,6164
	ctx.r8.u64 = ctx.r10.u64 | 6164;
	// addi r7,r29,3
	ctx.r7.s64 = ctx.r29.s64 + 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r10,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r5,64(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_823B1D40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1CA8) {
	__imp__sub_823B1CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1D48) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-24112
	ctx.r30.s64 = ctx.r11.s64 + -24112;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823b1d98
	if (ctx.cr6.eq) goto loc_823B1D98;
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
	// beq cr6,0x823b1d94
	if (ctx.cr6.eq) goto loc_823B1D94;
	// bl 0x823b1b30
	ctx.lr = 0x823B1D94;
	sub_823B1B30(ctx, base);
loc_823B1D94:
	// stw r31,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
loc_823B1D98:
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

PPC_WEAK_FUNC(sub_823B1D48) {
	__imp__sub_823B1D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1DB0) {
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
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b1dfc
	if (ctx.cr6.eq) goto loc_823B1DFC;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-24112
	ctx.r30.s64 = ctx.r11.s64 + -24112;
loc_823B1DE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823c8fe0
	ctx.lr = 0x823B1DF0;
	sub_823C8FE0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x823b1de4
	if (ctx.cr6.lt) goto loc_823B1DE4;
loc_823B1DFC:
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

PPC_WEAK_FUNC(sub_823B1DB0) {
	__imp__sub_823B1DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1E14) {
	__imp__sub_823B1E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r8,r11,4520
	ctx.r8.s64 = ctx.r11.s64 + 4520;
	// addi r7,r10,-29904
	ctx.r7.s64 = ctx.r10.s64 + -29904;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,5740(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5740, ctx.r11.u32);
	// stw r10,5744(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5744, ctx.r10.u32);
	// stw r9,5748(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5748, ctx.r9.u32);
	// stw r8,5752(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5752, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1E18) {
	__imp__sub_823B1E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1E4C) {
	__imp__sub_823B1E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E50) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ad9d8
	sub_823AD9D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1E50) {
	__imp__sub_823B1E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1E54) {
	__imp__sub_823B1E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B1E60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// addi r31,r11,-21248
	ctx.r31.s64 = ctx.r11.s64 + -21248;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x823B1E7C;
	sub_823DE090(ctx, base);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r10,-29904
	ctx.r30.s64 = ctx.r10.s64 + -29904;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823B1E94;
	sub_823D3B90(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// addi r29,r9,-24112
	ctx.r29.s64 = ctx.r9.s64 + -24112;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r3.u32);
	// bl 0x823c7cb8
	ctx.lr = 0x823B1EB0;
	sub_823C7CB8(ctx, base);
	// bl 0x823c7ab0
	ctx.lr = 0x823B1EB4;
	sub_823C7AB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823B1EBC;
	sub_823D3C78(ctx, base);
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,4520
	ctx.r7.s64 = ctx.r8.s64 + 4520;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,5740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5740, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,5744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5744, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,5748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5748, ctx.r11.u32);
	// stw r10,5752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5752, ctx.r10.u32);
	// bl 0x823c90b8
	ctx.lr = 0x823B1EF0;
	sub_823C90B8(ctx, base);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823B1F00;
	sub_823C9CA0(ctx, base);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
loc_823B1F04:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7cb8
	ctx.lr = 0x823B1F10;
	sub_823C7CB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820be060
	ctx.lr = 0x823B1F18;
	sub_820BE060(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b1f04
	if (ctx.cr6.lt) goto loc_823B1F04;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1E58) {
	__imp__sub_823B1E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B1F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b1fe0
	if (ctx.cr6.eq) goto loc_823B1FE0;
loc_823B1F58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// stbx r10,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// beq cr6,0x823b1fd4
	if (ctx.cr6.eq) goto loc_823B1FD4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b1fa0
	if (ctx.cr6.eq) goto loc_823B1FA0;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823df9a0
	ctx.lr = 0x823B1F84;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b1fa0
	if (ctx.cr6.eq) goto loc_823B1FA0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9a0
	ctx.lr = 0x823B1F98;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b1fe0
	if (ctx.cr6.eq) goto loc_823B1FE0;
loc_823B1FA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b1f58
	if (!ctx.cr6.eq) goto loc_823B1F58;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823B1FD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823B1FE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1F30) {
	__imp__sub_823B1F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1FF4) {
	__imp__sub_823B1FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,13096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13096);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1FF8) {
	__imp__sub_823B1FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2028) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823b207c
	if (ctx.cr6.eq) goto loc_823B207C;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_823B2038:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823B2040:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x823b2064
	if (ctx.cr6.eq) goto loc_823B2064;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2040
	if (ctx.cr6.eq) goto loc_823B2040;
loc_823B2064:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2084
	if (ctx.cr6.eq) goto loc_823B2084;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823b2038
	if (ctx.cr6.lt) goto loc_823B2038;
loc_823B207C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B2084:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2028) {
	__imp__sub_823B2028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B2098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b20c4
	if (ctx.cr6.eq) goto loc_823B20C4;
	// li r11,95
	ctx.r11.s64 = 95;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbx r11,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u8);
loc_823B20C4:
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// blt cr6,0x823b20ec
	if (ctx.cr6.lt) goto loc_823B20EC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,63
	ctx.r7.s64 = 63;
	// addi r4,r11,-16240
	ctx.r4.s64 = ctx.r11.s64 + -16240;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B20EC;
	sub_822830E8(ctx, base);
loc_823B20EC:
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823B20FC;
	sub_823DE1F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2090) {
	__imp__sub_823B2090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823B2110;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,95
	ctx.r24.s64 = 95;
	// addi r23,r11,-16240
	ctx.r23.s64 = ctx.r11.s64 + -16240;
loc_823B2144:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b2160
	if (ctx.cr6.eq) goto loc_823B2160;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// beq cr6,0x823b2164
	if (ctx.cr6.eq) goto loc_823B2164;
loc_823B2160:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B2164:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823b1f30
	ctx.lr = 0x823B2174;
	sub_823B1F30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b22f8
	if (ctx.cr6.eq) goto loc_823B22F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b21d4
	if (ctx.cr6.eq) goto loc_823B21D4;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_823B2190:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_823B2198:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x823b21bc
	if (ctx.cr6.eq) goto loc_823B21BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2198
	if (ctx.cr6.eq) goto loc_823B2198;
loc_823B21BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2228
	if (ctx.cr6.eq) goto loc_823B2228;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823b2190
	if (ctx.cr6.lt) goto loc_823B2190;
loc_823B21D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b21ec
	if (ctx.cr6.eq) goto loc_823B21EC;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// stbx r24,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r24.u8);
loc_823B21EC:
	// add r30,r31,r28
	ctx.r30.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// blt cr6,0x823b2210
	if (ctx.cr6.lt) goto loc_823B2210;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,63
	ctx.r7.s64 = 63;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B2210;
	sub_822830E8(ctx, base);
loc_823B2210:
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823B2220;
	sub_823DE1F0(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x823b2144
	goto loc_823B2144;
loc_823B2228:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b21d4
	if (ctx.cr6.eq) goto loc_823B21D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 & ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b21d4
	if (ctx.cr6.eq) goto loc_823B21D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b2144
	if (ctx.cr6.eq) goto loc_823B2144;
	// and r9,r10,r21
	ctx.r9.u64 = ctx.r10.u64 & ctx.r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b2144
	if (ctx.cr6.eq) goto loc_823B2144;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
loc_823B2264:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b227c
	if (!ctx.cr6.eq) goto loc_823B227C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823b2284
	if (ctx.cr6.eq) goto loc_823B2284;
loc_823B227C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x823b2264
	goto loc_823B2264;
loc_823B2284:
	// lwz r30,-8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823B228C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b228c
	if (!ctx.cr6.eq) goto loc_823B228C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rotlwi r28,r9,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b22c0
	if (ctx.cr6.eq) goto loc_823B22C0;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// stbx r24,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r24.u8);
loc_823B22C0:
	// add r29,r28,r31
	ctx.r29.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// blt cr6,0x823b22e4
	if (ctx.cr6.lt) goto loc_823B22E4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,63
	ctx.r7.s64 = 63;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B22E4;
	sub_822830E8(ctx, base);
loc_823B22E4:
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823B22F4;
	sub_823DE1F0(ctx, base);
	// b 0x823b2144
	goto loc_823B2144;
loc_823B22F8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2108) {
	__imp__sub_823B2108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2300) {
	__imp__sub_823B2300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2304) {
	__imp__sub_823B2304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2308) {
	PPC_FUNC_PROLOGUE();
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2308) {
	__imp__sub_823B2308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2310) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-19904
	ctx.r9.s64 = ctx.r11.s64 + -19904;
	// addi r7,r10,-16256
	ctx.r7.s64 = ctx.r10.s64 + -16256;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823b2108
	ctx.lr = 0x823B234C;
	sub_823B2108(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823B2354:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823b2378
	if (ctx.cr6.eq) goto loc_823B2378;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2354
	if (ctx.cr6.eq) goto loc_823B2354;
loc_823B2378:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2398
	if (ctx.cr6.eq) goto loc_823B2398;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238bcb0
	ctx.lr = 0x823B238C;
	sub_8238BCB0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b239c
	if (!ctx.cr6.eq) goto loc_823B239C;
loc_823B2398:
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
loc_823B239C:
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

PPC_WEAK_FUNC(sub_823B2310) {
	__imp__sub_823B2310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B23B0) {
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
	// bl 0x8228bc50
	ctx.lr = 0x823B23C0;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b2444
	if (!ctx.cr6.eq) goto loc_823B2444;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13096);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b23e8
	if (ctx.cr6.eq) goto loc_823B23E8;
	// li r8,32
	ctx.r8.s64 = 32;
loc_823B23E8:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r11,r11,-19904
	ctx.r11.s64 = ctx.r11.s64 + -19904;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b2414
	if (!ctx.cr6.eq) goto loc_823B2414;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823b2414
	if (!ctx.cr6.eq) goto loc_823B2414;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b2444
	if (ctx.cr6.eq) goto loc_823B2444;
loc_823B2414:
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,4608
	ctx.r8.s64 = ctx.r9.s64 + 4608;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,8320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8320, ctx.r9.u32);
	// bl 0x82390a98
	ctx.lr = 0x823B2438;
	sub_82390A98(ctx, base);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r3,r7,8976
	ctx.r3.s64 = ctx.r7.s64 + 8976;
	// bl 0x8238bfb0
	ctx.lr = 0x823B2444;
	sub_8238BFB0(ctx, base);
loc_823B2444:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B23B0) {
	__imp__sub_823B23B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2454) {
	__imp__sub_823B2454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,13096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13096);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b2488
	if (ctx.cr6.eq) goto loc_823B2488;
	// li r5,32
	ctx.r5.s64 = 32;
loc_823B2488:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-16256
	ctx.r7.s64 = ctx.r11.s64 + -16256;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823b2108
	ctx.lr = 0x823B24A4;
	sub_823B2108(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823B24AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823b24d0
	if (ctx.cr6.eq) goto loc_823B24D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b24ac
	if (ctx.cr6.eq) goto loc_823B24AC;
loc_823B24D0:
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_823B2458) {
	__imp__sub_823B2458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B24EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B24EC) {
	__imp__sub_823B24EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B24F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-19904
	ctx.r9.s64 = ctx.r10.s64 + -19904;
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B24F0) {
	__imp__sub_823B24F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2504) {
	__imp__sub_823B2504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2508) {
	__imp__sub_823B2508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B250C) {
	__imp__sub_823B250C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r11,-2736
	ctx.r9.s64 = ctx.r11.s64 + -2736;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-19880
	ctx.r11.s64 = ctx.r10.s64 + -19880;
	// mulli r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 * 112;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// stb r4,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r4.u8);
	// stb r5,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2510) {
	__imp__sub_823B2510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2540) {
	PPC_FUNC_PROLOGUE();
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// b 0x822e54e0
	sub_822E54E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2540) {
	__imp__sub_823B2540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B254C) {
	__imp__sub_823B254C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2550) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lis r7,512
	ctx.r7.s64 = 33554432;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// ori r7,r7,3
	ctx.r7.u64 = ctx.r7.u64 | 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// b 0x823d7118
	sub_823D7118(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2550) {
	__imp__sub_823B2550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B2578;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lhz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823b2640
	if (ctx.cr6.eq) goto loc_823B2640;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823b2608
	if (ctx.cr6.eq) goto loc_823B2608;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x823b25d4
	if (ctx.cr6.eq) goto loc_823B25D4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ed7c8
	ctx.lr = 0x823B25D0;
	sub_823ED7C8(ctx, base);
	// b 0x823b266c
	goto loc_823B266C;
loc_823B25D4:
	// li r29,-1
	ctx.r29.s64 = -1;
	// lbz r6,70(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x823ed838
	ctx.lr = 0x823B2604;
	sub_823ED838(ctx, base);
	// b 0x823b266c
	goto loc_823B266C;
loc_823B2608:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r5,70(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lhz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823ed6f0
	ctx.lr = 0x823B263C;
	sub_823ED6F0(ctx, base);
	// b 0x823b266c
	goto loc_823B266C;
loc_823B2640:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ed760
	ctx.lr = 0x823B266C;
	sub_823ED760(ctx, base);
loc_823B266C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b2680
	if (!ctx.cr6.eq) goto loc_823B2680;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
loc_823B2680:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B268C;
	sub_823ED900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2570) {
	__imp__sub_823B2570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2694) {
	__imp__sub_823B2694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2698) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2698) {
	__imp__sub_823B2698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B26A4) {
	__imp__sub_823B26A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26A8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B26A8) {
	__imp__sub_823B26A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B26B4) {
	__imp__sub_823B26B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26B8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B26B8) {
	__imp__sub_823B26B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B26C4) {
	__imp__sub_823B26C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26C8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B26C8) {
	__imp__sub_823B26C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B26D4) {
	__imp__sub_823B26D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26D8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820ca338
	sub_820CA338(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B26D8) {
	__imp__sub_823B26D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B26E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,13608
	ctx.r4.s64 = ctx.r11.s64 + 13608;
	// bl 0x82177148
	ctx.lr = 0x823B2700;
	sub_82177148(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,4608
	ctx.r31.s64 = ctx.r10.s64 + 4608;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r9,-15776
	ctx.r4.s64 = ctx.r9.s64 + -15776;
	// stw r11,8328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8328, ctx.r11.u32);
	// bl 0x82177148
	ctx.lr = 0x823B2720;
	sub_82177148(ctx, base);
	// stw r3,8332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8332, ctx.r3.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r8,-15784
	ctx.r4.s64 = ctx.r8.s64 + -15784;
	// bl 0x82177148
	ctx.lr = 0x823B2734;
	sub_82177148(ctx, base);
	// stw r3,8336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8336, ctx.r3.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r7,-15804
	ctx.r4.s64 = ctx.r7.s64 + -15804;
	// bl 0x82177148
	ctx.lr = 0x823B2748;
	sub_82177148(ctx, base);
	// stw r3,8340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8340, ctx.r3.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r6,-15824
	ctx.r4.s64 = ctx.r6.s64 + -15824;
	// bl 0x82177148
	ctx.lr = 0x823B275C;
	sub_82177148(ctx, base);
	// stw r3,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823B26E0) {
	__imp__sub_823B26E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2774) {
	__imp__sub_823B2774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2778) {
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
	// bl 0x823b26e0
	ctx.lr = 0x823B2788;
	sub_823B26E0(ctx, base);
	// bl 0x823b1e50
	ctx.lr = 0x823B278C;
	sub_823B1E50(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,924(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,924(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 924, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2778) {
	__imp__sub_823B2778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B27B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B27C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r30,r8,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823b2804
	if (!ctx.cr6.gt) goto loc_823B2804;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823B2804:
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82300a68
	ctx.lr = 0x823B2820;
	sub_82300A68(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// addi r5,r30,-6
	ctx.r5.s64 = ctx.r30.s64 + -6;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823B283C;
	sub_823DE1F0(ctx, base);
	// sth r29,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r29.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B27B8) {
	__imp__sub_823B27B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B284C) {
	__imp__sub_823B284C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B2858;
	__savegprlr_27(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r1,-124
	ctx.r30.s64 = ctx.r1.s64 + -124;
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
loc_823B2864:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823b28f4
	if (ctx.cr6.gt) goto loc_823B28F4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823b28dc
	if (!ctx.cr6.gt) goto loc_823B28DC;
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B2884:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// ldu r9,-8(r7)
	ea = -8 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x823b28d4
	if (!ctx.cr6.lt) goto loc_823B28D4;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_823B28A8:
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// stdu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r10.u32 = ea;
	// beq cr6,0x823b28c8
	if (ctx.cr6.eq) goto loc_823B28C8;
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x823b28a8
	if (ctx.cr6.lt) goto loc_823B28A8;
loc_823B28C8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r9,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r9.u64);
loc_823B28D4:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823b2884
	if (!ctx.cr6.eq) goto loc_823B2884;
loc_823B28DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b29c0
	if (ctx.cr6.eq) goto loc_823B29C0;
	// lwzu r4,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzu r5,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// b 0x823b2864
	goto loc_823B2864;
loc_823B28F4:
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
loc_823B290C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x823b293c
	if (!ctx.cr6.lt) goto loc_823B293C;
loc_823B2920:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b2984
	if (ctx.cr6.eq) goto loc_823B2984;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// blt cr6,0x823b2920
	if (ctx.cr6.lt) goto loc_823B2920;
loc_823B293C:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_823B2944:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b2984
	if (ctx.cr6.eq) goto loc_823B2984;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bgt cr6,0x823b2944
	if (ctx.cr6.gt) goto loc_823B2944;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ldx r28,r8,r3
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r3.u32);
	// ldx r27,r9,r3
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// stdx r28,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r28.u64);
	// stdx r27,r8,r3
	PPC_STORE_U64(ctx.r8.u32 + ctx.r3.u32, ctx.r27.u64);
	// bne cr6,0x823b290c
	if (!ctx.cr6.eq) goto loc_823B290C;
loc_823B2984:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bgt cr6,0x823b29a8
	if (ctx.cr6.gt) goto loc_823B29A8;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x823b2864
	goto loc_823B2864;
loc_823B29A8:
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x823b2864
	goto loc_823B2864;
loc_823B29C0:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2850) {
	__imp__sub_823B2850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B29C4) {
	__imp__sub_823B29C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B29C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r7,r9,12,0,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r7.u64 & 0xFFFFFFFF00000FFF);
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B29C8) {
	__imp__sub_823B29C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B29F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x823b2a70
	if (!ctx.cr6.eq) goto loc_823B2A70;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// beq cr6,0x823b2a70
	if (ctx.cr6.eq) goto loc_823B2A70;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x823b2ae4
	if (!ctx.cr6.gt) goto loc_823B2AE4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b2aa8
	if (ctx.cr6.eq) goto loc_823B2AA8;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x823b2aa8
	if (!ctx.cr6.gt) goto loc_823B2AA8;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r10,r11,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_823B2A70:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823b2a98
	if (!ctx.cr6.gt) goto loc_823B2A98;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r9,r10,12,0,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r9.u64 & 0xFFFFFFFF00000FFF);
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
loc_823B2A98:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823b2ac0
	if (!ctx.cr6.gt) goto loc_823B2AC0;
loc_823B2AA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_823B2AC0:
	// lhz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,30(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 30);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
loc_823B2AE4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r5,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B29F8) {
	__imp__sub_823B29F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2AFC) {
	__imp__sub_823B2AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B2B08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// rlwimi r11,r5,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// sth r11,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r11.u16);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823b2c20
	if (ctx.cr6.gt) goto loc_823B2C20;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
loc_823B2B44:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823b2b88
	if (!ctx.cr6.gt) goto loc_823B2B88;
loc_823B2B58:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823b2b6c
	if (!ctx.cr6.gt) goto loc_823B2B6C;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
loc_823B2B6C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823b2be4
	if (ctx.cr6.eq) goto loc_823B2BE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823b2b58
	if (ctx.cr6.gt) goto loc_823B2B58;
loc_823B2B88:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B2B90:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823b2be4
	if (ctx.cr6.eq) goto loc_823B2BE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823b2b90
	if (!ctx.cr6.gt) goto loc_823B2B90;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823b2bc4
	if (!ctx.cr6.gt) goto loc_823B2BC4;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
loc_823B2BC4:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ldx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// stdx r7,r10,r3
	PPC_STORE_U64(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u64);
	// stdx r6,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u64);
	// bne cr6,0x823b2b44
	if (!ctx.cr6.eq) goto loc_823B2B44;
loc_823B2BE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x823b2850
	ctx.lr = 0x823B2BF0;
	sub_823B2850(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r29,32(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r31,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r31.u32);
loc_823B2C00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823b29f8
	ctx.lr = 0x823B2C10;
	sub_823B29F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823b2c00
	if (!ctx.cr6.eq) goto loc_823B2C00;
loc_823B2C20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2B00) {
	__imp__sub_823B2B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2C28) {
	__imp__sub_823B2C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B2C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b2ccc
	if (ctx.cr6.eq) goto loc_823B2CCC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b2850
	ctx.lr = 0x823B2C9C;
	sub_823B2850(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b2ccc
	if (ctx.cr6.eq) goto loc_823B2CCC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B2CA8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823b29f8
	ctx.lr = 0x823B2CC0;
	sub_823B29F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x823b2ca8
	if (!ctx.cr0.eq) goto loc_823B2CA8;
loc_823B2CCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2C70) {
	__imp__sub_823B2C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2CD4) {
	__imp__sub_823B2CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2CD8) {
	__imp__sub_823B2CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2CDC) {
	__imp__sub_823B2CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2CE0) {
	__imp__sub_823B2CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2CEC) {
	__imp__sub_823B2CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r7,r11,5404
	ctx.r7.s64 = ctx.r11.s64 + 5404;
loc_823B2CFC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b2cfc
	if (!ctx.cr0.eq) goto loc_823B2CFC;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addis r7,r4,5
	ctx.r7.s64 = ctx.r4.s64 + 327680;
	// addi r4,r11,5400
	ctx.r4.s64 = ctx.r11.s64 + 5400;
	// addi r7,r7,21120
	ctx.r7.s64 = ctx.r7.s64 + 21120;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_823B2D3C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stwcx. r10,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b2d3c
	if (!ctx.cr0.eq) goto loc_823B2D3C;
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addis r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 327680;
	// addi r3,r3,-14720
	ctx.r3.s64 = ctx.r3.s64 + -14720;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2CF0) {
	__imp__sub_823B2CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2D6C) {
	__imp__sub_823B2D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2D70) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B2D78;
	__savegprlr_29(ctx, base);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B2D70) {
	__imp__sub_823B2D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2DF0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,14592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r11,r9,5404
	ctx.r11.s64 = ctx.r9.s64 + 5404;
loc_823B2E0C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwcx. r6,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b2e0c
	if (!ctx.cr0.eq) goto loc_823B2E0C;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addis r8,r5,5
	ctx.r8.s64 = ctx.r5.s64 + 327680;
	// li r31,18432
	ctx.r31.s64 = 18432;
	// addi r8,r8,21120
	ctx.r8.s64 = ctx.r8.s64 + 21120;
	// addi r5,r9,5400
	ctx.r5.s64 = ctx.r9.s64 + 5400;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_823B2E4C:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r6,r31,r7
	ctx.r6.u64 = ctx.r31.u64 + ctx.r7.u64;
	// stwcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b2e4c
	if (!ctx.cr0.eq) goto loc_823B2E4C;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r4,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// addis r8,r9,5
	ctx.r8.s64 = ctx.r9.s64 + 327680;
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// addi r8,r8,-14720
	ctx.r8.s64 = ctx.r8.s64 + -14720;
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// addi r9,r8,8192
	ctx.r9.s64 = ctx.r8.s64 + 8192;
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// addi r7,r4,2048
	ctx.r7.s64 = ctx.r4.s64 + 2048;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// addi r8,r9,8192
	ctx.r8.s64 = ctx.r9.s64 + 8192;
	// stw r6,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r6.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r7,r7,2048
	ctx.r7.s64 = ctx.r7.s64 + 2048;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// addi r9,r8,1024
	ctx.r9.s64 = ctx.r8.s64 + 1024;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r5,r9,1024
	ctx.r5.s64 = ctx.r9.s64 + 1024;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r8,r7,1024
	ctx.r8.s64 = ctx.r7.s64 + 1024;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r8,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r8.u32);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r8,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stw r6,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2DF0) {
	__imp__sub_823B2DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8388);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r8,r9,34,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r3,r8,20
	ctx.r3.u64 = ctx.r8.u32 & 0xFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2F70) {
	__imp__sub_823B2F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B2F8C) {
	__imp__sub_823B2F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B2F90) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r31,r11,4608
	ctx.r31.s64 = ctx.r11.s64 + 4608;
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r10,8388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8388);
	// addi r31,r11,5404
	ctx.r31.s64 = ctx.r11.s64 + 5404;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r10,r10,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_823B2FBC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stwcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b2fbc
	if (!ctx.cr0.eq) goto loc_823B2FBC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addis r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 327680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,21120
	ctx.r8.s64 = ctx.r8.s64 + 21120;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r31,r11,5400
	ctx.r31.s64 = ctx.r11.s64 + 5400;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_823B2FFC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stwcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b2ffc
	if (!ctx.cr0.eq) goto loc_823B2FFC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// addis r11,r7,5
	ctx.r11.s64 = ctx.r7.s64 + 327680;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r11,r11,-14720
	ctx.r11.s64 = ctx.r11.s64 + -14720;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B2F90) {
	__imp__sub_823B2F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B3064) {
	__imp__sub_823B3064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3068) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bne cr6,0x823b3080
	if (!ctx.cr6.eq) goto loc_823B3080;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// b 0x823b2f90
	sub_823B2F90(ctx, base);
	return;
loc_823B3080:
	// li r4,2048
	ctx.r4.s64 = 2048;
	// b 0x823b2f90
	sub_823B2F90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B3068) {
	__imp__sub_823B3068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3088) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// b 0x823b2f90
	sub_823B2F90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B3088) {
	__imp__sub_823B3088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// lwz r9,14592(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// lwz r11,8388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8388);
	// addi r31,r9,5404
	ctx.r31.s64 = ctx.r9.s64 + 5404;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r11,r11,34,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823B30CC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b30cc
	if (!ctx.cr0.eq) goto loc_823B30CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// subfic r10,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r5.s64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addis r8,r6,5
	ctx.r8.s64 = ctx.r6.s64 + 327680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,21120
	ctx.r8.s64 = ctx.r8.s64 + 21120;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r6,r9,5400
	ctx.r6.s64 = ctx.r9.s64 + 5400;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
loc_823B311C:
	// mfmsr r30
	ctx.r30.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwcx. r31,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	ctx.msr = (ctx.r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b311c
	if (!ctx.cr0.eq) goto loc_823B311C;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addis r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 327680;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r9,r9,-14720
	ctx.r9.s64 = ctx.r9.s64 + -14720;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r8,r9,2048
	ctx.r8.s64 = ctx.r9.s64 + 2048;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// beq cr6,0x823b31b4
	if (ctx.cr6.eq) goto loc_823B31B4;
	// addi r9,r8,2048
	ctx.r9.s64 = ctx.r8.s64 + 2048;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// addi r6,r4,1024
	ctx.r6.s64 = ctx.r4.s64 + 1024;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
loc_823B31B4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3098) {
	__imp__sub_823B3098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B31C0) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// li r31,5
	ctx.r31.s64 = 5;
loc_823B31DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b2c70
	ctx.lr = 0x823B31E4;
	sub_823B2C70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x823b31dc
	if (!ctx.cr0.eq) goto loc_823B31DC;
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

PPC_WEAK_FUNC(sub_823B31C0) {
	__imp__sub_823B31C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x823b2c70
	sub_823B2C70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B3208) {
	__imp__sub_823B3208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3210) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823b324c
	if (!ctx.cr6.gt) goto loc_823B324C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r6,r8,12,0,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r6.u64 & 0xFFFFFFFF00000FFF);
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
loc_823B324C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3210) {
	__imp__sub_823B3210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B326C) {
	__imp__sub_823B326C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3270) {
	__imp__sub_823B3270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B3274) {
	__imp__sub_823B3274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3278) {
	__imp__sub_823B3278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B327C) {
	__imp__sub_823B327C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3280) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3280) {
	__imp__sub_823B3280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3288) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3288) {
	__imp__sub_823B3288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B3294) {
	__imp__sub_823B3294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3298) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3298) {
	__imp__sub_823B3298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B32A0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B32A0) {
	__imp__sub_823B32A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B32A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823B32B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,0(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// li r15,0
	ctx.r15.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823B32E4;
	sub_82300AE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,9(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// lhz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r16,r11,17280
	ctx.r16.s64 = ctx.r11.s64 + 17280;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// rldicl r5,r6,34,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r21,r5,20
	ctx.r21.u64 = ctx.r5.u32 & 0xFFF;
	// b 0x823b3328
	goto loc_823B3328;
loc_823B3324:
	// lwz r29,284(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_823B3328:
	// cntlzw r31,r22
	ctx.r31.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r31,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r17,r31,31
	ctx.r17.u64 = ctx.r31.u32 & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// andc r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 & ~ctx.r11.u64;
	// bl 0x82300ac8
	ctx.lr = 0x823B334C;
	sub_82300AC8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823B335C;
	sub_82300AE0(ctx, base);
	// lwzx r27,r28,r29
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r28,r8,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823b3394
	if (!ctx.cr6.gt) goto loc_823B3394;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x823b33dc
	goto loc_823B33DC;
loc_823B3394:
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82300a68
	ctx.lr = 0x823B33B4;
	sub_82300A68(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r27,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r27.u16);
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r28,-6
	ctx.r5.s64 = ctx.r28.s64 + -6;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823B33D4;
	sub_823DE1F0(ctx, base);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823B33DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b34d0
	if (ctx.cr6.eq) goto loc_823B34D0;
	// rlwinm r30,r18,2,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823b34d0
	if (ctx.cr6.eq) goto loc_823B34D0;
loc_823B33F4:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r11,61(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 61);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x823b34b8
	if (!ctx.cr6.lt) goto loc_823B34B8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x823b3418
	if (!ctx.cr6.eq) goto loc_823B3418;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3418
	if (!ctx.cr6.eq) goto loc_823B3418;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823B3418:
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r7,r9,34,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r5,r7,20
	ctx.r5.u64 = ctx.r7.u32 & 0xFFF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwimi r8,r5,0,20,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF000);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x823b3474
	if (!ctx.cr6.eq) goto loc_823B3474;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b2b00
	ctx.lr = 0x823B3460;
	sub_823B2B00(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823b29f8
	ctx.lr = 0x823B3470;
	sub_823B29F8(ctx, base);
	// b 0x823b34b8
	goto loc_823B34B8;
loc_823B3474:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b34b8
	if (ctx.cr6.eq) goto loc_823B34B8;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// sth r15,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r15.u16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// ble cr6,0x823b34b8
	if (!ctx.cr6.gt) goto loc_823B34B8;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_823B34B8:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x823b33f4
	if (!ctx.cr0.eq) goto loc_823B33F4;
loc_823B34D0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x823b3324
	if (!ctx.cr6.eq) goto loc_823B3324;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B32A8) {
	__imp__sub_823B32A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B34E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x823B34E8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// clrlwi r15,r11,20
	ctx.r15.u64 = ctx.r11.u32 & 0xFFF;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// stb r20,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r20.u8);
	// sth r15,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r15.u16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r26,r3,16
	ctx.r26.s64 = ctx.r3.s64 + 16;
	// addi r16,r11,17280
	ctx.r16.s64 = ctx.r11.s64 + 17280;
loc_823B3534:
	// cntlzw r31,r21
	ctx.r31.u64 = ctx.r21.u32 == 0 ? 32 : __builtin_clz(ctx.r21.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r29,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r16.u32);
	// andc r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 & ~ctx.r11.u64;
	// bl 0x82300ac8
	ctx.lr = 0x823B3550;
	sub_82300AC8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823B3560;
	sub_82300AE0(ctx, base);
	// lwzx r27,r29,r17
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r17.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r29,r8,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823b3598
	if (!ctx.cr6.gt) goto loc_823B3598;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x823b35e0
	goto loc_823B35E0;
loc_823B3598:
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82300a68
	ctx.lr = 0x823B35B8;
	sub_82300A68(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r27,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r27.u16);
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r29,-6
	ctx.r5.s64 = ctx.r29.s64 + -6;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823B35D8;
	sub_823DE1F0(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823B35E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3698
	if (ctx.cr6.eq) goto loc_823B3698;
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823b3698
	if (ctx.cr6.eq) goto loc_823B3698;
loc_823B35F8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3680
	if (ctx.cr6.eq) goto loc_823B3680;
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b3628
	if (ctx.cr6.eq) goto loc_823B3628;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b29f8
	ctx.lr = 0x823B3624;
	sub_823B29F8(ctx, base);
	// b 0x823b3680
	goto loc_823B3680;
loc_823B3628:
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// rldicl r8,r11,34,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// rlwimi r8,r15,0,16,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r15.u32, 0) & 0xF000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0FFF);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// beq cr6,0x823b3680
	if (ctx.cr6.eq) goto loc_823B3680;
	// lwz r8,28(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r10,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// sth r20,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r20.u16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// ble cr6,0x823b3680
	if (!ctx.cr6.gt) goto loc_823B3680;
	// stw r9,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r9.u32);
loc_823B3680:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x823b35f8
	if (!ctx.cr0.eq) goto loc_823B35F8;
loc_823B3698:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x823b3534
	if (!ctx.cr6.eq) goto loc_823B3534;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B34E0) {
	__imp__sub_823B34E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B36A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823B36B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,0(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823B36E4;
	sub_82300AE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r23,r24,16
	ctx.r23.s64 = ctx.r24.s64 + 16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,9(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r22,r24,56
	ctx.r22.s64 = ctx.r24.s64 + 56;
	// clrlwi r5,r6,20
	ctx.r5.u64 = ctx.r6.u32 & 0xFFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r9,r10,34,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r16,r9,20
	ctx.r16.u64 = ctx.r9.u32 & 0xFFF;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x823b2b00
	ctx.lr = 0x823B373C;
	sub_823B2B00(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r11,r11,17280
	ctx.r11.s64 = ctx.r11.s64 + 17280;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x823b3750
	goto loc_823B3750;
loc_823B374C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823B3750:
	// cntlzw r31,r19
	ctx.r31.u64 = ctx.r19.u32 == 0 ? 32 : __builtin_clz(ctx.r19.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// andc r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 & ~ctx.r11.u64;
	// bl 0x82300ac8
	ctx.lr = 0x823B376C;
	sub_82300AC8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823B377C;
	sub_82300AE0(ctx, base);
	// lwzx r27,r30,r14
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r14.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r29,r8,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823b37b4
	if (!ctx.cr6.gt) goto loc_823B37B4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x823b37fc
	goto loc_823B37FC;
loc_823B37B4:
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82300a68
	ctx.lr = 0x823B37D4;
	sub_82300A68(ctx, base);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// sth r27,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r27.u16);
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r29,-6
	ctx.r5.s64 = ctx.r29.s64 + -6;
	// add r4,r11,r15
	ctx.r4.u64 = ctx.r11.u64 + ctx.r15.u64;
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823B37F4;
	sub_823DE1F0(ctx, base);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823B37FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3920
	if (ctx.cr6.eq) goto loc_823B3920;
	// rlwinm r5,r18,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b3920
	if (ctx.cr6.eq) goto loc_823B3920;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_823B381C:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// cmplw cr6,r9,r16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r16.u32, ctx.xer);
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x823b3850
	if (!ctx.cr6.eq) goto loc_823B3850;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823b29f8
	ctx.lr = 0x823B384C;
	sub_823B29F8(ctx, base);
	// b 0x823b3890
	goto loc_823B3890;
loc_823B3850:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lwz r10,32(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b3890
	if (ctx.cr6.eq) goto loc_823B3890;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r7.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// sth r20,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r20.u16);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// ble cr6,0x823b3890
	if (!ctx.cr6.gt) goto loc_823B3890;
	// stw r4,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r4.u32);
loc_823B3890:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3908
	if (ctx.cr6.eq) goto loc_823B3908;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3908
	if (ctx.cr6.eq) goto loc_823B3908;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b38c8
	if (ctx.cr6.eq) goto loc_823B38C8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823b29f8
	ctx.lr = 0x823B38C4;
	sub_823B29F8(ctx, base);
	// b 0x823b3908
	goto loc_823B3908;
loc_823B38C8:
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// lwz r10,32(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b3908
	if (ctx.cr6.eq) goto loc_823B3908;
	// lwz r9,28(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,32(r22)
	PPC_STORE_U32(ctx.r22.u32 + 32, ctx.r7.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// sth r20,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r20.u16);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// ble cr6,0x823b3908
	if (!ctx.cr6.gt) goto loc_823B3908;
	// stw r4,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r4.u32);
loc_823B3908:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x823b381c
	if (!ctx.cr0.eq) goto loc_823B381C;
loc_823B3920:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x823b374c
	if (!ctx.cr6.eq) goto loc_823B374C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B36A8) {
	__imp__sub_823B36A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3930) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u16);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3930) {
	__imp__sub_823B3930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3960) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u16);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B3960) {
	__imp__sub_823B3960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B3994) {
	__imp__sub_823B3994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823B39A0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de01c
	ctx.lr = 0x823B39A8;
	__savefpr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8768(r1)
	ea = -8768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r3,8788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8788, ctx.r3.u32);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// addi r4,r1,2416
	ctx.r4.s64 = ctx.r1.s64 + 2416;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f30,700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 700);
	ctx.f30.f64 = double(temp.f32);
	// lfs f25,704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 688);
	ctx.f28.f64 = double(temp.f32);
	// lwz r15,0(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f27,692(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 692);
	ctx.f27.f64 = double(temp.f32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f26,696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 696);
	ctx.f26.f64 = double(temp.f32);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r29,56(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r28,88(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x823b2df0
	ctx.lr = 0x823B3A00;
	sub_823B2DF0(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r17,255
	ctx.r17.s64 = 255;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r14,r24
	ctx.r14.u64 = ctx.r24.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// std r24,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r24.u64);
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// std r24,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r24.u64);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// std r24,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r24.u64);
	// lfs f29,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// std r24,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r24.u64);
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// stb r24,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r24.u8);
	// stb r17,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r17.u8);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823b3cc0
	if (ctx.cr6.eq) goto loc_823B3CC0;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// subf r21,r31,r29
	ctx.r21.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r20,r31,r30
	ctx.r20.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r22,r11,17280
	ctx.r22.s64 = ctx.r11.s64 + 17280;
loc_823B3A7C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3c88
	if (ctx.cr6.eq) goto loc_823B3C88;
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x823b3ab4
	if (ctx.cr6.eq) goto loc_823B3AB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// bl 0x821742a0
	ctx.lr = 0x823B3AA4;
	sub_821742A0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f29.f64 = double(temp.f32);
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B3AB4:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 28);
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// lfs f10,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f28,f10
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// lfs f8,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fres f7,f8
	ctx.f7.f64 = float(1.0 / ctx.f8.f64);
	// lfs f6,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f4,f11,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f31,f7,f0
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f2,f31,f29
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fmuls f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fsubs f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsel f12,f13,f6,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f6.f64 : ctx.f1.f64;
	// stfs f12,0(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// beq cr6,0x823b3b38
	if (ctx.cr6.eq) goto loc_823B3B38;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x823b3b38
	if (ctx.cr6.lt) goto loc_823B3B38;
	// stb r24,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r24.u8);
	// b 0x823b3c88
	goto loc_823B3C88;
loc_823B3B38:
	// lbz r31,33(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lbz r30,32(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// bne cr6,0x823b3b68
	if (!ctx.cr6.eq) goto loc_823B3B68;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b3b68
	if (!ctx.cr6.eq) goto loc_823B3B68;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b3bcc
	if (ctx.cr6.eq) goto loc_823B3BCC;
loc_823B3B68:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b3ba0
	if (ctx.cr6.eq) goto loc_823B3BA0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823b32a8
	ctx.lr = 0x823B3B88;
	sub_823B32A8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
loc_823B3BA0:
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823b3bcc
	if (ctx.cr6.eq) goto loc_823B3BCC;
	// lbz r11,35(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 35);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_823B3BCC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// fmuls f2,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// fmuls f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// bl 0x82300b48
	ctx.lr = 0x823B3BDC;
	sub_82300B48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823b3bf0
	if (!ctx.cr6.lt) goto loc_823B3BF0;
	// stb r24,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r24.u8);
	// b 0x823b3c88
	goto loc_823B3C88;
loc_823B3BF0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b9d90
	ctx.lr = 0x823B3BFC;
	sub_823B9D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3c10
	if (!ctx.cr6.eq) goto loc_823B3C10;
	// stb r24,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r24.u8);
	// b 0x823b3c88
	goto loc_823B3C88;
loc_823B3C10:
	// lbzx r10,r20,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r27.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r21,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r27.u32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r10,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r29,r31,r22
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// or r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 | ctx.r26.u64;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// sthx r25,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r25.u16);
	// bne cr6,0x823b3c88
	if (!ctx.cr6.eq) goto loc_823B3C88;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823b32a8
	ctx.lr = 0x823B3C80;
	sub_823B32A8(ctx, base);
	// andc r26,r26,r29
	ctx.r26.u64 = ctx.r26.u64 & ~ctx.r29.u64;
	// stwx r24,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r24.u32);
loc_823B3C88:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x823b3a7c
	if (ctx.cr6.lt) goto loc_823B3A7C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b3cbc
	if (ctx.cr6.eq) goto loc_823B3CBC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823b32a8
	ctx.lr = 0x823B3CBC;
	sub_823B32A8(ctx, base);
loc_823B3CBC:
	// lwz r22,8788(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8788);
loc_823B3CC0:
	// addi r29,r1,188
	ctx.r29.s64 = ctx.r1.s64 + 188;
	// li r27,5
	ctx.r27.s64 = 5;
loc_823B3CC8:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r29,-28
	ctx.r28.s64 = ctx.r29.s64 + -28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b3d18
	if (ctx.cr6.eq) goto loc_823B3D18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b2850
	ctx.lr = 0x823B3CE8;
	sub_823B2850(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b3d18
	if (ctx.cr6.eq) goto loc_823B3D18;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_823B3CF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823b29f8
	ctx.lr = 0x823B3D0C;
	sub_823B29F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x823b3cf4
	if (!ctx.cr0.eq) goto loc_823B3CF4;
loc_823B3D18:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bne 0x823b3cc8
	if (!ctx.cr0.eq) goto loc_823B3CC8;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823b3d4c
	if (!ctx.cr6.gt) goto loc_823B3D4C;
	// lhz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 320);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
loc_823B3D4C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r7,336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r11,1280(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1280, ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r10,1276(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1276, ctx.r10.u32);
	// stw r6,1272(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1272, ctx.r6.u32);
	// ble cr6,0x823b3d88
	if (!ctx.cr6.gt) goto loc_823B3D88;
	// lhz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
loc_823B3D88:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r11,792(r22)
	PPC_STORE_U32(ctx.r22.u32 + 792, ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r10,788(r22)
	PPC_STORE_U32(ctx.r22.u32 + 788, ctx.r10.u32);
	// stw r6,784(r22)
	PPC_STORE_U32(ctx.r22.u32 + 784, ctx.r6.u32);
	// ble cr6,0x823b3dc0
	if (!ctx.cr6.gt) goto loc_823B3DC0;
	// lhz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 200);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
loc_823B3DC0:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r11,2744(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2744, ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r10,2740(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2740, ctx.r10.u32);
	// stw r6,2736(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2736, ctx.r6.u32);
	// ble cr6,0x823b3df8
	if (!ctx.cr6.gt) goto loc_823B3DF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 240);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
loc_823B3DF8:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,4696(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4696, ctx.r11.u32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,4692(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4692, ctx.r10.u32);
	// stw r8,4688(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4688, ctx.r8.u32);
	// addi r1,r1,8768
	ctx.r1.s64 = ctx.r1.s64 + 8768;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de068
	ctx.lr = 0x823B3E1C;
	__restfpr_25(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B3998) {
	__imp__sub_823B3998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B3E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823B3E28;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de01c
	ctx.lr = 0x823B3E30;
	__savefpr_25(ctx, base);
	// stwu r1,-2560(r1)
	ea = -2560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r4,13
	ctx.r9.s64 = ctx.r4.s64 + 13;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,13536
	ctx.r8.s64 = ctx.r10.s64 + 13536;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r6,r1,1360
	ctx.r6.s64 = ctx.r1.s64 + 1360;
	// lfs f28,700(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 700);
	ctx.f28.f64 = double(temp.f32);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lfs f29,704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 704);
	ctx.f29.f64 = double(temp.f32);
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f27,688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 688);
	ctx.f27.f64 = double(temp.f32);
	// lwz r31,88(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lfs f26,692(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 692);
	ctx.f26.f64 = double(temp.f32);
	// lwzx r20,r7,r11
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lfs f25,696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 696);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// beq cr6,0x823b3e90
	if (ctx.cr6.eq) goto loc_823B3E90;
	// li r4,2048
	ctx.r4.s64 = 2048;
loc_823B3E90:
	// bl 0x823b2f90
	ctx.lr = 0x823B3E94;
	sub_823B2F90(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq cr6,0x823b403c
	if (ctx.cr6.eq) goto loc_823B403C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// addi r23,r11,17280
	ctx.r23.s64 = ctx.r11.s64 + 17280;
loc_823B3EC8:
	// lbzx r11,r27,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b400c
	if (ctx.cr6.eq) goto loc_823B400C;
	// lbz r11,34(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 34);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b400c
	if (!ctx.cr6.eq) goto loc_823B400C;
	// lfs f0,-4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 28);
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lfs f12,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f25,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f26,f10
	ctx.f9.f64 = double(float(ctx.f26.f64 - ctx.f10.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// beq cr6,0x823b3f40
	if (ctx.cr6.eq) goto loc_823B3F40;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x823b3f40
	if (ctx.cr6.lt) goto loc_823B3F40;
	// stbx r26,r27,r20
	PPC_STORE_U8(ctx.r27.u32 + ctx.r20.u32, ctx.r26.u8);
	// b 0x823b400c
	goto loc_823B400C;
loc_823B3F40:
	// lfs f13,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,24(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// fres f12,f13
	ctx.f12.f64 = float(1.0 / ctx.f13.f64);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f31,f11,f29
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f30,f11,f28
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// beq cr6,0x823b3f98
	if (ctx.cr6.eq) goto loc_823B3F98;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823b3f90
	if (ctx.cr6.eq) goto loc_823B3F90;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b34e0
	ctx.lr = 0x823B3F80;
	sub_823B34E0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
loc_823B3F90:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_823B3F98:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82300b48
	ctx.lr = 0x823B3FA8;
	sub_82300B48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823b400c
	if (ctx.cr6.lt) goto loc_823B400C;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwzx r29,r31,r23
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// or r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 | ctx.r28.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// sthx r27,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r27.u16);
	// bne cr6,0x823b400c
	if (!ctx.cr6.eq) goto loc_823B400C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b34e0
	ctx.lr = 0x823B4004;
	sub_823B34E0(ctx, base);
	// andc r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 & ~ctx.r29.u64;
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
loc_823B400C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,44
	ctx.r25.s64 = ctx.r25.s64 + 44;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823b3ec8
	if (ctx.cr6.lt) goto loc_823B3EC8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823b403c
	if (ctx.cr6.eq) goto loc_823B403C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b34e0
	ctx.lr = 0x823B403C;
	sub_823B34E0(ctx, base);
loc_823B403C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b2c70
	ctx.lr = 0x823B4044;
	sub_823B2C70(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mulli r11,r19,488
	ctx.r11.s64 = ctx.r19.s64 * 488;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823b4070
	if (!ctx.cr6.gt) goto loc_823B4070;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// lhz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwimi r9,r8,12,0,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r9.u64 & 0xFFFFFFFF00000FFF);
	// sth r9,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r9.u16);
loc_823B4070:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r9,3720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3720, ctx.r9.u32);
	// stw r10,3716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3716, ctx.r10.u32);
	// stw r7,3712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3712, ctx.r7.u32);
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de068
	ctx.lr = 0x823B4098;
	__restfpr_25(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B3E20) {
	__imp__sub_823B3E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B409C) {
	__imp__sub_823B409C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B40A0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b3e20
	ctx.lr = 0x823B40BC;
	sub_823B3E20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3e20
	ctx.lr = 0x823B40C8;
	sub_823B3E20(ctx, base);
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

PPC_WEAK_FUNC(sub_823B40A0) {
	__imp__sub_823B40A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B40DC) {
	__imp__sub_823B40DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B40E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823B40E8;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de024
	ctx.lr = 0x823B40F0;
	__savefpr_27(ctx, base);
	// stwu r1,-2544(r1)
	ea = -2544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// addi r6,r1,1360
	ctx.r6.s64 = ctx.r1.s64 + 1360;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lfs f27,700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 700);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 688);
	ctx.f30.f64 = double(temp.f32);
	// lwz r22,88(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lfs f29,692(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 692);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 696);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x823b2f90
	ctx.lr = 0x823B413C;
	sub_823B2F90(ctx, base);
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r8,4608
	ctx.r7.s64 = ctx.r8.s64 + 4608;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// std r26,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r26.u64);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// std r26,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r26.u64);
	// lwz r11,8456(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8456);
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b42f0
	if (ctx.cr6.eq) goto loc_823B42F0;
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// addi r24,r11,17280
	ctx.r24.s64 = ctx.r11.s64 + 17280;
loc_823B4190:
	// lhz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// mulli r11,r27,44
	ctx.r11.s64 = ctx.r27.s64 * 44;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b42c4
	if (!ctx.cr6.eq) goto loc_823B42C4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f29,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// beq cr6,0x823b4200
	if (ctx.cr6.eq) goto loc_823B4200;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x823b42c4
	if (!ctx.cr6.lt) goto loc_823B42C4;
loc_823B4200:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// fres f12,f13
	ctx.f12.f64 = float(1.0 / ctx.f13.f64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// bl 0x82300b48
	ctx.lr = 0x823B4220;
	sub_82300B48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823b42c4
	if (ctx.cr6.lt) goto loc_823B42C4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823b4268
	if (ctx.cr6.eq) goto loc_823B4268;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b4264
	if (ctx.cr6.eq) goto loc_823B4264;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b34e0
	ctx.lr = 0x823B4254;
	sub_823B34E0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
loc_823B4264:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_823B4268:
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r28,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwzx r28,r31,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// sthx r27,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r27.u16);
	// bne cr6,0x823b42c4
	if (!ctx.cr6.eq) goto loc_823B42C4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b34e0
	ctx.lr = 0x823B42BC;
	sub_823B34E0(ctx, base);
	// andc r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r28.u64;
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
loc_823B42C4:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// bne 0x823b4190
	if (!ctx.cr0.eq) goto loc_823B4190;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b42f0
	if (ctx.cr6.eq) goto loc_823B42F0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b34e0
	ctx.lr = 0x823B42F0;
	sub_823B34E0(ctx, base);
loc_823B42F0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b2c70
	ctx.lr = 0x823B42F8;
	sub_823B2C70(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mulli r11,r19,488
	ctx.r11.s64 = ctx.r19.s64 * 488;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823b4324
	if (!ctx.cr6.gt) goto loc_823B4324;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// lhz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwimi r9,r8,12,0,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r9.u64 & 0xFFFFFFFF00000FFF);
	// sth r9,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r9.u16);
loc_823B4324:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r9,5184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5184, ctx.r9.u32);
	// stw r10,5180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5180, ctx.r10.u32);
	// stw r7,5176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5176, ctx.r7.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de070
	ctx.lr = 0x823B434C;
	__restfpr_27(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B40E0) {
	__imp__sub_823B40E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x823B4358;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de024
	ctx.lr = 0x823B4360;
	__savefpr_27(ctx, base);
	// stwu r1,-3600(r1)
	ea = -3600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-31799
	ctx.r17.s64 = -2083979264;
	// addi r11,r4,8634
	ctx.r11.s64 = ctx.r4.s64 + 8634;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r11,14592(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14592);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// addi r7,r9,13536
	ctx.r7.s64 = ctx.r9.s64 + 13536;
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// li r27,0
	ctx.r27.s64 = 0;
	// lbzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lfs f27,700(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 700);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,704(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 704);
	ctx.f31.f64 = double(temp.f32);
	// lwz r19,88(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lfs f30,688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 688);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// lfs f29,692(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 692);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,696(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 696);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x823b43b8
	if (!ctx.cr6.eq) goto loc_823B43B8;
	// lwz r25,7916(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// b 0x823b43bc
	goto loc_823B43BC;
loc_823B43B8:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_823B43BC:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// addi r21,r10,4608
	ctx.r21.s64 = ctx.r10.s64 + 4608;
	// addi r3,r11,5404
	ctx.r3.s64 = ctx.r11.s64 + 5404;
	// lwz r10,8388(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8388);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r10,r10,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_823B43E0:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b43e0
	if (!ctx.cr0.eq) goto loc_823B43E0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// subfic r8,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r25.s64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addis r9,r4,5
	ctx.r9.s64 = ctx.r4.s64 + 327680;
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// addi r9,r9,21120
	ctx.r9.s64 = ctx.r9.s64 + 21120;
	// addi r8,r11,5400
	ctx.r8.s64 = ctx.r11.s64 + 5400;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r4,r10,2048
	ctx.r4.s64 = ctx.r10.s64 + 2048;
loc_823B442C:
	// mfmsr r31
	ctx.r31.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stwcx. r3,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b442c
	if (!ctx.cr0.eq) goto loc_823B442C;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// addis r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 327680;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-14720
	ctx.r11.s64 = ctx.r11.s64 + -14720;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r9,r11,2048
	ctx.r9.s64 = ctx.r11.s64 + 2048;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r7,r1,1376
	ctx.r7.s64 = ctx.r1.s64 + 1376;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// beq cr6,0x823b44c8
	if (ctx.cr6.eq) goto loc_823B44C8;
	// addi r11,r9,2048
	ctx.r11.s64 = ctx.r9.s64 + 2048;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// addi r7,r1,2400
	ctx.r7.s64 = ctx.r1.s64 + 2400;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_823B44C8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stb r18,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r18.u8);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// beq cr6,0x823b4678
	if (ctx.cr6.eq) goto loc_823B4678;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addi r23,r11,17280
	ctx.r23.s64 = ctx.r11.s64 + 17280;
loc_823B4508:
	// lhz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// mulli r11,r26,44
	ctx.r11.s64 = ctx.r26.s64 * 44;
	// add r31,r11,r19
	ctx.r31.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// beq cr6,0x823b456c
	if (ctx.cr6.eq) goto loc_823B456C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x823b4648
	if (!ctx.cr6.lt) goto loc_823B4648;
loc_823B456C:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fres f12,f13
	ctx.f12.f64 = float(1.0 / ctx.f13.f64);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// bl 0x82300b48
	ctx.lr = 0x823B4588;
	sub_82300B48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823b4648
	if (ctx.cr6.lt) goto loc_823B4648;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823b45e8
	if (ctx.cr6.eq) goto loc_823B45E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b45d0
	if (ctx.cr6.eq) goto loc_823B45D0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b36a8
	ctx.lr = 0x823B45C0;
	sub_823B36A8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
loc_823B45D0:
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
loc_823B45E8:
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r28,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwzx r28,r31,r23
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// sthx r26,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r26.u16);
	// bne cr6,0x823b4648
	if (!ctx.cr6.eq) goto loc_823B4648;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b36a8
	ctx.lr = 0x823B4640;
	sub_823B36A8(ctx, base);
	// andc r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r28.u64;
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
loc_823B4648:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// bne 0x823b4508
	if (!ctx.cr0.eq) goto loc_823B4508;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b4678
	if (ctx.cr6.eq) goto loc_823B4678;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b36a8
	ctx.lr = 0x823B4678;
	sub_823B36A8(ctx, base);
loc_823B4678:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823b2c70
	ctx.lr = 0x823B4680;
	sub_823B2C70(ctx, base);
	// lwz r11,8456(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8456);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r10,14592(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14592);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r6,r7,r18
	ctx.r6.s64 = ctx.r18.s64 - ctx.r7.s64;
	// mulli r11,r6,488
	ctx.r11.s64 = ctx.r6.s64 * 488;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x823b46c0
	if (!ctx.cr6.gt) goto loc_823B46C0;
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
loc_823B46C0:
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r9,5984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5984, ctx.r9.u32);
	// stw r10,5980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5980, ctx.r10.u32);
	// stw r6,5976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5976, ctx.r6.u32);
	// beq cr6,0x823b471c
	if (ctx.cr6.eq) goto loc_823B471C;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823b4704
	if (!ctx.cr6.gt) goto loc_823B4704;
	// lhz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
loc_823B4704:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r9,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r9.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// stw r9,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
loc_823B471C:
	// addi r1,r1,3600
	ctx.r1.s64 = ctx.r1.s64 + 3600;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de070
	ctx.lr = 0x823B4728;
	__restfpr_27(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B4350) {
	__imp__sub_823B4350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B472C) {
	__imp__sub_823B472C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4730) {
	PPC_FUNC_PROLOGUE();
	// lbzx r3,r3,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4730) {
	__imp__sub_823B4730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4738) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,14592(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r5,r8,5396
	ctx.r5.s64 = ctx.r8.s64 + 5396;
loc_823B4754:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b4754
	if (!ctx.cr0.eq) goto loc_823B4754;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r6,r3,41472
	ctx.r6.u64 = ctx.r3.u64 | 41472;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823b47a8
	if (ctx.cr6.lt) goto loc_823B47A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-15440
	ctx.r4.s64 = ctx.r11.s64 + -15440;
	// bl 0x82280b08
	ctx.lr = 0x823B4794;
	sub_82280B08(ctx, base);
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
loc_823B47A8:
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x823b47b8
	if (!ctx.cr6.lt) goto loc_823B47B8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823B47B8:
	// addis r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 131072;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-16064
	ctx.r11.s64 = ctx.r11.s64 + -16064;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4738) {
	__imp__sub_823B4738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B47F4) {
	__imp__sub_823B47F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B47F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B47F8) {
	__imp__sub_823B47F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4818) {
	__imp__sub_823B4818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4830) {
	__imp__sub_823B4830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b485c
	if (ctx.cr6.eq) goto loc_823B485C;
loc_823B4854:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B485C:
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x823b4854
	if (!ctx.cr6.eq) goto loc_823B4854;
	// lbz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// lbz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b4854
	if (!ctx.cr6.eq) goto loc_823B4854;
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// lbz r10,21(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b4854
	if (!ctx.cr6.eq) goto loc_823B4854;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b4854
	if (!ctx.cr6.eq) goto loc_823B4854;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4848) {
	__imp__sub_823B4848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B48B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x823b48e0
	if (ctx.cr6.eq) goto loc_823B48E0;
loc_823B48D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b4930
	goto loc_823B4930;
loc_823B48E0:
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x823b48d8
	if (!ctx.cr6.eq) goto loc_823B48D8;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b48d8
	if (!ctx.cr6.eq) goto loc_823B48D8;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r9,21(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b48d8
	if (!ctx.cr6.eq) goto loc_823B48D8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b48d8
	if (!ctx.cr6.eq) goto loc_823B48D8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_823B4930:
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r4,21(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// stb r6,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, ctx.r6.u8);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// stb r4,21(r5)
	PPC_STORE_U8(ctx.r5.u32 + 21, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B48B0) {
	__imp__sub_823B48B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B4964) {
	__imp__sub_823B4964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4968) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 | ctx.r4.u64;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B4968) {
	__imp__sub_823B4968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B499C) {
	__imp__sub_823B499C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B49A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x823B49A8;
	__savegprlr_15(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// std r3,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// std r4,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r5,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r5.u64);
	// addi r26,r11,-16
	ctx.r26.s64 = ctx.r11.s64 + -16;
	// std r6,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r6.u64);
	// subf r23,r10,r9
	ctx.r23.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// addi r31,r1,104
	ctx.r31.s64 = ctx.r1.s64 + 104;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// ori r29,r10,41472
	ctx.r29.u64 = ctx.r10.u64 | 41472;
	// ori r27,r9,49472
	ctx.r27.u64 = ctx.r9.u64 | 49472;
	// li r17,1
	ctx.r17.s64 = 1;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r24,-1
	ctx.r24.s64 = -1;
	// lis r25,-31799
	ctx.r25.s64 = -2083979264;
	// addi r21,r11,-15440
	ctx.r21.s64 = ctx.r11.s64 + -15440;
loc_823B4A0C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,14592(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r6,r9,5396
	ctx.r6.s64 = ctx.r9.s64 + 5396;
	// lwzx r11,r23,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r28.u32);
loc_823B4A20:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b4a20
	if (!ctx.cr0.eq) goto loc_823B4A20;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x823b4a60
	if (ctx.cr6.lt) goto loc_823B4A60;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823B4A58;
	sub_82280B08(ctx, base);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// b 0x823b4a98
	goto loc_823B4A98;
loc_823B4A60:
	// subf r10,r5,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r5.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823b4a70
	if (!ctx.cr6.lt) goto loc_823B4A70;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823B4A70:
	// add r10,r5,r27
	ctx.r10.u64 = ctx.r5.u64 + ctx.r27.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
loc_823B4A98:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4d00
	if (ctx.cr6.eq) goto loc_823B4D00;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// std r20,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r20.u64);
	// stwu r24,24(r26)
	ea = 24 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r26.u32 = ea;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r18,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r18.u32);
	// stwx r18,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r18.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x823b4a0c
	if (ctx.cr6.lt) goto loc_823B4A0C;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r22,r16
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r16.u32, ctx.xer);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bge cr6,0x823b4c6c
	if (!ctx.cr6.lt) goto loc_823B4C6C;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r10,r22,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r7,344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// add r25,r11,r22
	ctx.r25.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r20,r11,r8
	ctx.r20.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r19,r11,r7
	ctx.r19.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subfic r22,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r22.s64 = 1 - ctx.r11.s64;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// add r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r21,r11,24448
	ctx.r21.s64 = ctx.r11.s64 + 24448;
loc_823B4B14:
	// lbzx r11,r20,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4c58
	if (ctx.cr6.eq) goto loc_823B4C58;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r12,r12,58367
	ctx.r12.u64 = ctx.r12.u64 | 58367;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,49407
	ctx.r12.u64 = ctx.r12.u64 | 3237937152;
	// and r29,r11,r12
	ctx.r29.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823b5988
	ctx.lr = 0x823B4B48;
	sub_823B5988(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b4b64
	if (!ctx.cr6.eq) goto loc_823B4B64;
	// lbzx r11,r19,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq cr6,0x823b4b68
	if (ctx.cr6.eq) goto loc_823B4B68;
loc_823B4B64:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_823B4B68:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r27,r1,88
	ctx.r27.s64 = ctx.r1.s64 + 88;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r31,r30,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823b48b0
	ctx.lr = 0x823B4BA8;
	sub_823B48B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b4c44
	if (!ctx.cr6.eq) goto loc_823B4C44;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b4c6c
	if (!ctx.cr6.lt) goto loc_823B4C6C;
	// rldicl r9,r29,19,45
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 19) & 0x7FFFF;
	// addis r10,r21,6
	ctx.r10.s64 = ctx.r21.s64 + 393216;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r10,19712
	ctx.r9.s64 = ctx.r10.s64 + 19712;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// clrlwi r6,r8,27
	ctx.r6.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r4,r17,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x823b4c44
	if (ctx.cr6.eq) goto loc_823B4C44;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ld r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// add r7,r31,r24
	ctx.r7.u64 = ctx.r31.u64 + ctx.r24.u64;
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// subf r4,r31,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r31.s64;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpld cr6,r6,r29
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r29.u64, ctx.xer);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// beq cr6,0x823b4c38
	if (ctx.cr6.eq) goto loc_823B4C38;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x823b4c3c
	goto loc_823B4C3C;
loc_823B4C38:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_823B4C3C:
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_823B4C44:
	// add r11,r22,r25
	ctx.r11.u64 = ctx.r22.u64 + ctx.r25.u64;
	// std r29,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r29.u64);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stwx r10,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r10.u32);
loc_823B4C58:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x823b4b14
	if (ctx.cr6.lt) goto loc_823B4B14;
loc_823B4C6C:
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823B4C84:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b4ccc
	if (ctx.cr6.eq) goto loc_823B4CCC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r4,r8,r24
	ctx.r4.u64 = ctx.r8.u64 + ctx.r24.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// addi r8,r7,2
	ctx.r8.s64 = ctx.r7.s64 + 2;
	// lwzx r7,r9,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// sth r24,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r24.u16);
loc_823B4CCC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwzx r7,r9,r15
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r15.u32);
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi. r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823b4cec
	if (ctx.cr0.eq) goto loc_823B4CEC;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
loc_823B4CEC:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// bdnz 0x823b4c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4C84;
loc_823B4D00:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B49A0) {
	__imp__sub_823B49A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B4D10;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31799
	ctx.r26.s64 = -2083979264;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r7,r3,768
	ctx.r7.s64 = ctx.r3.s64 + 768;
	// addi r8,r11,13536
	ctx.r8.s64 = ctx.r11.s64 + 13536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r11,13412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13412);
	// addi r6,r3,1256
	ctx.r6.s64 = ctx.r3.s64 + 1256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lfs f0,700(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15092);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lfs f12,688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 688);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f0,692(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lfs f13,696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// ld r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x823b49a0
	ctx.lr = 0x823B4DC4;
	sub_823B49A0(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// addi r6,r31,2720
	ctx.r6.s64 = ctx.r31.s64 + 2720;
	// addi r5,r31,2728
	ctx.r5.s64 = ctx.r31.s64 + 2728;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,13412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13412);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823b49a0
	ctx.lr = 0x823B4E08;
	sub_823B49A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B4D08) {
	__imp__sub_823B4D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823B4E18;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r5,r10,5396
	ctx.r5.s64 = ctx.r10.s64 + 5396;
loc_823B4E38:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b4e38
	if (!ctx.cr0.eq) goto loc_823B4E38;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r11,r4,41472
	ctx.r11.u64 = ctx.r4.u64 | 41472;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b4e90
	if (ctx.cr6.lt) goto loc_823B4E90;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,-15440
	ctx.r4.s64 = ctx.r10.s64 + -15440;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823B4E7C;
	sub_82280B08(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b4ec4
	goto loc_823B4EC4;
loc_823B4E90:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b4ea0
	if (!ctx.cr6.lt) goto loc_823B4EA0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823B4EA0:
	// addis r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 131072;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-16064
	ctx.r11.s64 = ctx.r11.s64 + -16064;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r9,r23
	ctx.r21.u64 = ctx.r9.u64 + ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_823B4EC4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4ff4
	if (ctx.cr6.eq) goto loc_823B4FF4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x823b4fe0
	if (ctx.cr6.eq) goto loc_823B4FE0;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r24,r28,-1
	ctx.r24.s64 = ctx.r28.s64 + -1;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_823B4F14:
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r24,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4fa8
	if (ctx.cr6.eq) goto loc_823B4FA8;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r12,r12,58367
	ctx.r12.u64 = ctx.r12.u64 | 58367;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,49407
	ctx.r12.u64 = ctx.r12.u64 | 3237937152;
	// and r29,r11,r12
	ctx.r29.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823b48b0
	ctx.lr = 0x823B4F48;
	sub_823B48B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b4f9c
	if (!ctx.cr6.eq) goto loc_823B4F9C;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x823b4fb8
	if (!ctx.cr6.lt) goto loc_823B4FB8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b4f9c
	if (ctx.cr6.eq) goto loc_823B4F9C;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 | ctx.r25.u64;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// cmpld cr6,r9,r29
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r29.u64, ctx.xer);
	// sthu r7,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// beq cr6,0x823b4f94
	if (ctx.cr6.eq) goto loc_823B4F94;
	// lis r25,0
	ctx.r25.s64 = 0;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
	// b 0x823b4f98
	goto loc_823B4F98;
loc_823B4F94:
	// li r25,0
	ctx.r25.s64 = 0;
loc_823B4F98:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B4F9C:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
loc_823B4FA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x823b4f14
	if (!ctx.cr6.eq) goto loc_823B4F14;
loc_823B4FB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b4fe0
	if (ctx.cr6.eq) goto loc_823B4FE0;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 | ctx.r25.u64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// sthu r8,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r31.u32 = ea;
	// sthu r27,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_823B4FE0:
	// subf r11,r23,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r23.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b4ff4
	if (ctx.cr0.eq) goto loc_823B4FF4;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// stw r23,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r23.u32);
loc_823B4FF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B4E10) {
	__imp__sub_823B4E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B4FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B4FFC) {
	__imp__sub_823B4FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823B5008;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r5,r10,5396
	ctx.r5.s64 = ctx.r10.s64 + 5396;
loc_823B5028:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b5028
	if (!ctx.cr0.eq) goto loc_823B5028;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r11,r4,41472
	ctx.r11.u64 = ctx.r4.u64 | 41472;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b5080
	if (ctx.cr6.lt) goto loc_823B5080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,-15440
	ctx.r4.s64 = ctx.r10.s64 + -15440;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823B506C;
	sub_82280B08(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b50b4
	goto loc_823B50B4;
loc_823B5080:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b5090
	if (!ctx.cr6.lt) goto loc_823B5090;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823B5090:
	// addis r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 131072;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-16064
	ctx.r11.s64 = ctx.r11.s64 + -16064;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r24
	ctx.r23.u64 = ctx.r9.u64 + ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_823B50B4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5204
	if (ctx.cr6.eq) goto loc_823B5204;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x823b51f0
	if (ctx.cr6.eq) goto loc_823B51F0;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_823B5100:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b51b8
	if (ctx.cr6.eq) goto loc_823B51B8;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// lis r12,-15
	ctx.r12.s64 = -983040;
	// ori r12,r12,65504
	ctx.r12.u64 = ctx.r12.u64 | 65504;
	// rldicl r10,r11,39,36
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 39) & 0xFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// ori r12,r12,58367
	ctx.r12.u64 = ctx.r12.u64 | 58367;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,49407
	ctx.r12.u64 = ctx.r12.u64 | 3237937152;
	// and r29,r11,r12
	ctx.r29.u64 = ctx.r11.u64 & ctx.r12.u64;
	// beq cr6,0x823b51b8
	if (ctx.cr6.eq) goto loc_823B51B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b48b0
	ctx.lr = 0x823B5154;
	sub_823B48B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b51a8
	if (!ctx.cr6.eq) goto loc_823B51A8;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x823b51c8
	if (!ctx.cr6.lt) goto loc_823B51C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b51a8
	if (ctx.cr6.eq) goto loc_823B51A8;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 | ctx.r26.u64;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// cmpld cr6,r9,r29
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r29.u64, ctx.xer);
	// sthu r7,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// beq cr6,0x823b51a0
	if (ctx.cr6.eq) goto loc_823B51A0;
	// lis r26,0
	ctx.r26.s64 = 0;
	// ori r26,r26,32768
	ctx.r26.u64 = ctx.r26.u64 | 32768;
	// b 0x823b51a4
	goto loc_823B51A4;
loc_823B51A0:
	// li r26,0
	ctx.r26.s64 = 0;
loc_823B51A4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B51A8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_823B51B8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x823b5100
	if (!ctx.cr6.eq) goto loc_823B5100;
loc_823B51C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b51f0
	if (ctx.cr6.eq) goto loc_823B51F0;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 | ctx.r26.u64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// sthu r8,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r31.u32 = ea;
	// sthu r27,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_823B51F0:
	// subf r11,r24,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r24.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b5204
	if (ctx.cr0.eq) goto loc_823B5204;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// stw r24,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r24.u32);
loc_823B5204:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5000) {
	__imp__sub_823B5000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B520C) {
	__imp__sub_823B520C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823B5218;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r5,r10,5396
	ctx.r5.s64 = ctx.r10.s64 + 5396;
loc_823B5238:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b5238
	if (!ctx.cr0.eq) goto loc_823B5238;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r11,r4,41472
	ctx.r11.u64 = ctx.r4.u64 | 41472;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b5294
	if (ctx.cr6.lt) goto loc_823B5294;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,-15440
	ctx.r4.s64 = ctx.r10.s64 + -15440;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823B5280;
	sub_82280B08(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b52c8
	goto loc_823B52C8;
loc_823B5294:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b52a4
	if (!ctx.cr6.lt) goto loc_823B52A4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823B52A4:
	// addis r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 131072;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-16064
	ctx.r11.s64 = ctx.r11.s64 + -16064;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r24
	ctx.r23.u64 = ctx.r9.u64 + ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_823B52C8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5418
	if (ctx.cr6.eq) goto loc_823B5418;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x823b5404
	if (ctx.cr6.eq) goto loc_823B5404;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_823B5310:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b53cc
	if (ctx.cr6.eq) goto loc_823B53CC;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// slw r8,r20,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823b53cc
	if (ctx.cr6.eq) goto loc_823B53CC;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r12,r12,58367
	ctx.r12.u64 = ctx.r12.u64 | 58367;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,49407
	ctx.r12.u64 = ctx.r12.u64 | 3237937152;
	// and r28,r11,r12
	ctx.r28.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823b48b0
	ctx.lr = 0x823B5368;
	sub_823B48B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b53bc
	if (!ctx.cr6.eq) goto loc_823B53BC;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x823b53dc
	if (!ctx.cr6.lt) goto loc_823B53DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b53bc
	if (ctx.cr6.eq) goto loc_823B53BC;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 | ctx.r26.u64;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// cmpld cr6,r9,r28
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r28.u64, ctx.xer);
	// sthu r7,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// beq cr6,0x823b53b4
	if (ctx.cr6.eq) goto loc_823B53B4;
	// lis r26,0
	ctx.r26.s64 = 0;
	// ori r26,r26,32768
	ctx.r26.u64 = ctx.r26.u64 | 32768;
	// b 0x823b53b8
	goto loc_823B53B8;
loc_823B53B4:
	// li r26,0
	ctx.r26.s64 = 0;
loc_823B53B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B53BC:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_823B53CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x823b5310
	if (!ctx.cr6.eq) goto loc_823B5310;
loc_823B53DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b5404
	if (ctx.cr6.eq) goto loc_823B5404;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 | ctx.r26.u64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// sthu r8,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r31.u32 = ea;
	// sthu r27,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_823B5404:
	// subf r11,r24,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r24.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b5418
	if (ctx.cr0.eq) goto loc_823B5418;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r24,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r24.u32);
loc_823B5418:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5210) {
	__imp__sub_823B5210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823B5428;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r5,r10,5396
	ctx.r5.s64 = ctx.r10.s64 + 5396;
loc_823B5448:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b5448
	if (!ctx.cr0.eq) goto loc_823B5448;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r11,r4,41472
	ctx.r11.u64 = ctx.r4.u64 | 41472;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b54a0
	if (ctx.cr6.lt) goto loc_823B54A0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,-15440
	ctx.r4.s64 = ctx.r10.s64 + -15440;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823B548C;
	sub_82280B08(ctx, base);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b54d4
	goto loc_823B54D4;
loc_823B54A0:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b54b0
	if (!ctx.cr6.lt) goto loc_823B54B0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823B54B0:
	// addis r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 131072;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-16064
	ctx.r11.s64 = ctx.r11.s64 + -16064;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r20,r9,r21
	ctx.r20.u64 = ctx.r9.u64 + ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_823B54D4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5604
	if (ctx.cr6.eq) goto loc_823B5604;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// lwz r23,92(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x823b55f0
	if (ctx.cr6.eq) goto loc_823B55F0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_823B5520:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r12,r12,58367
	ctx.r12.u64 = ctx.r12.u64 | 58367;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// oris r12,r12,49407
	ctx.r12.u64 = ctx.r12.u64 | 3237937152;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// ldx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r23.u32);
	// and r29,r9,r12
	ctx.r29.u64 = ctx.r9.u64 & ctx.r12.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823b48b0
	ctx.lr = 0x823B5554;
	sub_823B48B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b55a8
	if (!ctx.cr6.eq) goto loc_823B55A8;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x823b55c8
	if (!ctx.cr6.lt) goto loc_823B55C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b55a8
	if (ctx.cr6.eq) goto loc_823B55A8;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 | ctx.r24.u64;
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// cmpld cr6,r9,r29
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r29.u64, ctx.xer);
	// sthu r7,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r30.u32 = ea;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// beq cr6,0x823b55a0
	if (ctx.cr6.eq) goto loc_823B55A0;
	// lis r24,0
	ctx.r24.s64 = 0;
	// ori r24,r24,32768
	ctx.r24.u64 = ctx.r24.u64 | 32768;
	// b 0x823b55a4
	goto loc_823B55A4;
loc_823B55A0:
	// li r24,0
	ctx.r24.s64 = 0;
loc_823B55A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823B55A8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x823b5520
	if (!ctx.cr6.eq) goto loc_823B5520;
loc_823B55C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b55f0
	if (ctx.cr6.eq) goto loc_823B55F0;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 | ctx.r24.u64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// sthu r8,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r30.u32 = ea;
	// sthu r25,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r25.u16);
	ctx.r30.u32 = ea;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_823B55F0:
	// subf r11,r21,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r21.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b5604
	if (ctx.cr0.eq) goto loc_823B5604;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r21,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r21.u32);
loc_823B5604:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5420) {
	__imp__sub_823B5420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B560C) {
	__imp__sub_823B560C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x823B5618;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r5,r10,5396
	ctx.r5.s64 = ctx.r10.s64 + 5396;
loc_823B5638:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b5638
	if (!ctx.cr0.eq) goto loc_823B5638;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r11,r4,41472
	ctx.r11.u64 = ctx.r4.u64 | 41472;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b5690
	if (ctx.cr6.lt) goto loc_823B5690;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,-15440
	ctx.r4.s64 = ctx.r10.s64 + -15440;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823B567C;
	sub_82280B08(ctx, base);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b56c4
	goto loc_823B56C4;
loc_823B5690:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b56a0
	if (!ctx.cr6.lt) goto loc_823B56A0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823B56A0:
	// addis r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 131072;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-16064
	ctx.r11.s64 = ctx.r11.s64 + -16064;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r18,r11,r10
	ctx.r18.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r17,r9,r18
	ctx.r17.u64 = ctx.r9.u64 + ctx.r18.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_823B56C4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5804
	if (ctx.cr6.eq) goto loc_823B5804;
	// lis r22,-31799
	ctx.r22.s64 = -2083979264;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,13412(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13412);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// lwz r21,92(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// beq cr6,0x823b57f0
	if (ctx.cr6.eq) goto loc_823B57F0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r20,24
	ctx.r20.s64 = 24;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_823B5714:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r12,r12,58367
	ctx.r12.u64 = ctx.r12.u64 | 58367;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// divw r28,r9,r20
	ctx.r28.s32 = ctx.r9.s32 / ctx.r20.s32;
	// oris r12,r12,49407
	ctx.r12.u64 = ctx.r12.u64 | 3237937152;
	// rlwinm r8,r28,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ldx r7,r8,r21
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r21.u32);
	// and r29,r7,r12
	ctx.r29.u64 = ctx.r7.u64 & ctx.r12.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823b48b0
	ctx.lr = 0x823B5750;
	sub_823B48B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b57a8
	if (!ctx.cr6.eq) goto loc_823B57A8;
	// cmplw cr6,r30,r17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x823b57c8
	if (!ctx.cr6.lt) goto loc_823B57C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b57a8
	if (ctx.cr6.eq) goto loc_823B57A8;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 | ctx.r23.u64;
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// cmpld cr6,r9,r29
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r29.u64, ctx.xer);
	// sthu r7,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r30.u32 = ea;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// beq cr6,0x823b579c
	if (ctx.cr6.eq) goto loc_823B579C;
	// lis r23,0
	ctx.r23.s64 = 0;
	// ori r23,r23,32768
	ctx.r23.u64 = ctx.r23.u64 | 32768;
	// b 0x823b57a0
	goto loc_823B57A0;
loc_823B579C:
	// li r23,0
	ctx.r23.s64 = 0;
loc_823B57A0:
	// lwz r27,13412(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13412);
	// li r31,0
	ctx.r31.s64 = 0;
loc_823B57A8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x823b5714
	if (!ctx.cr6.eq) goto loc_823B5714;
loc_823B57C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b57f0
	if (ctx.cr6.eq) goto loc_823B57F0;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 | ctx.r23.u64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// sthu r8,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r30.u32 = ea;
	// sthu r24,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r24.u16);
	ctx.r30.u32 = ea;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_823B57F0:
	// subf r11,r18,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r18.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b5804
	if (ctx.cr0.eq) goto loc_823B5804;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r18.u32);
loc_823B5804:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5610) {
	__imp__sub_823B5610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B580C) {
	__imp__sub_823B580C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x823b4e10
	sub_823B4E10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5810) {
	__imp__sub_823B5810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B5838;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31799
	ctx.r28.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,13412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r8,5588(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5588);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823b5890
	if (!ctx.cr6.eq) goto loc_823B5890;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12920);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b5890
	if (ctx.cr6.eq) goto loc_823B5890;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r31,r10,21008
	ctx.r31.s64 = ctx.r10.s64 + 21008;
	// b 0x823b5898
	goto loc_823B5898;
loc_823B5890:
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r31,r10,20480
	ctx.r31.s64 = ctx.r10.s64 + 20480;
loc_823B5898:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r6,3072
	ctx.r6.s64 = 3072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x823B58B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// li r6,6144
	ctx.r6.s64 = 6144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x823B58E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5830) {
	__imp__sub_823B5830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B58E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,3696
	ctx.r3.s64 = ctx.r3.s64 + 3696;
	// addi r4,r11,4184
	ctx.r4.s64 = ctx.r11.s64 + 4184;
	// b 0x823b5830
	sub_823B5830(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B58E8) {
	__imp__sub_823B58E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B58F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mulli r9,r4,488
	ctx.r9.s64 = ctx.r4.s64 * 488;
	// lwz r11,8456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,5160
	ctx.r7.s64 = ctx.r9.s64 + 5160;
	// li r6,768
	ctx.r6.s64 = 768;
	// lhzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823b5420
	sub_823B5420(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B58F8) {
	__imp__sub_823B58F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B5934) {
	__imp__sub_823B5934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B5940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823b6210
	ctx.lr = 0x823B5968;
	sub_823B6210(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5610
	ctx.lr = 0x823B5980;
	sub_823B5610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5938) {
	__imp__sub_823B5938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rldicl r9,r5,34,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0x3FFFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-12416
	ctx.r11.s64 = ctx.r11.s64 + -12416;
	// lhz r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 24);
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f5,-48(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,16384
	ctx.r10.s64 = ctx.r11.s64 + 16384;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmuls f3,f9,f9
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lhzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// fmadds f2,f7,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcfid f13,f5
	ctx.f13.f64 = double(ctx.f5.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// blt cr6,0x823b5b1c
	if (ctx.cr6.lt) goto loc_823B5B1C;
	// rldicl r10,r5,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0x3FFFFFFFF;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,16384
	ctx.r9.s64 = ctx.r11.s64 + 16384;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,25
	ctx.r10.s64 = ctx.r7.s64 + 25;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B5A54:
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lhz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rotlwi r6,r4,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r31.u64);
	// lfd f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f7,f8,f10,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// stfsx f7,r6,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// std r4,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r4.u64);
	// lfd f6,-40(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lhz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// lfsx f3,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsel f13,f1,f3,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lbz r4,3(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// std r4,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r4.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lhz r6,6(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfsx f9,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsel f6,f7,f9,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// stfsx f6,r6,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// std r31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r31.u64);
	// lfd f5,-24(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lhzu r4,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rotlwi r6,r4,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// lfsx f2,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f12,f13,f2,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : ctx.f1.f64;
	// stfsx f12,r6,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// bdnz 0x823b5a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5A54;
loc_823B5B1C:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823b5b8c
	if (!ctx.cr6.lt) goto loc_823B5B8C;
	// rldicl r10,r5,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0x3FFFFFFFF;
	// subf r5,r8,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r8.s64;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,26
	ctx.r7.s64 = ctx.r7.s64 + 26;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_823B5B54:
	// lbzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,-24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f7,f8,f13,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfsx f7,r9,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// bdnz 0x823b5b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5B54;
loc_823B5B8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B5988) {
	__imp__sub_823B5988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823b5bf4
	if (!ctx.cr6.lt) goto loc_823B5BF4;
loc_823B5BB0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823b5bcc
	if (!ctx.cr6.lt) goto loc_823B5BCC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823B5BCC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// blt cr6,0x823b5bb0
	if (ctx.cr6.lt) goto loc_823B5BB0;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
loc_823B5BF4:
	// bne cr6,0x823b5c10
	if (!ctx.cr6.eq) goto loc_823B5C10;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
loc_823B5C10:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x823b5c58
	if (!ctx.cr6.lt) goto loc_823B5C58;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B5C28:
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823b5c58
	if (!ctx.cr6.lt) goto loc_823B5C58;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// stwx r9,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823b5c28
	if (ctx.cr6.lt) goto loc_823B5C28;
loc_823B5C58:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B5B98) {
	__imp__sub_823B5B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B5C64) {
	__imp__sub_823B5C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x823b5e30
	if (!ctx.cr6.gt) goto loc_823B5E30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5cb8
	if (!ctx.cr6.lt) goto loc_823B5CB8;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823b5cb8
	if (ctx.cr6.eq) goto loc_823B5CB8;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823B5CB8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5cd8
	if (!ctx.cr6.lt) goto loc_823B5CD8;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823b5cd8
	if (ctx.cr6.eq) goto loc_823B5CD8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_823B5CD8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5cf8
	if (!ctx.cr6.lt) goto loc_823B5CF8;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823b5cf8
	if (ctx.cr6.eq) goto loc_823B5CF8;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823B5CF8:
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823b5d20
	if (!ctx.cr6.lt) goto loc_823B5D20;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b5d20
	if (ctx.cr6.eq) goto loc_823B5D20;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823B5D20:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823b5d40
	if (!ctx.cr6.lt) goto loc_823B5D40;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823b5d40
	if (ctx.cr6.eq) goto loc_823B5D40;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_823B5D40:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823b5d60
	if (!ctx.cr6.lt) goto loc_823B5D60;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b5d60
	if (ctx.cr6.eq) goto loc_823B5D60;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823B5D60:
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r10,r31,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r31.s64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823b5d88
	if (!ctx.cr6.lt) goto loc_823B5D88;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b5d88
	if (ctx.cr6.eq) goto loc_823B5D88;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_823B5D88:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823b5da8
	if (!ctx.cr6.lt) goto loc_823B5DA8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b5da8
	if (ctx.cr6.eq) goto loc_823B5DA8;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_823B5DA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823b5dc8
	if (!ctx.cr6.lt) goto loc_823B5DC8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b5dc8
	if (ctx.cr6.eq) goto loc_823B5DC8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_823B5DC8:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823b5de8
	if (!ctx.cr6.lt) goto loc_823B5DE8;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823b5de8
	if (ctx.cr6.eq) goto loc_823B5DE8;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_823B5DE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823b5e08
	if (!ctx.cr6.lt) goto loc_823B5E08;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823b5e08
	if (ctx.cr6.eq) goto loc_823B5E08;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_823B5E08:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5e8c
	if (!ctx.cr6.lt) goto loc_823B5E8C;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823b5e8c
	if (ctx.cr6.eq) goto loc_823B5E8C;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823B5E30:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5e4c
	if (!ctx.cr6.lt) goto loc_823B5E4C;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823b5e4c
	if (ctx.cr6.eq) goto loc_823B5E4C;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823B5E4C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5e6c
	if (!ctx.cr6.lt) goto loc_823B5E6C;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823b5e6c
	if (ctx.cr6.eq) goto loc_823B5E6C;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823B5E6C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823b5e8c
	if (!ctx.cr6.lt) goto loc_823B5E8C;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823b5e8c
	if (ctx.cr6.eq) goto loc_823B5E8C;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823B5E8C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B5C68) {
	__imp__sub_823B5C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B5E94) {
	__imp__sub_823B5E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B5EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x823b5ee4
	if (!ctx.cr0.gt) goto loc_823B5EE4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B5EC4:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzu r6,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5b98
	ctx.lr = 0x823B5EDC;
	sub_823B5B98(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x823b5ec4
	if (ctx.cr6.gt) goto loc_823B5EC4;
loc_823B5EE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5E98) {
	__imp__sub_823B5E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B5EEC) {
	__imp__sub_823B5EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B5EF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823b5f94
	if (ctx.cr6.eq) goto loc_823B5F94;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823b5f94
	if (ctx.cr6.eq) goto loc_823B5F94;
	// subfic r28,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	ctx.r28.s64 = 4 - ctx.r3.s64;
loc_823B5F1C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823b5f60
	if (!ctx.cr6.lt) goto loc_823B5F60;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823b5f58
	if (!ctx.cr0.gt) goto loc_823B5F58;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r11,r4,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r4.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823e0230
	ctx.lr = 0x823B5F58;
	sub_823E0230(ctx, base);
loc_823B5F58:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x823b5f88
	goto loc_823B5F88;
loc_823B5F60:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823b5f84
	if (!ctx.cr6.lt) goto loc_823B5F84;
loc_823B5F70:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwzu r11,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b5f70
	if (ctx.cr6.lt) goto loc_823B5F70;
loc_823B5F84:
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
loc_823B5F88:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823b5f1c
	if (!ctx.cr6.eq) goto loc_823B5F1C;
loc_823B5F94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5EF0) {
	__imp__sub_823B5EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B5F9C) {
	__imp__sub_823B5F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B5FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B5FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823b5c68
	ctx.lr = 0x823B5FE0;
	sub_823B5C68(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823b6014
	if (!ctx.cr6.lt) goto loc_823B6014;
loc_823B5FF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823b6014
	if (ctx.cr6.gt) goto loc_823B6014;
	// blt cr6,0x823b6014
	if (ctx.cr6.lt) goto loc_823B6014;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823b5ff0
	if (ctx.cr6.lt) goto loc_823B5FF0;
loc_823B6014:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823b603c
	if (!ctx.cr6.lt) goto loc_823B603C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823B6020:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b603c
	if (ctx.cr6.gt) goto loc_823B603C;
	// blt cr6,0x823b603c
	if (ctx.cr6.lt) goto loc_823B603C;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823b6020
	if (ctx.cr6.lt) goto loc_823B6020;
loc_823B603C:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823B6044:
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823b6088
	if (!ctx.cr6.lt) goto loc_823B6088;
loc_823B604C:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b607c
	if (ctx.cr6.gt) goto loc_823B607C;
	// blt cr6,0x823b6088
	if (ctx.cr6.lt) goto loc_823B6088;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823b607c
	if (ctx.cr6.eq) goto loc_823B607C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
loc_823B607C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823b604c
	if (ctx.cr6.lt) goto loc_823B604C;
loc_823B6088:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x823b60d8
	if (!ctx.cr6.gt) goto loc_823B60D8;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_823B6094:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823b60c4
	if (ctx.cr6.gt) goto loc_823B60C4;
	// blt cr6,0x823b60d4
	if (ctx.cr6.lt) goto loc_823B60D4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b60c4
	if (ctx.cr6.eq) goto loc_823B60C4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_823B60C4:
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823b6094
	if (ctx.cr6.lt) goto loc_823B6094;
loc_823B60D4:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
loc_823B60D8:
	// bne cr6,0x823b6134
	if (!ctx.cr6.eq) goto loc_823B6134;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823b619c
	if (ctx.cr6.eq) goto loc_823B619C;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823b6104
	if (ctx.cr6.eq) goto loc_823B6104;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b6104
	if (ctx.cr6.eq) goto loc_823B6104;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_823B6104:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b6044
	if (ctx.cr6.eq) goto loc_823B6044;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// b 0x823b6044
	goto loc_823B6044;
loc_823B6134:
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// bne cr6,0x823b617c
	if (!ctx.cr6.eq) goto loc_823B617C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823b615c
	if (ctx.cr6.eq) goto loc_823B615C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_823B615C:
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823b6044
	if (ctx.cr6.eq) goto loc_823B6044;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// b 0x823b6044
	goto loc_823B6044;
loc_823B617C:
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823b6194
	if (ctx.cr6.eq) goto loc_823B6194;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_823B6194:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x823b6044
	goto loc_823B6044;
loc_823B619C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B5FA0) {
	__imp__sub_823B5FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B61B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B61B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823b6204
	if (!ctx.cr6.gt) goto loc_823B6204;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_823B61D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// lwzx r6,r29,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x823b5b98
	ctx.lr = 0x823B61F4;
	sub_823B5B98(ctx, base);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// srawi r11,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823b61d4
	if (ctx.cr6.gt) goto loc_823B61D4;
loc_823B6204:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B61B0) {
	__imp__sub_823B61B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B620C) {
	__imp__sub_823B620C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B6218;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x823b62bc
	if (!ctx.cr6.gt) goto loc_823B62BC;
loc_823B6238:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823b62dc
	if (!ctx.cr6.gt) goto loc_823B62DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b5fa0
	ctx.lr = 0x823B6250;
	sub_823B5FA0(ctx, base);
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
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823b629c
	if (!ctx.cr6.lt) goto loc_823B629C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b6210
	ctx.lr = 0x823B6294;
	sub_823B6210(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x823b62ac
	goto loc_823B62AC;
loc_823B629C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b6210
	ctx.lr = 0x823B62A8;
	sub_823B6210(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_823B62AC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x823b6238
	if (ctx.cr6.gt) goto loc_823B6238;
loc_823B62BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823b62d4
	if (!ctx.cr6.gt) goto loc_823B62D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b5ef0
	ctx.lr = 0x823B62D4;
	sub_823B5EF0(ctx, base);
loc_823B62D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823B62DC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x823b62bc
	if (!ctx.cr6.gt) goto loc_823B62BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823b6300
	if (!ctx.cr6.gt) goto loc_823B6300;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b5e98
	ctx.lr = 0x823B6300;
	sub_823B5E98(ctx, base);
loc_823B6300:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b61b0
	ctx.lr = 0x823B630C;
	sub_823B61B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B6210) {
	__imp__sub_823B6210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B6314) {
	__imp__sub_823B6314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6318) {
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
	// bl 0x8228bc50
	ctx.lr = 0x823B6328;
	sub_8228BC50(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6318) {
	__imp__sub_823B6318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B633C) {
	__imp__sub_823B633C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6340) {
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
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// lwz r10,908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6374
	if (!ctx.cr6.gt) goto loc_823B6374;
loc_823B6360:
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
loc_823B6374:
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b6360
	if (ctx.cr6.gt) goto loc_823B6360;
	// bl 0x8228bc50
	ctx.lr = 0x823B6384;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6340) {
	__imp__sub_823B6340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B63A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// lwz r9,2444(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2444);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B63A0) {
	__imp__sub_823B63A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B63BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B63BC) {
	__imp__sub_823B63BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B63C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// lwz r9,1292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1292);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B63C0) {
	__imp__sub_823B63C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B63DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B63DC) {
	__imp__sub_823B63DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B63E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r3,5488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	// b 0x820badb0
	sub_820BADB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B63E0) {
	__imp__sub_823B63E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B63F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// lwz r9,1036(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1036);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B63F0) {
	__imp__sub_823B63F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B640C) {
	__imp__sub_823B640C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6410) {
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
	// bl 0x8236b940
	ctx.lr = 0x823B6428;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823b6494
	if (!ctx.cr6.lt) goto loc_823B6494;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b6494
	if (ctx.cr6.eq) goto loc_823B6494;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,13352
	ctx.r9.s64 = ctx.r11.s64 + 13352;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823b6494
	if (ctx.cr6.eq) goto loc_823B6494;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// lwz r9,1292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x823b64ac
	if (ctx.cr6.gt) goto loc_823B64AC;
	// lwz r9,1552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x823b6494
	if (ctx.cr6.gt) goto loc_823B6494;
	// lwz r11,1424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b64d0
	if (!ctx.cr6.gt) goto loc_823B64D0;
loc_823B6494:
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
loc_823B64AC:
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b64d0
	if (!ctx.cr6.gt) goto loc_823B64D0;
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
loc_823B64D0:
	// lwz r3,5488(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	// bl 0x820badb0
	ctx.lr = 0x823B64D8;
	sub_820BADB0(ctx, base);
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

PPC_WEAK_FUNC(sub_823B6410) {
	__imp__sub_823B6410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B64EC) {
	__imp__sub_823B64EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B64F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-8576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8576, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B64F0) {
	__imp__sub_823B64F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-8576
	ctx.r7.s64 = ctx.r11.s64 + -8576;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823B6510:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b6540
	if (!ctx.cr6.eq) goto loc_823B6540;
	// stwcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6510
	if (!ctx.cr0.eq) goto loc_823B6510;
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subfe r3,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_823B6540:
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subfe r3,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6500) {
	__imp__sub_823B6500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12800);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6558) {
	__imp__sub_823B6558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6570) {
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
	// bl 0x8236b940
	ctx.lr = 0x823B6580;
	sub_8236B940(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x823b65e8
	if (ctx.cr6.eq) goto loc_823B65E8;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// lwz r10,1292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823b65c8
	if (ctx.cr6.gt) goto loc_823B65C8;
	// lwz r10,1552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823b65b4
	if (ctx.cr6.gt) goto loc_823B65B4;
	// lwz r11,1424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b65e8
	if (!ctx.cr6.gt) goto loc_823B65E8;
loc_823B65B4:
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
loc_823B65C8:
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b65e8
	if (!ctx.cr6.gt) goto loc_823B65E8;
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
loc_823B65E8:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r3,5488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	// bl 0x820badb0
	ctx.lr = 0x823B65F8;
	sub_820BADB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6570) {
	__imp__sub_823B6570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6608) {
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
	// bl 0x8236b940
	ctx.lr = 0x823B6618;
	sub_8236B940(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x823b6648
	if (ctx.cr6.eq) goto loc_823B6648;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// lwz r9,2704(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2704);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823b6648
	if (!ctx.cr6.gt) goto loc_823B6648;
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
loc_823B6648:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b6570
	ctx.lr = 0x823B6650;
	sub_823B6570(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6608) {
	__imp__sub_823B6608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// lwz r9,2060(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2060);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6660) {
	__imp__sub_823B6660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B667C) {
	__imp__sub_823B667C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// lwz r10,2060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2060);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823b66a8
	if (ctx.cr6.gt) goto loc_823B66A8;
	// lwz r11,2188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b66a8
	if (ctx.cr6.gt) goto loc_823B66A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b6570
	sub_823B6570(ctx, base);
	return;
loc_823B66A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6680) {
	__imp__sub_823B6680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B66B0) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x823B66C8;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b670c
	if (ctx.cr6.eq) goto loc_823B670C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12800);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b670c
	if (ctx.cr6.eq) goto loc_823B670C;
loc_823B66F4:
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
loc_823B670C:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// lwz r10,2704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823b66f4
	if (ctx.cr6.gt) goto loc_823B66F4;
	// lwz r10,2960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2960);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823b66f4
	if (ctx.cr6.gt) goto loc_823B66F4;
	// lwz r10,3088(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3088);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823b66f4
	if (ctx.cr6.gt) goto loc_823B66F4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b66f4
	if (ctx.cr6.gt) goto loc_823B66F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823B6750:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823b6774
	if (!ctx.cr6.eq) goto loc_823B6774;
	// stwcx. r6,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6750
	if (!ctx.cr0.eq) goto loc_823B6750;
	// b 0x823b677c
	goto loc_823B677C;
loc_823B6774:
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B677C:
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subfe r3,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
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
}

PPC_WEAK_FUNC(sub_823B66B0) {
	__imp__sub_823B66B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B679C) {
	__imp__sub_823B679C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B67A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B67B8:
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r8,116(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// divwu r7,r9,r8
	ctx.r7.u32 = ctx.r9.u32 / ctx.r8.u32;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stwu r7,128(r11)
	ea = 128 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823b67b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B67B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B67A0) {
	__imp__sub_823B67A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B67E4) {
	__imp__sub_823B67E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B67E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B67F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// addi r10,r11,13424
	ctx.r10.s64 = ctx.r11.s64 + 13424;
	// addi r11,r9,-30056
	ctx.r11.s64 = ctx.r9.s64 + -30056;
	// addi r8,r10,-6616
	ctx.r8.s64 = ctx.r10.s64 + -6616;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r6,-31774
	ctx.r6.s64 = -2082340864;
	// addi r7,r7,-12416
	ctx.r7.s64 = ctx.r7.s64 + -12416;
	// stw r8,-8448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8448, ctx.r8.u32);
	// addi r9,r6,-9280
	ctx.r9.s64 = ctx.r6.s64 + -9280;
	// addi r8,r10,6256
	ctx.r8.s64 = ctx.r10.s64 + 6256;
	// stw r7,-8320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8320, ctx.r7.u32);
	// addi r7,r9,-3072
	ctx.r7.s64 = ctx.r9.s64 + -3072;
	// stw r9,-11264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11264, ctx.r9.u32);
	// stw r8,-11136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11136, ctx.r8.u32);
	// addi r8,r10,17808
	ctx.r8.s64 = ctx.r10.s64 + 17808;
	// stw r7,-10496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10496, ctx.r7.u32);
	// addi r7,r10,-6144
	ctx.r7.s64 = ctx.r10.s64 + -6144;
	// stw r8,-11520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11520, ctx.r8.u32);
	// li r8,432
	ctx.r8.s64 = 432;
	// stw r7,-11648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11648, ctx.r7.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r8,-8444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8444, ctx.r8.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r7,-8452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8452, ctx.r7.u32);
	// stw r9,-8316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8316, ctx.r9.u32);
	// li r7,84
	ctx.r7.s64 = 84;
	// stw r8,-8324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8324, ctx.r8.u32);
	// li r9,84
	ctx.r9.s64 = 84;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r7,-8572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8572, ctx.r7.u32);
	// stw r9,-8580(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8580, ctx.r9.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,-11132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11132, ctx.r8.u32);
	// li r9,3072
	ctx.r9.s64 = 3072;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r7,-11140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11140, ctx.r7.u32);
	// stw r9,-10492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10492, ctx.r9.u32);
	// li r7,6144
	ctx.r7.s64 = 6144;
	// stw r8,-10500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10500, ctx.r8.u32);
	// addi r6,r10,6160
	ctx.r6.s64 = ctx.r10.s64 + 6160;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r7,-11388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11388, ctx.r7.u32);
	// li r8,6144
	ctx.r8.s64 = 6144;
	// stw r6,-8576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8576, ctx.r6.u32);
	// stw r9,-11396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11396, ctx.r9.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r8,-11516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11516, ctx.r8.u32);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// li r9,6144
	ctx.r9.s64 = 6144;
	// stw r7,-11524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11524, ctx.r7.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r6,-11392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11392, ctx.r6.u32);
	// li r7,6144
	ctx.r7.s64 = 6144;
	// stw r9,-11644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11644, ctx.r9.u32);
	// stw r8,-11652(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11652, ctx.r8.u32);
	// addi r6,r11,-6168
	ctx.r6.s64 = ctx.r11.s64 + -6168;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r7,-9724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9724, ctx.r7.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r6,-9728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9728, ctx.r6.u32);
	// addi r7,r11,-12
	ctx.r7.s64 = ctx.r11.s64 + -12;
	// stw r9,-9732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9732, ctx.r9.u32);
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// addi r6,r11,-11812
	ctx.r6.s64 = ctx.r11.s64 + -11812;
	// stw r7,-10880(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10880, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,-11260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11260, ctx.r8.u32);
	// addi r5,r10,6248
	ctx.r5.s64 = ctx.r10.s64 + 6248;
	// stw r6,-10624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10624, ctx.r6.u32);
	// addi r4,r10,-6160
	ctx.r4.s64 = ctx.r10.s64 + -6160;
	// stw r9,-11268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11268, ctx.r9.u32);
	// addi r3,r10,-6184
	ctx.r3.s64 = ctx.r10.s64 + -6184;
	// addi r31,r10,7280
	ctx.r31.s64 = ctx.r10.s64 + 7280;
	// addi r30,r10,7424
	ctx.r30.s64 = ctx.r10.s64 + 7424;
	// addi r29,r11,-11872
	ctx.r29.s64 = ctx.r11.s64 + -11872;
	// addi r28,r10,-6152
	ctx.r28.s64 = ctx.r10.s64 + -6152;
	// addi r27,r10,6252
	ctx.r27.s64 = ctx.r10.s64 + 6252;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r7,-10884(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10884, ctx.r7.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,-10876(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10876, ctx.r8.u32);
	// stw r9,-10620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10620, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r7,-10748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10748, ctx.r7.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r8,-10628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10628, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,-10756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10756, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r7,-8700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8700, ctx.r7.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r8,-8828(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8828, ctx.r8.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// stw r9,-8708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8708, ctx.r9.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r7,-9468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9468, ctx.r7.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,-9092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9092, ctx.r8.u32);
	// stw r9,-9476(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9476, ctx.r9.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r6,-8836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8836, ctx.r6.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r7,-9860(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9860, ctx.r7.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r8,-9980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9980, ctx.r8.u32);
	// stw r9,-9852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9852, ctx.r9.u32);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stw r8,-10108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10108, ctx.r8.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r5,-10752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10752, ctx.r5.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// stw r4,-8832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8832, ctx.r4.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r6,-9340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9340, ctx.r6.u32);
	// addi r6,r10,-6148
	ctx.r6.s64 = ctx.r10.s64 + -6148;
	// ori r7,r7,36864
	ctx.r7.u64 = ctx.r7.u64 | 36864;
	// stw r9,-11004(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11004, ctx.r9.u32);
	// stw r8,-11012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11012, ctx.r8.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r8,10240
	ctx.r8.s64 = 10240;
	// stw r3,-8704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8704, ctx.r3.u32);
	// stw r31,-9088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9088, ctx.r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r5,-9084(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9084, ctx.r5.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,-9344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9344, ctx.r30.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r4,-9348(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9348, ctx.r4.u32);
	// addi r4,r10,6244
	ctx.r4.s64 = ctx.r10.s64 + 6244;
	// stw r29,-9472(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9472, ctx.r29.u32);
	// addi r30,r10,-6156
	ctx.r30.s64 = ctx.r10.s64 + -6156;
	// stw r6,-9856(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9856, ctx.r6.u32);
	// addi r29,r11,-8216
	ctx.r29.s64 = ctx.r11.s64 + -8216;
	// stw r7,-8956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8956, ctx.r7.u32);
	// lis r26,-31774
	ctx.r26.s64 = -2082340864;
	// addi r6,r10,7568
	ctx.r6.s64 = ctx.r10.s64 + 7568;
	// stw r28,-10240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10240, ctx.r28.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,-8964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8964, ctx.r9.u32);
	// stw r8,-11772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11772, ctx.r8.u32);
	// addi r28,r26,23488
	ctx.r28.s64 = ctx.r26.s64 + 23488;
	// stw r3,-10236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10236, ctx.r3.u32);
	// li r9,120
	ctx.r9.s64 = 120;
	// stw r5,-10244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10244, ctx.r5.u32);
	// li r8,60
	ctx.r8.s64 = 60;
	// stw r31,-9988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9988, ctx.r31.u32);
	// stw r27,-9984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9984, ctx.r27.u32);
	// stw r4,-10368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10368, ctx.r4.u32);
	// stw r5,-10364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10364, ctx.r5.u32);
	// stw r3,-10372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10372, ctx.r3.u32);
	// stw r30,-10112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10112, ctx.r30.u32);
	// stw r31,-10116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10116, ctx.r31.u32);
	// stw r29,-11008(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11008, ctx.r29.u32);
	// stw r11,-8960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8960, ctx.r11.u32);
	// stw r6,-11776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11776, ctx.r6.u32);
	// stw r7,-11780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11780, ctx.r7.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r28,-9216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9216, ctx.r28.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r9,-9212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9212, ctx.r9.u32);
	// stw r8,-9220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9220, ctx.r8.u32);
	// stw r10,-9600(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9600, ctx.r10.u32);
	// stw r7,-9596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9596, ctx.r7.u32);
	// stw r6,-9604(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9604, ctx.r6.u32);
	// bl 0x823b67a0
	ctx.lr = 0x823B6AA0;
	sub_823B67A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B67E8) {
	__imp__sub_823B67E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r11,r11,-30080
	ctx.r11.s64 = ctx.r11.s64 + -30080;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b6ae8
	if (!ctx.cr6.gt) goto loc_823B6AE8;
loc_823B6ABC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b6ae0
	if (!ctx.cr6.eq) goto loc_823B6AE0;
	// stwcx. r3,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6abc
	if (!ctx.cr0.eq) goto loc_823B6ABC;
	// b 0x823b6ae8
	goto loc_823B6AE8;
loc_823B6AE0:
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B6AE8:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r10,-30072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30072);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8228bd60
	sub_8228BD60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B6AA8) {
	__imp__sub_823B6AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6AFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6AFC) {
	__imp__sub_823B6AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6B00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B6B00) {
	__imp__sub_823B6B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6B08) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-30080
	ctx.r11.s64 = ctx.r11.s64 + -30080;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b6b64
	if (!ctx.cr6.gt) goto loc_823B6B64;
loc_823B6B38:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b6b5c
	if (!ctx.cr6.eq) goto loc_823B6B5C;
	// stwcx. r30,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6b38
	if (!ctx.cr0.eq) goto loc_823B6B38;
	// b 0x823b6b64
	goto loc_823B6B64;
loc_823B6B5C:
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B6B64:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r10,-30072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30072);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823b6b78
	if (ctx.cr6.eq) goto loc_823B6B78;
	// bl 0x8228bd60
	ctx.lr = 0x823B6B78;
	sub_8228BD60(ctx, base);
loc_823B6B78:
	// cmplwi cr6,r30,27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 27, ctx.xer);
	// bgt cr6,0x823b6d54
	if (ctx.cr6.gt) goto loc_823B6D54;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27544
	ctx.r12.s64 = ctx.r12.s64 + 27544;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_823B6C8C;
	case 1:
		goto loc_823B6C5C;
	case 2:
		goto loc_823B6C50;
	case 3:
		goto loc_823B6C44;
	case 4:
		goto loc_823B6C74;
	case 5:
		goto loc_823B6C2C;
	case 6:
		goto loc_823B6D34;
	case 7:
		goto loc_823B6C98;
	case 8:
		goto loc_823B6CB0;
	case 9:
		goto loc_823B6CA4;
	case 10:
		goto loc_823B6C38;
	case 11:
		goto loc_823B6D10;
	case 12:
		goto loc_823B6CF8;
	case 13:
		goto loc_823B6D1C;
	case 14:
		goto loc_823B6D04;
	case 15:
		goto loc_823B6D28;
	case 16:
		goto loc_823B6C68;
	case 17:
		goto loc_823B6D4C;
	case 18:
		goto loc_823B6CEC;
	case 19:
		goto loc_823B6CE0;
	case 20:
		goto loc_823B6D40;
	case 21:
		goto loc_823B6CD4;
	case 22:
		goto loc_823B6C80;
	case 23:
		goto loc_823B6CBC;
	case 24:
		goto loc_823B6CC8;
	case 25:
		goto loc_823B6C20;
	case 26:
		goto loc_823B6C08;
	case 27:
		goto loc_823B6C14;
	default:
		return;
	}
	// lwz r17,27788(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27788);
	// lwz r17,27740(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27740);
	// lwz r17,27728(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27728);
	// lwz r17,27716(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27716);
	// lwz r17,27764(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27764);
	// lwz r17,27692(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27692);
	// lwz r17,27956(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27956);
	// lwz r17,27800(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27800);
	// lwz r17,27824(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27824);
	// lwz r17,27812(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27812);
	// lwz r17,27704(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27704);
	// lwz r17,27920(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27920);
	// lwz r17,27896(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27896);
	// lwz r17,27932(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27932);
	// lwz r17,27908(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27908);
	// lwz r17,27944(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27944);
	// lwz r17,27752(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27752);
	// lwz r17,27980(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27980);
	// lwz r17,27884(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27884);
	// lwz r17,27872(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27872);
	// lwz r17,27968(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27968);
	// lwz r17,27860(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27860);
	// lwz r17,27776(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27776);
	// lwz r17,27836(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27836);
	// lwz r17,27848(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27848);
	// lwz r17,27680(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27680);
	// lwz r17,27656(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27656);
	// lwz r17,27668(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27668);
loc_823B6C08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9150
	ctx.lr = 0x823B6C10;
	sub_823D9150(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1810
	ctx.lr = 0x823B6C1C;
	sub_823B1810(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217dbb8
	ctx.lr = 0x823B6C28;
	sub_8217DBB8(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1560
	ctx.lr = 0x823B6C34;
	sub_823D1560(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1ab0
	ctx.lr = 0x823B6C40;
	sub_823D1AB0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d87d0
	ctx.lr = 0x823B6C4C;
	sub_823D87D0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8758
	ctx.lr = 0x823B6C58;
	sub_823D8758(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a1c8
	ctx.lr = 0x823B6C64;
	sub_8239A1C8(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821938f8
	ctx.lr = 0x823B6C70;
	sub_821938F8(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8520
	ctx.lr = 0x823B6C7C;
	sub_823D8520(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d7fc0
	ctx.lr = 0x823B6C88;
	sub_823D7FC0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271b30
	ctx.lr = 0x823B6C94;
	sub_82271B30(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6C98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394870
	ctx.lr = 0x823B6CA0;
	sub_82394870(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394898
	ctx.lr = 0x823B6CAC;
	sub_82394898(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82197990
	ctx.lr = 0x823B6CB8;
	sub_82197990(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821a6a58
	ctx.lr = 0x823B6CC4;
	sub_821A6A58(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259988
	ctx.lr = 0x823B6CD0;
	sub_82259988(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82187dc8
	ctx.lr = 0x823B6CDC;
	sub_82187DC8(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219afc0
	ctx.lr = 0x823B6CE8;
	sub_8219AFC0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195e58
	ctx.lr = 0x823B6CF4;
	sub_82195E58(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6CF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b3998
	ctx.lr = 0x823B6D00;
	sub_823B3998(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b40a0
	ctx.lr = 0x823B6D0C;
	sub_823B40A0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D10:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b4d08
	ctx.lr = 0x823B6D18;
	sub_823B4D08(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b58e8
	ctx.lr = 0x823B6D24;
	sub_823B58E8(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82397450
	ctx.lr = 0x823B6D30;
	sub_82397450(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5aa0
	ctx.lr = 0x823B6D3C;
	sub_823C5AA0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219aee0
	ctx.lr = 0x823B6D48;
	sub_8219AEE0(ctx, base);
	// b 0x823b6d54
	goto loc_823B6D54;
loc_823B6D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195e80
	ctx.lr = 0x823B6D54;
	sub_82195E80(ctx, base);
loc_823B6D54:
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

PPC_WEAK_FUNC(sub_823B6B08) {
	__imp__sub_823B6B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B6D6C) {
	__imp__sub_823B6D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B6D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823B6D78;
	__savegprlr_19(ctx, base);
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r19,r11,-30072
	ctx.r19.s64 = ctx.r11.s64 + -30072;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r11,r19,-11784
	ctx.r11.s64 = ctx.r19.s64 + -11784;
	// li r22,-1
	ctx.r22.s64 = -1;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r23,r31,16
	ctx.r23.s64 = ctx.r31.s64 + 16;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r21,32(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_823B6DA8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stwcx. r10,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6da8
	if (!ctx.cr0.eq) goto loc_823B6DA8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b6e04
	if (ctx.cr6.gt) goto loc_823B6E04;
loc_823B6DD0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stwcx. r10,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6dd0
	if (!ctx.cr0.eq) goto loc_823B6DD0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823b6da8
	if (!ctx.cr6.lt) goto loc_823B6DA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_823B6E04:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r27,r20,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-2424
	ctx.r24.s64 = ctx.r11.s64 + -2424;
	// addi r25,r24,-112
	ctx.r25.s64 = ctx.r24.s64 + -112;
	// lwzx r29,r27,r25
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b6f4c
	if (ctx.cr6.eq) goto loc_823B6F4C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823B6E3C;
	sub_823DE1F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x823B6E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b6ee8
	if (!ctx.cr6.eq) goto loc_823B6EE8;
loc_823B6E50:
	// lwsync 
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// subf r8,r11,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r11.s64;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
loc_823B6E68:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x823b6e8c
	if (!ctx.cr6.eq) goto loc_823B6E8C;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6e68
	if (!ctx.cr0.eq) goto loc_823B6E68;
	// b 0x823b6e94
	goto loc_823B6E94;
loc_823B6E8C:
	// stwcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B6E94:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823b6f10
	if (ctx.cr6.eq) goto loc_823B6F10;
	// lwzx r11,r27,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b6eb4
	if (ctx.cr6.eq) goto loc_823B6EB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B6EB4:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823B6ED0;
	sub_823DE1F0(ctx, base);
	// lwzx r11,r27,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b6e50
	if (ctx.cr6.eq) goto loc_823B6E50;
loc_823B6EE8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stwcx. r10,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6ee8
	if (!ctx.cr0.eq) goto loc_823B6EE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_823B6F10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823b6b08
	ctx.lr = 0x823B6F1C;
	sub_823B6B08(ctx, base);
	// lwsync 
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_823B6F24:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6f24
	if (!ctx.cr0.eq) goto loc_823B6F24;
	// lwz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// b 0x823b7098
	goto loc_823B7098;
loc_823B6F4C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b6fb4
	if (ctx.cr6.eq) goto loc_823B6FB4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x823b6fb4
	if (ctx.cr6.lt) goto loc_823B6FB4;
	// li r11,-9
	ctx.r11.s64 = -9;
loc_823B6F64:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6f64
	if (!ctx.cr0.eq) goto loc_823B6F64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x823b6f94
	if (ctx.cr6.lt) goto loc_823B6F94;
	// li r26,10
	ctx.r26.s64 = 10;
	// b 0x823b6fb4
	goto loc_823B6FB4;
loc_823B6F94:
	// li r11,9
	ctx.r11.s64 = 9;
loc_823B6F98:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b6f98
	if (!ctx.cr0.eq) goto loc_823B6F98;
loc_823B6FB4:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r30,r29,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r29.s64;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823b6fe4
	if (ctx.cr6.lt) goto loc_823B6FE4;
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r27,r30,r26
	ctx.r27.s64 = ctx.r26.s64 - ctx.r30.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r5,r27,r28
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// bl 0x823de1f0
	ctx.lr = 0x823B6FE0;
	sub_823DE1F0(ctx, base);
	// b 0x823b6fec
	goto loc_823B6FEC;
loc_823B6FE4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// add r27,r26,r29
	ctx.r27.u64 = ctx.r26.u64 + ctx.r29.u64;
loc_823B6FEC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r30,r28
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x823B7004;
	sub_823DE1F0(ctx, base);
	// lwsync 
loc_823B7008:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x823b702c
	if (!ctx.cr6.eq) goto loc_823B702C;
	// stwcx. r27,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7008
	if (!ctx.cr0.eq) goto loc_823B7008;
	// b 0x823b7034
	goto loc_823B7034;
loc_823B702C:
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B7034:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823b6fb4
	if (!ctx.cr6.eq) goto loc_823B6FB4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b7068
	if (ctx.cr6.eq) goto loc_823B7068;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823B7050:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823b6b08
	ctx.lr = 0x823B705C;
	sub_823B6B08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bne 0x823b7050
	if (!ctx.cr0.eq) goto loc_823B7050;
loc_823B7068:
	// lwsync 
	// neg r11,r26
	ctx.r11.s64 = -ctx.r26.s64;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
loc_823B7074:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7074
	if (!ctx.cr0.eq) goto loc_823B7074;
	// lwz r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
loc_823B7098:
	// beq cr6,0x823b70a0
	if (ctx.cr6.eq) goto loc_823B70A0;
	// bl 0x8228bd60
	ctx.lr = 0x823B70A0;
	sub_8228BD60(ctx, base);
loc_823B70A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B6D70) {
	__imp__sub_823B6D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B70AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B70AC) {
	__imp__sub_823B70AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B70B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// addi r11,r9,23680
	ctx.r11.s64 = ctx.r9.s64 + 23680;
	// lwz r8,-2688(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2688);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// neg r4,r5
	ctx.r4.s64 = -ctx.r5.s64;
	// orc r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ~ctx.r4.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B70B0) {
	__imp__sub_823B70B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B70DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B70DC) {
	__imp__sub_823B70DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B70E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B70E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r29,r3,7,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r31,r11,-30080
	ctx.r31.s64 = ctx.r11.s64 + -30080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,-11776
	ctx.r11.s64 = ctx.r31.s64 + -11776;
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b71ec
	if (!ctx.cr6.gt) goto loc_823B71EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b714c
	if (!ctx.cr6.gt) goto loc_823B714C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_823B7120:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823b7144
	if (!ctx.cr6.eq) goto loc_823B7144;
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7120
	if (!ctx.cr0.eq) goto loc_823B7120;
	// b 0x823b714c
	goto loc_823B714C;
loc_823B7144:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B714C:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r27,r11,-30072
	ctx.r27.s64 = ctx.r11.s64 + -30072;
	// lwz r11,-30072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b7164
	if (ctx.cr6.eq) goto loc_823B7164;
	// bl 0x8228bd60
	ctx.lr = 0x823B7164;
	sub_8228BD60(ctx, base);
loc_823B7164:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b71ec
	if (!ctx.cr6.gt) goto loc_823B71EC;
	// addi r11,r31,-11776
	ctx.r11.s64 = ctx.r31.s64 + -11776;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_823B7178:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b71cc
	if (ctx.cr6.gt) goto loc_823B71CC;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_823B7188:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7188
	if (!ctx.cr0.eq) goto loc_823B7188;
	// bl 0x8228bd28
	ctx.lr = 0x823B71A8;
	sub_8228BD28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_823B71AC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b71ac
	if (!ctx.cr0.eq) goto loc_823B71AC;
	// b 0x823b71e0
	goto loc_823B71E0;
loc_823B71CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B71D8;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b71cc
	if (!ctx.cr6.eq) goto loc_823B71CC;
loc_823B71E0:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b7178
	if (ctx.cr6.gt) goto loc_823B7178;
loc_823B71EC:
	// lwsync 
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B70E0) {
	__imp__sub_823B70E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B71F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
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

PPC_WEAK_FUNC(sub_823B71F8) {
	__imp__sub_823B71F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B721C) {
	__imp__sub_823B721C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r10,r10,23680
	ctx.r10.s64 = ctx.r10.s64 + 23680;
	// lwz r11,-2684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2684);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// neg r6,r7
	ctx.r6.s64 = -ctx.r7.s64;
	// orc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ~ctx.r6.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B7220) {
	__imp__sub_823B7220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B724C) {
	__imp__sub_823B724C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B7250) {
	__imp__sub_823B7250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B726C) {
	__imp__sub_823B726C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823B7278;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r29,r11,-30080
	ctx.r29.s64 = ctx.r11.s64 + -30080;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
loc_823B7294:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,-2688(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2688);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823b72f0
	if (ctx.cr6.lt) goto loc_823B72F0;
	// addi r11,r29,-11776
	ctx.r11.s64 = ctx.r29.s64 + -11776;
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823b72f0
	if (!ctx.cr6.gt) goto loc_823B72F0;
loc_823B72C0:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x823b72cc
	if (!ctx.cr6.eq) goto loc_823B72CC;
	// bl 0x8228be30
	ctx.lr = 0x823B72CC;
	sub_8228BE30(ctx, base);
loc_823B72CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B72D8;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b72e8
	if (ctx.cr6.eq) goto loc_823B72E8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x823b72c0
	goto loc_823B72C0;
loc_823B72E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823b73cc
	if (!ctx.cr6.eq) goto loc_823B73CC;
loc_823B72F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bge cr6,0x823b73b0
	if (!ctx.cr6.lt) goto loc_823B73B0;
	// addi r10,r29,-11776
	ctx.r10.s64 = ctx.r29.s64 + -11776;
	// rlwinm r11,r27,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B7320:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b7368
	if (!ctx.cr6.gt) goto loc_823B7368;
loc_823B732C:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x823b7338
	if (!ctx.cr6.eq) goto loc_823B7338;
	// bl 0x8228be30
	ctx.lr = 0x823B7338;
	sub_8228BE30(ctx, base);
loc_823B7338:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B7344;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7360
	if (ctx.cr6.eq) goto loc_823B7360;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x823b7294
	if (ctx.cr6.lt) goto loc_823B7294;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x823b732c
	goto loc_823B732C;
loc_823B7360:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823b7400
	if (!ctx.cr6.eq) goto loc_823B7400;
loc_823B7368:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B736C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b7390
	if (!ctx.cr6.eq) goto loc_823B7390;
	// stwcx. r26,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b736c
	if (!ctx.cr0.eq) goto loc_823B736C;
	// b 0x823b7398
	goto loc_823B7398;
loc_823B7390:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B7398:
	// addi r11,r29,-11776
	ctx.r11.s64 = ctx.r29.s64 + -11776;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r8,r11,3600
	ctx.r8.s64 = ctx.r11.s64 + 3600;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823b7320
	if (ctx.cr6.lt) goto loc_823B7320;
loc_823B73B0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x823b7294
	if (!ctx.cr6.eq) goto loc_823B7294;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823b7428
	if (ctx.cr6.eq) goto loc_823B7428;
	// bl 0x8228bd70
	ctx.lr = 0x823B73C4;
	sub_8228BD70(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x823b7294
	goto loc_823B7294;
loc_823B73CC:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B73D0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b73f4
	if (!ctx.cr6.eq) goto loc_823B73F4;
	// stwcx. r26,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b73d0
	if (!ctx.cr0.eq) goto loc_823B73D0;
	// b 0x823b7294
	goto loc_823B7294;
loc_823B73F4:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x823b7294
	goto loc_823B7294;
loc_823B7400:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B7404:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b73f4
	if (!ctx.cr6.eq) goto loc_823B73F4;
	// stwcx. r26,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7404
	if (!ctx.cr0.eq) goto loc_823B7404;
	// b 0x823b7294
	goto loc_823B7294;
loc_823B7428:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7270) {
	__imp__sub_823B7270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823B7438;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r27,r9,65535
	ctx.r27.u64 = ctx.r9.u64 | 65535;
	// addi r29,r11,-30080
	ctx.r29.s64 = ctx.r11.s64 + -30080;
	// addi r26,r10,-2688
	ctx.r26.s64 = ctx.r10.s64 + -2688;
loc_823B7458:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r31,-2688(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2688);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823b74a4
	if (ctx.cr6.lt) goto loc_823B74A4;
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b74a4
	if (ctx.cr6.eq) goto loc_823B74A4;
	// addi r11,r29,-11776
	ctx.r11.s64 = ctx.r29.s64 + -11776;
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823b74a4
	if (!ctx.cr6.gt) goto loc_823B74A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B749C;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b75b0
	if (!ctx.cr6.eq) goto loc_823B75B0;
loc_823B74A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,28
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 28, ctx.xer);
	// bge cr6,0x823b754c
	if (!ctx.cr6.lt) goto loc_823B754C;
	// addi r10,r29,-11776
	ctx.r10.s64 = ctx.r29.s64 + -11776;
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B74D4:
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b7534
	if (ctx.cr6.eq) goto loc_823B7534;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b7504
	if (!ctx.cr6.gt) goto loc_823B7504;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B74FC;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7568
	if (!ctx.cr6.eq) goto loc_823B7568;
loc_823B7504:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B7508:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b752c
	if (!ctx.cr6.eq) goto loc_823B752C;
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7508
	if (!ctx.cr0.eq) goto loc_823B7508;
	// b 0x823b7534
	goto loc_823B7534;
loc_823B752C:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B7534:
	// addi r11,r29,-11776
	ctx.r11.s64 = ctx.r29.s64 + -11776;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r11,r11,3600
	ctx.r11.s64 = ctx.r11.s64 + 3600;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b74d4
	if (ctx.cr6.lt) goto loc_823B74D4;
loc_823B754C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823b7458
	if (!ctx.cr6.eq) goto loc_823B7458;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823b75f8
	if (ctx.cr6.eq) goto loc_823B75F8;
	// bl 0x8228bd70
	ctx.lr = 0x823B7560;
	sub_8228BD70(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x823b7458
	goto loc_823B7458;
loc_823B7568:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x823b7458
	if (ctx.cr6.lt) goto loc_823B7458;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B7580;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7568
	if (!ctx.cr6.eq) goto loc_823B7568;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B758C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b75ec
	if (!ctx.cr6.eq) goto loc_823B75EC;
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b758c
	if (!ctx.cr0.eq) goto loc_823B758C;
	// b 0x823b7458
	goto loc_823B7458;
loc_823B75B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B75BC;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b75b0
	if (!ctx.cr6.eq) goto loc_823B75B0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B75C8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b75ec
	if (!ctx.cr6.eq) goto loc_823B75EC;
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b75c8
	if (!ctx.cr0.eq) goto loc_823B75C8;
	// b 0x823b7458
	goto loc_823B7458;
loc_823B75EC:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x823b7458
	goto loc_823B7458;
loc_823B75F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7430) {
	__imp__sub_823B7430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823B7608;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x823B7618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b762c
	if (ctx.cr6.eq) goto loc_823B762C;
loc_823B7620:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823B762C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// li r25,22
	ctx.r25.s64 = 22;
	// addi r29,r11,-30080
	ctx.r29.s64 = ctx.r11.s64 + -30080;
loc_823B7644:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r31,-2688(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2688);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823b7680
	if (ctx.cr6.lt) goto loc_823B7680;
	// addi r11,r29,-11776
	ctx.r11.s64 = ctx.r29.s64 + -11776;
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823b7680
	if (!ctx.cr6.gt) goto loc_823B7680;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B7678;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b77d8
	if (!ctx.cr6.eq) goto loc_823B77D8;
loc_823B7680:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x823b7694
	if (!ctx.cr6.eq) goto loc_823B7694;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x823b76b4
	goto loc_823B76B4;
loc_823B7694:
	// bl 0x8228bcc0
	ctx.lr = 0x823B7698;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b76b4
	if (ctx.cr6.eq) goto loc_823B76B4;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// subfc r10,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 & ctx.r28.u64;
loc_823B76B4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,28
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 28, ctx.xer);
	// bge cr6,0x823b7754
	if (!ctx.cr6.lt) goto loc_823B7754;
	// addi r10,r29,-11776
	ctx.r10.s64 = ctx.r29.s64 + -11776;
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B76D0:
	// bl 0x8228bcc0
	ctx.lr = 0x823B76D4;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b76ec
	if (ctx.cr6.eq) goto loc_823B76EC;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bge cr6,0x823b773c
	if (!ctx.cr6.lt) goto loc_823B773C;
loc_823B76EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b770c
	if (!ctx.cr6.gt) goto loc_823B770C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B7704;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7780
	if (!ctx.cr6.eq) goto loc_823B7780;
loc_823B770C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B7710:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b7734
	if (!ctx.cr6.eq) goto loc_823B7734;
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7710
	if (!ctx.cr0.eq) goto loc_823B7710;
	// b 0x823b773c
	goto loc_823B773C;
loc_823B7734:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B773C:
	// addi r11,r29,-11776
	ctx.r11.s64 = ctx.r29.s64 + -11776;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r11,r11,3600
	ctx.r11.s64 = ctx.r11.s64 + 3600;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b76d0
	if (ctx.cr6.lt) goto loc_823B76D0;
loc_823B7754:
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x823B775C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7620
	if (!ctx.cr6.eq) goto loc_823B7620;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823b7644
	if (!ctx.cr6.eq) goto loc_823B7644;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823b7830
	if (ctx.cr6.eq) goto loc_823B7830;
	// bl 0x8228bd70
	ctx.lr = 0x823B7778;
	sub_8228BD70(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x823b7644
	goto loc_823B7644;
loc_823B7780:
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x823B7788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7620
	if (!ctx.cr6.eq) goto loc_823B7620;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x823b7644
	if (ctx.cr6.lt) goto loc_823B7644;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B77A8;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7780
	if (!ctx.cr6.eq) goto loc_823B7780;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B77B4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b7824
	if (!ctx.cr6.eq) goto loc_823B7824;
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b77b4
	if (!ctx.cr0.eq) goto loc_823B77B4;
	// b 0x823b7644
	goto loc_823B7644;
loc_823B77D8:
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x823B77E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7620
	if (!ctx.cr6.eq) goto loc_823B7620;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6d70
	ctx.lr = 0x823B77F4;
	sub_823B6D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b77d8
	if (!ctx.cr6.eq) goto loc_823B77D8;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823B7800:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823b7824
	if (!ctx.cr6.eq) goto loc_823B7824;
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7800
	if (!ctx.cr0.eq) goto loc_823B7800;
	// b 0x823b7644
	goto loc_823B7644;
loc_823B7824:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x823b7644
	goto loc_823B7644;
loc_823B7830:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7600) {
	__imp__sub_823B7600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B783C) {
	__imp__sub_823B783C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B7848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823B785C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b78e8
	if (!ctx.cr6.eq) goto loc_823B78E8;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r30,r11,-30072
	ctx.r30.s64 = ctx.r11.s64 + -30072;
loc_823B786C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7600
	ctx.lr = 0x823B7874;
	sub_823B7600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b78e8
	if (!ctx.cr6.eq) goto loc_823B78E8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823b78ec
	if (ctx.cr6.eq) goto loc_823B78EC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_823B7888:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7888
	if (!ctx.cr0.eq) goto loc_823B7888;
	// bl 0x8228bd28
	ctx.lr = 0x823B78A8;
	sub_8228BD28(ctx, base);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B78B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b78f4
	if (!ctx.cr6.eq) goto loc_823B78F4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_823B78BC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b78bc
	if (!ctx.cr0.eq) goto loc_823B78BC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823B78E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b786c
	if (ctx.cr6.eq) goto loc_823B786C;
loc_823B78E8:
	// lwsync 
loc_823B78EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823B78F4:
	// lwsync 
loc_823B78F8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b78f8
	if (!ctx.cr0.eq) goto loc_823B78F8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7840) {
	__imp__sub_823B7840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B791C) {
	__imp__sub_823B791C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7920) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x823B7940;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x823B7944;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7950
	if (ctx.cr6.eq) goto loc_823B7950;
	// bl 0x82280f38
	ctx.lr = 0x823B7950;
	sub_82280F38(ctx, base);
loc_823B7950:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r31,r11,-30072
	ctx.r31.s64 = ctx.r11.s64 + -30072;
loc_823B795C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_823B7960:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7960
	if (!ctx.cr0.eq) goto loc_823B7960;
	// bl 0x8228bd28
	ctx.lr = 0x823B7980;
	sub_8228BD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7990
	if (ctx.cr6.eq) goto loc_823B7990;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228b0d8
	ctx.lr = 0x823B7990;
	sub_8228B0D8(ctx, base);
loc_823B7990:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_823B7994:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7994
	if (!ctx.cr0.eq) goto loc_823B7994;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b7270
	ctx.lr = 0x823B79B8;
	sub_823B7270(ctx, base);
	// b 0x823b795c
	goto loc_823B795C;
}

PPC_WEAK_FUNC(sub_823B7920) {
	__imp__sub_823B7920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B79BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B79BC) {
	__imp__sub_823B79BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B79C0) {
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
	ctx.lr = 0x823B79D8;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x823B79DC;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b79e8
	if (ctx.cr6.eq) goto loc_823B79E8;
	// bl 0x82280f38
	ctx.lr = 0x823B79E8;
	sub_82280F38(ctx, base);
loc_823B79E8:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-30072
	ctx.r31.s64 = ctx.r11.s64 + -30072;
loc_823B79F0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_823B79F4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b79f4
	if (!ctx.cr0.eq) goto loc_823B79F4;
	// bl 0x8228bd28
	ctx.lr = 0x823B7A14;
	sub_8228BD28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_823B7A18:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7a18
	if (!ctx.cr0.eq) goto loc_823B7A18;
	// bl 0x823b7430
	ctx.lr = 0x823B7A38;
	sub_823B7430(ctx, base);
	// b 0x823b79f0
	goto loc_823B79F0;
}

PPC_WEAK_FUNC(sub_823B79C0) {
	__imp__sub_823B79C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B7A3C) {
	__imp__sub_823B7A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7A40) {
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
	// bl 0x823b67e8
	ctx.lr = 0x823B7A58;
	sub_823B67E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-14876
	ctx.r30.s64 = ctx.r11.s64 + -14876;
loc_823B7A64:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x823b7a78
	if (ctx.cr6.eq) goto loc_823B7A78;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// b 0x823b7a80
	goto loc_823B7A80;
loc_823B7A78:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,31168
	ctx.r3.s64 = ctx.r11.s64 + 31168;
loc_823B7A80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8228b488
	ctx.lr = 0x823B7A88;
	sub_8228B488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b7aa0
	if (!ctx.cr6.eq) goto loc_823B7AA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x823B7AA0;
	sub_822830E8(ctx, base);
loc_823B7AA0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x823b7a64
	if (ctx.cr6.lt) goto loc_823B7A64;
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

PPC_WEAK_FUNC(sub_823B7A40) {
	__imp__sub_823B7A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B7AC4) {
	__imp__sub_823B7AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823B7AD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,12800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12800);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b7c5c
	if (ctx.cr6.eq) goto loc_823B7C5C;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// li r25,1
	ctx.r25.s64 = 1;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_823B7B20:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r25,r9
	ctx.r8.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7b20
	if (!ctx.cr0.eq) goto loc_823B7B20;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b7c3c
	if (!ctx.cr6.lt) goto loc_823B7C3C;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_823B7B4C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7b4c
	if (!ctx.cr0.eq) goto loc_823B7B4C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// divw r7,r11,r29
	ctx.r7.s32 = ctx.r11.s32 / ctx.r29.s32;
	// mullw r6,r7,r29
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// subf. r30,r6,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823b7b9c
	if (!ctx.cr0.eq) goto loc_823B7B9C;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
loc_823B7B80:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7b80
	if (!ctx.cr0.eq) goto loc_823B7B80;
loc_823B7B9C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823B7BB0;
	sub_823DE1F0(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// divw r10,r11,r29
	ctx.r10.s32 = ctx.r11.s32 / ctx.r29.s32;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwsync 
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_823B7BC8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x823b7bc8
	if (!ctx.cr6.eq) goto loc_823B7BC8;
loc_823B7BD4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x823b7bf8
	if (!ctx.cr6.eq) goto loc_823B7BF8;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7bd4
	if (!ctx.cr0.eq) goto loc_823B7BD4;
	// b 0x823b7c00
	goto loc_823B7C00;
loc_823B7BF8:
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B7C00:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x823b7bc8
	if (!ctx.cr6.eq) goto loc_823B7BC8;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
loc_823B7C10:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7c10
	if (!ctx.cr0.eq) goto loc_823B7C10;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b6aa8
	ctx.lr = 0x823B7C34;
	sub_823B6AA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823B7C3C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_823B7C40:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7c40
	if (!ctx.cr0.eq) goto loc_823B7C40;
loc_823B7C5C:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-2536
	ctx.r31.s64 = ctx.r11.s64 + -2536;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b7ca8
	if (ctx.cr6.eq) goto loc_823B7CA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7ca8
	if (ctx.cr6.eq) goto loc_823B7CA8;
loc_823B7C88:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x823B7C90;
	sub_8228B0D8(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7c88
	if (!ctx.cr6.eq) goto loc_823B7C88;
loc_823B7CA8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b6b08
	ctx.lr = 0x823B7CB4;
	sub_823B6B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7AC8) {
	__imp__sub_823B7AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B7CBC) {
	__imp__sub_823B7CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// addi r11,r10,140
	ctx.r11.s64 = ctx.r10.s64 + 140;
loc_823B7CCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x823b7cf0
	if (ctx.cr6.gt) goto loc_823B7CF0;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r10,2956
	ctx.r9.s64 = ctx.r10.s64 + 2956;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b7ccc
	if (ctx.cr6.lt) goto loc_823B7CCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823B7CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B7CC0) {
	__imp__sub_823B7CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r10,r11,23680
	ctx.r10.s64 = ctx.r11.s64 + 23680;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_823B7D04:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x823b7d28
	if (ctx.cr6.gt) goto loc_823B7D28;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r10,3596
	ctx.r9.s64 = ctx.r10.s64 + 3596;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b7d04
	if (ctx.cr6.lt) goto loc_823B7D04;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823B7D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B7CF8) {
	__imp__sub_823B7CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7D30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12692
	ctx.r10.s64 = ctx.r10.s64 + 12692;
loc_823B7D3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,11(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823b7d64
	if (!ctx.cr6.eq) goto loc_823B7D64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x823b7d3c
	if (ctx.cr6.lt) goto loc_823B7D3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B7D64:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B7D30) {
	__imp__sub_823B7D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B7D6C) {
	__imp__sub_823B7D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B7D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,12692
	ctx.r31.s64 = ctx.r10.s64 + 12692;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_823B7D8C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,11(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823b7df8
	if (!ctx.cr6.eq) goto loc_823B7DF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x823b7d8c
	if (ctx.cr6.lt) goto loc_823B7D8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B7DB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b7e18
	if (ctx.cr6.eq) goto loc_823B7E18;
	// bl 0x82283000
	ctx.lr = 0x823B7DC0;
	sub_82283000(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,3
	ctx.r29.s64 = 3;
loc_823B7DC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b7e04
	if (ctx.cr6.eq) goto loc_823B7E04;
	// bl 0x822e0228
	ctx.lr = 0x823B7DDC;
	sub_822E0228(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b7e00
	if (ctx.cr6.eq) goto loc_823B7E00;
	// bl 0x8228b510
	ctx.lr = 0x823B7DF4;
	sub_8228B510(ctx, base);
	// b 0x823b7e04
	goto loc_823B7E04;
loc_823B7DF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b7db0
	goto loc_823B7DB0;
loc_823B7E00:
	// bl 0x8228b4f8
	ctx.lr = 0x823B7E04;
	sub_8228B4F8(ctx, base);
loc_823B7E04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x823b7dc8
	if (!ctx.cr0.eq) goto loc_823B7DC8;
	// bl 0x82390c00
	ctx.lr = 0x823B7E18;
	sub_82390C00(ctx, base);
loc_823B7E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7D70) {
	__imp__sub_823B7D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x823b7840
	sub_823B7840(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7E20) {
	__imp__sub_823B7E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,31992
	ctx.r3.s64 = ctx.r11.s64 + 31992;
	// b 0x823b7840
	sub_823B7840(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7E30) {
	__imp__sub_823B7E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7E40) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r11,-30072
	ctx.r9.s64 = ctx.r11.s64 + -30072;
	// addi r11,r9,-11784
	ctx.r11.s64 = ctx.r9.s64 + -11784;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823b7ef4
	if (!ctx.cr6.gt) goto loc_823B7EF4;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// addi r11,r11,-30080
	ctx.r11.s64 = ctx.r11.s64 + -30080;
	// stw r3,-2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2688, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b7eb8
	if (!ctx.cr6.gt) goto loc_823B7EB8;
loc_823B7E8C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b7eb0
	if (!ctx.cr6.eq) goto loc_823B7EB0;
	// stwcx. r3,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7e8c
	if (!ctx.cr0.eq) goto loc_823B7E8C;
	// b 0x823b7eb8
	goto loc_823B7EB8;
loc_823B7EB0:
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B7EB8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b7ec8
	if (ctx.cr6.eq) goto loc_823B7EC8;
	// bl 0x8228bd60
	ctx.lr = 0x823B7EC8;
	sub_8228BD60(ctx, base);
loc_823B7EC8:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28848
	ctx.r3.s64 = ctx.r11.s64 + 28848;
	// bl 0x823b7840
	ctx.lr = 0x823B7ED8;
	sub_823B7840(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,-2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2688, ctx.r10.u32);
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
loc_823B7EF4:
	// lwsync 
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

PPC_WEAK_FUNC(sub_823B7E40) {
	__imp__sub_823B7E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B7F0C) {
	__imp__sub_823B7F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7F10) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r11,-30072
	ctx.r9.s64 = ctx.r11.s64 + -30072;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// addi r11,r9,-11784
	ctx.r11.s64 = ctx.r9.s64 + -11784;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r3,-2684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2684, ctx.r3.u32);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823b7fac
	if (!ctx.cr6.gt) goto loc_823B7FAC;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r11,r11,-30080
	ctx.r11.s64 = ctx.r11.s64 + -30080;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b7f88
	if (!ctx.cr6.gt) goto loc_823B7F88;
loc_823B7F5C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b7f80
	if (!ctx.cr6.eq) goto loc_823B7F80;
	// stwcx. r3,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b7f5c
	if (!ctx.cr0.eq) goto loc_823B7F5C;
	// b 0x823b7f88
	goto loc_823B7F88;
loc_823B7F80:
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823B7F88:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b7f98
	if (ctx.cr6.eq) goto loc_823B7F98;
	// bl 0x8228bd60
	ctx.lr = 0x823B7F98;
	sub_8228BD60(ctx, base);
loc_823B7F98:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29216
	ctx.r3.s64 = ctx.r11.s64 + 29216;
	// bl 0x823b7840
	ctx.lr = 0x823B7FA8;
	sub_823B7840(ctx, base);
	// b 0x823b7fb0
	goto loc_823B7FB0;
loc_823B7FAC:
	// lwsync 
loc_823B7FB0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-2684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2684, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823B7F10) {
	__imp__sub_823B7F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B7FCC) {
	__imp__sub_823B7FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7FD0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r8,r11,5672
	ctx.r8.s64 = ctx.r11.s64 + 5672;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r7,29264
	ctx.r3.s64 = ctx.r7.s64 + 29264;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x823b7840
	sub_823B7840(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7FD0) {
	__imp__sub_823B7FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B7FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B8000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f5
	ctx.f12.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fsubs f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsel f8,f11,f11,f0
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsel f7,f10,f10,f0
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fsel f6,f9,f9,f0
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f2
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// ble cr6,0x823b8084
	if (!ctx.cr6.gt) goto loc_823B8084;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B8084:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b8150
	if (ctx.cr6.eq) goto loc_823B8150;
	// lhz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b80cc
	if (ctx.cr6.eq) goto loc_823B80CC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x823b8150
	if (ctx.cr6.eq) goto loc_823B8150;
loc_823B80AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b7ff8
	ctx.lr = 0x823B80B8;
	sub_823B7FF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x823b80ac
	if (!ctx.cr0.eq) goto loc_823B80AC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823B80CC:
	// lhz r10,26(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r7,r9,17280
	ctx.r7.s64 = ctx.r9.s64 + 17280;
	// beq cr6,0x823b8110
	if (ctx.cr6.eq) goto loc_823B8110;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r8,r11,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
loc_823B80EC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// bdnz 0x823b80ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B80EC;
loc_823B8110:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b8150
	if (ctx.cr6.eq) goto loc_823B8150;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B8124:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r6,r8,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7C;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x823b8124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8124;
loc_823B8150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B7FF8) {
	__imp__sub_823B7FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B8160;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,4576(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4576);
	// subf. r11,r27,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823b8204
	if (ctx.cr0.lt) goto loc_823B8204;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lis r29,-31799
	ctx.r29.s64 = -2083979264;
loc_823B8188:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,14480(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14480);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f12,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f4,f7,f11,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fsubs f13,f4,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823b8240
	if (!ctx.cr6.lt) goto loc_823B8240;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823b81ec
	if (!ctx.cr6.gt) goto loc_823B81EC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823b8158
	ctx.lr = 0x823B81EC;
	sub_823B8158(ctx, base);
loc_823B81EC:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_823B81F8:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf. r11,r27,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823b8188
	if (!ctx.cr0.lt) goto loc_823B8188;
loc_823B8204:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823b8238
	if (ctx.cr6.eq) goto loc_823B8238;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r8,r11,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// addi r6,r9,17280
	ctx.r6.s64 = ctx.r9.s64 + 17280;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
loc_823B8238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823B8240:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x823b81f8
	goto loc_823B81F8;
}

PPC_WEAK_FUNC(sub_823B8158) {
	__imp__sub_823B8158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x823B8250;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,72(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// lwz r20,84(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r22,80(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r16,r10,27,5,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// stw r15,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r15.u32);
	// bne cr6,0x823b83f0
	if (!ctx.cr6.eq) goto loc_823B83F0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823b8584
	if (ctx.cr6.eq) goto loc_823B8584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r26,r11,17280
	ctx.r26.s64 = ctx.r11.s64 + 17280;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823B82C0:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823b83d4
	if (!ctx.cr6.lt) goto loc_823B83D4;
	// rlwinm r27,r25,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B82D8:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// andc r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r10.u64;
	// lhzx r31,r9,r21
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r21.u32);
	// rotlwi r11,r31,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 5);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f1,f9
	ctx.f1.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f13,f4
	ctx.f13.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fsubs f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsubs f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsel f8,f12,f12,f31
	ctx.f8.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// ble cr6,0x823b8368
	if (!ctx.cr6.gt) goto loc_823B8368;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823B8368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b83c4
	if (ctx.cr6.eq) goto loc_823B83C4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B8388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b83c4
	if (ctx.cr6.eq) goto loc_823B83C4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x823b83d4
	if (ctx.cr6.eq) goto loc_823B83D4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
loc_823B83C4:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823b82d8
	if (ctx.cr6.lt) goto loc_823B82D8;
loc_823B83D4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r25,r16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x823b82c0
	if (ctx.cr6.lt) goto loc_823B82C0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
loc_823B83F0:
	// stw r15,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r15.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823b8584
	if (ctx.cr6.eq) goto loc_823B8584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r26,r11,17280
	ctx.r26.s64 = ctx.r11.s64 + 17280;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823B8410:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823b8574
	if (!ctx.cr6.lt) goto loc_823B8574;
	// rlwinm r27,r25,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B8428:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// andc r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r10.u64;
	// lhzx r31,r9,r21
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r21.u32);
	// rotlwi r11,r31,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 5);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f1,f9
	ctx.f1.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f13,f4
	ctx.f13.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fsubs f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsubs f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsel f8,f12,f12,f31
	ctx.f8.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// ble cr6,0x823b84b8
	if (!ctx.cr6.gt) goto loc_823B84B8;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823B84B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b8564
	if (ctx.cr6.eq) goto loc_823B8564;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B84D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b8514
	if (ctx.cr6.eq) goto loc_823B8514;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x823b8574
	if (ctx.cr6.eq) goto loc_823B8574;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
loc_823B8514:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B8528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b8564
	if (ctx.cr6.eq) goto loc_823B8564;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x823b8574
	if (ctx.cr6.eq) goto loc_823B8574;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r5.u32);
loc_823B8564:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823b8428
	if (ctx.cr6.lt) goto loc_823B8428;
loc_823B8574:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r25,r16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x823b8410
	if (ctx.cr6.lt) goto loc_823B8410;
loc_823B8584:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8248) {
	__imp__sub_823B8248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823B8598;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31799
	ctx.r29.s64 = -2083979264;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,14492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r25,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 5;
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x823B85C8;
	sub_823DE090(ctx, base);
	// lwz r11,14492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14492);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823b8158
	ctx.lr = 0x823B85D8;
	sub_823B8158(ctx, base);
	// lis r29,-31799
	ctx.r29.s64 = -2083979264;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// rlwinm r5,r10,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x823B85F8;
	sub_823DE090(ctx, base);
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r5,r9,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x823B8614;
	sub_823DE090(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823b8688
	if (ctx.cr6.eq) goto loc_823B8688;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lis r27,-31799
	ctx.r27.s64 = -2083979264;
	// addi r28,r11,17280
	ctx.r28.s64 = ctx.r11.s64 + 17280;
loc_823B8630:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823b8678
	if (!ctx.cr6.lt) goto loc_823B8678;
	// rlwinm r29,r26,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B8648:
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4568(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4568);
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// bl 0x823b7ff8
	ctx.lr = 0x823B8668;
	sub_823B7FF8(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823b8648
	if (ctx.cr6.lt) goto loc_823B8648;
loc_823B8678:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823b8630
	if (ctx.cr6.lt) goto loc_823B8630;
loc_823B8688:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8590) {
	__imp__sub_823B8590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823B8698;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,76(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r21,r10,27,5,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823b87f0
	if (ctx.cr6.eq) goto loc_823B87F0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r25,r11,17280
	ctx.r25.s64 = ctx.r11.s64 + 17280;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823B86EC:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823b87e0
	if (!ctx.cr6.lt) goto loc_823B87E0;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r23,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r24,r10,-2
	ctx.r24.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B8710:
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// andc r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r10.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f1,f9
	ctx.f1.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f13,f4
	ctx.f13.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fsubs f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsubs f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsel f8,f12,f12,f31
	ctx.f8.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// ble cr6,0x823b87a0
	if (!ctx.cr6.gt) goto loc_823B87A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B87A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b87d0
	if (ctx.cr6.eq) goto loc_823B87D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x823B87B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b87d0
	if (ctx.cr6.eq) goto loc_823B87D0;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x823b87e0
	if (ctx.cr6.eq) goto loc_823B87E0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// sthu r31,2(r24)
	ea = 2 + ctx.r24.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r24.u32 = ea;
loc_823B87D0:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823b8710
	if (ctx.cr6.lt) goto loc_823B8710;
loc_823B87E0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823b86ec
	if (ctx.cr6.lt) goto loc_823B86EC;
loc_823B87F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8690) {
	__imp__sub_823B8690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8800) {
	__imp__sub_823B8800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8804) {
	__imp__sub_823B8804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8808) {
	__imp__sub_823B8808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B880C) {
	__imp__sub_823B880C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8810) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// bl 0x823bfdc0
	ctx.lr = 0x823B8834;
	sub_823BFDC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8810) {
	__imp__sub_823B8810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// b 0x823bfe30
	sub_823BFE30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8850) {
	__imp__sub_823B8850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8864) {
	__imp__sub_823B8864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b88ec
	if (ctx.cr6.eq) goto loc_823B88EC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_823B8890:
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823b88e4
	if (ctx.cr6.lt) goto loc_823B88E4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823b88e4
	if (!ctx.cr6.lt) goto loc_823B88E4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b88d0
	if (ctx.cr6.eq) goto loc_823B88D0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_823B88B4:
	// lhz r31,-8(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823b88d0
	if (!ctx.cr6.lt) goto loc_823B88D0;
	// lwz r31,-8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r31,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bne 0x823b88b4
	if (!ctx.cr0.eq) goto loc_823B88B4;
loc_823B88D0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
loc_823B88E4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823b8890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8890;
loc_823B88EC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8868) {
	__imp__sub_823B8868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B88F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B88F4) {
	__imp__sub_823B88F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B88F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b893c
	if (ctx.cr6.eq) goto loc_823B893C;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_823B8914:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823b8934
	if (ctx.cr6.lt) goto loc_823B8934;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823b8934
	if (!ctx.cr6.lt) goto loc_823B8934;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_823B8934:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823b8914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8914;
loc_823B893C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B88F8) {
	__imp__sub_823B88F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8944) {
	__imp__sub_823B8944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B8950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-27528
	ctx.r9.s64 = ctx.r11.s64 + -27528;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823b8a50
	if (ctx.cr6.eq) goto loc_823B8A50;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b8a50
	if (!ctx.cr6.eq) goto loc_823B8A50;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// addi r11,r11,5480
	ctx.r11.s64 = ctx.r11.s64 + 5480;
loc_823B89A4:
	// mfmsr r31
	ctx.r31.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823b89a4
	if (!ctx.cr0.eq) goto loc_823B89A4;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// blt cr6,0x823b89dc
	if (ctx.cr6.lt) goto loc_823B89DC;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x823ddd78
	ctx.lr = 0x823B89D4;
	sub_823DDD78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823B89DC:
	// addi r11,r31,5000
	ctx.r11.s64 = ctx.r31.s64 + 5000;
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r29,r5,r4
	ctx.r29.u32 = ctx.r5.u32 / ctx.r4.u32;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823B8A18;
	sub_823DE1F0(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,24448
	ctx.r8.s64 = ctx.r11.s64 + 24448;
	// rldicl r3,r4,34,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 34) & 0x3FFFFFFFF;
	// addis r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 + 393216;
	// addis r10,r8,6
	ctx.r10.s64 = ctx.r8.s64 + 393216;
	// addi r5,r11,20354
	ctx.r5.s64 = ctx.r11.s64 + 20354;
	// addi r6,r10,20352
	ctx.r6.s64 = ctx.r10.s64 + 20352;
	// clrlwi r11,r3,20
	ctx.r11.u64 = ctx.r3.u32 & 0xFFF;
	// sthx r31,r9,r5
	PPC_STORE_U16(ctx.r9.u32 + ctx.r5.u32, ctx.r31.u16);
	// sthx r11,r9,r6
	PPC_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823B8A50:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12852);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b8a70
	if (!ctx.cr6.eq) goto loc_823B8A70;
	// li r3,26
	ctx.r3.s64 = 26;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ddd78
	ctx.lr = 0x823B8A70;
	sub_823DDD78(ctx, base);
loc_823B8A70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8948) {
	__imp__sub_823B8948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8A78) {
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
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r11,5480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5480);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b8aa4
	if (ctx.cr6.lt) goto loc_823B8AA4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823B8AA4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,24448
	ctx.r8.s64 = ctx.r10.s64 + 24448;
	// addis r10,r8,6
	ctx.r10.s64 = ctx.r8.s64 + 393216;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// addi r3,r10,20352
	ctx.r3.s64 = ctx.r10.s64 + 20352;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x823b8ae8
	ctx.lr = 0x823B8ACC;
	sub_823B8AE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823B8A78) {
	__imp__sub_823B8A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8AE4) {
	__imp__sub_823B8AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B8AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// addi r11,r11,8194
	ctx.r11.s64 = ctx.r11.s64 + 8194;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823b8868
	ctx.lr = 0x823B8B28;
	sub_823B8868(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b8b70
	if (ctx.cr6.eq) goto loc_823B8B70;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_823B8B48:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823b8b68
	if (ctx.cr6.lt) goto loc_823B8B68;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823b8b68
	if (!ctx.cr6.lt) goto loc_823B8B68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_823B8B68:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823b8b48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8B48;
loc_823B8B70:
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b8868
	ctx.lr = 0x823B8B84;
	sub_823B8868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8AE8) {
	__imp__sub_823B8AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8B8C) {
	__imp__sub_823B8B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addi r8,r10,24448
	ctx.r8.s64 = ctx.r10.s64 + 24448;
	// ori r7,r9,20764
	ctx.r7.u64 = ctx.r9.u64 | 20764;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r5,r6,-28160
	ctx.r5.s64 = ctx.r6.s64 + -28160;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r4,5156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5156);
	// lwz r9,5112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5112);
	// lwz r8,5196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5196);
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,5152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5152);
	// stw r10,-28160(r6)
	PPC_STORE_U32(ctx.r6.u32 + -28160, ctx.r10.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8B90) {
	__imp__sub_823B8B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8BE4) {
	__imp__sub_823B8BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// addi r6,r11,-28160
	ctx.r6.s64 = ctx.r11.s64 + -28160;
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// addi r3,r5,24448
	ctx.r3.s64 = ctx.r5.s64 + 24448;
	// lwz r10,-28160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28160);
	// ori r5,r4,20764
	ctx.r5.u64 = ctx.r4.u64 | 20764;
	// lwz r9,14592(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14592);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r10,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r10.u32);
	// stw r4,5156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5156, ctx.r4.u32);
	// lwz r11,14592(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14592);
	// stw r8,5112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5112, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8BE8) {
	__imp__sub_823B8BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8C2C) {
	__imp__sub_823B8C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-28160
	ctx.r11.s64 = ctx.r11.s64 + -28160;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,18432
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18432, ctx.xer);
	// ble cr6,0x823b8c50
	if (!ctx.cr6.gt) goto loc_823B8C50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B8C50:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8C30) {
	__imp__sub_823B8C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8C6C) {
	__imp__sub_823B8C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,5,11,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x1FFFE0;
	// addi r9,r11,-28160
	ctx.r9.s64 = ctx.r11.s64 + -28160;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8C70) {
	__imp__sub_823B8C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8C88) {
	__imp__sub_823B8C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8C90) {
	__imp__sub_823B8C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8C94) {
	__imp__sub_823B8C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,-28160
	ctx.r10.s64 = ctx.r11.s64 + -28160;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8C98) {
	__imp__sub_823B8C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,-28160
	ctx.r10.s64 = ctx.r11.s64 + -28160;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8CB0) {
	__imp__sub_823B8CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-28160
	ctx.r11.s64 = ctx.r11.s64 + -28160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,8448
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8448, ctx.xer);
	// ble cr6,0x823b8ce8
	if (!ctx.cr6.gt) goto loc_823B8CE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B8CE8:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8CC8) {
	__imp__sub_823B8CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8CF8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823B8D00;
	__savegprlr_25(ctx, base);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// lwz r31,-28160(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28160);
	// cmplwi cr6,r31,768
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 768, ctx.xer);
	// bge cr6,0x823b8db4
	if (!ctx.cr6.lt) goto loc_823B8DB4;
	// lis r29,-31809
	ctx.r29.s64 = -2084634624;
	// ld r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r29,24448
	ctx.r3.s64 = ctx.r29.s64 + 24448;
	// rldicl r28,r28,34,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 34) & 0x3FFFFFFFF;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r29,r29,2048
	ctx.r29.s64 = ctx.r29.s64 + 2048;
	// li r27,3
	ctx.r27.s64 = 3;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// divwu r8,r8,r27
	ctx.r8.u32 = ctx.r8.u32 / ctx.r27.u32;
	// stw r10,-28160(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28160, ctx.r10.u32);
	// li r27,8
	ctx.r27.s64 = 8;
	// lhz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwimi r25,r28,1,19,30
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r28.u32, 1) & 0x1FFE) | (ctx.r25.u64 & 0xFFFFFFFFFFFFE001);
	// stb r27,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r27.u8);
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
	// clrlwi r4,r25,19
	ctx.r4.u64 = ctx.r25.u32 & 0x1FFF;
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// rlwinm r4,r10,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// beq cr6,0x823b8db4
	if (ctx.cr6.eq) goto loc_823B8DB4;
	// addis r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 + 655360;
	// sth r6,-78(r1)
	PPC_STORE_U16(ctx.r1.u32 + -78, ctx.r6.u16);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r5,-79(r1)
	PPC_STORE_U8(ctx.r1.u32 + -79, ctx.r5.u8);
	// addi r9,r11,-28268
	ctx.r9.s64 = ctx.r11.s64 + -28268;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,-80(r1)
	PPC_STORE_U8(ctx.r1.u32 + -80, ctx.r8.u8);
	// lwz r7,-80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
loc_823B8DB4:
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8CF8) {
	__imp__sub_823B8CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8DB8) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,20764
	ctx.r9.u64 = ctx.r10.u64 | 20764;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b8df0
	if (ctx.cr6.lt) goto loc_823B8DF0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823B8DF0:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r10,2048
	ctx.r3.s64 = ctx.r10.s64 + 2048;
	// bl 0x823b8e30
	ctx.lr = 0x823B8E00;
	sub_823B8E30(ctx, base);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r9,r10,20764
	ctx.r9.u64 = ctx.r10.u64 | 20764;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823B8DB8) {
	__imp__sub_823B8DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8E2C) {
	__imp__sub_823B8E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B8E38;
	__savegprlr_26(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823b8e50
	if (!ctx.cr6.eq) goto loc_823B8E50;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823B8E50:
	// li r28,4096
	ctx.r28.s64 = 4096;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b8f2c
	if (ctx.cr6.eq) goto loc_823B8F2C;
	// addi r31,r1,16
	ctx.r31.s64 = ctx.r1.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823B8E70:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823b8f10
	if (ctx.cr6.eq) goto loc_823B8F10;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b8ecc
	if (ctx.cr6.eq) goto loc_823B8ECC;
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
loc_823B8E98:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r9,r27,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r9.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823b8eb8
	if (!ctx.cr6.lt) goto loc_823B8EB8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// b 0x823b8ec0
	goto loc_823B8EC0;
loc_823B8EB8:
	// ble cr6,0x823b8f10
	if (!ctx.cr6.gt) goto loc_823B8F10;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823B8EC0:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// bne cr6,0x823b8e98
	if (!ctx.cr6.eq) goto loc_823B8E98;
loc_823B8ECC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823b8ef4
	if (!ctx.cr6.gt) goto loc_823B8EF4;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B8EE4:
	// ld r9,-16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stdu r9,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823b8ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8EE4;
loc_823B8EF4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// addi r8,r1,18
	ctx.r8.s64 = ctx.r1.s64 + 18;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// sthx r6,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u16);
loc_823B8F10:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,20
	ctx.r9.s64 = ctx.r1.s64 + 20;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823b8e70
	if (ctx.cr6.lt) goto loc_823B8E70;
loc_823B8F2C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
loc_823B8F38:
	// lhz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rotlwi r8,r7,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_823B8F54:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823b8f8c
	if (!ctx.cr6.eq) goto loc_823B8F8C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// stw r26,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r26.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_823B8F8C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823b8f54
	if (!ctx.cr6.gt) goto loc_823B8F54;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823b8f38
	if (!ctx.cr6.eq) goto loc_823B8F38;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B8E30) {
	__imp__sub_823B8E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8FB8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8FB8) {
	__imp__sub_823B8FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8FC0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8FC0) {
	__imp__sub_823B8FC0(ctx, base);
}

