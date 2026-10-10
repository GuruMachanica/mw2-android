#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82330090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82330098;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x82332c28
	ctx.lr = 0x823300B8;
	sub_82332C28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823300d0
	if (ctx.cr6.eq) goto loc_823300D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d670
	ctx.lr = 0x823300D0;
	sub_8232D670(ctx, base);
loc_823300D0:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330228
	if (!ctx.cr6.eq) goto loc_82330228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x8232dad8
	ctx.lr = 0x823300F0;
	sub_8232DAD8(ctx, base);
	// lbz r11,1646(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1646);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233011c
	if (ctx.cr6.eq) goto loc_8233011C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233011c
	if (ctx.cr6.eq) goto loc_8233011C;
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// li r10,11
	ctx.r10.s64 = 11;
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8233011C:
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// mulli r27,r11,28
	ctx.r27.s64 = ctx.r11.s64 * 28;
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82330170
	if (!ctx.cr6.eq) goto loc_82330170;
	// lwz r9,536(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
loc_8233013C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8233015c
	if (ctx.cr6.eq) goto loc_8233015C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x8233013c
	if (ctx.cr6.lt) goto loc_8233013C;
	// b 0x82330170
	goto loc_82330170;
loc_8233015C:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82330198
	if (!ctx.cr6.eq) goto loc_82330198;
loc_82330170:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d580
	ctx.lr = 0x8233017C;
	sub_8232D580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330198
	if (ctx.cr6.eq) goto loc_82330198;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c888
	ctx.lr = 0x82330190;
	sub_8232C888(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82330198:
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x823301A0;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823336b0
	ctx.lr = 0x823301B4;
	sub_823336B0(ctx, base);
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330204
	if (ctx.cr6.eq) goto loc_82330204;
	// li r11,12
	ctx.r11.s64 = 12;
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x823301e8
	if (!ctx.cr6.lt) goto loc_823301E8;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// li r10,1
	ctx.r10.s64 = 1;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwimi r9,r10,4,23,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFFFFFFFFDFF) | (ctx.r9.u64 & 0x200);
	// stw r9,488(r26)
	PPC_STORE_U32(ctx.r26.u32 + 488, ctx.r9.u32);
