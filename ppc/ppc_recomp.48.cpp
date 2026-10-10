#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8220A890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220A898;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,14584
	ctx.r4.s64 = ctx.r11.s64 + 14584;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8220A8C4;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223df48
	ctx.lr = 0x8220A8CC;
	sub_8223DF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220A8D4;
	sub_8223C4D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8229fe20
	ctx.lr = 0x8220A8DC;
	sub_8229FE20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82209ed0
	ctx.lr = 0x8220A8E4;
	sub_82209ED0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82209f60
	ctx.lr = 0x8220A8F0;
	sub_82209F60(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e4b00
	ctx.lr = 0x8220A8FC;
	sub_822E4B00(ctx, base);
	// lbz r10,29(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220a91c
	if (ctx.cr6.eq) goto loc_8220A91C;
loc_8220A908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e3c8
	ctx.lr = 0x8220A910;
	sub_8223E3C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8220A91C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,388(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223c7e0
	ctx.lr = 0x8220A930;
	sub_8223C7E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a908
	if (ctx.cr6.eq) goto loc_8220A908;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// lbz r8,396(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223e090
	ctx.lr = 0x8220A964;
	sub_8223E090(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223dfa8
	ctx.lr = 0x8220A96C;
	sub_8223DFA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220A890) {
	__imp__sub_8220A890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220A980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223dd80
	ctx.lr = 0x8220A990;
	sub_8223DD80(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// orc r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ~ctx.r9.u64;
	// rlwinm r30,r8,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// bl 0x8230f0a0
	ctx.lr = 0x8220A9B0;
	sub_8230F0A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e058
	ctx.lr = 0x8220A9B8;
	sub_8223E058(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220a9e4
	if (ctx.cr6.eq) goto loc_8220A9E4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220a9e4
	if (!ctx.cr6.eq) goto loc_8220A9E4;
	// rlwinm r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a9e4
	if (ctx.cr6.eq) goto loc_8220A9E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e480
	ctx.lr = 0x8220A9E4;
	sub_8223E480(ctx, base);
loc_8220A9E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220A978) {
	__imp__sub_8220A978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220A9EC) {
	__imp__sub_8220A9EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220A9F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220aa20
	if (ctx.cr6.eq) goto loc_8220AA20;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8223e480
	ctx.lr = 0x8220AA20;
	sub_8223E480(ctx, base);
loc_8220AA20:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220aa70
	if (ctx.cr6.eq) goto loc_8220AA70;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220aa44
	if (ctx.cr6.eq) goto loc_8220AA44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230df48
	ctx.lr = 0x8220AA44;
	sub_8230DF48(ctx, base);
loc_8220AA44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e408
	ctx.lr = 0x8220AA4C;
	sub_8223E408(ctx, base);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220aa64
	if (ctx.cr6.eq) goto loc_8220AA64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230df48
	ctx.lr = 0x8220AA64;
	sub_8230DF48(ctx, base);
loc_8220AA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220AA70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220A9F0) {
	__imp__sub_8220A9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220AA7C) {
	__imp__sub_8220AA7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220AA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220aab8
	if (ctx.cr6.eq) goto loc_8220AAB8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8220aabc
	if (!ctx.cr6.gt) goto loc_8220AABC;
loc_8220AAB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8220AABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aad4
	if (!ctx.cr6.eq) goto loc_8220AAD4;
loc_8220AAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220AAD4:
	// bl 0x8228b728
	ctx.lr = 0x8220AAD8;
	sub_8228B728(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ab10
	if (ctx.cr6.eq) goto loc_8220AB10;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lwz r11,16412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220ab0c
	if (ctx.cr6.eq) goto loc_8220AB0C;
loc_8220AAF8:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8228b0d8
	ctx.lr = 0x8220AB00;
	sub_8228B0D8(ctx, base);
	// lwz r11,16412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220aaf8
	if (!ctx.cr6.eq) goto loc_8220AAF8;
loc_8220AB0C:
	// lwsync 
loc_8220AB10:
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x8220a978
	ctx.lr = 0x8220AB18;
	sub_8220A978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223dd80
	ctx.lr = 0x8220AB20;
	sub_8223DD80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220a890
	ctx.lr = 0x8220AB34;
	sub_8220A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220aac8
	if (ctx.cr6.eq) goto loc_8220AAC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220a9f0
	ctx.lr = 0x8220AB4C;
	sub_8220A9F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220AA80) {
	__imp__sub_8220AA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220AB54) {
	__imp__sub_8220AB54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AB58) {
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
	// bl 0x8223dd80
	ctx.lr = 0x8220AB74;
	sub_8223DD80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223e2f0
	ctx.lr = 0x8220AB7C;
	sub_8223E2F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8220AB58) {
	__imp__sub_8220AB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220ABB4;
	sub_8223E078(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ac1c
	if (!ctx.cr6.eq) goto loc_8220AC1C;
loc_8220ABC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220ABC8;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223cfb0
	ctx.lr = 0x8220ABD8;
	sub_8223CFB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ac00
	if (ctx.cr6.eq) goto loc_8220AC00;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x8223e078
	ctx.lr = 0x8220ABF4;
	sub_8223E078(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8231f488
	ctx.lr = 0x8220AC00;
	sub_8231F488(ctx, base);
loc_8220AC00:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220AC10;
	sub_8223E078(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220abc0
	if (ctx.cr6.eq) goto loc_8220ABC0;
loc_8220AC1C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220AB90) {
	__imp__sub_8220AB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220AC30) {
	__imp__sub_8220AC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220AC44) {
	__imp__sub_8220AC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8220AC50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lbz r3,27120(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27120);
	// bl 0x8230df48
	ctx.lr = 0x8220AC70;
	sub_8230DF48(ctx, base);
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r11,27128
	ctx.r30.s64 = ctx.r11.s64 + 27128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e178
	ctx.lr = 0x8220AC84;
	sub_8223E178(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,10
	ctx.r3.s64 = 10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220acb0
	if (ctx.cr6.eq) goto loc_8220ACB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14676
	ctx.r4.s64 = ctx.r11.s64 + 14676;
	// bl 0x82280900
	ctx.lr = 0x8220ACA0;
	sub_82280900(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8223e3e0
	ctx.lr = 0x8220ACA8;
	sub_8223E3E0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x8220acd0
	goto loc_8220ACD0;
loc_8220ACB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14648
	ctx.r4.s64 = ctx.r11.s64 + 14648;
	// bl 0x82280900
	ctx.lr = 0x8220ACBC;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223e0d8
	ctx.lr = 0x8220ACCC;
	sub_8223E0D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8220ACD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8223e0d0
	ctx.lr = 0x8220ACD8;
	sub_8223E0D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lbz r4,17(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lwz r3,-14904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// bl 0x822e1f18
	ctx.lr = 0x8220ACEC;
	sub_822E1F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233edf8
	ctx.lr = 0x8220ACF4;
	sub_8233EDF8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8223c4d8
	ctx.lr = 0x8220ACFC;
	sub_8223C4D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,1100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822e4ab8
	ctx.lr = 0x8220AD10;
	sub_822E4AB8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8223dfb8
	ctx.lr = 0x8220AD18;
	sub_8223DFB8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8220ad6c
	if (!ctx.cr6.eq) goto loc_8220AD6C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220ad94
	if (ctx.cr6.eq) goto loc_8220AD94;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8220ad94
	if (ctx.cr6.eq) goto loc_8220AD94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a4db8
	ctx.lr = 0x8220AD3C;
	sub_822A4DB8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8220ad6c
	if (!ctx.cr6.eq) goto loc_8220AD6C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8220ad6c
	if (!ctx.cr6.eq) goto loc_8220AD6C;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8220ad94
	if (ctx.cr6.eq) goto loc_8220AD94;
loc_8220AD6C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220ad84
	if (ctx.cr6.eq) goto loc_8220AD84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x821fc668
	ctx.lr = 0x8220AD84;
	sub_821FC668(ctx, base);
loc_8220AD84:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229ffe8
	ctx.lr = 0x8220AD90;
	sub_8229FFE8(ctx, base);
	// b 0x8220ada0
	goto loc_8220ADA0;
loc_8220AD94:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a0000
	ctx.lr = 0x8220ADA0;
	sub_822A0000(ctx, base);
loc_8220ADA0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4808
	ctx.lr = 0x8220ADAC;
	sub_822E4808(ctx, base);
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220adc8
	if (ctx.cr6.eq) goto loc_8220ADC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14608
	ctx.r4.s64 = ctx.r11.s64 + 14608;
	// bl 0x8223c2a8
	ctx.lr = 0x8220ADC8;
	sub_8223C2A8(ctx, base);
loc_8220ADC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8220add8
	if (ctx.cr6.eq) goto loc_8220ADD8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8223ccb8
	ctx.lr = 0x8220ADD8;
	sub_8223CCB8(ctx, base);
loc_8220ADD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230df48
	ctx.lr = 0x8220ADE0;
	sub_8230DF48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220AC48) {
	__imp__sub_8220AC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220ADE8) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220AE10;
	sub_8223E078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8220ae60
	if (!ctx.cr6.gt) goto loc_8220AE60;
loc_8220AE20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220AE28;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223cfb0
	ctx.lr = 0x8220AE38;
	sub_8223CFB0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// bl 0x82333200
	ctx.lr = 0x8220AE48;
	sub_82333200(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8220ae7c
	if (!ctx.cr6.eq) goto loc_8220AE7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220ae20
	if (ctx.cr6.lt) goto loc_8220AE20;
loc_8220AE60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8220AE64:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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
loc_8220AE7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14704
	ctx.r4.s64 = ctx.r11.s64 + 14704;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x8220AE90;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220ae64
	goto loc_8220AE64;
}

PPC_WEAK_FUNC(sub_8220ADE8) {
	__imp__sub_8220ADE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AE98) {
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
	// bl 0x82209920
	ctx.lr = 0x8220AEA8;
	sub_82209920(ctx, base);
	// bl 0x823428d8
	ctx.lr = 0x8220AEAC;
	sub_823428D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220AE98) {
	__imp__sub_8220AE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220AEBC) {
	__imp__sub_8220AEBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220AEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x8220AEC8;
	__savegprlr_16(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821fc3e8
	ctx.lr = 0x8220AED4;
	sub_821FC3E8(ctx, base);
	// bl 0x8235f560
	ctx.lr = 0x8220AED8;
	sub_8235F560(ctx, base);
	// bl 0x821f4820
	ctx.lr = 0x8220AEDC;
	sub_821F4820(ctx, base);
	// bl 0x82234890
	ctx.lr = 0x8220AEE0;
	sub_82234890(ctx, base);
	// bl 0x82353d80
	ctx.lr = 0x8220AEE4;
	sub_82353D80(ctx, base);
	// bl 0x821dda80
	ctx.lr = 0x8220AEE8;
	sub_821DDA80(ctx, base);
	// bl 0x8227dc28
	ctx.lr = 0x8220AEEC;
	sub_8227DC28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac738
	ctx.lr = 0x8220AEF4;
	sub_822AC738(ctx, base);
	// bl 0x822a8f48
	ctx.lr = 0x8220AEF8;
	sub_822A8F48(ctx, base);
	// bl 0x822a89f0
	ctx.lr = 0x8220AEFC;
	sub_822A89F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220AF04;
	sub_8223C4D8(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r28,r10,9624
	ctx.r28.s64 = ctx.r10.s64 + 9624;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r23.u32);
	// bl 0x8223df40
	ctx.lr = 0x8220AF28;
	sub_8223DF40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,52
	ctx.r3.s64 = ctx.r28.s64 + 52;
	// bl 0x8223e078
	ctx.lr = 0x8220AF38;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x8223e078
	ctx.lr = 0x8220AF48;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2928
	ctx.r3.s64 = ctx.r28.s64 + 2928;
	// bl 0x8223e078
	ctx.lr = 0x8220AF58;
	sub_8223E078(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-4904
	ctx.r3.s64 = ctx.r11.s64 + -4904;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8223e078
	ctx.lr = 0x8220AF6C;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r28,3052
	ctx.r3.s64 = ctx.r28.s64 + 3052;
	// bl 0x8223e078
	ctx.lr = 0x8220AF7C;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r28,3054
	ctx.r3.s64 = ctx.r28.s64 + 3054;
	// bl 0x8223e078
	ctx.lr = 0x8220AF8C;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2788
	ctx.r3.s64 = ctx.r28.s64 + 2788;
	// bl 0x8223e078
	ctx.lr = 0x8220AF9C;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2800
	ctx.r3.s64 = ctx.r28.s64 + 2800;
	// bl 0x8223e078
	ctx.lr = 0x8220AFAC;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2804
	ctx.r3.s64 = ctx.r28.s64 + 2804;
	// bl 0x8223e078
	ctx.lr = 0x8220AFBC;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2792
	ctx.r3.s64 = ctx.r28.s64 + 2792;
	// bl 0x8223e078
	ctx.lr = 0x8220AFCC;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2796
	ctx.r3.s64 = ctx.r28.s64 + 2796;
	// bl 0x8223e078
	ctx.lr = 0x8220AFDC;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,16320
	ctx.r3.s64 = ctx.r28.s64 + 16320;
	// bl 0x8223e078
	ctx.lr = 0x8220AFEC;
	sub_8223E078(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,-19056
	ctx.r3.s64 = ctx.r10.s64 + -19056;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x8223e078
	ctx.lr = 0x8220B000;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r28,16324
	ctx.r3.s64 = ctx.r28.s64 + 16324;
	// bl 0x8223e078
	ctx.lr = 0x8220B010;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r28,16332
	ctx.r3.s64 = ctx.r28.s64 + 16332;
	// bl 0x8223e078
	ctx.lr = 0x8220B020;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r28,16340
	ctx.r3.s64 = ctx.r28.s64 + 16340;
	// bl 0x8223e078
	ctx.lr = 0x8220B030;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,16372
	ctx.r3.s64 = ctx.r28.s64 + 16372;
	// bl 0x8223e078
	ctx.lr = 0x8220B040;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2904
	ctx.r3.s64 = ctx.r28.s64 + 2904;
	// bl 0x8223e078
	ctx.lr = 0x8220B050;
	sub_8223E078(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r25,r11,30208
	ctx.r25.s64 = ctx.r11.s64 + 30208;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8223e078
	ctx.lr = 0x8220B068;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x8223e078
	ctx.lr = 0x8220B078;
	sub_8223E078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209920
	ctx.lr = 0x8220B080;
	sub_82209920(ctx, base);
	// bl 0x823428d8
	ctx.lr = 0x8220B084;
	sub_823428D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220B08C;
	sub_8223C4D8(ctx, base);
	// bl 0x822e2e20
	ctx.lr = 0x8220B090;
	sub_822E2E20(ctx, base);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r9,-17544
	ctx.r3.s64 = ctx.r9.s64 + -17544;
	// ori r4,r4,44032
	ctx.r4.u64 = ctx.r4.u64 | 44032;
	// bl 0x8223e078
	ctx.lr = 0x8220B0A8;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2872
	ctx.r3.s64 = ctx.r28.s64 + 2872;
	// bl 0x8223e078
	ctx.lr = 0x8220B0B8;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2876
	ctx.r3.s64 = ctx.r28.s64 + 2876;
	// bl 0x8223e078
	ctx.lr = 0x8220B0C8;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// bl 0x8223e078
	ctx.lr = 0x8220B0D8;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x8223e078
	ctx.lr = 0x8220B0E8;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220B0F8;
	sub_8223E078(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,-5900(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5900);
	// bl 0x822e1f80
	ctx.lr = 0x8220B108;
	sub_822E1F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240548
	ctx.lr = 0x8220B110;
	sub_82240548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d8ef8
	ctx.lr = 0x8220B118;
	sub_820D8EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8223df40
	ctx.lr = 0x8220B124;
	sub_8223DF40(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8229fa58
	ctx.lr = 0x8220B130;
	sub_8229FA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8223df40
	ctx.lr = 0x8220B13C;
	sub_8223DF40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f68
	ctx.lr = 0x8220B144;
	sub_82208F68(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82257b38
	ctx.lr = 0x8220B14C;
	sub_82257B38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8223e078
	ctx.lr = 0x8220B15C;
	sub_8223E078(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220B16C;
	sub_8223E078(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r18,r11,11296
	ctx.r18.s64 = ctx.r11.s64 + 11296;
	// addi r20,r10,26552
	ctx.r20.s64 = ctx.r10.s64 + 26552;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8220b1e0
	if (ctx.cr6.lt) goto loc_8220B1E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,14636
	ctx.r30.s64 = ctx.r11.s64 + 14636;
loc_8220B190:
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// blt cr6,0x8220b1ac
	if (ctx.cr6.lt) goto loc_8220B1AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8220B1A8;
	sub_822830E8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220B1AC:
	// mulli r11,r5,624
	ctx.r11.s64 = ctx.r5.s64 * 624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82208b08
	ctx.lr = 0x8220B1BC;
	sub_82208B08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r23,r18,r11
	PPC_STORE_U8(ctx.r18.u32 + ctx.r11.u32, ctx.r23.u8);
	// bl 0x8223e078
	ctx.lr = 0x8220B1D4;
	sub_8223E078(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8220b190
	if (!ctx.cr6.lt) goto loc_8220B190;
loc_8220B1E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235fdd0
	ctx.lr = 0x8220B1E8;
	sub_8235FDD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822091b0
	ctx.lr = 0x8220B1F0;
	sub_822091B0(ctx, base);
	// li r17,0
	ctx.r17.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r17,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r17.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r17,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r17.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8220b278
	if (!ctx.cr6.gt) goto loc_8220B278;
loc_8220B218:
	// lbzx r8,r18,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8220b268
	if (!ctx.cr6.eq) goto loc_8220B268;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b240
	if (ctx.cr6.eq) goto loc_8220B240;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stw r11,620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 620, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8220b24c
	goto loc_8220B24C;
loc_8220B240:
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
loc_8220B24C:
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r17,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r17.u32);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220B268:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8220b218
	if (ctx.cr6.lt) goto loc_8220B218;
loc_8220B278:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220B288;
	sub_8223E078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r16,r10,45016
	ctx.r16.u64 = ctx.r10.u64 | 45016;
	// blt cr6,0x8220b408
	if (ctx.cr6.lt) goto loc_8220B408;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r24,r7,44196
	ctx.r24.u64 = ctx.r7.u64 | 44196;
	// addi r30,r9,-3584
	ctx.r30.s64 = ctx.r9.s64 + -3584;
	// addi r21,r8,14772
	ctx.r21.s64 = ctx.r8.s64 + 14772;
	// addi r22,r10,14736
	ctx.r22.s64 = ctx.r10.s64 + 14736;
loc_8220B2BC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8220b2d4
	if (!ctx.cr6.gt) goto loc_8220B2D4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8220B2D0;
	sub_822830E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220B2D4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r29,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220b2f8
	if (!ctx.cr6.eq) goto loc_8220B2F8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8220B2F8;
	sub_822830E8(ctx, base);
loc_8220B2F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82208908
	ctx.lr = 0x8220B304;
	sub_82208908(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r20,232
	ctx.r9.s64 = ctx.r20.s64 + 232;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,84
	ctx.r7.s64 = ctx.r30.s64 + 84;
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r30,112
	ctx.r8.s64 = ctx.r30.s64 + 112;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r26,r27,r8
	ctx.r26.u64 = ctx.r27.u64 + ctx.r8.u64;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r4,692(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 692);
	// sthx r4,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r4.u16);
	// stwx r17,r27,r8
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r17.u32);
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220b384
	if (ctx.cr6.eq) goto loc_8220B384;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// add r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x8222e308
	ctx.lr = 0x8220B37C;
	sub_8222E308(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8220B384:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,80
	ctx.r8.s64 = ctx.r30.s64 + 80;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 + 84;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r23,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r23.u8);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// addi r8,r25,84
	ctx.r8.s64 = ctx.r25.s64 + 84;
	// addi r4,r25,108
	ctx.r4.s64 = ctx.r25.s64 + 108;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r25,112
	ctx.r3.s64 = ctx.r25.s64 + 112;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lhzx r8,r7,r6
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// sthx r8,r7,r4
	PPC_STORE_U16(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u16);
	// stwx r5,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwsync 
	// addi r7,r25,80
	ctx.r7.s64 = ctx.r25.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r23,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r23.u8);
	// bl 0x8223e078
	ctx.lr = 0x8220B3FC;
	sub_8223E078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8220b2bc
	if (!ctx.cr6.lt) goto loc_8220B2BC;
loc_8220B408:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r27,r9,14264
	ctx.r27.s64 = ctx.r9.s64 + 14264;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_8220B420:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mulli r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 * 5128;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,5039
	ctx.r3.s64 = ctx.r30.s64 + 5039;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223e078
	ctx.lr = 0x8220B43C;
	sub_8223E078(ctx, base);
	// lbz r11,5039(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b460
	if (ctx.cr6.eq) goto loc_8220B460;
	// addi r3,r27,-832
	ctx.r3.s64 = ctx.r27.s64 + -832;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,5124
	ctx.r5.s64 = 5124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dd20
	ctx.lr = 0x8220B45C;
	sub_8223DD20(ctx, base);
	// stw r29,5124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5124, ctx.r29.u32);
loc_8220B460:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8220b420
	if (ctx.cr6.lt) goto loc_8220B420;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,76
	ctx.r3.s64 = ctx.r28.s64 + 76;
	// bl 0x8223e078
	ctx.lr = 0x8220B484;
	sub_8223E078(ctx, base);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
loc_8220B48C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,106
	ctx.r3.s64 = ctx.r30.s64 + 106;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223e078
	ctx.lr = 0x8220B4A8;
	sub_8223E078(ctx, base);
	// lbz r11,106(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 106);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b4c8
	if (ctx.cr6.eq) goto loc_8220B4C8;
	// addi r3,r27,-128
	ctx.r3.s64 = ctx.r27.s64 + -128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dd20
	ctx.lr = 0x8220B4C8;
	sub_8223DD20(ctx, base);
loc_8220B4C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x8220b48c
	if (ctx.cr6.lt) goto loc_8220B48C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234aca8
	ctx.lr = 0x8220B4E4;
	sub_8234ACA8(ctx, base);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
loc_8220B4EC:
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mulli r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 * 252;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8223e078
	ctx.lr = 0x8220B50C;
	sub_8223E078(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220b52c
	if (ctx.cr6.eq) goto loc_8220B52C;
	// addi r3,r27,136
	ctx.r3.s64 = ctx.r27.s64 + 136;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,252
	ctx.r5.s64 = 252;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dd20
	ctx.lr = 0x8220B52C;
	sub_8223DD20(ctx, base);
loc_8220B52C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8220b4ec
	if (ctx.cr6.lt) goto loc_8220B4EC;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r30,r10,6688
	ctx.r30.s64 = ctx.r10.s64 + 6688;
loc_8220B550:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,7968
	ctx.r10.s64 = ctx.r30.s64 + 7968;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8223e078
	ctx.lr = 0x8220B568;
	sub_8223E078(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r30,7968
	ctx.r10.s64 = ctx.r30.s64 + 7968;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8220b594
	if (ctx.cr6.eq) goto loc_8220B594;
	// addi r10,r30,7972
	ctx.r10.s64 = ctx.r30.s64 + 7972;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8223e078
	ctx.lr = 0x8220B594;
	sub_8223E078(ctx, base);
loc_8220B594:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8220b550
	if (ctx.cr6.lt) goto loc_8220B550;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// bl 0x82182728
	ctx.lr = 0x8220B5B8;
	sub_82182728(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,8672
	ctx.r4.s64 = ctx.r11.s64 + 8672;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1060
	ctx.r5.s64 = 1060;
	// bl 0x8223dd20
	ctx.lr = 0x8220B5D0;
	sub_8223DD20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8223e078
	ctx.lr = 0x8220B5E0;
	sub_8223E078(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821bcef8
	ctx.lr = 0x8220B5E8;
	sub_821BCEF8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220b608
	if (ctx.cr6.eq) goto loc_8220B608;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,1032
	ctx.r3.s64 = ctx.r10.s64 + 1032;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8223e078
	ctx.lr = 0x8220B608;
	sub_8223E078(ctx, base);
loc_8220B608:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r28,9200
	ctx.r3.s64 = ctx.r28.s64 + 9200;
	// bl 0x8223e078
	ctx.lr = 0x8220B618;
	sub_8223E078(ctx, base);
	// lwz r11,9200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9200);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r28,3056
	ctx.r3.s64 = ctx.r28.s64 + 3056;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8223e078
	ctx.lr = 0x8220B634;
	sub_8223E078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209d10
	ctx.lr = 0x8220B63C;
	sub_82209D10(ctx, base);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8220B640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220B648;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8223cfb0
	ctx.lr = 0x8220B658;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8233e7d8
	ctx.lr = 0x8220B664;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220b640
	if (ctx.cr6.lt) goto loc_8220B640;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8220B674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220B67C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8223cfb0
	ctx.lr = 0x8220B68C;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8233e7d8
	ctx.lr = 0x8220B698;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220b674
	if (ctx.cr6.lt) goto loc_8220B674;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8220B6A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220B6B0;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8223cfb0
	ctx.lr = 0x8220B6C0;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x8233e7d8
	ctx.lr = 0x8220B6CC;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220b6a8
	if (ctx.cr6.lt) goto loc_8220B6A8;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8220B6DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220B6E4;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8223cfb0
	ctx.lr = 0x8220B6F4;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x8233e7d8
	ctx.lr = 0x8220B700;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220b6dc
	if (ctx.cr6.lt) goto loc_8220B6DC;
	// bl 0x8222bb40
	ctx.lr = 0x8220B710;
	sub_8222BB40(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82202eb8
	ctx.lr = 0x8220B718;
	sub_82202EB8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8227ea48
	ctx.lr = 0x8220B720;
	sub_8227EA48(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821f44b8
	ctx.lr = 0x8220B728;
	sub_821F44B8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x820f1fe8
	ctx.lr = 0x8220B730;
	sub_820F1FE8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223df40
	ctx.lr = 0x8220B73C;
	sub_8223DF40(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r25,r9,14488
	ctx.r25.s64 = ctx.r9.s64 + 14488;
	// addi r24,r10,14504
	ctx.r24.s64 = ctx.r10.s64 + 14504;
loc_8220B754:
	// lbzx r9,r18,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r26,r10,r20
	ctx.r26.u64 = ctx.r10.u64 + ctx.r20.u64;
	// beq cr6,0x8220b83c
	if (ctx.cr6.eq) goto loc_8220B83C;
	// lhz r3,604(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220b7bc
	if (ctx.cr6.eq) goto loc_8220B7BC;
	// bl 0x8222e398
	ctx.lr = 0x8220B778;
	sub_8222E398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220b7bc
	if (ctx.cr6.eq) goto loc_8220B7BC;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8220b794
	if (ctx.cr6.eq) goto loc_8220B794;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8220b7bc
	if (!ctx.cr6.eq) goto loc_8220B7BC;
loc_8220B794:
	// lhz r3,604(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x8220B79C;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220B7A0;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280c30
	ctx.lr = 0x8220B7B0;
	sub_82280C30(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lhz r3,604(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 604);
	// bl 0x8222ebf0
	ctx.lr = 0x8220B7BC;
	sub_8222EBF0(ctx, base);
loc_8220B7BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222feb8
	ctx.lr = 0x8220B7C8;
	sub_8222FEB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82284688
	ctx.lr = 0x8220B7D0;
	sub_82284688(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220b838
	if (ctx.cr6.eq) goto loc_8220B838;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822ff378
	ctx.lr = 0x8220B7E4;
	sub_822FF378(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_8220B7F0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822e4480
	ctx.lr = 0x8220B800;
	sub_822E4480(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x8220b7f0
	if (!ctx.cr0.eq) goto loc_8220B7F0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f0330
	ctx.lr = 0x8220B81C;
	sub_822F0330(ctx, base);
	// lwz r5,284(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 284);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8220b838
	if (ctx.cr6.eq) goto loc_8220B838;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82259478
	ctx.lr = 0x8220B838;
	sub_82259478(ctx, base);
loc_8220B838:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220B83C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// blt cr6,0x8220b754
	if (ctx.cr6.lt) goto loc_8220B754;
	// bl 0x82338160
	ctx.lr = 0x8220B850;
	sub_82338160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820edb00
	ctx.lr = 0x8220B858;
	sub_820EDB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f118
	ctx.lr = 0x8220B860;
	sub_8235F118(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82120d70
	ctx.lr = 0x8220B868;
	sub_82120D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f210
	ctx.lr = 0x8220B870;
	sub_8233F210(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r19,-32190
	ctx.r19.s64 = -2109603840;
	// addi r20,r11,9240
	ctx.r20.s64 = ctx.r11.s64 + 9240;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lwz r9,-32312(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// addi r25,r20,24
	ctx.r25.s64 = ctx.r20.s64 + 24;
	// ori r22,r11,44668
	ctx.r22.u64 = ctx.r11.u64 | 44668;
	// ori r23,r10,44644
	ctx.r23.u64 = ctx.r10.u64 | 44644;
	// lis r18,-32166
	ctx.r18.s64 = -2108030976;
loc_8220B8A0:
	// lbz r10,29088(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220b8c4
	if (!ctx.cr6.eq) goto loc_8220B8C4;
	// subfc r11,r9,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r24.s64 - ctx.r9.s64;
	// eqv r8,r9,r24
	ctx.r8.u64 = ~(ctx.r9.u64 ^ ctx.r24.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8220b8d4
	goto loc_8220B8D4;
loc_8220B8C4:
	// lwz r11,-8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8220B8D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b94c
	if (ctx.cr6.eq) goto loc_8220B94C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
	// beq cr6,0x8220b8f8
	if (ctx.cr6.eq) goto loc_8220B8F8;
	// lhz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
loc_8220B8F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821179c0
	ctx.lr = 0x8220B908;
	sub_821179C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117880
	ctx.lr = 0x8220B914;
	sub_82117880(ctx, base);
	// add r29,r26,r22
	ctx.r29.u64 = ctx.r26.u64 + ctx.r22.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
loc_8220B920:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzu r7,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82114210
	ctx.lr = 0x8220B938;
	sub_82114210(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x8220b920
	if (ctx.cr6.lt) goto loc_8220B920;
	// lwz r9,-32312(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
loc_8220B94C:
	// addi r25,r25,9780
	ctx.r25.s64 = ctx.r25.s64 + 9780;
	// addi r11,r20,19584
	ctx.r11.s64 = ctx.r20.s64 + 19584;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 + ctx.r16.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220b8a0
	if (ctx.cr6.lt) goto loc_8220B8A0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223df40
	ctx.lr = 0x8220B970;
	sub_8223DF40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8229fc80
	ctx.lr = 0x8220B978;
	sub_8229FC80(ctx, base);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8233ce88
	ctx.lr = 0x8220B98C;
	sub_8233CE88(ctx, base);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r17.u32);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220AEC0) {
	__imp__sub_8220AEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220B99C) {
	__imp__sub_8220B99C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220B9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8220B9A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r11,14868
	ctx.r4.s64 = ctx.r11.s64 + 14868;
	// bl 0x82280900
	ctx.lr = 0x8220B9C0;
	sub_82280900(ctx, base);
	// bl 0x8238d578
	ctx.lr = 0x8220B9C4;
	sub_8238D578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e0d0
	ctx.lr = 0x8220B9CC;
	sub_8223E0D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c448
	ctx.lr = 0x8220B9D8;
	sub_8223C448(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220b9f0
	if (ctx.cr6.eq) goto loc_8220B9F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// bl 0x8230d720
	ctx.lr = 0x8220B9F0;
	sub_8230D720(ctx, base);
loc_8220B9F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aec0
	ctx.lr = 0x8220B9F8;
	sub_8220AEC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223dfc8
	ctx.lr = 0x8220BA00;
	sub_8223DFC8(ctx, base);
	// bl 0x8227b5e0
	ctx.lr = 0x8220BA04;
	sub_8227B5E0(ctx, base);
	// bl 0x82209e60
	ctx.lr = 0x8220BA08;
	sub_82209E60(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
	// addi r24,r11,9240
	ctx.r24.s64 = ctx.r11.s64 + 9240;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r11,44200
	ctx.r27.u64 = ctx.r11.u64 | 44200;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// ori r25,r10,45016
	ctx.r25.u64 = ctx.r10.u64 | 45016;
	// lis r23,-32166
	ctx.r23.s64 = -2108030976;
	// lis r29,-32020
	ctx.r29.s64 = -2098462720;
	// lwz r11,-32312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_8220BA3C:
	// lbz r9,29088(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220ba60
	if (!ctx.cr6.eq) goto loc_8220BA60;
	// subfc r10,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// b 0x8220ba6c
	goto loc_8220BA6C;
loc_8220BA60:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8220BA6C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ba9c
	if (ctx.cr6.eq) goto loc_8220BA9C;
	// lwz r11,9624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9624);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8233cec8
	ctx.lr = 0x8220BA8C;
	sub_8233CEC8(ctx, base);
	// lwz r11,9624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9624);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821e68c0
	ctx.lr = 0x8220BA98;
	sub_821E68C0(ctx, base);
	// lwz r11,-32312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_8220BA9C:
	// addi r28,r28,9780
	ctx.r28.s64 = ctx.r28.s64 + 9780;
	// addi r10,r24,19576
	ctx.r10.s64 = ctx.r24.s64 + 19576;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8220ba3c
	if (ctx.cr6.lt) goto loc_8220BA3C;
	// bl 0x821b7d70
	ctx.lr = 0x8220BAB8;
	sub_821B7D70(ctx, base);
	// bl 0x821fde78
	ctx.lr = 0x8220BABC;
	sub_821FDE78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220B9A0) {
	__imp__sub_8220B9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220BAC4) {
	__imp__sub_8220BAC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BAC8) {
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
	// bl 0x8223dd80
	ctx.lr = 0x8220BADC;
	sub_8223DD80(ctx, base);
	// bl 0x8223e040
	ctx.lr = 0x8220BAE0;
	sub_8223E040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bb18
	if (!ctx.cr6.eq) goto loc_8220BB18;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223dd80
	ctx.lr = 0x8220BAF4;
	sub_8223DD80(ctx, base);
	// bl 0x8223e040
	ctx.lr = 0x8220BAF8;
	sub_8223E040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bb18
	if (!ctx.cr6.eq) goto loc_8220BB18;
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
loc_8220BB18:
	// bl 0x82284c10
	ctx.lr = 0x8220BB1C;
	sub_82284C10(ctx, base);
	// bl 0x8223e4d8
	ctx.lr = 0x8220BB20;
	sub_8223E4D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8220BAC8) {
	__imp__sub_8220BAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220BB34) {
	__imp__sub_8220BB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220BB40;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222ea68
	ctx.lr = 0x8220BB58;
	sub_8222EA68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220bbc0
	if (!ctx.cr6.eq) goto loc_8220BBC0;
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
	ctx.lr = 0x8220BB78;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc90
	ctx.lr = 0x8220BB84;
	sub_8222FC90(ctx, base);
	// stfd f29,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e84f0
	ctx.lr = 0x8220BBBC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220BBC0;
	sub_822AD350(ctx, base);
loc_8220BBC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_8220BB38) {
	__imp__sub_8220BB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BBD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220BBD8) {
	__imp__sub_8220BBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220BBF4) {
	__imp__sub_8220BBF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BBF8) {
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
	// bne cr6,0x8220bc4c
	if (!ctx.cr6.eq) goto loc_8220BC4C;
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
	// bne cr6,0x8220bc5c
	if (!ctx.cr6.eq) goto loc_8220BC5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8220BC44;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8220BC48;
	sub_822AD548(ctx, base);
	// b 0x8220bc5c
	goto loc_8220BC5C;
loc_8220BC4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8220BC58;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220BC5C:
	// bl 0x822acb68
	ctx.lr = 0x8220BC60;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8220bc74
	if (ctx.cr6.eq) goto loc_8220BC74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16104
	ctx.r3.s64 = ctx.r11.s64 + 16104;
	// bl 0x822ad350
	ctx.lr = 0x8220BC74;
	sub_822AD350(ctx, base);
loc_8220BC74:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8220BC7C;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,122(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220bcb0
	if (!ctx.cr6.eq) goto loc_8220BCB0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1128, ctx.r10.u32);
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
loc_8220BCB0:
	// lhz r10,626(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 626);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220bcdc
	if (!ctx.cr6.eq) goto loc_8220BCDC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1128, ctx.r10.u32);
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
loc_8220BCDC:
	// lhz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 628);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220bd08
	if (!ctx.cr6.eq) goto loc_8220BD08;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,1128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1128, ctx.r10.u32);
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
loc_8220BD08:
	// bl 0x822a13a0
	ctx.lr = 0x8220BD0C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16044
	ctx.r3.s64 = ctx.r11.s64 + 16044;
	// bl 0x822e84f0
	ctx.lr = 0x8220BD1C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220BD20;
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

PPC_WEAK_FUNC(sub_8220BBF8) {
	__imp__sub_8220BBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220BD34) {
	__imp__sub_8220BD34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8220BD40;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x8220BD48;
	sub_8220ED10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220BD50;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220bd64
	if (!ctx.cr6.eq) goto loc_8220BD64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220BD64;
	sub_822AD548(ctx, base);
loc_8220BD64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bb38
	ctx.lr = 0x8220BD6C;
	sub_8220BB38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x8220BD7C;
	sub_822ACB68(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// ble cr6,0x8220bde8
	if (!ctx.cr6.gt) goto loc_8220BDE8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b20b8
	ctx.lr = 0x8220BD94;
	sub_822B20B8(ctx, base);
	// lhz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220bdc8
	if (ctx.cr6.eq) goto loc_8220BDC8;
	// lhz r11,504(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 504);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220bdc8
	if (ctx.cr6.eq) goto loc_8220BDC8;
	// bl 0x822a13a0
	ctx.lr = 0x8220BDB4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// bl 0x822e84f0
	ctx.lr = 0x8220BDC4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220BDC8;
	sub_822AD350(ctx, base);
loc_8220BDC8:
	// bl 0x822acb68
	ctx.lr = 0x8220BDCC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// ble cr6,0x8220bde8
	if (!ctx.cr6.gt) goto loc_8220BDE8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b1d30
	ctx.lr = 0x8220BDE0;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_8220BDE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1d30
	ctx.lr = 0x8220BDF4;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x8220BE04;
	sub_822B2498(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8220BE10;
	sub_822B2498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8220BE18;
	sub_822B20B8(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220be94
	if (ctx.cr6.eq) goto loc_8220BE94;
	// lwz r11,3480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220be94
	if (!ctx.cr6.eq) goto loc_8220BE94;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220be4c
	if (ctx.cr6.eq) goto loc_8220BE4C;
	// bl 0x822a13a0
	ctx.lr = 0x8220BE44;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8220be54
	goto loc_8220BE54;
loc_8220BE4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-32360
	ctx.r29.s64 = ctx.r11.s64 + -32360;
loc_8220BE54:
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8220BE5C;
	sub_822A13A0(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r24,r31,232
	ctx.r24.s64 = ctx.r31.s64 + 232;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82240058
	ctx.lr = 0x8220BE70;
	sub_82240058(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,16176
	ctx.r3.s64 = ctx.r10.s64 + 16176;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220BE90;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220BE94;
	sub_822AD350(ctx, base);
loc_8220BE94:
	// lhz r9,504(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 504);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subf r4,r30,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5850
	ctx.lr = 0x8220BEC0;
	sub_821E5850(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bee0
	if (ctx.cr6.eq) goto loc_8220BEE0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,3416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3416, ctx.r11.u32);
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,3412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3412, ctx.r11.u32);
loc_8220BEE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220BD38) {
	__imp__sub_8220BD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BEE8) {
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
	// bl 0x822acb68
	ctx.lr = 0x8220BF00;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// ble cr6,0x8220bf14
	if (!ctx.cr6.gt) goto loc_8220BF14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x8220BF14;
	sub_822AD350(ctx, base);
loc_8220BF14:
	// bl 0x822acb68
	ctx.lr = 0x8220BF18;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x8220bf2c
	if (ctx.cr6.gt) goto loc_8220BF2C;
	// bl 0x822acb68
	ctx.lr = 0x8220BF24;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8220bf38
	if (!ctx.cr6.lt) goto loc_8220BF38;
loc_8220BF2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16380
	ctx.r3.s64 = ctx.r11.s64 + 16380;
	// bl 0x822ad350
	ctx.lr = 0x8220BF38;
	sub_822AD350(ctx, base);
loc_8220BF38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bd38
	ctx.lr = 0x8220BF40;
	sub_8220BD38(ctx, base);
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

PPC_WEAK_FUNC(sub_8220BEE8) {
	__imp__sub_8220BEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220BF54) {
	__imp__sub_8220BF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220BF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8220BF60;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220BF90;
	sub_822F29C8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,52(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r31,6676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6676, ctx.r31.u32);
	// ble cr6,0x8220bfc4
	if (!ctx.cr6.gt) goto loc_8220BFC4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822f4200
	ctx.lr = 0x8220BFB8;
	sub_822F4200(ctx, base);
	// lwz r31,52(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8220bfcc
	goto loc_8220BFCC;
loc_8220BFC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,13236
	ctx.r29.s64 = ctx.r11.s64 + 13236;
loc_8220BFCC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f4200
	ctx.lr = 0x8220BFD8;
	sub_822F4200(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f4230
	ctx.lr = 0x8220BFE4;
	sub_822F4230(ctx, base);
	// stfd f31,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// stfd f30,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f30.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stfd f29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f29.u64);
	// addi r4,r11,16448
	ctx.r4.s64 = ctx.r11.s64 + 16448;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82280900
	ctx.lr = 0x8220C028;
	sub_82280900(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_8220BF58) {
	__imp__sub_8220BF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220C03C) {
	__imp__sub_8220C03C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220C048;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220C068;
	sub_822F29C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8220c084
	if (!ctx.cr6.gt) goto loc_8220C084;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f4200
	ctx.lr = 0x8220C07C;
	sub_822F4200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8220c08c
	goto loc_8220C08C;
loc_8220C084:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,13236
	ctx.r29.s64 = ctx.r11.s64 + 13236;
loc_8220C08C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,52(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x822f4200
	ctx.lr = 0x8220C0A4;
	sub_822F4200(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f4230
	ctx.lr = 0x8220C0B0;
	sub_822F4230(ctx, base);
	// stfd f31,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r8,16520
	ctx.r4.s64 = ctx.r8.s64 + 16520;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x8220C0E0;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C040) {
	__imp__sub_8220C040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220C0EC) {
	__imp__sub_8220C0EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C0F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-6136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8220c16c
	if (!ctx.cr6.eq) goto loc_8220C16C;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6088);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c150
	if (!ctx.cr6.eq) goto loc_8220C150;
	// bl 0x822acb68
	ctx.lr = 0x8220C130;
	sub_822ACB68(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8220c150
	if (ctx.cr6.lt) goto loc_8220C150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1c50
	ctx.lr = 0x8220C144;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8220c154
	if (!ctx.cr6.eq) goto loc_8220C154;
loc_8220C150:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8220C154:
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
loc_8220C16C:
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

PPC_WEAK_FUNC(sub_8220C0F0) {
	__imp__sub_8220C0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220C184) {
	__imp__sub_8220C184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220C190;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x8220C19C;
	sub_8220ED10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8220bb38
	ctx.lr = 0x8220C1A4;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b1d30
	ctx.lr = 0x8220C1B4;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822b1fb0
	ctx.lr = 0x8220C1C4;
	sub_822B1FB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lhz r3,126(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8220c0f0
	ctx.lr = 0x8220C1D4;
	sub_8220C0F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c20c
	if (ctx.cr6.eq) goto loc_8220C20C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r9,16572
	ctx.r3.s64 = ctx.r9.s64 + 16572;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f3,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8220bf58
	ctx.lr = 0x8220C20C;
	sub_8220BF58(ctx, base);
loc_8220C20C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f4c70
	ctx.lr = 0x8220C21C;
	sub_822F4C70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C188) {
	__imp__sub_8220C188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C228) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220c248
	if (!ctx.cr6.eq) goto loc_8220C248;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// bl 0x822ad350
	ctx.lr = 0x8220C248;
	sub_822AD350(ctx, base);
loc_8220C248:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220C254;
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

PPC_WEAK_FUNC(sub_8220C228) {
	__imp__sub_8220C228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220C264) {
	__imp__sub_8220C264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8220C270;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x8220C278;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220C284;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220C2A0;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220C2A8;
	sub_822ACB68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x8220c2d8
	if (ctx.cr6.gt) goto loc_8220C2D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220c350
	if (ctx.cr6.eq) goto loc_8220C350;
	// bdz 0x8220c32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C32C;
	// bdz 0x8220c308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C308;
	// bdz 0x8220c2e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C2E4;
	// b 0x8220c2e4
	goto loc_8220C2E4;
loc_8220C2D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x8220C2E4;
	sub_822AD350(ctx, base);
loc_8220C2E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C2EC;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c308
	if (!ctx.cr6.lt) goto loc_8220C308;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,16824
	ctx.r4.s64 = ctx.r11.s64 + 16824;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C308;
	sub_822AD4E0(ctx, base);
loc_8220C308:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C310;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c32c
	if (!ctx.cr6.lt) goto loc_8220C32C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,16792
	ctx.r4.s64 = ctx.r11.s64 + 16792;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C32C;
	sub_822AD4E0(ctx, base);
loc_8220C32C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C334;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c350
	if (!ctx.cr6.lt) goto loc_8220C350;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C350;
	sub_822AD4E0(ctx, base);
loc_8220C350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220C35C;
	sub_822B1D30(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r3,126(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220C370;
	sub_8220C0F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c3dc
	if (ctx.cr6.eq) goto loc_8220C3DC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8220c3b8
	if (ctx.cr6.eq) goto loc_8220C3B8;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x8220c3ac
	if (ctx.cr6.eq) goto loc_8220C3AC;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8220c3a0
	if (ctx.cr6.eq) goto loc_8220C3A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x8220c3c0
	goto loc_8220C3C0;
loc_8220C3A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16724
	ctx.r3.s64 = ctx.r11.s64 + 16724;
	// b 0x8220c3c0
	goto loc_8220C3C0;
loc_8220C3AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// b 0x8220c3c0
	goto loc_8220C3C0;
loc_8220C3B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16684
	ctx.r3.s64 = ctx.r11.s64 + 16684;
loc_8220C3C0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220C3DC;
	sub_8220BF58(ctx, base);
loc_8220C3DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220C3E4;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220c3fc
	if (!ctx.cr6.eq) goto loc_8220C3FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220C3FC;
	sub_822AD548(ctx, base);
loc_8220C3FC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r9,r29,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8220c42c
	if (ctx.cr6.eq) goto loc_8220C42C;
	// bl 0x822f7fb8
	ctx.lr = 0x8220C428;
	sub_822F7FB8(ctx, base);
	// b 0x8220c430
	goto loc_8220C430;
loc_8220C42C:
	// bl 0x822f80f0
	ctx.lr = 0x8220C430;
	sub_822F80F0(ctx, base);
loc_8220C430:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220c460
	if (!ctx.cr6.eq) goto loc_8220C460;
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220c480
	if (!ctx.cr6.eq) goto loc_8220C480;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x8220C45C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8220C460:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220c474
	if (!ctx.cr6.eq) goto loc_8220C474;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// bl 0x822ad350
	ctx.lr = 0x8220C474;
	sub_822AD350(ctx, base);
loc_8220C474:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220C480;
	sub_822AD350(ctx, base);
loc_8220C480:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x8220C48C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C268) {
	__imp__sub_8220C268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C490) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8220c268
	sub_8220C268(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C490) {
	__imp__sub_8220C490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C498) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8220c268
	sub_8220C268(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C498) {
	__imp__sub_8220C498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C4A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8220c268
	sub_8220C268(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C4A0) {
	__imp__sub_8220C4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C4A8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8220c268
	sub_8220C268(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C4A8) {
	__imp__sub_8220C4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8220C4B8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x8220C4C0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220C4CC;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220C4E8;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220C4F0;
	sub_822ACB68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x8220c520
	if (ctx.cr6.gt) goto loc_8220C520;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220c598
	if (ctx.cr6.eq) goto loc_8220C598;
	// bdz 0x8220c574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C574;
	// bdz 0x8220c550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C550;
	// bdz 0x8220c52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C52C;
	// b 0x8220c52c
	goto loc_8220C52C;
loc_8220C520:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16988
	ctx.r3.s64 = ctx.r11.s64 + 16988;
	// bl 0x822ad350
	ctx.lr = 0x8220C52C;
	sub_822AD350(ctx, base);
loc_8220C52C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C534;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c550
	if (!ctx.cr6.lt) goto loc_8220C550;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,16824
	ctx.r4.s64 = ctx.r11.s64 + 16824;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C550;
	sub_822AD4E0(ctx, base);
loc_8220C550:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C558;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c574
	if (!ctx.cr6.lt) goto loc_8220C574;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,16792
	ctx.r4.s64 = ctx.r11.s64 + 16792;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C574;
	sub_822AD4E0(ctx, base);
loc_8220C574:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C57C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c598
	if (!ctx.cr6.lt) goto loc_8220C598;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C598;
	sub_822AD4E0(ctx, base);
loc_8220C598:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x8220C5A4;
	sub_822B1D30(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220C5B4;
	sub_822B1D30(ctx, base);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8220c5d4
	if (ctx.cr6.eq) goto loc_8220C5D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16948
	ctx.r3.s64 = ctx.r11.s64 + 16948;
	// bl 0x822ad350
	ctx.lr = 0x8220C5D4;
	sub_822AD350(ctx, base);
loc_8220C5D4:
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r26,r11,16640
	ctx.r26.s64 = ctx.r11.s64 + 16640;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8220c5f4
	if (!ctx.cr6.eq) goto loc_8220C5F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ad350
	ctx.lr = 0x8220C5F4;
	sub_822AD350(ctx, base);
loc_8220C5F4:
	// li r4,5
	ctx.r4.s64 = 5;
	// lhz r3,126(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220C600;
	sub_8220C0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c66c
	if (ctx.cr6.eq) goto loc_8220C66C;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// beq cr6,0x8220c648
	if (ctx.cr6.eq) goto loc_8220C648;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x8220c63c
	if (ctx.cr6.eq) goto loc_8220C63C;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// beq cr6,0x8220c630
	if (ctx.cr6.eq) goto loc_8220C630;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16924
	ctx.r3.s64 = ctx.r11.s64 + 16924;
	// b 0x8220c650
	goto loc_8220C650;
loc_8220C630:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16900
	ctx.r3.s64 = ctx.r11.s64 + 16900;
	// b 0x8220c650
	goto loc_8220C650;
loc_8220C63C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16868
	ctx.r3.s64 = ctx.r11.s64 + 16868;
	// b 0x8220c650
	goto loc_8220C650;
loc_8220C648:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16852
	ctx.r3.s64 = ctx.r11.s64 + 16852;
loc_8220C650:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220C66C;
	sub_8220BF58(ctx, base);
loc_8220C66C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220C674;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220c68c
	if (!ctx.cr6.eq) goto loc_8220C68C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220C68C;
	sub_822AD548(ctx, base);
loc_8220C68C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8220c6c0
	if (ctx.cr6.eq) goto loc_8220C6C0;
	// bl 0x822f8350
	ctx.lr = 0x8220C6BC;
	sub_822F8350(ctx, base);
	// b 0x8220c6c4
	goto loc_8220C6C4;
loc_8220C6C0:
	// bl 0x822f8228
	ctx.lr = 0x8220C6C4;
	sub_822F8228(ctx, base);
loc_8220C6C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220c6f4
	if (!ctx.cr6.eq) goto loc_8220C6F4;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220c710
	if (!ctx.cr6.eq) goto loc_8220C710;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8220C6F0;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8220C6F4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220c704
	if (!ctx.cr6.eq) goto loc_8220C704;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ad350
	ctx.lr = 0x8220C704;
	sub_822AD350(ctx, base);
loc_8220C704:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220C710;
	sub_822AD350(ctx, base);
loc_8220C710:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8220C71C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C4B0) {
	__imp__sub_8220C4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C720) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8220c4b0
	sub_8220C4B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C720) {
	__imp__sub_8220C720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C728) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8220c4b0
	sub_8220C4B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C728) {
	__imp__sub_8220C728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C730) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8220c4b0
	sub_8220C4B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C730) {
	__imp__sub_8220C730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C738) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8220c4b0
	sub_8220C4B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C738) {
	__imp__sub_8220C738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8220C748;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x8220C750;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220C75C;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220C778;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220C780;
	sub_822ACB68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x8220c7b0
	if (ctx.cr6.gt) goto loc_8220C7B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220c828
	if (ctx.cr6.eq) goto loc_8220C828;
	// bdz 0x8220c804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C804;
	// bdz 0x8220c7e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C7E0;
	// bdz 0x8220c7bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220C7BC;
	// b 0x8220c7bc
	goto loc_8220C7BC;
loc_8220C7B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x8220C7BC;
	sub_822AD350(ctx, base);
loc_8220C7BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C7C4;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c7e0
	if (!ctx.cr6.lt) goto loc_8220C7E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,16824
	ctx.r4.s64 = ctx.r11.s64 + 16824;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C7E0;
	sub_822AD4E0(ctx, base);
loc_8220C7E0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C7E8;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c804
	if (!ctx.cr6.lt) goto loc_8220C804;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,16792
	ctx.r4.s64 = ctx.r11.s64 + 16792;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C804;
	sub_822AD4E0(ctx, base);
loc_8220C804:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8220C80C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220c828
	if (!ctx.cr6.lt) goto loc_8220C828;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C828;
	sub_822AD4E0(ctx, base);
loc_8220C828:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220C834;
	sub_822B1D30(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r3,126(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220C844;
	sub_8220C0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c8b4
	if (ctx.cr6.eq) goto loc_8220C8B4;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8220c890
	if (ctx.cr6.eq) goto loc_8220C890;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x8220c884
	if (ctx.cr6.eq) goto loc_8220C884;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x8220c878
	if (ctx.cr6.eq) goto loc_8220C878;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17068
	ctx.r3.s64 = ctx.r11.s64 + 17068;
	// b 0x8220c898
	goto loc_8220C898;
loc_8220C878:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17052
	ctx.r3.s64 = ctx.r11.s64 + 17052;
	// b 0x8220c898
	goto loc_8220C898;
loc_8220C884:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17028
	ctx.r3.s64 = ctx.r11.s64 + 17028;
	// b 0x8220c898
	goto loc_8220C898;
loc_8220C890:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17020
	ctx.r3.s64 = ctx.r11.s64 + 17020;
loc_8220C898:
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220C8B4;
	sub_8220BF58(ctx, base);
loc_8220C8B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220C8BC;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220c8d4
	if (!ctx.cr6.eq) goto loc_8220C8D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220C8D4;
	sub_822AD548(ctx, base);
loc_8220C8D4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r10,r30,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8220c908
	if (ctx.cr6.eq) goto loc_8220C908;
	// bl 0x822f75d8
	ctx.lr = 0x8220C904;
	sub_822F75D8(ctx, base);
	// b 0x8220c90c
	goto loc_8220C90C;
loc_8220C908:
	// bl 0x822f7488
	ctx.lr = 0x8220C90C;
	sub_822F7488(ctx, base);
loc_8220C90C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220c93c
	if (!ctx.cr6.eq) goto loc_8220C93C;
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220c95c
	if (!ctx.cr6.eq) goto loc_8220C95C;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x8220C938;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8220C93C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220c950
	if (!ctx.cr6.eq) goto loc_8220C950;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// bl 0x822ad350
	ctx.lr = 0x8220C950;
	sub_822AD350(ctx, base);
loc_8220C950:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220C95C;
	sub_822AD350(ctx, base);
loc_8220C95C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x8220C968;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C740) {
	__imp__sub_8220C740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220C96C) {
	__imp__sub_8220C96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C970) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8220c740
	sub_8220C740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C970) {
	__imp__sub_8220C970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C978) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8220c740
	sub_8220C740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C978) {
	__imp__sub_8220C978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C980) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8220c740
	sub_8220C740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C980) {
	__imp__sub_8220C980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C988) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8220c740
	sub_8220C740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220C988) {
	__imp__sub_8220C988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220C990) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8220C9A8;
	sub_8220ED10(ctx, base);
	// bl 0x8220bb38
	ctx.lr = 0x8220C9AC;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b1d30
	ctx.lr = 0x8220C9BC;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f29c8
	ctx.lr = 0x8220C9CC;
	sub_822F29C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f54f0
	ctx.lr = 0x8220C9D4;
	sub_822F54F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c9f0
	if (!ctx.cr6.eq) goto loc_8220C9F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17084
	ctx.r4.s64 = ctx.r11.s64 + 17084;
	// bl 0x822ad4e0
	ctx.lr = 0x8220C9F0;
	sub_822AD4E0(ctx, base);
loc_8220C9F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f4038
	ctx.lr = 0x8220C9FC;
	sub_822F4038(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x8220CA00;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_8220C990) {
	__imp__sub_8220C990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CA18) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8220CA2C;
	sub_8220ED10(ctx, base);
	// bl 0x8220bb38
	ctx.lr = 0x8220CA30;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b1d30
	ctx.lr = 0x8220CA40;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f55a0
	ctx.lr = 0x8220CA50;
	sub_822F55A0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acbf8
	ctx.lr = 0x8220CA58;
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

PPC_WEAK_FUNC(sub_8220CA18) {
	__imp__sub_8220CA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220CA6C) {
	__imp__sub_8220CA6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220CA78;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x8220CA80;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220CA8C;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220CAA8;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220CAB0;
	sub_822ACB68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x8220cae0
	if (ctx.cr6.gt) goto loc_8220CAE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220cb58
	if (ctx.cr6.eq) goto loc_8220CB58;
	// bdz 0x8220cb34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220CB34;
	// bdz 0x8220cb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220CB10;
	// bdz 0x8220caec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220CAEC;
	// b 0x8220caec
	goto loc_8220CAEC;
loc_8220CAE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x8220CAEC;
	sub_822AD350(ctx, base);
loc_8220CAEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x8220CAF4;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220cb10
	if (!ctx.cr6.lt) goto loc_8220CB10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,16824
	ctx.r4.s64 = ctx.r11.s64 + 16824;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CB10;
	sub_822AD4E0(ctx, base);
loc_8220CB10:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220CB18;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220cb34
	if (!ctx.cr6.lt) goto loc_8220CB34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,16792
	ctx.r4.s64 = ctx.r11.s64 + 16792;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CB34;
	sub_822AD4E0(ctx, base);
loc_8220CB34:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8220CB3C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x8220cb58
	if (ctx.cr6.gt) goto loc_8220CB58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CB58;
	sub_822AD4E0(ctx, base);
loc_8220CB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x8220CB64;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822b20b8
	ctx.lr = 0x8220CB74;
	sub_822B20B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220CB80;
	sub_822F29C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f54f0
	ctx.lr = 0x8220CB88;
	sub_822F54F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cba4
	if (!ctx.cr6.eq) goto loc_8220CBA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17084
	ctx.r4.s64 = ctx.r11.s64 + 17084;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CBA4;
	sub_822AD4E0(ctx, base);
loc_8220CBA4:
	// li r4,5
	ctx.r4.s64 = 5;
	// lhz r3,126(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220CBB0;
	sub_8220C0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cc1c
	if (ctx.cr6.eq) goto loc_8220CC1C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8220cbf8
	if (ctx.cr6.eq) goto loc_8220CBF8;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x8220cbec
	if (ctx.cr6.eq) goto loc_8220CBEC;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8220cbe0
	if (ctx.cr6.eq) goto loc_8220CBE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17228
	ctx.r3.s64 = ctx.r11.s64 + 17228;
	// b 0x8220cc00
	goto loc_8220CC00;
loc_8220CBE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17200
	ctx.r3.s64 = ctx.r11.s64 + 17200;
	// b 0x8220cc00
	goto loc_8220CC00;
loc_8220CBEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17164
	ctx.r3.s64 = ctx.r11.s64 + 17164;
	// b 0x8220cc00
	goto loc_8220CC00;
loc_8220CBF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17144
	ctx.r3.s64 = ctx.r11.s64 + 17144;
loc_8220CC00:
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220CC1C;
	sub_8220BF58(ctx, base);
loc_8220CC1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220CC24;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220cc3c
	if (!ctx.cr6.eq) goto loc_8220CC3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220CC3C;
	sub_822AD548(ctx, base);
loc_8220CC3C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r9,r29,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8220cc6c
	if (ctx.cr6.eq) goto loc_8220CC6C;
	// bl 0x822f7fb8
	ctx.lr = 0x8220CC68;
	sub_822F7FB8(ctx, base);
	// b 0x8220cc70
	goto loc_8220CC70;
loc_8220CC6C:
	// bl 0x822f80f0
	ctx.lr = 0x8220CC70;
	sub_822F80F0(ctx, base);
loc_8220CC70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220cca0
	if (!ctx.cr6.eq) goto loc_8220CCA0;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220ccc0
	if (!ctx.cr6.eq) goto loc_8220CCC0;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8220CC9C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8220CCA0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220ccb4
	if (!ctx.cr6.eq) goto loc_8220CCB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// bl 0x822ad350
	ctx.lr = 0x8220CCB4;
	sub_822AD350(ctx, base);
loc_8220CCB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220CCC0;
	sub_822AD350(ctx, base);
loc_8220CCC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8220CCCC;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CA70) {
	__imp__sub_8220CA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CCD0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8220ca70
	sub_8220CA70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CCD0) {
	__imp__sub_8220CCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CCD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8220ca70
	sub_8220CA70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CCD8) {
	__imp__sub_8220CCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CCE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8220ca70
	sub_8220CA70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CCE0) {
	__imp__sub_8220CCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CCE8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8220ca70
	sub_8220CA70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CCE8) {
	__imp__sub_8220CCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8220CCF8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x8220CD00;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220CD10;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220CD2C;
	sub_8220BB38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220CD34;
	sub_822ACB68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x8220cd64
	if (ctx.cr6.gt) goto loc_8220CD64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220cdd8
	if (ctx.cr6.eq) goto loc_8220CDD8;
	// bdz 0x8220cdb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220CDB4;
	// bdz 0x8220cd90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220CD90;
	// bdz 0x8220cd6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220CD6C;
	// b 0x8220cd6c
	goto loc_8220CD6C;
loc_8220CD64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad350
	ctx.lr = 0x8220CD6C;
	sub_822AD350(ctx, base);
loc_8220CD6C:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b1fb0
	ctx.lr = 0x8220CD74;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220cd90
	if (!ctx.cr6.lt) goto loc_8220CD90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r4,r11,16824
	ctx.r4.s64 = ctx.r11.s64 + 16824;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CD90;
	sub_822AD4E0(ctx, base);
loc_8220CD90:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x8220CD98;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220cdb4
	if (!ctx.cr6.lt) goto loc_8220CDB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,16792
	ctx.r4.s64 = ctx.r11.s64 + 16792;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CDB4;
	sub_822AD4E0(ctx, base);
loc_8220CDB4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220CDBC;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x8220cdd8
	if (ctx.cr6.gt) goto loc_8220CDD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CDD8;
	sub_822AD4E0(ctx, base);
loc_8220CDD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1d30
	ctx.lr = 0x8220CDE4;
	sub_822B1D30(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x8220CDF4;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8220CE00;
	sub_822B20B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f29c8
	ctx.lr = 0x8220CE10;
	sub_822F29C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f54f0
	ctx.lr = 0x8220CE18;
	sub_822F54F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ce34
	if (!ctx.cr6.eq) goto loc_8220CE34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17084
	ctx.r4.s64 = ctx.r11.s64 + 17084;
	// bl 0x822ad4e0
	ctx.lr = 0x8220CE34;
	sub_822AD4E0(ctx, base);
loc_8220CE34:
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8220ce50
	if (ctx.cr6.eq) goto loc_8220CE50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16948
	ctx.r3.s64 = ctx.r11.s64 + 16948;
	// bl 0x822ad350
	ctx.lr = 0x8220CE50;
	sub_822AD350(ctx, base);
loc_8220CE50:
	// lhz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,16640
	ctx.r25.s64 = ctx.r11.s64 + 16640;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8220ce6c
	if (!ctx.cr6.eq) goto loc_8220CE6C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822ad350
	ctx.lr = 0x8220CE6C;
	sub_822AD350(ctx, base);
loc_8220CE6C:
	// li r4,6
	ctx.r4.s64 = 6;
	// lhz r3,126(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220CE78;
	sub_8220C0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cebc
	if (ctx.cr6.eq) goto loc_8220CEBC;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// beq cr6,0x8220ce98
	if (ctx.cr6.eq) goto loc_8220CE98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17316
	ctx.r3.s64 = ctx.r11.s64 + 17316;
	// b 0x8220cea0
	goto loc_8220CEA0;
loc_8220CE98:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17284
	ctx.r3.s64 = ctx.r11.s64 + 17284;
loc_8220CEA0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220CEBC;
	sub_8220BF58(ctx, base);
loc_8220CEBC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220CEC4;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220cedc
	if (!ctx.cr6.eq) goto loc_8220CEDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220CEDC;
	sub_822AD548(ctx, base);
loc_8220CEDC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8220cf10
	if (ctx.cr6.eq) goto loc_8220CF10;
	// bl 0x822f8350
	ctx.lr = 0x8220CF0C;
	sub_822F8350(ctx, base);
	// b 0x8220cf14
	goto loc_8220CF14;
loc_8220CF10:
	// bl 0x822f8228
	ctx.lr = 0x8220CF14;
	sub_822F8228(ctx, base);
loc_8220CF14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220cf44
	if (!ctx.cr6.eq) goto loc_8220CF44;
	// lwz r11,312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220cf60
	if (!ctx.cr6.eq) goto loc_8220CF60;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r26)
	PPC_STORE_U32(ctx.r26.u32 + 312, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x8220CF40;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8220CF44:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220cf54
	if (!ctx.cr6.eq) goto loc_8220CF54;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822ad350
	ctx.lr = 0x8220CF54;
	sub_822AD350(ctx, base);
loc_8220CF54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220CF60;
	sub_822AD350(ctx, base);
loc_8220CF60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x8220CF6C;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CCF0) {
	__imp__sub_8220CCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,17340
	ctx.r5.s64 = ctx.r11.s64 + 17340;
	// b 0x8220ccf0
	sub_8220CCF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CF70) {
	__imp__sub_8220CF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,17384
	ctx.r5.s64 = ctx.r11.s64 + 17384;
	// b 0x8220ccf0
	sub_8220CCF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CF80) {
	__imp__sub_8220CF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220CF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220CF98;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x8220CFA0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220CFAC;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220CFC8;
	sub_8220BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220CFD0;
	sub_822ACB68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x8220d000
	if (ctx.cr6.gt) goto loc_8220D000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220d078
	if (ctx.cr6.eq) goto loc_8220D078;
	// bdz 0x8220d054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D054;
	// bdz 0x8220d030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D030;
	// bdz 0x8220d00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D00C;
	// b 0x8220d00c
	goto loc_8220D00C;
loc_8220D000:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16988
	ctx.r3.s64 = ctx.r11.s64 + 16988;
	// bl 0x822ad350
	ctx.lr = 0x8220D00C;
	sub_822AD350(ctx, base);
loc_8220D00C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x8220D014;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220d030
	if (!ctx.cr6.lt) goto loc_8220D030;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,16824
	ctx.r4.s64 = ctx.r11.s64 + 16824;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D030;
	sub_822AD4E0(ctx, base);
loc_8220D030:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220D038;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x8220d054
	if (!ctx.cr6.lt) goto loc_8220D054;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,16792
	ctx.r4.s64 = ctx.r11.s64 + 16792;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D054;
	sub_822AD4E0(ctx, base);
loc_8220D054:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8220D05C;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x8220d078
	if (ctx.cr6.gt) goto loc_8220D078;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D078;
	sub_822AD4E0(ctx, base);
loc_8220D078:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x8220D084;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822b20b8
	ctx.lr = 0x8220D094;
	sub_822B20B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220D0A0;
	sub_822F29C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f54f0
	ctx.lr = 0x8220D0A8;
	sub_822F54F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d0c4
	if (!ctx.cr6.eq) goto loc_8220D0C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17084
	ctx.r4.s64 = ctx.r11.s64 + 17084;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D0C4;
	sub_822AD4E0(ctx, base);
loc_8220D0C4:
	// li r4,5
	ctx.r4.s64 = 5;
	// lhz r3,126(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220D0D0;
	sub_8220C0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d13c
	if (ctx.cr6.eq) goto loc_8220D13C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8220d118
	if (ctx.cr6.eq) goto loc_8220D118;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x8220d10c
	if (ctx.cr6.eq) goto loc_8220D10C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8220d100
	if (ctx.cr6.eq) goto loc_8220D100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x8220d120
	goto loc_8220D120;
loc_8220D100:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17480
	ctx.r3.s64 = ctx.r11.s64 + 17480;
	// b 0x8220d120
	goto loc_8220D120;
loc_8220D10C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17448
	ctx.r3.s64 = ctx.r11.s64 + 17448;
	// b 0x8220d120
	goto loc_8220D120;
loc_8220D118:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17432
	ctx.r3.s64 = ctx.r11.s64 + 17432;
loc_8220D120:
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220D13C;
	sub_8220BF58(ctx, base);
loc_8220D13C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220D144;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220d15c
	if (!ctx.cr6.eq) goto loc_8220D15C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220D15C;
	sub_822AD548(ctx, base);
loc_8220D15C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r10,r29,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8220d190
	if (ctx.cr6.eq) goto loc_8220D190;
	// bl 0x822f75d8
	ctx.lr = 0x8220D18C;
	sub_822F75D8(ctx, base);
	// b 0x8220d194
	goto loc_8220D194;
loc_8220D190:
	// bl 0x822f7488
	ctx.lr = 0x8220D194;
	sub_822F7488(ctx, base);
loc_8220D194:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220d1c4
	if (!ctx.cr6.eq) goto loc_8220D1C4;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220d1e4
	if (!ctx.cr6.eq) goto loc_8220D1E4;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8220D1C0;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8220D1C4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220d1d8
	if (!ctx.cr6.eq) goto loc_8220D1D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// bl 0x822ad350
	ctx.lr = 0x8220D1D8;
	sub_822AD350(ctx, base);
loc_8220D1D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// bl 0x822ad350
	ctx.lr = 0x8220D1E4;
	sub_822AD350(ctx, base);
loc_8220D1E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8220D1F0;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220CF90) {
	__imp__sub_8220CF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220D1F4) {
	__imp__sub_8220D1F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D1F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8220cf90
	sub_8220CF90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220D1F8) {
	__imp__sub_8220D1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D200) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8220cf90
	sub_8220CF90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220D200) {
	__imp__sub_8220D200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D208) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8220cf90
	sub_8220CF90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220D208) {
	__imp__sub_8220D208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D210) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8220cf90
	sub_8220CF90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220D210) {
	__imp__sub_8220D210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8220D220;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x8220D234;
	sub_8220ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x8220bb38
	ctx.lr = 0x8220D248;
	sub_8220BB38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8220D250;
	sub_822ACB68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// lfs f29,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8220d2b8
	if (ctx.cr6.eq) goto loc_8220D2B8;
	// ble cr6,0x8220d26c
	if (!ctx.cr6.gt) goto loc_8220D26C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x8220d278
	if (!ctx.cr6.gt) goto loc_8220D278;
loc_8220D26C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x8220D278;
	sub_822AD350(ctx, base);
loc_8220D278:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8220D280;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x8220d29c
	if (!ctx.cr6.lt) goto loc_8220D29C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// addi r4,r11,17616
	ctx.r4.s64 = ctx.r11.s64 + 17616;
	// b 0x8220d2b0
	goto loc_8220D2B0;
loc_8220D29C:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x8220d2b8
	if (!ctx.cr6.gt) goto loc_8220D2B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// addi r4,r11,17604
	ctx.r4.s64 = ctx.r11.s64 + 17604;
loc_8220D2B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D2B8;
	sub_822AD4E0(ctx, base);
loc_8220D2B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220D2C4;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220D2D0;
	sub_822F29C8(ctx, base);
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f5670
	ctx.lr = 0x8220D2E0;
	sub_822F5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220d2f4
	if (!ctx.cr6.eq) goto loc_8220D2F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,17580
	ctx.r4.s64 = ctx.r11.s64 + 17580;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D2F4;
	sub_822AD4E0(ctx, base);
loc_8220D2F4:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x8220d324
	if (!ctx.cr6.eq) goto loc_8220D324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f5640
	ctx.lr = 0x8220D308;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d324
	if (ctx.cr6.eq) goto loc_8220D324;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17540
	ctx.r4.s64 = ctx.r11.s64 + 17540;
	// bl 0x822ad4e0
	ctx.lr = 0x8220D324;
	sub_822AD4E0(ctx, base);
loc_8220D324:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f5540
	ctx.lr = 0x8220D334;
	sub_822F5540(ctx, base);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220d34c
	if (!ctx.cr6.eq) goto loc_8220D34C;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r11.u32);
loc_8220D34C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lhz r3,126(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// bl 0x8220c0f0
	ctx.lr = 0x8220D358;
	sub_8220C0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d3c8
	if (ctx.cr6.eq) goto loc_8220D3C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220D36C;
	sub_822F29C8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,52(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x822f4200
	ctx.lr = 0x8220D384;
	sub_822F4200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f4230
	ctx.lr = 0x8220D390;
	sub_822F4230(ctx, base);
	// stfd f31,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,17528
	ctx.r5.s64 = ctx.r8.s64 + 17528;
	// addi r4,r7,16520
	ctx.r4.s64 = ctx.r7.s64 + 16520;
	// addi r8,r11,13236
	ctx.r8.s64 = ctx.r11.s64 + 13236;
	// li r3,19
	ctx.r3.s64 = 19;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x8220D3C8;
	sub_82280900(ctx, base);
loc_8220D3C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_8220D218) {
	__imp__sub_8220D218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220D3DC) {
	__imp__sub_8220D3DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D3E0) {
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
	ctx.lr = 0x8220D3F0;
	sub_8220ED10(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x8233d310
	ctx.lr = 0x8220D3FC;
	sub_8233D310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220D3E0) {
	__imp__sub_8220D3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220D40C) {
	__imp__sub_8220D40C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D410) {
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
	// bne cr6,0x8220d46c
	if (!ctx.cr6.eq) goto loc_8220D46C;
	// addi r11,r11,15552
	ctx.r11.s64 = ctx.r11.s64 + 15552;
	// li r30,33
	ctx.r30.s64 = 33;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_8220D43C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x8220D448;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8220d43c
	if (!ctx.cr0.eq) goto loc_8220D43C;
loc_8220D450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220D454:
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
loc_8220D46C:
	// addi r4,r11,15552
	ctx.r4.s64 = ctx.r11.s64 + 15552;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_8220D480:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8220D488:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x8220d4ac
	if (ctx.cr6.eq) goto loc_8220D4AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8220d488
	if (ctx.cr6.eq) goto loc_8220D488;
loc_8220D4AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8220d4cc
	if (ctx.cr6.eq) goto loc_8220D4CC;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,396
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 396, ctx.xer);
	// blt cr6,0x8220d480
	if (ctx.cr6.lt) goto loc_8220D480;
	// b 0x8220d450
	goto loc_8220D450;
loc_8220D4CC:
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
	// b 0x8220d454
	goto loc_8220D454;
}

PPC_WEAK_FUNC(sub_8220D410) {
	__imp__sub_8220D410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220D4EC) {
	__imp__sub_8220D4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8220D4F8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x8220ed10
	ctx.lr = 0x8220D50C;
	sub_8220ED10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220D514;
	sub_822846C0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220d52c
	if (!ctx.cr6.eq) goto loc_8220D52C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// bl 0x822ad548
	ctx.lr = 0x8220D52C;
	sub_822AD548(ctx, base);
loc_8220D52C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bb38
	ctx.lr = 0x8220D534;
	sub_8220BB38(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// bl 0x822acb68
	ctx.lr = 0x8220D548;
	sub_822ACB68(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
	// ble cr6,0x8220d5b0
	if (!ctx.cr6.gt) goto loc_8220D5B0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b20b8
	ctx.lr = 0x8220D560;
	sub_822B20B8(ctx, base);
	// lhz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 124);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220d594
	if (ctx.cr6.eq) goto loc_8220D594;
	// lhz r11,504(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 504);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220d594
	if (ctx.cr6.eq) goto loc_8220D594;
	// bl 0x822a13a0
	ctx.lr = 0x8220D580;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// bl 0x822e84f0
	ctx.lr = 0x8220D590;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220D594;
	sub_822AD350(ctx, base);
loc_8220D594:
	// bl 0x822acb68
	ctx.lr = 0x8220D598;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// ble cr6,0x8220d5b0
	if (!ctx.cr6.gt) goto loc_8220D5B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b1d30
	ctx.lr = 0x8220D5AC;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8220D5B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1d30
	ctx.lr = 0x8220D5BC;
	sub_822B1D30(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x822b2498
	ctx.lr = 0x8220D5D0;
	sub_822B2498(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8220D5DC;
	sub_822B2498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8220D5E4;
	sub_822B20B8(ctx, base);
	// lwz r25,268(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8220d798
	if (ctx.cr6.eq) goto loc_8220D798;
	// lwz r11,3480(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220d668
	if (!ctx.cr6.eq) goto loc_8220D668;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220d618
	if (ctx.cr6.eq) goto loc_8220D618;
	// bl 0x822a13a0
	ctx.lr = 0x8220D610;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8220d620
	goto loc_8220D620;
loc_8220D618:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-32360
	ctx.r30.s64 = ctx.r11.s64 + -32360;
loc_8220D620:
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8220D628;
	sub_822A13A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x822e8620
	ctx.lr = 0x8220D634;
	sub_822E8620(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82240058
	ctx.lr = 0x8220D644;
	sub_82240058(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,16176
	ctx.r3.s64 = ctx.r10.s64 + 16176;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220D664;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220D668;
	sub_822AD350(ctx, base);
loc_8220D668:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8220d798
	if (ctx.cr6.eq) goto loc_8220D798;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821dac60
	ctx.lr = 0x8220D67C;
	sub_821DAC60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821b4e00
	ctx.lr = 0x8220D684;
	sub_821B4E00(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d724
	if (ctx.cr6.eq) goto loc_8220D724;
	// lhz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220d724
	if (ctx.cr6.eq) goto loc_8220D724;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lhz r10,126(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,-6136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6136);
	// lfs f30,6040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8220d6e4
	if (!ctx.cr6.eq) goto loc_8220D6E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8220bf58
	ctx.lr = 0x8220D6E4;
	sub_8220BF58(ctx, base);
loc_8220D6E4:
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lhz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// bl 0x822f75d8
	ctx.lr = 0x8220D70C;
	sub_822F75D8(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220d724
	if (!ctx.cr6.eq) goto loc_8220D724;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_8220D724:
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d738
	if (!ctx.cr6.eq) goto loc_8220D738;
	// bl 0x822acd78
	ctx.lr = 0x8220D734;
	sub_822ACD78(ctx, base);
	// b 0x8220d740
	goto loc_8220D740;
loc_8220D738:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822accf8
	ctx.lr = 0x8220D740;
	sub_822ACCF8(ctx, base);
loc_8220D740:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8220d750
	if (!ctx.cr6.eq) goto loc_8220D750;
	// bl 0x822acd78
	ctx.lr = 0x8220D74C;
	sub_822ACD78(ctx, base);
	// b 0x8220d758
	goto loc_8220D758;
loc_8220D750:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822acff0
	ctx.lr = 0x8220D758;
	sub_822ACFF0(ctx, base);
loc_8220D758:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822accf8
	ctx.lr = 0x8220D760;
	sub_822ACCF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ad078
	ctx.lr = 0x8220D768;
	sub_822AD078(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822ad078
	ctx.lr = 0x8220D770;
	sub_822AD078(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822acff0
	ctx.lr = 0x8220D778;
	sub_822ACFF0(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82229d78
	ctx.lr = 0x8220D790;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x8220D794;
	sub_822AC730(ctx, base);
	// b 0x8220d7c4
	goto loc_8220D7C4;
loc_8220D798:
	// lhz r9,504(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 504);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// subf r4,r27,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r27.s64;
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5850
	ctx.lr = 0x8220D7C4;
	sub_821E5850(ctx, base);
loc_8220D7C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8220d7d4
	if (ctx.cr6.eq) goto loc_8220D7D4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8220d7f8
	if (ctx.cr6.eq) goto loc_8220D7F8;
loc_8220D7D4:
	// lwz r30,468(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220d7f8
	if (ctx.cr6.eq) goto loc_8220D7F8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232bb8
	ctx.lr = 0x8220D7EC;
	sub_82232BB8(ctx, base);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6588
	ctx.lr = 0x8220D7F8;
	sub_822D6588(ctx, base);
loc_8220D7F8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220D4F0) {
	__imp__sub_8220D4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D808) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220d854
	if (ctx.cr6.eq) goto loc_8220D854;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r11,r11,46
	ctx.r11.s64 = ctx.r11.s64 + 46;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x8220d854
	if (!ctx.cr6.eq) goto loc_8220D854;
	// bl 0x821daa58
	ctx.lr = 0x8220D854;
	sub_821DAA58(ctx, base);
loc_8220D854:
	// lwz r30,476(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220d90c
	if (ctx.cr6.eq) goto loc_8220D90C;
	// lhz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d8f8
	if (ctx.cr6.eq) goto loc_8220D8F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bb38
	ctx.lr = 0x8220D874;
	sub_8220BB38(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,126(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-6136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6136);
	// lfs f29,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,6040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8220d8c8
	if (!ctx.cr6.eq) goto loc_8220D8C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,15488
	ctx.r3.s64 = ctx.r11.s64 + 15488;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220bf58
	ctx.lr = 0x8220D8C8;
	sub_8220BF58(ctx, base);
loc_8220D8C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220D8D0;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220d8f8
	if (ctx.cr6.eq) goto loc_8220D8F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f75d8
	ctx.lr = 0x8220D8F8;
	sub_822F75D8(ctx, base);
loc_8220D8F8:
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e118
	ctx.lr = 0x8220D904;
	sub_8229E118(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
loc_8220D90C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220D808) {
	__imp__sub_8220D808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D930) {
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
	ctx.lr = 0x8220D940;
	sub_8220ED10(ctx, base);
	// bl 0x8220d808
	ctx.lr = 0x8220D944;
	sub_8220D808(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220D930) {
	__imp__sub_8220D930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220D954) {
	__imp__sub_8220D954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D958) {
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
	// bl 0x822acb68
	ctx.lr = 0x8220D970;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// ble cr6,0x8220d984
	if (!ctx.cr6.gt) goto loc_8220D984;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x822ad350
	ctx.lr = 0x8220D984;
	sub_822AD350(ctx, base);
loc_8220D984:
	// bl 0x822acb68
	ctx.lr = 0x8220D988;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x8220d99c
	if (ctx.cr6.gt) goto loc_8220D99C;
	// bl 0x822acb68
	ctx.lr = 0x8220D994;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8220d9a8
	if (!ctx.cr6.lt) goto loc_8220D9A8;
loc_8220D99C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,17628
	ctx.r3.s64 = ctx.r11.s64 + 17628;
	// bl 0x822ad350
	ctx.lr = 0x8220D9A8;
	sub_822AD350(ctx, base);
loc_8220D9A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d4f0
	ctx.lr = 0x8220D9B4;
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

PPC_WEAK_FUNC(sub_8220D958) {
	__imp__sub_8220D958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220D9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220D9D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8220d808
	ctx.lr = 0x8220D9E0;
	sub_8220D808(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r29,616(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// beq cr6,0x8220da18
	if (ctx.cr6.eq) goto loc_8220DA18;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220da08
	if (ctx.cr6.eq) goto loc_8220DA08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8220D9FC;
	sub_822F29C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220da78
	if (ctx.cr6.eq) goto loc_8220DA78;
loc_8220DA08:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82282dc0
	ctx.lr = 0x8220DA10;
	sub_82282DC0(ctx, base);
	// stw r3,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r3.u32);
	// b 0x8220da28
	goto loc_8220DA28;
loc_8220DA18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220da78
	if (ctx.cr6.eq) goto loc_8220DA78;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
loc_8220DA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220DA30;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220da44
	if (ctx.cr6.eq) goto loc_8220DA44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f2368
	ctx.lr = 0x8220DA44;
	sub_822F2368(ctx, base);
loc_8220DA44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// bl 0x8222feb8
	ctx.lr = 0x8220DA50;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220da68
	if (ctx.cr6.eq) goto loc_8220DA68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220DA60;
	sub_822846C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0330
	ctx.lr = 0x8220DA68;
	sub_822F0330(ctx, base);
loc_8220DA68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220da78
	if (ctx.cr6.eq) goto loc_8220DA78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82282dd0
	ctx.lr = 0x8220DA78;
	sub_82282DD0(ctx, base);
loc_8220DA78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220D9C8) {
	__imp__sub_8220D9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DA80) {
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
	// bl 0x8220ed10
	ctx.lr = 0x8220DA94;
	sub_8220ED10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8220dac4
	if (ctx.cr6.eq) goto loc_8220DAC4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8220dab4
	if (ctx.cr6.eq) goto loc_8220DAB4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8220dae0
	if (!ctx.cr6.eq) goto loc_8220DAE0;
loc_8220DAB4:
	// lbz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x822ea328
	ctx.lr = 0x8220DABC;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220dae0
	if (ctx.cr6.eq) goto loc_8220DAE0;
loc_8220DAC4:
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8220DACC;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,17684
	ctx.r3.s64 = ctx.r11.s64 + 17684;
	// bl 0x822e84f0
	ctx.lr = 0x8220DADC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220DAE0;
	sub_822AD350(ctx, base);
loc_8220DAE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1e98
	ctx.lr = 0x8220DAE8;
	sub_822B1E98(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d9c8
	ctx.lr = 0x8220DAF8;
	sub_8220D9C8(ctx, base);
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

PPC_WEAK_FUNC(sub_8220DA80) {
	__imp__sub_8220DA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220DB0C) {
	__imp__sub_8220DB0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220DB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed10
	ctx.lr = 0x8220DB20;
	sub_8220ED10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8220db50
	if (ctx.cr6.eq) goto loc_8220DB50;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8220db40
	if (ctx.cr6.eq) goto loc_8220DB40;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8220db6c
	if (!ctx.cr6.eq) goto loc_8220DB6C;
loc_8220DB40:
	// lbz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x822ea328
	ctx.lr = 0x8220DB48;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220db6c
	if (!ctx.cr6.eq) goto loc_8220DB6C;
loc_8220DB50:
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8220DB58;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,17684
	ctx.r3.s64 = ctx.r11.s64 + 17684;
	// bl 0x822e84f0
	ctx.lr = 0x8220DB68;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220DB6C;
	sub_822AD350(ctx, base);
loc_8220DB6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d808
	ctx.lr = 0x8220DB74;
	sub_8220D808(ctx, base);
	// lwz r29,616(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220dbd0
	if (ctx.cr6.eq) goto loc_8220DBD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// bl 0x822846c0
	ctx.lr = 0x8220DB90;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220dba4
	if (ctx.cr6.eq) goto loc_8220DBA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f2368
	ctx.lr = 0x8220DBA4;
	sub_822F2368(ctx, base);
loc_8220DBA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// bl 0x8222feb8
	ctx.lr = 0x8220DBB0;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220dbc8
	if (ctx.cr6.eq) goto loc_8220DBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8220DBC0;
	sub_822846C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0330
	ctx.lr = 0x8220DBC8;
	sub_822F0330(ctx, base);
loc_8220DBC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82282dd0
	ctx.lr = 0x8220DBD0;
	sub_82282DD0(ctx, base);
loc_8220DBD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220DB10) {
	__imp__sub_8220DB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220DBE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821fc6d8
	ctx.lr = 0x8220DBF4;
	sub_821FC6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dc20
	if (ctx.cr6.eq) goto loc_8220DC20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220dc2c
	if (ctx.cr6.lt) goto loc_8220DC2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,17808
	ctx.r4.s64 = ctx.r11.s64 + 17808;
	// bl 0x82280b08
	ctx.lr = 0x8220DC20;
	sub_82280B08(ctx, base);
loc_8220DC20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220DC2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229d428
	ctx.lr = 0x8220DC34;
	sub_8229D428(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220dc7c
	if (!ctx.cr6.eq) goto loc_8220DC7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r8,17776
	ctx.r4.s64 = ctx.r8.s64 + 17776;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// stwx r10,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x82280900
	ctx.lr = 0x8220DC70;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220DC7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229cea0
	ctx.lr = 0x8220DC88;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bne cr6,0x8220dcd0
	if (!ctx.cr6.eq) goto loc_8220DCD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,17732
	ctx.r4.s64 = ctx.r11.s64 + 17732;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8220DCC4;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220DCD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220DBD8) {
	__imp__sub_8220DBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220DCDC) {
	__imp__sub_8220DCDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DCE0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8220dd1c
	if (ctx.cr6.eq) goto loc_8220DD1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,17912
	ctx.r5.s64 = ctx.r11.s64 + 17912;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822e8368
	ctx.lr = 0x8220DD18;
	sub_822E8368(ctx, base);
	// b 0x8220dd30
	goto loc_8220DD30;
loc_8220DD1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r5,r11,17896
	ctx.r5.s64 = ctx.r11.s64 + 17896;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822e8368
	ctx.lr = 0x8220DD30;
	sub_822E8368(ctx, base);
loc_8220DD30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,17888
	ctx.r4.s64 = ctx.r11.s64 + 17888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DD44;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dd7c
	if (ctx.cr6.eq) goto loc_8220DD7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17876
	ctx.r4.s64 = ctx.r11.s64 + 17876;
	// bl 0x8229cea0
	ctx.lr = 0x8220DD60;
	sub_8229CEA0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_8220DD7C:
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

PPC_WEAK_FUNC(sub_8220DCE0) {
	__imp__sub_8220DCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220DD98;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,17896
	ctx.r30.s64 = ctx.r11.s64 + 17896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r10,24424
	ctx.r6.s64 = ctx.r10.s64 + 24424;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DDC0;
	sub_822E8368(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r29,r11,17888
	ctx.r29.s64 = ctx.r11.s64 + 17888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DDD8;
	sub_8220DBD8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r11,17876
	ctx.r28.s64 = ctx.r11.s64 + 17876;
	// beq cr6,0x8220de14
	if (ctx.cr6.eq) goto loc_8220DE14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220DDF8;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220DE14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,26056
	ctx.r6.s64 = ctx.r11.s64 + 26056;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DE2C;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DE3C;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220de70
	if (ctx.cr6.eq) goto loc_8220DE70;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220DE54;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220DE70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,18084
	ctx.r6.s64 = ctx.r11.s64 + 18084;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DE88;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DE98;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220decc
	if (ctx.cr6.eq) goto loc_8220DECC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220DEB0;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220DECC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,18072
	ctx.r6.s64 = ctx.r11.s64 + 18072;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DEE4;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DEF4;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220df28
	if (ctx.cr6.eq) goto loc_8220DF28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220DF0C;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220DF28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,18060
	ctx.r6.s64 = ctx.r11.s64 + 18060;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DF40;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DF50;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220df84
	if (ctx.cr6.eq) goto loc_8220DF84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220DF68;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220DF84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,18048
	ctx.r6.s64 = ctx.r11.s64 + 18048;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DF9C;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220DFAC;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dfe0
	if (ctx.cr6.eq) goto loc_8220DFE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220DFC4;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220DFE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,18036
	ctx.r6.s64 = ctx.r11.s64 + 18036;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220DFF8;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E008;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e03c
	if (ctx.cr6.eq) goto loc_8220E03C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E020;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E03C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,26108
	ctx.r6.s64 = ctx.r11.s64 + 26108;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E054;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E064;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e098
	if (ctx.cr6.eq) goto loc_8220E098;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E07C;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E098:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,18012
	ctx.r6.s64 = ctx.r11.s64 + 18012;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E0B0;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E0C0;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e0f4
	if (ctx.cr6.eq) goto loc_8220E0F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E0D8;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E0F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r11,18004
	ctx.r27.s64 = ctx.r11.s64 + 18004;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E110;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E120;
	sub_8220DBD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e154
	if (ctx.cr6.eq) goto loc_8220E154;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E138;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E154:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,26348
	ctx.r6.s64 = ctx.r11.s64 + 26348;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E16C;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E17C;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e1b0
	if (ctx.cr6.eq) goto loc_8220E1B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E194;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E1B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,17996
	ctx.r6.s64 = ctx.r11.s64 + 17996;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E1C8;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E1D8;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e20c
	if (ctx.cr6.eq) goto loc_8220E20C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E1F0;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E20C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,17984
	ctx.r6.s64 = ctx.r11.s64 + 17984;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E224;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E234;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e268
	if (ctx.cr6.eq) goto loc_8220E268;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E24C;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,17976
	ctx.r6.s64 = ctx.r11.s64 + 17976;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E280;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E290;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e2c4
	if (ctx.cr6.eq) goto loc_8220E2C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E2A8;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E2C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,-31104
	ctx.r6.s64 = ctx.r11.s64 + -31104;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E2DC;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E2EC;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e320
	if (ctx.cr6.eq) goto loc_8220E320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E304;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E320:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,17968
	ctx.r6.s64 = ctx.r11.s64 + 17968;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E338;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E348;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e37c
	if (ctx.cr6.eq) goto loc_8220E37C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E360;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E37C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,17956
	ctx.r6.s64 = ctx.r11.s64 + 17956;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E394;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E3A4;
	sub_8220DBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e3d8
	if (ctx.cr6.eq) goto loc_8220E3D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229cea0
	ctx.lr = 0x8220E3BC;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8220E3D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,17932
	ctx.r3.s64 = ctx.r11.s64 + 17932;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E3EC;
	sub_8220DBD8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220DD90) {
	__imp__sub_8220DD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220E3F4) {
	__imp__sub_8220E3F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E3F8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r11,18216
	ctx.r30.s64 = ctx.r11.s64 + 18216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,18204
	ctx.r3.s64 = ctx.r10.s64 + 18204;
	// bl 0x8220dce0
	ctx.lr = 0x8220E42C;
	sub_8220DCE0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r9,18192
	ctx.r3.s64 = ctx.r9.s64 + 18192;
	// bl 0x8220dce0
	ctx.lr = 0x8220E440;
	sub_8220DCE0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r8,18180
	ctx.r3.s64 = ctx.r8.s64 + 18180;
	// bl 0x8220dce0
	ctx.lr = 0x8220E454;
	sub_8220DCE0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r7,18168
	ctx.r3.s64 = ctx.r7.s64 + 18168;
	// bl 0x8220dce0
	ctx.lr = 0x8220E468;
	sub_8220DCE0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r6,18156
	ctx.r3.s64 = ctx.r6.s64 + 18156;
	// bl 0x8220dce0
	ctx.lr = 0x8220E47C;
	sub_8220DCE0(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r3,18140
	ctx.r3.s64 = ctx.r3.s64 + 18140;
	// bl 0x8220dce0
	ctx.lr = 0x8220E490;
	sub_8220DCE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,18128
	ctx.r3.s64 = ctx.r11.s64 + 18128;
	// bl 0x8220dce0
	ctx.lr = 0x8220E4A4;
	sub_8220DCE0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,18116
	ctx.r3.s64 = ctx.r10.s64 + 18116;
	// bl 0x8220dce0
	ctx.lr = 0x8220E4B8;
	sub_8220DCE0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,18100
	ctx.r3.s64 = ctx.r9.s64 + 18100;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8220dce0
	ctx.lr = 0x8220E4CC;
	sub_8220DCE0(ctx, base);
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

PPC_WEAK_FUNC(sub_8220E3F8) {
	__imp__sub_8220E3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220E4E4) {
	__imp__sub_8220E4E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E4E8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r11,18544
	ctx.r30.s64 = ctx.r11.s64 + 18544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,18528
	ctx.r3.s64 = ctx.r10.s64 + 18528;
	// bl 0x8220dce0
	ctx.lr = 0x8220E51C;
	sub_8220DCE0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r9,18504
	ctx.r3.s64 = ctx.r9.s64 + 18504;
	// bl 0x8220dce0
	ctx.lr = 0x8220E530;
	sub_8220DCE0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r8,18480
	ctx.r3.s64 = ctx.r8.s64 + 18480;
	// bl 0x8220dce0
	ctx.lr = 0x8220E544;
	sub_8220DCE0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r7,18456
	ctx.r3.s64 = ctx.r7.s64 + 18456;
	// bl 0x8220dce0
	ctx.lr = 0x8220E558;
	sub_8220DCE0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r6,18432
	ctx.r3.s64 = ctx.r6.s64 + 18432;
	// bl 0x8220dce0
	ctx.lr = 0x8220E56C;
	sub_8220DCE0(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r3,18412
	ctx.r3.s64 = ctx.r3.s64 + 18412;
	// bl 0x8220dce0
	ctx.lr = 0x8220E580;
	sub_8220DCE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,18388
	ctx.r3.s64 = ctx.r11.s64 + 18388;
	// bl 0x8220dce0
	ctx.lr = 0x8220E594;
	sub_8220DCE0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,18372
	ctx.r3.s64 = ctx.r10.s64 + 18372;
	// bl 0x8220dce0
	ctx.lr = 0x8220E5A8;
	sub_8220DCE0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r9,18344
	ctx.r3.s64 = ctx.r9.s64 + 18344;
	// bl 0x8220dce0
	ctx.lr = 0x8220E5BC;
	sub_8220DCE0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r8,18328
	ctx.r3.s64 = ctx.r8.s64 + 18328;
	// bl 0x8220dce0
	ctx.lr = 0x8220E5D0;
	sub_8220DCE0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r7,18312
	ctx.r3.s64 = ctx.r7.s64 + 18312;
	// bl 0x8220dce0
	ctx.lr = 0x8220E5E4;
	sub_8220DCE0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r6,18296
	ctx.r3.s64 = ctx.r6.s64 + 18296;
	// bl 0x8220dce0
	ctx.lr = 0x8220E5F8;
	sub_8220DCE0(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r3,18276
	ctx.r3.s64 = ctx.r3.s64 + 18276;
	// bl 0x8220dce0
	ctx.lr = 0x8220E60C;
	sub_8220DCE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,18260
	ctx.r3.s64 = ctx.r11.s64 + 18260;
	// bl 0x8220dce0
	ctx.lr = 0x8220E620;
	sub_8220DCE0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,18240
	ctx.r3.s64 = ctx.r10.s64 + 18240;
	// bl 0x8220dce0
	ctx.lr = 0x8220E634;
	sub_8220DCE0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,18220
	ctx.r3.s64 = ctx.r9.s64 + 18220;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8220dce0
	ctx.lr = 0x8220E648;
	sub_8220DCE0(ctx, base);
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

PPC_WEAK_FUNC(sub_8220E4E8) {
	__imp__sub_8220E4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E660) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,18556
	ctx.r5.s64 = ctx.r11.s64 + 18556;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E68C;
	sub_822E8368(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,17888
	ctx.r4.s64 = ctx.r10.s64 + 17888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E6A0;
	sub_8220DBD8(ctx, base);
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

PPC_WEAK_FUNC(sub_8220E660) {
	__imp__sub_8220E660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220E6B4) {
	__imp__sub_8220E6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220E6C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220e780
	if (ctx.cr6.eq) goto loc_8220E780;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8220e780
	if (!ctx.cr6.eq) goto loc_8220E780;
	// lhz r3,14(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220e734
	if (!ctx.cr6.eq) goto loc_8220E734;
	// lfs f3,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,18592
	ctx.r4.s64 = ctx.r11.s64 + 18592;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280b08
	ctx.lr = 0x8220E724;
	sub_82280B08(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220E734:
	// bl 0x822a13a0
	ctx.lr = 0x8220E738;
	sub_822A13A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a8f98
	ctx.lr = 0x8220E748;
	sub_822A8F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e780
	if (ctx.cr6.eq) goto loc_8220E780;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,18564
	ctx.r5.s64 = ctx.r11.s64 + 18564;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8220E76C;
	sub_822E8368(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,17888
	ctx.r4.s64 = ctx.r10.s64 + 17888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E780;
	sub_8220DBD8(ctx, base);
loc_8220E780:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220E6B8) {
	__imp__sub_8220E6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E788) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a4e40
	ctx.lr = 0x8220E7A0;
	sub_822A4E40(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// bl 0x82234590
	ctx.lr = 0x8220E7B8;
	sub_82234590(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822aa500
	ctx.lr = 0x8220E7C0;
	sub_822AA500(ctx, base);
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

PPC_WEAK_FUNC(sub_8220E788) {
	__imp__sub_8220E788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220E7D4) {
	__imp__sub_8220E7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220E7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8220E7E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2960(r1)
	ea = -2960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r14,0
	ctx.r14.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// bl 0x821f9db8
	ctx.lr = 0x8220E7F8;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,18840
	ctx.r4.s64 = ctx.r11.s64 + 18840;
	// bl 0x822830e8
	ctx.lr = 0x8220E810;
	sub_822830E8(ctx, base);
loc_8220E810:
	// bl 0x822a4e40
	ctx.lr = 0x8220E814;
	sub_822A4E40(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821f9db8
	ctx.lr = 0x8220E820;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220ea7c
	if (ctx.cr6.eq) goto loc_8220EA7C;
	// lis r27,-32254
	ctx.r27.s64 = -2113798144;
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// lis r26,-32254
	ctx.r26.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r24,r27,17876
	ctx.r24.s64 = ctx.r27.s64 + 17876;
	// addi r21,r28,18776
	ctx.r21.s64 = ctx.r28.s64 + 18776;
	// addi r20,r29,18728
	ctx.r20.s64 = ctx.r29.s64 + 18728;
	// addi r23,r30,13136
	ctx.r23.s64 = ctx.r30.s64 + 13136;
	// addi r19,r31,18716
	ctx.r19.s64 = ctx.r31.s64 + 18716;
	// addi r26,r26,17896
	ctx.r26.s64 = ctx.r26.s64 + 17896;
	// addi r18,r3,18704
	ctx.r18.s64 = ctx.r3.s64 + 18704;
	// addi r30,r4,18696
	ctx.r30.s64 = ctx.r4.s64 + 18696;
	// addi r29,r5,18684
	ctx.r29.s64 = ctx.r5.s64 + 18684;
	// addi r31,r6,17888
	ctx.r31.s64 = ctx.r6.s64 + 17888;
	// addi r28,r7,18672
	ctx.r28.s64 = ctx.r7.s64 + 18672;
	// addi r17,r8,18660
	ctx.r17.s64 = ctx.r8.s64 + 18660;
	// addi r16,r9,18216
	ctx.r16.s64 = ctx.r9.s64 + 18216;
	// addi r22,r10,27164
	ctx.r22.s64 = ctx.r10.s64 + 27164;
	// addi r27,r11,-28736
	ctx.r27.s64 = ctx.r11.s64 + -28736;
loc_8220E8A0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821f9fd8
	ctx.lr = 0x8220E8B4;
	sub_821F9FD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea248
	ctx.lr = 0x8220E8BC;
	sub_822EA248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220e97c
	if (ctx.cr6.eq) goto loc_8220E97C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x822a8f98
	ctx.lr = 0x8220E8D8;
	sub_822A8F98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ea6c
	if (ctx.cr6.eq) goto loc_8220EA6C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8220e90c
	if (!ctx.cr6.eq) goto loc_8220E90C;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822e7fd0
	ctx.lr = 0x8220E8F8;
	sub_822E7FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e90c
	if (ctx.cr6.eq) goto loc_8220E90C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r14,1
	ctx.r14.s64 = 1;
	// bl 0x8220e3f8
	ctx.lr = 0x8220E90C;
	sub_8220E3F8(ctx, base);
loc_8220E90C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x8220e934
	if (!ctx.cr6.eq) goto loc_8220E934;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822e7fd0
	ctx.lr = 0x8220E920;
	sub_822E7FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e934
	if (ctx.cr6.eq) goto loc_8220E934;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// bl 0x8220e4e8
	ctx.lr = 0x8220E934;
	sub_8220E4E8(ctx, base);
loc_8220E934:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x8220E948;
	sub_822E8368(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E958;
	sub_8220DBD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E968;
	sub_8220DBD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8220dbd8
	ctx.lr = 0x8220E978;
	sub_8220DBD8(ctx, base);
	// b 0x8220ea6c
	goto loc_8220EA6C;
loc_8220E97C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea1c0
	ctx.lr = 0x8220E988;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220e9a4
	if (!ctx.cr6.eq) goto loc_8220E9A4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea1c0
	ctx.lr = 0x8220E99C;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220ea6c
	if (ctx.cr6.eq) goto loc_8220EA6C;
loc_8220E9A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821f9fd8
	ctx.lr = 0x8220E9B8;
	sub_821F9FD8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82232100
	ctx.lr = 0x8220E9C0;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220e9e0
	if (!ctx.cr6.eq) goto loc_8220E9E0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82280b08
	ctx.lr = 0x8220E9DC;
	sub_82280B08(ctx, base);
	// b 0x8220ea6c
	goto loc_8220EA6C;
loc_8220E9E0:
	// bl 0x82332af8
	ctx.lr = 0x8220E9E4;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220ea08
	if (ctx.cr6.eq) goto loc_8220EA08;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82280b08
	ctx.lr = 0x8220EA04;
	sub_82280B08(ctx, base);
	// b 0x8220ea6c
	goto loc_8220EA6C;
loc_8220EA08:
	// lwz r6,1420(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ea6c
	if (ctx.cr6.eq) goto loc_8220EA6C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e8368
	ctx.lr = 0x8220EA28;
	sub_822E8368(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8220dbd8
	ctx.lr = 0x8220EA38;
	sub_8220DBD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ea6c
	if (ctx.cr6.eq) goto loc_8220EA6C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8229cea0
	ctx.lr = 0x8220EA50;
	sub_8229CEA0(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r8.u32);
loc_8220EA6C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821f9db8
	ctx.lr = 0x8220EA74;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220e8a0
	if (!ctx.cr6.eq) goto loc_8220E8A0;
loc_8220EA7C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822aa500
	ctx.lr = 0x8220EA84;
	sub_822AA500(ctx, base);
	// bl 0x821f9bd0
	ctx.lr = 0x8220EA88;
	sub_821F9BD0(ctx, base);
	// addi r1,r1,2960
	ctx.r1.s64 = ctx.r1.s64 + 2960;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220E7D8) {
	__imp__sub_8220E7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220EA98;
	__savegprlr_27(ctx, base);
	// stwu r1,-2720(r1)
	ea = -2720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f9db8
	ctx.lr = 0x8220EAA4;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220eabc
	if (!ctx.cr6.eq) goto loc_8220EABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,18840
	ctx.r4.s64 = ctx.r11.s64 + 18840;
	// bl 0x822830e8
	ctx.lr = 0x8220EABC;
	sub_822830E8(ctx, base);
loc_8220EABC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f9db8
	ctx.lr = 0x8220EAC4;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220eb5c
	if (ctx.cr6.eq) goto loc_8220EB5C;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r7,13136
	ctx.r28.s64 = ctx.r7.s64 + 13136;
	// addi r27,r8,18716
	ctx.r27.s64 = ctx.r8.s64 + 18716;
	// addi r30,r9,18704
	ctx.r30.s64 = ctx.r9.s64 + 18704;
	// addi r29,r10,27164
	ctx.r29.s64 = ctx.r10.s64 + 27164;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_8220EAF4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f9fd8
	ctx.lr = 0x8220EB08;
	sub_821F9FD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea1c0
	ctx.lr = 0x8220EB14;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220eb30
	if (!ctx.cr6.eq) goto loc_8220EB30;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea1c0
	ctx.lr = 0x8220EB28;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220eb4c
	if (ctx.cr6.eq) goto loc_8220EB4C;
loc_8220EB30:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f9fd8
	ctx.lr = 0x8220EB44;
	sub_821F9FD8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82232100
	ctx.lr = 0x8220EB4C;
	sub_82232100(ctx, base);
loc_8220EB4C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f9db8
	ctx.lr = 0x8220EB54;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220eaf4
	if (!ctx.cr6.eq) goto loc_8220EAF4;
loc_8220EB5C:
	// bl 0x821f9bd0
	ctx.lr = 0x8220EB60;
	sub_821F9BD0(ctx, base);
	// addi r1,r1,2720
	ctx.r1.s64 = ctx.r1.s64 + 2720;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220EA90) {
	__imp__sub_8220EA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8220EB70;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8229d6e8
	ctx.lr = 0x8220EB80;
	sub_8229D6E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r29,r11,17888
	ctx.r29.s64 = ctx.r11.s64 + 17888;
	// addi r3,r10,18940
	ctx.r3.s64 = ctx.r10.s64 + 18940;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8220dbd8
	ctx.lr = 0x8220EB9C;
	sub_8220DBD8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r9,18920
	ctx.r28.s64 = ctx.r9.s64 + 18920;
	// addi r4,r8,18908
	ctx.r4.s64 = ctx.r8.s64 + 18908;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8220dbd8
	ctx.lr = 0x8220EBB8;
	sub_8220DBD8(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r7,18892
	ctx.r4.s64 = ctx.r7.s64 + 18892;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8220dbd8
	ctx.lr = 0x8220EBCC;
	sub_8220DBD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220dd90
	ctx.lr = 0x8220EBD4;
	sub_8220DD90(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r5,18556
	ctx.r5.s64 = ctx.r5.s64 + 18556;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x8220EBEC;
	sub_822E8368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8220dbd8
	ctx.lr = 0x8220EBFC;
	sub_8220DBD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220e7d8
	ctx.lr = 0x8220EC04;
	sub_8220E7D8(ctx, base);
	// bl 0x822a4e40
	ctx.lr = 0x8220EC08;
	sub_822A4E40(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r3,-32223
	ctx.r3.s64 = -2111766528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-6472
	ctx.r3.s64 = ctx.r3.s64 + -6472;
	// bl 0x82234590
	ctx.lr = 0x8220EC20;
	sub_82234590(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822aa500
	ctx.lr = 0x8220EC28;
	sub_822AA500(ctx, base);
	// bl 0x8229d458
	ctx.lr = 0x8220EC2C;
	sub_8229D458(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220EB68) {
	__imp__sub_8220EB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220EC34) {
	__imp__sub_8220EC34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EC38) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822a2088
	sub_822A2088(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220EC38) {
	__imp__sub_8220EC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EC40) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r3,6688(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6688);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220ec68
	if (ctx.cr6.eq) goto loc_8220EC68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b1880
	ctx.lr = 0x8220EC64;
	sub_822B1880(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x8220EC68;
	sub_822AC730(ctx, base);
loc_8220EC68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220EC40) {
	__imp__sub_8220EC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EC78) {
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
loc_8220EC8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3e38
	ctx.lr = 0x8220EC94;
	sub_822A3E38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x8220ec8c
	if (ctx.cr6.lt) goto loc_8220EC8C;
	// bl 0x82229a98
	ctx.lr = 0x8220ECA4;
	sub_82229A98(ctx, base);
	// bl 0x821f56b8
	ctx.lr = 0x8220ECA8;
	sub_821F56B8(ctx, base);
	// bl 0x822345e8
	ctx.lr = 0x8220ECAC;
	sub_822345E8(ctx, base);
	// bl 0x82358540
	ctx.lr = 0x8220ECB0;
	sub_82358540(ctx, base);
	// bl 0x82353e50
	ctx.lr = 0x8220ECB4;
	sub_82353E50(ctx, base);
	// bl 0x82229af8
	ctx.lr = 0x8220ECB8;
	sub_82229AF8(ctx, base);
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

PPC_WEAK_FUNC(sub_8220EC78) {
	__imp__sub_8220EC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220ECCC) {
	__imp__sub_8220ECCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220ECD0) {
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
loc_8220ECE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9c60
	ctx.lr = 0x8220ECEC;
	sub_822A9C60(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x8220ece4
	if (ctx.cr6.lt) goto loc_8220ECE4;
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

PPC_WEAK_FUNC(sub_8220ECD0) {
	__imp__sub_8220ECD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220ED0C) {
	__imp__sub_8220ED0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220ED10) {
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
	// bne cr6,0x8220ed50
	if (!ctx.cr6.eq) goto loc_8220ED50;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
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
loc_8220ED50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8220ED5C;
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

PPC_WEAK_FUNC(sub_8220ED10) {
	__imp__sub_8220ED10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220ED70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220ED78;
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
	// lhz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x8220eda8
	if (!ctx.cr6.eq) goto loc_8220EDA8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8220edb8
	goto loc_8220EDB8;
loc_8220EDA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8220EDB4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220EDB8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ee2c
	if (!ctx.cr6.eq) goto loc_8220EE2C;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220eddc
	if (ctx.cr6.eq) goto loc_8220EDDC;
	// bl 0x822a13a0
	ctx.lr = 0x8220EDD4;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8220ede4
	goto loc_8220EDE4;
loc_8220EDDC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-32360
	ctx.r30.s64 = ctx.r11.s64 + -32360;
loc_8220EDE4:
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8220EDEC;
	sub_822A13A0(ctx, base);
	// lfs f3,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f1,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220EE28;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220EE2C;
	sub_822AD350(ctx, base);
loc_8220EE2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220ED70) {
	__imp__sub_8220ED70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ee54
	if (ctx.cr6.eq) goto loc_8220EE54;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// blr 
	return;
loc_8220EE54:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220EE38) {
	__imp__sub_8220EE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220EE64) {
	__imp__sub_8220EE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ee84
	if (ctx.cr6.eq) goto loc_8220EE84;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// blr 
	return;
loc_8220EE84:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220EE68) {
	__imp__sub_8220EE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220EE94) {
	__imp__sub_8220EE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EE98) {
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
	ctx.lr = 0x8220EEA8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8220eebc
	if (ctx.cr6.eq) goto loc_8220EEBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26260
	ctx.r3.s64 = ctx.r11.s64 + 26260;
	// bl 0x822ad350
	ctx.lr = 0x8220EEBC;
	sub_822AD350(ctx, base);
loc_8220EEBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220EEC4;
	sub_822B2288(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82138720
	ctx.lr = 0x8220EECC;
	sub_82138720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220eee4
	if (!ctx.cr6.eq) goto loc_8220EEE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26192
	ctx.r3.s64 = ctx.r11.s64 + 26192;
	// bl 0x822ad350
	ctx.lr = 0x8220EEE4;
	sub_822AD350(ctx, base);
loc_8220EEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220EE98) {
	__imp__sub_8220EE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220EEF4) {
	__imp__sub_8220EEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220EEF8) {
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
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822acb68
	ctx.lr = 0x8220EF18;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8220ef30
	if (ctx.cr6.eq) goto loc_8220EF30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// bl 0x822ad350
	ctx.lr = 0x8220EF2C;
	sub_822AD350(ctx, base);
	// b 0x8220effc
	goto loc_8220EFFC;
loc_8220EF30:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// lwz r30,16320(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16320);
	// bl 0x822b28d0
	ctx.lr = 0x8220EF44;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8220ef94
	if (ctx.cr6.eq) goto loc_8220EF94;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8220ef68
	if (ctx.cr6.eq) goto loc_8220EF68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,26360
	ctx.r4.s64 = ctx.r11.s64 + 26360;
	// bl 0x822ad4e0
	ctx.lr = 0x8220EF64;
	sub_822AD4E0(ctx, base);
	// b 0x8220effc
	goto loc_8220EFFC;
loc_8220EF68:
	// bl 0x822b1c50
	ctx.lr = 0x8220EF6C;
	sub_822B1C50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x82138958
	ctx.lr = 0x8220EF74;
	sub_82138958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220efc4
	if (!ctx.cr6.eq) goto loc_8220EFC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,26360
	ctx.r4.s64 = ctx.r11.s64 + 26360;
	// bl 0x822ad4e0
	ctx.lr = 0x8220EF90;
	sub_822AD4E0(ctx, base);
	// b 0x8220effc
	goto loc_8220EFFC;
loc_8220EF94:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220EF9C;
	sub_822B2288(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821388d0
	ctx.lr = 0x8220EFA4;
	sub_821388D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220efc4
	if (!ctx.cr6.eq) goto loc_8220EFC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,26360
	ctx.r4.s64 = ctx.r11.s64 + 26360;
	// bl 0x822ad4e0
	ctx.lr = 0x8220EFC0;
	sub_822AD4E0(ctx, base);
	// b 0x8220effc
	goto loc_8220EFFC;
loc_8220EFC4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82138890
	ctx.lr = 0x8220EFCC;
	sub_82138890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220efec
	if (!ctx.cr6.eq) goto loc_8220EFEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,26300
	ctx.r4.s64 = ctx.r11.s64 + 26300;
	// bl 0x822ad4e0
	ctx.lr = 0x8220EFE8;
	sub_822AD4E0(ctx, base);
	// b 0x8220effc
	goto loc_8220EFFC;
loc_8220EFEC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16320, ctx.r11.u32);
	// bl 0x822acbf8
	ctx.lr = 0x8220EFFC;
	sub_822ACBF8(ctx, base);
loc_8220EFFC:
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

PPC_WEAK_FUNC(sub_8220EEF8) {
	__imp__sub_8220EEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F014) {
	__imp__sub_8220F014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8220F020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f084
	if (!ctx.cr6.eq) goto loc_8220F084;
	// bl 0x822acb68
	ctx.lr = 0x8220F03C;
	sub_822ACB68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8220f084
	if (!ctx.cr6.gt) goto loc_8220F084;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r10,9624
	ctx.r30.s64 = ctx.r10.s64 + 9624;
	// addi r29,r11,-29844
	ctx.r29.s64 = ctx.r11.s64 + -29844;
loc_8220F05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2310
	ctx.lr = 0x8220F064;
	sub_822B2310(ctx, base);
	// lwz r11,16320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16320);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82280900
	ctx.lr = 0x8220F078;
	sub_82280900(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8220f05c
	if (ctx.cr6.lt) goto loc_8220F05C;
loc_8220F084:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220F018) {
	__imp__sub_8220F018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F08C) {
	__imp__sub_8220F08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F090) {
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
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f0cc
	if (!ctx.cr6.eq) goto loc_8220F0CC;
	// bl 0x8220f018
	ctx.lr = 0x8220F0B4;
	sub_8220F018(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// addi r4,r10,-27364
	ctx.r4.s64 = ctx.r10.s64 + -27364;
	// lwz r3,16320(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16320);
	// bl 0x82280900
	ctx.lr = 0x8220F0CC;
	sub_82280900(ctx, base);
loc_8220F0CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F090) {
	__imp__sub_8220F090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F0DC) {
	__imp__sub_8220F0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F0E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x822830e8
	sub_822830E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220F0E0) {
	__imp__sub_8220F0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8220F0F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8220f160
	if (!ctx.cr6.gt) goto loc_8220F160;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8220f160
	if (!ctx.cr6.gt) goto loc_8220F160;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,26424
	ctx.r29.s64 = ctx.r11.s64 + 26424;
loc_8220F11C:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa00
	ctx.lr = 0x8220F128;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f154
	if (!ctx.cr6.eq) goto loc_8220F154;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x8220f154
	if (ctx.cr6.eq) goto loc_8220F154;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220F148;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x8220F154;
	sub_822AD4E0(ctx, base);
loc_8220F154:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8220f11c
	if (ctx.cr6.lt) goto loc_8220F11C;
loc_8220F160:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220F0E8) {
	__imp__sub_8220F0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F168) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f1cc
	if (!ctx.cr6.eq) goto loc_8220F1CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x8220F190;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f1ac
	if (!ctx.cr6.eq) goto loc_8220F1AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,26620
	ctx.r3.s64 = ctx.r11.s64 + 26620;
	// bl 0x822e84f0
	ctx.lr = 0x8220F1A8;
	sub_822E84F0(ctx, base);
	// b 0x8220f1c0
	goto loc_8220F1C0;
loc_8220F1AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,26528
	ctx.r3.s64 = ctx.r11.s64 + 26528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220F1C0;
	sub_822E84F0(ctx, base);
loc_8220F1C0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8220F1CC;
	sub_822AD4E0(ctx, base);
loc_8220F1CC:
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

PPC_WEAK_FUNC(sub_8220F168) {
	__imp__sub_8220F168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F1E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x8220F21C;
	sub_822ACB68(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8220f2bc
	if (ctx.cr6.gt) goto loc_8220F2BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220f288
	if (ctx.cr6.eq) goto loc_8220F288;
	// bdz 0x8220f264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220F264;
	// bdz 0x8220f258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220F258;
	// bdz 0x8220f24c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220F24C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b1c50
	ctx.lr = 0x8220F248;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220F24C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x8220F254;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8220F258:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220F260;
	sub_822B1FB0(ctx, base);
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_8220F264:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x8220F270;
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
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8220F288:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F290;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8220F2A0;
	sub_822B2498(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fe7e8
	ctx.lr = 0x8220F2B8;
	sub_821FE7E8(ctx, base);
	// b 0x8220f2c8
	goto loc_8220F2C8;
loc_8220F2BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26652
	ctx.r3.s64 = ctx.r11.s64 + 26652;
	// bl 0x822ad350
	ctx.lr = 0x8220F2C8;
	sub_822AD350(ctx, base);
loc_8220F2C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_8220F1E0) {
	__imp__sub_8220F1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F2E4) {
	__imp__sub_8220F2E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F2E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x8220F320;
	sub_822ACB68(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8220f3a8
	if (ctx.cr6.gt) goto loc_8220F3A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220f38c
	if (ctx.cr6.eq) goto loc_8220F38C;
	// bdz 0x8220f368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220F368;
	// bdz 0x8220f35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220F35C;
	// bdz 0x8220f350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220F350;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b1c50
	ctx.lr = 0x8220F34C;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8220F350:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1c50
	ctx.lr = 0x8220F358;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220F35C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8220F364;
	sub_822B1FB0(ctx, base);
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_8220F368:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x8220F374;
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
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8220F38C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8220F398;
	sub_822B2498(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8220F3A4;
	sub_822B2498(ctx, base);
	// b 0x8220f3b4
	goto loc_8220F3B4;
loc_8220F3A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// bl 0x822ad350
	ctx.lr = 0x8220F3B4;
	sub_822AD350(ctx, base);
loc_8220F3B4:
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82127ea8
	ctx.lr = 0x8220F3D0;
	sub_82127EA8(ctx, base);
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

PPC_WEAK_FUNC(sub_8220F2E8) {
	__imp__sub_8220F2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F3E8) {
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
	// bl 0x822b1c50
	ctx.lr = 0x8220F3FC;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f410
	if (!ctx.cr6.eq) goto loc_8220F410;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26704
	ctx.r3.s64 = ctx.r11.s64 + 26704;
	// bl 0x822ad350
	ctx.lr = 0x8220F410;
	sub_822AD350(ctx, base);
loc_8220F410:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F3E8) {
	__imp__sub_8220F3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F420) {
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
	// bl 0x822b1c50
	ctx.lr = 0x8220F434;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f458
	if (!ctx.cr6.eq) goto loc_8220F458;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F444;
	sub_822B2288(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26716
	ctx.r3.s64 = ctx.r11.s64 + 26716;
	// bl 0x822e84f0
	ctx.lr = 0x8220F454;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220F458;
	sub_822AD350(ctx, base);
loc_8220F458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F420) {
	__imp__sub_8220F420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F468) {
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
	ctx.lr = 0x8220F47C;
	sub_822B2288(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26716
	ctx.r3.s64 = ctx.r11.s64 + 26716;
	// bl 0x822e84f0
	ctx.lr = 0x8220F48C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220F490;
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

PPC_WEAK_FUNC(sub_8220F468) {
	__imp__sub_8220F468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F4A0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8220F4B4;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220f4f0
	if (!ctx.cr6.eq) goto loc_8220F4F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x8220F4C4;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bge cr6,0x8220f4d8
	if (!ctx.cr6.lt) goto loc_8220F4D8;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8220f4f8
	if (!ctx.cr6.eq) goto loc_8220F4F8;
loc_8220F4D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x8220F4E0;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220F4F0:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8220F4F8:
	// bl 0x822acbf8
	ctx.lr = 0x8220F4FC;
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

PPC_WEAK_FUNC(sub_8220F4A0) {
	__imp__sub_8220F4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F50C) {
	__imp__sub_8220F50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F510) {
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
	ctx.lr = 0x8220F524;
	sub_822B28D0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822acbf8
	ctx.lr = 0x8220F534;
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

PPC_WEAK_FUNC(sub_8220F510) {
	__imp__sub_8220F510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F544) {
	__imp__sub_8220F544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F548) {
	PPC_FUNC_PROLOGUE();
	// addic. r8,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r8.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ble 0x8220f594
	if (!ctx.cr0.gt) goto loc_8220F594;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r6,39
	ctx.r6.s64 = 39;
loc_8220F564:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f594
	if (ctx.cr6.eq) goto loc_8220F594;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r4,34
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 34, ctx.xer);
	// bne cr6,0x8220f584
	if (!ctx.cr6.eq) goto loc_8220F584;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_8220F584:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8220f564
	if (ctx.cr6.lt) goto loc_8220F564;
loc_8220F594:
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F548) {
	__imp__sub_8220F548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F59C) {
	__imp__sub_8220F59C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F5A0) {
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
	// bl 0x822e0220
	ctx.lr = 0x8220F5C0;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f624
	if (ctx.cr6.eq) goto loc_8220F624;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f624
	if (!ctx.cr6.eq) goto loc_8220F624;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f5f8
	if (!ctx.cr6.eq) goto loc_8220F5F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,26864
	ctx.r3.s64 = ctx.r11.s64 + 26864;
	// bl 0x822e84f0
	ctx.lr = 0x8220F5F4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220F5F8;
	sub_822AD350(ctx, base);
loc_8220F5F8:
	// bl 0x822807d8
	ctx.lr = 0x8220F5FC;
	sub_822807D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f624
	if (!ctx.cr6.eq) goto loc_8220F624;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,26852
	ctx.r5.s64 = ctx.r11.s64 + 26852;
	// addi r3,r10,26736
	ctx.r3.s64 = ctx.r10.s64 + 26736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220F620;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220F624;
	sub_822AD350(ctx, base);
loc_8220F624:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e2688
	ctx.lr = 0x8220F634;
	sub_822E2688(ctx, base);
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

PPC_WEAK_FUNC(sub_8220F5A0) {
	__imp__sub_8220F5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F64C) {
	__imp__sub_8220F64C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220F668;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de3b0
	ctx.lr = 0x8220F670;
	sub_822DE3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f690
	if (!ctx.cr6.eq) goto loc_8220F690;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x822e84f0
	ctx.lr = 0x8220F68C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220F690;
	sub_822AD350(ctx, base);
loc_8220F690:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x8220F698;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8220f6c8
	if (!ctx.cr6.eq) goto loc_8220F6C8;
	// bl 0x822acb68
	ctx.lr = 0x8220F6A4;
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
	ctx.lr = 0x8220F6C0;
	sub_8221EE40(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// b 0x8220f6d0
	goto loc_8220F6D0;
loc_8220F6C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F6D0;
	sub_822B2288(ctx, base);
loc_8220F6D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// li r7,39
	ctx.r7.s64 = 39;
loc_8220F6E4:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f714
	if (ctx.cr6.eq) goto loc_8220F714;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r6,34
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 34, ctx.xer);
	// bne cr6,0x8220f704
	if (!ctx.cr6.eq) goto loc_8220F704;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_8220F704:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,1023
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1023, ctx.xer);
	// blt cr6,0x8220f6e4
	if (ctx.cr6.lt) goto loc_8220F6E4;
loc_8220F714:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f5a0
	ctx.lr = 0x8220F728;
	sub_8220F5A0(ctx, base);
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F650) {
	__imp__sub_8220F650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F73C) {
	__imp__sub_8220F73C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220F758;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de3b0
	ctx.lr = 0x8220F760;
	sub_822DE3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f780
	if (!ctx.cr6.eq) goto loc_8220F780;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x822e84f0
	ctx.lr = 0x8220F77C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220F780;
	sub_822AD350(ctx, base);
loc_8220F780:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x8220F788;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8220f7b8
	if (!ctx.cr6.eq) goto loc_8220F7B8;
	// bl 0x822acb68
	ctx.lr = 0x8220F794;
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
	ctx.lr = 0x8220F7B0;
	sub_8221EE40(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// b 0x8220f7c0
	goto loc_8220F7C0;
loc_8220F7B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F7C0;
	sub_822B2288(ctx, base);
loc_8220F7C0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// li r7,39
	ctx.r7.s64 = 39;
loc_8220F7D4:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f804
	if (ctx.cr6.eq) goto loc_8220F804;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r6,34
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 34, ctx.xer);
	// bne cr6,0x8220f7f4
	if (!ctx.cr6.eq) goto loc_8220F7F4;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_8220F7F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,1023
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1023, ctx.xer);
	// blt cr6,0x8220f7d4
	if (ctx.cr6.lt) goto loc_8220F7D4;
loc_8220F804:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f5a0
	ctx.lr = 0x8220F818;
	sub_8220F5A0(ctx, base);
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F740) {
	__imp__sub_8220F740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F82C) {
	__imp__sub_8220F82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F830) {
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
	ctx.lr = 0x8220F844;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8220f858
	if (ctx.cr6.eq) goto loc_8220F858;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27000
	ctx.r3.s64 = ctx.r11.s64 + 27000;
	// bl 0x822ad350
	ctx.lr = 0x8220F858;
	sub_822AD350(ctx, base);
loc_8220F858:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220F860;
	sub_822B2288(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,15488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15488, ctx.r3.u32);
	// bl 0x822e0220
	ctx.lr = 0x8220F870;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220f884
	if (!ctx.cr6.eq) goto loc_8220F884;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// b 0x8220f890
	goto loc_8220F890;
loc_8220F884:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x8220F890;
	sub_822DE8D8(ctx, base);
loc_8220F890:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f8b0
	if (!ctx.cr6.eq) goto loc_8220F8B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F8A4;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f5a0
	ctx.lr = 0x8220F8B0;
	sub_8220F5A0(ctx, base);
loc_8220F8B0:
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

PPC_WEAK_FUNC(sub_8220F830) {
	__imp__sub_8220F830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F8C4) {
	__imp__sub_8220F8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F8C8) {
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
	ctx.lr = 0x8220F8DC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8220f8f0
	if (ctx.cr6.eq) goto loc_8220F8F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// bl 0x822ad350
	ctx.lr = 0x8220F8F0;
	sub_822AD350(ctx, base);
loc_8220F8F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220F8F8;
	sub_822B2288(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,15488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15488, ctx.r3.u32);
	// bl 0x822e0220
	ctx.lr = 0x8220F908;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220f91c
	if (!ctx.cr6.eq) goto loc_8220F91C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// b 0x8220f928
	goto loc_8220F928;
loc_8220F91C:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x8220F928;
	sub_822DE8D8(ctx, base);
loc_8220F928:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f948
	if (!ctx.cr6.eq) goto loc_8220F948;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F93C;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f5a0
	ctx.lr = 0x8220F948;
	sub_8220F5A0(ctx, base);
loc_8220F948:
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

PPC_WEAK_FUNC(sub_8220F8C8) {
	__imp__sub_8220F8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F95C) {
	__imp__sub_8220F95C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r3,29088(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220F960) {
	__imp__sub_8220F960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220F96C) {
	__imp__sub_8220F96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220F970) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// bl 0x822acb68
	ctx.lr = 0x8220F98C;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8220f9c8
	if (ctx.cr6.eq) goto loc_8220F9C8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8220f9bc
	if (ctx.cr6.eq) goto loc_8220F9BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// bl 0x822ad350
	ctx.lr = 0x8220F9A8;
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
loc_8220F9BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220F9C4;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220F9C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220F9D0;
	sub_822B2288(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r9,29088(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// stw r3,15488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15488, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220f9f4
	if (ctx.cr6.eq) goto loc_8220F9F4;
	// bl 0x8233dc20
	ctx.lr = 0x8220F9F0;
	sub_8233DC20(ctx, base);
	// b 0x8220f9f8
	goto loc_8220F9F8;
loc_8220F9F4:
	// bl 0x822e05c8
	ctx.lr = 0x8220F9F8;
	sub_822E05C8(ctx, base);
loc_8220F9F8:
	// bl 0x822aced0
	ctx.lr = 0x8220F9FC;
	sub_822ACED0(ctx, base);
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

PPC_WEAK_FUNC(sub_8220F970) {
	__imp__sub_8220F970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FA10) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// bl 0x822acb68
	ctx.lr = 0x8220FA2C;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8220fa68
	if (ctx.cr6.eq) goto loc_8220FA68;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8220fa5c
	if (ctx.cr6.eq) goto loc_8220FA5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// bl 0x822ad350
	ctx.lr = 0x8220FA48;
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
loc_8220FA5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220FA64;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220FA68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220FA70;
	sub_822B2288(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r9,29088(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// stw r3,15488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15488, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220fa94
	if (ctx.cr6.eq) goto loc_8220FA94;
	// bl 0x8233dc20
	ctx.lr = 0x8220FA90;
	sub_8233DC20(ctx, base);
	// b 0x8220fa98
	goto loc_8220FA98;
loc_8220FA94:
	// bl 0x822e05c8
	ctx.lr = 0x8220FA98;
	sub_822E05C8(ctx, base);
loc_8220FA98:
	// bl 0x823deaf8
	ctx.lr = 0x8220FA9C;
	sub_823DEAF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x8220FAA0;
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

PPC_WEAK_FUNC(sub_8220FA10) {
	__imp__sub_8220FA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220FAB4) {
	__imp__sub_8220FAB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FAB8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// bl 0x822acb68
	ctx.lr = 0x8220FAD4;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8220fb10
	if (ctx.cr6.eq) goto loc_8220FB10;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8220fb04
	if (ctx.cr6.eq) goto loc_8220FB04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// bl 0x822ad350
	ctx.lr = 0x8220FAF0;
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
loc_8220FB04:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220FB0C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220FB10:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220FB18;
	sub_822B2288(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r9,29088(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// stw r3,15488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15488, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220fb3c
	if (ctx.cr6.eq) goto loc_8220FB3C;
	// bl 0x8233dc20
	ctx.lr = 0x8220FB38;
	sub_8233DC20(ctx, base);
	// b 0x8220fb40
	goto loc_8220FB40;
loc_8220FB3C:
	// bl 0x822e05c8
	ctx.lr = 0x8220FB40;
	sub_822E05C8(ctx, base);
loc_8220FB40:
	// bl 0x823dec00
	ctx.lr = 0x8220FB44;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x8220FB4C;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_8220FAB8) {
	__imp__sub_8220FAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8220FB68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,27376
	ctx.r4.s64 = ctx.r11.s64 + 27376;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823deeb8
	ctx.lr = 0x8220FB94;
	sub_823DEEB8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8220fba8
	if (!ctx.cr6.eq) goto loc_8220FBA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8220FBA8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-27936
	ctx.r4.s64 = ctx.r11.s64 + -27936;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deeb8
	ctx.lr = 0x8220FBC4;
	sub_823DEEB8(ctx, base);
	// addi r10,r3,-3
	ctx.r10.s64 = ctx.r3.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220FB60) {
	__imp__sub_8220FB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FBD8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,27448
	ctx.r30.s64 = ctx.r11.s64 + 27448;
	// bl 0x822acb68
	ctx.lr = 0x8220FBF8;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8220fc24
	if (ctx.cr6.eq) goto loc_8220FC24;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8220fc18
	if (ctx.cr6.eq) goto loc_8220FC18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// bl 0x822ad350
	ctx.lr = 0x8220FC14;
	sub_822AD350(ctx, base);
	// b 0x8220fc90
	goto loc_8220FC90;
loc_8220FC18:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8220FC20;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8220FC24:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220FC2C;
	sub_822B2288(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r9,29088(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// stw r3,15488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15488, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220fc54
	if (ctx.cr6.eq) goto loc_8220FC54;
	// bl 0x8233dc20
	ctx.lr = 0x8220FC50;
	sub_8233DC20(ctx, base);
	// b 0x8220fc58
	goto loc_8220FC58;
loc_8220FC54:
	// bl 0x822e05c8
	ctx.lr = 0x8220FC58;
	sub_822E05C8(ctx, base);
loc_8220FC58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220fb60
	ctx.lr = 0x8220FC64;
	sub_8220FB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220fc88
	if (!ctx.cr6.eq) goto loc_8220FC88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8220FC84;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8220FC88;
	sub_822AD350(ctx, base);
loc_8220FC88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8220FC90;
	sub_822AD078(ctx, base);
loc_8220FC90:
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

PPC_WEAK_FUNC(sub_8220FBD8) {
	__imp__sub_8220FBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x822acbf8
	sub_822ACBF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220FCA8) {
	__imp__sub_8220FCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FCB8) {
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
	// bl 0x822b1c50
	ctx.lr = 0x8220FCCC;
	sub_822B1C50(ctx, base);
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// bge cr6,0x8220fcf4
	if (!ctx.cr6.lt) goto loc_8220FCF4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r3,624
	ctx.r11.s64 = ctx.r3.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220fcf4
	if (ctx.cr6.eq) goto loc_8220FCF4;
	// bl 0x82229b60
	ctx.lr = 0x8220FCF4;
	sub_82229B60(ctx, base);
loc_8220FCF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220FCB8) {
	__imp__sub_8220FCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220FD04) {
	__imp__sub_8220FD04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8220FD10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8220FD1C;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x8220FD24;
	sub_82232100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220fd88
	if (!ctx.cr6.eq) goto loc_8220FD88;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fd74
	if (ctx.cr6.eq) goto loc_8220FD74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x8220FD50;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fd74
	if (ctx.cr6.eq) goto loc_8220FD74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,27524
	ctx.r3.s64 = ctx.r11.s64 + 27524;
	// bl 0x822e84f0
	ctx.lr = 0x8220FD68;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8220FD74;
	sub_82280900(ctx, base);
loc_8220FD74:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x822aced0
	ctx.lr = 0x8220FD80;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220FD88:
	// bl 0x822acb68
	ctx.lr = 0x8220FD8C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8220fdd0
	if (!ctx.cr6.eq) goto loc_8220FDD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8220FD9C;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8220fdcc
	if (ctx.cr6.lt) goto loc_8220FDCC;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x8220fdcc
	if (ctx.cr6.gt) goto loc_8220FDCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8220FDB8;
	sub_82332AF8(ctx, base);
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220fdd0
	if (!ctx.cr6.eq) goto loc_8220FDD0;
loc_8220FDCC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220FDD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8220FDD8;
	sub_82332AF8(ctx, base);
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fdfc
	if (ctx.cr6.eq) goto loc_8220FDFC;
	// bl 0x82300a60
	ctx.lr = 0x8220FDF0;
	sub_82300A60(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x8220FDF4;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8220FDFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,27464
	ctx.r3.s64 = ctx.r11.s64 + 27464;
	// bl 0x822e84f0
	ctx.lr = 0x8220FE0C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8220FE18;
	sub_82280900(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r3,r10,-28736
	ctx.r3.s64 = ctx.r10.s64 + -28736;
	// bl 0x822aced0
	ctx.lr = 0x8220FE24;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8220FD08) {
	__imp__sub_8220FD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220FE2C) {
	__imp__sub_8220FE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FE30) {
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
	ctx.lr = 0x8220FE4C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x8220FE54;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220fea0
	if (!ctx.cr6.eq) goto loc_8220FEA0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fed4
	if (ctx.cr6.eq) goto loc_8220FED4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x8220FE78;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fed4
	if (ctx.cr6.eq) goto loc_8220FED4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,27564
	ctx.r3.s64 = ctx.r11.s64 + 27564;
	// bl 0x822e84f0
	ctx.lr = 0x8220FE90;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8220FE9C;
	sub_82280900(ctx, base);
	// b 0x8220fed4
	goto loc_8220FED4;
loc_8220FEA0:
	// bl 0x82332b10
	ctx.lr = 0x8220FEA4;
	sub_82332B10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x8220FEAC;
	sub_822AD190(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220FEB0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fed4
	if (ctx.cr6.eq) goto loc_8220FED4;
	// bl 0x822acff0
	ctx.lr = 0x8220FEC4;
	sub_822ACFF0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8220FEC8;
	sub_822AD208(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x8220feb0
	if (ctx.cr6.lt) goto loc_8220FEB0;
loc_8220FED4:
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

PPC_WEAK_FUNC(sub_8220FE30) {
	__imp__sub_8220FE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220FEEC) {
	__imp__sub_8220FEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FEF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220FF10;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x8220FF1C;
	sub_82293548(ctx, base);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f5528
	ctx.lr = 0x8220FF2C;
	sub_822F5528(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220ff48
	if (!ctx.cr6.eq) goto loc_8220FF48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,27608
	ctx.r4.s64 = ctx.r11.s64 + 27608;
	// bl 0x822ad4e0
	ctx.lr = 0x8220FF48;
	sub_822AD4E0(ctx, base);
loc_8220FF48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f3f10
	ctx.lr = 0x8220FF54;
	sub_822F3F10(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x8220FF58;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_8220FEF0) {
	__imp__sub_8220FEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FF70) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220FF8C;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x8220FF98;
	sub_822B20B8(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82293548
	ctx.lr = 0x8220FFA8;
	sub_82293548(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f5688
	ctx.lr = 0x8220FFB4;
	sub_822F5688(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x8220FFBC;
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

PPC_WEAK_FUNC(sub_8220FF70) {
	__imp__sub_8220FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220FFD0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x8220FFEC;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x8220FFF8;
	sub_822B20B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x82210000;
	sub_822AD190(ctx, base);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x82210008;
	sub_82293548(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f56e0
	ctx.lr = 0x82210014;
	sub_822F56E0(ctx, base);
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

PPC_WEAK_FUNC(sub_8220FFD0) {
	__imp__sub_8220FFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210028) {
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
	// bne cr6,0x82210064
	if (!ctx.cr6.eq) goto loc_82210064;
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
	// b 0x82210074
	goto loc_82210074;
loc_82210064:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210070;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210074:
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822100ac
	if (ctx.cr6.eq) goto loc_822100AC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82229bf0
	ctx.lr = 0x8221008C;
	sub_82229BF0(ctx, base);
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822100b4
	if (ctx.cr6.eq) goto loc_822100B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27660
	ctx.r3.s64 = ctx.r11.s64 + 27660;
	// bl 0x822ad350
	ctx.lr = 0x822100A8;
	sub_822AD350(ctx, base);
	// b 0x822100b4
	goto loc_822100B4;
loc_822100AC:
	// bl 0x82229bf0
	ctx.lr = 0x822100B0;
	sub_82229BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822100B4:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f4,f5,f0,f13
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f3,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsel f1,f2,f4,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f4.f64 : ctx.f3.f64;
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x82210124;
	sub_8233CBF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82210128;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_82210028) {
	__imp__sub_82210028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210140) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82210154;
	sub_822B2288(ctx, base);
	// bl 0x822dd8d8
	ctx.lr = 0x82210158;
	sub_822DD8D8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822acb78
	ctx.lr = 0x82210164;
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

PPC_WEAK_FUNC(sub_82210140) {
	__imp__sub_82210140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82210174) {
	__imp__sub_82210174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210178) {
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
	// bne cr6,0x822101b0
	if (!ctx.cr6.eq) goto loc_822101B0;
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
	// b 0x822101c0
	goto loc_822101C0;
loc_822101B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822101BC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822101C0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822101e0
	if (ctx.cr6.lt) goto loc_822101E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,27720
	ctx.r3.s64 = ctx.r11.s64 + 27720;
	// bl 0x822e84f0
	ctx.lr = 0x822101DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822101E0;
	sub_822AD350(ctx, base);
loc_822101E0:
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r10.u8);
	// bl 0x8222f978
	ctx.lr = 0x822101FC;
	sub_8222F978(ctx, base);
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

PPC_WEAK_FUNC(sub_82210178) {
	__imp__sub_82210178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210210) {
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
	// bne cr6,0x82210248
	if (!ctx.cr6.eq) goto loc_82210248;
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
	// b 0x82210258
	goto loc_82210258;
loc_82210248:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210254;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210258:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210280
	if (!ctx.cr6.eq) goto loc_82210280;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221026C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x8221027C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210280;
	sub_822AD350(ctx, base);
loc_82210280:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82210210) {
	__imp__sub_82210210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822102A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822102A4) {
	__imp__sub_822102A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822102A8) {
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
	// bne cr6,0x822102e0
	if (!ctx.cr6.eq) goto loc_822102E0;
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
	// b 0x822102f0
	goto loc_822102F0;
loc_822102E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822102EC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822102F0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210318
	if (!ctx.cr6.eq) goto loc_82210318;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210304;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210314;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210318;
	sub_822AD350(ctx, base);
loc_82210318:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822102A8) {
	__imp__sub_822102A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221033C) {
	__imp__sub_8221033C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210340) {
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
	// bne cr6,0x82210378
	if (!ctx.cr6.eq) goto loc_82210378;
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
	// b 0x82210388
	goto loc_82210388;
loc_82210378:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210384;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210388:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822103b0
	if (!ctx.cr6.eq) goto loc_822103B0;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221039C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x822103AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822103B0;
	sub_822AD350(ctx, base);
loc_822103B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243470
	ctx.lr = 0x822103B8;
	sub_82243470(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x822103C0;
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

PPC_WEAK_FUNC(sub_82210340) {
	__imp__sub_82210340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822103D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822103D4) {
	__imp__sub_822103D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822103D8) {
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
	// bne cr6,0x82210410
	if (!ctx.cr6.eq) goto loc_82210410;
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
	// b 0x82210420
	goto loc_82210420;
loc_82210410:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221041C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210420:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210448
	if (!ctx.cr6.eq) goto loc_82210448;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210434;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210444;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210448;
	sub_822AD350(ctx, base);
loc_82210448:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822464f0
	ctx.lr = 0x82210454;
	sub_822464F0(ctx, base);
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

PPC_WEAK_FUNC(sub_822103D8) {
	__imp__sub_822103D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210468) {
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
	// bne cr6,0x822104a0
	if (!ctx.cr6.eq) goto loc_822104A0;
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
	// b 0x822104b0
	goto loc_822104B0;
loc_822104A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822104AC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822104B0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822104d8
	if (!ctx.cr6.eq) goto loc_822104D8;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822104C4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x822104D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822104D8;
	sub_822AD350(ctx, base);
loc_822104D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822464f0
	ctx.lr = 0x822104E4;
	sub_822464F0(ctx, base);
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

PPC_WEAK_FUNC(sub_82210468) {
	__imp__sub_82210468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822104F8) {
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
	// bne cr6,0x82210530
	if (!ctx.cr6.eq) goto loc_82210530;
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
	// b 0x82210540
	goto loc_82210540;
loc_82210530:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221053C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210540:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210568
	if (!ctx.cr6.eq) goto loc_82210568;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210554;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210564;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210568;
	sub_822AD350(ctx, base);
loc_82210568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246528
	ctx.lr = 0x82210570;
	sub_82246528(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x82210574;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_822104F8) {
	__imp__sub_822104F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210588) {
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
	// bne cr6,0x822105c0
	if (!ctx.cr6.eq) goto loc_822105C0;
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
	// b 0x822105d0
	goto loc_822105D0;
loc_822105C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822105CC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822105D0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822105f8
	if (!ctx.cr6.eq) goto loc_822105F8;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822105E4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x822105F4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822105F8;
	sub_822AD350(ctx, base);
loc_822105F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82242438
	ctx.lr = 0x82210600;
	sub_82242438(ctx, base);
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

PPC_WEAK_FUNC(sub_82210588) {
	__imp__sub_82210588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82210614) {
	__imp__sub_82210614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210618) {
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
	// bne cr6,0x82210654
	if (!ctx.cr6.eq) goto loc_82210654;
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82210664
	goto loc_82210664;
loc_82210654:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210660;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210664:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221068c
	if (!ctx.cr6.eq) goto loc_8221068C;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210678;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210688;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221068C;
	sub_822AD350(ctx, base);
loc_8221068C:
	// lbz r11,290(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 290);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822106c0
	if (ctx.cr6.eq) goto loc_822106C0;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822106b4
	if (ctx.cr6.eq) goto loc_822106B4;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// b 0x822106bc
	goto loc_822106BC;
loc_822106B4:
	// addis r11,r30,19
	ctx.r11.s64 = ctx.r30.s64 + 1245184;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
loc_822106BC:
	// bl 0x82229b60
	ctx.lr = 0x822106C0;
	sub_82229B60(ctx, base);
loc_822106C0:
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

PPC_WEAK_FUNC(sub_82210618) {
	__imp__sub_82210618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822106D8) {
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
	// bne cr6,0x82210710
	if (!ctx.cr6.eq) goto loc_82210710;
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
	// b 0x82210720
	goto loc_82210720;
loc_82210710:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221071C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210720:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210748
	if (!ctx.cr6.eq) goto loc_82210748;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210734;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210744;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210748;
	sub_822AD350(ctx, base);
loc_82210748:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82210770
	if (!ctx.cr6.eq) goto loc_82210770;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,27828
	ctx.r3.s64 = ctx.r11.s64 + 27828;
	// bl 0x822e84f0
	ctx.lr = 0x8221076C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210770;
	sub_822AD350(ctx, base);
loc_82210770:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82210778;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82210788
	if (!ctx.cr6.eq) goto loc_82210788;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82210794
	goto loc_82210794;
loc_82210788:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82210790;
	sub_82229BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82210794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246398
	ctx.lr = 0x8221079C;
	sub_82246398(ctx, base);
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

PPC_WEAK_FUNC(sub_822106D8) {
	__imp__sub_822106D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822107B0) {
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
	// bne cr6,0x822107e8
	if (!ctx.cr6.eq) goto loc_822107E8;
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
	// b 0x822107f8
	goto loc_822107F8;
loc_822107E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822107F4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822107F8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210820
	if (!ctx.cr6.eq) goto loc_82210820;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221080C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x8221081C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210820;
	sub_822AD350(ctx, base);
loc_82210820:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82210848
	if (!ctx.cr6.eq) goto loc_82210848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// bl 0x822e84f0
	ctx.lr = 0x82210844;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210848;
	sub_822AD350(ctx, base);
loc_82210848:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82210850;
	sub_822B1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246410
	ctx.lr = 0x8221085C;
	sub_82246410(ctx, base);
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

PPC_WEAK_FUNC(sub_822107B0) {
	__imp__sub_822107B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210870) {
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
	// bne cr6,0x822108a8
	if (!ctx.cr6.eq) goto loc_822108A8;
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
	// b 0x822108b8
	goto loc_822108B8;
loc_822108A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822108B4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822108B8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822108e0
	if (!ctx.cr6.eq) goto loc_822108E0;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822108CC;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x822108DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822108E0;
	sub_822AD350(ctx, base);
loc_822108E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822108E8;
	sub_822B1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246428
	ctx.lr = 0x822108F4;
	sub_82246428(ctx, base);
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

PPC_WEAK_FUNC(sub_82210870) {
	__imp__sub_82210870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210908) {
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
	// bne cr6,0x82210940
	if (!ctx.cr6.eq) goto loc_82210940;
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
	// b 0x82210950
	goto loc_82210950;
loc_82210940:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221094C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210950:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210978
	if (!ctx.cr6.eq) goto loc_82210978;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210964;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210974;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210978;
	sub_822AD350(ctx, base);
loc_82210978:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82210980;
	sub_82229BF0(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821e2e18
	ctx.lr = 0x82210990;
	sub_821E2E18(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82210994;
	sub_822ACB68(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x822109c0
	if (!ctx.cr6.gt) goto loc_822109C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x822b2498
	ctx.lr = 0x822109AC;
	sub_822B2498(ctx, base);
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
loc_822109C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
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

PPC_WEAK_FUNC(sub_82210908) {
	__imp__sub_82210908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822109E8) {
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
	// bne cr6,0x82210a20
	if (!ctx.cr6.eq) goto loc_82210A20;
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
	// b 0x82210a30
	goto loc_82210A30;
loc_82210A20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210A2C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210A30:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210a58
	if (!ctx.cr6.eq) goto loc_82210A58;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210A44;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210A54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210A58;
	sub_822AD350(ctx, base);
loc_82210A58:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821e2e18
	ctx.lr = 0x82210A68;
	sub_821E2E18(ctx, base);
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

PPC_WEAK_FUNC(sub_822109E8) {
	__imp__sub_822109E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82210A7C) {
	__imp__sub_82210A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210A80) {
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
	// bne cr6,0x82210abc
	if (!ctx.cr6.eq) goto loc_82210ABC;
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82210acc
	goto loc_82210ACC;
loc_82210ABC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210AC8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210ACC:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210af4
	if (!ctx.cr6.eq) goto loc_82210AF4;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210AE0;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210AF0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210AF4;
	sub_822AD350(ctx, base);
loc_82210AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82210AFC;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82210b18
	if (ctx.cr6.eq) goto loc_82210B18;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82210b38
	if (ctx.cr6.eq) goto loc_82210B38;
loc_82210B18:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lhz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210b38
	if (ctx.cr6.eq) goto loc_82210B38;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82229b60
	ctx.lr = 0x82210B38;
	sub_82229B60(ctx, base);
loc_82210B38:
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

PPC_WEAK_FUNC(sub_82210A80) {
	__imp__sub_82210A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210B50) {
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
	// bne cr6,0x82210b88
	if (!ctx.cr6.eq) goto loc_82210B88;
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
	// b 0x82210b98
	goto loc_82210B98;
loc_82210B88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210B94;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210B98:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210bc0
	if (!ctx.cr6.eq) goto loc_82210BC0;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210BAC;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210BBC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210BC0;
	sub_822AD350(ctx, base);
loc_82210BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82210BC8;
	sub_822B1FB0(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
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

PPC_WEAK_FUNC(sub_82210B50) {
	__imp__sub_82210B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82210BE4) {
	__imp__sub_82210BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210BE8) {
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
	// bne cr6,0x82210c20
	if (!ctx.cr6.eq) goto loc_82210C20;
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
	// b 0x82210c30
	goto loc_82210C30;
loc_82210C20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210C2C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210C30:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210c58
	if (!ctx.cr6.eq) goto loc_82210C58;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210C44;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210C54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210C58;
	sub_822AD350(ctx, base);
loc_82210C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82210C60;
	sub_822B1FB0(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stfs f1,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
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

PPC_WEAK_FUNC(sub_82210BE8) {
	__imp__sub_82210BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82210C7C) {
	__imp__sub_82210C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210C80) {
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
	// bne cr6,0x82210cb8
	if (!ctx.cr6.eq) goto loc_82210CB8;
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
	// b 0x82210cc8
	goto loc_82210CC8;
loc_82210CB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210CC4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210CC8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210cf0
	if (!ctx.cr6.eq) goto loc_82210CF0;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210CDC;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210CEC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210CF0;
	sub_822AD350(ctx, base);
loc_82210CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82210CF8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r9,200
	ctx.r9.s64 = 200;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f13.u32);
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

PPC_WEAK_FUNC(sub_82210C80) {
	__imp__sub_82210C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210D28) {
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
	// bne cr6,0x82210d64
	if (!ctx.cr6.eq) goto loc_82210D64;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82210d74
	goto loc_82210D74;
loc_82210D64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210D70;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82210D74:
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210d9c
	if (!ctx.cr6.eq) goto loc_82210D9C;
	// lhz r3,292(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210D88;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210D98;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210D9C;
	sub_822AD350(ctx, base);
loc_82210D9C:
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x822acb68
	ctx.lr = 0x82210DA4;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82210e40
	if (!ctx.cr6.gt) goto loc_82210E40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82210DB4;
	sub_822B2288(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,27968
	ctx.r9.s64 = ctx.r9.s64 + 27968;
loc_82210DC4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x82210de8
	if (ctx.cr6.eq) goto loc_82210DE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82210dc4
	if (ctx.cr6.eq) goto loc_82210DC4;
loc_82210DE8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82210df8
	if (!ctx.cr6.eq) goto loc_82210DF8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82210e40
	goto loc_82210E40;
loc_82210DF8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,27960
	ctx.r10.s64 = ctx.r10.s64 + 27960;
loc_82210E00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82210e24
	if (ctx.cr6.eq) goto loc_82210E24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82210e00
	if (ctx.cr6.eq) goto loc_82210E00;
loc_82210E24:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82210e34
	if (!ctx.cr6.eq) goto loc_82210E34;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82210e40
	goto loc_82210E40;
loc_82210E34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,27908
	ctx.r3.s64 = ctx.r11.s64 + 27908;
	// bl 0x822ad350
	ctx.lr = 0x82210E40;
	sub_822AD350(ctx, base);
loc_82210E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82210E48;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,30
	ctx.r10.s64 = ctx.r31.s64 + 30;
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.f13.u32);
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

PPC_WEAK_FUNC(sub_82210D28) {
	__imp__sub_82210D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210E80) {
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
	// bne cr6,0x82210eb8
	if (!ctx.cr6.eq) goto loc_82210EB8;
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
	// b 0x82210ec8
	goto loc_82210EC8;
loc_82210EB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210EC4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82210EC8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210ef0
	if (!ctx.cr6.eq) goto loc_82210EF0;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82210EDC;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x82210EEC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210EF0;
	sub_822AD350(ctx, base);
loc_82210EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82210EF8;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lhz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82210f34
	if (!ctx.cr6.eq) goto loc_82210F34;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
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
loc_82210F34:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82210f60
	if (!ctx.cr6.eq) goto loc_82210F60;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
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
loc_82210F60:
	// lhz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 548);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82210f8c
	if (!ctx.cr6.eq) goto loc_82210F8C;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
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
loc_82210F8C:
	// bl 0x822a13a0
	ctx.lr = 0x82210F90;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27972
	ctx.r3.s64 = ctx.r11.s64 + 27972;
	// bl 0x822e84f0
	ctx.lr = 0x82210FA0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82210FA4;
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

PPC_WEAK_FUNC(sub_82210E80) {
	__imp__sub_82210E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82210FB8) {
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
	// bne cr6,0x82210ff0
	if (!ctx.cr6.eq) goto loc_82210FF0;
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
	// b 0x82211000
	goto loc_82211000;
loc_82210FF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82210FFC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211000:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211028
	if (!ctx.cr6.eq) goto loc_82211028;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82211014;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28032
	ctx.r3.s64 = ctx.r11.s64 + 28032;
	// bl 0x822e84f0
	ctx.lr = 0x82211024;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211028;
	sub_822AD350(ctx, base);
loc_82211028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ebc8
	ctx.lr = 0x82211030;
	sub_8235EBC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82210FB8) {
	__imp__sub_82210FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211044) {
	__imp__sub_82211044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211048) {
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
	// bne cr6,0x82211080
	if (!ctx.cr6.eq) goto loc_82211080;
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
	// b 0x82211090
	goto loc_82211090;
loc_82211080:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221108C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211090:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822110b8
	if (!ctx.cr6.eq) goto loc_822110B8;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822110A4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x822110B4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822110B8;
	sub_822AD350(ctx, base);
loc_822110B8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,23,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82211048) {
	__imp__sub_82211048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822110DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822110DC) {
	__imp__sub_822110DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822110E0) {
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
	// bne cr6,0x82211118
	if (!ctx.cr6.eq) goto loc_82211118;
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
	// b 0x82211128
	goto loc_82211128;
loc_82211118:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211124;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211128:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211150
	if (!ctx.cr6.eq) goto loc_82211150;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221113C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x8221114C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211150;
	sub_822AD350(ctx, base);
loc_82211150:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822110E0) {
	__imp__sub_822110E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211174) {
	__imp__sub_82211174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,28068
	ctx.r4.s64 = ctx.r11.s64 + 28068;
	// b 0x82280c30
	sub_82280C30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82211178) {
	__imp__sub_82211178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211188) {
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
	// bne cr6,0x822111c0
	if (!ctx.cr6.eq) goto loc_822111C0;
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
	// b 0x822111d0
	goto loc_822111D0;
loc_822111C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822111CC;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822111D0:
	// lwz r31,280(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822111e8
	if (!ctx.cr6.eq) goto loc_822111E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x822111E8;
	sub_822AD350(ctx, base);
loc_822111E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822111F0;
	sub_822B1FB0(ctx, base);
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221120c
	if (!ctx.cr6.gt) goto loc_8221120C;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8221120C:
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

PPC_WEAK_FUNC(sub_82211188) {
	__imp__sub_82211188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211220) {
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
	// bne cr6,0x82211258
	if (!ctx.cr6.eq) goto loc_82211258;
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
	// b 0x82211268
	goto loc_82211268;
loc_82211258:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211264;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82211268:
	// lwz r31,280(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82211280
	if (!ctx.cr6.eq) goto loc_82211280;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x82211280;
	sub_822AD350(ctx, base);
loc_82211280:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82211288;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822112a0
	if (!ctx.cr6.lt) goto loc_822112A0;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_822112A0:
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

PPC_WEAK_FUNC(sub_82211220) {
	__imp__sub_82211220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822112B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822112B4) {
	__imp__sub_822112B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822112B8) {
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
	// bne cr6,0x822112f0
	if (!ctx.cr6.eq) goto loc_822112F0;
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
	// b 0x82211300
	goto loc_82211300;
loc_822112F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822112FC;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82211300:
	// lwz r31,280(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82211318
	if (!ctx.cr6.eq) goto loc_82211318;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x82211318;
	sub_822AD350(ctx, base);
loc_82211318:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82211320;
	sub_822B1FB0(ctx, base);
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221133c
	if (!ctx.cr6.gt) goto loc_8221133C;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_8221133C:
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

PPC_WEAK_FUNC(sub_822112B8) {
	__imp__sub_822112B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211350) {
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
	// bne cr6,0x82211388
	if (!ctx.cr6.eq) goto loc_82211388;
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
	// b 0x82211398
	goto loc_82211398;
loc_82211388:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211394;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82211398:
	// lwz r31,280(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822113b0
	if (!ctx.cr6.eq) goto loc_822113B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x822113B0;
	sub_822AD350(ctx, base);
loc_822113B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822113B8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822113d0
	if (!ctx.cr6.lt) goto loc_822113D0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_822113D0:
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

PPC_WEAK_FUNC(sub_82211350) {
	__imp__sub_82211350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822113E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822113E4) {
	__imp__sub_822113E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822113E8) {
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
	// bne cr6,0x82211424
	if (!ctx.cr6.eq) goto loc_82211424;
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
	// b 0x82211434
	goto loc_82211434;
loc_82211424:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211430;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211434:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221144c
	if (!ctx.cr6.eq) goto loc_8221144C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x8221144C;
	sub_822AD350(ctx, base);
loc_8221144C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82211454;
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
	// bge cr6,0x82211474
	if (!ctx.cr6.lt) goto loc_82211474;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28144
	ctx.r3.s64 = ctx.r11.s64 + 28144;
	// bl 0x822ad350
	ctx.lr = 0x82211474;
	sub_822AD350(ctx, base);
loc_82211474:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x8221148C;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822464e0
	ctx.lr = 0x822114A4;
	sub_822464E0(ctx, base);
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

PPC_WEAK_FUNC(sub_822113E8) {
	__imp__sub_822113E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822114BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822114BC) {
	__imp__sub_822114BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822114C0) {
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
	// bl 0x822acb68
	ctx.lr = 0x822114D8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82211500
	if (ctx.cr6.eq) goto loc_82211500;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28172
	ctx.r3.s64 = ctx.r11.s64 + 28172;
	// bl 0x822ad350
	ctx.lr = 0x822114EC;
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
loc_82211500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ed10
	ctx.lr = 0x82211508;
	sub_8220ED10(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211538
	if (!ctx.cr6.eq) goto loc_82211538;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x82211524;
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
loc_82211538:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82211540;
	sub_822B1FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243638
	ctx.lr = 0x82211548;
	sub_82243638(ctx, base);
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

PPC_WEAK_FUNC(sub_822114C0) {
	__imp__sub_822114C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221155C) {
	__imp__sub_8221155C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211560) {
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
	// bl 0x822acb68
	ctx.lr = 0x82211578;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822115a0
	if (ctx.cr6.eq) goto loc_822115A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28212
	ctx.r3.s64 = ctx.r11.s64 + 28212;
	// bl 0x822ad350
	ctx.lr = 0x8221158C;
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
loc_822115A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ed10
	ctx.lr = 0x822115A8;
	sub_8220ED10(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822115d4
	if (!ctx.cr6.eq) goto loc_822115D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x822ad350
	ctx.lr = 0x822115C0;
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
loc_822115D4:
	// bl 0x82243660
	ctx.lr = 0x822115D8;
	sub_82243660(ctx, base);
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

PPC_WEAK_FUNC(sub_82211560) {
	__imp__sub_82211560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822115EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822115EC) {
	__imp__sub_822115EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822115F0) {
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
	// bne cr6,0x82211628
	if (!ctx.cr6.eq) goto loc_82211628;
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
	// b 0x82211638
	goto loc_82211638;
loc_82211628:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211634;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211638:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211660
	if (!ctx.cr6.eq) goto loc_82211660;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221164C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x8221165C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211660;
	sub_822AD350(ctx, base);
loc_82211660:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822115F0) {
	__imp__sub_822115F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211684) {
	__imp__sub_82211684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211688) {
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
	// bne cr6,0x822116c0
	if (!ctx.cr6.eq) goto loc_822116C0;
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
	// b 0x822116d0
	goto loc_822116D0;
loc_822116C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822116CC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822116D0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822116f8
	if (!ctx.cr6.eq) goto loc_822116F8;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822116E4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x822116F4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822116F8;
	sub_822AD350(ctx, base);
loc_822116F8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82211688) {
	__imp__sub_82211688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221171C) {
	__imp__sub_8221171C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211720) {
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
	// bne cr6,0x82211758
	if (!ctx.cr6.eq) goto loc_82211758;
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
	// b 0x82211768
	goto loc_82211768;
loc_82211758:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211764;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211768:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211790
	if (!ctx.cr6.eq) goto loc_82211790;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x8221177C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x822e84f0
	ctx.lr = 0x8221178C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211790;
	sub_822AD350(ctx, base);
loc_82211790:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82211798;
	sub_822B1C50(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// bne cr6,0x822117b0
	if (!ctx.cr6.eq) goto loc_822117B0;
	// rlwinm r9,r10,0,11,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
loc_822117B0:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82211720) {
	__imp__sub_82211720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822117C8) {
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
	// bne cr6,0x822117fc
	if (!ctx.cr6.eq) goto loc_822117FC;
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
	// b 0x8221180c
	goto loc_8221180C;
loc_822117FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211808;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221180C:
	// lhz r3,126(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822acbf8
	ctx.lr = 0x82211814;
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

PPC_WEAK_FUNC(sub_822117C8) {
	__imp__sub_822117C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211824) {
	__imp__sub_82211824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211828) {
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
	// bne cr6,0x82211860
	if (!ctx.cr6.eq) goto loc_82211860;
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
	// b 0x82211870
	goto loc_82211870;
loc_82211860:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221186C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211870:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 272);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82211894
	if (ctx.cr6.eq) goto loc_82211894;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// bl 0x822ad350
	ctx.lr = 0x82211894;
	sub_822AD350(ctx, base);
loc_82211894:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82211828) {
	__imp__sub_82211828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822118B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822118B4) {
	__imp__sub_822118B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822118B8) {
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
	// bne cr6,0x822118f0
	if (!ctx.cr6.eq) goto loc_822118F0;
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
	// b 0x82211900
	goto loc_82211900;
loc_822118F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822118FC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211900:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 272);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82211924
	if (ctx.cr6.eq) goto loc_82211924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// bl 0x822ad350
	ctx.lr = 0x82211924;
	sub_822AD350(ctx, base);
loc_82211924:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822118B8) {
	__imp__sub_822118B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211944) {
	__imp__sub_82211944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211948) {
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
	// bne cr6,0x82211984
	if (!ctx.cr6.eq) goto loc_82211984;
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
	// b 0x82211994
	goto loc_82211994;
loc_82211984:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211990;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211994:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,150(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 150);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822119c0
	if (!ctx.cr6.eq) goto loc_822119C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200220
	ctx.lr = 0x822119B4;
	sub_82200220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822119d4
	if (ctx.cr6.eq) goto loc_822119D4;
loc_822119C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,28300
	ctx.r3.s64 = ctx.r11.s64 + 28300;
	// bl 0x822e84f0
	ctx.lr = 0x822119D0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822119D4;
	sub_822AD350(ctx, base);
loc_822119D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x822119DC;
	sub_82229BF0(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r10,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x821e2e18
	ctx.lr = 0x822119FC;
	sub_821E2E18(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x82211A18;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82211a30
	if (!ctx.cr6.gt) goto loc_82211A30;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82211A2C;
	sub_822B2498(ctx, base);
	// b 0x82211a44
	goto loc_82211A44;
loc_82211A30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
loc_82211A44:
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

PPC_WEAK_FUNC(sub_82211948) {
	__imp__sub_82211948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211A5C) {
	__imp__sub_82211A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211A60) {
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
	// bne cr6,0x82211a98
	if (!ctx.cr6.eq) goto loc_82211A98;
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
	// b 0x82211aa8
	goto loc_82211AA8;
loc_82211A98:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211AA4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211AA8:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,150(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 150);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82211ad4
	if (!ctx.cr6.eq) goto loc_82211AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200220
	ctx.lr = 0x82211AC8;
	sub_82200220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211ae8
	if (ctx.cr6.eq) goto loc_82211AE8;
loc_82211AD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,28300
	ctx.r3.s64 = ctx.r11.s64 + 28300;
	// bl 0x822e84f0
	ctx.lr = 0x82211AE4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211AE8;
	sub_822AD350(ctx, base);
loc_82211AE8:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r10,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x821e2e18
	ctx.lr = 0x82211B04;
	sub_821E2E18(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r31,412
	ctx.r4.s64 = ctx.r31.s64 + 412;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// bl 0x822b2498
	ctx.lr = 0x82211B24;
	sub_822B2498(ctx, base);
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

PPC_WEAK_FUNC(sub_82211A60) {
	__imp__sub_82211A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211B38) {
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
	// bne cr6,0x82211b70
	if (!ctx.cr6.eq) goto loc_82211B70;
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
	// b 0x82211b80
	goto loc_82211B80;
loc_82211B70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211B7C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211B80:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,150(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 150);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82211bac
	if (!ctx.cr6.eq) goto loc_82211BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200220
	ctx.lr = 0x82211BA0;
	sub_82200220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211bc0
	if (ctx.cr6.eq) goto loc_82211BC0;
loc_82211BAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,28300
	ctx.r3.s64 = ctx.r11.s64 + 28300;
	// bl 0x822e84f0
	ctx.lr = 0x82211BBC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211BC0;
	sub_822AD350(ctx, base);
loc_82211BC0:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// rlwinm r10,r11,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// bl 0x821e2e18
	ctx.lr = 0x82211BDC;
	sub_821E2E18(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
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

PPC_WEAK_FUNC(sub_82211B38) {
	__imp__sub_82211B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211C10) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82211c50
	if (!ctx.cr6.eq) goto loc_82211C50;
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
	// b 0x82211c60
	goto loc_82211C60;
loc_82211C50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211C5C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211C60:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,150(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 150);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82211c8c
	if (ctx.cr6.eq) goto loc_82211C8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,28300
	ctx.r3.s64 = ctx.r11.s64 + 28300;
	// bl 0x822e84f0
	ctx.lr = 0x82211C88;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211C8C;
	sub_822AD350(ctx, base);
loc_82211C8C:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82211cb0
	if (!ctx.cr6.eq) goto loc_82211CB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,28328
	ctx.r3.s64 = ctx.r11.s64 + 28328;
	// bl 0x822e84f0
	ctx.lr = 0x82211CAC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211CB0;
	sub_822AD350(ctx, base);
loc_82211CB0:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_82211C10) {
	__imp__sub_82211C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211CCC) {
	__imp__sub_82211CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211CD0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82211c10
	sub_82211C10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82211CD0) {
	__imp__sub_82211CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211CD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82211c10
	sub_82211C10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82211CD8) {
	__imp__sub_82211CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211CE0) {
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
	ctx.lr = 0x82211CF8;
	sub_82229BF0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82211d24
	if (ctx.cr6.eq) goto loc_82211D24;
	// lhz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82211D10;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28368
	ctx.r3.s64 = ctx.r11.s64 + 28368;
	// bl 0x822e84f0
	ctx.lr = 0x82211D20;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82211D24;
	sub_822AD350(ctx, base);
loc_82211D24:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211d34
	if (!ctx.cr6.eq) goto loc_82211D34;
	// bl 0x822acd78
	ctx.lr = 0x82211D34;
	sub_822ACD78(ctx, base);
loc_82211D34:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82229b60
	ctx.lr = 0x82211D50;
	sub_82229B60(ctx, base);
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

PPC_WEAK_FUNC(sub_82211CE0) {
	__imp__sub_82211CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211D64) {
	__imp__sub_82211D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211D68) {
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
	// bne cr6,0x82211da0
	if (!ctx.cr6.eq) goto loc_82211DA0;
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
	// b 0x82211db0
	goto loc_82211DB0;
loc_82211DA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211DAC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211DB0:
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82211dc8
	if (ctx.cr6.eq) goto loc_82211DC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28404
	ctx.r3.s64 = ctx.r11.s64 + 28404;
	// bl 0x822ad350
	ctx.lr = 0x82211DC8;
	sub_822AD350(ctx, base);
loc_82211DC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
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

PPC_WEAK_FUNC(sub_82211D68) {
	__imp__sub_82211D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211DE8) {
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
	// bne cr6,0x82211e20
	if (!ctx.cr6.eq) goto loc_82211E20;
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
	// b 0x82211e30
	goto loc_82211E30;
loc_82211E20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211E2C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211E30:
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82211e48
	if (ctx.cr6.eq) goto loc_82211E48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28404
	ctx.r3.s64 = ctx.r11.s64 + 28404;
	// bl 0x822ad350
	ctx.lr = 0x82211E48;
	sub_822AD350(ctx, base);
loc_82211E48:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
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

PPC_WEAK_FUNC(sub_82211DE8) {
	__imp__sub_82211DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82211ea0
	if (!ctx.cr6.eq) goto loc_82211EA0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82211eb0
	goto loc_82211EB0;
loc_82211EA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82211EAC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211EB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82211EBC;
	sub_822B2498(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x82211EC8;
	sub_822DA650(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f4,f12,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f13,f2,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f5.f64));
	// lfs f9,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f1,f0,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f3,f11,f0,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x82211F48;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_82211E68) {
	__imp__sub_82211E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82211F5C) {
	__imp__sub_82211F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82211F60) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82211f94
	if (!ctx.cr6.eq) goto loc_82211F94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28568
	ctx.r3.s64 = ctx.r11.s64 + 28568;
	// bl 0x822ad350
	ctx.lr = 0x82211F94;
	sub_822AD350(ctx, base);
loc_82211F94:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82211F9C;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211FA4:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// bl 0x8233dd38
	ctx.lr = 0x82211FB4;
	sub_8233DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x82211FC0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82212040
	if (ctx.cr6.eq) goto loc_82212040;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82211fa4
	if (ctx.cr6.lt) goto loc_82211FA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82211FD8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// bl 0x8233dd38
	ctx.lr = 0x82211FE8;
	sub_8233DD38(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212000
	if (ctx.cr6.eq) goto loc_82212000;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82211fd8
	if (ctx.cr6.lt) goto loc_82211FD8;
loc_82212000:
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// bne cr6,0x8221201c
	if (!ctx.cr6.eq) goto loc_8221201C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,28516
	ctx.r3.s64 = ctx.r11.s64 + 28516;
	// bl 0x822e84f0
	ctx.lr = 0x82212018;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221201C;
	sub_822AD350(ctx, base);
loc_8221201C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// bl 0x8233e7d8
	ctx.lr = 0x82212028;
	sub_8233E7D8(ctx, base);
loc_82212028:
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
loc_82212040:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280a68
	ctx.lr = 0x82212054;
	sub_82280A68(ctx, base);
	// b 0x82212028
	goto loc_82212028;
}

PPC_WEAK_FUNC(sub_82211F60) {
	__imp__sub_82211F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212058) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212074:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// bl 0x8233dd38
	ctx.lr = 0x82212084;
	sub_8233DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x82212090;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822120d4
	if (ctx.cr6.eq) goto loc_822120D4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82212074
	if (ctx.cr6.lt) goto loc_82212074;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28644
	ctx.r3.s64 = ctx.r11.s64 + 28644;
	// bl 0x822e84f0
	ctx.lr = 0x822120B4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822120B8;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822120BC:
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
loc_822120D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822120bc
	goto loc_822120BC;
}

PPC_WEAK_FUNC(sub_82212058) {
	__imp__sub_82212058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822120DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822120DC) {
	__imp__sub_822120DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822120E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82212104;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82212110;
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
	ctx.lr = 0x8221212C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822b2498
	ctx.lr = 0x82212148;
	sub_822B2498(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82212150;
	sub_822B1FB0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x82212174
	if (ctx.cr6.gt) goto loc_82212174;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28740
	ctx.r4.s64 = ctx.r11.s64 + 28740;
	// bl 0x822ad4e0
	ctx.lr = 0x82212174;
	sub_822AD4E0(ctx, base);
loc_82212174:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8221218c
	if (ctx.cr6.gt) goto loc_8221218C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,28708
	ctx.r4.s64 = ctx.r11.s64 + 28708;
	// bl 0x822ad4e0
	ctx.lr = 0x8221218C;
	sub_822AD4E0(ctx, base);
loc_8221218C:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x822121a4
	if (ctx.cr6.gt) goto loc_822121A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,28676
	ctx.r4.s64 = ctx.r11.s64 + 28676;
	// bl 0x822ad4e0
	ctx.lr = 0x822121A4;
	sub_822AD4E0(ctx, base);
loc_822121A4:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5936);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822121d0
	if (ctx.cr6.eq) goto loc_822121D0;
	// li r4,85
	ctx.r4.s64 = 85;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822304f8
	ctx.lr = 0x822121C4;
	sub_822304F8(ctx, base);
	// stfs f30,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f29,92(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
loc_822121D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_822120E0) {
	__imp__sub_822120E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822121F0) {
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
	ctx.lr = 0x82212204;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8221220C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212220
	if (ctx.cr6.eq) goto loc_82212220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28772
	ctx.r3.s64 = ctx.r11.s64 + 28772;
	// bl 0x822ad350
	ctx.lr = 0x82212220;
	sub_822AD350(ctx, base);
loc_82212220:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1132, ctx.r11.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r11,1136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1136, ctx.r11.u32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r11,1140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1140, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r7,0,17,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_822121F0) {
	__imp__sub_822121F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212260) {
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
	ctx.lr = 0x82212274;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8221227C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212290
	if (ctx.cr6.eq) goto loc_82212290;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28808
	ctx.r3.s64 = ctx.r11.s64 + 28808;
	// bl 0x822ad350
	ctx.lr = 0x82212290;
	sub_822AD350(ctx, base);
loc_82212290:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82212318
	if (ctx.cr6.eq) goto loc_82212318;
	// lwz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82212318
	if (!ctx.cr6.gt) goto loc_82212318;
	// lwz r3,1132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// bl 0x82321c38
	ctx.lr = 0x822122B8;
	sub_82321C38(ctx, base);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r9,9624
	ctx.r7.s64 = ctx.r9.s64 + 9624;
	// lwz r8,1140(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1140);
	// lwz r9,1136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// lwz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82212318
	if (!ctx.cr6.gt) goto loc_82212318;
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r7,1136(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1136);
	// lwz r6,1140(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1140);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// clrlwi r9,r6,25
	ctx.r9.u64 = ctx.r6.u32 & 0x7F;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,1140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1140, ctx.r5.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r4,1140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// clrlwi r3,r4,25
	ctx.r3.u64 = ctx.r4.u32 & 0x7F;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
loc_82212318:
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

PPC_WEAK_FUNC(sub_82212260) {
	__imp__sub_82212260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221232C) {
	__imp__sub_8221232C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212330) {
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
	// bne cr6,0x8221236c
	if (!ctx.cr6.eq) goto loc_8221236C;
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
	// b 0x8221237c
	goto loc_8221237C;
loc_8221236C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212378;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221237C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82212384;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222eb90
	ctx.lr = 0x82212394;
	sub_8222EB90(ctx, base);
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822123dc
	if (ctx.cr6.eq) goto loc_822123DC;
	// bl 0x8222e398
	ctx.lr = 0x822123A4;
	sub_8222E398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822123dc
	if (ctx.cr6.eq) goto loc_822123DC;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822123dc
	if (ctx.cr6.eq) goto loc_822123DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280c30
	ctx.lr = 0x822123CC;
	sub_82280C30(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// addi r4,r10,14488
	ctx.r4.s64 = ctx.r10.s64 + 14488;
	// bl 0x8222ebf0
	ctx.lr = 0x822123DC;
	sub_8222EBF0(ctx, base);
loc_822123DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222feb8
	ctx.lr = 0x822123E8;
	sub_8222FEB8(ctx, base);
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

PPC_WEAK_FUNC(sub_82212330) {
	__imp__sub_82212330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82212408;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82212414;
	sub_822B20B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82212424;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82212428;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82212440
	if (!ctx.cr6.gt) goto loc_82212440;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82212438;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82212444
	goto loc_82212444;
loc_82212440:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82212444:
	// bl 0x8222f3a8
	ctx.lr = 0x82212448;
	sub_8222F3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,294
	ctx.r3.s64 = ctx.r3.s64 + 294;
	// bl 0x822a24e0
	ctx.lr = 0x82212458;
	sub_822A24E0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// bl 0x82229960
	ctx.lr = 0x8221247C;
	sub_82229960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82212494
	if (ctx.cr6.eq) goto loc_82212494;
	// bl 0x82229b60
	ctx.lr = 0x8221248C;
	sub_82229B60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82212494:
	// bl 0x8222f680
	ctx.lr = 0x82212498;
	sub_8222F680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822124A0;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28848
	ctx.r3.s64 = ctx.r11.s64 + 28848;
	// bl 0x822e84f0
	ctx.lr = 0x822124B0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822124B4;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82212400) {
	__imp__sub_82212400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822124BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822124BC) {
	__imp__sub_822124BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822124C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822124C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x822124D4;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822124E4;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x822124EC;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8222f3a8
	ctx.lr = 0x822124F4;
	sub_8222F3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// bl 0x822a24e0
	ctx.lr = 0x82212504;
	sub_822A24E0(ctx, base);
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82212510;
	sub_822A24E0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x822467a0
	ctx.lr = 0x82212538;
	sub_822467A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x82212540;
	sub_82229B60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822124C0) {
	__imp__sub_822124C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212548) {
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
	// bl 0x82246760
	ctx.lr = 0x82212558;
	sub_82246760(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x82212560;
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

PPC_WEAK_FUNC(sub_82212548) {
	__imp__sub_82212548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212570) {
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
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221259c
	if (!ctx.cr6.eq) goto loc_8221259C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,28880
	ctx.r3.s64 = ctx.r11.s64 + 28880;
	// bl 0x822ad350
	ctx.lr = 0x8221259C;
	sub_822AD350(ctx, base);
loc_8221259C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822125A4;
	sub_822B2288(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x822125A8;
	sub_82232100(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82212570) {
	__imp__sub_82212570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822125B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822125C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x822b2288
	ctx.lr = 0x822125D4;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x822125DC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x822125f4
	if (ctx.cr6.lt) goto loc_822125F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x822125EC;
	sub_822B2168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822125fc
	goto loc_822125FC;
loc_822125F4:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r31,-25976(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
loc_822125FC:
	// bl 0x822acb68
	ctx.lr = 0x82212600;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82212618
	if (ctx.cr6.lt) goto loc_82212618;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82212610;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8221261c
	goto loc_8221261C;
loc_82212618:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8221261C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822300e0
	ctx.lr = 0x8221262C;
	sub_822300E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82212654
	if (ctx.cr6.eq) goto loc_82212654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221263C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,29000
	ctx.r3.s64 = ctx.r11.s64 + 29000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82212650;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82212654;
	sub_822AD350(ctx, base);
loc_82212654:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222fff8
	ctx.lr = 0x82212668;
	sub_8222FFF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82212690
	if (!ctx.cr6.eq) goto loc_82212690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82212678;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,28960
	ctx.r3.s64 = ctx.r11.s64 + 28960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221268C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82212690;
	sub_822AD350(ctx, base);
loc_82212690:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822125B8) {
	__imp__sub_822125B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822126A0) {
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
	// bne cr6,0x822126d4
	if (!ctx.cr6.eq) goto loc_822126D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822126e4
	goto loc_822126E4;
loc_822126D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822126E0;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822126E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822125b8
	ctx.lr = 0x822126EC;
	sub_822125B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822126A0) {
	__imp__sub_822126A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822126FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822126FC) {
	__imp__sub_822126FC(ctx, base);
}