loc_823301E8:
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,492(r26)
	PPC_STORE_U32(ctx.r26.u32 + 492, ctx.r11.u32);
	// bl 0x82322840
	ctx.lr = 0x823301FC;
	sub_82322840(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82330204:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x82330228
	if (!ctx.cr6.lt) goto loc_82330228;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// stw r9,488(r26)
	PPC_STORE_U32(ctx.r26.u32 + 488, ctx.r9.u32);
loc_82330228:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82330090) {
	__imp__sub_82330090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82330238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x82330254;
	sub_82332AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82330280
	if (ctx.cr6.eq) goto loc_82330280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d670
	ctx.lr = 0x8233026C;
	sub_8232D670(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823303b0
	if (!ctx.cr6.eq) goto loc_823303B0;
loc_82330280:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823303b0
	if (!ctx.cr6.eq) goto loc_823303B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x8232dad8
	ctx.lr = 0x823302A0;
	sub_8232DAD8(ctx, base);
	// lbz r11,1646(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1646);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823302cc
	if (ctx.cr6.eq) goto loc_823302CC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823302cc
	if (ctx.cr6.eq) goto loc_823302CC;
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// li r10,9
	ctx.r10.s64 = 9;
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_823302CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823336b0
	ctx.lr = 0x823302DC;
	sub_823336B0(ctx, base);
	// lbz r11,1646(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1646);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// beq cr6,0x82330388
	if (ctx.cr6.eq) goto loc_82330388;
	// mulli r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 * 28;
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d580
	ctx.lr = 0x82330308;
	sub_8232D580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c888
	ctx.lr = 0x8233031C;
	sub_8232C888(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82330324:
	// lwz r11,644(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330374
	if (ctx.cr6.eq) goto loc_82330374;
	// li r11,12
	ctx.r11.s64 = 12;
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x82330358
	if (!ctx.cr6.lt) goto loc_82330358;
	// lwz r11,488(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 488);
	// li r10,1
	ctx.r10.s64 = 1;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwimi r9,r10,4,23,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFFFFFFFFDFF) | (ctx.r9.u64 & 0x200);
	// stw r9,488(r27)
	PPC_STORE_U32(ctx.r27.u32 + 488, ctx.r9.u32);
loc_82330358:
	// lwz r11,644(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,492(r27)
	PPC_STORE_U32(ctx.r27.u32 + 492, ctx.r11.u32);
	// bl 0x82322840
	ctx.lr = 0x8233036C;
	sub_82322840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82330374:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// b 0x8233039c
	goto loc_8233039C;
loc_82330388:
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
loc_8233039C:
	// bge cr6,0x823303b0
	if (!ctx.cr6.lt) goto loc_823303B0;
	// lwz r11,488(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 488);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// stw r9,488(r27)
	PPC_STORE_U32(ctx.r27.u32 + 488, ctx.r9.u32);
loc_823303B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82330230) {
	__imp__sub_82330230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823303B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823303C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x823303D8;
	sub_82332AF8(ctx, base);
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// addi r31,r30,504
	ctx.r31.s64 = ctx.r30.s64 + 504;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x823303f4
	if (ctx.cr6.lt) goto loc_823303F4;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x8233066c
	if (!ctx.cr6.gt) goto loc_8233066C;
loc_823303F4:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8233066c
	if (ctx.cr6.eq) goto loc_8233066C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8233066c
	if (ctx.cr6.eq) goto loc_8233066C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8233066c
	if (ctx.cr6.eq) goto loc_8233066C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233066c
	if (!ctx.cr6.eq) goto loc_8233066C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330434
	if (ctx.cr6.eq) goto loc_82330434;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82330434:
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330450
	if (ctx.cr6.eq) goto loc_82330450;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r11,700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 700, ctx.r11.u32);
loc_82330450:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82334150
	ctx.lr = 0x8233045C;
	sub_82334150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233066c
	if (ctx.cr6.lt) goto loc_8233066C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r23,11
	ctx.r23.s64 = 11;
	// li r24,9
	ctx.r24.s64 = 9;
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
loc_82330474:
	// lbz r11,1646(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1646);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330530
	if (ctx.cr6.eq) goto loc_82330530;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82330494
	if (ctx.cr6.eq) goto loc_82330494;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82330530
	if (!ctx.cr6.eq) goto loc_82330530;
loc_82330494:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x8232dad8
	ctx.lr = 0x823304A0;
	sub_8232DAD8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330530
	if (ctx.cr6.eq) goto loc_82330530;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82330530
	if (!ctx.cr6.eq) goto loc_82330530;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82330524
	if (!ctx.cr6.eq) goto loc_82330524;
	// lwz r10,636(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 636);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330524
	if (ctx.cr6.eq) goto loc_82330524;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,-12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lfs f0,-32488(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -32488);
	ctx.f0.f64 = double(temp.f32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x82330530
	if (!ctx.cr6.gt) goto loc_82330530;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// b 0x82330530
	goto loc_82330530;
loc_82330524:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82330530
	if (!ctx.cr6.eq) goto loc_82330530;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
loc_82330530:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823305d4
	if (ctx.cr6.gt) goto loc_823305D4;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1368
	ctx.r12.s64 = ctx.r12.s64 + 1368;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8233066C;
	case 1:
		goto loc_8233066C;
	case 2:
		goto loc_8233066C;
	case 3:
		goto loc_8233066C;
	case 4:
		goto loc_8233066C;
	case 5:
		goto loc_823305D4;
	case 6:
		goto loc_823305D4;
	case 7:
		goto loc_82330588;
	case 8:
		goto loc_82330588;
	case 9:
		goto loc_82330588;
	case 10:
		goto loc_82330588;
	case 11:
		goto loc_82330588;
	default:
		return;
	}
	// lwz r17,1644(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1644);
	// lwz r17,1644(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1644);
	// lwz r17,1644(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1644);
	// lwz r17,1644(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1644);
	// lwz r17,1644(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1644);
	// lwz r17,1492(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1492);
	// lwz r17,1492(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1492);
	// lwz r17,1416(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1416);
	// lwz r17,1416(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1416);
	// lwz r17,1416(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1416);
	// lwz r17,1416(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1416);
	// lwz r17,1416(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1416);
loc_82330588:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82330654
	if (ctx.cr6.eq) goto loc_82330654;
	// lwz r11,296(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330654
	if (ctx.cr6.eq) goto loc_82330654;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x82331a00
	ctx.lr = 0x823305B0;
	sub_82331A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330654
	if (!ctx.cr6.eq) goto loc_82330654;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82319240
	ctx.lr = 0x823305D0;
	sub_82319240(ctx, base);
	// b 0x82330654
	goto loc_82330654;
loc_823305D4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823305f8
	if (ctx.cr6.eq) goto loc_823305F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d580
	ctx.lr = 0x823305EC;
	sub_8232D580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823305f8
	if (ctx.cr6.eq) goto loc_823305F8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823305F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331ee0
	ctx.lr = 0x82330604;
	sub_82331EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233063c
	if (ctx.cr6.eq) goto loc_8233063C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x820da730
	ctx.lr = 0x82330618;
	sub_820DA730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233063c
	if (ctx.cr6.eq) goto loc_8233063C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8233063c
	if (ctx.cr6.eq) goto loc_8233063C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x82330644
	if (ctx.cr6.lt) goto loc_82330644;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bgt cr6,0x82330644
	if (ctx.cr6.gt) goto loc_82330644;
loc_8233063C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82330654
	if (ctx.cr6.eq) goto loc_82330654;
loc_82330644:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232c9c8
	ctx.lr = 0x82330654;
	sub_8232C9C8(ctx, base);
loc_82330654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bl 0x82334150
	ctx.lr = 0x82330664;
	sub_82334150(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82330474
	if (!ctx.cr6.gt) goto loc_82330474;
loc_8233066C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823303B8) {
	__imp__sub_823303B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82330674) {
	__imp__sub_82330674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82330680;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r4,692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x82332c28
	ctx.lr = 0x823306A0;
	sub_82332C28(ctx, base);
	// mulli r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 * 28;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,500(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823306d4
	if (!ctx.cr6.gt) goto loc_823306D4;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r9,500(r28)
	PPC_STORE_U32(ctx.r28.u32 + 500, ctx.r9.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,500(r28)
	PPC_STORE_U32(ctx.r28.u32 + 500, ctx.r7.u32);
loc_823306D4:
	// lwz r11,492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// lwz r22,40(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330924
	if (ctx.cr6.eq) goto loc_82330924;
	// subf. r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r11.u32);
	// bgt 0x82330924
	if (ctx.cr0.gt) goto loc_82330924;
	// addi r11,r26,18
	ctx.r11.s64 = ctx.r26.s64 + 18;
	// mulli r23,r11,28
	ctx.r23.s64 = ctx.r11.s64 * 28;
	// lwzx r10,r23,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x823307c0
	if (!ctx.cr6.eq) goto loc_823307C0;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x8232d970
	ctx.lr = 0x8233070C;
	sub_8232D970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823307c0
	if (ctx.cr6.eq) goto loc_823307C0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d8d0
	ctx.lr = 0x82330724;
	sub_8232D8D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823307c0
	if (!ctx.cr6.eq) goto loc_823307C0;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-6536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6536);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8233077c
	if (ctx.cr6.eq) goto loc_8233077C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x82330768;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// li r12,492
	ctx.r12.s64 = 492;
	// stfiwx f11,r28,r12
	PPC_STORE_U32(ctx.r28.u32 + ctx.r12.u32, ctx.f11.u32);
	// b 0x82330784
	goto loc_82330784;
loc_8233077C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r11.u32);
loc_82330784:
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823307ac
	if (ctx.cr6.eq) goto loc_823307AC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x823307ac
	if (!ctx.cr6.lt) goto loc_823307AC;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// stw r10,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r10.u32);
loc_823307AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r23,r30
	PPC_STORE_U32(ctx.r23.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_823307C0:
	// lwz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 508);
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823307f4
	if (!ctx.cr6.eq) goto loc_823307F4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d830
	ctx.lr = 0x823307E4;
	sub_8232D830(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823307f8
	if (!ctx.cr6.eq) goto loc_823307F8;
loc_823307F4:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_823307F8:
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82330814
	if (!ctx.cr6.eq) goto loc_82330814;
	// lbz r11,1657(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1657);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330818
	if (!ctx.cr6.eq) goto loc_82330818;
loc_82330814:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82330818:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x8232dad8
	ctx.lr = 0x82330824;
	sub_8232DAD8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// and r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// beq cr6,0x82330888
	if (ctx.cr6.eq) goto loc_82330888;
	// lwz r10,60(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82330888
	if (!ctx.cr6.eq) goto loc_82330888;
	// lwz r10,700(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// rlwinm r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330870
	if (ctx.cr6.eq) goto loc_82330870;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82330868
	if (ctx.cr6.eq) goto loc_82330868;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82330880
	goto loc_82330880;
loc_82330868:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82330880
	if (!ctx.cr6.eq) goto loc_82330880;
loc_82330870:
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 & ctx.r31.u64;
loc_82330880:
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_82330888:
	// lwzx r8,r23,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8233089c
	if (ctx.cr6.lt) goto loc_8233089C;
	// cmpwi cr6,r8,21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 21, ctx.xer);
	// ble cr6,0x823308ec
	if (!ctx.cr6.gt) goto loc_823308EC;
loc_8233089C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823308ac
	if (!ctx.cr6.eq) goto loc_823308AC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823308ec
	if (ctx.cr6.eq) goto loc_823308EC;
loc_823308AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823308ec
	if (ctx.cr6.eq) goto loc_823308EC;
	// lhz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 24);
	// lwz r10,692(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823308ec
	if (!ctx.cr6.eq) goto loc_823308EC;
	// lwz r9,536(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 536);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r30,848
	ctx.r11.s64 = ctx.r30.s64 + 848;
loc_823308D0:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8233095c
	if (ctx.cr6.eq) goto loc_8233095C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x823308d0
	if (ctx.cr6.lt) goto loc_823308D0;
loc_823308EC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82330904
	if (ctx.cr6.eq) goto loc_82330904;
	// lwz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 508);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330920
	if (ctx.cr6.eq) goto loc_82330920;
loc_82330904:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d8d0
	ctx.lr = 0x82330910;
	sub_8232D8D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330920
	if (!ctx.cr6.eq) goto loc_82330920;
loc_8233091C:
	// stw r24,512(r28)
	PPC_STORE_U32(ctx.r28.u32 + 512, ctx.r24.u32);
loc_82330920:
	// stw r24,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r24.u32);
loc_82330924:
	// lwz r11,496(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330950
	if (ctx.cr6.eq) goto loc_82330950;
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 496, ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82330954
	if (ctx.cr6.eq) goto loc_82330954;
loc_82330950:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82330954:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8233095C:
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823308ec
	if (ctx.cr6.eq) goto loc_823308EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// stw r11,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r11.u32);
	// beq cr6,0x8233091c
	if (ctx.cr6.eq) goto loc_8233091C;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// beq cr6,0x8233091c
	if (ctx.cr6.eq) goto loc_8233091C;
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// beq cr6,0x8233091c
	if (ctx.cr6.eq) goto loc_8233091C;
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// beq cr6,0x8233091c
	if (ctx.cr6.eq) goto loc_8233091C;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x8233091c
	if (ctx.cr6.eq) goto loc_8233091C;
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x823309d8
	if (!ctx.cr6.eq) goto loc_823309D8;
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823309d0
	if (ctx.cr6.eq) goto loc_823309D0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x823309d0
	if (!ctx.cr6.lt) goto loc_823309D0;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// stw r10,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r10.u32);
loc_823309D0:
	// stwx r24,r23,r30
	PPC_STORE_U32(ctx.r23.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x82330924
	goto loc_82330924;
loc_823309D8:
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x823309f8
	if (ctx.cr6.eq) goto loc_823309F8;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// beq cr6,0x823309f8
	if (ctx.cr6.eq) goto loc_823309F8;
	// cmpwi cr6,r8,14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 14, ctx.xer);
	// beq cr6,0x823309f8
	if (ctx.cr6.eq) goto loc_823309F8;
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// bne cr6,0x82330924
	if (!ctx.cr6.eq) goto loc_82330924;
loc_823309F8:
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823309d0
	if (ctx.cr6.eq) goto loc_823309D0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x823309d0
	if (!ctx.cr6.lt) goto loc_823309D0;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stwx r24,r23,r30
	PPC_STORE_U32(ctx.r23.u32 + ctx.r30.u32, ctx.r24.u32);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// stw r10,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r10.u32);
	// b 0x82330924
	goto loc_82330924;
}

PPC_WEAK_FUNC(sub_82330678) {
	__imp__sub_82330678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82330A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82330a6c
	if (ctx.cr6.lt) goto loc_82330A6C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x82330c5c
	if (!ctx.cr6.gt) goto loc_82330C5C;
loc_82330A6C:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82330acc
	if (ctx.cr6.eq) goto loc_82330ACC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330c5c
	if (!ctx.cr6.eq) goto loc_82330C5C;
loc_82330ACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231d908
	ctx.lr = 0x82330AD4;
	sub_8231D908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330af4
	if (ctx.cr6.eq) goto loc_82330AF4;
loc_82330AE0:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82330c4c
	goto loc_82330C4C;
loc_82330AF4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330ae0
	if (!ctx.cr6.eq) goto loc_82330AE0;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82330b24
	if (ctx.cr6.eq) goto loc_82330B24;
loc_82330B14:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// b 0x82330c48
	goto loc_82330C48;
loc_82330B24:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82330b40
	if (ctx.cr6.eq) goto loc_82330B40;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330b14
	if (ctx.cr6.eq) goto loc_82330B14;
loc_82330B40:
	// lhz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82330ba0
	if (ctx.cr6.eq) goto loc_82330BA0;
	// rlwinm r10,r10,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330b64
	if (ctx.cr6.eq) goto loc_82330B64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330ba0
	if (!ctx.cr6.eq) goto loc_82330BA0;
loc_82330B64:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330b80
	if (ctx.cr6.eq) goto loc_82330B80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333760
	ctx.lr = 0x82330B74;
	sub_82333760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330ba0
	if (ctx.cr6.eq) goto loc_82330BA0;
loc_82330B80:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// rlwinm r5,r11,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// bl 0x8232cba0
	ctx.lr = 0x82330B98;
	sub_8232CBA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82330BA0:
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82330c30
	if (!ctx.cr6.eq) goto loc_82330C30;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82330bcc
	if (ctx.cr6.eq) goto loc_82330BCC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82330bcc
	if (ctx.cr6.eq) goto loc_82330BCC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82330c30
	if (!ctx.cr6.eq) goto loc_82330C30;
loc_82330BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82334150
	ctx.lr = 0x82330BD8;
	sub_82334150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330c5c
	if (ctx.cr6.lt) goto loc_82330C5C;
	// addi r29,r31,488
	ctx.r29.s64 = ctx.r31.s64 + 488;
loc_82330BE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e958
	ctx.lr = 0x82330BF0;
	sub_8232E958(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82330c10
	if (!ctx.cr6.lt) goto loc_82330C10;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
loc_82330C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bl 0x82334150
	ctx.lr = 0x82330C20;
	sub_82334150(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82330be4
	if (!ctx.cr6.gt) goto loc_82330BE4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82330C30:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330c5c
	if (ctx.cr6.eq) goto loc_82330C5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da5b0
	ctx.lr = 0x82330C40;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330c5c
	if (!ctx.cr6.eq) goto loc_82330C5C;
loc_82330C48:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82330C4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232cba0
	ctx.lr = 0x82330C5C;
	sub_8232CBA0(ctx, base);
loc_82330C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82330A28) {
	__imp__sub_82330A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82330C64) {
	__imp__sub_82330C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330C68) {
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
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x82330C8C;
	sub_82332AF8(ctx, base);
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82330cec
	if (ctx.cr6.eq) goto loc_82330CEC;
	// addi r10,r30,18
	ctx.r10.s64 = ctx.r30.s64 + 18;
	// li r8,15
	ctx.r8.s64 = 15;
	// mulli r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 * 28;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r6,664(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// stw r6,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r7.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bge cr6,0x82330ce0
	if (!ctx.cr6.lt) goto loc_82330CE0;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// li r9,5
	ctx.r9.s64 = 5;
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// rlwimi r8,r9,2,23,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFFFFFFFDFF) | (ctx.r8.u64 & 0x200);
	// stw r8,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r8.u32);
loc_82330CE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82327558
	ctx.lr = 0x82330CE8;
	sub_82327558(ctx, base);
	// b 0x82330d38
	goto loc_82330D38;
loc_82330CEC:
	// addi r8,r30,18
	ctx.r8.s64 = ctx.r30.s64 + 18;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r7,r8,28
	ctx.r7.s64 = ctx.r8.s64 * 28;
	// rlwinm r6,r10,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r5,r9,0,23,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r6.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r10,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r10.u32);
	// stw r10,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r10.u32);
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x82330d38
	if (!ctx.cr6.lt) goto loc_82330D38;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// stw r8,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r8.u32);
loc_82330D38:
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

PPC_WEAK_FUNC(sub_82330C68) {
	__imp__sub_82330C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82330D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,680(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 680);
	// bl 0x82322348
	ctx.lr = 0x82330D70;
	sub_82322348(ctx, base);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82330d94
	if (ctx.cr6.eq) goto loc_82330D94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82330d94
	if (ctx.cr6.eq) goto loc_82330D94;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82330d98
	if (!ctx.cr6.eq) goto loc_82330D98;
loc_82330D94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82330D98:
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// rlwinm r6,r10,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r9.u32);
	// stw r29,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r29.u32);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// stw r6,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// bge cr6,0x82330dcc
	if (!ctx.cr6.lt) goto loc_82330DCC;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_82330DCC:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322840
	ctx.lr = 0x82330DD8;
	sub_82322840(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x82330e5c
	if (ctx.cr6.eq) goto loc_82330E5C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330e64
	if (!ctx.cr6.eq) goto loc_82330E64;
	// bl 0x82332af8
	ctx.lr = 0x82330E00;
	sub_82332AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334150
	ctx.lr = 0x82330E0C;
	sub_82334150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330e64
	if (ctx.cr6.lt) goto loc_82330E64;
	// addi r30,r31,488
	ctx.r30.s64 = ctx.r31.s64 + 488;
loc_82330E18:
	// lwz r11,660(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 660);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x82330e40
	if (!ctx.cr6.lt) goto loc_82330E40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// ori r8,r9,19
	ctx.r8.u64 = ctx.r9.u64 | 19;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82330E40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bl 0x82334150
	ctx.lr = 0x82330E50;
	sub_82334150(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82330e18
	if (!ctx.cr6.gt) goto loc_82330E18;
	// b 0x82330e64
	goto loc_82330E64;
loc_82330E5C:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
loc_82330E64:
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x82332af8
	ctx.lr = 0x82330E6C;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82330e80
	if (!ctx.cr6.eq) goto loc_82330E80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e9b0
	ctx.lr = 0x82330E80;
	sub_8232E9B0(ctx, base);
loc_82330E80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82330D50) {
	__imp__sub_82330D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82330E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x82332af8
	ctx.lr = 0x82330EA8;
	sub_82332AF8(ctx, base);
	// lbz r11,1657(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1657);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330f24
	if (!ctx.cr6.eq) goto loc_82330F24;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82330f24
	if (!ctx.cr6.eq) goto loc_82330F24;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330f24
	if (ctx.cr6.eq) goto loc_82330F24;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330f24
	if (ctx.cr6.eq) goto loc_82330F24;
	// lbz r10,1665(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1665);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82330f14
	if (ctx.cr6.eq) goto loc_82330F14;
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330f14
	if (ctx.cr6.eq) goto loc_82330F14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ec10
	ctx.lr = 0x82330F0C;
	sub_8232EC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82330F14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82330F24:
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x82332b10
	ctx.lr = 0x82330F2C;
	sub_82332B10(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// stw r7,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r7.u32);
	// lwz r6,576(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 576);
	// stw r6,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r6.u32);
	// stw r8,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r8.u32);
	// bge cr6,0x82330f70
	if (!ctx.cr6.lt) goto loc_82330F70;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// li r10,1
	ctx.r10.s64 = 1;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwimi r9,r10,1,23,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFFFFFFFDFF) | (ctx.r9.u64 & 0x200);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
loc_82330F70:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82330f9c
	if (ctx.cr6.eq) goto loc_82330F9C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319240
	ctx.lr = 0x82330F9C;
	sub_82319240(ctx, base);
loc_82330F9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82330E88) {
	__imp__sub_82330E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82330FA4) {
	__imp__sub_82330FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82330FA8) {
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
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82330fe0
	if (!ctx.cr6.eq) goto loc_82330FE0;
loc_82330FC8:
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
loc_82330FE0:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82330fc8
	if (!ctx.cr6.gt) goto loc_82330FC8;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82330fc8
	if (ctx.cr6.eq) goto loc_82330FC8;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330fc8
	if (ctx.cr6.eq) goto loc_82330FC8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x82322348
	ctx.lr = 0x82331014;
	sub_82322348(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// bl 0x82330d50
	ctx.lr = 0x82331024;
	sub_82330D50(ctx, base);
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

PPC_WEAK_FUNC(sub_82330FA8) {
	__imp__sub_82330FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233103C) {
	__imp__sub_8233103C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82331048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,172(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r11,r10,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// rlwinm r11,r10,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// bl 0x8232ed80
	ctx.lr = 0x823310A0;
	sub_8232ED80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x823310c4
	if (ctx.cr6.lt) goto loc_823310C4;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bgt cr6,0x823310c4
	if (ctx.cr6.gt) goto loc_823310C4;
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
loc_823310C4:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x8233127c
	if (ctx.cr6.eq) goto loc_8233127C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x8233127c
	if (ctx.cr6.eq) goto loc_8233127C;
	// lhz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820da5b0
	ctx.lr = 0x823310E4;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823310f0
	if (ctx.cr6.eq) goto loc_823310F0;
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
loc_823310F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82330fa8
	ctx.lr = 0x823310F8;
	sub_82330FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233112c
	if (ctx.cr6.eq) goto loc_8233112C;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233112c
	if (!ctx.cr6.eq) goto loc_8233112C;
	// lwz r29,684(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// b 0x8233114c
	goto loc_8233114C;
loc_8233112C:
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233127c
	if (ctx.cr6.eq) goto loc_8233127C;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233127c
	if (!ctx.cr6.eq) goto loc_8233127C;
	// lwz r29,688(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
loc_8233114C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334778
	ctx.lr = 0x82331158;
	sub_82334778(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823311b0
	if (!ctx.cr6.eq) goto loc_823311B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82334898
	ctx.lr = 0x82331174;
	sub_82334898(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331190
	if (ctx.cr6.eq) goto loc_82331190;
	// bl 0x82332af8
	ctx.lr = 0x82331184;
	sub_82332AF8(ctx, base);
	// lbz r11,1653(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1653);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82331190:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823311b0
	if (!ctx.cr6.eq) goto loc_823311B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232ecf0
	ctx.lr = 0x823311A8;
	sub_8232ECF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823311B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823311B8;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333f60
	ctx.lr = 0x823311C4;
	sub_82333F60(ctx, base);
	// lbz r11,1658(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1658);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823311dc
	if (ctx.cr6.eq) goto loc_823311DC;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8233127c
	if (ctx.cr6.eq) goto loc_8233127C;
loc_823311DC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x82322348
	ctx.lr = 0x823311EC;
	sub_82322348(ctx, base);
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82331218
	if (ctx.cr6.eq) goto loc_82331218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x82331204;
	sub_82332B28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26232
	ctx.r4.s64 = ctx.r11.s64 + -26232;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82331218;
	sub_822830E8(ctx, base);
loc_82331218:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331240
	if (!ctx.cr6.eq) goto loc_82331240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x8233122C;
	sub_82332B28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26260
	ctx.r4.s64 = ctx.r11.s64 + -26260;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82331240;
	sub_822830E8(ctx, base);
loc_82331240:
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x82331274
	if (!ctx.cr6.eq) goto loc_82331274;
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331264
	if (ctx.cr6.eq) goto loc_82331264;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x82331274
	if (!ctx.cr6.eq) goto loc_82331274;
loc_82331264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232e9b0
	ctx.lr = 0x8233126C;
	sub_8232E9B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82331274:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82330d50
	ctx.lr = 0x8233127C;
	sub_82330D50(ctx, base);
loc_8233127C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82331040) {
	__imp__sub_82331040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331284) {
	__imp__sub_82331284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331288) {
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
	// addi r11,r6,18
	ctx.r11.s64 = ctx.r6.s64 + 18;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 29, ctx.xer);
	// bgt cr6,0x82331648
	if (ctx.cr6.gt) goto loc_82331648;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4824
	ctx.r12.s64 = ctx.r12.s64 + 4824;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82331448;
	case 1:
		goto loc_82331448;
	case 2:
		goto loc_8233141C;
	case 3:
		goto loc_8233141C;
	case 4:
		goto loc_8233141C;
	case 5:
		goto loc_82331648;
	case 6:
		goto loc_82331648;
	case 7:
		goto loc_8233136C;
	case 8:
		goto loc_8233136C;
	case 9:
		goto loc_82331350;
	case 10:
		goto loc_82331350;
	case 11:
		goto loc_82331388;
	case 12:
		goto loc_823313C8;
	case 13:
		goto loc_823313E4;
	case 14:
		goto loc_82331400;
	case 15:
		goto loc_82331468;
	case 16:
		goto loc_82331488;
	case 17:
		goto loc_823314A8;
	case 18:
		goto loc_823314F4;
	case 19:
		goto loc_82331520;
	case 20:
		goto loc_82331400;
	case 21:
		goto loc_8233154C;
	case 22:
		goto loc_82331564;
	case 23:
		goto loc_82331358;
	case 24:
		goto loc_82331400;
	case 25:
		goto loc_823315B4;
	case 26:
		goto loc_82331358;
	case 27:
		goto loc_82331400;
	case 28:
		goto loc_82331600;
	case 29:
		goto loc_82331600;
	default:
		return;
	}
	// lwz r17,5192(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5192);
	// lwz r17,5192(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5192);
	// lwz r17,5148(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5148);
	// lwz r17,5148(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5148);
	// lwz r17,5148(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5148);
	// lwz r17,5704(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5704);
	// lwz r17,5704(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5704);
	// lwz r17,4972(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4972);
	// lwz r17,4972(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4972);
	// lwz r17,4944(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4944);
	// lwz r17,4944(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4944);
	// lwz r17,5000(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5000);
	// lwz r17,5064(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5064);
	// lwz r17,5092(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5092);
	// lwz r17,5120(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5120);
	// lwz r17,5224(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5224);
	// lwz r17,5256(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5256);
	// lwz r17,5288(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5288);
	// lwz r17,5364(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5364);
	// lwz r17,5408(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5408);
	// lwz r17,5120(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5120);
	// lwz r17,5452(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5452);
	// lwz r17,5476(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5476);
	// lwz r17,4952(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4952);
	// lwz r17,5120(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5120);
	// lwz r17,5556(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5556);
	// lwz r17,4952(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4952);
	// lwz r17,5120(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5120);
	// lwz r17,5632(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5632);
	// lwz r17,5632(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5632);
loc_82331350:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82330090
	ctx.lr = 0x82331358;
	sub_82330090(ctx, base);
loc_82331358:
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
loc_8233136C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82330230
	ctx.lr = 0x82331374;
	sub_82330230(ctx, base);
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
loc_82331388:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bge cr6,0x823313b4
	if (!ctx.cr6.lt) goto loc_823313B4;
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// stw r8,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r8.u32);
loc_823313B4:
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
loc_823313C8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8232e548
	ctx.lr = 0x823313D0;
	sub_8232E548(ctx, base);
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
loc_823313E4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82330c68
	ctx.lr = 0x823313EC;
	sub_82330C68(ctx, base);
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
loc_82331400:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8232e958
	ctx.lr = 0x82331408;
	sub_8232E958(ctx, base);
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
loc_8233141C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82331434
	if (!ctx.cr6.eq) goto loc_82331434;
	// lwz r4,504(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// addi r5,r8,124
	ctx.r5.s64 = ctx.r8.s64 + 124;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8232d0f8
	ctx.lr = 0x82331434;
	sub_8232D0F8(ctx, base);
loc_82331434:
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
loc_82331448:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82331454
	if (!ctx.cr6.eq) goto loc_82331454;
	// bl 0x8232d520
	ctx.lr = 0x82331454;
	sub_8232D520(ctx, base);
loc_82331454:
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
loc_82331468:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82331474
	if (!ctx.cr6.eq) goto loc_82331474;
	// bl 0x8232e9b0
	ctx.lr = 0x82331474;
	sub_8232E9B0(ctx, base);
loc_82331474:
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
loc_82331488:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82331494
	if (!ctx.cr6.eq) goto loc_82331494;
	// bl 0x8232eae0
	ctx.lr = 0x82331494;
	sub_8232EAE0(ctx, base);
loc_82331494:
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
loc_823314A8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823314e0
	if (!ctx.cr6.eq) goto loc_823314E0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823314dc
	if (ctx.cr6.lt) goto loc_823314DC;
	// addi r4,r8,124
	ctx.r4.s64 = ctx.r8.s64 + 124;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82330e88
	ctx.lr = 0x823314C8;
	sub_82330E88(ctx, base);
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
loc_823314DC:
	// bl 0x8232ec10
	ctx.lr = 0x823314E0;
	sub_8232EC10(ctx, base);
loc_823314E0:
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
loc_823314F4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823314e0
	if (!ctx.cr6.eq) goto loc_823314E0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823314dc
	if (ctx.cr6.eq) goto loc_823314DC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8232eb48
	ctx.lr = 0x8233150C;
	sub_8232EB48(ctx, base);
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
loc_82331520:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823314e0
	if (!ctx.cr6.eq) goto loc_823314E0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823314dc
	if (ctx.cr6.eq) goto loc_823314DC;
	// li r4,87
	ctx.r4.s64 = 87;
	// bl 0x82322840
	ctx.lr = 0x82331538;
	sub_82322840(ctx, base);
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
loc_8233154C:
	// bl 0x8232f238
	ctx.lr = 0x82331550;
	sub_8232F238(ctx, base);
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
loc_82331564:
	// mulli r9,r5,28
	ctx.r9.s64 = ctx.r5.s64 * 28;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,24
	ctx.r8.s64 = 24;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r10,492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 492, ctx.r10.u32);
	// stw r10,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r10.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bge cr6,0x823315a0
	if (!ctx.cr6.lt) goto loc_823315A0;
	// lwz r11,488(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 488);
	// li r10,3
	ctx.r10.s64 = 3;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// rlwimi r8,r10,3,23,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFFFFFFFFDFF) | (ctx.r8.u64 & 0x200);
	// stw r8,488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 488, ctx.r8.u32);
loc_823315A0:
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
loc_823315B4:
	// mulli r9,r5,28
	ctx.r9.s64 = ctx.r5.s64 * 28;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,27
	ctx.r8.s64 = 27;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r10,492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 492, ctx.r10.u32);
	// stw r10,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x823315ec
	if (!ctx.cr6.lt) goto loc_823315EC;
	// lwz r11,488(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 488);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r8,0,23,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFFDFF) | (ctx.r10.u64 & 0x200);
	// stw r10,488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 488, ctx.r10.u32);
loc_823315EC:
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
loc_82331600:
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,492(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 492);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82331634
	if (!ctx.cr6.eq) goto loc_82331634;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x82331634
	if (!ctx.cr6.lt) goto loc_82331634;
	// lwz r11,488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// stw r8,488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 488, ctx.r8.u32);
loc_82331634:
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
loc_82331648:
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

PPC_WEAK_FUNC(sub_82331288) {
	__imp__sub_82331288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233165C) {
	__imp__sub_8233165C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82331668;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8232c4d8
	ctx.lr = 0x82331690;
	sub_8232C4D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823316c0
	if (!ctx.cr6.eq) goto loc_823316C0;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
loc_823316C0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331288
	ctx.lr = 0x823316D4;
	sub_82331288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
	// lwz r11,692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331700
	if (!ctx.cr6.eq) goto loc_82331700;
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// stwx r10,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82331700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82331724
	if (ctx.cr6.eq) goto loc_82331724;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82331724:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ef60
	ctx.lr = 0x82331730;
	sub_8232EF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r11,0,3,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFF800;
	// rlwinm r10,r10,0,20,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0000FFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
	// addi r28,r27,124
	ctx.r28.s64 = ctx.r27.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e3f0
	ctx.lr = 0x82331764;
	sub_8232E3F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232db48
	ctx.lr = 0x82331774;
	sub_8232DB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331790
	if (ctx.cr6.eq) goto loc_82331790;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e1c0
	ctx.lr = 0x82331790;
	sub_8232E1C0(ctx, base);
loc_82331790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82331660) {
	__imp__sub_82331660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823317A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232fc60
	ctx.lr = 0x823317B8;
	sub_8232FC60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823317e8
	if (!ctx.cr6.eq) goto loc_823317E8;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823319d0
	if (ctx.cr6.eq) goto loc_823319D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ba30
	ctx.lr = 0x823317E0;
	sub_8232BA30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823317E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232fd10
	ctx.lr = 0x823317F0;
	sub_8232FD10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ba30
	ctx.lr = 0x823317FC;
	sub_8232BA30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232be70
	ctx.lr = 0x82331808;
	sub_8232BE70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ee20
	ctx.lr = 0x82331814;
	sub_8232EE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823319d0
	if (!ctx.cr6.eq) goto loc_823319D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9c8
	ctx.lr = 0x82331828;
	sub_8232D9C8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823340d8
	ctx.lr = 0x82331844;
	sub_823340D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82331888
	if (ctx.cr6.lt) goto loc_82331888;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82331854:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82330678
	ctx.lr = 0x82331864;
	sub_82330678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x823340d8
	ctx.lr = 0x82331878;
	sub_823340D8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82331854
	if (!ctx.cr6.gt) goto loc_82331854;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82331888:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d8d0
	ctx.lr = 0x82331894;
	sub_8232D8D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331928
	if (!ctx.cr6.eq) goto loc_82331928;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d8d0
	ctx.lr = 0x823318AC;
	sub_8232D8D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331928
	if (!ctx.cr6.eq) goto loc_82331928;
	// addi r30,r27,124
	ctx.r30.s64 = ctx.r27.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232f950
	ctx.lr = 0x823318C8;
	sub_8232F950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232f2a0
	ctx.lr = 0x823318D0;
	sub_8232F2A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232f6c0
	ctx.lr = 0x823318D8;
	sub_8232F6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331040
	ctx.lr = 0x823318E0;
	sub_82331040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82330a28
	ctx.lr = 0x823318EC;
	sub_82330A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823303b8
	ctx.lr = 0x823318F8;
	sub_823303B8(ctx, base);
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bge cr6,0x82331908
	if (!ctx.cr6.lt) goto loc_82331908;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82331908:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e788
	ctx.lr = 0x82331918;
	sub_8232E788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232efc8
	ctx.lr = 0x82331920;
	sub_8232EFC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232f110
	ctx.lr = 0x82331928;
	sub_8232F110(ctx, base);
loc_82331928:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82331964
	if (ctx.cr6.eq) goto loc_82331964;
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331950
	if (!ctx.cr6.eq) goto loc_82331950;
	// lbz r11,31(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331964
	if (ctx.cr6.eq) goto loc_82331964;
loc_82331950:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82331980
	if (!ctx.cr6.eq) goto loc_82331980;
loc_82331964:
	// lwz r11,504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82331980
	if (ctx.cr6.eq) goto loc_82331980;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82331980
	if (ctx.cr6.eq) goto loc_82331980;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8233198c
	if (!ctx.cr6.eq) goto loc_8233198C;
loc_82331980:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,708(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 708, temp.u32);
loc_8233198C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823340d8
	ctx.lr = 0x82331998;
	sub_823340D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823319d0
	if (ctx.cr6.lt) goto loc_823319D0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_823319A8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwzu r5,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331660
	ctx.lr = 0x823319BC;
	sub_82331660(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x823340d8
	ctx.lr = 0x823319C8;
	sub_823340D8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823319a8
	if (!ctx.cr6.gt) goto loc_823319A8;
loc_823319D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82331798) {
	__imp__sub_82331798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823319D8) {
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
	// bl 0x82332af8
	ctx.lr = 0x823319E8;
	sub_82332AF8(ctx, base);
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823319D8) {
	__imp__sub_823319D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823319FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823319FC) {
	__imp__sub_823319FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331A00) {
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
	// bl 0x82332af8
	ctx.lr = 0x82331A10;
	sub_82332AF8(ctx, base);
	// lbz r3,1635(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331A00) {
	__imp__sub_82331A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331A24) {
	__imp__sub_82331A24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331A28) {
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
	// bl 0x82332af8
	ctx.lr = 0x82331A38;
	sub_82332AF8(ctx, base);
	// lbz r11,1636(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1636);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82331A28) {
	__imp__sub_82331A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331A54) {
	__imp__sub_82331A54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82331A60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x82331A78;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,552(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82331a94
	if (ctx.cr6.lt) goto loc_82331A94;
loc_82331A88:
	// bl 0x82332c70
	ctx.lr = 0x82331A8C;
	sub_82332C70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82331A94:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332af8
	ctx.lr = 0x82331A9C;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331abc
	if (ctx.cr6.eq) goto loc_82331ABC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340b0
	ctx.lr = 0x82331AB4;
	sub_823340B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82331ABC:
	// lwz r25,528(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r31,544
	ctx.r28.s64 = ctx.r31.s64 + 544;
loc_82331ACC:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82331b2c
	if (ctx.cr6.eq) goto loc_82331B2C;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82331b2c
	if (ctx.cr6.eq) goto loc_82331B2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82331AE8;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82331b2c
	if (!ctx.cr6.eq) goto loc_82331B2C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332b10
	ctx.lr = 0x82331B00;
	sub_82332B10(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82331b18
	if (!ctx.cr6.eq) goto loc_82331B18;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82331b2c
	if (ctx.cr6.eq) goto loc_82331B2C;
loc_82331B18:
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82331a88
	if (!ctx.cr6.lt) goto loc_82331A88;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82331B2C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r26,15
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 15, ctx.xer);
	// blt cr6,0x82331acc
	if (ctx.cr6.lt) goto loc_82331ACC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82331A58) {
	__imp__sub_82331A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331B48) {
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
	// bl 0x82332af8
	ctx.lr = 0x82331B64;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331bbc
	if (ctx.cr6.eq) goto loc_82331BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x82331B7C;
	sub_82332B28(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82331bd8
	if (!ctx.cr6.eq) goto loc_82331BD8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26040
	ctx.r3.s64 = ctx.r11.s64 + -26040;
	// bl 0x822e8058
	ctx.lr = 0x82331B9C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331bbc
	if (ctx.cr6.eq) goto loc_82331BBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26056
	ctx.r3.s64 = ctx.r11.s64 + -26056;
	// bl 0x822e8058
	ctx.lr = 0x82331BB4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331c88
	if (!ctx.cr6.eq) goto loc_82331C88;
loc_82331BBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82331BC0:
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
loc_82331BD8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82331bbc
	if (!ctx.cr6.eq) goto loc_82331BBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x822e80c8
	ctx.lr = 0x82331BF0;
	sub_822E80C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331c88
	if (ctx.cr6.eq) goto loc_82331C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26076
	ctx.r3.s64 = ctx.r11.s64 + -26076;
	// bl 0x822e80c8
	ctx.lr = 0x82331C08;
	sub_822E80C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331c88
	if (ctx.cr6.eq) goto loc_82331C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26088
	ctx.r3.s64 = ctx.r11.s64 + -26088;
	// bl 0x822e80c8
	ctx.lr = 0x82331C20;
	sub_822E80C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331c88
	if (ctx.cr6.eq) goto loc_82331C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26108
	ctx.r3.s64 = ctx.r11.s64 + -26108;
	// bl 0x822e8058
	ctx.lr = 0x82331C38;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331c88
	if (ctx.cr6.eq) goto loc_82331C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26128
	ctx.r3.s64 = ctx.r11.s64 + -26128;
	// bl 0x822e8058
	ctx.lr = 0x82331C50;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331c88
	if (ctx.cr6.eq) goto loc_82331C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26140
	ctx.r3.s64 = ctx.r11.s64 + -26140;
	// bl 0x822e8058
	ctx.lr = 0x82331C68;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331c88
	if (ctx.cr6.eq) goto loc_82331C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-26168
	ctx.r3.s64 = ctx.r11.s64 + -26168;
	// bl 0x822e8058
	ctx.lr = 0x82331C80;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331bbc
	if (!ctx.cr6.eq) goto loc_82331BBC;
loc_82331C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82331bc0
	goto loc_82331BC0;
}

PPC_WEAK_FUNC(sub_82331B48) {
	__imp__sub_82331B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331C90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,848
	ctx.r3.s64 = ctx.r3.s64 + 848;
loc_82331C98:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x82331c98
	if (ctx.cr6.lt) goto loc_82331C98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331C90) {
	__imp__sub_82331C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331CBC) {
	__imp__sub_82331CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,848
	ctx.r3.s64 = ctx.r3.s64 + 848;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82331CD0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82331cf0
	if (ctx.cr6.eq) goto loc_82331CF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x82331cd0
	if (ctx.cr6.lt) goto loc_82331CD0;
	// blr 
	return;
loc_82331CF0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331CC0) {
	__imp__sub_82331CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331D04) {
	__imp__sub_82331D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331D08) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,848
	ctx.r9.s64 = ctx.r3.s64 + 848;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82331D18:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82331d60
	if (ctx.cr6.eq) goto loc_82331D60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x82331d18
	if (ctx.cr6.lt) goto loc_82331D18;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82331D3C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82331d64
	if (ctx.cr6.eq) goto loc_82331D64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x82331d3c
	if (ctx.cr6.lt) goto loc_82331D3C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
loc_82331D60:
	// blr 
	return;
loc_82331D64:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331D08) {
	__imp__sub_82331D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331D7C) {
	__imp__sub_82331D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331D80) {
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
	// bl 0x82332af8
	ctx.lr = 0x82331D9C;
	sub_82332AF8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82331DAC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82331ddc
	if (ctx.cr6.eq) goto loc_82331DDC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x82331dac
	if (ctx.cr6.lt) goto loc_82331DAC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82331DDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82331D80) {
	__imp__sub_82331D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331DFC) {
	__imp__sub_82331DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331E00) {
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
	// bl 0x82331d08
	ctx.lr = 0x82331E10;
	sub_82331D08(ctx, base);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331E00) {
	__imp__sub_82331E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331E34) {
	__imp__sub_82331E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331E38) {
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
	// bl 0x82331d08
	ctx.lr = 0x82331E48;
	sub_82331D08(ctx, base);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331E38) {
	__imp__sub_82331E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331E64) {
	__imp__sub_82331E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82331E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-6348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6348);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82331eac
	if (ctx.cr6.eq) goto loc_82331EAC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82331b48
	ctx.lr = 0x82331EA0;
	sub_82331B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331ed8
	if (!ctx.cr6.eq) goto loc_82331ED8;
loc_82331EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82331EB4;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,536(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// bl 0x82331d08
	ctx.lr = 0x82331EC4;
	sub_82331D08(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r29.s64;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82331ED8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82331E68) {
	__imp__sub_82331E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331EE0) {
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
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332c28
	ctx.lr = 0x82331F04;
	sub_82332C28(ctx, base);
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
loc_82331F10:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82331f50
	if (ctx.cr6.eq) goto loc_82331F50;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x82331f10
	if (ctx.cr6.lt) goto loc_82331F10;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82331F38:
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
loc_82331F50:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82331f38
	goto loc_82331F38;
}

PPC_WEAK_FUNC(sub_82331EE0) {
	__imp__sub_82331EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331F68) {
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
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// bl 0x821e77b8
	ctx.lr = 0x82331F7C;
	sub_821E77B8(ctx, base);
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82331F68) {
	__imp__sub_82331F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82331F94) {
	__imp__sub_82331F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82331F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82331FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82332c28
	ctx.lr = 0x82331FB8;
	sub_82332C28(ctx, base);
	// lwz r11,692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 692);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332af8
	ctx.lr = 0x82331FC8;
	sub_82332AF8(ctx, base);
	// lwz r6,528(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,536(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// bl 0x82331d08
	ctx.lr = 0x82331FD8;
	sub_82331D08(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r5,r31
	ctx.r5.s64 = -ctx.r31.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x823345c8
	ctx.lr = 0x82332000;
	sub_823345C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82331F98) {
	__imp__sub_82331F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82332010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820da6b8
	ctx.lr = 0x82332024;
	sub_820DA6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da730
	ctx.lr = 0x82332034;
	sub_820DA730(ctx, base);
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82332094
	if (ctx.cr6.eq) goto loc_82332094;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da4f0
	ctx.lr = 0x8233204C;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332094
	if (ctx.cr6.lt) goto loc_82332094;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332094
	if (ctx.cr6.eq) goto loc_82332094;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332094
	if (ctx.cr6.eq) goto loc_82332094;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da6b8
	ctx.lr = 0x82332088;
	sub_820DA6B8(ctx, base);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82332094:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332008) {
	__imp__sub_82332008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823320A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823320A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x823320BC;
	sub_82332AF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823320C8;
	sub_82332AF8(ctx, base);
	// lwz r3,552(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 552);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82332160
	if (!ctx.cr6.lt) goto loc_82332160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823320DC;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233213c
	if (ctx.cr6.eq) goto loc_8233213C;
	// bl 0x823340b0
	ctx.lr = 0x823320F4;
	sub_823340B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da6b8
	ctx.lr = 0x82332108;
	sub_820DA6B8(ctx, base);
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// subf r29,r3,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82332238
	if (!ctx.cr6.eq) goto loc_82332238;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da6b8
	ctx.lr = 0x82332128;
	sub_820DA6B8(ctx, base);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r29,r3,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8233213C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82331a58
	ctx.lr = 0x82332144;
	sub_82331A58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da730
	ctx.lr = 0x82332154;
	sub_820DA730(ctx, base);
	// subf r3,r3,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82332160:
	// bl 0x82332c70
	ctx.lr = 0x82332164;
	sub_82332C70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x82332178;
	sub_823DE090(ctx, base);
	// addi r28,r30,544
	ctx.r28.s64 = ctx.r30.s64 + 544;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82332184:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8233222c
	if (ctx.cr6.eq) goto loc_8233222C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82332198;
	sub_82332AF8(ctx, base);
	// lwz r11,552(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 552);
	// lwz r10,552(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8233222c
	if (!ctx.cr6.eq) goto loc_8233222C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823321B0;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823321f8
	if (ctx.cr6.eq) goto loc_823321F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da6b8
	ctx.lr = 0x823321CC;
	sub_820DA6B8(ctx, base);
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da648
	ctx.lr = 0x823321DC;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233222c
	if (ctx.cr6.eq) goto loc_8233222C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da6b8
	ctx.lr = 0x823321F4;
	sub_820DA6B8(ctx, base);
	// b 0x82332228
	goto loc_82332228;
loc_823321F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82332200;
	sub_82332AF8(ctx, base);
	// lwz r10,528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233222c
	if (!ctx.cr6.eq) goto loc_8233222C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da730
	ctx.lr = 0x82332228;
	sub_820DA730(ctx, base);
loc_82332228:
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_8233222C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82332184
	if (!ctx.cr0.eq) goto loc_82332184;
loc_82332238:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823320A0) {
	__imp__sub_823320A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332244) {
	__imp__sub_82332244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82332250;
	__savegprlr_24(ctx, base);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82332270;
	sub_823DE090(ctx, base);
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x823de090
	ctx.lr = 0x82332280;
	sub_823DE090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82332288;
	sub_82332AF8(ctx, base);
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8233236c
	if (ctx.cr6.lt) goto loc_8233236C;
	// addi r26,r28,544
	ctx.r26.s64 = ctx.r28.s64 + 544;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r27,1
	ctx.r27.s64 = 1;
loc_823322A4:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82332354
	if (ctx.cr6.eq) goto loc_82332354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823322B8;
	sub_82332AF8(ctx, base);
	// lwz r11,552(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 552);
	// lwz r10,552(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82332354
	if (!ctx.cr6.eq) goto loc_82332354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823322D4;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233230c
	if (ctx.cr6.eq) goto loc_8233230C;
	// lwz r10,536(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82332354
	if (!ctx.cr6.eq) goto loc_82332354;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e77b8
	ctx.lr = 0x82332308;
	sub_821E77B8(ctx, base);
	// b 0x82332350
	goto loc_82332350;
loc_8233230C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82332314;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82332354
	if (!ctx.cr6.eq) goto loc_82332354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82332334;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// bl 0x820da730
	ctx.lr = 0x82332350;
	sub_820DA730(ctx, base);
loc_82332350:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82332354:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x823322a4
	if (!ctx.cr0.eq) goto loc_823322A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8233236C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82332374;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82332394
	if (ctx.cr6.eq) goto loc_82332394;
	// bl 0x821e77b8
	ctx.lr = 0x8233238C;
	sub_821E77B8(ctx, base);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82332394:
	// bl 0x820da730
	ctx.lr = 0x82332398;
	sub_820DA730(ctx, base);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332248) {
	__imp__sub_82332248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823323A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823323A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332c20
	ctx.lr = 0x823323BC;
	sub_82332C20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x823323C4;
	sub_82332AF8(ctx, base);
	// addi r11,r24,18
	ctx.r11.s64 = ctx.r24.s64 + 18;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mulli r25,r11,28
	ctx.r25.s64 = ctx.r11.s64 * 28;
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823323e4
	if (ctx.cr6.eq) goto loc_823323E4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823323f0
	if (!ctx.cr6.eq) goto loc_823323F0;
loc_823323E4:
	// lwz r11,984(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823324c8
	if (ctx.cr6.eq) goto loc_823324C8;
loc_823323F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x820da730
	ctx.lr = 0x823323FC;
	sub_820DA730(ctx, base);
	// lwz r9,536(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
loc_8233240C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82332470
	if (ctx.cr6.eq) goto loc_82332470;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x8233240c
	if (ctx.cr6.lt) goto loc_8233240C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233242C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340b0
	ctx.lr = 0x82332438;
	sub_823340B0(ctx, base);
	// subf r29,r30,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82332448
	if (!ctx.cr6.gt) goto loc_82332448;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82332448:
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82332480
	if (ctx.cr6.eq) goto loc_82332480;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82332480
	if (ctx.cr6.eq) goto loc_82332480;
	// lwz r11,980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823324a4
	if (ctx.cr6.eq) goto loc_823324A4;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82332484
	goto loc_82332484;
loc_82332470:
	// addi r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8233242c
	goto loc_8233242C;
loc_82332480:
	// lwz r30,984(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 984);
loc_82332484:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340b0
	ctx.lr = 0x82332490;
	sub_823340B0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823324a4
	if (!ctx.cr6.lt) goto loc_823324A4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x823324a4
	if (!ctx.cr6.gt) goto loc_823324A4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823324A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823324c8
	if (ctx.cr6.eq) goto loc_823324C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331f98
	ctx.lr = 0x823324BC;
	sub_82331F98(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322840
	ctx.lr = 0x823324C8;
	sub_82322840(ctx, base);
loc_823324C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823323A0) {
	__imp__sub_823323A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823324D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r3,-6328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6328);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823324D0) {
	__imp__sub_823324D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823324DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823324DC) {
	__imp__sub_823324DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823324E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32484
	ctx.r9.s64 = ctx.r11.s64 + -32484;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823324E0) {
	__imp__sub_823324E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823324F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823324F4) {
	__imp__sub_823324F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823324F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32468
	ctx.r9.s64 = ctx.r11.s64 + -32468;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823324F8) {
	__imp__sub_823324F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233250C) {
	__imp__sub_8233250C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32420
	ctx.r9.s64 = ctx.r11.s64 + -32420;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332510) {
	__imp__sub_82332510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332524) {
	__imp__sub_82332524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82332530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-6312
	ctx.r29.s64 = ctx.r11.s64 + -6312;
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233256c
	if (ctx.cr6.eq) goto loc_8233256C;
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
loc_82332550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823175e8
	ctx.lr = 0x8233255C;
	sub_823175E8(ctx, base);
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82332550
	if (ctx.cr6.lt) goto loc_82332550;
loc_8233256C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332528) {
	__imp__sub_82332528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332574) {
	__imp__sub_82332574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82332580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823325c0
	if (!ctx.cr6.gt) goto loc_823325C0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8233259C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x823325A8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823325cc
	if (ctx.cr6.eq) goto loc_823325CC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8233259c
	if (ctx.cr6.lt) goto loc_8233259C;
loc_823325C0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823325CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332578) {
	__imp__sub_82332578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823325D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823325E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822db808
	ctx.lr = 0x823325F4;
	sub_822DB808(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8f0
	ctx.lr = 0x823325FC;
	sub_822DB8F0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-6328
	ctx.r30.s64 = ctx.r10.s64 + -6328;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r10,-25776
	ctx.r31.s64 = ctx.r10.s64 + -25776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ff50
	ctx.lr = 0x82332628;
	sub_8227FF50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332648
	if (!ctx.cr6.eq) goto loc_82332648;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-25804
	ctx.r4.s64 = ctx.r11.s64 + -25804;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82332648;
	sub_822830E8(ctx, base);
loc_82332648:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,19156
	ctx.r3.s64 = ctx.r11.s64 + 19156;
	// bl 0x822e5ed0
	ctx.lr = 0x82332658;
	sub_822E5ED0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x82332660;
	sub_822E6D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332704
	if (ctx.cr6.eq) goto loc_82332704;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,-25844
	ctx.r29.s64 = ctx.r11.s64 + -25844;
loc_82332674:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332704
	if (ctx.cr6.eq) goto loc_82332704;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82332698
	if (ctx.cr6.lt) goto loc_82332698;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82332698;
	sub_822830E8(ctx, base);
loc_82332698:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8233269C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233269c
	if (!ctx.cr6.eq) goto loc_8233269C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x822dc298
	ctx.lr = 0x823326C0;
	sub_822DC298(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stwx r3,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r3.u32);
loc_823326D8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bne cr6,0x823326d8
	if (!ctx.cr6.eq) goto loc_823326D8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x822e6d10
	ctx.lr = 0x823326F8;
	sub_822E6D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332674
	if (!ctx.cr6.eq) goto loc_82332674;
loc_82332704:
	// bl 0x822e5fb0
	ctx.lr = 0x82332708;
	sub_822E5FB0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r11,-25852
	ctx.r3.s64 = ctx.r11.s64 + -25852;
	// bl 0x82332578
	ctx.lr = 0x8233271C;
	sub_82332578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822db8d8
	ctx.lr = 0x8233272C;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823325D8) {
	__imp__sub_823325D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332734) {
	__imp__sub_82332734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332738) {
	__imp__sub_82332738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332748) {
	__imp__sub_82332748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332758) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8233275C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x8233275c
	if (!ctx.cr6.eq) goto loc_8233275C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332758) {
	__imp__sub_82332758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332774) {
	__imp__sub_82332774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82332780;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8480(r1)
	ea = -8480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,464
	ctx.r30.s64 = ctx.r1.s64 + 464;
	// li r25,7
	ctx.r25.s64 = 7;
	// addi r26,r11,-25704
	ctx.r26.s64 = ctx.r11.s64 + -25704;
	// addi r27,r10,-24404
	ctx.r27.s64 = ctx.r10.s64 + -24404;
loc_823327BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ec0a0
	ctx.lr = 0x823327C4;
	sub_822EC0A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8368
	ctx.lr = 0x823327DC;
	sub_822E8368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82332800
	if (!ctx.cr6.lt) goto loc_82332800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ec0a0
	ctx.lr = 0x823327EC;
	sub_822EC0A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82332800;
	sub_822830E8(ctx, base);
loc_82332800:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// stwu r25,12(r29)
	ea = 12 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// blt cr6,0x823327bc
	if (ctx.cr6.lt) goto loc_823327BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,10072
	ctx.r9.s64 = ctx.r11.s64 + 10072;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822ea3f8
	ctx.lr = 0x82332844;
	sub_822EA3F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82332860
	if (!ctx.cr6.eq) goto loc_82332860;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-25752
	ctx.r4.s64 = ctx.r11.s64 + -25752;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82332860;
	sub_822830E8(ctx, base);
loc_82332860:
	// addi r1,r1,8480
	ctx.r1.s64 = ctx.r1.s64 + 8480;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332778) {
	__imp__sub_82332778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82332870;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8304(r1)
	ea = -8304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31834
	ctx.r30.s64 = -2086273024;
	// lbz r11,-5124(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -5124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233290c
	if (!ctx.cr6.eq) goto loc_8233290C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r5,r11,-25588
	ctx.r5.s64 = ctx.r11.s64 + -25588;
	// addi r4,r10,-25616
	ctx.r4.s64 = ctx.r10.s64 + -25616;
	// addi r3,r9,-25644
	ctx.r3.s64 = ctx.r9.s64 + -25644;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fef8
	ctx.lr = 0x823328AC;
	sub_8227FEF8(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r8,-1912
	ctx.r31.s64 = ctx.r8.s64 + -1912;
	// li r5,496
	ctx.r5.s64 = 496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x823328C8;
	sub_822DD778(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r7,-9968
	ctx.r3.s64 = ctx.r7.s64 + -9968;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// bl 0x82332778
	ctx.lr = 0x823328DC;
	sub_82332778(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r6,-22684
	ctx.r3.s64 = ctx.r6.s64 + -22684;
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// bl 0x82332778
	ctx.lr = 0x823328F0;
	sub_82332778(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r4,13204
	ctx.r3.s64 = ctx.r4.s64 + 13204;
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// bl 0x82332778
	ctx.lr = 0x82332904;
	sub_82332778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-5124(r30)
	PPC_STORE_U8(ctx.r30.u32 + -5124, ctx.r11.u8);
loc_8233290C:
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332868) {
	__imp__sub_82332868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332914) {
	__imp__sub_82332914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8233292c
	if (!ctx.cr6.eq) goto loc_8233292C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8233292C:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r10,-1912
	ctx.r8.s64 = ctx.r10.s64 + -1912;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332918) {
	__imp__sub_82332918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82332958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r28,-32190
	ctx.r28.s64 = -2109603840;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_82332978:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233299c
	if (!ctx.cr6.eq) goto loc_8233299C;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x823329ac
	goto loc_823329AC;
loc_8233299C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_823329AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823329d0
	if (ctx.cr6.eq) goto loc_823329D0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823329c8
	if (ctx.cr6.eq) goto loc_823329C8;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_823329C8:
	// bl 0x820f9778
	ctx.lr = 0x823329CC;
	sub_820F9778(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_823329D0:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19584
	ctx.r11.s64 = ctx.r29.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82332978
	if (ctx.cr6.lt) goto loc_82332978;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-1412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1412, ctx.r11.u32);
	// stw r10,-5120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5120, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332950) {
	__imp__sub_82332950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332A04) {
	__imp__sub_82332A04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332A08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332a20
	if (!ctx.cr6.eq) goto loc_82332A20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82332A20:
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332A08) {
	__imp__sub_82332A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332A28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332a40
	if (!ctx.cr6.eq) goto loc_82332A40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82332A40:
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332A28) {
	__imp__sub_82332A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82332A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31834
	ctx.r30.s64 = -2086273024;
	// li r5,800
	ctx.r5.s64 = 800;
	// addi r3,r30,-5928
	ctx.r3.s64 = ctx.r30.s64 + -5928;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82332A68;
	sub_823DE090(ctx, base);
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// li r5,800
	ctx.r5.s64 = 800;
	// addi r3,r29,-4312
	ctx.r3.s64 = ctx.r29.s64 + -4312;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82332A7C;
	sub_823DE090(ctx, base);
	// lis r28,-31834
	ctx.r28.s64 = -2086273024;
	// li r5,800
	ctx.r5.s64 = 800;
	// addi r31,r28,-5128
	ctx.r31.s64 = ctx.r28.s64 + -5128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2416
	ctx.r3.s64 = ctx.r31.s64 + 2416;
	// bl 0x823de090
	ctx.lr = 0x82332A94;
	sub_823DE090(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82332AA4;
	sub_823DE090(ctx, base);
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82332AB4;
	sub_823DE090(ctx, base);
	// bl 0x82332748
	ctx.lr = 0x82332AB8;
	sub_82332748(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,-5928(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5928, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,3712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3712, ctx.r10.u32);
	// stw r9,-5128(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5128, ctx.r9.u32);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r11,-4312(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4312, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,2416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2416, ctx.r11.u32);
	// bl 0x823325d8
	ctx.lr = 0x82332AEC;
	sub_823325D8(ctx, base);
	// bl 0x82317638
	ctx.lr = 0x82332AF0;
	sub_82317638(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332A48) {
	__imp__sub_82332A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4312
	ctx.r9.s64 = ctx.r11.s64 + -4312;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332AF8) {
	__imp__sub_82332AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332B0C) {
	__imp__sub_82332B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5928
	ctx.r9.s64 = ctx.r11.s64 + -5928;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332B10) {
	__imp__sub_82332B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332B24) {
	__imp__sub_82332B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5928
	ctx.r9.s64 = ctx.r11.s64 + -5928;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332B28) {
	__imp__sub_82332B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82332B48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332be4
	if (ctx.cr6.eq) goto loc_82332BE4;
	// lis r28,-31834
	ctx.r28.s64 = -2086273024;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// addi r30,r11,-5928
	ctx.r30.s64 = ctx.r11.s64 + -5928;
	// lwz r31,-1408(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82332ba4
	if (ctx.cr6.eq) goto loc_82332BA4;
	// lwz r11,-1412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1412);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82332ba8
	if (ctx.cr6.gt) goto loc_82332BA8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82332B90;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82332ba4
	if (!ctx.cr6.eq) goto loc_82332BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82332BA4:
	// lwz r11,-1412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1412);
loc_82332BA8:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82332be4
	if (ctx.cr6.lt) goto loc_82332BE4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82332BB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82332BC8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332bf0
	if (ctx.cr6.eq) goto loc_82332BF0;
	// lwz r11,-1412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1412);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82332bb8
	if (!ctx.cr6.gt) goto loc_82332BB8;
loc_82332BE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82332BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-1408(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1408, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332B40) {
	__imp__sub_82332B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82332c18
	if (ctx.cr6.eq) goto loc_82332C18;
	// lwz r3,680(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// blr 
	return;
loc_82332C18:
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C00) {
	__imp__sub_82332C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C20) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C20) {
	__imp__sub_82332C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4312
	ctx.r9.s64 = ctx.r11.s64 + -4312;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C28) {
	__imp__sub_82332C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332C3C) {
	__imp__sub_82332C3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1412);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C40) {
	__imp__sub_82332C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r3,-5116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5116);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C50) {
	__imp__sub_82332C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332C5C) {
	__imp__sub_82332C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r3,-5128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5128);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C60) {
	__imp__sub_82332C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332C6C) {
	__imp__sub_82332C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5112
	ctx.r9.s64 = ctx.r11.s64 + -5112;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,556(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 556);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C70) {
	__imp__sub_82332C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5112
	ctx.r9.s64 = ctx.r11.s64 + -5112;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,548(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 548);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332C88) {
	__imp__sub_82332C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332CA0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4312
	ctx.r9.s64 = ctx.r11.s64 + -4312;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r3,r11,-3512
	ctx.r3.s64 = ctx.r11.s64 + -3512;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,-1604(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1604);
	// lbz r8,1620(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1620);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82332d28
	if (ctx.cr6.eq) goto loc_82332D28;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82332d28
	if (ctx.cr6.eq) goto loc_82332D28;
	// lwz r4,524(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 524);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82332CE0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
loc_82332CEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x82332d10
	if (ctx.cr6.eq) goto loc_82332D10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82332cec
	if (ctx.cr6.eq) goto loc_82332CEC;
loc_82332D10:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82332d68
	if (ctx.cr6.eq) goto loc_82332D68;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82332ce0
	if (ctx.cr6.lt) goto loc_82332CE0;
loc_82332D28:
	// lwz r11,528(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82332d4c
	if (ctx.cr6.lt) goto loc_82332D4C;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82332d4c
	if (!ctx.cr6.lt) goto loc_82332D4C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82332d60
	if (ctx.cr6.eq) goto loc_82332D60;
loc_82332D4C:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// stw r11,-1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + -1604, ctx.r11.u32);
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// stw r5,528(r6)
	PPC_STORE_U32(ctx.r6.u32 + 528, ctx.r5.u32);
loc_82332D60:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82332D68:
	// stw r7,528(r6)
	PPC_STORE_U32(ctx.r6.u32 + 528, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332CA0) {
	__imp__sub_82332CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332D74) {
	__imp__sub_82332D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82332D80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r23,r3,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r11,-4312
	ctx.r22.s64 = ctx.r11.s64 + -4312;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r28,r23,r22
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r10,548(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// stw r11,552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 552, ctx.r11.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82332e30
	if (ctx.cr6.eq) goto loc_82332E30;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-5112
	ctx.r29.s64 = ctx.r11.s64 + -5112;
	// lwz r11,3696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332df8
	if (ctx.cr6.eq) goto loc_82332DF8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82332DCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,548(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// lwz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// bl 0x822e8058
	ctx.lr = 0x82332DDC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332e38
	if (ctx.cr6.eq) goto loc_82332E38;
	// lwz r11,3696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3696);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82332dcc
	if (ctx.cr6.lt) goto loc_82332DCC;
loc_82332DF8:
	// lwz r10,552(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82332e1c
	if (ctx.cr6.lt) goto loc_82332E1C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82332e1c
	if (!ctx.cr6.lt) goto loc_82332E1C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82332e30
	if (ctx.cr6.eq) goto loc_82332E30;
loc_82332E1C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r28.u32);
	// stw r11,552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 552, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3696, ctx.r11.u32);
loc_82332E30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82332E38:
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 552, ctx.r31.u32);
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// lwzx r10,r26,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// lwz r9,556(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82332e30
	if (ctx.cr6.eq) goto loc_82332E30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82332e30
	if (ctx.cr6.eq) goto loc_82332E30;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82332e30
	if (!ctx.cr6.gt) goto loc_82332E30;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r27,-1
	ctx.r24.s64 = ctx.r27.s64 + -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r10,-5928
	ctx.r27.s64 = ctx.r10.s64 + -5928;
	// addi r25,r11,-25568
	ctx.r25.s64 = ctx.r11.s64 + -25568;
loc_82332E7C:
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// lwzx r10,r26,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// lwz r4,548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// bl 0x822e8058
	ctx.lr = 0x82332E94;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82332ed8
	if (!ctx.cr6.eq) goto loc_82332ED8;
	// lwzx r11,r26,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// lwz r9,556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82332ed8
	if (!ctx.cr6.eq) goto loc_82332ED8;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwzx r10,r23,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,556(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,548(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822830e8
	ctx.lr = 0x82332ED8;
	sub_822830E8(ctx, base);
loc_82332ED8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82332e7c
	if (!ctx.cr0.eq) goto loc_82332E7C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332D78) {
	__imp__sub_82332D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332EEC) {
	__imp__sub_82332EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332EF0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4312
	ctx.r9.s64 = ctx.r11.s64 + -4312;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r3,r11,-2712
	ctx.r3.s64 = ctx.r11.s64 + -2712;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,-2416(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2416);
	// lbz r8,1620(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1620);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82332f78
	if (ctx.cr6.eq) goto loc_82332F78;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82332f78
	if (ctx.cr6.eq) goto loc_82332F78;
	// lwz r4,532(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 532);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82332F30:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
loc_82332F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x82332f60
	if (ctx.cr6.eq) goto loc_82332F60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82332f3c
	if (ctx.cr6.eq) goto loc_82332F3C;
loc_82332F60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82332fb8
	if (ctx.cr6.eq) goto loc_82332FB8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82332f30
	if (ctx.cr6.lt) goto loc_82332F30;
loc_82332F78:
	// lwz r11,536(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82332f9c
	if (ctx.cr6.lt) goto loc_82332F9C;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82332f9c
	if (!ctx.cr6.lt) goto loc_82332F9C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82332fb0
	if (ctx.cr6.eq) goto loc_82332FB0;
loc_82332F9C:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// stw r11,-2416(r3)
	PPC_STORE_U32(ctx.r3.u32 + -2416, ctx.r11.u32);
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// stw r5,536(r6)
	PPC_STORE_U32(ctx.r6.u32 + 536, ctx.r5.u32);
loc_82332FB0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82332FB8:
	// stw r7,536(r6)
	PPC_STORE_U32(ctx.r6.u32 + 536, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82332EF0) {
	__imp__sub_82332EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82332FC4) {
	__imp__sub_82332FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82332FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82332FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-5928
	ctx.r30.s64 = ctx.r11.s64 + -5928;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r31,r29,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233302c
	if (ctx.cr6.eq) goto loc_8233302C;
	// bl 0x82333200
	ctx.lr = 0x82333000;
	sub_82333200(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333028
	if (!ctx.cr6.eq) goto loc_82333028;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822830e8
	ctx.lr = 0x82333028;
	sub_822830E8(ctx, base);
loc_82333028:
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
loc_8233302C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82332FC8) {
	__imp__sub_82332FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333034) {
	__imp__sub_82333034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333038) {
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
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5928
	ctx.r9.s64 = ctx.r11.s64 + -5928;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r8,-4312
	ctx.r7.s64 = ctx.r8.s64 + -4312;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// bl 0x82332ca0
	ctx.lr = 0x82333070;
	sub_82332CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d78
	ctx.lr = 0x82333078;
	sub_82332D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ef0
	ctx.lr = 0x82333080;
	sub_82332EF0(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82333038) {
	__imp__sub_82333038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333094) {
	__imp__sub_82333094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823330A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// addi r28,r8,-5928
	ctx.r28.s64 = ctx.r8.s64 + -5928;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,-1412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1412);
	// addi r6,r7,-4312
	ctx.r6.s64 = ctx.r7.s64 + -4312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,-1412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1412, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bl 0x82332ca0
	ctx.lr = 0x823330E4;
	sub_82332CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d78
	ctx.lr = 0x823330EC;
	sub_82332D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ef0
	ctx.lr = 0x823330F4;
	sub_82332EF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r29,r30,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r4,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r4.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333144
	if (ctx.cr6.eq) goto loc_82333144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82333200
	ctx.lr = 0x82333118;
	sub_82333200(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333140
	if (!ctx.cr6.eq) goto loc_82333140;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822830e8
	ctx.lr = 0x82333140;
	sub_822830E8(ctx, base);
loc_82333140:
	// stw r26,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r26.u32);
loc_82333144:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8233315c
	if (ctx.cr6.eq) goto loc_8233315C;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82333158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8233315C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333098) {
	__imp__sub_82333098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333164) {
	__imp__sub_82333164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82333170;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// addi r27,r11,-5928
	ctx.r27.s64 = ctx.r11.s64 + -5928;
	// addi r29,r10,-4312
	ctx.r29.s64 = ctx.r10.s64 + -4312;
	// lwz r11,-5928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333198
	if (ctx.cr6.eq) goto loc_82333198;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8233319c
	goto loc_8233319C;
loc_82333198:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233319C:
	// stw r11,-4312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4312, ctx.r11.u32);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,-1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1412);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x823331f8
	if (!ctx.cr6.gt) goto loc_823331F8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823331BC:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r8,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x82332ca0
	ctx.lr = 0x823331D8;
	sub_82332CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d78
	ctx.lr = 0x823331E0;
	sub_82332D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ef0
	ctx.lr = 0x823331E8;
	sub_82332EF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823331bc
	if (ctx.cr6.lt) goto loc_823331BC;
loc_823331F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333168) {
	__imp__sub_82333168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82333208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233327c
	if (ctx.cr6.eq) goto loc_8233327C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,13236
	ctx.r4.s64 = ctx.r11.s64 + 13236;
	// bl 0x822e8058
	ctx.lr = 0x8233322C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233327c
	if (ctx.cr6.eq) goto loc_8233327C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b40
	ctx.lr = 0x8233323C;
	sub_82332B40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333280
	if (!ctx.cr6.eq) goto loc_82333280;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333268
	if (ctx.cr6.eq) goto loc_82333268;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82177148
	ctx.lr = 0x8233325C;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333288
	if (!ctx.cr6.eq) goto loc_82333288;
loc_82333268:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-25416
	ctx.r4.s64 = ctx.r11.s64 + -25416;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280a68
	ctx.lr = 0x8233327C;
	sub_82280A68(ctx, base);
loc_8233327C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82333288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82177148
	ctx.lr = 0x82333294;
	sub_82177148(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82172b20
	ctx.lr = 0x823332A0;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233327c
	if (!ctx.cr6.eq) goto loc_8233327C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333098
	ctx.lr = 0x823332B4;
	sub_82333098(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333200) {
	__imp__sub_82333200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823332BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823332BC) {
	__imp__sub_823332BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823332C0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82333200
	sub_82333200(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823332C0) {
	__imp__sub_823332C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823332C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82276090
	ctx.lr = 0x823332F4;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,2046
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2046, ctx.xer);
	// bne cr6,0x823333c0
	if (!ctx.cr6.eq) goto loc_823333C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823333c0
	if (!ctx.cr6.gt) goto loc_823333C0;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,14156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14156);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fnmadds f0,f9,f8,f7
	ctx.f0.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82333390
	if (!ctx.cr6.lt) goto loc_82333390;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f11,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f11,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x823333dc
	goto loc_823333DC;
loc_82333390:
	// fdivs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,36(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x823333d8
	goto loc_823333D8;
loc_823333C0:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_823333D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823333DC:
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

PPC_WEAK_FUNC(sub_823332C8) {
	__imp__sub_823332C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823333F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823333F8) {
	__imp__sub_823333F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82333418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82332b10
	ctx.lr = 0x82333430;
	sub_82332B10(ctx, base);
	// lwz r11,724(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 724);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x82333480
	if (!ctx.cr6.eq) goto loc_82333480;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82333480
	if (ctx.cr6.eq) goto loc_82333480;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82333478
	if (!ctx.cr6.eq) goto loc_82333478;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82333478:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82333484
	goto loc_82333484;
loc_82333480:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82333484:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333410) {
	__imp__sub_82333410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823334A0) {
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
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x823334BC;
	sub_82332AF8(ctx, base);
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823334e0
	if (ctx.cr6.eq) goto loc_823334E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823334e4
	if (ctx.cr6.gt) goto loc_823334E4;
loc_823334E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823334E4:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_823334A0) {
	__imp__sub_823334A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823334F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823334F8) {
	__imp__sub_823334F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333508) {
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
	// bl 0x82332c28
	ctx.lr = 0x82333518;
	sub_82332C28(ctx, base);
	// lbz r3,1631(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1631);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333508) {
	__imp__sub_82333508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233352C) {
	__imp__sub_8233352C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333530) {
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
	// bl 0x82332af8
	ctx.lr = 0x82333540;
	sub_82332AF8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

PPC_WEAK_FUNC(sub_82333530) {
	__imp__sub_82333530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233355C) {
	__imp__sub_8233355C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333560) {
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
	// bl 0x82332c40
	ctx.lr = 0x82333578;
	sub_82332C40(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82333560) {
	__imp__sub_82333560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333598) {
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
	// bl 0x82332c40
	ctx.lr = 0x823335B0;
	sub_82332C40(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823335dc
	if (!ctx.cr6.eq) goto loc_823335DC;
loc_823335C4:
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
loc_823335DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823335fc
	if (!ctx.cr6.eq) goto loc_823335FC;
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
loc_823335FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333604;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823335c4
	if (ctx.cr6.eq) goto loc_823335C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333618;
	sub_82332AF8(ctx, base);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,6
	ctx.r11.s64 = 6;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82333598) {
	__imp__sub_82333598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333648) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820da4f0
	ctx.lr = 0x82333668;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82333694
	if (ctx.cr6.lt) goto loc_82333694;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333694
	if (ctx.cr6.eq) goto loc_82333694;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
loc_82333694:
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

PPC_WEAK_FUNC(sub_82333648) {
	__imp__sub_82333648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823336AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823336AC) {
	__imp__sub_823336AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823336B0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820da4f0
	ctx.lr = 0x823336D0;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823336fc
	if (ctx.cr6.lt) goto loc_823336FC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823336fc
	if (ctx.cr6.eq) goto loc_823336FC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
loc_823336FC:
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

PPC_WEAK_FUNC(sub_823336B0) {
	__imp__sub_823336B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333714) {
	__imp__sub_82333714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333718) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82333740
	if (!ctx.cr6.eq) goto loc_82333740;
loc_8233372C:
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
loc_82333740:
	// bl 0x820da548
	ctx.lr = 0x82333744;
	sub_820DA548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233372c
	if (ctx.cr6.eq) goto loc_8233372C;
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333718) {
	__imp__sub_82333718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333760) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8233378c
	if (!ctx.cr6.eq) goto loc_8233378C;
loc_82333784:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823337b8
	goto loc_823337B8;
loc_8233378C:
	// bl 0x82332c40
	ctx.lr = 0x82333790;
	sub_82332C40(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82333784
	if (ctx.cr6.eq) goto loc_82333784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x823337B0;
	sub_820DA5B0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823337B8:
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

PPC_WEAK_FUNC(sub_82333760) {
	__imp__sub_82333760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823337D0) {
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
	// bl 0x82332af8
	ctx.lr = 0x823337E0;
	sub_82332AF8(ctx, base);
	// lbz r11,1647(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1647);
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

PPC_WEAK_FUNC(sub_823337D0) {
	__imp__sub_823337D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823337FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823337FC) {
	__imp__sub_823337FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333800) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8233381C;
	sub_82332AF8(ctx, base);
	// lbz r11,1647(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1647);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82333848
	if (ctx.cr6.eq) goto loc_82333848;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233384c
	if (!ctx.cr6.eq) goto loc_8233384C;
loc_82333848:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8233384C:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82333800) {
	__imp__sub_82333800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82333868;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8233387C;
	sub_82332AF8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r27,528(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r31,r26,544
	ctx.r31.s64 = ctx.r26.s64 + 544;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r30,15
	ctx.r30.s64 = 15;
loc_82333890:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823338a4
	if (!ctx.cr6.eq) goto loc_823338A4;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x823338b8
	goto loc_823338B8;
loc_823338A4:
	// bl 0x82332af8
	ctx.lr = 0x823338A8;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x823338b8
	if (!ctx.cr6.eq) goto loc_823338B8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823338B8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82333890
	if (!ctx.cr0.eq) goto loc_82333890;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333910
	if (!ctx.cr6.eq) goto loc_82333910;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r26,728
	ctx.r11.s64 = ctx.r26.s64 + 728;
loc_823338D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82333908
	if (ctx.cr6.eq) goto loc_82333908;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x823338d8
	if (ctx.cr6.lt) goto loc_823338D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82331d80
	ctx.lr = 0x82333900;
	sub_82331D80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82333908:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_82333910:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82331d80
	ctx.lr = 0x8233391C;
	sub_82331D80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333860) {
	__imp__sub_82333860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333924) {
	__imp__sub_82333924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82333930;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x820da5b0
	ctx.lr = 0x82333940;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333950
	if (!ctx.cr6.eq) goto loc_82333950;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82333950:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333958;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82333974
	if (!ctx.cr6.eq) goto loc_82333974;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x82280b08
	ctx.lr = 0x82333974;
	sub_82280B08(ctx, base);
loc_82333974:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333860
	ctx.lr = 0x82333980;
	sub_82333860(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332b10
	ctx.lr = 0x82333988;
	sub_82332B10(ctx, base);
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82333a44
	if (ctx.cr6.eq) goto loc_82333A44;
	// lis r27,-32032
	ctx.r27.s64 = -2099249152;
loc_8233399C:
	// lwz r11,-5944(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823339d0
	if (ctx.cr6.eq) goto loc_823339D0;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333a14
	if (!ctx.cr6.eq) goto loc_82333A14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823339d0
	if (ctx.cr6.eq) goto loc_823339D0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823339d0
	if (ctx.cr6.eq) goto loc_823339D0;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82333a00
	goto loc_82333A00;
loc_823339D0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r31,544
	ctx.r10.s64 = ctx.r31.s64 + 544;
loc_823339D8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823339f8
	if (ctx.cr6.eq) goto loc_823339F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x823339d8
	if (ctx.cr6.lt) goto loc_823339D8;
	// b 0x82333a44
	goto loc_82333A44;
loc_823339F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82333a44
	if (ctx.cr6.lt) goto loc_82333A44;
loc_82333A00:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,604
	ctx.xer.ca = ctx.r11.u32 > 4294966691;
	ctx.r11.s64 = ctx.r11.s64 + 604;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82333a44
	if (ctx.cr0.eq) goto loc_82333A44;
loc_82333A14:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82333a24
	if (!ctx.cr6.eq) goto loc_82333A24;
	// stw r29,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r29.u32);
loc_82333A24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333860
	ctx.lr = 0x82333A30;
	sub_82333860(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x82333A38;
	sub_82332B10(ctx, base);
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233399c
	if (!ctx.cr6.eq) goto loc_8233399C;
loc_82333A44:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82333a54
	if (!ctx.cr6.eq) goto loc_82333A54;
	// stw r29,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r29.u32);
loc_82333A54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333928) {
	__imp__sub_82333928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82333A68;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de024
	ctx.lr = 0x82333A70;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82332c00
	ctx.lr = 0x82333A8C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c28
	ctx.lr = 0x82333A98;
	sub_82332C28(ctx, base);
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// lfs f28,704(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f28.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,500(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82333ae0
	if (!ctx.cr6.gt) goto loc_82333AE0;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bne cr6,0x82333ad8
	if (!ctx.cr6.eq) goto loc_82333AD8;
	// lfs f13,1156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82333adc
	goto loc_82333ADC;
loc_82333AD8:
	// lfs f13,1224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	ctx.f13.f64 = double(temp.f32);
loc_82333ADC:
	// fmuls f31,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
loc_82333AE0:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82333b14
	if (!ctx.cr6.eq) goto loc_82333B14;
	// lfs f30,1192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82327ea8
	ctx.lr = 0x82333AF4;
	sub_82327EA8(ctx, base);
	// lfs f0,1196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f27,1200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f30,f1,f13,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82327ea8
	ctx.lr = 0x82333B0C;
	sub_82327EA8(ctx, base);
	// lfs f12,1204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82333b38
	goto loc_82333B38;
loc_82333B14:
	// lfs f30,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82327ea8
	ctx.lr = 0x82333B1C;
	sub_82327EA8(ctx, base);
	// lfs f0,1264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f27,1268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f30,f1,f13,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82327ea8
	ctx.lr = 0x82333B34;
	sub_82327EA8(ctx, base);
	// lfs f12,1272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	ctx.f12.f64 = double(temp.f32);
loc_82333B38:
	// fsubs f11,f12,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f13,f1,f11,f27
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f27.f64));
	// beq cr6,0x82333b78
	if (ctx.cr6.eq) goto loc_82333B78;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44184
	ctx.r9.u64 = ctx.r10.u64 | 44184;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f31,f10,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
loc_82333B78:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f29,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82333b98
	if (ctx.cr6.eq) goto loc_82333B98;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82333B98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// fcmpu cr6,f28,f12
	ctx.cr6.compare(ctx.f28.f64, ctx.f12.f64);
	// ble cr6,0x82333bf0
	if (!ctx.cr6.gt) goto loc_82333BF0;
	// lfs f30,1160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82327ea8
	ctx.lr = 0x82333BD0;
	sub_82327EA8(ctx, base);
	// lfs f0,1164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f28,1168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f30,f1,f13,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82327ea8
	ctx.lr = 0x82333BE8;
	sub_82327EA8(ctx, base);
	// lfs f12,1172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82333c14
	goto loc_82333C14;
loc_82333BF0:
	// lfs f30,1228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82327ea8
	ctx.lr = 0x82333BF8;
	sub_82327EA8(ctx, base);
	// lfs f0,1232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f28,1236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f30,f1,f13,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82327ea8
	ctx.lr = 0x82333C10;
	sub_82327EA8(ctx, base);
	// lfs f12,1240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1240);
	ctx.f12.f64 = double(temp.f32);
loc_82333C14:
	// fsubs f11,f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// fmuls f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f13,f1,f11,f28
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// beq cr6,0x82333c38
	if (ctx.cr6.eq) goto loc_82333C38;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82333C38:
	// lfs f12,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f9,4(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x82333C5C;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333A60) {
	__imp__sub_82333A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82333ca8
	if (!ctx.cr6.eq) goto loc_82333CA8;
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r9,716(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82333d38
	goto loc_82333D38;
loc_82333CA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82333cf8
	if (!ctx.cr6.gt) goto loc_82333CF8;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,828(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 828);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,824(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 824);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f8,f10,f9,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f7,840(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 840);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,836(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 836);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f9,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82333d38
	goto loc_82333D38;
loc_82333CF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,832(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f11,828(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 828);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f13,6052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6052);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-25264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f10,f8,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f6,844(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 844);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,840(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 840);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f8,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f3,0(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82333D38:
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333C60) {
	__imp__sub_82333C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333D64) {
	__imp__sub_82333D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333D68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333D68) {
	__imp__sub_82333D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333D78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333D78) {
	__imp__sub_82333D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333D80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333D80) {
	__imp__sub_82333D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333D8C) {
	__imp__sub_82333D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82333D98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82332c40
	ctx.lr = 0x82333DA4;
	sub_82332C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82333df0
	if (!ctx.cr6.gt) goto loc_82333DF0;
loc_82333DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333DC0;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333de4
	if (!ctx.cr6.eq) goto loc_82333DE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da5b0
	ctx.lr = 0x82333DD8;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333de4
	if (ctx.cr6.eq) goto loc_82333DE4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82333DE4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82333db8
	if (ctx.cr6.lt) goto loc_82333DB8;
loc_82333DF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333D90) {
	__imp__sub_82333D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333DFC) {
	__imp__sub_82333DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333E00) {
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
	// bl 0x82333d90
	ctx.lr = 0x82333E10;
	sub_82333D90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82333E00) {
	__imp__sub_82333E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333E34) {
	__imp__sub_82333E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82333E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333E50;
	sub_82332AF8(ctx, base);
	// lwz r29,528(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,544
	ctx.r31.s64 = ctx.r31.s64 + 544;
loc_82333E5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333e78
	if (ctx.cr6.eq) goto loc_82333E78;
	// bl 0x82332af8
	ctx.lr = 0x82333E6C;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82333e94
	if (ctx.cr6.eq) goto loc_82333E94;
loc_82333E78:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x82333e5c
	if (ctx.cr6.lt) goto loc_82333E5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82333E94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333E38) {
	__imp__sub_82333E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82333EA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333EB8;
	sub_82332AF8(ctx, base);
	// lwz r27,528(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,544
	ctx.r29.s64 = ctx.r30.s64 + 544;
loc_82333EC4:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82333f1c
	if (ctx.cr6.eq) goto loc_82333F1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82333ED8;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82333f1c
	if (!ctx.cr6.eq) goto loc_82333F1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da4f0
	ctx.lr = 0x82333EF0;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82333f1c
	if (ctx.cr6.lt) goto loc_82333F1C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333f1c
	if (ctx.cr6.eq) goto loc_82333F1C;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333f38
	if (!ctx.cr6.eq) goto loc_82333F38;
loc_82333F1C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// blt cr6,0x82333ec4
	if (ctx.cr6.lt) goto loc_82333EC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82333F38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333EA0) {
	__imp__sub_82333EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333F44) {
	__imp__sub_82333F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,-2047
	ctx.r11.s64 = ctx.r11.s64 + -2047;
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

PPC_WEAK_FUNC(sub_82333F48) {
	__imp__sub_82333F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333F5C) {
	__imp__sub_82333F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82333F60) {
	__imp__sub_82333F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82333F64) {
	__imp__sub_82333F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82333F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82333F70;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82332b10
	ctx.lr = 0x82333F84;
	sub_82332B10(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r27,254
	ctx.r27.s64 = 254;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r10,17280
	ctx.r30.s64 = ctx.r10.s64 + 17280;
	// addi r26,r11,-25260
	ctx.r26.s64 = ctx.r11.s64 + -25260;
loc_82333FB4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lhzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334098
	if (ctx.cr6.eq) goto loc_82334098;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lhzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822efc98
	ctx.lr = 0x82333FDC;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334060
	if (ctx.cr6.eq) goto loc_82334060;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r4,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// bl 0x822efd80
	ctx.lr = 0x82334014;
	sub_822EFD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233408c
	if (ctx.cr6.eq) goto loc_8233408C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
loc_82334024:
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r11,r11,29,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// bl 0x822efd80
	ctx.lr = 0x8233404C;
	sub_822EFD80(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// bne cr6,0x82334024
	if (!ctx.cr6.eq) goto loc_82334024;
	// b 0x8233408c
	goto loc_8233408C;
loc_82334060:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332b28
	ctx.lr = 0x82334068;
	sub_82332B28(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lhzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822a13a0
	ctx.lr = 0x82334078;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x82280b08
	ctx.lr = 0x8233408C;
	sub_82280B08(ctx, base);
loc_8233408C:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// blt cr6,0x82333fb4
	if (ctx.cr6.lt) goto loc_82333FB4;
loc_82334098:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f0330
	ctx.lr = 0x823340A4;
	sub_822F0330(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82333F68) {
	__imp__sub_82333F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823340AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823340AC) {
	__imp__sub_823340AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823340B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332b10
	ctx.lr = 0x823340C4;
	sub_82332B10(ctx, base);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823340B0) {
	__imp__sub_823340B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823340D8) {
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
	// bl 0x82332c00
	ctx.lr = 0x823340F0;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334134
	if (ctx.cr6.eq) goto loc_82334134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da4f0
	ctx.lr = 0x82334104;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82334134
	if (ctx.cr6.lt) goto loc_82334134;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334134
	if (ctx.cr6.eq) goto loc_82334134;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334138
	if (!ctx.cr6.eq) goto loc_82334138;
loc_82334134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334138:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_823340D8) {
	__imp__sub_823340D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233414C) {
	__imp__sub_8233414C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334150) {
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
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823341a4
	if (ctx.cr6.eq) goto loc_823341A4;
	// bl 0x820da4f0
	ctx.lr = 0x82334174;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823341a4
	if (ctx.cr6.lt) goto loc_823341A4;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823341a4
	if (ctx.cr6.eq) goto loc_823341A4;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823341a8
	if (!ctx.cr6.eq) goto loc_823341A8;
loc_823341A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823341A8:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82334150) {
	__imp__sub_82334150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823341BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823341BC) {
	__imp__sub_823341BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823341C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// blt cr6,0x823341d4
	if (ctx.cr6.lt) goto loc_823341D4;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_823341D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823341C0) {
	__imp__sub_823341C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823341DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823341DC) {
	__imp__sub_823341DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823341E0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// beq cr6,0x823341f4
	if (ctx.cr6.eq) goto loc_823341F4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823341F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823341E0) {
	__imp__sub_823341E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823341FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823341FC) {
	__imp__sub_823341FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334200) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82334248
	if (ctx.cr6.gt) goto loc_82334248;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334240
	if (ctx.cr6.eq) goto loc_82334240;
	// bdz 0x82334240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334240;
	// bdz 0x82334238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334238;
	// bdz 0x82334248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334248;
	// bdz 0x82334248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334248;
	// bdz 0x82334248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334248;
	// bdz 0x82334248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334248;
	// bdz 0x82334248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334248;
	// b 0x82334240
	goto loc_82334240;
loc_82334238:
	// li r3,52
	ctx.r3.s64 = 52;
	// blr 
	return;
loc_82334240:
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
loc_82334248:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334200) {
	__imp__sub_82334200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334250) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823342a0
	if (ctx.cr6.gt) goto loc_823342A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334290
	if (ctx.cr6.eq) goto loc_82334290;
	// bdz 0x82334298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334298;
	// bdz 0x82334288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82334288;
	// bdz 0x823342a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823342A0;
	// bdz 0x823342a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823342A0;
	// bdz 0x823342a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823342A0;
	// bdz 0x823342a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823342A0;
	// bdz 0x823342a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823342A0;
	// b 0x82334290
	goto loc_82334290;
loc_82334288:
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
loc_82334290:
	// li r3,54
	ctx.r3.s64 = 54;
	// blr 
	return;
loc_82334298:
	// li r3,55
	ctx.r3.s64 = 55;
	// blr 
	return;
loc_823342A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334250) {
	__imp__sub_82334250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823342A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1633(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1633);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823342cc
	if (!ctx.cr6.eq) goto loc_823342CC;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6388);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823342CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823342A8) {
	__imp__sub_823342A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823342D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823342D4) {
	__imp__sub_823342D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823342D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,-6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6388);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82334300
	if (ctx.cr6.eq) goto loc_82334300;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82334300:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823342D8) {
	__imp__sub_823342D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8233431c
	if (ctx.cr6.eq) goto loc_8233431C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233431C:
	// lbz r11,1633(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1633);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334340
	if (!ctx.cr6.eq) goto loc_82334340;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6388);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334344
	if (ctx.cr6.eq) goto loc_82334344;
loc_82334340:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82334344:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334308) {
	__imp__sub_82334308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82334354) {
	__imp__sub_82334354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6476);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82334374
	if (!ctx.cr6.eq) goto loc_82334374;
loc_8233436C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82334374:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233436c
	if (ctx.cr6.eq) goto loc_8233436C;
	// lbz r11,1633(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1633);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823343a4
	if (!ctx.cr6.eq) goto loc_823343A4;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6388);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823343a8
	if (ctx.cr6.eq) goto loc_823343A8;
loc_823343A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823343A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334358) {
	__imp__sub_82334358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823343B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f0,1020(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r11,-6544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6544);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823343B8) {
	__imp__sub_823343B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823343EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823343EC) {
	__imp__sub_823343EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823343F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,1024(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6684);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823343F0) {
	__imp__sub_823343F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6680);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334438
	if (ctx.cr6.eq) goto loc_82334438;
	// lbz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334438
	if (ctx.cr6.eq) goto loc_82334438;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,200(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 200);
	// blr 
	return;
loc_82334438:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,198(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 198);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334408) {
	__imp__sub_82334408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334448) {
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
	// bl 0x82332af8
	ctx.lr = 0x82334458;
	sub_82332AF8(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6680);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334494
	if (ctx.cr6.eq) goto loc_82334494;
	// lbz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334494
	if (ctx.cr6.eq) goto loc_82334494;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,200(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 200);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82334494:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,198(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 198);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334448) {
	__imp__sub_82334448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823344B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// rlwinm r3,r11,19,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823344B0) {
	__imp__sub_823344B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823344BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823344BC) {
	__imp__sub_823344BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823344C0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r3,728
	ctx.r3.s64 = ctx.r3.s64 + 728;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_823344D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823344f0
	if (ctx.cr6.eq) goto loc_823344F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x823344d0
	if (ctx.cr6.lt) goto loc_823344D0;
	// blr 
	return;
loc_823344F0:
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823344C0) {
	__imp__sub_823344C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334500) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,728
	ctx.r9.s64 = ctx.r3.s64 + 728;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8233450C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82334554
	if (ctx.cr6.eq) goto loc_82334554;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x8233450c
	if (ctx.cr6.lt) goto loc_8233450C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82334530:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8233455c
	if (ctx.cr6.eq) goto loc_8233455C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x82334530
	if (ctx.cr6.lt) goto loc_82334530;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
loc_82334554:
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_8233455C:
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334500) {
	__imp__sub_82334500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82334574) {
	__imp__sub_82334574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334578) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823319d8
	ctx.lr = 0x8233459C;
	sub_823319D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334500
	ctx.lr = 0x823345AC;
	sub_82334500(ctx, base);
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

PPC_WEAK_FUNC(sub_82334578) {
	__imp__sub_82334578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823345C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823345C4) {
	__imp__sub_823345C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823345C8) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,728
	ctx.r9.s64 = ctx.r3.s64 + 728;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823345D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82334624
	if (ctx.cr6.eq) goto loc_82334624;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x823345d4
	if (ctx.cr6.lt) goto loc_823345D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823345F8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82334634
	if (ctx.cr6.eq) goto loc_82334634;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x823345f8
	if (ctx.cr6.lt) goto loc_823345F8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82334618:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82334624:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82334634:
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82334618
	goto loc_82334618;
}

PPC_WEAK_FUNC(sub_823345C8) {
	__imp__sub_823345C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82334644) {
	__imp__sub_82334644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334648) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stb r10,604(r11)
	PPC_STORE_U8(ctx.r11.u32 + 604, ctx.r10.u8);
	// stb r10,605(r11)
	PPC_STORE_U8(ctx.r11.u32 + 605, ctx.r10.u8);
	// addi r10,r11,604
	ctx.r10.s64 = ctx.r11.s64 + 604;
	// stb r5,606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 606, ctx.r5.u8);
	// stb r5,607(r11)
	PPC_STORE_U8(ctx.r11.u32 + 607, ctx.r5.u8);
	// stb r5,608(r11)
	PPC_STORE_U8(ctx.r11.u32 + 608, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334648) {
	__imp__sub_82334648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334688) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,544
	ctx.r10.s64 = ctx.r3.s64 + 544;
loc_82334690:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823346b4
	if (ctx.cr6.eq) goto loc_823346B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x82334690
	if (ctx.cr6.lt) goto loc_82334690;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_823346B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334688) {
	__imp__sub_82334688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823346BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823346BC) {
	__imp__sub_823346BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823346C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823346C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r9,r5,136
	ctx.r9.s64 = ctx.r5.s64 + 136;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r10,604(r11)
	PPC_STORE_U8(ctx.r11.u32 + 604, ctx.r10.u8);
	// stb r10,605(r11)
	PPC_STORE_U8(ctx.r11.u32 + 605, ctx.r10.u8);
	// stb r10,606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 606, ctx.r10.u8);
	// stb r10,607(r11)
	PPC_STORE_U8(ctx.r11.u32 + 607, ctx.r10.u8);
	// addi r10,r11,604
	ctx.r10.s64 = ctx.r11.s64 + 604;
	// stb r8,608(r11)
	PPC_STORE_U8(ctx.r11.u32 + 608, ctx.r8.u8);
	// stwx r4,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// bl 0x820da730
	ctx.lr = 0x82334710;
	sub_820DA730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823319d8
	ctx.lr = 0x8233471C;
	sub_823319D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334500
	ctx.lr = 0x8233472C;
	sub_82334500(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823346C0) {
	__imp__sub_823346C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334738) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r3,544
	ctx.r11.s64 = ctx.r3.s64 + 544;
loc_82334740:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334764
	if (ctx.cr6.eq) goto loc_82334764;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x82334740
	if (ctx.cr6.lt) goto loc_82334740;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82334764:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82334774
	if (!ctx.cr6.lt) goto loc_82334774;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82334774:
	// b 0x823346c0
	sub_823346C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82334738) {
	__imp__sub_82334738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82334780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82334810
	if (ctx.cr6.eq) goto loc_82334810;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233481c
	if (ctx.cr6.eq) goto loc_8233481C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233481c
	if (ctx.cr6.eq) goto loc_8233481C;
	// bl 0x82332c40
	ctx.lr = 0x823347B4;
	sub_82332C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82334810
	if (!ctx.cr6.gt) goto loc_82334810;
loc_823347C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823347CC;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82334804
	if (!ctx.cr6.eq) goto loc_82334804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x823347E8;
	sub_820DA6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8233488c
	if (ctx.cr6.gt) goto loc_8233488C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82334804
	if (!ctx.cr6.eq) goto loc_82334804;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8233488c
	if (ctx.cr6.gt) goto loc_8233488C;
loc_82334804:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823347c4
	if (ctx.cr6.lt) goto loc_823347C4;
loc_82334810:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233481C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,544
	ctx.r30.s64 = ctx.r28.s64 + 544;
loc_82334824:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82334870
	if (ctx.cr6.eq) goto loc_82334870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82334838;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82334870
	if (!ctx.cr6.eq) goto loc_82334870;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x82334854;
	sub_820DA6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8233488c
	if (ctx.cr6.gt) goto loc_8233488C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82334870
	if (!ctx.cr6.eq) goto loc_82334870;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8233488c
	if (ctx.cr6.gt) goto loc_8233488C;
loc_82334870:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x82334824
	if (ctx.cr6.lt) goto loc_82334824;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233488C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82334778) {
	__imp__sub_82334778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823348A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82334900
	if (ctx.cr6.eq) goto loc_82334900;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233490c
	if (ctx.cr6.eq) goto loc_8233490C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233490c
	if (ctx.cr6.eq) goto loc_8233490C;
	// bl 0x82332c40
	ctx.lr = 0x823348D0;
	sub_82332C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82334900
	if (!ctx.cr6.gt) goto loc_82334900;
loc_823348E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x823348E8;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82334950
	if (ctx.cr6.eq) goto loc_82334950;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823348e0
	if (ctx.cr6.lt) goto loc_823348E0;
loc_82334900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8233490C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,544
	ctx.r30.s64 = ctx.r3.s64 + 544;
loc_82334914:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82334934
	if (ctx.cr6.eq) goto loc_82334934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82334928;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82334950
	if (ctx.cr6.eq) goto loc_82334950;
loc_82334934:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x82334914
	if (ctx.cr6.lt) goto loc_82334914;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82334950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82334898) {
	__imp__sub_82334898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233495C) {
	__imp__sub_8233495C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334960) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1633(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1633);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334984
	if (!ctx.cr6.eq) goto loc_82334984;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6388);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334988
	if (ctx.cr6.eq) goto loc_82334988;
loc_82334984:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82334988:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233499c
	if (ctx.cr6.eq) goto loc_8233499C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8233499C:
	// lbz r11,1628(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1628);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82334960) {
	__imp__sub_82334960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823349B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823349B4) {
	__imp__sub_823349B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823349B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823349f4
	if (!ctx.cr6.eq) goto loc_823349F4;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16580);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82334a58
	goto loc_82334A58;
loc_823349F4:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x82334a10
	if (!ctx.cr6.eq) goto loc_82334A10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16952);
	// b 0x82334a44
	goto loc_82334A44;
loc_82334A10:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334a34
	if (ctx.cr6.eq) goto loc_82334A34;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6532);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82334a58
	goto loc_82334A58;
loc_82334A34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6360);
loc_82334A44:
	// lfs f13,704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f31,f10,f2
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
loc_82334A58:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16908);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82334a70
	if (!ctx.cr6.gt) goto loc_82334A70;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82334A70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82334A80;
	sub_823DE720(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17872);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f30,f0,f13
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823de720
	ctx.lr = 0x82334A9C;
	sub_823DE720(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,6040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8336(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8336);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823349B8) {
	__imp__sub_823349B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334AD8) {
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
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82334b08
	if (!ctx.cr6.eq) goto loc_82334B08;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16580);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82334b6c
	goto loc_82334B6C;
loc_82334B08:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x82334b24
	if (!ctx.cr6.eq) goto loc_82334B24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16952);
	// b 0x82334b58
	goto loc_82334B58;
loc_82334B24:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334b48
	if (ctx.cr6.eq) goto loc_82334B48;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6532);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82334b6c
	goto loc_82334B6C;
loc_82334B48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6360);
loc_82334B58:
	// lfs f13,704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f31,f10,f2
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
loc_82334B6C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16908);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82334b84
	if (!ctx.cr6.gt) goto loc_82334B84;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82334B84:
	// bl 0x823de720
	ctx.lr = 0x82334B88;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
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

PPC_WEAK_FUNC(sub_82334AD8) {
	__imp__sub_82334AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82334BA4) {
	__imp__sub_82334BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82334BB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82332c00
	ctx.lr = 0x82334BC4;
	sub_82332C00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82332c28
	ctx.lr = 0x82334BD4;
	sub_82332C28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333508
	ctx.lr = 0x82334BE4;
	sub_82333508(ctx, base);
	// lfs f0,880(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 880);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334c24
	if (ctx.cr6.eq) goto loc_82334C24;
	// lfs f13,876(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f11,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f9,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,888(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,884(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f5,f6,f9,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f5,0(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82334C24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82334c48
	if (ctx.cr6.eq) goto loc_82334C48;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,888(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82334C48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82334BA8) {
	__imp__sub_82334BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334C68) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82334ba8
	ctx.lr = 0x82334C90;
	sub_82334BA8(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-31048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82334C68) {
	__imp__sub_82334C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82334CE0;
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c00
	ctx.lr = 0x82334D00;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c28
	ctx.lr = 0x82334D0C;
	sub_82332C28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334ba8
	ctx.lr = 0x82334D28;
	sub_82334BA8(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-31048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r6,r11,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82334d74
	if (ctx.cr6.eq) goto loc_82334D74;
	// lfs f0,896(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82334d8c
	goto loc_82334D8C;
loc_82334D74:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334d88
	if (ctx.cr6.eq) goto loc_82334D88;
	// lfs f0,892(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 892);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82334d8c
	goto loc_82334D8C;
loc_82334D88:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82334D8C:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82334ddc
	if (ctx.cr6.eq) goto loc_82334DDC;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ble cr6,0x82334dc0
	if (!ctx.cr6.gt) goto loc_82334DC0;
	// lfs f12,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f10,f12,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82334ddc
	if (!ctx.cr6.gt) goto loc_82334DDC;
	// b 0x82334dd8
	goto loc_82334DD8;
loc_82334DC0:
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f9,f10,f13,f12
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82334ddc
	if (!ctx.cr6.lt) goto loc_82334DDC;
loc_82334DD8:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82334DDC:
	// lwz r11,792(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 792);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334e00
	if (ctx.cr6.eq) goto loc_82334E00;
	// lfs f0,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
loc_82334E00:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,15104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15104);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82334E2C;
	sub_823DE720(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfs f31,11804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-25208(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25208);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmadds f7,f8,f31,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f7,8(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82334E74;
	sub_823DE720(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmadds f13,f1,f31,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f2.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82334EB4;
	sub_823DE720(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmadds f6,f7,f31,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82334CD8) {
	__imp__sub_82334CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82334ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82334EE0;
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233505c
	if (ctx.cr6.eq) goto loc_8233505C;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x82334F10;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c28
	ctx.lr = 0x82334F1C;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,704(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,-14540(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11388(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11388);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f11,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// beq cr6,0x82334f80
	if (ctx.cr6.eq) goto loc_82334F80;
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334f80
	if (ctx.cr6.eq) goto loc_82334F80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f10,704(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f10,f12,f31
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f31.f64)));
	// fmuls f30,f9,f30
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
loc_82334F80:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82335000
	if (!ctx.cr6.lt) goto loc_82335000;
	// fdivs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// bl 0x822e97a8
	ctx.lr = 0x82334FB0;
	sub_822E97A8(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f8,f9,f29,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f12.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f7,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f7,f0,f11
	ctx.f6.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f5,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f3,f4,f29,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82335000:
	// fsubs f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsubs f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8233505c
	if (!ctx.cr6.gt) goto loc_8233505C;
	// fsubs f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// bl 0x822e97a8
	ctx.lr = 0x8233501C;
	sub_822E97A8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f7,f8,f29,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f12.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f6,f9,f11
	ctx.f5.f64 = double(float(-(ctx.f6.f64 * ctx.f9.f64 - ctx.f11.f64)));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f4,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmadds f2,f3,f29,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8233505C:
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

PPC_WEAK_FUNC(sub_82334ED8) {
	__imp__sub_82334ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f9,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82335070) {
	__imp__sub_82335070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823350D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823350D0) {
	__imp__sub_823350D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335130) {
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
	// bl 0x823de028
	ctx.lr = 0x82335148;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8233517C;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f9,f28,f11
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmuls f31,f6,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823351AC;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fsubs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// fmuls f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x823351C8;
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

PPC_WEAK_FUNC(sub_82335130) {
	__imp__sub_82335130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823351DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823351DC) {
	__imp__sub_823351DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823351E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f10,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823351E0) {
	__imp__sub_823351E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82335204) {
	__imp__sub_82335204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335208) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f1,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8233524c
	if (ctx.cr6.eq) goto loc_8233524C;
	// bl 0x822e97a8
	ctx.lr = 0x82335238;
	sub_822E97A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f12,f1,f0,f13
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8233524C:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82335208) {
	__imp__sub_82335208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335260) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8233532c
	if (ctx.cr6.eq) goto loc_8233532C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x8233532c
	if (!ctx.cr6.lt) goto loc_8233532C;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e97a8
	ctx.lr = 0x823352BC;
	sub_822E97A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fnmsubs f12,f1,f0,f13
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f0,14176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x822da518
	ctx.lr = 0x823352FC;
	sub_822DA518(ctx, base);
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f31,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f8.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f4,f31,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f0,f2,f31,f6
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8233532C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82335260) {
	__imp__sub_82335260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82335348) {
	__imp__sub_82335348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233537C) {
	__imp__sub_8233537C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82335388;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x823353A0;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c28
	ctx.lr = 0x823353AC;
	sub_82332C28(ctx, base);
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335400
	if (ctx.cr6.eq) goto loc_82335400;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f7,f12,f8,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f8,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f4,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f8,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82335400:
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f10,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82335380) {
	__imp__sub_82335380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335438) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// lfs f31,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822da650
	ctx.lr = 0x82335470;
	sub_822DA650(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f8,f31,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f1,f7,f31,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f0,f6,f31,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f13,f5,f30,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f2.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f12,f4,f30,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f1.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f11,f3,f30,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f0.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
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

PPC_WEAK_FUNC(sub_82335438) {
	__imp__sub_82335438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823354E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823354E4) {
	__imp__sub_823354E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823354E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823354F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82332c00
	ctx.lr = 0x8233550C;
	sub_82332C00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82332c28
	ctx.lr = 0x8233551C;
	sub_82332C28(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// rlwinm r10,r8,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// rlwinm r11,r8,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823355cc
	if (ctx.cr6.eq) goto loc_823355CC;
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r8,492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r9,29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 29, ctx.xer);
	// lwz r9,704(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// bne cr6,0x8233556c
	if (!ctx.cr6.eq) goto loc_8233556C;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8233557c
	goto loc_8233557C;
loc_8233556C:
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8233557C:
	// fcfid f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f13,-32352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32352);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x823355cc
	if (ctx.cr6.lt) goto loc_823355CC;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lfs f11,-32356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32356);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823355c4
	if (!ctx.cr6.lt) goto loc_823355C4;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// b 0x823355cc
	goto loc_823355CC;
loc_823355C4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_823355CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335604
	if (ctx.cr6.eq) goto loc_82335604;
	// lfs f13,360(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,364(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f6,368(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// b 0x82335638
	goto loc_82335638;
loc_82335604:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233563c
	if (ctx.cr6.eq) goto loc_8233563C;
	// lfs f13,396(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,400(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,404(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
loc_82335638:
	// stfs f5,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8233563C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333508
	ctx.lr = 0x82335648;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82335664
	if (ctx.cr6.eq) goto loc_82335664;
	// lfs f0,1140(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82335664:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823354E8) {
	__imp__sub_823354E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233566C) {
	__imp__sub_8233566C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82335678;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82332c00
	ctx.lr = 0x823356A0;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c28
	ctx.lr = 0x823356AC;
	sub_82332C28(ctx, base);
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823356cc
	if (ctx.cr6.eq) goto loc_823356CC;
	// addi r11,r3,408
	ctx.r11.s64 = ctx.r3.s64 + 408;
	// addi r10,r3,420
	ctx.r10.s64 = ctx.r3.s64 + 420;
	// b 0x823356ec
	goto loc_823356EC;
loc_823356CC:
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823356e4
	if (ctx.cr6.eq) goto loc_823356E4;
	// addi r11,r29,372
	ctx.r11.s64 = ctx.r29.s64 + 372;
	// addi r10,r29,384
	ctx.r10.s64 = ctx.r29.s64 + 384;
	// b 0x823356ec
	goto loc_823356EC;
loc_823356E4:
	// addi r11,r29,312
	ctx.r11.s64 = ctx.r29.s64 + 312;
	// addi r10,r29,324
	ctx.r10.s64 = ctx.r29.s64 + 324;
loc_823356EC:
	// lwz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f8,704(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	ctx.f8.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f30,f0,f8
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsubs f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fdivs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsel f31,f2,f0,f3
	ctx.f31.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fmadds f1,f12,f31,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f31,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f31,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f12,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f12,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82321048
	ctx.lr = 0x823357A4;
	sub_82321048(ctx, base);
	// lfs f0,40(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,336(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f10,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fdivs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f9.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmadds f1,f8,f2,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,340(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f6.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// lfs f11,344(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f2,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f5.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,348(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f4,352(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f12,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,356(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f12,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82335670) {
	__imp__sub_82335670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233583C) {
	__imp__sub_8233583C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82335848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82332c00
	ctx.lr = 0x82335864;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c28
	ctx.lr = 0x82335870;
	sub_82332C28(ctx, base);
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335890
	if (ctx.cr6.eq) goto loc_82335890;
	// lfs f13,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82335898
	goto loc_82335898;
loc_82335890:
	// lfs f13,432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,452(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f12.f64 = double(temp.f32);
loc_82335898:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsubs f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f4,f2,f6
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsel f2,f5,f13,f0
	ctx.f2.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f0,f3,f12,f0
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fmadds f13,f10,f2,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f7,f2,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f1,f2,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f7,56(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f0,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,36(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f3,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f11,f0,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f4,f0,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82335840) {
	__imp__sub_82335840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82335960;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x82335978;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x82335984;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r9,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// rlwinm r9,r9,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x823359c0
	if (ctx.cr6.eq) goto loc_823359C0;
	// lfs f31,448(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	ctx.f31.f64 = double(temp.f32);
	// b 0x823359d4
	goto loc_823359D4;
loc_823359C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823359d0
	if (ctx.cr6.eq) goto loc_823359D0;
	// lfs f31,444(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	ctx.f31.f64 = double(temp.f32);
	// b 0x823359d4
	goto loc_823359D4;
loc_823359D0:
	// lfs f31,440(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f31.f64 = double(temp.f32);
loc_823359D4:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82335a04
	if (!ctx.cr6.gt) goto loc_82335A04;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r28,1
	ctx.r28.s64 = 1;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x82335a08
	if (ctx.cr6.gt) goto loc_82335A08;
loc_82335A04:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82335A08:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82335a24
	if (ctx.cr6.eq) goto loc_82335A24;
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82335a28
	if (!ctx.cr6.eq) goto loc_82335A28;
loc_82335A24:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82335A28:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x82335a3c
	if (ctx.cr6.eq) goto loc_82335A3C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne cr6,0x82335a40
	if (!ctx.cr6.eq) goto loc_82335A40;
loc_82335A3C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82335A40:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r31,r11,29,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// bne cr6,0x82335a58
	if (!ctx.cr6.eq) goto loc_82335A58;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82335a84
	if (ctx.cr6.eq) goto loc_82335A84;
loc_82335A58:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82335a70
	if (ctx.cr6.eq) goto loc_82335A70;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82335a70
	if (ctx.cr6.eq) goto loc_82335A70;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82335a84
	if (!ctx.cr6.eq) goto loc_82335A84;
loc_82335A70:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823354e8
	ctx.lr = 0x82335A84;
	sub_823354E8(ctx, base);
loc_82335A84:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82335ab8
	if (ctx.cr6.eq) goto loc_82335AB8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82335ab8
	if (!ctx.cr6.eq) goto loc_82335AB8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82335ab8
	if (!ctx.cr6.eq) goto loc_82335AB8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82335ab8
	if (!ctx.cr6.eq) goto loc_82335AB8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82335670
	ctx.lr = 0x82335AB8;
	sub_82335670(ctx, base);
loc_82335AB8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82335840
	ctx.lr = 0x82335AC8;
	sub_82335840(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82335958) {
	__imp__sub_82335958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82335AD4) {
	__imp__sub_82335AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82335AE0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de014
	ctx.lr = 0x82335AE8;
	__savefpr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f23,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// beq cr6,0x82335d78
	if (ctx.cr6.eq) goto loc_82335D78;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x82335B10;
	sub_82332C00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82332c28
	ctx.lr = 0x82335B20;
	sub_82332C28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333508
	ctx.lr = 0x82335B30;
	sub_82333508(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f28,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82335bd8
	if (ctx.cr6.eq) goto loc_82335BD8;
	// lfs f0,704(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x82335b58
	if (!ctx.cr6.gt) goto loc_82335B58;
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335d78
	if (!ctx.cr6.eq) goto loc_82335D78;
loc_82335B58:
	// lfs f0,704(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,940(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f7,948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,936(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,944(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f5,952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f3,956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f28,f0
	ctx.f8.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fsubs f4,f28,f0
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f13,908(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f9,912(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f28,f0
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f31,916(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f26,920(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f24,f28,f0
	ctx.f24.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f25,924(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f0,928(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f30,f12,f13,f10
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f29,f8,f9,f6
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f27,f4,f31,f2
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f26,f1,f26,f11
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f11.f64));
	// fmadds f25,f7,f25,f5
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f5.f64));
	// fmadds f24,f24,f0,f3
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f3.f64));
	// b 0x82335bf0
	goto loc_82335BF0;
loc_82335BD8:
	// lfs f30,908(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,912(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,916(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,920(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,924(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,928(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	ctx.f24.f64 = double(temp.f32);
loc_82335BF0:
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x82335c70
	if (!ctx.cr6.gt) goto loc_82335C70;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82335c48
	if (!ctx.cr6.lt) goto loc_82335C48;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
loc_82335C48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,932(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f11,f31,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f31,f9,f12,f28
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f28.f64));
loc_82335C70:
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r29,264
	ctx.r3.s64 = ctx.r29.s64 + 264;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x822d7700
	ctx.lr = 0x82335C80;
	sub_822D7700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fneg f13,f30
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f31,f25
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f31,f24
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f0,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f6,f28,f10
	ctx.f6.f64 = double(float(ctx.f28.f64 / ctx.f10.f64));
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f5,f30
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// fsubs f9,f1,f30
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// fsubs f8,f13,f5
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsel f6,f10,f30,f5
	ctx.f6.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f5.f64;
	// fsel f5,f9,f30,f1
	ctx.f5.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f1.f64;
	// fsel f0,f8,f13,f6
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsel f13,f7,f13,f5
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x822d44d0
	ctx.lr = 0x82335CF8;
	sub_822D44D0(ctx, base);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d44d0
	ctx.lr = 0x82335D10;
	sub_822D44D0(ctx, base);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f26
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stfs f1,104(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d4508
	ctx.lr = 0x82335D44;
	sub_822D4508(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4508
	ctx.lr = 0x82335D5C;
	sub_822D4508(ctx, base);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f9,264(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,108(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f8,268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f7,272(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
loc_82335D78:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de060
	ctx.lr = 0x82335D84;
	__restfpr_23(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82335AD8) {
	__imp__sub_82335AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335dd8
	if (!ctx.cr6.lt) goto loc_82335DD8;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335dd8
	if (!ctx.cr6.lt) goto loc_82335DD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82335DD8:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// ble cr6,0x82335e0c
	if (!ctx.cr6.gt) goto loc_82335E0C;
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82335e2c
	if (!ctx.cr6.gt) goto loc_82335E2C;
	// b 0x82335e28
	goto loc_82335E28;
loc_82335E0C:
	// fneg f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82335e2c
	if (!ctx.cr6.lt) goto loc_82335E2C;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335e2c
	if (!ctx.cr6.lt) goto loc_82335E2C;
loc_82335E28:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82335E2C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82335e44
	if (!ctx.cr6.gt) goto loc_82335E44;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f1,f3,f13
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f3.f64 - ctx.f13.f64)));
	// b 0x82335e54
	goto loc_82335E54;
loc_82335E44:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335e58
	if (!ctx.cr6.lt) goto loc_82335E58;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f3,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f13.f64));
loc_82335E54:
	// stfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82335E58:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fnmsubs f10,f12,f5,f13
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// ble cr6,0x82335e8c
	if (!ctx.cr6.gt) goto loc_82335E8C;
	// fnmsubs f12,f1,f6,f10
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f6.f64 - ctx.f10.f64)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82335ea0
	if (!ctx.cr6.lt) goto loc_82335EA0;
	// b 0x82335e9c
	goto loc_82335E9C;
loc_82335E8C:
	// fmadds f12,f1,f6,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82335ea0
	if (!ctx.cr6.gt) goto loc_82335EA0;
loc_82335E9C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82335EA0:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f4
	ctx.cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// ble cr6,0x82335eb4
	if (!ctx.cr6.gt) goto loc_82335EB4;
	// stfs f4,0(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82335EB4:
	// fneg f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82335D88) {
	__imp__sub_82335D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82335ED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x82335EE4;
	sub_82332C00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82332c28
	ctx.lr = 0x82335EF4;
	sub_82332C28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333508
	ctx.lr = 0x82335F04;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82335fd4
	if (ctx.cr6.eq) goto loc_82335FD4;
	// lfs f13,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,1180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,1244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1244);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,1252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,1184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f4,1188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f10,704(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// fmadds f4,f5,f10,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f3,f7,f10,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f5,f2,f10,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f1,f10,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f11.f64));
	// ble cr6,0x82335fd4
	if (!ctx.cr6.gt) goto loc_82335FD4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,76
	ctx.r7.s64 = ctx.r30.s64 + 76;
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// lfs f7,25024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25024);
	ctx.f7.f64 = double(temp.f32);
loc_82335F7C:
	// fcmpu cr6,f9,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// ble cr6,0x82335f90
	if (!ctx.cr6.gt) goto loc_82335F90;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// b 0x82335f98
	goto loc_82335F98;
loc_82335F90:
	// fmr f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f9.f64;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
loc_82335F98:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lfs f2,900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82335d88
	ctx.lr = 0x82335FA8;
	sub_82335D88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfs f2,904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82335d88
	ctx.lr = 0x82335FBC;
	sub_82335D88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82335fcc
	if (ctx.cr6.eq) goto loc_82335FCC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82335fd4
	if (!ctx.cr6.eq) goto loc_82335FD4;
loc_82335FCC:
	// fcmpu cr6,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x82335f7c
	if (ctx.cr6.gt) goto loc_82335F7C;
loc_82335FD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82335EC8) {
	__imp__sub_82335EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82335FDC) {
	__imp__sub_82335FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82335FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82335FE8;
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f13,-22120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-22124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// lwz r11,-6352(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6352);
	// lfs f12,5816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5816);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,-16928(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -16928);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r30,120
	ctx.r29.s64 = ctx.r30.s64 + 120;
	// fmuls f30,f6,f11
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmadds f5,f7,f13,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmadds f4,f8,f12,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823349b8
	ctx.lr = 0x82336070;
	sub_823349B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f3,f1,f31
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f3,120(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82334ad8
	ctx.lr = 0x82336090;
	sub_82334AD8(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// fmuls f2,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f2,124(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-6432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6432);
	// lfs f0,-25204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25204);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82334ad8
	ctx.lr = 0x823360BC;
	sub_82334AD8(ctx, base);
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f1,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// stfs f12,128(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// lfs f11,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x8233612c
	if (!ctx.cr6.gt) goto loc_8233612C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x823360E4;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x823360F0;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,816(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f9,f10,f12,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f6,4(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,8(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8233612C:
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

PPC_WEAK_FUNC(sub_82335FE0) {
	__imp__sub_82335FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336140) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,0(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f31,4(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f31,8(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f13,704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823361c0
	if (!ctx.cr6.gt) goto loc_823361C0;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_823361C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82335130
	ctx.lr = 0x823361CC;
	sub_82335130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x823361ec
	if (ctx.cr6.eq) goto loc_823361EC;
	// bl 0x822e97a8
	ctx.lr = 0x823361E0;
	sub_822E97A8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f1,f30,f0
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_823361EC:
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82335380
	ctx.lr = 0x82336228;
	sub_82335380(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334cd8
	ctx.lr = 0x82336234;
	sub_82334CD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334ed8
	ctx.lr = 0x82336240;
	sub_82334ED8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

PPC_WEAK_FUNC(sub_82336140) {
	__imp__sub_82336140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336260) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
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
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 704);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f13,f11,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823362d8
	if (!ctx.cr6.gt) goto loc_823362D8;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_823362D8:
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82335260
	ctx.lr = 0x82336304;
	sub_82335260(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82335438
	ctx.lr = 0x82336310;
	sub_82335438(ctx, base);
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

PPC_WEAK_FUNC(sub_82336260) {
	__imp__sub_82336260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82336330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82335958
	ctx.lr = 0x82336344;
	sub_82335958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82335ad8
	ctx.lr = 0x8233634C;
	sub_82335AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82335ec8
	ctx.lr = 0x82336354;
	sub_82335EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82335fe0
	ctx.lr = 0x8233635C;
	sub_82335FE0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336370
	if (ctx.cr6.eq) goto loc_82336370;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336140
	ctx.lr = 0x82336370;
	sub_82336140(ctx, base);
loc_82336370:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82336384
	if (ctx.cr6.eq) goto loc_82336384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336260
	ctx.lr = 0x82336384;
	sub_82336260(ctx, base);
loc_82336384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336328) {
	__imp__sub_82336328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233638C) {
	__imp__sub_8233638C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823363cc
	if (!ctx.cr6.eq) goto loc_823363CC;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6652);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82336448
	goto loc_82336448;
loc_823363CC:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x823363f0
	if (!ctx.cr6.eq) goto loc_823363F0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-22132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22132);
	// lwz r10,-22100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22100);
	// b 0x8233642c
	goto loc_8233642C;
loc_823363F0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82336414
	if (ctx.cr6.eq) goto loc_82336414;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6568);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82336448
	goto loc_82336448;
loc_82336414:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16620);
	// lwz r10,-16912(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16912);
loc_8233642C:
	// lfs f13,704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f9,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmuls f31,f8,f2
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
loc_82336448:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6368);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82336460
	if (!ctx.cr6.gt) goto loc_82336460;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82336460:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82336470;
	sub_823DE720(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17872);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f30,f0,f13
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823de720
	ctx.lr = 0x8233648C;
	sub_823DE720(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,6040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8336(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8336);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82336390) {
	__imp__sub_82336390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823364C8) {
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
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823364f8
	if (!ctx.cr6.eq) goto loc_823364F8;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6652);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82336574
	goto loc_82336574;
loc_823364F8:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x8233651c
	if (!ctx.cr6.eq) goto loc_8233651C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-22132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22132);
	// lwz r10,-22100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22100);
	// b 0x82336558
	goto loc_82336558;
loc_8233651C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82336540
	if (ctx.cr6.eq) goto loc_82336540;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6568);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82336574
	goto loc_82336574;
loc_82336540:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16620);
	// lwz r10,-16912(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16912);
loc_82336558:
	// lfs f13,704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f9,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmuls f31,f8,f2
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
loc_82336574:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6368);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8233658c
	if (!ctx.cr6.gt) goto loc_8233658C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8233658C:
	// bl 0x823de720
	ctx.lr = 0x82336590;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
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

PPC_WEAK_FUNC(sub_823364C8) {
	__imp__sub_823364C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823365AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823365AC) {
	__imp__sub_823365AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823365B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823365B8;
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823366e8
	if (ctx.cr6.eq) goto loc_823366E8;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x823365E4;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c28
	ctx.lr = 0x823365F0;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,704(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f30,f13,f0,f31
	ctx.f30.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8233662c
	if (ctx.cr6.eq) goto loc_8233662C;
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233662c
	if (ctx.cr6.eq) goto loc_8233662C;
	// fmadds f11,f13,f0,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmuls f30,f11,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
loc_8233662C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f13,-14540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14540);
	ctx.f13.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823366a0
	if (!ctx.cr6.lt) goto loc_823366A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x822e97a8
	ctx.lr = 0x8233666C;
	sub_822E97A8(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f0,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823366A0:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-26356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26356);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f31
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823366e8
	if (!ctx.cr6.gt) goto loc_823366E8;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// bl 0x822e97a8
	ctx.lr = 0x823366C0;
	sub_822E97A8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f9,f13,f10,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_823366E8:
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

PPC_WEAK_FUNC(sub_823365B0) {
	__imp__sub_823365B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823366F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,792(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233671c
	if (ctx.cr6.eq) goto loc_8233671C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82336720
	if (!ctx.cr6.eq) goto loc_82336720;
loc_8233671C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82336720:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823366F8) {
	__imp__sub_823366F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336728) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82332c00
	ctx.lr = 0x82336750;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x8233675C;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,792(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x82336780
	if (ctx.cr6.eq) goto loc_82336780;
	// lfs f0,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82336784
	if (!ctx.cr6.eq) goto loc_82336784;
loc_82336780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82336784:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823367cc
	if (ctx.cr6.eq) goto loc_823367CC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334ba8
	ctx.lr = 0x823367A0;
	sub_82334BA8(ctx, base);
	// lfs f0,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823367CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82336728) {
	__imp__sub_82336728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823367E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823367F0;
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c00
	ctx.lr = 0x82336810;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c28
	ctx.lr = 0x8233681C;
	sub_82332C28(ctx, base);
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336844
	if (ctx.cr6.eq) goto loc_82336844;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82336848
	if (!ctx.cr6.eq) goto loc_82336848;
loc_82336844:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82336848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336988
	if (ctx.cr6.eq) goto loc_82336988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336728
	ctx.lr = 0x82336864;
	sub_82336728(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233687c
	if (ctx.cr6.eq) goto loc_8233687C;
	// lfs f0,896(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82336898
	goto loc_82336898;
loc_8233687C:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336890
	if (ctx.cr6.eq) goto loc_82336890;
	// lfs f0,892(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 892);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82336898
	goto loc_82336898;
loc_82336890:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
loc_82336898:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823368e8
	if (ctx.cr6.eq) goto loc_823368E8;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ble cr6,0x823368cc
	if (!ctx.cr6.gt) goto loc_823368CC;
	// lfs f12,15104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x823368e8
	if (!ctx.cr6.gt) goto loc_823368E8;
	// b 0x823368e4
	goto loc_823368E4;
loc_823368CC:
	// lfs f12,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,15104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15104);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f10,f11,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x823368e8
	if (!ctx.cr6.lt) goto loc_823368E8;
loc_823368E4:
	// stfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_823368E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f11,460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f0,-25208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25208);
	ctx.f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f30,f7,f11
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// bl 0x823de720
	ctx.lr = 0x8233692C;
	sub_823DE720(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,11804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f6,f30
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmadds f3,f4,f31,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f3,4(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82336974;
	sub_823DE720(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmadds f9,f10,f31,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f9,0(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82336988:
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

PPC_WEAK_FUNC(sub_823367E8) {
	__imp__sub_823367E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823369A0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x823369A8;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x823369C0;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x823369CC;
	sub_82332C28(ctx, base);
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336af8
	if (ctx.cr6.eq) goto loc_82336AF8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f0,-22124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6352(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6352);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,5816(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5816);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-16928(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -16928);
	// fmadds f6,f8,f13,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f29,f5,f11
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmadds f4,f7,f12,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fadds f28,f4,f0
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82336390
	ctx.lr = 0x82336A48;
	sub_82336390(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f1,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823364c8
	ctx.lr = 0x82336A64;
	sub_823364C8(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-6432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6432);
	// lfs f0,-25204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25204);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f29
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// bl 0x823364c8
	ctx.lr = 0x82336A8C;
	sub_823364C8(ctx, base);
	// fneg f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fsel f13,f2,f1,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// beq cr6,0x82336ac8
	if (ctx.cr6.eq) goto loc_82336AC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,816(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 816);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fnmsubs f9,f10,f0,f12
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fmuls f30,f30,f9
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f31,f31,f9
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
loc_82336AC8:
	// fmuls f12,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f4,8(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82336AF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82336B04;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336998) {
	__imp__sub_82336998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82336B10;
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82336bd8
	if (!ctx.cr6.gt) goto loc_82336BD8;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82336bd8
	if (!ctx.cr6.eq) goto loc_82336BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x82336B54;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x82336B60;
	sub_82332C28(ctx, base);
	// lfs f0,820(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82336bd8
	if (!ctx.cr6.gt) goto loc_82336BD8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f13,-22124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22124);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f10,f0,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82336390
	ctx.lr = 0x82336BB0;
	sub_82336390(ctx, base);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fnmsubs f8,f1,f31,f9
	ctx.f8.f64 = double(float(-(ctx.f1.f64 * ctx.f31.f64 - ctx.f9.f64)));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f2,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823364c8
	ctx.lr = 0x82336BCC;
	sub_823364C8(ctx, base);
	// lfs f7,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f1,f31,f7
	ctx.f6.f64 = double(float(-(ctx.f1.f64 * ctx.f31.f64 - ctx.f7.f64)));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82336BD8:
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

PPC_WEAK_FUNC(sub_82336B08) {
	__imp__sub_82336B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336BE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
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
	// bl 0x823365b0
	ctx.lr = 0x82336C1C;
	sub_823365B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823367e8
	ctx.lr = 0x82336C28;
	sub_823367E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336998
	ctx.lr = 0x82336C34;
	sub_82336998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336b08
	ctx.lr = 0x82336C40;
	sub_82336B08(ctx, base);
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

PPC_WEAK_FUNC(sub_82336BE8) {
	__imp__sub_82336BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82336C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-1596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1596);
	// bl 0x822e1f80
	ctx.lr = 0x82336C78;
	sub_822E1F80(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r29,r11,-1612
	ctx.r29.s64 = ctx.r11.s64 + -1612;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82336C84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e1f80
	ctx.lr = 0x82336C90;
	sub_822E1F80(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82336c84
	if (ctx.cr6.lt) goto loc_82336C84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336C58) {
	__imp__sub_82336C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336CA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336c58
	sub_82336C58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336CA8) {
	__imp__sub_82336CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336CB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82336c58
	sub_82336C58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336CB0) {
	__imp__sub_82336CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336CB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82336c58
	sub_82336C58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336CB8) {
	__imp__sub_82336CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336CC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82336c58
	sub_82336C58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336CC0) {
	__imp__sub_82336CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336CC8) {
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
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8223c348
	ctx.lr = 0x82336CEC;
	sub_8223C348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336d00
	if (!ctx.cr6.eq) goto loc_82336D00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336d88
	goto loc_82336D88;
loc_82336D00:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_82336D0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82336d0c
	if (!ctx.cr6.eq) goto loc_82336D0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,-25180
	ctx.r6.s64 = ctx.r11.s64 + -25180;
	// addi r4,r10,2128
	ctx.r4.s64 = ctx.r10.s64 + 2128;
	// addi r3,r9,2164
	ctx.r3.s64 = ctx.r9.s64 + 2164;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e17e0
	ctx.lr = 0x82336D40;
	sub_822E17E0(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x822e1fa8
	ctx.lr = 0x82336D48;
	sub_822E1FA8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r1,816
	ctx.r11.s64 = ctx.r1.s64 + 816;
	// addi r10,r10,-25200
	ctx.r10.s64 = ctx.r10.s64 + -25200;
loc_82336D54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82336d78
	if (ctx.cr6.eq) goto loc_82336D78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82336d54
	if (ctx.cr6.eq) goto loc_82336D54;
loc_82336D78:
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// subfe r10,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82336D88:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
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

PPC_WEAK_FUNC(sub_82336CC8) {
	__imp__sub_82336CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82336DA0) {
	__imp__sub_82336DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82336DA4) {
	__imp__sub_82336DA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-9416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9416, ctx.r11.u32);
	// bl 0x8227d380
	ctx.lr = 0x82336DD4;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8188
	ctx.lr = 0x82336DDC;
	sub_822E8188(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-25116
	ctx.r4.s64 = ctx.r9.s64 + -25116;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x823dfa98
	ctx.lr = 0x82336DF4;
	sub_823DFA98(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe. r31,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82336e3c
	if (ctx.cr0.eq) goto loc_82336E3C;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e7e98
	ctx.lr = 0x82336E10;
	sub_822E7E98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82336cc8
	ctx.lr = 0x82336E20;
	sub_82336CC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336e3c
	if (!ctx.cr6.eq) goto loc_82336E3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25168
	ctx.r4.s64 = ctx.r11.s64 + -25168;
	// bl 0x8223c2a8
	ctx.lr = 0x82336E3C;
	sub_8223C2A8(ctx, base);
loc_82336E3C:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// bl 0x822e1f18
	ctx.lr = 0x82336E4C;
	sub_822E1F18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3c08
	ctx.lr = 0x82336E54;
	sub_822D3C08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233e058
	ctx.lr = 0x82336E64;
	sub_8233E058(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82336DA8) {
	__imp__sub_82336DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336E78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-1400
	ctx.r7.s64 = ctx.r8.s64 + -1400;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-1400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1400, ctx.r9.u32);
	// stb r11,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r11.u8);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82336E78) {
	__imp__sub_82336E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82336E9C) {
	__imp__sub_82336E9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82336EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82336EA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82283000
	ctx.lr = 0x82336EB8;
	sub_82283000(ctx, base);
	// bl 0x8233b570
	ctx.lr = 0x82336EBC;
	sub_8233B570(ctx, base);
	// bl 0x8233b5c8
	ctx.lr = 0x82336EC0;
	sub_8233B5C8(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
	// addi r7,r8,-1400
	ctx.r7.s64 = ctx.r8.s64 + -1400;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r10,-1400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1400, ctx.r10.u32);
	// lwz r11,-9404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9404);
	// lwz r10,-9384(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9384);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r9,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r9.u8);
	// lbz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82336f18
	if (!ctx.cr6.eq) goto loc_82336F18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
	// bl 0x82280900
	ctx.lr = 0x82336F10;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82336F18:
	// bl 0x82178460
	ctx.lr = 0x82336F1C;
	sub_82178460(ctx, base);
	// bl 0x822dbe08
	ctx.lr = 0x82336F20;
	sub_822DBE08(ctx, base);
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,12
	ctx.r26.s64 = 12;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r11,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r11.u32);
	// beq cr6,0x82336f40
	if (ctx.cr6.eq) goto loc_82336F40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82125cf8
	ctx.lr = 0x82336F40;
	sub_82125CF8(ctx, base);
loc_82336F40:
	// bl 0x82128540
	ctx.lr = 0x82336F44;
	sub_82128540(ctx, base);
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lwz r11,-31448(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31448);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// clrlwi r10,r8,28
	ctx.r10.u64 = ctx.r8.u32 & 0xF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,-31448(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31448, ctx.r3.u32);
	// bl 0x82127588
	ctx.lr = 0x82336F64;
	sub_82127588(ctx, base);
	// bl 0x8211fd28
	ctx.lr = 0x82336F68;
	sub_8211FD28(ctx, base);
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// lbz r6,29088(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 29088);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82336f80
	if (ctx.cr6.eq) goto loc_82336F80;
	// bl 0x8233b640
	ctx.lr = 0x82336F7C;
	sub_8233B640(ctx, base);
	// b 0x82336f84
	goto loc_82336F84;
loc_82336F80:
	// bl 0x82310110
	ctx.lr = 0x82336F84;
	sub_82310110(ctx, base);
loc_82336F84:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233da30
	ctx.lr = 0x82336F94;
	sub_8233DA30(ctx, base);
	// bl 0x8211fd30
	ctx.lr = 0x82336F98;
	sub_8211FD30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233db28
	ctx.lr = 0x82336FA0;
	sub_8233DB28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-9404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9404);
	// bl 0x822e1f80
	ctx.lr = 0x82336FAC;
	sub_822E1F80(ctx, base);
	// bl 0x822834c0
	ctx.lr = 0x82336FB0;
	sub_822834C0(ctx, base);
	// bl 0x822dbf48
	ctx.lr = 0x82336FB4;
	sub_822DBF48(ctx, base);
	// bl 0x8233fc40
	ctx.lr = 0x82336FB8;
	sub_8233FC40(ctx, base);
	// bl 0x8217cc78
	ctx.lr = 0x82336FBC;
	sub_8217CC78(ctx, base);
	// bl 0x8223dde0
	ctx.lr = 0x82336FC0;
	sub_8223DDE0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82337000
	if (!ctx.cr6.eq) goto loc_82337000;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82337000
	if (ctx.cr6.eq) goto loc_82337000;
	// bl 0x8233ed30
	ctx.lr = 0x82336FD4;
	sub_8233ED30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// addi r4,r10,-25200
	ctx.r4.s64 = ctx.r10.s64 + -25200;
	// addi r3,r9,-25108
	ctx.r3.s64 = ctx.r9.s64 + -25108;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8233eaf0
	ctx.lr = 0x82336FFC;
	sub_8233EAF0(ctx, base);
	// bl 0x8233ec40
	ctx.lr = 0x82337000;
	sub_8233EC40(ctx, base);
loc_82337000:
	// bl 0x82120af8
	ctx.lr = 0x82337004;
	sub_82120AF8(ctx, base);
	// li r11,-129
	ctx.r11.s64 = -129;
	// stwx r11,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r11.u32);
	// bl 0x82282ae0
	ctx.lr = 0x82337010;
	sub_82282AE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82336EA0) {
	__imp__sub_82336EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337018) {
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
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1384
	ctx.r10.s64 = ctx.r11.s64 + -1384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
loc_82337044:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82337044
	if (!ctx.cr6.eq) goto loc_82337044;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-31440
	ctx.r7.s64 = ctx.r9.s64 + -31440;
	// ori r6,r8,57308
	ctx.r6.u64 = ctx.r8.u64 | 57308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x8223e178
	ctx.lr = 0x8233707C;
	sub_8223E178(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823370b4
	if (ctx.cr6.eq) goto loc_823370B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223dd80
	ctx.lr = 0x82337090;
	sub_8223DD80(ctx, base);
	// bl 0x8223e0d0
	ctx.lr = 0x82337094;
	sub_8223E0D0(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8233709C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8233709c
	if (!ctx.cr6.eq) goto loc_8233709C;
	// b 0x823370f4
	goto loc_823370F4;
loc_823370B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c348
	ctx.lr = 0x823370C0;
	sub_8223C348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823370d4
	if (!ctx.cr6.eq) goto loc_823370D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82337100
	goto loc_82337100;
loc_823370D4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_823370E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x823370e0
	if (!ctx.cr6.eq) goto loc_823370E0;
loc_823370F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ac30
	ctx.lr = 0x823370FC;
	sub_8220AC30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82337100:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
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

PPC_WEAK_FUNC(sub_82337018) {
	__imp__sub_82337018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r31,r11,-1400
	ctx.r31.s64 = ctx.r11.s64 + -1400;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233714c
	if (ctx.cr6.eq) goto loc_8233714C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82336ea0
	ctx.lr = 0x82337148;
	sub_82336EA0(ctx, base);
	// b 0x8233720c
	goto loc_8233720C;
loc_8233714C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337170
	if (!ctx.cr6.eq) goto loc_82337170;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82337170:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82337018
	ctx.lr = 0x8233717C;
	sub_82337018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337210
	if (ctx.cr6.eq) goto loc_82337210;
	// bl 0x82367820
	ctx.lr = 0x82337190;
	sub_82367820(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823371d0
	if (ctx.cr6.eq) goto loc_823371D0;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,-380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -380);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e8058
	ctx.lr = 0x823371B8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823371d0
	if (!ctx.cr6.eq) goto loc_823371D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82336ea0
	ctx.lr = 0x823371CC;
	sub_82336EA0(ctx, base);
	// b 0x8233720c
	goto loc_8233720C;
loc_823371D0:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823371f4
	if (ctx.cr6.eq) goto loc_823371F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-25064
	ctx.r3.s64 = ctx.r11.s64 + -25064;
	// b 0x823371fc
	goto loc_823371FC;
loc_823371F4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-25072
	ctx.r3.s64 = ctx.r11.s64 + -25072;
loc_823371FC:
	// bl 0x822e84f0
	ctx.lr = 0x82337200;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x8233720C;
	sub_8227CF18(ctx, base);
loc_8233720C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82337210:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82337118) {
	__imp__sub_82337118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82337224) {
	__imp__sub_82337224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337228) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x8233724C;
	sub_8236A638(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// addi r8,r10,-1400
	ctx.r8.s64 = ctx.r10.s64 + -1400;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,-1400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1400, ctx.r31.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,-9384(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9384);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82337278
	if (!ctx.cr6.eq) goto loc_82337278;
	// bl 0x82337118
	ctx.lr = 0x82337278;
	sub_82337118(ctx, base);
loc_82337278:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82337228) {
	__imp__sub_82337228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233728C) {
	__imp__sub_8233728C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337290) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x823372AC;
	sub_8236A638(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// addi r7,r9,-1400
	ctx.r7.s64 = ctx.r9.s64 + -1400;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-1400(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1400, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,-9384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9384);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823372dc
	if (!ctx.cr6.eq) goto loc_823372DC;
	// bl 0x82337118
	ctx.lr = 0x823372DC;
	sub_82337118(ctx, base);
loc_823372DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82337290) {
	__imp__sub_82337290(ctx, base);
}

